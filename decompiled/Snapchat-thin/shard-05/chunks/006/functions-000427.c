/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fc7860; end: 103fc787f;  */

void FUN_103fc7860(void)

{
  _objc_opt_self(&PTR_PTR_11303fd10);
  return;
}



/* Entry: 103fc7880; end: 103fc7897;  */

bool FUN_103fc7880(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fc7898; end: 103fc78d7;  */

void FUN_103fc7898(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb8c40;
  _swift_getWitnessTable(&UNK_10dcb8c40,&UNK_11072d8a0);
  puRam000000011303fd78 = puVar1;
  return;
}



/* Entry: 103fc78d8; end: 103fc7983;  */

void FUN_103fc78d8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fc7984; end: 103fc79a7;  */

void FUN_103fc7984(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103fc79a8; end: 103fc79e3;  */

undefined8 * FUN_103fc79a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 103fc79e4; end: 103fc7a3f;  */

undefined8 * FUN_103fc79e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  return param_1;
}



/* Entry: 103fc7a40; end: 103fc7a83;  */

undefined8 * FUN_103fc7a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  return param_1;
}



/* Entry: 103fc7a84; end: 103fc7b27;  */

int FUN_103fc7a84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x15) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fc7b28; end: 103fc7b7b;  */

undefined8 * FUN_103fc7b28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  return param_1;
}



/* Entry: 103fc7b7c; end: 103fc7bb7;  */

undefined8 * FUN_103fc7b7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 103fc7bb8; end: 103fc7c4b;  */

int FUN_103fc7bb8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fc7c4c; end: 103fc7c7f;  */

undefined8 * FUN_103fc7c4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 103fc7c80; end: 103fc7cd3;  */

undefined8 * FUN_103fc7c80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 103fc7cd4; end: 103fc7d0f;  */

undefined8 * FUN_103fc7cd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 103fc7d10; end: 103fc7f2b;  */

int FUN_103fc7d10(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fc7f2c; end: 103fc7fb3;  */

long FUN_103fc7f2c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fc7fb4; end: 103fc7fbb; +[SCMusicConstants defaultAudioTimescale] */

undefined8 FUN_103fc7fb4(void)

{
  return 600;
}



/* Entry: 103fc7fbc; end: 103fc7fc3; +[SCMusicConstants imageWithMusicFallbackDuration] */

undefined8 FUN_103fc7fbc(void)

{
  return 0x4024000000000000;
}



/* Entry: 103fc7fc4; end: 103fc7fff; -[SCMusicConstants init] */

void FUN_103fc7fc4(undefined8 param_1)

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



/* Entry: 103fc8000; end: 103fc8053;  */

void FUN_103fc8000(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fc8054; end: 103fc8093; -[SCMusicContentBasedRecommendationRequest result] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc8054(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010488b298();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fc8094; end: 103fc815b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc8094(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303fda8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303fdb0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fc815c; end: 103fc81af; -[SCMusicContentBasedRecommendationRequest cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc815c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11303fdb0);
  _objc_retain();
  __sScT6cancelyyF(uVar1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                   PTR___ss5NeverOs5ErrorsWP_11034ee90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103fc81b0; end: 103fc820f; -[SCMusicContentBasedRecommendationRequest init] */

void FUN_103fc81b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMusicServices.MusicContentBasedRecommendationRequest",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc81dc);
  (*pcVar1)();
}



/* Entry: 103fc8210; end: 103fc82ab; -[SCMusicContentBasedRecommendationRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc8210(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303fda8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303fdb0));
  return;
}



/* Entry: 103fc82ac; end: 103fc83b3;  */

undefined8 * FUN_103fc82ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 103fc83b4; end: 103fc8417;  */

undefined8 * FUN_103fc83b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 103fc8418; end: 103fc84bb;  */

int FUN_103fc8418(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fc84bc; end: 103fc84db;  */

void FUN_103fc84bc(void)

{
  _objc_opt_self(&PTR_PTR_112976c60);
  return;
}



/* Entry: 103fc84dc; end: 103fc84ef;  */

bool FUN_103fc84dc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fc84f0; end: 103fc85c7;  */

void FUN_103fc84f0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fc85c8; end: 103fc85e7;  */

void FUN_103fc85c8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fc85e8; end: 103fc8627;  */

void FUN_103fc85e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fde0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb8e80;
  _swift_getWitnessTable(&UNK_10dcb8e80,&UNK_11072da28);
  puRam000000011303fde0 = puVar1;
  return;
}



/* Entry: 103fc8628; end: 103fc864b;  */

undefined1  [16] FUN_103fc8628(void)

{
  return ZEXT816(0x11072da28);
}



/* Entry: 103fc864c; end: 103fc86f7;  */

void FUN_103fc864c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fc86f8; end: 103fc86fb;  */

void FUN_103fc86f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fde8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb8f40;
  _swift_getWitnessTable(&UNK_10dcb8f40,&UNK_11072db98);
  puRam000000011303fde8 = puVar1;
  return;
}



/* Entry: 103fc86fc; end: 103fc873b;  */

void FUN_103fc86fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fde8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb8f40;
  _swift_getWitnessTable(&UNK_10dcb8f40,&UNK_11072db98);
  puRam000000011303fde8 = puVar1;
  return;
}



/* Entry: 103fc873c; end: 103fc87db;  */

long FUN_103fc873c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fc87dc; end: 103fc8857;  */

undefined8 * FUN_103fc87dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  return param_1;
}



/* Entry: 103fc8858; end: 103fc88ab;  */

undefined8 * FUN_103fc8858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  return param_1;
}



