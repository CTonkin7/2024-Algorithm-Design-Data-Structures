#ifndef SET
#define SET

#include <vector>

template <class T>
class Set {
    private:
        std::vector<T> members;
    public:
        void add(T member);
        bool isMember(T member);
        void remove(T member);
};

template <class T>
void Set<T>::add(T newMember) {
    // check if already a member
    if (!isMember(newMember))
        // if not add it
        members.push_back(newMember);
}

template <class T>
bool Set<T>::isMember(T checkMember) {
    // see if it is in the members vector
    // does vector already have this function? Not directly
    for (size_t i=0; i < members.size(); i++) {
        if(members.at(i) == checkMember) 
            return true;
    }
    return false;
}

template <class T>
void Set<T>::remove(T deleteMember) {
    // does vector already have this?
}
#endif