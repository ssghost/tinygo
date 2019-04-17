
#include <clang-c/Index.h> // if this fails, install libclang-8-dev

CXCursor tinygo_clang_getTranslationUnitCursor(CXTranslationUnit tu) {
	return clang_getTranslationUnitCursor(tu);
}

unsigned tinygo_clang_visitChildren(CXCursor parent, CXCursorVisitor visitor, CXClientData client_data) {
	return clang_visitChildren(parent, visitor, client_data);
}

CXString tinygo_clang_getCursorSpelling(CXCursor c) {
	return clang_getCursorSpelling(c);
}

enum CXCursorKind tinygo_clang_getCursorKind(CXCursor c) {
	return clang_getCursorKind(c);
}

CXType tinygo_clang_getCursorType(CXCursor c) {
	return clang_getCursorType(c);
}

CXCursor tinygo_clang_getTypeDeclaration(CXType t) {
	return clang_getTypeDeclaration(t);
}

CXType tinygo_clang_getTypedefDeclUnderlyingType(CXCursor c) {
	return clang_getTypedefDeclUnderlyingType(c);
}

CXType tinygo_clang_getCursorResultType(CXCursor c) {
	return clang_getCursorResultType(c);
}

int tinygo_clang_Cursor_getNumArguments(CXCursor c) {
	return clang_Cursor_getNumArguments(c);
}

CXCursor tinygo_clang_Cursor_getArgument(CXCursor c, unsigned i) {
	return clang_Cursor_getArgument(c, i);
}