/* Entry: 103fc88ac; end: 103fc8ae7;  */

int FUN_103fc88ac(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103fc8ae8; end: 103fc8b87;  */

void FUN_103fc8ae8(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40),param_2,param_2);
  (**(code **)(lVar1 + 0x10))(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  (**(code **)(lVar1 + 0x20))
            (param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  lVar1 = 0;
  FUN_103fc90c4(0,param_3);
  *(undefined1 *)(param_1 + *(int *)(lVar1 + 0x1c)) = param_4;
  return;
}



/* Entry: 103fc8b88; end: 103fc8b8f;  */

void FUN_103fc8b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 103fc8b90; end: 103fc8c03;  */

void FUN_103fc8b90(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dcb8ff0;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x18);
  }
  return;
}



/* Entry: 103fc8c04; end: 103fc8c8b;  */

long * FUN_103fc8c04(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar3 = *(long *)(lVar1 + 0x40);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && lVar3 + 1U < 0x19) && (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar1 + 0x10))(param_1);
    *(undefined1 *)(lVar3 + (long)param_1) = *(undefined1 *)(lVar3 + (long)param_2);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103fc8c8c; end: 103fc8c9b;  */

void FUN_103fc8c8c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000103fc8c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 103fc8c9c; end: 103fc8dbb;  */

long FUN_103fc8c9c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Entry: 103fc8dbc; end: 103fc8ee3;  */

uint * FUN_103fc8dbc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar1 = *(uint *)(lVar6 + 0x54);
  uVar4 = uVar1;
  if (uVar1 < 0xff) {
    uVar4 = 0xfe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (param_2 < uVar4 || param_2 - uVar4 == 0) goto LAB_103fc8e60;
  uVar5 = *(long *)(lVar6 + 0x40) + 1;
  uVar3 = (uint)uVar5;
  uVar2 = uVar3 << 3;
  if (uVar3 < 4) {
    uVar7 = ((param_2 - uVar4) + ~(-1 << (ulong)(uVar2 & 0x1f)) >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_103fc8e60;
      goto LAB_103fc8df8;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_103fc8df8:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar3 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar3 != 0) {
      uVar2 = 4;
      if (uVar3 < 4) {
        uVar2 = uVar3;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (uint *)(ulong)(uVar4 + ((uint)uVar5 | uVar1) + 1);
  }
LAB_103fc8e60:
  if (0xfd < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x000103fc8e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x30))();
    return param_1;
  }
  uVar4 = (uint)*(byte *)(*(long *)(lVar6 + 0x40) + (long)param_1);
  if (uVar4 < 2) {
    return (uint *)0x0;
  }
  return (uint *)(ulong)((uVar4 + 0x7ffffffe & 0x7fffffff) + 1);
}



