typedef struct cvar_s {
  char *name;
  ...
  struct cvar_s *hashNext;
} cvar_t;

void Cvar_Restart_f( void ) {
  cvar_t  *var;
  ...
  memset( var, 0, sizeof( var ) );
  ...
}
void MD5::finalize () {
  ...
  uint1 buffer[64];
  ...
  // Zeroize sensitive information
  memset (buffer, 0, sizeof(*buffer));
  ...
}
dgCollisionCompoundBreakable::dgCollisionCompoundBreakable(....)
{
  ...
  dgInt32 faceOffsetHitogram[256];
  dgSubMesh* mainSegmenst[256];
  ...
  memset(faceOffsetHitogram, 0, sizeof(faceOffsetHitogram));
  memset(mainSegmenst, 0, sizeof(faceOffsetHitogram));
  ...
}
