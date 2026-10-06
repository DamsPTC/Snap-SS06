/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0019b24c; end: 0019b26f;  */

void FUN_0019b24c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019b270();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 0019b270; end: 0019b2af;  */

void FUN_0019b270(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0620;
  _swift_getWitnessTable(&UNK_007e0620,&UNK_009b4018);
  puRam0000000000af27f0 = puVar1;
  return;
}



/* Entry: 0019b2b0; end: 0019b2c7;  */

void FUN_0019b2b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019ade0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebce0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019b2c8; end: 0019b307;  */

void FUN_0019b2c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0688;
  _swift_getWitnessTable(&UNK_007e0688,&UNK_009b4018);
  puRam0000000000af27f8 = puVar1;
  return;
}



/* Entry: 0019b308; end: 0019b32b;  */

void FUN_0019b308(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019b32c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 0019b32c; end: 0019b36b;  */

void FUN_0019b32c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e06f8;
  _swift_getWitnessTable(&UNK_007e06f8,&UNK_009b4128);
  puRam0000000000af2800 = puVar1;
  return;
}



/* Entry: 0019b36c; end: 0019b37f;  */

void FUN_0019b36c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019b3b0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebb60)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019b380; end: 0019b3af;  */

void FUN_0019b380(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019b3b0; end: 0019b3ef;  */

void FUN_0019b3b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0720;
  _swift_getWitnessTable(&UNK_007e0720,&UNK_009b4128);
  puRam0000000000af2808 = puVar1;
  return;
}



/* Entry: 0019b3f0; end: 0019b3f3;  */

void FUN_0019b3f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0760;
  _swift_getWitnessTable(&UNK_007e0760,&UNK_009b4128);
  puRam0000000000af2810 = puVar1;
  return;
}



/* Entry: 0019b3f4; end: 0019b433;  */

void FUN_0019b3f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0760;
  _swift_getWitnessTable(&UNK_007e0760,&UNK_009b4128);
  puRam0000000000af2810 = puVar1;
  return;
}



/* Entry: 0019b434; end: 0019b4e7;  */

int FUN_0019b434(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 0019b4e8; end: 0019b52b;  */

void FUN_0019b4e8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if ((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 3) != -1)) {
    FUN_000f2354(*param_1,param_1[1]);
  }
  uVar1 = param_1[5];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(param_1[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0019b52c; end: 0019b6df;  */

undefined8 * FUN_0019b52c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[2];
  cVar2 = *(char *)(param_2 + 3);
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar2 == -1)) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar4;
  }
  else {
    uVar4 = *param_2;
    uVar1 = param_2[1];
    FUN_000f22b4(uVar4,uVar1,uVar3,cVar2);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    *(char *)(param_1 + 3) = cVar2;
  }
  uVar4 = param_2[4];
  uVar1 = param_2[5];
  func_0x00023304(uVar4,uVar1);
  param_1[4] = uVar4;
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 0019b6e0; end: 0019b7ab;  */

undefined8 * FUN_0019b6e0(undefined8 *param_1)

{
  FUN_000f2354(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return param_1;
}



/* Entry: 0019b7ac; end: 0019b877;  */

int FUN_0019b7ac(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3f9 < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x3fa;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 6) << 2;
  iVar2 = 0x3fe - uVar1;
  if (0x3f9 < (uVar1 ^ 0x3fe)) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0019b878; end: 0019b8a3;  */

long FUN_0019b878(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0019b8a4; end: 0019b8b7;  */

void FUN_0019b8a4(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = (uint)(uVar2 >> 0x3c) & 3 | (*(byte *)(param_1 + 3) & 0x3f) << 2;
  if (uVar3 == 5) {
    _swift_bridgeObjectRelease(*param_1);
    uVar2 = uVar2 & 0xcfffffffffffffff;
  }
  else {
    if (uVar3 != 4) {
      if (uVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar1);
        return;
      }
      return;
    }
    _swift_bridgeObjectRelease(*param_1);
  }
  uVar3 = (uint)(uVar2 >> 0x3e);
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      return;
    }
    _swift_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0019b8b8; end: 0019b97f;  */

undefined8 * FUN_0019b8b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_000f22b4(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 0019b980; end: 0019b9cb;  */

undefined8 * FUN_0019b980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_000f2354(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 0019b9cc; end: 0019bacf;  */

int FUN_0019b9cc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3fa < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x3fb;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 6) << 2) ^ 0x3ff;
  if (0x3f9 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0019bad0; end: 0019baf7;  */

void FUN_0019bad0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0019baf8; end: 0019bb3f;  */

undefined8 * FUN_0019baf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 0019bb40; end: 0019bb43;  */

undefined8 * FUN_0019bb40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  func_0x00023304(uVar4,uVar2);
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  FUN_00023358(uVar1,uVar3);
  return param_1;
}



/* Entry: 0019bb44; end: 0019bba3;  */

undefined8 * FUN_0019bb44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  func_0x00023304(uVar4,uVar2);
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  FUN_00023358(uVar1,uVar3);
  return param_1;
}



/* Entry: 0019bba4; end: 0019bba7;  */

undefined8 * FUN_0019bba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 0019bba8; end: 0019bbeb;  */

undefined8 * FUN_0019bba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 0019bbec; end: 0019bc8b;  */

int FUN_0019bbec(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0019bc8c; end: 0019bd7b;  */

undefined * FUN_0019bc8c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar10 != (undefined *)0x0) {
    uVar7 = 0;
    func_0x000115a8(0xaf0500);
    puVar5 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar11 = (undefined1 *)(param_1 + 0x38);
    do {
      uVar1 = *(ulong *)(puVar11 + -0x18);
      uVar2 = *(undefined8 *)(puVar11 + -0x10);
      uVar12 = *(undefined8 *)(puVar11 + -8);
      uVar3 = *puVar11;
      uVar6 = uVar1;
      FUN_000e1d94();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x19bd78);
        (*pcVar4)();
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar8 + 0x40) = *(ulong *)(puVar5 + uVar8 + 0x40) | 1L << (uVar6 & 0x3f);
      *(ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 8) = uVar1;
      puVar9 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x18);
      *puVar9 = uVar2;
      puVar9[1] = uVar12;
      *(undefined1 *)(puVar9 + 2) = uVar3;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x19bd7c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar10 = puVar10 + -1;
      puVar11 = puVar11 + 0x20;
    } while (puVar10 != (undefined *)0x0);
  }
  return puVar5;
}



/* Entry: 0019bd7c; end: 0019bdbb;  */

void FUN_0019bd7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007e03c8;
  _swift_getWitnessTable(&DAT_007e03c8,&UNK_009b3f20);
  puRam0000000000af2830 = puVar1;
  return;
}



/* Entry: 0019bdbc; end: 0019be37;  */

void FUN_0019bdbc(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  _swift_bridgeObjectRelease();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0019be38; end: 0019bf33;  */

undefined * FUN_0019be38(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar12 != (undefined *)0x0) {
    uVar9 = 0;
    func_0x000115a8(0xaf0380);
    puVar7 = puVar12;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar13 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar13[-1];
      uVar3 = *puVar13;
      uVar14 = puVar13[1];
      uVar5 = *(undefined1 *)(puVar13 + 2);
      uVar2 = puVar13[3];
      uVar4 = puVar13[4];
      uVar8 = uVar1;
      FUN_000e1d94();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x19bf30);
        (*pcVar6)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      *(ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 8) = uVar1;
      puVar11 = (undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x28);
      *puVar11 = uVar3;
      puVar11[1] = uVar14;
      *(undefined1 *)(puVar11 + 2) = uVar5;
      puVar11[3] = uVar2;
      puVar11[4] = uVar4;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x19bf34);
        (*pcVar6)();
      }
      puVar13 = puVar13 + 6;
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar12 = puVar12 + -1;
    } while (puVar12 != (undefined *)0x0);
  }
  return puVar7;
}



/* Entry: 0019bf34; end: 0019c013;  */

undefined * FUN_0019bf34(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000115a8(0xaf0378,&UNK_007da338);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_000e1dc4();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x19c010);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x19c014);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar5;
}



/* Entry: 0019c014; end: 0019c05b;  */

undefined8 FUN_0019c014(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 0019c05c; end: 0019c113;  */

undefined1  [16] FUN_0019c05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 0019c114; end: 0019c147;  */

undefined1  [16]
FUN_0019c114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_3,param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 0019c148; end: 0019c17b;  */

void FUN_0019c148(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0019c17c; end: 0019c1b7;  */

undefined1  [16] FUN_0019c17c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x19c18c;
  return auVar1;
}



/* Entry: 0019c1b8; end: 0019c277;  */

void FUN_0019c1b8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e09f0,0x11,&uStack_48,&lStack_40);
  puRam0000000000b65818 = puStack_38;
  lRam0000000000b65810 = lStack_40;
  puRam0000000000b65828 = puStack_28;
  puRam0000000000b65820 = puStack_30;
  puRam0000000000b65838 = puStack_18;
  puRam0000000000b65830 = puStack_20;
  return;
}



/* Entry: 0019c278; end: 0019c317;  */

void FUN_0019c278(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2838 != -1) {
    _swift_once(0xaf2838,FUN_0019c1b8);
  }
  uVar5 = uRam0000000000b65838;
  uVar4 = uRam0000000000b65830;
  uVar3 = uRam0000000000b65828;
  uVar2 = uRam0000000000b65820;
  uVar1 = uRam0000000000b65818;
  *param_1 = uRam0000000000b65810;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0019c318; end: 0019c3af;  */

void FUN_0019c318(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_0019c36c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0019c388;
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_0019c354;
code_r0x0019c388:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x48);
LAB_0019c354:
    (*pcVar3)();
  }
  goto LAB_0019c36c;
}



/* Entry: 0019c3b0; end: 0019c447;  */

void FUN_0019c3b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_2 == 0) || ((**(code **)(param_7 + 0x20))(param_2,1,param_6,param_7), unaff_x21 == 0))
     && (((int)param_3 == 0 ||
         ((**(code **)(param_7 + 0x18))(param_3,2,param_6,param_7), unaff_x21 == 0)))) {
    FUN_0013ad2c(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 0019c448; end: 0019c473;  */

ulong FUN_0019c448(long param_1,int param_2,long param_3,byte *param_4,long param_5,int param_6,
                  long param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((param_1 != param_5) || (param_2 != param_6)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_8 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_3;
  if ((ulong)param_4 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_3 != 0) || (param_4 != (byte *)0xc000000000000000)) || (param_8 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_7 != 0 || (param_8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
      if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar11,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_7)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_3;
          abStack_70[1] = (byte)((ulong)param_3 >> 8);
          abStack_70[2] = (byte)((ulong)param_3 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_3 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_3 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_3 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_3 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_3 >> 0x38);
          abStack_70[8] = (byte)param_4;
          abStack_70[9] = (byte)((ulong)param_4 >> 8);
          abStack_70[10] = (byte)((ulong)param_4 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_4 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_4 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_4 >> 0x28);
          param_4 = abStack_70 + ((ulong)param_4 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_3 >> 0x20) - lVar17;
        if (param_3 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_3 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_3 = 0;
        }
        else {
          lVar7 = param_3;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar7) + param_3;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_3 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_3);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_4 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_3 + 0x10);
        lVar7 = *(long *)(param_3 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_3;
        if (param_3 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar6) + param_3;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_3 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_3);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_4 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_3,pbVar9,param_7,param_8);
      uVar12 = (ulong)abStack_70[0];
      param_4 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_4 - uVar12;
  if (SBORROW8((long)param_4,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_7 - lVar6;
  if (SBORROW8(param_7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_4;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_4;
    }
    if (SBORROW8(uVar14,(long)param_4)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_7 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_4 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 0019c474; end: 0019c4d7;  */

void FUN_0019c474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x00192fb4(auStack_78,param_1,param_2,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0019c4d8; end: 0019c50b;  */

void FUN_0019c4d8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 0019c50c; end: 0019c53b;  */

undefined1  [16] FUN_0019c50c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 0019c53c; end: 0019c56f;  */

void FUN_0019c53c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0019c570; end: 0019c583;  */

undefined1  [16] FUN_0019c570(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x19c580;
  return auVar1;
}



/* Entry: 0019c584; end: 0019c5bf;  */

void FUN_0019c584(void)

{
  FUN_0019c318();
  return;
}



/* Entry: 0019c5c0; end: 0019c65f;  */

void FUN_0019c5c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2838 != -1) {
    _swift_once(0xaf2838,FUN_0019c1b8);
  }
  uVar5 = uRam0000000000b65838;
  uVar4 = uRam0000000000b65830;
  uVar3 = uRam0000000000b65828;
  uVar2 = uRam0000000000b65820;
  uVar1 = uRam0000000000b65818;
  *param_1 = uRam0000000000b65810;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0019c660; end: 0019c69b;  */

void FUN_0019c660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2858;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2858,&UNK_007e09e0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0019c69c; end: 0019c6fb;  */

void FUN_0019c69c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  uVar3 = *(undefined4 *)(unaff_x20 + 1);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x00192fb4(auStack_78,uVar4,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0019c6fc; end: 0019c70b;  */

void FUN_0019c6fc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (lVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar4);
  }
  if ((int)lVar6 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar6);
  }
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar6 = (long)(int)lVar1;
      lVar4 = lVar1 >> 0x20;
      goto LAB_0014db50;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_0014db68;
  }
  else {
    if (uVar5 != 2) goto LAB_0014db68;
    lVar6 = *(long *)(lVar1 + 0x10);
    lVar4 = *(long *)(lVar1 + 0x18);
LAB_0014db50:
    if (lVar6 == lVar4) goto LAB_0014db68;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,lVar1,uVar2);
LAB_0014db68:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 0019c70c; end: 0019c767;  */

void FUN_0019c70c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  uVar3 = *(undefined4 *)(unaff_x20 + 1);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x00192fb4(auStack_78,uVar4,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0019c768; end: 0019c797;  */

ulong FUN_0019c768(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*param_1 != *param_2 || (int)param_1[1] != (int)param_2[1]) {
    return 0;
  }
  lVar13 = param_2[2];
  uVar8 = param_2[3];
  lVar9 = param_1[2];
  pbVar11 = (byte *)param_1[3];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar11 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar18 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
      lVar9 = uVar16 - (long)pbVar11;
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar16 - (long)pbVar11;
    }
    if (SBORROW8(uVar16,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar16 = uVar18 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar16 || uVar16 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar16,lVar9 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar16 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar16;
}



/* Entry: 0019c798; end: 0019c7bb;  */

void FUN_0019c798(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019c7bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 0019c7bc; end: 0019c7fb;  */

void FUN_0019c7bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0928;
  _swift_getWitnessTable(&UNK_007e0928,&UNK_009b42f0);
  puRam0000000000af2840 = puVar1;
  return;
}



/* Entry: 0019c7fc; end: 0019c827;  */

void FUN_0019c7fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019c828();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000ebc20();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019c828; end: 0019c867;  */

void FUN_0019c828(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0950;
  _swift_getWitnessTable(&UNK_007e0950,&UNK_009b42f0);
  puRam0000000000af2848 = puVar1;
  return;
}



/* Entry: 0019c868; end: 0019c86b;  */

void FUN_0019c868(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0990;
  _swift_getWitnessTable(&UNK_007e0990,&UNK_009b42f0);
  puRam0000000000af2850 = puVar1;
  return;
}



/* Entry: 0019c86c; end: 0019c8ab;  */

void FUN_0019c86c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0990;
  _swift_getWitnessTable(&UNK_007e0990,&UNK_009b42f0);
  puRam0000000000af2850 = puVar1;
  return;
}



/* Entry: 0019c8ac; end: 0019c8d7;  */

long FUN_0019c8ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0019c8d8; end: 0019c8e3;  */

void FUN_0019c8d8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0019c8e4; end: 0019c983;  */

undefined8 * FUN_0019c8e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00023304(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 0019c984; end: 0019c9cb;  */

undefined8 * FUN_0019c984(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 0019c9cc; end: 0019ca7f;  */

int FUN_0019c9cc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0019ca80; end: 0019caa3;  */

void FUN_0019ca80(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 0019caa4; end: 0019cc97;  */

void FUN_0019caa4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x20;
  ulong *puVar13;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  puVar13 = (ulong *)(param_1 + 0x48);
  do {
    lVar10 = lVar10 + -1;
    uVar2 = puVar13[-5];
    uVar5 = puVar13[-4];
    uVar3 = puVar13[-3];
    uVar6 = puVar13[-2];
    uVar4 = puVar13[-1];
    uVar7 = *puVar13;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      func_0x00023304(uVar4,uVar7);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      func_0x00023304(uVar4,uVar7);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,uVar2,uVar5);
    }
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,uVar3,uVar6);
    }
    uVar8 = (uint)(uVar7 >> 0x20);
    uVar9 = uVar8 >> 0x1e;
    if (uVar8 >> 0x1e < 2) {
      if (uVar9 == 0) {
        if ((uVar7 & 0xff000000000000) == 0) goto LAB_0019cc10;
      }
      else {
        lVar11 = (long)(int)uVar4;
        lVar12 = (long)uVar4 >> 0x20;
LAB_0019cbf8:
        if (lVar11 == lVar12) goto LAB_0019cc10;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,uVar4,uVar7);
    }
    else if (uVar9 == 2) {
      lVar11 = *(long *)(uVar4 + 0x10);
      lVar12 = *(long *)(uVar4 + 0x18);
      goto LAB_0019cbf8;
    }
LAB_0019cc10:
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar5);
    FUN_00023358(uVar4,uVar7);
    if (lVar10 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    puVar13 = puVar13 + 6;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 0019cc98; end: 0019ceff;  */

void FUN_0019cc98(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long *plVar14;
  long lVar15;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  plVar14 = (long *)(param_1 + 0x50);
  do {
    lVar11 = lVar11 + -1;
    uVar2 = plVar14[-6];
    uVar5 = plVar14[-5];
    lVar3 = plVar14[-4];
    uVar6 = plVar14[-3];
    lVar4 = plVar14[-2];
    lVar7 = plVar14[-1];
    lVar15 = *plVar14;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      func_0x00023304(lVar3,uVar6);
      func_0x00191e58(lVar4,lVar7,lVar15);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      func_0x00023304(lVar3,uVar6);
      func_0x00191e58(lVar4,lVar7,lVar15);
      __sSS4hash4intoys6HasherVz_tF(&uStack_110,uVar2,uVar5);
    }
    if (lVar15 != 0) {
      __ss6HasherV8_combineyySuF(2);
      _swift_beginAccess(lVar15 + 0x10,auStack_128,0,0);
      uVar2 = *(ulong *)(lVar15 + 0x10);
      uVar8 = *(ulong *)(lVar15 + 0x18);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar1 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x00191e58(lVar4,lVar7,lVar15);
        _swift_bridgeObjectRetain(uVar8);
        __sSS4hash4intoys6HasherVz_tF(&uStack_110,uVar2,uVar8);
        func_0x0012cec0(lVar4,lVar7,lVar15);
        _swift_bridgeObjectRelease(uVar8);
      }
    }
    uVar9 = (uint)(uVar6 >> 0x20);
    uVar10 = uVar9 >> 0x1e;
    if (uVar9 >> 0x1e < 2) {
      if (uVar10 == 0) {
        if ((uVar6 & 0xff000000000000) == 0) goto LAB_0019ce6c;
      }
      else {
        lVar12 = (long)(int)lVar3;
        lVar13 = lVar3 >> 0x20;
LAB_0019ce54:
        if (lVar12 == lVar13) goto LAB_0019ce6c;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_110,lVar3,uVar6);
    }
    else if (uVar10 == 2) {
      lVar12 = *(long *)(lVar3 + 0x10);
      lVar13 = *(long *)(lVar3 + 0x18);
      goto LAB_0019ce54;
    }
LAB_0019ce6c:
    _swift_bridgeObjectRelease(uVar5);
    FUN_00023358(lVar3,uVar6);
    func_0x0012cec0(lVar4,lVar7,lVar15);
    if (lVar11 == 0) {
      unaff_x20[5] = uStack_e8;
      unaff_x20[4] = uStack_f0;
      unaff_x20[7] = uStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = uStack_d0;
      unaff_x20[1] = uStack_108;
      *unaff_x20 = uStack_110;
      unaff_x20[3] = uStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    plVar14 = plVar14 + 7;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
  } while( true );
}



/* Entry: 0019cf00; end: 0019d03f;  */

void FUN_0019cf00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_1e8 [120];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uStack_f8 = unaff_x20[5];
    uStack_100 = unaff_x20[4];
    uStack_e8 = unaff_x20[7];
    uStack_f0 = unaff_x20[6];
    uStack_e0 = unaff_x20[8];
    uStack_118 = unaff_x20[1];
    uStack_120 = *unaff_x20;
    uStack_108 = unaff_x20[3];
    uStack_110 = unaff_x20[2];
    puVar2 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      lVar1 = lVar1 + -1;
      uStack_88 = puVar2[9];
      uStack_90 = puVar2[8];
      uStack_78 = puVar2[0xb];
      uStack_80 = puVar2[10];
      uStack_68 = puVar2[0xd];
      uStack_70 = puVar2[0xc];
      uStack_60 = puVar2[0xe];
      uStack_c8 = puVar2[1];
      uStack_d0 = *puVar2;
      uStack_b8 = puVar2[3];
      uStack_c0 = puVar2[2];
      uStack_a8 = puVar2[5];
      uStack_b0 = puVar2[4];
      uStack_98 = puVar2[7];
      uStack_a0 = puVar2[6];
      uStack_168 = uStack_118;
      uStack_170 = uStack_120;
      uStack_130 = uStack_e0;
      uStack_148 = uStack_f8;
      uStack_150 = uStack_100;
      uStack_138 = uStack_e8;
      uStack_140 = uStack_f0;
      uStack_158 = uStack_108;
      uStack_160 = uStack_110;
      func_0x00192ad0(&uStack_d0,auStack_1e8);
      FUN_001430f8(&uStack_170);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      func_0x00192b0c(&uStack_d0);
      if (lVar1 == 0) break;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_e0 = uStack_130;
      uStack_118 = uStack_168;
      uStack_120 = uStack_170;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      puVar2 = puVar2 + 0xf;
    }
    unaff_x20[5] = uStack_148;
    unaff_x20[4] = uStack_150;
    unaff_x20[7] = uStack_138;
    unaff_x20[6] = uStack_140;
    unaff_x20[8] = uStack_130;
    unaff_x20[1] = uStack_168;
    *unaff_x20 = uStack_170;
    unaff_x20[3] = uStack_158;
    unaff_x20[2] = uStack_160;
  }
  return;
}



