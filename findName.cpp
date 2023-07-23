#include <string>
#include<iostream>

using namespace std;

template<class T>
T remove_slash(T const& path_of_file, T const& d_slash = "/\\")
{
    size_t index_of_slash = path_of_file.find_last_of(d_slash);
    string file_name = path_of_file.substr(index_of_slash + 1);
    return file_name;
}
template<class T>
T extension_removal(T const& name_of_file)
{
    typename T::size_type const period_index(name_of_file.find_last_of('.'));
    string filename = name_of_file.substr(0, period_index);
    return filename;

}

int main() {
    string filepath1 = remove_slash<std::string>("C:\\Users\\Win 10\\Documents\\filename.md");
    string filepath2 = extension_removal<std::string>("C:\\Users\\Win 10\\Documents\\filename.md");
    cout << remove_slash(filepath1) << endl;
    cout << extension_removal(filepath2) << endl;
    cout << extension_removal(remove_slash(filepath1)) << endl;
}