/* Entry: 103fc8ee4; end: 103fc90c3;  */

void FUN_103fc8ee4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar3 = uVar4;
  if (uVar4 < 0xff) {
    uVar3 = 0xfe;
  }
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar2 = lVar6 + 1;
  uVar9 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar8 = 0;
  }
  else if (uVar9 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar10;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar10;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (param_2 != 0) {
      if (0xfd < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000103fc9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))();
        return;
      }
      *(char *)((long)param_1 + lVar6) = (char)param_2 + '\x01';
    }
  }
  return;
}



/* Entry: 103fc90c4; end: 103fc90cf;  */

void FUN_103fc90c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7ded34);
  return;
}



/* Entry: 103fc90d0; end: 103fc9147;  */

void FUN_103fc90d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103fc9148;
                    /* WARNING: Could not recover jumptable at 0x000103fc9144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3);
  return;
}



/* Entry: 103fc9148; end: 103fc919f;  */

void FUN_103fc9148(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103fc919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103fc91a0; end: 103fc91b3;  */

bool FUN_103fc91a0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fc91b4; end: 103fc925f;  */

void FUN_103fc91b4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fc9260; end: 103fc9263;  */

void FUN_103fc9260(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fe70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb903c;
  _swift_getWitnessTable(&UNK_10dcb903c,&UNK_11072dd48);
  puRam000000011303fe70 = puVar1;
  return;
}



/* Entry: 103fc9264; end: 103fc92a3;  */

void FUN_103fc9264(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fe70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb903c;
  _swift_getWitnessTable(&UNK_10dcb903c,&UNK_11072dd48);
  puRam000000011303fe70 = puVar1;
  return;
}



/* Entry: 103fc92a4; end: 103fc95bb;  */

int FUN_103fc92a4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x3e < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc1) {
      iVar2 = 4;
    }
    if (param_2 + 0xc1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103fc9320;
        goto LAB_103fc9304;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103fc9304:
      return ((uint)*param_1 | uVar1 << 8) - 0xc1;
    }
  }
LAB_103fc9320:
  uVar1 = (*param_1 >> 1 & 0x3e | (uint)(*param_1 >> 7)) ^ 0x3f;
  if (0x3d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103fc95bc; end: 103fc95fb;  */

void FUN_103fc95bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fe78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb90c0;
  _swift_getWitnessTable(&UNK_10dcb90c0,&UNK_11072dda0);
  puRam000000011303fe78 = puVar1;
  return;
}



/* Entry: 103fc95fc; end: 103fc96a7;  */

void FUN_103fc95fc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fc96a8; end: 103fc96f3;  */

void FUN_103fc96a8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103fc96f4; end: 103fc97cb;  */

void FUN_103fc96f4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fc97cc; end: 103fc97eb;  */

void FUN_103fc97cc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fc97ec; end: 103fc982b;  */

void FUN_103fc97ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fe80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb9180;
  _swift_getWitnessTable(&UNK_10dcb9180,&UNK_11072de18);
  puRam000000011303fe80 = puVar1;
  return;
}



/* Entry: 103fc982c; end: 103fc983b;  */

undefined1  [16] FUN_103fc982c(void)

{
  return ZEXT816(0x11072de18);
}



/* Entry: 103fc983c; end: 103fc9aa7;  */