/* Entry: 0019d040; end: 0019d45b;  */

void FUN_0019d040(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 *unaff_x20;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [120];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == 0) {
    return;
  }
  lVar21 = 0;
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    plVar16 = (long *)(param_1 + 0x20 + lVar21 * 0x78);
    uStack_e8 = plVar16[9];
    lStack_f0 = plVar16[8];
    lStack_d8 = plVar16[0xb];
    lStack_e0 = plVar16[10];
    lStack_c8 = plVar16[0xd];
    uStack_d0 = plVar16[0xc];
    lStack_c0 = plVar16[0xe];
    lStack_128 = plVar16[1];
    lVar17 = *plVar16;
    lStack_118 = plVar16[3];
    uStack_120 = plVar16[2];
    lStack_108 = plVar16[5];
    lStack_110 = plVar16[4];
    lStack_f8 = plVar16[7];
    lStack_100 = plVar16[6];
    uStack_140 = uStack_70;
    uStack_158 = uStack_88;
    uStack_160 = uStack_90;
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_178 = uStack_a8;
    uStack_180 = uStack_b0;
    uStack_168 = uStack_98;
    uStack_170 = uStack_a0;
    lStack_130 = lVar17;
    if (*(long *)(lVar17 + 0x10) != 0) {
      __ss6HasherV8_combineyySuF(2);
      lVar19 = *(long *)(lVar17 + 0x10);
      if (lVar19 != 0) {
        uStack_1a8 = uStack_158;
        uStack_1b0 = uStack_160;
        uStack_198 = uStack_148;
        uStack_1a0 = uStack_150;
        uStack_190 = uStack_140;
        uStack_1c8 = uStack_178;
        uStack_1d0 = uStack_180;
        uStack_1b8 = uStack_168;
        uStack_1c0 = uStack_170;
        func_0x00192650(&lStack_130,auStack_248);
        pbVar18 = (byte *)(lVar17 + 0x40);
        do {
          lVar19 = lVar19 + -1;
          lVar17 = *(long *)(pbVar18 + -0x20);
          uVar3 = *(ulong *)(pbVar18 + -0x18);
          uVar2 = *(undefined8 *)(pbVar18 + -0x10);
          lVar4 = *(long *)(pbVar18 + -8);
          bVar5 = *pbVar18;
          uStack_268 = uStack_1a8;
          uStack_270 = uStack_1b0;
          uStack_258 = uStack_198;
          uStack_260 = uStack_1a0;
          uStack_250 = uStack_190;
          uStack_288 = uStack_1c8;
          uStack_290 = uStack_1d0;
          uStack_278 = uStack_1b8;
          uStack_280 = uStack_1c0;
          if (lVar4 == 0) {
            func_0x00023304(lVar17,uVar3);
          }
          else {
            __ss6HasherV8_combineyySuF(1);
            func_0x00023304(lVar17,uVar3);
            _swift_bridgeObjectRetain(lVar4);
            __sSS4hash4intoys6HasherVz_tF(&uStack_290,uVar2,lVar4);
          }
          if (bVar5 != 2) {
            __ss6HasherV8_combineyySuF(2);
            __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
          }
          uVar6 = (uint)(uVar3 >> 0x20);
          uVar15 = uVar6 >> 0x1e;
          if (uVar6 >> 0x1e < 2) {
            if (uVar15 == 0) {
              if ((uVar3 & 0xff000000000000) != 0) {
LAB_0019d20c:
                __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_290,lVar17,uVar3);
              }
            }
            else if ((long)(int)lVar17 != lVar17 >> 0x20) goto LAB_0019d20c;
          }
          else if ((uVar15 == 2) && (*(long *)(lVar17 + 0x10) != *(long *)(lVar17 + 0x18)))
          goto LAB_0019d20c;
          FUN_00023358(lVar17,uVar3);
          _swift_bridgeObjectRelease(lVar4);
          uVar2 = uStack_250;
          uVar7 = uStack_270;
          uVar8 = uStack_268;
          uVar9 = uStack_280;
          uVar10 = uStack_278;
          uVar11 = uStack_260;
          uVar12 = uStack_258;
          uVar13 = uStack_290;
          uVar14 = uStack_288;
          lVar17 = lStack_118;
          lVar4 = lStack_110;
          if (lVar19 == 0) goto joined_r0x0019d3cc;
          pbVar18 = pbVar18 + 0x28;
          uStack_1a8 = uStack_268;
          uStack_1b0 = uStack_270;
          uStack_198 = uStack_258;
          uStack_1a0 = uStack_260;
          uStack_190 = uStack_250;
          uStack_1c8 = uStack_288;
          uStack_1d0 = uStack_290;
          uStack_1b8 = uStack_278;
          uStack_1c0 = uStack_280;
        } while( true );
      }
    }
    func_0x00192650(&lStack_130,auStack_248);
    uVar2 = uStack_140;
    uVar7 = uStack_160;
    uVar8 = uStack_158;
    uVar9 = uStack_170;
    uVar10 = uStack_168;
    uVar11 = uStack_150;
    uVar12 = uStack_148;
    uVar13 = uStack_180;
    uVar14 = uStack_178;
    lVar17 = lStack_118;
    lVar4 = lStack_110;
joined_r0x0019d3cc:
    uStack_178 = uVar14;
    uStack_180 = uVar13;
    uStack_148 = uVar12;
    uStack_150 = uVar11;
    uStack_168 = uVar10;
    uStack_170 = uVar9;
    uStack_158 = uVar8;
    uStack_160 = uVar7;
    uStack_140 = uVar2;
    lStack_118 = lVar17;
    lStack_110 = lVar4;
    if (lVar4 != 0) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&uStack_180,lVar17,lVar4);
    }
    lVar17 = lStack_108;
    if ((char)lStack_100 != '\x01') {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    lVar17 = lStack_f8;
    if ((char)lStack_f0 != '\x01') {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    uVar3 = uStack_e8;
    if ((char)lStack_e0 != '\x01') {
      __ss6HasherV8_combineyySuF(6);
      uVar1 = 0;
      if ((uVar3 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar3;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
    uVar3 = uStack_d0;
    lVar17 = lStack_d8;
    if (uStack_d0 >> 0x3c < 0xf) {
      __ss6HasherV8_combineyySuF(7);
      func_0x00023304(lVar17,uVar3);
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180,lVar17,uVar3);
      FUN_00023344(lVar17,uVar3);
    }
    lVar19 = lStack_c0;
    lVar17 = lStack_c8;
    if (lStack_c0 != 0) {
      __ss6HasherV8_combineyySuF(8);
      __sSS4hash4intoys6HasherVz_tF(&uStack_180,lVar17,lVar19);
    }
    uVar6 = (uint)(uStack_120 >> 0x20);
    uVar15 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar15 == 0) {
        if ((uStack_120 & 0xff000000000000) == 0) goto LAB_0019d3ec;
      }
      else {
        lVar17 = (long)(int)lStack_128;
        lVar19 = lStack_128 >> 0x20;
LAB_0019d3dc:
        if (lVar17 == lVar19) goto LAB_0019d3ec;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180);
    }
    else if (uVar15 == 2) {
      lVar17 = *(long *)(lStack_128 + 0x10);
      lVar19 = *(long *)(lStack_128 + 0x18);
      goto LAB_0019d3dc;
    }
LAB_0019d3ec:
    lVar21 = lVar21 + 1;
    func_0x00192684(&lStack_130);
    if (lVar21 == lVar20) {
      unaff_x20[5] = uStack_158;
      unaff_x20[4] = uStack_160;
      unaff_x20[7] = uStack_148;
      unaff_x20[6] = uStack_150;
      unaff_x20[8] = uStack_140;
      unaff_x20[1] = uStack_178;
      *unaff_x20 = uStack_180;
      unaff_x20[3] = uStack_168;
      unaff_x20[2] = uStack_170;
      return;
    }
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_70 = uStack_140;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
  } while( true );
}



/* Entry: 0019d45c; end: 0019d61b;  */

void FUN_0019d45c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  byte *pbVar9;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  pbVar9 = (byte *)(param_1 + 0x40);
  do {
    lVar8 = lVar8 + -1;
    lVar1 = *(long *)(pbVar9 + -0x20);
    uVar3 = *(ulong *)(pbVar9 + -0x18);
    uVar2 = *(undefined8 *)(pbVar9 + -0x10);
    lVar4 = *(long *)(pbVar9 + -8);
    bVar5 = *pbVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (lVar4 == 0) {
      func_0x00023304(lVar1,uVar3);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      func_0x00023304(lVar1,uVar3);
      _swift_bridgeObjectRetain(lVar4);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,uVar2,lVar4);
    }
    if (bVar5 != 2) {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
    }
    uVar6 = (uint)(uVar3 >> 0x20);
    uVar7 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((uVar3 & 0xff000000000000) != 0) {
LAB_0019d590:
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar1,uVar3);
        }
      }
      else if ((long)(int)lVar1 != lVar1 >> 0x20) goto LAB_0019d590;
    }
    else if ((uVar7 == 2) && (*(long *)(lVar1 + 0x10) != *(long *)(lVar1 + 0x18)))
    goto LAB_0019d590;
    FUN_00023358(lVar1,uVar3);
    _swift_bridgeObjectRelease(lVar4);
    if (lVar8 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    pbVar9 = pbVar9 + 0x28;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 0019d61c; end: 0019d757;  */

void FUN_0019d61c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_228 [152];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uStack_118 = unaff_x20[5];
    uStack_120 = unaff_x20[4];
    uStack_108 = unaff_x20[7];
    uStack_110 = unaff_x20[6];
    uStack_100 = unaff_x20[8];
    uStack_138 = unaff_x20[1];
    uStack_140 = *unaff_x20;
    uStack_128 = unaff_x20[3];
    uStack_130 = unaff_x20[2];
    puVar2 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      lVar1 = lVar1 + -1;
      uStack_88 = puVar2[0xd];
      uStack_90 = puVar2[0xc];
      uStack_78 = puVar2[0xf];
      uStack_80 = puVar2[0xe];
      uStack_68 = puVar2[0x11];
      uStack_70 = puVar2[0x10];
      uStack_60 = *(undefined1 *)(puVar2 + 0x12);
      uStack_c8 = puVar2[5];
      uStack_d0 = puVar2[4];
      uStack_b8 = puVar2[7];
      uStack_c0 = puVar2[6];
      uStack_a8 = puVar2[9];
      uStack_b0 = puVar2[8];
      uStack_98 = puVar2[0xb];
      uStack_a0 = puVar2[10];
      uStack_e8 = puVar2[1];
      uStack_f0 = *puVar2;
      uStack_d8 = puVar2[3];
      uStack_e0 = puVar2[2];
      uStack_168 = uStack_118;
      uStack_170 = uStack_120;
      uStack_158 = uStack_108;
      uStack_160 = uStack_110;
      uStack_150 = uStack_100;
      uStack_188 = uStack_138;
      uStack_190 = uStack_140;
      uStack_178 = uStack_128;
      uStack_180 = uStack_130;
      func_0x00192710(&uStack_f0,auStack_228);
      FUN_001696a0(&uStack_190);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      func_0x00192744(&uStack_f0);
      if (lVar1 == 0) break;
      uStack_118 = uStack_168;
      uStack_120 = uStack_170;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      uStack_100 = uStack_150;
      uStack_138 = uStack_188;
      uStack_140 = uStack_190;
      uStack_128 = uStack_178;
      uStack_130 = uStack_180;
      puVar2 = puVar2 + 0x13;
    }
    unaff_x20[5] = uStack_168;
    unaff_x20[4] = uStack_170;
    unaff_x20[7] = uStack_158;
    unaff_x20[6] = uStack_160;
    unaff_x20[8] = uStack_150;
    unaff_x20[1] = uStack_188;
    *unaff_x20 = uStack_190;
    unaff_x20[3] = uStack_178;
    unaff_x20[2] = uStack_180;
  }
  return;
}



/* Entry: 0019d758; end: 0019d91f;  */

