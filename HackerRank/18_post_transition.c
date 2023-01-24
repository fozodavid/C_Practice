#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 6

struct package
{
	char* id;
	int weight;
};

typedef struct package package;

struct post_office
{
	int min_weight;
	int max_weight;
	package* packages;
	int packages_count;
};

typedef struct post_office post_office;

struct town
{
	char* name;
	post_office* offices;
	int offices_count;
};

typedef struct town town;

void print_all_packages(town t) {
  printf("%s:\n", t.name);
  int i, j;
  for (i = 0; i < t.offices_count; i++) {
    printf("\t%d:\n", i);
    for (j = 0; j < t.offices[i].packages_count; j++) {
      printf("\t\t%s\n", t.offices[i].packages[j].id);
    }
  }
}

// TODO: doesn't send
void send_all_acceptable_packages(town* source, int source_office_index, town* target, int target_office_index) {
  post_office s_office = source -> offices[source_office_index];
  post_office t_office = target -> offices[target_office_index];

  package temp = {id: "", weight: 0};

  int i, j;
  int * send_indexes = calloc(64, sizeof(int));
  int curr_send_i = 0;
  int total_packages = 0;

  int box_weight, target_min, target_max;
  for (i = 0; i < s_office.packages_count; i++) {
    box_weight = s_office.packages[i].weight;
    target_min = t_office.min_weight;
    target_max = t_office.max_weight;

    if (box_weight <= target_max && box_weight >= target_min) {
      send_indexes[curr_send_i] = i;
      curr_send_i++;
    }
  }
  total_packages = curr_send_i;

  t_office.packages = realloc(t_office.packages, (t_office.packages_count + total_packages) * sizeof(package));
  for (i = 0; i < total_packages; i++) {
    t_office.packages[t_office.packages_count + i] = s_office.packages[send_indexes[i]];
  }

  for (i = 0; i < total_packages; i++) {
    for (j = send_indexes[i]; j < s_office.packages_count - i - 1; j++) {
      temp = s_office.packages[j];
      s_office.packages[j] = s_office.packages[j+1];
      s_office.packages[j+1] = temp;
    }
  }

  s_office.packages = realloc(s_office.packages, (s_office.packages_count - total_packages) * sizeof(package));
  t_office.packages_count += total_packages;
  s_office.packages_count -= total_packages;

  source -> offices[source_office_index] = s_office;
  target -> offices[target_office_index] = t_office;
  free(send_indexes);
}

town town_with_most_packages(town* towns, int towns_count) {
  int i, j;
  int * packages = calloc(towns_count, sizeof(int));

  for (i = 0; i < towns_count; i++) {
    for (j = 0; j < towns[i].offices_count; j++) {
      packages[i] += towns[i].offices[j].packages_count;
    }
  }

  int max, max_index;
  max = max_index = 0;
  for (i = 0; i < towns_count; i++) {
    if (packages[i] > max) {
      max = packages[i];
      max_index = i;
    }
  }

  free(packages);
  return towns[max_index];
}

int name_check(char * a, char * b) {
  int i;
  for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
    if (a[i+1] == '\0' && b[i+1] != '\0') return 0;
    if (a[i+1] != '\0' && b[i+1] == '\0') return 0;
    if (a[i] != b[i])  return 0;
  }
  return 1;
}

town* find_town(town* towns, int towns_count, char* name) {
  int i;
  for (i = 0; i < towns_count; i++) {
    if (name_check(towns[i].name,name)) {
      return &towns[i];
    }
  }
  return &towns[0];
}

int main()
{
	int towns_count;
	scanf("%d", &towns_count);
	town* towns = malloc(sizeof(town)*towns_count);
	for (int i = 0; i < towns_count; i++) {
		towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);
		scanf("%s", towns[i].name);
		scanf("%d", &towns[i].offices_count);
		towns[i].offices = malloc(sizeof(post_office)*towns[i].offices_count);
		for (int j = 0; j < towns[i].offices_count; j++) {
			scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);
			towns[i].offices[j].packages = malloc(sizeof(package)*towns[i].offices[j].packages_count);
			for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
				towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
				scanf("%s", towns[i].offices[j].packages[k].id);
				scanf("%d", &towns[i].offices[j].packages[k].weight);
			}
		}
	}
	int queries;
	scanf("%d", &queries);
	char town_name[MAX_STRING_LENGTH];
	while (queries--) {
		int type;
		scanf("%d", &type);
		switch (type) {
		case 1:
			scanf("%s", town_name);
			town* t = find_town(towns, towns_count, town_name);
			print_all_packages(*t);
			break;
		case 2:
			scanf("%s", town_name);
			town* source = find_town(towns, towns_count, town_name);
			int source_index;
			scanf("%d", &source_index);
			scanf("%s", town_name);
			town* target = find_town(towns, towns_count, town_name);
			int target_index;
			scanf("%d", &target_index);
			send_all_acceptable_packages(source, source_index, target, target_index);
			break;
		case 3:
			printf("Town with the most number of packages is %s\n", town_with_most_packages(towns, towns_count).name);
			break;
		}
	}
	return 0;
}