undefined * FUN_103fc983c(double param_1,double param_2,undefined *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  func_0x000107c5b078();
  dVar8 = param_1;
  func_0x000107c51820(param_3);
  param_1 = param_1 * dVar8;
  func_0x000107c5b078(param_3);
  func_0x000107c51820(param_3);
  if ((param_1 <= 0.0) || (param_2 = param_2 * dVar8, param_2 <= 0.0)) {
    param_3 = (undefined *)0x0;
  }
  else {
    if (param_2 < param_1) {
      param_2 = param_1;
    }
    if (param_2 <= 512.0) {
      _objc_retain(param_3);
    }
    else {
      func_0x000107c51820();
      param_2 = 512.0 / param_2;
      dVar8 = param_2;
      func_0x000107c45054();
      _objc_retainAutoreleasedReturnValue();
      if ((param_3 != (undefined *)0x0) &&
         (puVar2 = param_3, func_0x000107c450e0(), puVar2 != (undefined *)0x0)) {
        func_0x000107c5b078(param_3);
        dVar9 = param_2;
        func_0x000107c51820(param_3);
        param_2 = param_2 * dVar9;
        func_0x000107c5b078(param_3);
        func_0x000107c51820(param_3);
        puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
        _objc_allocWithZone(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
        func_0x000107c453e4();
        func_0x000107c58bfc(0x3ff0000000000000);
        puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
        _objc_allocWithZone(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
        func_0x000107c486fc(param_2,dVar8 * dVar9);
        puVar2 = &UNK_11072de90;
        _swift_allocObject(&UNK_11072de90,0x28,7);
        *(undefined **)(puVar2 + 0x10) = param_3;
        *(double *)(puVar2 + 0x18) = param_2;
        *(double *)(puVar2 + 0x20) = dVar8 * dVar9;
        puVar5 = &UNK_11072deb8;
        _swift_allocObject(&UNK_11072deb8,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_103fc9d34;
        *(undefined **)(puVar5 + 0x18) = puVar2;
        pcStack_70 = FUN_103fc9d48;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100f9148c;
        puStack_78 = &UNK_11072ded0;
        puStack_68 = puVar5;
        __Block_copy(&puStack_90);
        puVar7 = puStack_68;
        _objc_retain(param_3);
        _swift_retain(puVar5);
        _swift_release(puVar7);
        puVar7 = puVar4;
        func_0x000107c45138(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        _objc_release(puVar3);
        __Block_release(ppuVar6);
        _objc_release(puVar4);
        puVar3 = puVar5;
        _swift_isEscapingClosureAtFileLocation(puVar5,"",0x4e,0x16,0x4a,1);
        _swift_release(puVar5);
        _swift_release(puVar2);
        param_3 = puVar7;
        if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc9a78);
          (*pcVar1)();
        }
      }
    }
  }
  return param_3;
}



/* Entry: 103fc9aa8; end: 103fc9d33;  */

undefined * FUN_103fc9aa8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  lVar3 = 0x11303fe88;
  func_0x0001000285a8(0x11303fe88,&UNK_10dcb9248);
  _swift_initStackObject();
  puVar8 = PTR__kCGImageSourceShouldCache_110349d70;
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar8;
  *(undefined1 *)(lVar3 + 0x28) = 0;
  _objc_retain();
  lVar4 = lVar3;
  FUN_103fc9d84(lVar3);
  _swift_setDeallocating(lVar3);
  FUN_103fc9e6c((undefined8 *)(lVar3 + 0x20));
  uVar5 = 0;
  func_0x0001014bede8(0);
  uVar6 = 0x112da8f90;
  FUN_103fc9ec4(0x112da8f90,&UNK_10dcb8d78);
  puVar8 = PTR___sSbN_11034dd40;
  lVar3 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar4,uVar5,PTR___sSbN_11034dd40,uVar6)
  ;
  _swift_bridgeObjectRelease(lVar4);
  lVar4 = param_1;
  _CGImageSourceCreateWithURL(param_1,lVar3);
  _objc_release(param_1);
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = 0x112da90a0;
    func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
    _swift_initStackObject();
    *(undefined8 *)(lVar3 + 0x18) = 8;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    *(undefined8 *)(lVar3 + 0x20) =
         *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_110349d60;
    *(undefined1 *)(lVar3 + 0x28) = 1;
    uVar9 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_110349d68;
    *(undefined **)(lVar3 + 0x40) = puVar8;
    *(undefined8 *)(lVar3 + 0x48) = uVar9;
    *(undefined1 *)(lVar3 + 0x50) = 1;
    puVar2 = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
    uVar10 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_110349d80;
    *(undefined8 *)(lVar3 + 0x78) = 0x4080000000000000;
    puVar1 = PTR__kCGImageSourceShouldCacheImmediately_110349d78;
    *(undefined **)(lVar3 + 0x68) = puVar8;
    *(undefined8 *)(lVar3 + 0x70) = uVar10;
    uVar11 = *(undefined8 *)puVar1;
    *(undefined **)(lVar3 + 0x90) = puVar2;
    *(undefined8 *)(lVar3 + 0x98) = uVar11;
    *(undefined **)(lVar3 + 0xb8) = puVar8;
    *(undefined1 *)(lVar3 + 0xa0) = 1;
    _objc_retain();
    _objc_retain(uVar9);
    _objc_retain(uVar10);
    _objc_retain(uVar11);
    lVar7 = lVar3;
    func_0x0001014c14a8(lVar3);
    _swift_setDeallocating(lVar3);
    uVar9 = 0x112da90b0;
    func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
    _swift_arrayDestroy((undefined8 *)(lVar3 + 0x20),4,uVar9);
    lVar3 = lVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar7,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
    _swift_bridgeObjectRelease(lVar7);
    lVar7 = lVar4;
    _CGImageSourceCreateThumbnailAtIndex(lVar4,0,lVar3);
    _objc_release(lVar3);
    if (lVar7 != 0) {
      puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_allocWithZone(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c45af0();
      _objc_release(lVar4);
      _objc_release(lVar7);
      return puVar8;
    }
    _objc_release(lVar4);
  }
  return (undefined *)0x0;
}