void FUN_0019d758(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  long *plVar9;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  plVar9 = (long *)(param_1 + 0x40);
  do {
    lVar8 = lVar8 + -1;
    lVar1 = plVar9[-4];
    uVar3 = plVar9[-3];
    bVar5 = *(byte *)(plVar9 + -2);
    lVar2 = plVar9[-1];
    lVar4 = *plVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (lVar4 == 0) {
      func_0x00023304(lVar1,uVar3);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      func_0x00023304(lVar1,uVar3);
      _swift_bridgeObjectRetain(lVar4);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,lVar2,lVar4);
    }
    if (bVar5 != 0xc) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e1588 + (ulong)bVar5 * 8));
    }
    uVar6 = (uint)(uVar3 >> 0x20);
    uVar7 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((uVar3 & 0xff000000000000) != 0) {
LAB_0019d894:
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar1,uVar3);
        }
      }
      else if ((long)(int)lVar1 != lVar1 >> 0x20) goto LAB_0019d894;
    }
    else if ((uVar7 == 2) && (*(long *)(lVar1 + 0x10) != *(long *)(lVar1 + 0x18)))
    goto LAB_0019d894;
    FUN_00023358(lVar1,uVar3);
    _swift_bridgeObjectRelease(lVar4);
    if (lVar8 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    plVar9 = plVar9 + 5;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 0019d920; end: 0019debf;  */

void FUN_0019d920(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  uint7 uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar21;
  undefined1 auStack_288 [72];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  char cStack_d0;
  uint7 uStack_cf;
  byte bStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  plVar21 = (long *)(param_1 + 0x20);
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar15 = lVar15 + -1;
    lStack_e8 = plVar21[9];
    lStack_f0 = plVar21[8];
    uStack_e0 = plVar21[10];
    lStack_108 = plVar21[5];
    lVar18 = plVar21[4];
    uStack_f8 = plVar21[7];
    lStack_100 = plVar21[6];
    uStack_d8 = (undefined1)plVar21[0xb];
    uStack_cf = (uint7)*(undefined8 *)((long)plVar21 + 0x61);
    bStack_c8 = (byte)((ulong)*(undefined8 *)((long)plVar21 + 0x61) >> 0x38);
    uStack_d7 = (undefined7)*(undefined8 *)((long)plVar21 + 0x59);
    cStack_d0 = (char)((ulong)*(undefined8 *)((long)plVar21 + 0x59) >> 0x38);
    lStack_128 = plVar21[1];
    lStack_130 = *plVar21;
    lVar16 = plVar21[3];
    uStack_120 = plVar21[2];
    uStack_140 = uStack_80;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    lStack_118 = lVar16;
    lStack_110 = lVar18;
    if (lVar18 == 0) {
      FUN_00192830(&lStack_130,&uStack_1f0);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_00192830(&lStack_130,&uStack_1f0);
      __sSS4hash4intoys6HasherVz_tF(&uStack_180,lVar16,lVar18);
    }
    if ((*(long *)(lStack_130 + 0x10) == 0) || (FUN_0019dec0(lStack_130,2), unaff_x21 == 0)) {
      bVar13 = bStack_c8;
      uVar12 = uStack_cf;
      cVar11 = cStack_d0;
      uVar9 = uStack_e0;
      lVar7 = lStack_e8;
      lVar20 = lStack_f0;
      uVar5 = uStack_f8;
      lVar18 = lStack_100;
      lVar16 = lStack_108;
      if (lStack_108 != 0) {
        lVar2 = CONCAT71(uStack_d7,uStack_d8);
        uVar3 = CONCAT71(uStack_cf,cStack_d0);
        __ss6HasherV8_combineyySuF(3);
        uStack_1c8 = uStack_158;
        uStack_1d0 = uStack_160;
        uStack_1b8 = uStack_148;
        uStack_1c0 = uStack_150;
        uStack_1b0 = uStack_140;
        uStack_1e8 = uStack_178;
        uStack_1f0 = uStack_180;
        uStack_1d8 = uStack_168;
        uStack_1e0 = uStack_170;
        if (bVar13 != 2) {
          __ss6HasherV8_combineyySuF(0x21);
          __ss6HasherV8_combineyys5UInt8VF(bVar13 & 1);
        }
        uVar10 = uStack_e0;
        lVar8 = lStack_e8;
        lVar19 = lStack_f0;
        uVar6 = uStack_f8;
        lVar17 = lStack_100;
        if (lVar2 == 0) {
          uVar3 = CONCAT71(uStack_d7,uStack_d8);
          uVar4 = CONCAT71(uStack_cf,cStack_d0);
          _swift_bridgeObjectRetain(lStack_108);
          func_0x00023304(lVar17,uVar6);
          _swift_bridgeObjectRetain(lVar19);
          func_0x001869f8(lVar8,uVar10,uVar3,uVar4);
        }
        else {
          __ss6HasherV8_combineyySuF(0x22);
          uStack_218 = uStack_1c8;
          uStack_220 = uStack_1d0;
          uStack_208 = uStack_1b8;
          uStack_210 = uStack_1c0;
          uStack_200 = uStack_1b0;
          uStack_238 = uStack_1e8;
          uStack_240 = uStack_1f0;
          uStack_228 = uStack_1d8;
          uStack_230 = uStack_1e0;
          if (cVar11 != '\x04') {
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(cVar11);
          }
          if (((ulong)uVar12 & 0xff) != 3) {
            __ss6HasherV8_combineyySuF(2);
            __ss6HasherV8_combineyySuF((ulong)uVar12 & 0xff);
          }
          if (((ulong)uVar12 & 0xff00) != 0x300) {
            __ss6HasherV8_combineyySuF(3);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 8) & 0xff);
          }
          if (((ulong)uVar12 & 0xff0000) != 0x30000) {
            __ss6HasherV8_combineyySuF(4);
            __ss6HasherV8_combineyySuF
                      (*(undefined8 *)(&UNK_007e15e8 + (((ulong)uVar12 & 0xff0000) >> 0x10) * 8));
          }
          if (((ulong)uVar12 & 0xff000000) != 0x3000000) {
            __ss6HasherV8_combineyySuF(5);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x18) & 0xff);
          }
          if (((ulong)uVar12 & 0xff00000000) != 0x300000000) {
            __ss6HasherV8_combineyySuF(6);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x20) & 0xff);
          }
          if (((ulong)uVar12 & 0xff0000000000) != 0x30000000000) {
            __ss6HasherV8_combineyySuF(7);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x28) & 0xff);
          }
          if ((ulong)(uVar12 >> 0x30) != 5) {
            __ss6HasherV8_combineyySuF(8);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x30));
          }
          func_0x001a9e74(&lStack_108,auStack_288,0xaefe40,&UNK_007dafe0);
          func_0x001869f8(lVar7,uVar9,lVar2,uVar3);
          FUN_0013bd14(&uStack_240,1000,&UNK_00002711,lVar2);
          if (unaff_x21 == 0) {
            uVar1 = (uint)(uVar9 >> 0x20);
            uVar14 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar14 == 0) {
                if ((uVar9 & 0xff000000000000) == 0) goto LAB_0019dc6c;
              }
              else {
                lVar17 = (long)(int)lVar7;
                lVar19 = lVar7 >> 0x20;
LAB_0019de40:
                if (lVar17 == lVar19) goto LAB_0019dc6c;
              }
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_240,lVar7,uVar9);
            }
            else if (uVar14 == 2) {
              lVar17 = *(long *)(lVar7 + 0x10);
              lVar19 = *(long *)(lVar7 + 0x18);
              goto LAB_0019de40;
            }
          }
          else {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
LAB_0019dc6c:
          FUN_00116294(lVar7,uVar9,lVar2,uVar3);
          uStack_1c8 = uStack_218;
          uStack_1d0 = uStack_220;
          uStack_1b8 = uStack_208;
          uStack_1c0 = uStack_210;
          uStack_1b0 = uStack_200;
          uStack_1e8 = uStack_238;
          uStack_1f0 = uStack_240;
          uStack_1d8 = uStack_228;
          uStack_1e0 = uStack_230;
        }
        if (((*(long *)(lVar16 + 0x10) == 0) || (FUN_0019d040(lVar16,999), unaff_x21 == 0)) &&
           (FUN_0013bd14(&uStack_1f0,1000,0x20000000,lVar20), unaff_x21 == 0)) {
          uVar1 = (uint)(uVar5 >> 0x20);
          uVar14 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar14 == 0) {
              if ((uVar5 & 0xff000000000000) == 0) goto LAB_0019dd30;
            }
            else {
              lVar16 = (long)(int)lVar18;
              lVar20 = lVar18 >> 0x20;
LAB_0019de68:
              if (lVar16 == lVar20) goto LAB_0019dd30;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1f0,lVar18);
          }
          else if (uVar14 == 2) {
            lVar16 = *(long *)(lVar18 + 0x10);
            lVar20 = *(long *)(lVar18 + 0x18);
            goto LAB_0019de68;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_0019dd30:
        func_0x001a9e34(&lStack_108,0xaefe40,&UNK_007dafe0);
        uStack_158 = uStack_1c8;
        uStack_160 = uStack_1d0;
        uStack_148 = uStack_1b8;
        uStack_150 = uStack_1c0;
        uStack_140 = uStack_1b0;
        uStack_178 = uStack_1e8;
        uStack_180 = uStack_1f0;
        uStack_168 = uStack_1d8;
        uStack_170 = uStack_1e0;
      }
      uVar1 = (uint)(uStack_120 >> 0x20);
      uVar14 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar14 == 0) {
          if ((uStack_120 & 0xff000000000000) == 0) goto LAB_0019dda8;
        }
        else {
          lVar16 = (long)(int)lStack_128;
          lVar18 = lStack_128 >> 0x20;
LAB_0019dd98:
          if (lVar16 == lVar18) goto LAB_0019dda8;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180);
      }
      else if (uVar14 == 2) {
        lVar16 = *(long *)(lStack_128 + 0x10);
        lVar18 = *(long *)(lStack_128 + 0x18);
        goto LAB_0019dd98;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
LAB_0019dda8:
    func_0x00192864(&lStack_130);
    if (lVar15 == 0) {
      unaff_x20[5] = uStack_158;
      unaff_x20[4] = uStack_160;
      unaff_x20[7] = uStack_148;
      unaff_x20[6] = uStack_150;
      unaff_x20[8] = uStack_140;
      unaff_x20[1] = uStack_178;
      *unaff_x20 = uStack_180;
      unaff_x20[3] = uStack_168;
      unaff_x20[2] = uStack_170;
      return;
    }
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_80 = uStack_140;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    plVar21 = plVar21 + 0xe;
  } while( true );
}



/* Entry: 0019dec0; end: 0019e52b;  */

void FUN_0019dec0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  char cVar8;
  ulong uVar9;
  ushort uVar10;
  uint6 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar19;
  undefined8 uVar20;
  undefined1 auStack_2c8 [72];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  ushort uStack_d0;
  uint6 uStack_ce;
  byte bStack_c8;
  byte bStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  plVar19 = (long *)(param_1 + 0x20);
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar13 = lVar13 + -1;
    lStack_e8 = plVar19[0xd];
    uStack_f0 = plVar19[0xc];
    uStack_e0 = plVar19[0xe];
    lStack_108 = plVar19[9];
    lStack_110 = plVar19[8];
    lStack_f8 = plVar19[0xb];
    uStack_100 = plVar19[10];
    uStack_d8 = (undefined2)plVar19[0xf];
    uVar20 = *(undefined8 *)((long)plVar19 + 0x82);
    uStack_ce = (uint6)uVar20;
    bStack_c8 = (byte)((ulong)uVar20 >> 0x30);
    bStack_c7 = (byte)((ulong)uVar20 >> 0x38);
    uStack_d6 = (undefined6)*(undefined8 *)((long)plVar19 + 0x7a);
    uStack_d0 = (ushort)((ulong)*(undefined8 *)((long)plVar19 + 0x7a) >> 0x30);
    lStack_128 = plVar19[5];
    lStack_130 = plVar19[4];
    lStack_118 = plVar19[7];
    lStack_120 = plVar19[6];
    uStack_148 = plVar19[1];
    lStack_150 = *plVar19;
    lVar16 = plVar19[3];
    lVar14 = plVar19[2];
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_160 = uStack_80;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    lStack_140 = lVar14;
    lStack_138 = lVar16;
    if (lVar16 == 0) {
      FUN_00192420(&lStack_150,&uStack_230);
      lVar14 = lStack_130;
      lVar16 = lStack_128;
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_00192420(&lStack_150,&uStack_230);
      __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar14,lVar16);
      lVar14 = lStack_130;
      lVar16 = lStack_128;
    }
    lStack_130 = lVar14;
    lStack_128 = lVar16;
    if (lVar16 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar14,lVar16);
    }
    lVar16 = lStack_118;
    lVar14 = lStack_120;
    if (lStack_118 != 0) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar14,lVar16);
    }
    uVar11 = uStack_ce;
    uVar10 = uStack_d0;
    uVar6 = uStack_e0;
    lVar4 = lStack_e8;
    lVar18 = lStack_f8;
    uVar5 = uStack_100;
    lVar16 = lStack_108;
    lVar14 = lStack_110;
    if (lStack_110 != 0) {
      bVar7 = (byte)uStack_f0;
      cVar8 = uStack_f0._1_1_;
      lVar2 = CONCAT62(uStack_d6,uStack_d8);
      uVar20 = CONCAT62(uStack_ce,uStack_d0);
      __ss6HasherV8_combineyySuF(4);
      uStack_208 = uStack_178;
      uStack_210 = uStack_180;
      uStack_1f8 = uStack_168;
      uStack_200 = uStack_170;
      uStack_1f0 = uStack_160;
      uStack_228 = uStack_198;
      uStack_230 = uStack_1a0;
      uStack_218 = uStack_188;
      uStack_220 = uStack_190;
      if (bVar7 == 2) {
        if (cVar8 != '\x03') goto LAB_0019e288;
LAB_0019e058:
        if (lVar2 == 0) goto LAB_0019e2a4;
LAB_0019e05c:
        __ss6HasherV8_combineyySuF(0x23);
        uStack_258 = uStack_208;
        uStack_260 = uStack_210;
        uStack_248 = uStack_1f8;
        uStack_250 = uStack_200;
        uStack_240 = uStack_1f0;
        uStack_278 = uStack_228;
        uStack_280 = uStack_230;
        uStack_268 = uStack_218;
        uStack_270 = uStack_220;
        if ((uVar10 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar10 & 0xff);
        }
        if ((uVar10 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar10 >> 8);
        }
        if (((ulong)uVar11 & 0xff) != 3) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF((ulong)uVar11 & 0xff);
        }
        if (((ulong)uVar11 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF
                    (*(undefined8 *)(&UNK_007e15e8 + (((ulong)uVar11 & 0xff00) >> 8) * 8));
        }
        if (((ulong)uVar11 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x10) & 0xff);
        }
        if (((ulong)uVar11 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x18) & 0xff);
        }
        if (((ulong)uVar11 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x20) & 0xff);
        }
        if ((ulong)(uVar11 >> 0x28) != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x28));
        }
        func_0x001a9e74(&lStack_110,auStack_2c8,0xaefe38,&UNK_007d9c10);
        func_0x001869f8(lVar4,uVar6,lVar2,uVar20);
        FUN_0013bd14(&uStack_280,1000,&UNK_00002711,lVar2);
        if (unaff_x21 == 0) {
          uVar1 = (uint)(uVar6 >> 0x20);
          uVar12 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar12 == 0) {
              if ((uVar6 & 0xff000000000000) == 0) goto LAB_0019e21c;
            }
            else {
              lVar15 = (long)(int)lVar4;
              lVar17 = lVar4 >> 0x20;
LAB_0019e4a0:
              if (lVar15 == lVar17) goto LAB_0019e21c;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_280,lVar4,uVar6);
          }
          else if (uVar12 == 2) {
            lVar15 = *(long *)(lVar4 + 0x10);
            lVar17 = *(long *)(lVar4 + 0x18);
            goto LAB_0019e4a0;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_0019e21c:
        FUN_00116294(lVar4,uVar6,lVar2,uVar20);
        uStack_208 = uStack_258;
        uStack_210 = uStack_260;
        uStack_1f8 = uStack_248;
        uStack_200 = uStack_250;
        uStack_1f0 = uStack_240;
        uStack_228 = uStack_278;
        uStack_230 = uStack_280;
        uStack_218 = uStack_268;
        uStack_220 = uStack_270;
      }
      else {
        __ss6HasherV8_combineyySuF(0x21);
        __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
        if (cVar8 == '\x03') goto LAB_0019e058;
LAB_0019e288:
        __ss6HasherV8_combineyySuF(0x22);
        __ss6HasherV8_combineyySuF(cVar8);
        if (lVar2 != 0) goto LAB_0019e05c;
LAB_0019e2a4:
        uVar9 = uStack_e0;
        lVar15 = lStack_e8;
        lVar2 = lStack_f8;
        uVar6 = uStack_100;
        lVar4 = lStack_108;
        uVar20 = CONCAT62(uStack_d6,uStack_d8);
        uVar3 = CONCAT62(uStack_ce,uStack_d0);
        _swift_bridgeObjectRetain(lStack_110);
        func_0x00023304(lVar4,uVar6);
        _swift_bridgeObjectRetain(lVar2);
        func_0x001869f8(lVar15,uVar9,uVar20,uVar3);
      }
      if (((*(long *)(lVar14 + 0x10) == 0) || (FUN_0019d040(lVar14,999), unaff_x21 == 0)) &&
         (FUN_0013bd14(&uStack_230,1000,0x20000000,lVar18), unaff_x21 == 0)) {
        uVar1 = (uint)(uVar5 >> 0x20);
        uVar12 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar12 == 0) {
            if ((uVar5 & 0xff000000000000) == 0) goto LAB_0019e340;
          }
          else {
            lVar14 = (long)(int)lVar16;
            lVar18 = lVar16 >> 0x20;
LAB_0019e4d4:
            if (lVar14 == lVar18) goto LAB_0019e340;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_230,lVar16);
        }
        else if (uVar12 == 2) {
          lVar14 = *(long *)(lVar16 + 0x10);
          lVar18 = *(long *)(lVar16 + 0x18);
          goto LAB_0019e4d4;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_0019e340:
      func_0x001a9e34(&lStack_110,0xaefe38,&UNK_007d9c10);
      uStack_178 = uStack_208;
      uStack_180 = uStack_210;
      uStack_168 = uStack_1f8;
      uStack_170 = uStack_200;
      uStack_160 = uStack_1f0;
      uStack_198 = uStack_228;
      uStack_1a0 = uStack_230;
      uStack_188 = uStack_218;
      uStack_190 = uStack_220;
    }
    bVar7 = bStack_c8;
    if (bStack_c8 != 2) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    }
    bVar7 = bStack_c7;
    if (bStack_c7 != 2) {
      __ss6HasherV8_combineyySuF(6);
      __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    }
    uVar1 = (uint)(uStack_148 >> 0x20);
    uVar12 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uStack_148 & 0xff000000000000) == 0) goto LAB_0019e400;
      }
      else {
        lVar14 = (long)(int)lStack_150;
        lVar16 = lStack_150 >> 0x20;
LAB_0019e3f0:
        if (lVar14 == lVar16) goto LAB_0019e400;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1a0);
    }
    else if (uVar12 == 2) {
      lVar14 = *(long *)(lStack_150 + 0x10);
      lVar16 = *(long *)(lStack_150 + 0x18);
      goto LAB_0019e3f0;
    }
