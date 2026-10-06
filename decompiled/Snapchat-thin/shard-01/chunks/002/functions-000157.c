/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100dbbe8c; end: 100dbbe9b;  */

void FUN_100dbbe8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint5 uVar3;
  uint5 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint5 *)(unaff_x20 + 2);
  uVar4 = *(uint5 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  func_0x0001045bf928(auStack_88,uVar1,uVar2,(ulong)uVar3,(ulong)uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbbe9c; end: 100dbbecb;  */

undefined1  [16] FUN_100dbbe9c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 100dbbecc; end: 100dbbeff;  */

void FUN_100dbbecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 100dbbf00; end: 100dbbf2f;  */

undefined1  [16] FUN_100dbbf00(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 100dbbf30; end: 100dbbf63;  */

void FUN_100dbbf30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100dbbf64; end: 100dbbf97;  */

uint FUN_100dbbf64(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar7 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  func_0x000104559288();
  if ((uVar5 & 1) == 0) {
code_r0x0001045ec850:
    uVar4 = 0;
  }
  else {
    if (uVar1 != 0) {
      func_0x00010006c00c(uVar6,uVar2);
      uVar5 = uVar1;
      _swift_bridgeObjectRetain();
      func_0x000104559288();
      func_0x00010458a4f4(uVar6,uVar2,uVar1,uVar3);
      if ((uVar5 & 1) == 0) goto code_r0x0001045ec850;
    }
    func_0x0001045be170(uVar7);
    uVar6 = uVar7;
    (*(code *)&UNK_10456cde8)();
    _swift_bridgeObjectRelease(uVar7);
    uVar4 = (uint)uVar6 & 1;
  }
  return uVar4;
}



/* Entry: 100dbbf98; end: 100dbbfc7;  */

undefined1  [16] FUN_100dbbf98(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 100dbbfc8; end: 100dbbffb;  */

void FUN_100dbbfc8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100dbbffc; end: 100dbc013;  */

int FUN_100dbbffc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto code_r0x000104603904;
        goto code_r0x0001046038e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
code_r0x0001046038e8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
code_r0x000104603904:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100dbc014; end: 100dbc03f;  */

long FUN_100dbc014(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dbc040; end: 100dbc0ab;  */

undefined8 * FUN_100dbc040(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 100dbc0ac; end: 100dbc0e7;  */

undefined8 * FUN_100dbc0ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 100dbc0e8; end: 100dbc107;  */

void FUN_100dbc0e8(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[3]);
  return;
}



/* Entry: 100dbc108; end: 100dbc443;  */

void FUN_100dbc108(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dbc444; end: 100dbc47f;  */

undefined8 * FUN_100dbc444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 100dbc480; end: 100dbc483;  */

undefined8 * FUN_100dbc480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 100dbc484; end: 100dbc4b3;  */

undefined1  [16] FUN_100dbc484(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 100dbc4b4; end: 100dbc4e7;  */

void FUN_100dbc4b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100dbc4e8; end: 100dbc4eb;  */

undefined8 * FUN_100dbc4e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 100dbc4ec; end: 100dbc517;  */

long FUN_100dbc4ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dbc518; end: 100dbc52b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100dbc518(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100dbc52c; end: 100dbc53f;  */

void FUN_100dbc52c(void)

{
  func_0x00010461071c();
  return;
}



/* Entry: 100dbc540; end: 100dbc567;  */

void FUN_100dbc540(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 100dbc568; end: 100dbc58f;  */

void FUN_100dbc568(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100dbc590; end: 100dbc5a7;  */

void FUN_100dbc590(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbc5a8; end: 100dbc5d3;  */

long FUN_100dbc5a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dbc5d4; end: 100dbc65f;  */

int FUN_100dbc5d4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 100dbc660; end: 100dbc68f;  */

undefined1  [16] FUN_100dbc660(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 100dbc690; end: 100dbc6c3;  */

void FUN_100dbc690(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100dbc6c4; end: 100dbc6ef;  */

void FUN_100dbc6c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  return;
}



/* Entry: 100dbc6f0; end: 100dbc71f;  */

undefined1  [16] FUN_100dbc6f0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 100dbc720; end: 100dbc753;  */

void FUN_100dbc720(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100dbc754; end: 100dbc783;  */

undefined8 * FUN_100dbc754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 100dbc784; end: 100dbc7af;  */

long FUN_100dbc784(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dbc7b0; end: 100dbc7db;  */

void FUN_100dbc7b0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dbc7dc; end: 100dbc803;  */

void FUN_100dbc7dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100dbc804; end: 100dbc82b;  */

undefined1 FUN_100dbc804(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 100dbc82c; end: 100dbc853;  */

void FUN_100dbc82c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100dbc854; end: 100dbc86b;  */

void FUN_100dbc854(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbc86c; end: 100dbc8af;  */

undefined8 * FUN_100dbc86c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000104623660(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100dbc8b0; end: 100dbc8db;  */

long FUN_100dbc8b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dbc8dc; end: 100dbc8f3;  */

bool FUN_100dbc8dc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100dbc8f4; end: 100dbc91b;  */

void FUN_100dbc8f4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100dbc91c; end: 100dbc92f;  */

void FUN_100dbc91c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbc930; end: 100dbc95b;  */

long FUN_100dbc930(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dbc95c; end: 100dbc973;  */

void FUN_100dbc95c(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[2];
  uVar4 = param_1[3];
  puVar3 = param_1 + 4;
  bVar2 = *(byte *)(param_1 + 6);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      _swift_bridgeObjectRelease(param_1[1]);
      goto code_r0x00010462a8a4;
    }
    puVar3 = param_1 + 5;
    if (bVar2 != 1) {
      return;
    }
code_r0x00010462a880:
    uVar4 = *puVar3;
    _swift_bridgeObjectRelease(param_1[1]);
    _objc_release(uVar1);
  }
  else {
    if (bVar2 != 2) {
      if (bVar2 == 3) goto code_r0x00010462a880;
      if (bVar2 != 4) {
        return;
      }
    }
    _objc_release(*param_1);
    uVar4 = uVar1;
  }
code_r0x00010462a8a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 100dbc974; end: 100dbc997;  */

void FUN_100dbc974(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dbc998; end: 100dbc9af;  */

bool FUN_100dbc998(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100dbc9b0; end: 100dbc9d7;  */

void FUN_100dbc9b0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100dbc9d8; end: 100dbc9e7;  */

void FUN_100dbc9d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbc9e8; end: 100dbca13;  */

long FUN_100dbc9e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dbca14; end: 100dbca2b;  */

bool FUN_100dbca14(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100dbca2c; end: 100dbca53;  */

void FUN_100dbca2c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100dbca54; end: 100dbca7f;  */

void FUN_100dbca54(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbca80; end: 100dbcf1f;  */

ulong FUN_100dbca80(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100dbcb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100dbcf20; end: 100dbcf4b;  */

void FUN_100dbcf20(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f209070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dbcf4c; end: 100dbcf77;  */

void FUN_100dbcf4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dbcf78; end: 100dbd013;  */

undefined8 * FUN_100dbcf78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dbd014; end: 100dbd017;  */

undefined8 * FUN_100dbd014(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x0001046634ac(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100dbd018; end: 100dbd11b;  */

undefined8 * FUN_100dbd018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dbd11c; end: 100dbd167;  */

undefined8 * FUN_100dbd11c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 100dbd168; end: 100dbd203;  */

undefined8 * FUN_100dbd168(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dbd204; end: 100dbd24f;  */

undefined8 * FUN_100dbd204(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 100dbd250; end: 100dbd353;  */

undefined8 * FUN_100dbd250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dbd354; end: 100dbd357;  */

undefined8 * FUN_100dbd354(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100dbd358; end: 100dbd3bf;  */

undefined8 * FUN_100dbd358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dbd3c0; end: 100dbd3c3;  */

undefined8 * FUN_100dbd3c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100dbd3c4; end: 100dbd457;  */

undefined8 * FUN_100dbd3c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dbd458; end: 100dbd553;  */

ulong FUN_100dbd458(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0;
  func_0x00010467a0d4();
  uVar3 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100dbd4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100dbd554; end: 100dbd623;  */

undefined8 * FUN_100dbd554(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dbd624; end: 100dbd71b;  */

void FUN_100dbd624(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100dbd624);
  (*pcVar1)();
}



/* Entry: 100dbd71c; end: 100dbd71f;  */

void FUN_100dbd71c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010c0b4ca0();
  *param_1 = uVar1;
  return;
}



/* Entry: 100dbd720; end: 100dbd76f;  */

void FUN_100dbd720(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100dbd720);
  (*pcVar1)();
}



/* Entry: 100dbd770; end: 100dbd787;  */

bool FUN_100dbd770(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100dbd788; end: 100dbd7af;  */

void FUN_100dbd788(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100dbd7b0; end: 100dbd7bf;  */

void FUN_100dbd7b0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbd7c0; end: 100dbd817;  */

void FUN_100dbd7c0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100dbd818();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 100dbd818; end: 100dbd837;  */

undefined1  [16] FUN_100dbd818(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 100dbd838; end: 100dbd83b;  */

undefined8 * FUN_100dbd838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100dbd83c; end: 100dbd83f;  */

undefined8 * FUN_100dbd83c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100dbd840; end: 100dbd843;  */

undefined8 * FUN_100dbd840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100dbd844; end: 100dbd9af;  */

ulong FUN_100dbd844(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 0x30);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  lVar4 = *(long *)(lVar2 + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x3c);
  }
  else {
    lVar2 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    lVar4 = *(long *)(lVar2 + -8);
    iVar1 = *(int *)(param_3 + 0x84);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x000100dbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100dbd9b0; end: 100dbd9cb;  */

int FUN_100dbd9b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100dbd9cc; end: 100dbdad7;  */

ulong FUN_100dbd9cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  uVar2 = param_1 + *(int *)(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000100dbda54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100dbdad8; end: 100dbdadb;  */

undefined8 FUN_100dbdad8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 != 0) && (param_1 != param_2)) {
      plVar10 = (long *)(param_1 + 0x38);
      plVar11 = (long *)(param_2 + 0x38);
      do {
        lVar6 = plVar10[-2];
        uVar3 = plVar10[-1];
        lVar7 = *plVar10;
        lVar5 = plVar11[-2];
        uVar1 = plVar11[-1];
        lVar8 = *plVar11;
        if (lVar6 == 0) {
          if (lVar5 != 0) goto code_r0x00010470c200;
        }
        else {
          if (lVar5 == 0) goto code_r0x00010470c200;
          uVar2 = plVar10[-3];
          if ((uVar2 != plVar11[-3] || lVar6 != lVar5) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar2,lVar6,plVar11[-3],lVar5,0), (uVar2 & 1) == 0))
          goto code_r0x00010470c200;
          _swift_bridgeObjectRetain(lVar5);
          _swift_bridgeObjectRetain(lVar6);
        }
        if (lVar7 == 0) {
          _swift_bridgeObjectRetain_n(lVar8,2);
          _swift_bridgeObjectRelease(lVar6);
          if (lVar8 != 0) {
            _swift_bridgeObjectRelease(lVar8);
            lVar6 = lVar8;
            goto code_r0x00010470c1f0;
          }
code_r0x00010470c0f4:
          _swift_bridgeObjectRelease(lVar5);
        }
        else {
          if (lVar8 == 0) {
code_r0x00010470c1f0:
            _swift_bridgeObjectRelease(lVar6);
            _swift_bridgeObjectRelease(lVar5);
            goto code_r0x00010470c200;
          }
          if ((uVar3 == uVar1) && (lVar7 == lVar8)) {
            _swift_bridgeObjectRetain(lVar7);
            _swift_bridgeObjectRelease();
            _swift_bridgeObjectRelease(lVar5);
            lVar5 = lVar6;
            goto code_r0x00010470c0f4;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,lVar7,uVar1,lVar8,0);
          _swift_bridgeObjectRetain(lVar7);
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(lVar5);
          _swift_bridgeObjectRelease(lVar6);
          if ((uVar3 & 1) == 0) goto code_r0x00010470c200;
        }
        plVar10 = plVar10 + 4;
        plVar11 = plVar11 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar4 = 1;
  }
  else {
code_r0x00010470c200:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 100dbdadc; end: 100dbdb07;  */

undefined8 * FUN_100dbdadc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100dbdb08; end: 100dbdd1f;  */

ulong FUN_100dbdb08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100dbdb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100dbdd20; end: 100dbdd27;  */

undefined4 * FUN_100dbdd20(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100dbdd28; end: 100dbdd4b;  */

void FUN_100dbdd28(void)

{
  func_0x000107c60690(0);
  return;
}



/* Entry: 100dbdd4c; end: 100dbdd67;  */

void FUN_100dbdd4c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100dbdd68; end: 100dbe29f;  */

ulong FUN_100dbdd68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100dbddc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
    return uVar2;
  }
  uVar2 = *(ulong *)(param_1 + *(int *)(param_3 + 0x18));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 100dbe2a0; end: 100dbe2a3;  */

undefined8 * FUN_100dbe2a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100dbe2a4; end: 100dbe303;  */

undefined8 * FUN_100dbe2a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100dbe304; end: 100dbe30b;  */

undefined8 * FUN_100dbe304(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100dbe30c; end: 100dbe387;  */

void FUN_100dbe30c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000100dbe344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Entry: 100dbe388; end: 100dbe5ab;  */

ulong FUN_100dbe388(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100dbe3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 100dbe5ac; end: 100dbe5af;  */

undefined8 * FUN_100dbe5ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100dbe5b0; end: 100dbe5e3;  */

undefined8 * FUN_100dbe5b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100dbe5e4; end: 100dbe5e7;  */

undefined8 * FUN_100dbe5e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100dbe5e8; end: 100dbe613;  */

undefined8 * FUN_100dbe5e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}