/* Entry: 103fc9d34; end: 103fc9d47;  */

void FUN_103fc9d34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 103fc9d48; end: 103fc9d67;  */

void FUN_103fc9d48(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103fc9d68; end: 103fc9d83;  */

void FUN_103fc9d68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103fc9d84; end: 103fc9e6b;  */

undefined * FUN_103fc9d84(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x11303fe98);
    puVar3 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar9 = (undefined1 *)(param_1 + 0x28);
    do {
      uVar4 = *(ulong *)(puVar9 + -8);
      uVar1 = *puVar9;
      _objc_retain();
      uVar5 = uVar4;
      func_0x0001014c0ae8();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103fc9e68);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined1 *)(*(long *)(puVar3 + 0x38) + uVar5) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103fc9e6c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 0x10;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 103fc9e6c; end: 103fc9eb3;  */

undefined8 FUN_103fc9e6c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x11303fe90;
  func_0x0001000285a8(0x11303fe90,&UNK_10dcb9250);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103fc9eb4; end: 103fc9ec3;  */

undefined1  [16] FUN_103fc9eb4(void)

{
  return ZEXT816(0x11072df08);
}



/* Entry: 103fc9ec4; end: 103fc9f03;  */

void FUN_103fc9ec4(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001014bede8(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103fc9f04; end: 103fc9f17;  */

bool FUN_103fc9f04(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fc9f18; end: 103fca003;  */

void FUN_103fc9f18(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fca004; end: 103fca083;  */

void FUN_103fca004(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103fca084;
                    /* WARNING: Could not recover jumptable at 0x000103fca080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,PTR___swiftEmptySetSingleton_11034f1d8,param_2,param_3);
  return;
}



/* Entry: 103fca084; end: 103fca0c7;  */

void FUN_103fca084(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103fca0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103fca0c8; end: 103fca0cb;  */

void FUN_103fca0c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb9300;
  _swift_getWitnessTable(&UNK_10dcb9300,&UNK_11072df98);
  puRam000000011303fea0 = puVar1;
  return;
}



/* Entry: 103fca0cc; end: 103fca10b;  */

void FUN_103fca0cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011303fea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb9300;
  _swift_getWitnessTable(&UNK_10dcb9300,&UNK_11072df98);
  puRam000000011303fea0 = puVar1;
  return;
}



/* Entry: 103fca10c; end: 103fca10f;  */

void FUN_103fca10c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011303fea8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11303feb0;
  func_0x00010002969c(0x11303feb0,&UNK_10dcb9368);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011303fea8 = puVar2;
  return;
}



/* Entry: 103fca110; end: 103fca15f;  */

void FUN_103fca110(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011303fea8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11303feb0;
  func_0x00010002969c(0x11303feb0,&UNK_10dcb9368);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011303fea8 = puVar2;
  return;
}



/* Entry: 103fca160; end: 103fca2c3;  */

int FUN_103fca160(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103fca1dc;
        goto LAB_103fca1c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103fca1c0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103fca1dc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103fca2c4; end: 103fca303; -[SCMusicServices experimentsObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca2c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003a5b88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fca304; end: 103fca343; -[SCMusicServices contextExtractorObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca304(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003a5b88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fca344; end: 103fca383; -[SCMusicServices notificationPresenterObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca344(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003a5b88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fca384; end: 103fca3cb; -[SCMusicServices contentBasedRecommendationFetcherObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca384(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303ff10;
  _swift_beginAccess(param_1 + _DAT_11303ff10,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103fca3cc; end: 103fca42f; -[SCMusicServices setContentBasedRecommendationFetcherObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303ff10;
  _swift_beginAccess(param_1 + _DAT_11303ff10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103fca430; end: 103fca477; -[SCMusicServices topicPageStoryFetcherObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca430(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303ff28;
  _swift_beginAccess(param_1 + _DAT_11303ff28,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fca478; end: 103fca4db; -[SCMusicServices setTopicPageStoryFetcherObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303ff28;
  _swift_beginAccess(param_1 + _DAT_11303ff28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 103fca4dc; end: 103fca53f; -[SCMusicServices setTrackAssetLoaderObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303ff38;
  _swift_beginAccess(param_1 + _DAT_11303ff38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103fca540; end: 103fca587; -[SCMusicServices trackAudioDataLoaderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303ff48;
  _swift_beginAccess(param_1 + _DAT_11303ff48,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103fca588; end: 103fca5eb; -[SCMusicServices setTrackAudioDataLoaderObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303ff48;
  _swift_beginAccess(param_1 + _DAT_11303ff48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103fca5ec; end: 103fca62b; -[SCMusicServices musicSelectionResolverObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca5ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003a5b88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fca62c; end: 103fca68f; -[SCMusicServices setTrackLoaderObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303ff60;
  _swift_beginAccess(param_1 + _DAT_11303ff60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103fca690; end: 103fca6cf; -[SCMusicServices preferencesObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca690(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003a5b88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fca6d0; end: 103fca8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103fca6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303fef0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303fee8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303fef8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff00) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff08) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff10) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff18) = param_8;
  func_0x00010065b330(param_9,unaff_x20 + _DAT_11303ff20);
  *(undefined8 *)(unaff_x20 + _DAT_11303ff28) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff30) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff38) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff40) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff48) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff50) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff58) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff60) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff68) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11303ff70) = param_7;
  puVar1 = auStack_78;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_9);
  return puVar1;
}



/* Entry: 103fca8a4; end: 103fca903; -[SCMusicServices init] */

void FUN_103fca8a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCMusicServices.SCMusicServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fca8d0);
  (*pcVar1)();
}



/* Entry: 103fca904; end: 103fcaa3b; -[SCMusicServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fca904(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303fee8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303fef0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303fef8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff00));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303ff10));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff18));
  func_0x0001000834e4(param_1 + _DAT_11303ff20);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11303ff28));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303ff38));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff40));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303ff48));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff50));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303ff60));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303ff68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303ff70));
  return;
}



/* Entry: 103fcaa3c; end: 103fcaa4b; -[SCMusicLyricsData trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcaa3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303ffa0);
}