LAB_0019e400:
    func_0x00192454(&lStack_150);
    if (lVar13 == 0) {
      unaff_x20[5] = uStack_178;
      unaff_x20[4] = uStack_180;
      unaff_x20[7] = uStack_168;
      unaff_x20[6] = uStack_170;
      unaff_x20[8] = uStack_160;
      unaff_x20[1] = uStack_198;
      *unaff_x20 = uStack_1a0;
      unaff_x20[3] = uStack_188;
      unaff_x20[2] = uStack_190;
      return;
    }
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_80 = uStack_160;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    plVar19 = plVar19 + 0x12;
  } while( true );
}



/* Entry: 0019e52c; end: 0019e547;  */

void FUN_0019e52c(undefined8 param_1,undefined8 param_2)

{
  FUN_0019ed70(param_1,param_2,FUN_0016b7b0);
  return;
}



/* Entry: 0019e548; end: 0019ed53;  */

void FUN_0019e548(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lStack_320;
  long lStack_318;
  ulong uStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  ulong uStack_270;
  long lStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined8 uStack_22f;
  long lStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined1 auStack_1d8 [24];
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  byte bStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  lStack_98 = unaff_x20[5];
  lStack_a0 = unaff_x20[4];
  lStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  plVar19 = (long *)(param_1 + 0x30);
  lStack_b8 = unaff_x20[1];
  lStack_c0 = *unaff_x20;
  lStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar9 = lVar9 + -1;
    lVar1 = plVar19[-2];
    uVar2 = plVar19[-1];
    lVar18 = *plVar19;
    lStack_e8 = lStack_98;
    lStack_f0 = lStack_a0;
    lStack_d8 = lStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    lStack_108 = lStack_b8;
    lStack_110 = lStack_c0;
    lStack_f8 = lStack_a8;
    uStack_100 = uStack_b0;
    _swift_beginAccess(lVar18 + 0x10,auStack_128,0,0);
    lVar16 = *(long *)(lVar18 + 0x18);
    if (lVar16 == 0) {
      func_0x00023304(lVar1,uVar2);
      _swift_retain(lVar18);
    }
    else {
      uVar17 = *(undefined8 *)(lVar18 + 0x10);
      __ss6HasherV8_combineyySuF(1);
      func_0x00023304(lVar1,uVar2);
      _swift_retain(lVar18);
      _swift_bridgeObjectRetain(lVar16);
      __sSS4hash4intoys6HasherVz_tF(&lStack_110,uVar17,lVar16);
      _swift_bridgeObjectRelease(lVar16);
    }
    _swift_beginAccess(lVar18 + 0x20,auStack_140,0,0);
    if (*(char *)(lVar18 + 0x24) != '\x01') {
      iVar7 = *(int *)(lVar18 + 0x20);
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar7);
    }
    _swift_beginAccess(lVar18 + 0x28,auStack_1d8,0,0);
    lVar16 = *(long *)(lVar18 + 0x30);
    lVar20 = *(long *)(lVar18 + 0x28);
    lVar26 = *(long *)(lVar18 + 0x40);
    uVar23 = *(ulong *)(lVar18 + 0x38);
    lVar11 = *(long *)(lVar18 + 0x50);
    lStack_1a0 = *(long *)(lVar18 + 0x48);
    lVar13 = *(long *)(lVar18 + 0x60);
    uVar24 = *(ulong *)(lVar18 + 0x58);
    uStack_178 = *(undefined8 *)(lVar18 + 0x70);
    uVar21 = *(ulong *)(lVar18 + 0x68);
    uVar27 = *(ulong *)(lVar18 + 0x80);
    lVar25 = *(long *)(lVar18 + 0x78);
    uVar22 = *(ulong *)(lVar18 + 0x88);
    uStack_158 = (undefined1)*(undefined8 *)(lVar18 + 0x90);
    uStack_14f = (undefined7)*(undefined8 *)(lVar18 + 0x99);
    bStack_148 = (byte)((ulong)*(undefined8 *)(lVar18 + 0x99) >> 0x38);
    bVar6 = bStack_148;
    uStack_157 = (undefined7)*(undefined8 *)(lVar18 + 0x91);
    uStack_150 = (undefined1)((ulong)*(undefined8 *)(lVar18 + 0x91) >> 0x38);
    bVar4 = (byte)lStack_1a0;
    bVar5 = (byte)uStack_178;
    uVar17 = CONCAT71(uStack_157,uStack_158);
    lVar14 = CONCAT71(uStack_14f,uStack_150);
    uVar10 = (ulong)bStack_148;
    iVar7 = (int)&lStack_1c0;
    lStack_1c0 = lVar20;
    lStack_1b8 = lVar16;
    uStack_1b0 = uVar23;
    lStack_1a8 = lVar26;
    lStack_198 = lVar11;
    uStack_190 = uVar24;
    lStack_188 = lVar13;
    uStack_180 = uVar21;
    lStack_170 = lVar25;
    uStack_168 = uVar27;
    uStack_160 = uVar22;
    FUN_00186e80();
    if (iVar7 != 1) {
      __ss6HasherV8_combineyySuF(3);
      lStack_1f8 = lStack_e8;
      lStack_200 = lStack_f0;
      lStack_1e8 = lStack_d8;
      uStack_1f0 = uStack_e0;
      uStack_1e0 = uStack_d0;
      lStack_218 = lStack_108;
      lStack_220 = lStack_110;
      lStack_208 = lStack_f8;
      uStack_210 = uStack_100;
      if (bVar4 != 2) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyys5UInt8VF(bVar4 & 1);
      }
      if (lVar13 == 0) {
        uStack_258 = uStack_178;
        uStack_260 = uStack_180;
        uStack_248 = uStack_168;
        lStack_250 = lStack_170;
        uStack_238 = uStack_158;
        uStack_240 = uStack_160;
        uStack_22f = CONCAT17(bStack_148,uStack_14f);
        uStack_237 = uStack_157;
        uStack_230 = uStack_150;
        lStack_298 = lStack_1b8;
        lStack_2a0 = lStack_1c0;
        lStack_288 = lStack_1a8;
        uStack_290 = uStack_1b0;
        lStack_278 = lStack_198;
        lStack_280 = lStack_1a0;
        lStack_268 = lStack_188;
        uStack_270 = uStack_190;
        FUN_00186e98(&lStack_2a0,&lStack_320);
      }
      else {
        __ss6HasherV8_combineyySuF(2);
        lStack_2f8 = lStack_1f8;
        lStack_300 = lStack_200;
        lStack_2e8 = lStack_1e8;
        uStack_2f0 = uStack_1f0;
        uStack_2e0 = uStack_1e0;
        lStack_318 = lStack_218;
        lStack_320 = lStack_220;
        lStack_308 = lStack_208;
        uStack_310 = uStack_210;
        if ((uVar21 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar21 & 0xff);
        }
        if ((uVar21 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar21 >> 8 & 0xff);
        }
        if ((uVar21 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x10 & 0xff);
        }
        if ((uVar21 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e15e8 + (uVar21 >> 0x18 & 0xff) * 8));
        }
        if ((uVar21 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x20 & 0xff);
        }
        if ((uVar21 & 0xff0000000000) != 0x30000000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x28 & 0xff);
        }
        if ((uVar21 & 0xff000000000000) != 0x3000000000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x30 & 0xff);
        }
        if (uVar21 >> 0x38 != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x38);
        }
        func_0x001a9e74(&lStack_1c0,&lStack_2a0,0xaefe48,&UNK_007d9c20);
        func_0x001869f8(lVar11,uVar24,lVar13,uVar21);
        FUN_0013bd14(&lStack_320,1000,&UNK_00002711,lVar13);
        if (unaff_x21 == 0) {
          uVar3 = (uint)(uVar24 >> 0x20);
          uVar8 = uVar3 >> 0x1e;
          if (uVar3 >> 0x1e < 2) {
            if (uVar8 == 0) {
              if ((uVar24 & 0xff000000000000) == 0) goto LAB_0019e938;
            }
            else {
              lVar12 = (long)(int)lVar11;
              lVar15 = lVar11 >> 0x20;
LAB_0019ecdc:
              if (lVar12 == lVar15) goto LAB_0019e938;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_320,lVar11,uVar24);
          }
          else if (uVar8 == 2) {
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar15 = *(long *)(lVar11 + 0x18);
            goto LAB_0019ecdc;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_0019e938:
        FUN_00116294(lVar11,uVar24,lVar13,uVar21);
        lStack_1f8 = lStack_2f8;
        lStack_200 = lStack_300;
        lStack_1e8 = lStack_2e8;
        uStack_1f0 = uStack_2f0;
        uStack_1e0 = uStack_2e0;
        lStack_218 = lStack_318;
        lStack_220 = lStack_320;
        lStack_208 = lStack_308;
        uStack_210 = uStack_310;
      }
      if (bVar5 != 2) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
      }
      if (lVar14 != 1) {
        __ss6HasherV8_combineyySuF(4);
        lStack_278 = lStack_1f8;
        lStack_280 = lStack_200;
        lStack_268 = lStack_1e8;
        uStack_270 = uStack_1f0;
        uStack_260 = uStack_1e0;
        lStack_298 = lStack_218;
        lStack_2a0 = lStack_220;
        lStack_288 = lStack_208;
        uStack_290 = uStack_210;
        if ((uVar22 & 0xff) != 0xc) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e1588 + (uVar22 & 0xff) * 8));
        }
        if ((uVar22 & 0xff00) != 0xc00) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e1588 + (uVar22 >> 8 & 0xff) * 8));
        }
        if (lVar14 == 0) {
          func_0x00023304(lVar25,uVar27);
        }
        else {
          __ss6HasherV8_combineyySuF(3);
          func_0x00023304(lVar25,uVar27);
          _swift_bridgeObjectRetain(lVar14);
          __sSS4hash4intoys6HasherVz_tF(&lStack_2a0,uVar17,lVar14);
        }
        if (bVar6 != 0xc) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e1588 + uVar10 * 8));
        }
        uVar3 = (uint)(uVar27 >> 0x20);
        uVar8 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar8 == 0) {
            if ((uVar27 & 0xff000000000000) == 0) goto LAB_0019eb5c;
          }
          else {
            lVar11 = (long)(int)lVar25;
            lVar13 = lVar25 >> 0x20;
LAB_0019eb44:
            if (lVar11 == lVar13) goto LAB_0019eb5c;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_2a0,lVar25,uVar27);
        }
        else if (uVar8 == 2) {
          lVar11 = *(long *)(lVar25 + 0x10);
          lVar13 = *(long *)(lVar25 + 0x18);
          goto LAB_0019eb44;
        }
LAB_0019eb5c:
        FUN_00116310(lVar25,uVar27,uVar22,uVar17,lVar14,uVar10);
        lStack_1f8 = lStack_278;
        lStack_200 = lStack_280;
        lStack_1e8 = lStack_268;
        uStack_1f0 = uStack_270;
        uStack_1e0 = uStack_260;
        lStack_218 = lStack_298;
        lStack_220 = lStack_2a0;
        lStack_208 = lStack_288;
        uStack_210 = uStack_290;
      }
      if (((*(long *)(lVar20 + 0x10) == 0) || (FUN_0019d040(lVar20,999), unaff_x21 == 0)) &&
         (FUN_0013bd14(&lStack_220,1000,0x20000000,lVar26), unaff_x21 == 0)) {
        uVar3 = (uint)(uVar23 >> 0x20);
        uVar8 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar8 == 0) {
            if ((uVar23 & 0xff000000000000) == 0) goto LAB_0019ebd0;
          }
          else {
            lVar14 = (long)(int)lVar16;
            lVar16 = lVar16 >> 0x20;
LAB_0019ed00:
            if (lVar14 == lVar16) goto LAB_0019ebd0;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_220);
        }
        else if (uVar8 == 2) {
          lVar14 = *(long *)(lVar16 + 0x10);
          lVar16 = *(long *)(lVar16 + 0x18);
          goto LAB_0019ed00;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_0019ebd0:
      func_0x001a9e34(&lStack_1c0,0xaefe48,&UNK_007d9c20);
      lStack_e8 = lStack_1f8;
      lStack_f0 = lStack_200;
      lStack_d8 = lStack_1e8;
      uStack_e0 = uStack_1f0;
      uStack_d0 = uStack_1e0;
      lStack_108 = lStack_218;
      lStack_110 = lStack_220;
      lStack_f8 = lStack_208;
      uStack_100 = uStack_210;
    }
    uVar3 = (uint)(uVar2 >> 0x20);
    uVar8 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar8 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_0019ec4c;
      }
      else {
        lVar16 = (long)(int)lVar1;
        lVar14 = lVar1 >> 0x20;
LAB_0019ec34:
        if (lVar16 == lVar14) goto LAB_0019ec4c;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_110,lVar1,uVar2);
    }
    else if (uVar8 == 2) {
      lVar16 = *(long *)(lVar1 + 0x10);
      lVar14 = *(long *)(lVar1 + 0x18);
      goto LAB_0019ec34;
    }
LAB_0019ec4c:
    FUN_00023358(lVar1,uVar2);
    _swift_release(lVar18);
    if (lVar9 == 0) {
      unaff_x20[5] = lStack_e8;
      unaff_x20[4] = lStack_f0;
      unaff_x20[7] = lStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = uStack_d0;
      unaff_x20[1] = lStack_108;
      *unaff_x20 = lStack_110;
      unaff_x20[3] = lStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    plVar19 = plVar19 + 3;
    lStack_98 = lStack_e8;
    lStack_a0 = lStack_f0;
    lStack_88 = lStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    lStack_b8 = lStack_108;
    lStack_c0 = lStack_110;
    lStack_a8 = lStack_f8;
    uStack_b0 = uStack_100;
  } while( true );
}



/* Entry: 0019ed54; end: 0019ed6f;  */

void FUN_0019ed54(undefined8 param_1,undefined8 param_2)

{
  FUN_0019ed70(param_1,param_2,FUN_001656a0);
  return;
}



/* Entry: 0019ed70; end: 0019eedf;  */

void FUN_0019ed70(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_60 = unaff_x20[8];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  puVar9 = (undefined8 *)(param_1 + 0x30);
  do {
    lVar5 = lVar5 + -1;
    lVar1 = puVar9[-2];
    uVar2 = puVar9[-1];
    uVar8 = *puVar9;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_b0 = uStack_60;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    func_0x00023304(lVar1,uVar2);
    _swift_retain(uVar8);
    (*param_3)();
    if (unaff_x21 == 0) {
      uVar3 = (uint)(uVar2 >> 0x20);
      uVar4 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar4 == 0) {
          if ((uVar2 & 0xff000000000000) == 0) goto LAB_0019ee1c;
        }
        else {
          lVar6 = (long)(int)lVar1;
          lVar7 = lVar1 >> 0x20;
LAB_0019ee8c:
          if (lVar6 == lVar7) goto LAB_0019ee1c;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_f0,lVar1,uVar2);
      }
      else if (uVar4 == 2) {
        lVar6 = *(long *)(lVar1 + 0x10);
        lVar7 = *(long *)(lVar1 + 0x18);
        goto LAB_0019ee8c;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
LAB_0019ee1c:
    FUN_00023358(lVar1,uVar2);
    _swift_release(uVar8);
    if (lVar5 == 0) {
      unaff_x20[5] = uStack_c8;
      unaff_x20[4] = uStack_d0;
      unaff_x20[7] = uStack_b8;
      unaff_x20[6] = uStack_c0;
      unaff_x20[8] = uStack_b0;
      unaff_x20[1] = uStack_e8;
      *unaff_x20 = uStack_f0;
      unaff_x20[3] = uStack_d8;
      unaff_x20[2] = uStack_e0;
      return;
    }
    puVar9 = puVar9 + 3;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
  } while( true );
}



/* Entry: 0019eee0; end: 0019eef3;  */

void FUN_0019eee0(void)

{
  FUN_0019eef4();
  return;
}



/* Entry: 0019eef4; end: 0019f097;  */

void FUN_0019eef4(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  pcVar9 = (char *)(param_1 + 0x3c);
  do {
    lVar6 = lVar6 + -1;
    lVar7 = *(long *)(pcVar9 + -0x1c);
    uVar8 = *(ulong *)(pcVar9 + -0x14);
    iVar2 = *(int *)(pcVar9 + -0xc);
    iVar3 = *(int *)(pcVar9 + -4);
    cVar1 = *pcVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (pcVar9[-8] != '\x01') {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar2);
    }
    if (cVar1 != '\x01') {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar3);
    }
    uVar4 = (uint)(uVar8 >> 0x20);
    uVar5 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar5 == 0) {
        if ((uVar8 & 0xff000000000000) != 0) {
LAB_0019f008:
          func_0x00023304(lVar7,uVar8);
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar7,uVar8);
          FUN_00023358(lVar7,uVar8);
        }
      }
      else if ((long)(int)lVar7 != lVar7 >> 0x20) goto LAB_0019f008;
    }
    else if ((uVar5 == 2) && (*(long *)(lVar7 + 0x10) != *(long *)(lVar7 + 0x18)))
    goto LAB_0019f008;
    if (lVar6 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    pcVar9 = pcVar9 + 0x20;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 0019f098; end: 0019f5d7;  */

void FUN_0019f098(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar18;
  long lVar19;
  undefined1 auStack_250 [64];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  plVar18 = (long *)(param_1 + 0x20);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar13 = lVar13 + -1;
    lStack_e8 = plVar18[5];
    lStack_f0 = plVar18[4];
    lStack_d8 = plVar18[7];
    uStack_e0 = plVar18[6];
    uStack_c8 = plVar18[9];
    lStack_d0 = plVar18[8];
    uStack_b8 = plVar18[0xb];
    lStack_c0 = plVar18[10];
    uStack_108 = plVar18[1];
    lStack_110 = *plVar18;
    lVar19 = plVar18[3];
    lVar15 = plVar18[2];
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    uStack_120 = uStack_70;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    lStack_100 = lVar15;
    lStack_f8 = lVar19;
    if (lVar19 == 0) {
      FUN_001925f0(&lStack_110,&uStack_1c0);
      lVar15 = lStack_f0;
      lVar19 = lStack_e8;
      uVar2 = uStack_e0;
      lVar17 = lStack_d8;
      lVar3 = lStack_d0;
      uVar4 = uStack_c8;
      lVar5 = lStack_c0;
      uVar6 = uStack_b8;
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_001925f0(&lStack_110,&uStack_1c0);
      __sSS4hash4intoys6HasherVz_tF(&uStack_160,lVar15,lVar19);
      lVar15 = lStack_f0;
      lVar19 = lStack_e8;
      uVar2 = uStack_e0;
      lVar17 = lStack_d8;
      lVar3 = lStack_d0;
      uVar4 = uStack_c8;
      lVar5 = lStack_c0;
      uVar6 = uStack_b8;
    }
    lStack_f0 = lVar15;
    lStack_e8 = lVar19;
    uStack_e0 = uVar2;
    lStack_d8 = lVar17;
    lStack_d0 = lVar3;
    uStack_c8 = uVar4;
    lStack_c0 = lVar5;
    uStack_b8 = uVar6;
    if (lVar15 != 0) {
      __ss6HasherV8_combineyySuF(2);
      uVar11 = uStack_b8;
      lVar10 = lStack_c0;
      uVar9 = uStack_c8;
      lVar8 = lStack_d0;
      lVar16 = lStack_d8;
      uVar7 = uStack_e0;
      lVar14 = lStack_e8;
      uStack_198 = uStack_138;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      uStack_190 = uStack_130;
      uStack_180 = uStack_120;
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lStack_f0);
        func_0x00023304(lVar14,uVar7);
        _swift_bridgeObjectRetain(lVar16);
        func_0x001869f8(lVar8,uVar9,lVar10,uVar11);
      }
      else {
        __ss6HasherV8_combineyySuF(1);
        uStack_1e8 = uStack_198;
        uStack_1f0 = uStack_1a0;
        uStack_1d8 = uStack_188;
        uStack_1e0 = uStack_190;
        uStack_1d0 = uStack_180;
        uStack_208 = uStack_1b8;
        uStack_210 = uStack_1c0;
        uStack_1f8 = uStack_1a8;
        uStack_200 = uStack_1b0;
        if ((uVar6 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar6 & 0xff);
        }
        if ((uVar6 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar6 >> 8 & 0xff);
        }
        if ((uVar6 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x10 & 0xff);
        }
        if ((uVar6 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e15e8 + (uVar6 >> 0x18 & 0xff) * 8));
        }
        if ((uVar6 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x20 & 0xff);
        }
        if ((uVar6 & 0xff0000000000) != 0x30000000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x28 & 0xff);
        }
        if ((uVar6 & 0xff000000000000) != 0x3000000000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x30 & 0xff);
        }
        if (uVar6 >> 0x38 != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x38);
        }
        func_0x001a9e74(&lStack_f0,auStack_250,0xaefe58,&UNK_007d9c30);
        func_0x001869f8(lVar3,uVar4,lVar5,uVar6);
        FUN_0013bd14(&uStack_210,1000,&UNK_00002711,lVar5);
        if (unaff_x21 == 0) {
          uVar1 = (uint)(uVar4 >> 0x20);
          uVar12 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar12 == 0) {
              if ((uVar4 & 0xff000000000000) == 0) goto LAB_0019f37c;
            }
            else {
              lVar14 = (long)(int)lVar3;
              lVar16 = lVar3 >> 0x20;
LAB_0019f558:
              if (lVar14 == lVar16) goto LAB_0019f37c;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_210,lVar3,uVar4);
          }
          else if (uVar12 == 2) {
            lVar14 = *(long *)(lVar3 + 0x10);
            lVar16 = *(long *)(lVar3 + 0x18);
            goto LAB_0019f558;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_0019f37c:
        FUN_00116294(lVar3,uVar4,lVar5,uVar6);
        uStack_198 = uStack_1e8;
        uStack_1a0 = uStack_1f0;
        uStack_188 = uStack_1d8;
        uStack_190 = uStack_1e0;
        uStack_180 = uStack_1d0;
        uStack_1b8 = uStack_208;
        uStack_1c0 = uStack_210;
        uStack_1a8 = uStack_1f8;
        uStack_1b0 = uStack_200;
      }
      if (((*(long *)(lVar15 + 0x10) == 0) || (FUN_0019d040(lVar15,999), unaff_x21 == 0)) &&
         (FUN_0013bd14(&uStack_1c0,1000,0x20000000,lVar17), unaff_x21 == 0)) {
        uVar1 = (uint)(uVar2 >> 0x20);
        uVar12 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar12 == 0) {
            if ((uVar2 & 0xff000000000000) == 0) goto LAB_0019f43c;
          }
          else {
            lVar15 = (long)(int)lVar19;
            lVar17 = lVar19 >> 0x20;
LAB_0019f580:
            if (lVar15 == lVar17) goto LAB_0019f43c;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1c0,lVar19);
        }
        else if (uVar12 == 2) {
          lVar15 = *(long *)(lVar19 + 0x10);
          lVar17 = *(long *)(lVar19 + 0x18);
          goto LAB_0019f580;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_0019f43c:
      func_0x001a9e34(&lStack_f0,0xaefe58,&UNK_007d9c30);
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      uStack_130 = uStack_190;
      uStack_120 = uStack_180;
      uStack_158 = uStack_1b8;
      uStack_160 = uStack_1c0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
    }
    uVar1 = (uint)(uStack_108 >> 0x20);
    uVar12 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uStack_108 & 0xff000000000000) != 0) {
LAB_0019f4b8:
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_160);
        }
      }
      else if ((long)(int)lStack_110 != lStack_110 >> 0x20) goto LAB_0019f4b8;
    }
    else if ((uVar12 == 2) && (*(long *)(lStack_110 + 0x10) != *(long *)(lStack_110 + 0x18)))
    goto LAB_0019f4b8;
    func_0x00192624(&lStack_110);
    if (lVar13 == 0) {
      unaff_x20[5] = uStack_138;
      unaff_x20[4] = uStack_140;
      unaff_x20[7] = uStack_128;
      unaff_x20[6] = uStack_130;
      unaff_x20[8] = uStack_120;
      unaff_x20[1] = uStack_158;
      *unaff_x20 = uStack_160;
      unaff_x20[3] = uStack_148;
      unaff_x20[2] = uStack_150;
      return;
    }
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_70 = uStack_120;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    plVar18 = plVar18 + 0xc;
  } while( true );
}



/* Entry: 0019f5d8; end: 0019fb87;  */

void FUN_0019f5d8(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  uint7 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar18;
  undefined1 auStack_270 [32];
  long lStack_250;
  ulong uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  char cStack_c0;
  uint7 uStack_bf;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  plVar18 = (long *)(param_1 + 0x20);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar14 = lVar14 + -1;
    lStack_d8 = plVar18[9];
    lStack_e0 = plVar18[8];
    uStack_d0 = plVar18[10];
    uStack_c8 = (undefined1)plVar18[0xb];
    uStack_bf = (uint7)*(undefined8 *)((long)plVar18 + 0x61);
    cStack_b8 = (char)((ulong)*(undefined8 *)((long)plVar18 + 0x61) >> 0x38);
    uStack_c7 = (undefined7)*(undefined8 *)((long)plVar18 + 0x59);
    cStack_c0 = (char)((ulong)*(undefined8 *)((long)plVar18 + 0x59) >> 0x38);
    uStack_118 = plVar18[1];
    lStack_120 = *plVar18;
    uStack_108 = plVar18[3];
    lVar17 = plVar18[2];
    lStack_f8 = plVar18[5];
    lStack_100 = plVar18[4];
    uStack_e8 = plVar18[7];
    lStack_f0 = plVar18[6];
    uStack_130 = uStack_70;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_110._4_1_ = (char)((ulong)lVar17 >> 0x20);
    bVar12 = uStack_110._4_1_ != '\x01';
    uStack_110 = lVar17;
    if (bVar12) {
      uStack_110._0_4_ = (int)lVar17;
      lVar17 = (long)(int)uStack_110;
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    if (uStack_108._4_1_ != '\x01') {
      lVar17 = (long)(int)uStack_108;
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    cVar11 = cStack_b8;
    uVar10 = uStack_bf;
    cVar9 = cStack_c0;
    uVar8 = uStack_d0;
    lVar7 = lStack_d8;
    lVar6 = lStack_e0;
    uVar5 = uStack_e8;
    lVar4 = lStack_f0;
    lVar15 = lStack_f8;
    lVar17 = lStack_100;
    if (lStack_100 == 0) {
      func_0x001926b0(&lStack_120,&uStack_1e0);
    }
    else {
      lVar2 = CONCAT71(uStack_c7,uStack_c8);
      uVar3 = CONCAT71(uStack_bf,cStack_c0);
      __ss6HasherV8_combineyySuF(3);
      uStack_208 = uStack_148;
      uStack_210 = uStack_150;
      uStack_1f8 = uStack_138;
      uStack_200 = uStack_140;
      uStack_1f0 = uStack_130;
      uStack_228 = uStack_168;
      uStack_230 = uStack_170;
      uStack_218 = uStack_158;
      uStack_220 = uStack_160;
      if (*(long *)(lVar15 + 0x10) == 0) {
        func_0x001926b0(&lStack_120,&uStack_1e0);
        func_0x001a9e74(&lStack_100,&uStack_1e0,0xaefe90,&UNK_007e1580);
LAB_0019f7ac:
        if (cVar11 != '\x02') {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(cVar11);
        }
        if (lVar2 != 0) {
          __ss6HasherV8_combineyySuF(0x32);
          uStack_1b8 = uStack_208;
          uStack_1c0 = uStack_210;
          uStack_1a8 = uStack_1f8;
          uStack_1b0 = uStack_200;
          uStack_1a0 = uStack_1f0;
          uStack_1d8 = uStack_228;
          uStack_1e0 = uStack_230;
          uStack_1c8 = uStack_218;
          uStack_1d0 = uStack_220;
          if (cVar9 != '\x04') {
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(cVar9);
          }
          if (((ulong)uVar10 & 0xff) != 3) {
            __ss6HasherV8_combineyySuF(2);
            __ss6HasherV8_combineyySuF((ulong)uVar10 & 0xff);
          }
          if (((ulong)uVar10 & 0xff00) != 0x300) {
            __ss6HasherV8_combineyySuF(3);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 8) & 0xff);
          }
          if (((ulong)uVar10 & 0xff0000) != 0x30000) {
            __ss6HasherV8_combineyySuF(4);
            __ss6HasherV8_combineyySuF
                      (*(undefined8 *)(&UNK_007e15e8 + (((ulong)uVar10 & 0xff0000) >> 0x10) * 8));
          }
          if (((ulong)uVar10 & 0xff000000) != 0x3000000) {
            __ss6HasherV8_combineyySuF(5);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x18) & 0xff);
          }
          if (((ulong)uVar10 & 0xff00000000) != 0x300000000) {
            __ss6HasherV8_combineyySuF(6);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x20) & 0xff);
          }
          if (((ulong)uVar10 & 0xff0000000000) != 0x30000000000) {
            __ss6HasherV8_combineyySuF(7);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x28) & 0xff);
          }
          if ((ulong)(uVar10 >> 0x30) != 5) {
            __ss6HasherV8_combineyySuF(8);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x30));
          }
          lStack_250 = lVar7;
          uStack_248 = uVar8;
          lStack_240 = lVar2;
          uStack_238 = uVar3;
          func_0x00186a24(&lStack_250,auStack_270);
          FUN_0013bd14(&uStack_1e0,1000,&UNK_00002711,lVar2);
          if (unaff_x21 == 0) {
            uVar1 = (uint)(uVar8 >> 0x20);
            uVar13 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar13 == 0) {
                if ((uVar8 & 0xff000000000000) == 0) goto LAB_0019f974;
              }
              else {
                lVar15 = (long)(int)lVar7;
                lVar16 = lVar7 >> 0x20;
LAB_0019fb08:
                if (lVar15 == lVar16) goto LAB_0019f974;
              }
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1e0,lVar7,uVar8);
            }
            else if (uVar13 == 2) {
              lVar15 = *(long *)(lVar7 + 0x10);
              lVar16 = *(long *)(lVar7 + 0x18);
              goto LAB_0019fb08;
            }
          }
          else {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
LAB_0019f974:
          FUN_00116294(lVar7,uVar8,lVar2,uVar3);
          uStack_208 = uStack_1b8;
          uStack_210 = uStack_1c0;
          uStack_1f8 = uStack_1a8;
          uStack_200 = uStack_1b0;
          uStack_1f0 = uStack_1a0;
          uStack_228 = uStack_1d8;
          uStack_230 = uStack_1e0;
          uStack_218 = uStack_1c8;
          uStack_220 = uStack_1d0;
        }
        if (((*(long *)(lVar17 + 0x10) == 0) || (FUN_0019d040(lVar17,999), unaff_x21 == 0)) &&
           (FUN_0013bd14(&uStack_230,1000,0x20000000,lVar6), unaff_x21 == 0)) {
          uVar1 = (uint)(uVar5 >> 0x20);
          uVar13 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar13 == 0) {
              if ((uVar5 & 0xff000000000000) == 0) goto LAB_0019f9f4;
            }
            else {
              lVar17 = (long)(int)lVar4;
              lVar15 = lVar4 >> 0x20;
LAB_0019fb30:
              if (lVar17 == lVar15) goto LAB_0019f9f4;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_230,lVar4);
          }
          else if (uVar13 == 2) {
            lVar17 = *(long *)(lVar4 + 0x10);
            lVar15 = *(long *)(lVar4 + 0x18);
            goto LAB_0019fb30;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
      }
      else {
        func_0x001926b0(&lStack_120,&uStack_1e0);
        func_0x001a9e74(&lStack_100,&uStack_1e0,0xaefe90,&UNK_007e1580);
        FUN_0019fb88(lVar15,2);
        if (unaff_x21 == 0) goto LAB_0019f7ac;
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_0019f9f4:
      func_0x001a9e34(&lStack_100,0xaefe90,&UNK_007e1580);
      uStack_148 = uStack_208;
      uStack_150 = uStack_210;
      uStack_138 = uStack_1f8;
      uStack_140 = uStack_200;
      uStack_130 = uStack_1f0;
      uStack_168 = uStack_228;
      uStack_170 = uStack_230;
      uStack_158 = uStack_218;
      uStack_160 = uStack_220;
    }
    uVar1 = (uint)(uStack_118 >> 0x20);
    uVar13 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar13 == 0) {
        if ((uStack_118 & 0xff000000000000) == 0) goto LAB_0019fa70;
      }
      else {
        lVar17 = (long)(int)lStack_120;
        lVar15 = lStack_120 >> 0x20;
LAB_0019fa60:
        if (lVar17 == lVar15) goto LAB_0019fa70;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_170);
    }
    else if (uVar13 == 2) {
      lVar17 = *(long *)(lStack_120 + 0x10);
      lVar15 = *(long *)(lStack_120 + 0x18);
      goto LAB_0019fa60;
    }
LAB_0019fa70:
    func_0x001926e4(&lStack_120);
    if (lVar14 == 0) {
      unaff_x20[5] = uStack_148;
      unaff_x20[4] = uStack_150;
      unaff_x20[7] = uStack_138;
      unaff_x20[6] = uStack_140;
      unaff_x20[8] = uStack_130;
      unaff_x20[1] = uStack_168;
      *unaff_x20 = uStack_170;
      unaff_x20[3] = uStack_158;
      unaff_x20[2] = uStack_160;
      return;
    }
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_70 = uStack_130;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    plVar18 = plVar18 + 0xe;
  } while( true );
}



/* Entry: 0019fb88; end: 0019fda3;  */

void FUN_0019fb88(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  byte bStack_a8;
  byte bStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_60 = unaff_x20[8];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  plVar8 = (long *)(param_1 + 0x20);
  do {
    lVar5 = lVar5 + -1;
    uStack_d8 = plVar8[1];
    lStack_e0 = *plVar8;
    lStack_c8 = plVar8[3];
    lVar7 = plVar8[2];
    lStack_c0 = plVar8[4];
    uStack_b8 = (undefined2)plVar8[5];
    uVar9 = *(undefined8 *)((long)plVar8 + 0x32);
    uStack_ae = (undefined6)uVar9;
    bStack_a8 = (byte)((ulong)uVar9 >> 0x30);
    bStack_a7 = (byte)((ulong)uVar9 >> 0x38);
    uStack_b6 = (undefined6)*(undefined8 *)((long)plVar8 + 0x2a);
    uStack_b0 = (undefined2)((ulong)*(undefined8 *)((long)plVar8 + 0x2a) >> 0x30);
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_f0 = uStack_60;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_d0._4_1_ = (char)((ulong)lVar7 >> 0x20);
    bVar3 = uStack_d0._4_1_ != '\x01';
    uStack_d0 = lVar7;
    if (bVar3) {
      uStack_d0._0_4_ = (int)lVar7;
      lVar7 = (long)(int)uStack_d0;
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF(lVar7);
    }
    lVar6 = lStack_c0;
    lVar7 = lStack_c8;
    if (lStack_c0 == 0) {
      FUN_00192a70(&lStack_e0,auStack_170);
      lVar7 = CONCAT62(uStack_ae,uStack_b0);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      FUN_00192a70(&lStack_e0,auStack_170);
      __sSS4hash4intoys6HasherVz_tF(&uStack_130,lVar7,lVar6);
      lVar7 = CONCAT62(uStack_ae,uStack_b0);
    }
    if (lVar7 != 0) {
      uVar9 = CONCAT62(uStack_b6,uStack_b8);
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&uStack_130,uVar9,lVar7);
    }
    bVar2 = bStack_a8;
    if (bStack_a8 != 2) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    }
    bVar2 = bStack_a7;
    if (bStack_a7 != 2) {
      __ss6HasherV8_combineyySuF(6);
      __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    }
    uVar1 = (uint)(uStack_d8 >> 0x20);
    uVar4 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar4 == 0) {
        if ((uStack_d8 & 0xff000000000000) == 0) goto LAB_0019fd3c;
      }
      else {
        lVar7 = (long)(int)lStack_e0;
        lVar6 = lStack_e0 >> 0x20;
LAB_0019fd2c:
        if (lVar7 == lVar6) goto LAB_0019fd3c;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_130);
    }
    else if (uVar4 == 2) {
      lVar7 = *(long *)(lStack_e0 + 0x10);
      lVar6 = *(long *)(lStack_e0 + 0x18);
      goto LAB_0019fd2c;
    }
LAB_0019fd3c:
    func_0x00192aa4(&lStack_e0);
    if (lVar5 == 0) {
      unaff_x20[5] = uStack_108;
      unaff_x20[4] = uStack_110;
      unaff_x20[7] = uStack_f8;
      unaff_x20[6] = uStack_100;
      unaff_x20[8] = uStack_f0;
      unaff_x20[1] = uStack_128;
      *unaff_x20 = uStack_130;
      unaff_x20[3] = uStack_118;
      unaff_x20[2] = uStack_120;
      return;
    }
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_68 = uStack_f8;
    uStack_70 = uStack_100;
    uStack_60 = uStack_f0;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    plVar8 = plVar8 + 8;
  } while( true );
}



/* Entry: 0019fda4; end: 001a03ef;  */

void FUN_0019fda4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_1d0 [32];
  long lStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  plVar9 = (long *)(param_1 + 0x30);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar7 = lVar7 + -1;
    lVar1 = plVar9[-2];
    uVar2 = plVar9[-1];
    lVar12 = *plVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    _swift_beginAccess(lVar12 + 0x10,auStack_118,0,0);
    bVar4 = *(byte *)(lVar12 + 0x10);
    if ((ulong)bVar4 != 0xc) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e1588 + (ulong)bVar4 * 8));
    }
    _swift_beginAccess(lVar12 + 0x18,auStack_130,0,0);
    lVar13 = *(long *)(lVar12 + 0x28);
    if (lVar13 == 0) {
      func_0x00023304(lVar1,uVar2);
      _swift_retain(lVar12);
    }
    else {
      lVar10 = *(long *)(lVar12 + 0x18);
      uVar3 = *(ulong *)(lVar12 + 0x20);
      uVar14 = *(ulong *)(lVar12 + 0x30);
      __ss6HasherV8_combineyySuF(4);
      uStack_168 = uStack_d8;
      uStack_170 = uStack_e0;
      uStack_158 = uStack_c8;
      uStack_160 = uStack_d0;
      uStack_150 = uStack_c0;
      uStack_188 = uStack_f8;
      uStack_190 = uStack_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      if ((uVar14 & 0xff) != 4) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(uVar14 & 0xff);
      }
      if ((uVar14 & 0xff00) != 0x300) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(uVar14 >> 8 & 0xff);
      }
      if ((uVar14 & 0xff0000) != 0x30000) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x10 & 0xff);
      }
      if ((uVar14 & 0xff000000) != 0x3000000) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e15e8 + (uVar14 >> 0x18 & 0xff) * 8));
      }
      if ((uVar14 & 0xff00000000) != 0x300000000) {
        __ss6HasherV8_combineyySuF(5);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x20 & 0xff);
      }
      if ((uVar14 & 0xff0000000000) != 0x30000000000) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x28 & 0xff);
      }
      if ((uVar14 & 0xff000000000000) != 0x3000000000000) {
        __ss6HasherV8_combineyySuF(7);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x30 & 0xff);
      }
      if (uVar14 >> 0x38 != 5) {
        __ss6HasherV8_combineyySuF(8);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x38);
      }
      func_0x00023304(lVar1,uVar2);
      _swift_retain(lVar12);
      func_0x001869f8(lVar10,uVar3,lVar13,uVar14);
      FUN_0013bd14(&uStack_190,1000,&UNK_00002711,lVar13);
      if (unaff_x21 == 0) {
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar6 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar6 == 0) {
            if ((uVar3 & 0xff000000000000) == 0) goto LAB_001a0048;
          }
          else {
            lVar8 = (long)(int)lVar10;
            lVar11 = lVar10 >> 0x20;
LAB_001a0370:
            if (lVar8 == lVar11) goto LAB_001a0048;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_190,lVar10,uVar3);
        }
        else if (uVar6 == 2) {
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)(lVar10 + 0x18);
          goto LAB_001a0370;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_001a0048:
      FUN_00116294(lVar10,uVar3,lVar13,uVar14);
      uStack_d8 = uStack_168;
      uStack_e0 = uStack_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_c0 = uStack_150;
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
    }
    _swift_beginAccess(lVar12 + 0x38,auStack_148,0,0);
    lVar13 = *(long *)(lVar12 + 0x48);
    if (lVar13 != 0) {
      lVar10 = *(long *)(lVar12 + 0x38);
      uVar3 = *(ulong *)(lVar12 + 0x40);
      uVar14 = *(ulong *)(lVar12 + 0x50);
      __ss6HasherV8_combineyySuF(5);
      uStack_168 = uStack_d8;
      uStack_170 = uStack_e0;
      uStack_158 = uStack_c8;
      uStack_160 = uStack_d0;
      uStack_150 = uStack_c0;
      uStack_188 = uStack_f8;
      uStack_190 = uStack_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      if ((uVar14 & 0xff) != 4) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(uVar14 & 0xff);
      }
      if ((uVar14 & 0xff00) != 0x300) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(uVar14 >> 8 & 0xff);
      }
      if ((uVar14 & 0xff0000) != 0x30000) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x10 & 0xff);
      }
      if ((uVar14 & 0xff000000) != 0x3000000) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007e15e8 + (uVar14 >> 0x18 & 0xff) * 8));
      }
      if ((uVar14 & 0xff00000000) != 0x300000000) {
        __ss6HasherV8_combineyySuF(5);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x20 & 0xff);
      }
      if ((uVar14 & 0xff0000000000) != 0x30000000000) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x28 & 0xff);
      }
      if ((uVar14 & 0xff000000000000) != 0x3000000000000) {
        __ss6HasherV8_combineyySuF(7);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x30 & 0xff);
      }
      if (uVar14 >> 0x38 != 5) {
        __ss6HasherV8_combineyySuF(8);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x38);
      }
      lStack_1b0 = lVar10;
      uStack_1a8 = uVar3;
      lStack_1a0 = lVar13;
      uStack_198 = uVar14;
      func_0x00186a24(&lStack_1b0,auStack_1d0);
      FUN_0013bd14(&uStack_190,1000,&UNK_00002711,lVar13);
      if (unaff_x21 == 0) {
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar6 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar6 == 0) {
            if ((uVar3 & 0xff000000000000) == 0) goto LAB_001a0254;
          }
          else {
            lVar8 = (long)(int)lVar10;
            lVar11 = lVar10 >> 0x20;
LAB_001a0394:
            if (lVar8 == lVar11) goto LAB_001a0254;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_190,lVar10,uVar3);
        }
        else if (uVar6 == 2) {
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)(lVar10 + 0x18);
          goto LAB_001a0394;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_001a0254:
      FUN_00116294(lVar10,uVar3,lVar13,uVar14);
      uStack_d8 = uStack_168;
      uStack_e0 = uStack_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_c0 = uStack_150;
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
    }
    uVar5 = (uint)(uVar2 >> 0x20);
    uVar6 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar6 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_001a02d0;
      }
      else {
        lVar13 = (long)(int)lVar1;
        lVar10 = lVar1 >> 0x20;
LAB_001a02b8:
        if (lVar13 == lVar10) goto LAB_001a02d0;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar1,uVar2);
    }
    else if (uVar6 == 2) {
      lVar13 = *(long *)(lVar1 + 0x10);
      lVar10 = *(long *)(lVar1 + 0x18);
      goto LAB_001a02b8;
    }
LAB_001a02d0:
    FUN_00023358(lVar1,uVar2);
    _swift_release(lVar12);
    if (lVar7 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    plVar9 = plVar9 + 3;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 001a03f0; end: 001a0637;  */

void FUN_001a03f0(long param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_188 [56];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  int iStack_d8;
  char cStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  int iStack_d0;
  char cStack_cc;
  char cStack_cb;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  lVar10 = 0;
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    plVar4 = (long *)(param_1 + 0x20 + lVar10 * 0x38);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x2e);
    iStack_d0 = (int)((ulong)uVar5 >> 0x10);
    cStack_cc = (char)((ulong)uVar5 >> 0x30);
    cStack_cb = (char)((ulong)uVar5 >> 0x38);
    lStack_e8 = plVar4[3];
    uStack_f0 = plVar4[2];
    lVar7 = plVar4[5];
    lStack_e0 = plVar4[4];
    iStack_d8 = (int)lVar7;
    cStack_d4 = (char)((ulong)lVar7 >> 0x20);
    uStack_d3 = (undefined1)((ulong)lVar7 >> 0x28);
    uStack_d2 = (undefined2)((ulong)lVar7 >> 0x30);
    lStack_f8 = plVar4[1];
    lVar6 = *plVar4;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_110 = uStack_80;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    lVar7 = *(long *)(lVar6 + 0x10);
    lStack_100 = lVar6;
    if (lVar7 != 0) {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
      puVar8 = (undefined4 *)(lVar6 + 0x20);
      do {
        __ss6HasherV8_combineyys6UInt32VF(*puVar8);
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
    lVar6 = lStack_e0;
    lVar7 = lStack_e8;
    if (lStack_e0 == 0) {
      FUN_00191f34(&lStack_100,auStack_188);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      FUN_00191f34(&lStack_100,auStack_188);
      __sSS4hash4intoys6HasherVz_tF(&uStack_150,lVar7,lVar6);
    }
    if (cStack_d4 != '\x01') {
      lVar7 = (long)iStack_d8;
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyys6UInt64VF(lVar7);
    }
    if (cStack_cc != '\x01') {
      lVar7 = (long)iStack_d0;
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt64VF(lVar7);
    }
    cVar2 = cStack_cb;
    if (cStack_cb != '\x03') {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyySuF(cVar2);
    }
    uVar1 = (uint)(uStack_f0 >> 0x20);
    uVar3 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar3 == 0) {
        if ((uStack_f0 & 0xff000000000000) == 0) goto LAB_001a05c8;
      }
      else {
        lVar7 = (long)(int)lStack_f8;
        lVar6 = lStack_f8 >> 0x20;
LAB_001a05b8:
        if (lVar7 == lVar6) goto LAB_001a05c8;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_150);
    }
    else if (uVar3 == 2) {
      lVar7 = *(long *)(lStack_f8 + 0x10);
      lVar6 = *(long *)(lStack_f8 + 0x18);
      goto LAB_001a05b8;
    }
LAB_001a05c8:
    lVar10 = lVar10 + 1;
    func_0x00191f68(&lStack_100);
    if (lVar10 == lVar9) {
      unaff_x20[5] = uStack_128;
      unaff_x20[4] = uStack_130;
      unaff_x20[7] = uStack_118;
      unaff_x20[6] = uStack_120;
      unaff_x20[8] = uStack_110;
      unaff_x20[1] = uStack_148;
      *unaff_x20 = uStack_150;
      unaff_x20[3] = uStack_138;
      unaff_x20[2] = uStack_140;
      return;
    }
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_80 = uStack_110;
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
  } while( true );
}



/* Entry: 001a0638; end: 001a17df;  */

void FUN_001a0638(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  code *pcVar19;
  bool bVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 *unaff_x20;
  ulong uVar41;
  ulong uVar42;
  long unaff_x21;
  uint uVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  uint uVar50;
  ulong uVar51;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar45 = *(long *)(param_1 + 0x10);
  if (lVar45 != 0) {
    lVar44 = 0;
    do {
      puVar26 = (ulong *)(param_1 + 0x20 + lVar44 * 0x30);
      uVar1 = *puVar26;
      uVar6 = puVar26[1];
      uVar48 = puVar26[2];
      bVar15 = (byte)puVar26[3];
      uVar2 = puVar26[4];
      uVar7 = puVar26[5];
      uStack_b8 = unaff_x20[5];
      uStack_c0 = unaff_x20[4];
      uStack_a8 = unaff_x20[7];
      uStack_b0 = unaff_x20[6];
      uStack_a0 = unaff_x20[8];
      uStack_d8 = unaff_x20[1];
      uStack_e0 = *unaff_x20;
      uStack_c8 = unaff_x20[3];
      uStack_d0 = unaff_x20[2];
      uVar43 = (uint)bVar15;
      if ((((uVar48 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar43 == 0xff)) {
        FUN_000f2290(uVar1,uVar6,uVar48,0xff);
        func_0x00023304(uVar2,uVar7);
      }
      else {
        uVar25 = (uint)(uVar48 >> 0x20);
        uVar17 = uVar25 >> 0x1c & 0xfffffc03 | (uVar43 & 0x3f) << 2;
        if (uVar17 < 3) {
          if (uVar17 == 0) {
            FUN_000f2290(uVar1,uVar6,uVar48,bVar15);
            func_0x00023304(uVar2,uVar7);
            FUN_000f2330(uVar1,uVar6,uVar48,bVar15);
            __ss6HasherV8_combineyySuF(1);
            uVar51 = 0;
            if ((uVar6 & 0xff) != 1) {
              uVar51 = uVar1;
            }
            __ss6HasherV8_combineyySuF(uVar51);
          }
          else if (uVar17 == 1) {
            FUN_000f2290(uVar1,uVar6,uVar48,bVar15);
            func_0x00023304(uVar2,uVar7);
            FUN_000f2330(uVar1,uVar6,uVar48,bVar15);
            __ss6HasherV8_combineyySuF(2);
            uVar51 = 0;
            if ((uVar1 & 0x7fffffffffffffff) != 0) {
              uVar51 = uVar1;
            }
            __ss6HasherV8_combineyys6UInt64VF(uVar51);
          }
          else {
            __ss6HasherV8_combineyySuF(3);
            FUN_000f2290(uVar1,uVar6,uVar48,bVar15);
            func_0x00023304(uVar2,uVar7);
            __sSS4hash4intoys6HasherVz_tF(&uStack_e0,uVar1,uVar6);
          }
        }
        else if (uVar17 == 3) {
          FUN_000f2290(uVar1,uVar6,uVar48,bVar15);
          func_0x00023304(uVar2,uVar7);
          FUN_000f2330(uVar1,uVar6,uVar48,bVar15);
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyys5UInt8VF((uint)uVar1 & 1);
        }
        else {
          if (uVar17 == 4) {
            __ss6HasherV8_combineyySuF(5);
            uStack_108 = uStack_b8;
            uStack_110 = uStack_c0;
            uStack_f8 = uStack_a8;
            uStack_100 = uStack_b0;
            uStack_f0 = uStack_a0;
            uStack_128 = uStack_d8;
            uStack_130 = uStack_e0;
            uStack_118 = uStack_c8;
            uStack_120 = uStack_d0;
            if (*(long *)(uVar1 + 0x10) == 0) {
              FUN_000f2290(uVar1,uVar6,uVar48,bVar15);
              func_0x00023304(uVar2,uVar7);
              FUN_000f2290(uVar1,uVar6,uVar48,bVar15);
            }
            else {
              __ss6HasherV8_combineyySuF(1);
              uVar41 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
              uVar51 = 0xffffffffffffffff;
              if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
                uVar51 = ~(-1L << (uVar41 & 0x3f));
              }
              uVar51 = uVar51 & *(ulong *)(uVar1 + 0x40);
              FUN_000f2290(uVar1,uVar6,uVar48,uVar43);
              func_0x00023304(uVar2,uVar7);
              FUN_000f2290(uVar1,uVar6,uVar48,uVar43);
              _swift_bridgeObjectRetain(uVar1);
              uVar39 = 0;
              lVar31 = 0;
              while( true ) {
                while (uVar51 == 0) {
                  bVar20 = SCARRY8(lVar31,1);
                  lVar31 = lVar31 + 1;
                  if (bVar20) {
                    /* WARNING: Does not return */
                    pcVar19 = (code *)SoftwareBreakpoint(1,0x1a17d8);
                    (*pcVar19)();
                  }
                  if ((long)(uVar41 + 0x3f >> 6) <= lVar31) goto LAB_001a16dc;
                  uVar51 = ((ulong *)(uVar1 + 0x40))[lVar31];
                }
                uVar27 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar51 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                uVar27 = LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) | lVar31 << 6;
                puVar30 = (undefined8 *)(*(long *)(uVar1 + 0x30) + uVar27 * 0x10);
                uVar3 = *puVar30;
                lVar38 = puVar30[1];
                puVar26 = (ulong *)(*(long *)(uVar1 + 0x38) + uVar27 * 0x30);
                uVar27 = *puVar26;
                uVar8 = puVar26[1];
                uVar49 = puVar26[2];
                uVar46 = puVar26[3];
                uVar21 = puVar26[4];
                uVar9 = puVar26[5];
                _swift_bridgeObjectRetain(lVar38);
                uVar43 = (uint)(byte)uVar46;
                FUN_000f2290(uVar27,uVar8,uVar49,(byte)uVar46);
                func_0x00023304(uVar21,uVar9);
                if (lVar38 == 0) break;
                uStack_158 = uStack_108;
                uStack_160 = uStack_110;
                uStack_148 = uStack_f8;
                uStack_150 = uStack_100;
                uStack_140 = uStack_f0;
                uStack_178 = uStack_128;
                uStack_180 = uStack_130;
                uStack_168 = uStack_118;
                uStack_170 = uStack_120;
                __sSS4hash4intoys6HasherVz_tF(&uStack_180,uVar3,lVar38);
                _swift_bridgeObjectRelease(lVar38);
                uStack_1a8 = uStack_158;
                uStack_1b0 = uStack_160;
                uStack_198 = uStack_148;
                uStack_1a0 = uStack_150;
                uStack_190 = uStack_140;
                uStack_1c8 = uStack_178;
                uStack_1d0 = uStack_180;
                uStack_1b8 = uStack_168;
                uStack_1c0 = uStack_170;
                if ((((uVar49 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (uVar43 != 0xff))
                {
                  uVar17 = (uint)(uVar49 >> 0x20);
                  uVar50 = uVar17 >> 0x1c & 0xfffffc03 | (uVar43 & 0x3f) << 2;
                  if (uVar50 < 3) {
                    if (uVar50 == 0) {
                      FUN_000f2330(uVar27,uVar8,uVar49,uVar43);
                      __ss6HasherV8_combineyySuF(1);
                      uVar46 = 0;
                      if ((uVar8 & 0xff) != 1) {
                        uVar46 = uVar27;
                      }
                      __ss6HasherV8_combineyySuF(uVar46);
                    }
                    else if (uVar50 == 1) {
                      FUN_000f2330(uVar27,uVar8,uVar49,uVar43);
                      __ss6HasherV8_combineyySuF(2);
                      uVar46 = 0;
                      if ((uVar27 & 0x7fffffffffffffff) != 0) {
                        uVar46 = uVar27;
                      }
                      __ss6HasherV8_combineyys6UInt64VF(uVar46);
                    }
                    else {
                      __ss6HasherV8_combineyySuF(3);
                      __sSS4hash4intoys6HasherVz_tF(&uStack_1d0,uVar27,uVar8);
                    }
                  }
                  else if (uVar50 == 3) {
                    FUN_000f2330(uVar27,uVar8,uVar49,uVar43);
                    __ss6HasherV8_combineyySuF(4);
                    __ss6HasherV8_combineyys5UInt8VF((uint)uVar27 & 1);
                  }
                  else {
                    if (uVar50 == 4) {
                      __ss6HasherV8_combineyySuF(5);
                      uStack_1f8 = uStack_1a8;
                      uStack_200 = uStack_1b0;
                      uStack_1e8 = uStack_198;
                      uStack_1f0 = uStack_1a0;
                      uStack_1e0 = uStack_190;
                      uStack_218 = uStack_1c8;
                      uStack_220 = uStack_1d0;
                      uStack_208 = uStack_1b8;
                      uStack_210 = uStack_1c0;
                      if (*(long *)(uVar27 + 0x10) == 0) {
                        FUN_000f22b4(uVar27,uVar8,uVar49,uVar43);
                      }
                      else {
                        __ss6HasherV8_combineyySuF(1);
                        uVar32 = 1L << ((ulong)*(byte *)(uVar27 + 0x20) & 0x3f);
                        uVar46 = 0xffffffffffffffff;
                        if ((*(byte *)(uVar27 + 0x20) & 0x3f) < 6) {
                          uVar46 = ~(-1L << (uVar32 & 0x3f));
                        }
                        uVar46 = uVar46 & *(ulong *)(uVar27 + 0x40);
                        FUN_000f2290(uVar27,uVar8,uVar49,uVar43);
                        _swift_bridgeObjectRetain(uVar27);
                        uVar40 = 0;
                        lVar38 = 0;
                        while( true ) {
                          while (uVar46 == 0) {
                            bVar20 = SCARRY8(lVar38,1);
                            lVar38 = lVar38 + 1;
                            if (bVar20) {
                    /* WARNING: Does not return */
                              pcVar19 = (code *)SoftwareBreakpoint(1,0x1a17dc);
                              (*pcVar19)();
                            }
                            if ((long)(uVar32 + 0x3f >> 6) <= lVar38) goto LAB_001a14b0;
                            uVar46 = ((ulong *)(uVar27 + 0x40))[lVar38];
                          }
                          uVar28 = (uVar46 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar46 & 0x5555555555555555) << 1;
                          uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 |
                                   (uVar28 & 0x3333333333333333) << 2;
                          uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar28 & 0xff00ff00ff00ff) << 8;
                          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar28 & 0xffff0000ffff) << 0x10;
                          uVar28 = LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) | lVar38 << 6;
                          puVar30 = (undefined8 *)(*(long *)(uVar27 + 0x30) + uVar28 * 0x10);
                          uVar3 = *puVar30;
                          lVar37 = puVar30[1];
                          puVar26 = (ulong *)(*(long *)(uVar27 + 0x38) + uVar28 * 0x30);
                          uVar28 = *puVar26;
                          uVar10 = puVar26[1];
                          uVar33 = puVar26[2];
                          uVar47 = puVar26[3];
                          uVar22 = puVar26[4];
                          uVar11 = puVar26[5];
                          _swift_bridgeObjectRetain(lVar37);
                          uVar50 = (uint)(byte)uVar47;
                          FUN_000f2290(uVar28,uVar10,uVar33,(byte)uVar47);
                          func_0x00023304(uVar22,uVar11);
                          if (lVar37 == 0) break;
                          uStack_248 = uStack_1f8;
                          uStack_250 = uStack_200;
                          uStack_238 = uStack_1e8;
                          uStack_240 = uStack_1f0;
                          uStack_230 = uStack_1e0;
                          uStack_268 = uStack_218;
                          uStack_270 = uStack_220;
                          uStack_258 = uStack_208;
                          uStack_260 = uStack_210;
                          __sSS4hash4intoys6HasherVz_tF(&uStack_270,uVar3,lVar37);
                          _swift_bridgeObjectRelease(lVar37);
                          uStack_298 = uStack_248;
                          uStack_2a0 = uStack_250;
                          uStack_288 = uStack_238;
                          uStack_290 = uStack_240;
                          uStack_280 = uStack_230;
                          uStack_2b8 = uStack_268;
                          uStack_2c0 = uStack_270;
                          uStack_2a8 = uStack_258;
                          uStack_2b0 = uStack_260;
                          if ((((uVar33 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
                             (uVar50 != 0xff)) {
                            uVar18 = (uint)(uVar33 >> 0x20);
                            uVar24 = uVar18 >> 0x1c & 0xfffffc03 | (uVar50 & 0x3f) << 2;
                            if (uVar24 < 3) {
                              if (uVar24 == 0) {
                                FUN_000f2330(uVar28,uVar10,uVar33,uVar50);
                                __ss6HasherV8_combineyySuF(1);
                                uVar47 = 0;
                                if ((uVar10 & 0xff) != 1) {
                                  uVar47 = uVar28;
                                }
                                __ss6HasherV8_combineyySuF(uVar47);
                              }
                              else if (uVar24 == 1) {
                                FUN_000f2330(uVar28,uVar10,uVar33,uVar50);
                                __ss6HasherV8_combineyySuF(2);
                                uVar47 = 0;
                                if ((uVar28 & 0x7fffffffffffffff) != 0) {
                                  uVar47 = uVar28;
                                }
                                __ss6HasherV8_combineyys6UInt64VF(uVar47);
                              }
                              else {
                                __ss6HasherV8_combineyySuF(3);
                                __sSS4hash4intoys6HasherVz_tF(&uStack_2c0,uVar28,uVar10);
                              }
                            }
                            else if (uVar24 == 3) {
                              FUN_000f2330(uVar28,uVar10,uVar33,uVar50);
                              __ss6HasherV8_combineyySuF(4);
                              __ss6HasherV8_combineyys5UInt8VF((uint)uVar28 & 1);
                            }
                            else {
                              lVar37 = (long)uVar10 >> 0x20;
                              if (uVar24 == 4) {
                                __ss6HasherV8_combineyySuF(5);
                                uStack_2e8 = uStack_298;
                                uStack_2f0 = uStack_2a0;
                                uStack_2d8 = uStack_288;
                                uStack_2e0 = uStack_290;
                                uStack_2d0 = uStack_280;
                                uStack_308 = uStack_2b8;
                                uStack_310 = uStack_2c0;
                                uStack_2f8 = uStack_2a8;
                                uStack_300 = uStack_2b0;
                                if (*(long *)(uVar28 + 0x10) == 0) {
                                  FUN_000f22b4(uVar28,uVar10,uVar33,uVar50);
                                }
                                else {
                                  __ss6HasherV8_combineyySuF(1);
                                  uVar42 = 1L << ((ulong)*(byte *)(uVar28 + 0x20) & 0x3f);
                                  uVar47 = 0xffffffffffffffff;
                                  if ((*(byte *)(uVar28 + 0x20) & 0x3f) < 6) {
                                    uVar47 = ~(-1L << (uVar42 & 0x3f));
                                  }
                                  uVar47 = uVar47 & *(ulong *)(uVar28 + 0x40);
                                  FUN_000f2290(uVar28,uVar10,uVar33,uVar50);
                                  uVar23 = uVar28;
                                  _swift_bridgeObjectRetain();
                                  uVar34 = 0;
                                  lVar36 = 0;
                                  while( true ) {
                                    while (uVar47 == 0) {
                                      bVar20 = SCARRY8(lVar36,1);
                                      lVar36 = lVar36 + 1;
                                      if (bVar20) {
                    /* WARNING: Does not return */
                                        pcVar19 = (code *)SoftwareBreakpoint(1,0x1a17e0);
                                        (*pcVar19)();
                                      }
                                      if ((long)(uVar42 + 0x3f >> 6) <= lVar36) goto LAB_001a13cc;
                                      uVar47 = ((ulong *)(uVar28 + 0x40))[lVar36];
                                    }
                                    uVar29 = (uVar47 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                             (uVar47 & 0x5555555555555555) << 1;
                                    uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 |
                                             (uVar29 & 0x3333333333333333) << 2;
                                    uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                             (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
                                    uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 |
                                             (uVar29 & 0xff00ff00ff00ff) << 8;
                                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                                             (uVar29 & 0xffff0000ffff) << 0x10;
                                    uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) | lVar36 << 6;
                                    puVar30 = (undefined8 *)
                                              (*(long *)(uVar23 + 0x30) + uVar29 * 0x10);
                                    uVar3 = *puVar30;
                                    lVar12 = puVar30[1];
                                    puVar30 = (undefined8 *)
                                              (*(long *)(uVar23 + 0x38) + uVar29 * 0x30);
                                    uVar4 = *puVar30;
                                    uVar13 = puVar30[1];
                                    uVar35 = puVar30[2];
                                    bVar16 = *(byte *)(puVar30 + 3);
                                    uVar5 = puVar30[4];
                                    uVar14 = puVar30[5];
                                    _swift_bridgeObjectRetain();
                                    FUN_000f2290(uVar4,uVar13,uVar35,(ulong)bVar16);
                                    func_0x00023304(uVar5,uVar14);
                                    if (lVar12 == 0) break;
                                    uStack_338 = uStack_2e8;
                                    uStack_340 = uStack_2f0;
                                    uStack_328 = uStack_2d8;
                                    uStack_330 = uStack_2e0;
                                    uStack_320 = uStack_2d0;
                                    uStack_358 = uStack_308;
                                    uStack_360 = uStack_310;
                                    uStack_348 = uStack_2f8;
                                    uStack_350 = uStack_300;
                                    uStack_98 = uVar4;
                                    uStack_90 = uVar13;
                                    uStack_88 = uVar35;
                                    uStack_80 = (ulong)bVar16;
                                    uStack_78 = uVar5;
                                    uStack_70 = uVar14;
                                    __sSS4hash4intoys6HasherVz_tF(&uStack_360,uVar3,lVar12);
                                    _swift_bridgeObjectRelease(lVar12);
                                    uStack_388 = uStack_338;
                                    uStack_390 = uStack_340;
                                    uStack_378 = uStack_328;
                                    uStack_380 = uStack_330;
                                    uStack_370 = uStack_320;
                                    uStack_3a8 = uStack_358;
                                    uStack_3b0 = uStack_360;
                                    uStack_398 = uStack_348;
                                    uStack_3a0 = uStack_350;
                                    FUN_00197e9c(&uStack_3b0);
                                    if (unaff_x21 != 0) {
                                      _swift_errorRelease(unaff_x21);
                                      unaff_x21 = 0;
                                    }
                                    uVar47 = uVar47 - 1 & uVar47;
                                    puVar30 = &uStack_98;
                                    func_0x000f23d0();
                                    uStack_338 = uStack_388;
                                    uStack_340 = uStack_390;
                                    uStack_328 = uStack_378;
                                    uStack_330 = uStack_380;
                                    uStack_320 = uStack_370;
                                    uStack_358 = uStack_3a8;
                                    uStack_360 = uStack_3b0;
                                    uStack_348 = uStack_398;
                                    uStack_350 = uStack_3a0;
                                    __ss6HasherV9_finalizeSiyF();
                                    uVar34 = (ulong)puVar30 ^ uVar34;
                                    uVar23 = uVar28;
                                  }
LAB_001a13cc:
                                  _swift_release();
                                  __ss6HasherV8_combineyySuF(uVar34);
                                }
                                uVar47 = uVar33;
                                if (uVar18 >> 0x1e < 2) {
                                  if (uVar18 >> 0x1e != 0) {
                                    lVar36 = (long)(int)uVar10;
                                    goto LAB_001a1424;
                                  }
                                  if ((uVar33 & 0xff000000000000) == 0) goto LAB_001a143c;
                                }
                                else {
                                  if (uVar18 >> 0x1e != 2) goto LAB_001a143c;
                                  lVar36 = *(long *)(uVar10 + 0x10);
                                  lVar37 = *(long *)(uVar10 + 0x18);
LAB_001a1424:
                                  if (lVar36 == lVar37) goto LAB_001a143c;
                                }
LAB_001a1438:
                                __s10Foundation4DataV4hash4intoys6HasherVz_tF
                                          (&uStack_310,uVar10,uVar47);
                              }
                              else {
                                __ss6HasherV8_combineyySuF(6);
                                uStack_2e8 = uStack_298;
                                uStack_2f0 = uStack_2a0;
                                uStack_2d8 = uStack_288;
                                uStack_2e0 = uStack_290;
                                uStack_2d0 = uStack_280;
                                uStack_308 = uStack_2b8;
                                uStack_310 = uStack_2c0;
                                uStack_2f8 = uStack_2a8;
                                uStack_300 = uStack_2b0;
                                lVar36 = *(long *)(uVar28 + 0x10);
                                FUN_000f22b4(uVar28,uVar10,uVar33,uVar50);
                                if ((lVar36 == 0) || (FUN_001a0638(uVar28,1), unaff_x21 == 0)) {
                                  if (uVar18 >> 0x1e < 2) {
                                    if (uVar18 >> 0x1e == 0) {
                                      if ((uVar33 & 0xff000000000000) == 0) goto LAB_001a143c;
                                    }
                                    else {
                                      lVar36 = (long)(int)uVar10;
LAB_001a13ac:
                                      if (lVar36 == lVar37) goto LAB_001a143c;
                                    }
                                    uVar47 = uVar33 & 0xcfffffffffffffff;
                                    goto LAB_001a1438;
                                  }
                                  if (uVar18 >> 0x1e == 2) {
                                    lVar36 = *(long *)(uVar10 + 0x10);
                                    lVar37 = *(long *)(uVar10 + 0x18);
                                    goto LAB_001a13ac;
                                  }
                                }
                                else {
                                  _swift_errorRelease(unaff_x21);
                                  unaff_x21 = 0;
                                }
                              }
LAB_001a143c:
                              FUN_000f2330(uVar28,uVar10,uVar33,uVar50);
                              uStack_298 = uStack_2e8;
                              uStack_2a0 = uStack_2f0;
                              uStack_288 = uStack_2d8;
                              uStack_290 = uStack_2e0;
                              uStack_280 = uStack_2d0;
                              uStack_2b8 = uStack_308;
                              uStack_2c0 = uStack_310;
                              uStack_2a8 = uStack_2f8;
                              uStack_2b0 = uStack_300;
                            }
                          }
                          uVar18 = (uint)(uVar11 >> 0x20);
                          uVar24 = uVar18 >> 0x1e;
                          if (uVar18 >> 0x1e < 2) {
                            if (uVar24 == 0) {
                              if ((uVar11 & 0xff000000000000) == 0) goto LAB_001a0e30;
                            }
                            else {
                              lVar37 = (long)(int)uVar22;
                              lVar36 = (long)uVar22 >> 0x20;
LAB_001a14a0:
                              if (lVar37 == lVar36) goto LAB_001a0e30;
                            }
                            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_2c0,uVar22,uVar11)
                            ;
                          }
                          else if (uVar24 == 2) {
                            lVar37 = *(long *)(uVar22 + 0x10);
                            lVar36 = *(long *)(uVar22 + 0x18);
                            goto LAB_001a14a0;
                          }
LAB_001a0e30:
                          uVar46 = uVar46 - 1 & uVar46;
                          FUN_000f2330(uVar28,uVar10,uVar33,uVar50);
                          FUN_00023358(uVar22,uVar11);
                          uStack_248 = uStack_298;
                          uStack_250 = uStack_2a0;
                          uStack_238 = uStack_288;
                          uStack_240 = uStack_290;
                          uStack_230 = uStack_280;
                          uStack_268 = uStack_2b8;
                          uStack_270 = uStack_2c0;
                          uStack_258 = uStack_2a8;
                          uStack_260 = uStack_2b0;
                          __ss6HasherV9_finalizeSiyF();
                          uVar40 = uVar22 ^ uVar40;
                        }
LAB_001a14b0:
                        _swift_release(uVar27);
                        __ss6HasherV8_combineyySuF(uVar40);
                      }
                      uVar46 = uVar49;
                      if (uVar17 >> 0x1e < 2) {
                        if (uVar17 >> 0x1e == 0) {
                          if ((uVar49 & 0xff000000000000) != 0) {
LAB_001a15b4:
                            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_220,uVar8,uVar46);
                          }
                        }
                        else if ((long)(int)uVar8 != (long)uVar8 >> 0x20) goto LAB_001a15b4;
                      }
                      else if ((uVar17 >> 0x1e == 2) &&
                              (*(long *)(uVar8 + 0x10) != *(long *)(uVar8 + 0x18)))
                      goto LAB_001a15b4;
                    }
                    else {
                      __ss6HasherV8_combineyySuF(6);
                      uStack_1f8 = uStack_1a8;
                      uStack_200 = uStack_1b0;
                      uStack_1e8 = uStack_198;
                      uStack_1f0 = uStack_1a0;
                      uStack_1e0 = uStack_190;
                      uStack_218 = uStack_1c8;
                      uStack_220 = uStack_1d0;
                      uStack_208 = uStack_1b8;
                      uStack_210 = uStack_1c0;
                      lVar38 = *(long *)(uVar27 + 0x10);
                      FUN_000f22b4(uVar27,uVar8,uVar49,uVar43);
                      if ((lVar38 == 0) || (FUN_001a0638(uVar27,1), unaff_x21 == 0)) {
                        if (uVar17 >> 0x1e < 2) {
                          if (uVar17 >> 0x1e == 0) {
                            if ((uVar49 & 0xff000000000000) != 0) {
LAB_001a15a8:
                              uVar46 = uVar49 & 0xcfffffffffffffff;
                              goto LAB_001a15b4;
                            }
                          }
                          else if ((long)(int)uVar8 != (long)uVar8 >> 0x20) goto LAB_001a15a8;
                        }
                        else if ((uVar17 >> 0x1e == 2) &&
                                (*(long *)(uVar8 + 0x10) != *(long *)(uVar8 + 0x18)))
                        goto LAB_001a15a8;
                      }
                      else {
                        _swift_errorRelease(unaff_x21);
                        unaff_x21 = 0;
                      }
                    }
                    FUN_000f2330(uVar27,uVar8,uVar49,uVar43);
                    uStack_1a8 = uStack_1f8;
                    uStack_1b0 = uStack_200;
                    uStack_198 = uStack_1e8;
                    uStack_1a0 = uStack_1f0;
                    uStack_190 = uStack_1e0;
                    uStack_1c8 = uStack_218;
                    uStack_1d0 = uStack_220;
                    uStack_1b8 = uStack_208;
                    uStack_1c0 = uStack_210;
                  }
                }
                uVar17 = (uint)(uVar9 >> 0x20);
                uVar50 = uVar17 >> 0x1e;
                if (uVar17 >> 0x1e < 2) {
                  if (uVar50 == 0) {
                    if ((uVar9 & 0xff000000000000) == 0) goto LAB_001a0a58;
                  }
                  else {
                    lVar38 = (long)(int)uVar21;
                    lVar37 = (long)uVar21 >> 0x20;
LAB_001a160c:
                    if (lVar38 == lVar37) goto LAB_001a0a58;
                  }
                  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1d0,uVar21,uVar9);
                }
                else if (uVar50 == 2) {
                  lVar38 = *(long *)(uVar21 + 0x10);
                  lVar37 = *(long *)(uVar21 + 0x18);
                  goto LAB_001a160c;
                }
LAB_001a0a58:
                uVar51 = uVar51 - 1 & uVar51;
                FUN_000f2330(uVar27,uVar8,uVar49,uVar43);
                FUN_00023358(uVar21,uVar9);
                uStack_158 = uStack_1a8;
                uStack_160 = uStack_1b0;
                uStack_148 = uStack_198;
                uStack_150 = uStack_1a0;
                uStack_140 = uStack_190;
                uStack_178 = uStack_1c8;
                uStack_180 = uStack_1d0;
                uStack_168 = uStack_1b8;
                uStack_170 = uStack_1c0;
                __ss6HasherV9_finalizeSiyF();
                uVar39 = uVar21 ^ uVar39;
              }
LAB_001a16dc:
              _swift_release(uVar1);
              __ss6HasherV8_combineyySuF(uVar39);
            }
            uVar51 = uVar48;
            if (uVar25 >> 0x1e < 2) {
              if (uVar25 >> 0x1e == 0) {
                if ((uVar48 & 0xff000000000000) != 0) {
LAB_001a174c:
                  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_130,uVar6,uVar51);
                }
              }
              else if ((long)(int)uVar6 != (long)uVar6 >> 0x20) goto LAB_001a174c;
            }
            else if ((uVar25 >> 0x1e == 2) && (*(long *)(uVar6 + 0x10) != *(long *)(uVar6 + 0x18)))
            goto LAB_001a174c;
          }
          else {
            __ss6HasherV8_combineyySuF(6);
            uStack_108 = uStack_b8;
            uStack_110 = uStack_c0;
            uStack_f8 = uStack_a8;
            uStack_100 = uStack_b0;
            uStack_f0 = uStack_a0;
            uStack_128 = uStack_d8;
            uStack_130 = uStack_e0;
            uStack_118 = uStack_c8;
            uStack_120 = uStack_d0;
            lVar31 = *(long *)(uVar1 + 0x10);
            FUN_000f2290(uVar1,uVar6,uVar48,uVar43);
            func_0x00023304(uVar2,uVar7);
            FUN_000f2290(uVar1,uVar6,uVar48,uVar43);
            if ((lVar31 == 0) || (FUN_001a0638(uVar1,1), unaff_x21 == 0)) {
              if (uVar25 >> 0x1e < 2) {
                if (uVar25 >> 0x1e == 0) {
                  if ((uVar48 & 0xff000000000000) != 0) {
LAB_001a16bc:
                    uVar51 = uVar48 & 0xcfffffffffffffff;
                    goto LAB_001a174c;
                  }
                }
                else if ((long)(int)uVar6 != (long)uVar6 >> 0x20) goto LAB_001a16bc;
              }
              else if ((uVar25 >> 0x1e == 2) && (*(long *)(uVar6 + 0x10) != *(long *)(uVar6 + 0x18))
                      ) goto LAB_001a16bc;
            }
            else {
              _swift_errorRelease(unaff_x21);
              unaff_x21 = 0;
            }
          }
          FUN_000f2330(uVar1,uVar6,uVar48,bVar15);
          uStack_b8 = uStack_108;
          uStack_c0 = uStack_110;
          uStack_a8 = uStack_f8;
          uStack_b0 = uStack_100;
          uStack_a0 = uStack_f0;
          uStack_d8 = uStack_128;
          uStack_e0 = uStack_130;
          uStack_c8 = uStack_118;
          uStack_d0 = uStack_120;
        }
      }
      uVar43 = (uint)(uVar7 >> 0x20);
      uVar25 = uVar43 >> 0x1e;
      if (uVar43 >> 0x1e < 2) {
        if (uVar25 == 0) {
          if ((uVar7 & 0xff000000000000) == 0) goto LAB_001a06a4;
        }
        else {
          lVar31 = (long)(int)uVar2;
          lVar38 = (long)uVar2 >> 0x20;
LAB_001a17a4:
          if (lVar31 == lVar38) goto LAB_001a06a4;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,uVar2,uVar7);
      }
      else if (uVar25 == 2) {
        lVar31 = *(long *)(uVar2 + 0x10);
        lVar38 = *(long *)(uVar2 + 0x18);
        goto LAB_001a17a4;
      }
LAB_001a06a4:
      lVar44 = lVar44 + 1;
      FUN_000f2330(uVar1,uVar6,uVar48,bVar15);
      FUN_00023358(uVar2,uVar7);
      unaff_x20[5] = uStack_b8;
      unaff_x20[4] = uStack_c0;
      unaff_x20[7] = uStack_a8;
      unaff_x20[6] = uStack_b0;
      unaff_x20[8] = uStack_a0;
      unaff_x20[1] = uStack_d8;
      *unaff_x20 = uStack_e0;
      unaff_x20[3] = uStack_c8;
      unaff_x20[2] = uStack_d0;
    } while (lVar44 != lVar45);
  }
  return;
}



/* Entry: 001a17e0; end: 001a18ff;  */

void FUN_001a17e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uStack_e8 = unaff_x20[5];
    uStack_f0 = unaff_x20[4];
    uStack_d8 = unaff_x20[7];
    uStack_e0 = unaff_x20[6];
    uStack_d0 = unaff_x20[8];
    uStack_108 = unaff_x20[1];
    uStack_110 = *unaff_x20;
    uStack_f8 = unaff_x20[3];
    uStack_100 = unaff_x20[2];
    puVar2 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      lVar1 = lVar1 + -1;
      uStack_78 = puVar2[9];
      uStack_80 = puVar2[8];
      uStack_68 = puVar2[0xb];
      uStack_70 = puVar2[10];
      uStack_58 = puVar2[0xd];
      uStack_60 = puVar2[0xc];
      uStack_48 = puVar2[0xf];
      uStack_50 = puVar2[0xe];
      uStack_b8 = puVar2[1];
      uStack_c0 = *puVar2;
      uStack_a8 = puVar2[3];
      uStack_b0 = puVar2[2];
      uStack_98 = puVar2[5];
      uStack_a0 = puVar2[4];
      uStack_88 = puVar2[7];
      uStack_90 = puVar2[6];
      uStack_120 = uStack_d0;
      uStack_138 = uStack_e8;
      uStack_140 = uStack_f0;
      uStack_128 = uStack_d8;
      uStack_130 = uStack_e0;
      uStack_158 = uStack_108;
      uStack_160 = uStack_110;
      uStack_148 = uStack_f8;
      uStack_150 = uStack_100;
      func_0x00191e84(&uStack_c0,auStack_1e0);
      FUN_001a49bc(&uStack_160);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      func_0x00191ec0(&uStack_c0);
      if (lVar1 == 0) break;
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_d8 = uStack_128;
      uStack_e0 = uStack_130;
      uStack_d0 = uStack_120;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      puVar2 = puVar2 + 0x10;
    }
    unaff_x20[5] = uStack_138;
    unaff_x20[4] = uStack_140;
    unaff_x20[7] = uStack_128;
    unaff_x20[6] = uStack_130;
    unaff_x20[8] = uStack_120;
    unaff_x20[1] = uStack_158;
    *unaff_x20 = uStack_160;
    unaff_x20[3] = uStack_148;
    unaff_x20[2] = uStack_150;
  }
  return;
}



/* Entry: 001a1900; end: 001a1d4f;  */

void FUN_001a1900(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x20;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  lVar17 = 0;
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    puVar14 = (ulong *)(param_1 + 0x20 + lVar17 * 0x30);
    uVar2 = *puVar14;
    uVar5 = puVar14[1];
    uVar11 = puVar14[2];
    uVar3 = puVar14[3];
    uVar6 = puVar14[4];
    uVar19 = puVar14[5];
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar3);
      func_0x00023304(uVar6,uVar19);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar3);
      func_0x00023304(uVar6,uVar19);
      __sSS4hash4intoys6HasherVz_tF(&uStack_110,uVar2,uVar5);
    }
    if ((int)uVar11 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)(int)uVar11);
    }
    lVar16 = *(long *)(uVar3 + 0x10);
    if (lVar16 != 0) {
      __ss6HasherV8_combineyySuF(3);
      plVar20 = (long *)(uVar3 + 0x50);
      do {
        uVar2 = plVar20[-6];
        uVar11 = plVar20[-5];
        lVar15 = plVar20[-4];
        uVar7 = plVar20[-3];
        lVar4 = plVar20[-2];
        lVar8 = plVar20[-1];
        lVar18 = *plVar20;
        uStack_138 = uStack_e8;
        uStack_140 = uStack_f0;
        uStack_128 = uStack_d8;
        uStack_130 = uStack_e0;
        uStack_120 = uStack_d0;
        uVar1 = uVar2 & 0xffffffffffff;
        if ((uVar11 & 0x2000000000000000) != 0) {
          uVar1 = uVar11 >> 0x38 & 0xf;
        }
        uStack_158 = uStack_108;
        uStack_160 = uStack_110;
        uStack_148 = uStack_f8;
        uStack_150 = uStack_100;
        if (uVar1 == 0) {
          _swift_bridgeObjectRetain(uVar11);
          func_0x00023304(lVar15,uVar7);
          func_0x00191e58(lVar4,lVar8,lVar18);
        }
        else {
          __ss6HasherV8_combineyySuF(1);
          _swift_bridgeObjectRetain(uVar11);
          func_0x00023304(lVar15,uVar7);
          func_0x00191e58(lVar4,lVar8,lVar18);
          __sSS4hash4intoys6HasherVz_tF(&uStack_160,uVar2,uVar11);
        }
        if (lVar18 != 0) {
          __ss6HasherV8_combineyySuF(2);
          _swift_beginAccess(lVar18 + 0x10,auStack_178,0,0);
          uVar2 = *(ulong *)(lVar18 + 0x10);
          uVar9 = *(ulong *)(lVar18 + 0x18);
          uVar1 = uVar2 & 0xffffffffffff;
          if ((uVar9 & 0x2000000000000000) != 0) {
            uVar1 = uVar9 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            func_0x00191e58(lVar4,lVar8,lVar18);
            _swift_bridgeObjectRetain(uVar9);
            __sSS4hash4intoys6HasherVz_tF(&uStack_160,uVar2,uVar9);
            func_0x0012cec0(lVar4,lVar8,lVar18);
            _swift_bridgeObjectRelease(uVar9);
          }
        }
        uVar10 = (uint)(uVar7 >> 0x20);
        uVar12 = uVar10 >> 0x1e;
        if (uVar10 >> 0x1e < 2) {
          if (uVar12 == 0) {
            if ((uVar7 & 0xff000000000000) != 0) goto LAB_001a1a6c;
          }
          else if ((long)(int)lVar15 != lVar15 >> 0x20) {
LAB_001a1a6c:
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_160,lVar15,uVar7);
          }
        }
        else if ((uVar12 == 2) && (*(long *)(lVar15 + 0x10) != *(long *)(lVar15 + 0x18)))
        goto LAB_001a1a6c;
        plVar20 = plVar20 + 7;
        _swift_bridgeObjectRelease(uVar11);
        FUN_00023358(lVar15,uVar7);
        func_0x0012cec0(lVar4,lVar8,lVar18);
        uStack_e8 = uStack_138;
        uStack_f0 = uStack_140;
        uStack_d8 = uStack_128;
        uStack_e0 = uStack_130;
        uStack_d0 = uStack_120;
        uStack_108 = uStack_158;
        uStack_110 = uStack_160;
        uStack_f8 = uStack_148;
        uStack_100 = uStack_150;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    uVar10 = (uint)(uVar19 >> 0x20);
    uVar12 = uVar10 >> 0x1e;
    if (uVar10 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uVar19 & 0xff000000000000) == 0) goto LAB_001a1ccc;
      }
      else {
        lVar16 = (long)(int)uVar6;
        lVar15 = (long)uVar6 >> 0x20;
LAB_001a1cb4:
        if (lVar16 == lVar15) goto LAB_001a1ccc;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_110,uVar6,uVar19);
    }
    else if (uVar12 == 2) {
      lVar16 = *(long *)(uVar6 + 0x10);
      lVar15 = *(long *)(uVar6 + 0x18);
      goto LAB_001a1cb4;
    }
LAB_001a1ccc:
    lVar17 = lVar17 + 1;
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar5);
    FUN_00023358(uVar6,uVar19);
    if (lVar17 == lVar13) {
      unaff_x20[5] = uStack_e8;
      unaff_x20[4] = uStack_f0;
      unaff_x20[7] = uStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = uStack_d0;
      unaff_x20[1] = uStack_108;
      *unaff_x20 = uStack_110;
      unaff_x20[3] = uStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
  } while( true );
}



/* Entry: 001a1d50; end: 001a1d5b;  */

bool FUN_001a1d50(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 001a1d5c; end: 001a1ebf;  */

void FUN_001a1d5c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar8 = param_1[2];
  bVar3 = *(byte *)(param_1 + 3);
  if (((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar3 == 0xff)) ||
     (uVar4 = (uint)(uVar8 >> 0x20), (uVar4 >> 0x1c & 0xfffffc03 | (bVar3 & 0x3f) << 2) != 4)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1a1ec0);
    (*pcVar5)();
  }
  __ss6HasherV8_combineyySuF(5);
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_60 = param_2[8];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  if (*(long *)(lVar1 + 0x10) == 0) {
    FUN_000f22b4(lVar1,lVar2,uVar8,bVar3);
  }
  else {
    __ss6HasherV8_combineyySuF(1);
    FUN_000f22b4(lVar1,lVar2,uVar8,bVar3);
    FUN_001a75d4(&uStack_a0,lVar1);
  }
  if (uVar4 >> 0x1e < 2) {
    if (uVar4 >> 0x1e != 0) {
      lVar6 = (long)(int)lVar2;
      lVar7 = lVar2 >> 0x20;
      goto LAB_001a1e58;
    }
    if ((uVar8 & 0xff000000000000) == 0) goto LAB_001a1e70;
  }
  else {
    if (uVar4 >> 0x1e != 2) goto LAB_001a1e70;
    lVar6 = *(long *)(lVar2 + 0x10);
    lVar7 = *(long *)(lVar2 + 0x18);
LAB_001a1e58:
    if (lVar6 == lVar7) goto LAB_001a1e70;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,lVar2,uVar8);
LAB_001a1e70:
  FUN_000f2330(lVar1,lVar2,uVar8,bVar3);
  param_2[5] = uStack_78;
  param_2[4] = uStack_80;
  param_2[7] = uStack_68;
  param_2[6] = uStack_70;
  param_2[8] = uStack_60;
  param_2[1] = uStack_98;
  *param_2 = uStack_a0;
  param_2[3] = uStack_88;
  param_2[2] = uStack_90;
  return;
}



/* Entry: 001a1ec0; end: 001a1edb;  */

undefined1  [16] FUN_001a1ec0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 001a1edc; end: 001a1f7f;  */

void FUN_001a1edc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf28c0;
  func_0x000115a8(0xaf28c0,&UNK_007e0a20);
  _swift_initStaticObject();
  uRam0000000000b65840 = uVar1;
  return;
}



/* Entry: 001a1f80; end: 001a1f97;  */

void FUN_001a1f80(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 001a1f98; end: 001a1fd7;  */

void FUN_001a1f98(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf28c0;
  func_0x000115a8(0xaf28c0,&UNK_007e0a20);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 001a1fd8; end: 001a1ff3;  */

void FUN_001a1fd8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 001a1ff4; end: 001a201f;  */

undefined1  [16] FUN_001a1ff4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001a2020; end: 001a2053;  */

void FUN_001a2020(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001a2054; end: 001a206f;  */

undefined8 FUN_001a2054(void)

{
  return 0x1a2064;
}


