/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038cf8a0; end: 1038cf933;  */

undefined8 * FUN_1038cf8a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  if (param_1[3] != 0) {
    lVar3 = param_2[3];
    if (lVar3 != 0) {
      param_1[2] = param_2[2];
      param_1[3] = lVar3;
      func_0x000107c6142c();
      uVar2 = param_1[5];
      uVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      func_0x000107c61574(uVar2);
      goto LAB_1038cf904;
    }
    FUN_1038cf850(param_1 + 2);
  }
  uVar2 = param_2[2];
  uVar4 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar4;
  param_1[4] = uVar1;
LAB_1038cf904:
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)param_2 + 0x33);
  return param_1;
}



/* Entry: 1038cf934; end: 1038cfaa7;  */

int FUN_1038cf934(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xd] != '\0')) {
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



/* Entry: 1038cfaa8; end: 1038cfbb7;  */

void FUN_1038cfaa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038cfbb8; end: 1038cfbff;  */

undefined8 FUN_1038cfbb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1038cfc00; end: 1038cfd53;  */

void FUN_1038cfc00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined1 auStack_510 [304];
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined8 uStack_317;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b7;
  undefined1 auStack_2b0 [304];
  undefined1 auStack_180 [304];
  
  uStack_2f0 = 1;
  uStack_2f8 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2c8 = 0;
  uStack_388 = param_2[5];
  uStack_390 = param_2[4];
  uStack_378 = param_2[7];
  uStack_380 = param_2[6];
  uStack_368 = param_2[9];
  uStack_370 = param_2[8];
  uStack_360 = *(undefined1 *)(param_2 + 10);
  uStack_3a8 = param_2[1];
  uStack_3b0 = *param_2;
  uStack_398 = param_2[3];
  uStack_3a0 = param_2[2];
  uStack_350 = param_3[1];
  uStack_358 = *param_3;
  uStack_340 = param_3[3];
  uStack_348 = param_3[2];
  uStack_330 = param_3[5];
  uStack_338 = param_3[4];
  uStack_328 = param_3[6];
  uStack_317 = *(undefined8 *)((long)param_3 + 0x41);
  uStack_318 = (undefined1)((ulong)*(undefined8 *)((long)param_3 + 0x39) >> 0x38);
  uStack_320 = (undefined1)param_3[7];
  uStack_31f = (undefined7)((ulong)param_3[7] >> 8);
  uStack_3d8 = param_4[1];
  uStack_3e0 = *param_4;
  uStack_3c8 = param_4[3];
  uStack_3d0 = param_4[2];
  uStack_3c0 = *(undefined1 *)(param_4 + 4);
  uStack_308 = param_5;
  uStack_300 = param_6;
  FUN_1038cfbb8(param_7,&uStack_2f8,0x112fac4b8,&UNK_10dc1e0f8);
  uStack_2b7 = param_10;
  uVar1 = param_12;
  uStack_2c0 = param_8;
  uStack_2b8 = param_9;
  FUN_1038cfd54();
  func_0x000107c6142c(param_12);
  uStack_3b8 = uVar1;
  func_0x000107c610b4(auStack_2b0,&uStack_3e0,299);
  func_0x000107c610b4(auStack_180,&uStack_3e0,299);
  func_0x00010278997c(auStack_2b0,auStack_510);
  func_0x000102789a5c(auStack_180);
  func_0x000107c610b4(param_1,auStack_2b0,299);
  return;
}



/* Entry: 1038cfd54; end: 1038cfeff;  */

undefined * FUN_1038cfd54(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 uStack_71;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar7 = *(ulong *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    uVar10 = 0;
    do {
      lVar11 = 0;
      if (uVar10 <= uVar7) {
        lVar11 = uVar7 - uVar10;
      }
      puVar9 = (undefined8 *)(param_1 + 0x20 + uVar10 * 0x20);
      uVar10 = uVar10 + 1;
      while( true ) {
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1038cff00);
          (*pcVar2)();
        }
        lVar13 = puVar9[1];
        uVar12 = *puVar9;
        uVar15 = puVar9[3];
        uVar14 = puVar9[2];
        uVar6 = *puVar9;
        if (lVar13 == 0) {
          uVar8 = 0;
        }
        else if (lVar13 == 1) {
          uVar8 = 1;
        }
        else {
          func_0x000107c61434(lVar13);
          uVar8 = 2;
        }
        func_0x000107c61434(uVar15);
        puVar3 = &uStack_71;
        FUN_1038d0994(puVar3,uVar8);
        if (((ulong)puVar3 & 1) != 0) break;
        func_0x000102795858(uVar6,lVar13);
        func_0x000107c6142c(uVar15);
        lVar11 = lVar11 + -1;
        puVar9 = puVar9 + 4;
        uVar10 = uVar10 + 1;
        if (uVar10 - uVar7 == 1) goto LAB_1038cfed0;
      }
      puVar4 = puVar5;
      func_0x000107c61558();
      puStack_70 = puVar5;
      if (((ulong)puVar4 & 1) == 0) {
        FUN_1038d1958(0,*(long *)(puVar5 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puStack_70 + 0x10);
      if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar1) {
        FUN_1038d1958(1 < *(ulong *)(puStack_70 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_70 + uVar1 * 0x20 + 0x38) = uVar15;
      *(undefined8 *)(puStack_70 + uVar1 * 0x20 + 0x30) = uVar14;
      *(long *)(puStack_70 + uVar1 * 0x20 + 0x28) = lVar13;
      *(undefined8 *)(puStack_70 + uVar1 * 0x20 + 0x20) = uVar12;
      puVar5 = puStack_70;
    } while (uVar10 != uVar7);
  }
LAB_1038cfed0:
  func_0x000107c6142c(puStack_68);
  return puVar5;
}



/* Entry: 1038cff00; end: 1038cff2b;  */

long FUN_1038cff00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038cff2c; end: 1038cffc3;  */

/* WARNING: Possible PIC construction at 0x0001038cff6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038cff70) */
/* WARNING: Removing unreachable block (ram,0x0001038cffc4) */
/* WARNING: Removing unreachable block (ram,0x0001038cffd0) */
/* WARNING: Removing unreachable block (ram,0x000107c61434) */
/* WARNING: Removing unreachable block (ram,0x00010bdc002c) */
/* WARNING: Removing unreachable block (ram,0x0001038cffcc) */

void FUN_1038cff2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1038cffc4; end: 1038cffd7;  */

void FUN_1038cffc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1038cffd8; end: 1038d007f;  */

/* WARNING: Possible PIC construction at 0x0001038d003c: Changing call to branch */

void FUN_1038cffd8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000102793270(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x90));
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar1);
    return;
  }
  if (*(long *)(param_1 + 0xf0) != 1) {
    func_0x000107c6142c();
    if (*(long *)(param_1 + 0x100) != 0) {
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_1 + 0x110);
      goto code_r0x000107c61574;
    }
  }
  return;
}



/* Entry: 1038d0080; end: 1038d064b;  */

undefined8 * FUN_1038d0080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  param_1[5] = uVar10;
  uVar13 = param_2[7];
  uVar5 = param_2[8];
  uVar14 = param_2[9];
  uVar6 = param_2[10];
  uVar1 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar11 = param_2[0xf];
  uVar9 = *(undefined1 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar10);
  FUN_1038cff2c(uVar4,uVar13,uVar5,uVar14,uVar6,uVar1,uVar7,uVar2,uVar8,uVar11,uVar9);
  param_1[6] = uVar4;
  param_1[7] = uVar13;
  param_1[8] = uVar5;
  param_1[9] = uVar14;
  param_1[10] = uVar6;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar11;
  *(undefined1 *)(param_1 + 0x10) = uVar9;
  uVar10 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar10;
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  lVar12 = param_2[0x1b];
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  func_0x000107c61434();
  if (lVar12 == 0) {
    lVar12 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = lVar12;
  }
  else {
    uVar10 = param_2[0x1c];
    param_1[0x1b] = lVar12;
    param_1[0x1c] = uVar10;
    func_0x000107c6157c();
  }
  lVar12 = param_2[0x1e];
  if (lVar12 == 1) {
    uVar10 = param_2[0x1d];
    uVar14 = param_2[0x20];
    uVar13 = param_2[0x1f];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar10;
    param_1[0x20] = uVar14;
    param_1[0x1f] = uVar13;
    uVar10 = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar10;
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  }
  else {
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = lVar12;
    lVar12 = param_2[0x20];
    func_0x000107c61434();
    if (lVar12 == 0) {
      uVar10 = param_2[0x1f];
      uVar14 = param_2[0x22];
      uVar13 = param_2[0x21];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar10;
      param_1[0x22] = uVar14;
      param_1[0x21] = uVar13;
    }
    else {
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = lVar12;
      uVar10 = param_2[0x22];
      param_1[0x21] = param_2[0x21];
      param_1[0x22] = uVar10;
      func_0x000107c61434(lVar12);
      func_0x000107c6157c(uVar10);
    }
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  }
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined2 *)((long)param_1 + 0x129) = *(undefined2 *)((long)param_2 + 0x129);
  return param_1;
}



/* Entry: 1038d064c; end: 1038d067f;  */

undefined8 FUN_1038d064c(undefined8 param_1)

{
  FUN_1038cfaa8();
  return param_1;
}



/* Entry: 1038d0680; end: 1038d0687;  */

void FUN_1038d0680(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,299);
  return;
}



/* Entry: 1038d0688; end: 1038d08a7;  */

undefined8 * FUN_1038d0688(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = param_2[1];
  uVar10 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  func_0x000107c6142c(uVar10);
  uVar11 = param_2[3];
  uVar10 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar11;
  func_0x000107c6142c(uVar10);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar11 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar11);
  uVar8 = *(undefined1 *)(param_2 + 0x10);
  uVar11 = param_1[6];
  uVar3 = param_1[7];
  uVar10 = param_1[8];
  uVar4 = param_1[9];
  uVar17 = param_1[10];
  uVar5 = param_1[0xb];
  uVar1 = param_1[0xc];
  uVar6 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar7 = param_1[0xf];
  uVar9 = *(undefined1 *)(param_1 + 0x10);
  uVar14 = param_2[6];
  uVar16 = param_2[9];
  uVar15 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar14;
  param_1[9] = uVar16;
  param_1[8] = uVar15;
  uVar14 = param_2[10];
  uVar16 = param_2[0xd];
  uVar15 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar14;
  param_1[0xd] = uVar16;
  param_1[0xc] = uVar15;
  uVar14 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar14;
  *(undefined1 *)(param_1 + 0x10) = uVar8;
  func_0x000102793270(uVar11,uVar3,uVar10,uVar4,uVar17,uVar5,uVar1,uVar6,uVar2,uVar7,uVar9);
  uVar11 = param_2[0x12];
  uVar10 = param_1[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar11;
  func_0x000107c6142c(uVar10);
  plVar13 = param_1 + 0x1b;
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  param_1[0x19] = param_2[0x19];
  if (*plVar13 == 0) {
LAB_1038d07a4:
    lVar12 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    *plVar13 = lVar12;
  }
  else {
    if (param_2[0x1b] == 0) {
      FUN_1038d064c(plVar13);
      goto LAB_1038d07a4;
    }
    uVar10 = param_2[0x1c];
    uVar11 = param_1[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = uVar10;
    func_0x000107c61574(uVar11);
  }
  if (param_1[0x1e] != 1) {
    lVar12 = param_2[0x1e];
    if (lVar12 != 1) {
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = lVar12;
      func_0x000107c6142c();
      if (param_1[0x20] == 0) {
LAB_1038d0844:
        uVar11 = param_2[0x1f];
        uVar17 = param_2[0x22];
        uVar10 = param_2[0x21];
        param_1[0x20] = param_2[0x20];
        param_1[0x1f] = uVar11;
        param_1[0x22] = uVar17;
        param_1[0x21] = uVar10;
      }
      else {
        lVar12 = param_2[0x20];
        if (lVar12 == 0) {
          FUN_1038cf850(param_1 + 0x1f);
          goto LAB_1038d0844;
        }
        param_1[0x1f] = param_2[0x1f];
        param_1[0x20] = lVar12;
        func_0x000107c6142c();
        uVar11 = param_1[0x22];
        uVar10 = param_2[0x21];
        param_1[0x22] = param_2[0x22];
        param_1[0x21] = uVar10;
        func_0x000107c61574(uVar11);
      }
      *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
      *(undefined1 *)((long)param_1 + 0x119) = *(undefined1 *)((long)param_2 + 0x119);
      *(undefined1 *)((long)param_1 + 0x11a) = *(undefined1 *)((long)param_2 + 0x11a);
      *(undefined1 *)((long)param_1 + 0x11b) = *(undefined1 *)((long)param_2 + 0x11b);
      goto LAB_1038d086c;
    }
    func_0x00010278d2e0(param_1 + 0x1d);
  }
  uVar11 = param_2[0x1d];
  uVar17 = param_2[0x20];
  uVar10 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar11;
  param_1[0x20] = uVar17;
  param_1[0x1f] = uVar10;
  uVar11 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar11;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
LAB_1038d086c:
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x129) = *(undefined1 *)((long)param_2 + 0x129);
  *(undefined1 *)((long)param_1 + 0x12a) = *(undefined1 *)((long)param_2 + 0x12a);
  return param_1;
}



/* Entry: 1038d08a8; end: 1038d0993;  */

int FUN_1038d08a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 299) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d0994; end: 1038d0a7f;  */

undefined8 FUN_1038d0994(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_1038d0a64;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_1038d0a80(param_2,uVar1,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar2 = 1;
LAB_1038d0a64:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 1038d0a80; end: 1038d0baf;  */

void FUN_1038d0a80(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  uVar4 = (ulong)(uint)param_1;
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1038d0dc0();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1038d0bb0(uVar3 + 1);
    }
    else {
      FUN_1038d0f00();
    }
    lVar5 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((uint)*(byte *)(*(long *)(lVar5 + 0x30) + param_2) == (uint)param_1) {
          func_0x000107c60620(&UNK_1106a6c60);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038d0bb0);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar5 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(byte *)(*(long *)(lVar2 + 0x30) + param_2) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038d0ba0);
  (*pcVar1)();
}



/* Entry: 1038d0bb0; end: 1038d0dbf;  */

void FUN_1038d0bb0(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112fac4c0;
  func_0x0001000285a8(0x112fac4c0,&UNK_10dc1e130);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1038d0d88:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038d0dbc);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) goto LAB_1038d0d88;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar15 << 6));
    uVar14 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar14 >> 6;
    uVar7 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar14 = uVar9 + 1;
        if ((uVar14 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038d0dc0);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar14 != uVar7) {
          uVar9 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar7 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 1038d0dc0; end: 1038d0eff;  */

void FUN_1038d0dc0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112fac4c0,&UNK_10dc1e130);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038d0f00);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1038d0ee0;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_1038d0ee0:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1038d0f00; end: 1038d1153;  */

void FUN_1038d0f00(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112fac4c0;
  func_0x0001000285a8(0x112fac4c0,&UNK_10dc1e130);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1038d1120:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038d1150);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_1038d1120;
        }
        uVar12 = puVar14[lVar16];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar16 << 6));
    uVar15 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar15 = uVar15 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar15 >> 6;
    uVar7 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar15 = uVar9 + 1;
        if ((uVar15 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038d1154);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar15 != uVar7) {
          uVar9 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar7 | bVar3);
        uVar15 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 1038d1154; end: 1038d115f;  */

undefined * FUN_1038d1154(void)

{
  return &UNK_10dc1e140;
}



/* Entry: 1038d1160; end: 1038d121f;  */

void FUN_1038d1160(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[2];
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
  }
  func_0x000107c60690(*(undefined1 *)(unaff_x20 + 4));
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d1220; end: 1038d1223;  */

void FUN_1038d1220(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[2];
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_78,uVar2,lVar1);
  }
  func_0x000107c60690(*(undefined1 *)(unaff_x20 + 4));
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d1224; end: 1038d136f;  */

void FUN_1038d1224(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  uVar3 = *(undefined1 *)(unaff_x20 + 4);
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar5 = *unaff_x20;
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar5,lVar1);
  }
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar4);
  }
  func_0x000107c60690(uVar3);
  return;
}



/* Entry: 1038d1370; end: 1038d13b7;  */

uint FUN_1038d1370(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_1038d1478(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038d13b8; end: 1038d1463;  */

void FUN_1038d13b8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d1464; end: 1038d1477;  */

bool FUN_1038d1464(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038d1478; end: 1038d154f;  */

bool FUN_1038d1478(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (func_0x000107c605b8(uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  if (uVar2 == 0) {
    if (uVar1 == 0) {
LAB_1038d1528:
      return (char)param_1[4] == (char)param_2[4];
    }
  }
  else if (uVar1 != 0) {
    uVar3 = param_1[2];
    if (((uVar3 == param_2[2]) && (uVar2 == uVar1)) ||
       (func_0x000107c605b8(uVar3,uVar2,param_2[2],uVar1,0), (uVar3 & 1) != 0)) goto LAB_1038d1528;
  }
  return false;
}



/* Entry: 1038d1550; end: 1038d1553;  */

void FUN_1038d1550(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e1a4;
  func_0x000107c61520(&UNK_10dc1e1a4,&UNK_1106a6048);
  puRam0000000112fac4c8 = puVar1;
  return;
}



/* Entry: 1038d1554; end: 1038d1593;  */

void FUN_1038d1554(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e1a4;
  func_0x000107c61520(&UNK_10dc1e1a4,&UNK_1106a6048);
  puRam0000000112fac4c8 = puVar1;
  return;
}



/* Entry: 1038d1594; end: 1038d1597;  */

void FUN_1038d1594(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e20c;
  func_0x000107c61520(&UNK_10dc1e20c,&UNK_1106a60e8);
  puRam0000000112fac4d0 = puVar1;
  return;
}



/* Entry: 1038d1598; end: 1038d15d7;  */

void FUN_1038d1598(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e20c;
  func_0x000107c61520(&UNK_10dc1e20c,&UNK_1106a60e8);
  puRam0000000112fac4d0 = puVar1;
  return;
}



/* Entry: 1038d15d8; end: 1038d166f;  */

long FUN_1038d15d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038d1670; end: 1038d16e3;  */

undefined8 * FUN_1038d1670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1038d16e4; end: 1038d172f;  */

undefined8 * FUN_1038d16e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1038d1730; end: 1038d1957;  */

int FUN_1038d1730(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
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



/* Entry: 1038d1958; end: 1038d1973;  */

void FUN_1038d1958(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1038d1974();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1038d1974; end: 1038d1a7b;  */

undefined * FUN_1038d1974(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038d1a7c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ebdbe8;
    func_0x0001000285a8(0x112ebdbe8,&UNK_10dc1e100);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1106a6a78);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1038d1a7c; end: 1038d1aa3;  */

undefined * FUN_1038d1a7c(void)

{
  return &UNK_10dc1e290;
}



/* Entry: 1038d1aa4; end: 1038d1ae3;  */

void FUN_1038d1aa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e310;
  func_0x000107c61520(&UNK_10dc1e310,&UNK_1106a6140);
  puRam0000000112fac4d8 = puVar1;
  return;
}



/* Entry: 1038d1ae4; end: 1038d1ae7;  */

void FUN_1038d1ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e348;
  func_0x000107c61520(&UNK_10dc1e348,&UNK_1106a6140);
  puRam0000000112fac4e0 = puVar1;
  return;
}



/* Entry: 1038d1ae8; end: 1038d1b27;  */

void FUN_1038d1ae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e348;
  func_0x000107c61520(&UNK_10dc1e348,&UNK_1106a6140);
  puRam0000000112fac4e0 = puVar1;
  return;
}



/* Entry: 1038d1b28; end: 1038d1b33;  */

void FUN_1038d1b28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1038d1b34; end: 1038d1b73;  */

void FUN_1038d1b34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e410;
  func_0x000107c61520(&UNK_10dc1e410,&UNK_1106a6140);
  puRam0000000112fac4e8 = puVar1;
  return;
}



/* Entry: 1038d1b74; end: 1038d1c1f;  */

void FUN_1038d1b74(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d1c20; end: 1038d1c3f;  */

void FUN_1038d1c20(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1038d1c40; end: 1038d1c7f;  */

void FUN_1038d1c40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e438;
  func_0x000107c61520(&UNK_10dc1e438,&UNK_1106a6140);
  puRam0000000112fac4f0 = puVar1;
  return;
}



/* Entry: 1038d1c80; end: 1038d1dff;  */

void FUN_1038d1c80(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1038d1e00; end: 1038d1ea7;  */

void FUN_1038d1e00(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1038d1e94;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1038d1e94:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 1038d1ea8; end: 1038d1ec7;  */

undefined1  [16] FUN_1038d1ea8(void)

{
  return ZEXT816(0x1106a6140);
}



/* Entry: 1038d1ec8; end: 1038d1f2b;  */

undefined8 FUN_1038d1ec8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*param_1 == *param_2) {
    lVar2 = param_2[2];
    if (param_1[2] == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if ((lVar2 != 0) &&
            ((uVar1 = param_1[1], uVar1 == param_2[1] && param_1[2] == lVar2 ||
             (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1038d1f2c; end: 1038d1f7f;  */

/* WARNING: Possible PIC construction at 0x0001038d1f58: Changing call to branch */

void FUN_1038d1f2c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x18));
  if ((*(long *)(param_1 + 0x30) == 1) && (*(long *)(param_1 + 0x48) == 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1038d1f80; end: 1038d21b7;  */

undefined8 * FUN_1038d1f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar3 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  lVar2 = param_2[6];
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  if (lVar2 == 1) {
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[6] = param_2[6];
  }
  else {
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[6] = lVar2;
    func_0x000107c61434(lVar2);
  }
  lVar2 = param_2[9];
  if (lVar2 == 1) {
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
    param_1[9] = param_2[9];
  }
  else {
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
    param_1[9] = lVar2;
    func_0x000107c61434();
  }
  return param_1;
}



/* Entry: 1038d21b8; end: 1038d22ab;  */

long FUN_1038d21b8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 1038d22ac; end: 1038d2357;  */

int FUN_1038d22ac(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d2358; end: 1038d23bb;  */

/* WARNING: Possible PIC construction at 0x0001038d236c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038d2370) */

void FUN_1038d2358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038d23bc; end: 1038d241f;  */

undefined8 * FUN_1038d23bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1038d2420; end: 1038d2463;  */

undefined8 * FUN_1038d2420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1038d2464; end: 1038d2503;  */

int FUN_1038d2464(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038d2504; end: 1038d2583;  */

undefined8 * FUN_1038d2504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038d2584; end: 1038d2653;  */

int FUN_1038d2584(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038d2654; end: 1038d3053;  */

long FUN_1038d2654(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038d3054; end: 1038d3067;  */

bool FUN_1038d3054(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038d3068; end: 1038d3113;  */

void FUN_1038d3068(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3114; end: 1038d3117;  */

void FUN_1038d3114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e590;
  func_0x000107c61520(&UNK_10dc1e590,&UNK_1106a6548);
  puRam0000000112fac4f8 = puVar1;
  return;
}



/* Entry: 1038d3118; end: 1038d3157;  */

void FUN_1038d3118(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac4f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e590;
  func_0x000107c61520(&UNK_10dc1e590,&UNK_1106a6548);
  puRam0000000112fac4f8 = puVar1;
  return;
}



/* Entry: 1038d3158; end: 1038d32bb;  */

int FUN_1038d3158(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xeb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x14) {
      iVar2 = 4;
    }
    if (param_2 + 0x14 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038d31d4;
        goto LAB_1038d31b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038d31b8:
      return ((uint)*param_1 | uVar1 << 8) - 0x14;
    }
  }
LAB_1038d31d4:
  iVar2 = *param_1 - 0x15;
  if (*param_1 < 0x15) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038d32bc; end: 1038d352b;  */

undefined8 FUN_1038d32bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 != 0) && (param_1 != param_2)) {
      func_0x0001007bbbf8(0);
      plVar15 = (long *)(param_2 + 0x40);
      plVar13 = (long *)(param_1 + 0x40);
      do {
        uVar6 = plVar13[-4];
        uVar9 = plVar13[-3];
        lVar1 = plVar13[-2];
        uVar10 = plVar13[-1];
        lVar14 = *plVar13;
        uVar7 = plVar15[-4];
        uVar3 = plVar15[-3];
        lVar2 = plVar15[-2];
        uVar4 = plVar15[-1];
        lVar5 = *plVar15;
        func_0x000107c61434();
        func_0x000107c61174();
        func_0x000107c61434(lVar1);
        func_0x000107c61434(lVar14);
        func_0x000107c61174(uVar7);
        func_0x000107c61434(lVar2);
        uVar8 = uVar6;
        func_0x000107c60118(uVar6,uVar7);
        if (((uVar8 & 1) == 0) ||
           (((uVar9 != uVar3 || (lVar1 != lVar2)) &&
            (func_0x000107c605b8(uVar9,lVar1,uVar3,lVar2,0), (uVar9 & 1) == 0)))) {
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(lVar5);
          func_0x000107c6142c(lVar2);
LAB_1038d34e4:
          func_0x000107c61170(uVar7);
          goto LAB_1038d34e8;
        }
        if (lVar14 == 0) {
          func_0x000107c61434(lVar5);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar6);
          if (lVar5 != 0) {
            func_0x000107c6142c(lVar2);
            func_0x000107c61170(uVar7);
            func_0x000107c61430(lVar5,2);
            goto LAB_1038d34e8;
          }
LAB_1038d3334:
          func_0x000107c6142c(lVar2);
          func_0x000107c61170(uVar7);
        }
        else {
          if (lVar5 == 0) {
            func_0x000107c6142c(lVar2);
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar1);
            uVar7 = uVar6;
            goto LAB_1038d34e4;
          }
          if ((uVar10 == uVar4) && (lVar14 == lVar5)) {
            func_0x000107c6142c(lVar5);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar1);
            func_0x000107c61170(uVar6);
            goto LAB_1038d3334;
          }
          func_0x000107c605b8(uVar10,lVar14,uVar4,lVar5,0);
          func_0x000107c6142c(lVar5);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(lVar2);
          func_0x000107c61170(uVar7);
          if ((uVar10 & 1) == 0) goto LAB_1038d34e8;
        }
        plVar15 = plVar15 + 5;
        plVar13 = plVar13 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_1038d34e8:
    uVar11 = 0;
  }
  return uVar11;
}



/* Entry: 1038d352c; end: 1038d364f;  */

void FUN_1038d352c(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,param_1,param_2);
  uVar2 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (param_3 != 3) {
    uVar2 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (param_3 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (param_3 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x79726f7473;
  if (param_3 != 0) {
    uVar2 = 0x725f6172656d6163;
  }
  uVar3 = 0xe500000000000000;
  if (param_3 != 0) {
    uVar3 = 0xeb000000006c6c6f;
  }
  if (param_3 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(auStack_78,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  FUN_1038d4150(auStack_78,param_4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3650; end: 1038d365f;  */

void FUN_1038d3650(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar6 = unaff_x20[3];
  bVar5 = *(byte *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,uVar3,uVar4);
  uVar3 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar5 != 3) {
    uVar3 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar3;
  }
  uVar3 = 0x79726f7473;
  if (bVar5 != 0) {
    uVar3 = 0x725f6172656d6163;
  }
  uVar2 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar2 = 0xeb000000006c6c6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar2;
    uVar1 = uVar3;
  }
  func_0x000107c5fb58(auStack_78,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  FUN_1038d4150(auStack_78,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3660; end: 1038d3753;  */

void FUN_1038d3660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  undefined8 *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  bVar8 = *(byte *)(unaff_x20 + 2);
  lVar9 = unaff_x20[3];
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  uVar2 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar8 != 3) {
    uVar2 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar8 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar8 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x79726f7473;
  if (bVar8 != 0) {
    uVar2 = 0x725f6172656d6163;
  }
  uVar3 = 0xe500000000000000;
  if (bVar8 != 0) {
    uVar3 = 0xeb000000006c6c6f;
  }
  if (bVar8 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(param_1,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  lVar10 = *(long *)(lVar9 + 0x10);
  func_0x000107c60690(lVar10);
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar9 + 0x40);
    do {
      lVar9 = plVar12[-4];
      lVar6 = plVar12[-3];
      lVar5 = plVar12[-2];
      lVar7 = plVar12[-1];
      lVar11 = *plVar12;
      func_0x000107c61434(lVar11);
      func_0x000107c61174(lVar9);
      func_0x000107c61434(lVar5);
      func_0x000107c6011c(param_1);
      func_0x000107c5fb58(param_1,lVar6,lVar5);
      if (lVar11 == 0) {
        func_0x000107c60694(0);
      }
      else {
        func_0x000107c60694(1);
        func_0x000107c5fb58(param_1,lVar7,lVar11);
        func_0x000107c6142c(lVar11);
      }
      plVar12 = plVar12 + 5;
      func_0x000107c6142c(lVar5);
      func_0x000107c61170(lVar9);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 1038d3754; end: 1038d3873;  */

void FUN_1038d3754(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  bVar5 = *(byte *)(unaff_x20 + 2);
  uVar6 = unaff_x20[3];
  func_0x000107c6068c(auStack_88);
  func_0x000107c5fb58(auStack_88,uVar3,uVar4);
  uVar3 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar5 != 3) {
    uVar3 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar3;
  }
  uVar3 = 0x79726f7473;
  if (bVar5 != 0) {
    uVar3 = 0x725f6172656d6163;
  }
  uVar2 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar2 = 0xeb000000006c6c6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar2;
    uVar1 = uVar3;
  }
  func_0x000107c5fb58(auStack_88,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  FUN_1038d4150(auStack_88,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3874; end: 1038d3897;  */

undefined8 FUN_1038d3874(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  
  uVar9 = *param_1;
  uVar10 = param_1[3];
  uVar11 = param_2[3];
  uVar5 = param_2[2];
  uVar7 = param_1[2];
  if ((((uVar9 != *param_2) || (param_1[1] != param_2[1])) &&
      (func_0x000107c605b8(uVar9,param_1[1],*param_2,param_2[1],0), (uVar9 & 1) == 0)) ||
     ((char)uVar7 != (char)uVar5)) {
    return 0;
  }
  lVar12 = *(long *)(uVar10 + 0x10);
  if (lVar12 == *(long *)(uVar11 + 0x10)) {
    if ((lVar12 != 0) && (uVar10 != uVar11)) {
      func_0x0001007bbbf8(0);
      plVar15 = (long *)(uVar11 + 0x40);
      plVar13 = (long *)(uVar10 + 0x40);
      do {
        uVar9 = plVar13[-4];
        uVar7 = plVar13[-3];
        lVar1 = plVar13[-2];
        uVar10 = plVar13[-1];
        lVar14 = *plVar13;
        uVar5 = plVar15[-4];
        uVar11 = plVar15[-3];
        lVar2 = plVar15[-2];
        uVar3 = plVar15[-1];
        lVar4 = *plVar15;
        func_0x000107c61434();
        func_0x000107c61174();
        func_0x000107c61434(lVar1);
        func_0x000107c61434(lVar14);
        func_0x000107c61174(uVar5);
        func_0x000107c61434(lVar2);
        uVar6 = uVar9;
        func_0x000107c60118(uVar9,uVar5);
        if (((uVar6 & 1) == 0) ||
           (((uVar7 != uVar11 || (lVar1 != lVar2)) &&
            (func_0x000107c605b8(uVar7,lVar1,uVar11,lVar2,0), (uVar7 & 1) == 0)))) {
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar9);
          func_0x000107c6142c(lVar4);
          func_0x000107c6142c(lVar2);
LAB_1038d34e4:
          func_0x000107c61170(uVar5);
          goto LAB_1038d34e8;
        }
        if (lVar14 == 0) {
          func_0x000107c61434(lVar4);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar9);
          if (lVar4 != 0) {
            func_0x000107c6142c(lVar2);
            func_0x000107c61170(uVar5);
            func_0x000107c61430(lVar4,2);
            goto LAB_1038d34e8;
          }
LAB_1038d3334:
          func_0x000107c6142c(lVar2);
          func_0x000107c61170(uVar5);
        }
        else {
          if (lVar4 == 0) {
            func_0x000107c6142c(lVar2);
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar1);
            uVar5 = uVar9;
            goto LAB_1038d34e4;
          }
          if ((uVar10 == uVar3) && (lVar14 == lVar4)) {
            func_0x000107c6142c(lVar4);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar1);
            func_0x000107c61170(uVar9);
            goto LAB_1038d3334;
          }
          func_0x000107c605b8(uVar10,lVar14,uVar3,lVar4,0);
          func_0x000107c6142c(lVar4);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar9);
          func_0x000107c6142c(lVar2);
          func_0x000107c61170(uVar5);
          if ((uVar10 & 1) == 0) goto LAB_1038d34e8;
        }
        plVar15 = plVar15 + 5;
        plVar13 = plVar13 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    uVar8 = 1;
  }
  else {
LAB_1038d34e8:
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 1038d3898; end: 1038d3a4f;  */

void FUN_1038d3898(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_88 [72];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c6011c(auStack_88);
  func_0x000107c5fb58(auStack_88,uVar2,uVar1);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,uVar3,lVar4);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3a50; end: 1038d3a97;  */

uint FUN_1038d3a50(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1038d4244(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038d3a98; end: 1038d3bab;  */

void FUN_1038d3a98(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,param_1,param_2);
  uVar2 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (param_3 != 3) {
    uVar2 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (param_3 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (param_3 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x79726f7473;
  if (param_3 != 0) {
    uVar2 = 0x725f6172656d6163;
  }
  uVar3 = 0xe500000000000000;
  if (param_3 != 0) {
    uVar3 = 0xeb000000006c6c6f;
  }
  if (param_3 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(auStack_78,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3bac; end: 1038d3bb7;  */

void FUN_1038d3bac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  bVar5 = *(byte *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,uVar3,uVar4);
  uVar3 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar5 != 3) {
    uVar3 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar3;
  }
  uVar3 = 0x79726f7473;
  if (bVar5 != 0) {
    uVar3 = 0x725f6172656d6163;
  }
  uVar2 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar2 = 0xeb000000006c6c6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar2;
    uVar1 = uVar3;
  }
  func_0x000107c5fb58(auStack_78,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3bb8; end: 1038d3c93;  */

void FUN_1038d3bb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *unaff_x20;
  
  bVar5 = *(byte *)(unaff_x20 + 2);
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  uVar2 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar5 != 3) {
    uVar2 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x79726f7473;
  if (bVar5 != 0) {
    uVar2 = 0x725f6172656d6163;
  }
  uVar3 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xeb000000006c6c6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(param_1,uVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 1038d3c94; end: 1038d3d9b;  */

void FUN_1038d3c94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  bVar5 = *(byte *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_78);
  func_0x000107c5fb58(auStack_78,uVar3,uVar4);
  uVar3 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar5 != 3) {
    uVar3 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar3;
  }
  uVar3 = 0x79726f7473;
  if (bVar5 != 0) {
    uVar3 = 0x725f6172656d6163;
  }
  uVar2 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar2 = 0xeb000000006c6c6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar2;
    uVar1 = uVar3;
  }
  func_0x000107c5fb58(auStack_78,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d3d9c; end: 1038d3db7;  */

bool FUN_1038d3d9c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(uVar3,param_1[1],*param_2,param_2[1],0), (uVar3 & 1) == 0)) {
    return false;
  }
  return (char)uVar2 == (char)uVar1;
}



/* Entry: 1038d3db8; end: 1038d3de3;  */

void FUN_1038d3db8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1038d43c0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1038d3de4; end: 1038d3e93;  */

void FUN_1038d3de4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar2 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar5 != 3) {
    uVar2 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x79726f7473;
  if (bVar5 != 0) {
    uVar2 = 0x725f6172656d6163;
  }
  uVar3 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xeb000000006c6c6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1038d3e94; end: 1038d413b;  */

void FUN_1038d3e94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar2 = 0xec00000065766968;
  uVar4 = 0x6372615f74736f70;
  if (bVar5 != 3) {
    uVar2 = 0xee0079726f74735f;
    uVar4 = 0x6465727574616566;
  }
  uVar1 = 0x70616e73;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x79726f7473;
  if (bVar5 != 0) {
    uVar2 = 0x725f6172656d6163;
  }
  uVar3 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xeb000000006c6c6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038d413c; end: 1038d414f;  */

bool FUN_1038d413c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038d4150; end: 1038d4243;  */

void FUN_1038d4150(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x000107c60690(lVar5);
  if (lVar5 != 0) {
    plVar7 = (long *)(param_2 + 0x40);
    do {
      lVar4 = plVar7[-4];
      lVar2 = plVar7[-3];
      lVar1 = plVar7[-2];
      lVar3 = plVar7[-1];
      lVar6 = *plVar7;
      func_0x000107c61434(lVar6);
      func_0x000107c61174(lVar4);
      func_0x000107c61434(lVar1);
      func_0x000107c6011c(param_1);
      func_0x000107c5fb58(param_1,lVar2,lVar1);
      if (lVar6 == 0) {
        func_0x000107c60694(0);
      }
      else {
        func_0x000107c60694(1);
        func_0x000107c5fb58(param_1,lVar3,lVar6);
        func_0x000107c6142c(lVar6);
      }
      plVar7 = plVar7 + 5;
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(lVar4);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 1038d4244; end: 1038d42eb;  */

undefined8 FUN_1038d4244(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x0001007bbbf8(0);
  uVar1 = *param_1;
  func_0x000107c60118(uVar1,*param_2);
  if (((uVar1 & 1) != 0) &&
     ((uVar1 = param_1[1], uVar1 == param_2[1] && param_1[2] == param_2[2] ||
      (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar1 == 0) {
        return 1;
      }
    }
    else if ((uVar1 != 0) &&
            (((uVar2 = param_1[3], uVar2 == param_2[3] && (param_1[4] == uVar1)) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1038d42ec; end: 1038d4343;  */

bool FUN_1038d42ec(ulong param_1,long param_2,char param_3,ulong param_4,long param_5,char param_6)

{
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (func_0x000107c605b8(param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return false;
  }
  return param_3 == param_6;
}



/* Entry: 1038d4344; end: 1038d43bf;  */

undefined8
FUN_1038d4344(ulong param_1,long param_2,char param_3,long param_4,ulong param_5,long param_6,
             char param_7,long param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  
  if ((((param_1 != param_5) || (param_2 != param_6)) &&
      (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) ||
     (param_3 != param_7)) {
    return 0;
  }
  lVar12 = *(long *)(param_4 + 0x10);
  if (lVar12 == *(long *)(param_8 + 0x10)) {
    if ((lVar12 != 0) && (param_4 != param_8)) {
      func_0x0001007bbbf8(0);
      plVar15 = (long *)(param_8 + 0x40);
      plVar13 = (long *)(param_4 + 0x40);
      do {
        uVar6 = plVar13[-4];
        uVar9 = plVar13[-3];
        lVar1 = plVar13[-2];
        uVar10 = plVar13[-1];
        lVar14 = *plVar13;
        uVar7 = plVar15[-4];
        uVar3 = plVar15[-3];
        lVar2 = plVar15[-2];
        uVar4 = plVar15[-1];
        lVar5 = *plVar15;
        func_0x000107c61434();
        func_0x000107c61174();
        func_0x000107c61434(lVar1);
        func_0x000107c61434(lVar14);
        func_0x000107c61174(uVar7);
        func_0x000107c61434(lVar2);
        uVar8 = uVar6;
        func_0x000107c60118(uVar6,uVar7);
        if (((uVar8 & 1) == 0) ||
           (((uVar9 != uVar3 || (lVar1 != lVar2)) &&
            (func_0x000107c605b8(uVar9,lVar1,uVar3,lVar2,0), (uVar9 & 1) == 0)))) {
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(lVar5);
          func_0x000107c6142c(lVar2);
LAB_1038d34e4:
          func_0x000107c61170(uVar7);
          goto LAB_1038d34e8;
        }
        if (lVar14 == 0) {
          func_0x000107c61434(lVar5);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar6);
          if (lVar5 != 0) {
            func_0x000107c6142c(lVar2);
            func_0x000107c61170(uVar7);
            func_0x000107c61430(lVar5,2);
            goto LAB_1038d34e8;
          }
LAB_1038d3334:
          func_0x000107c6142c(lVar2);
          func_0x000107c61170(uVar7);
        }
        else {
          if (lVar5 == 0) {
            func_0x000107c6142c(lVar2);
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar1);
            uVar7 = uVar6;
            goto LAB_1038d34e4;
          }
          if ((uVar10 == uVar4) && (lVar14 == lVar5)) {
            func_0x000107c6142c(lVar5);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar1);
            func_0x000107c61170(uVar6);
            goto LAB_1038d3334;
          }
          func_0x000107c605b8(uVar10,lVar14,uVar4,lVar5,0);
          func_0x000107c6142c(lVar5);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(lVar2);
          func_0x000107c61170(uVar7);
          if ((uVar10 & 1) == 0) goto LAB_1038d34e8;
        }
        plVar15 = plVar15 + 5;
        plVar13 = plVar13 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_1038d34e8:
    uVar11 = 0;
  }
  return uVar11;
}



/* Entry: 1038d43c0; end: 1038d4423;  */

ulong FUN_1038d43c0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1038d4424; end: 1038d4427;  */

void FUN_1038d4424(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e660;
  func_0x000107c61520(&UNK_10dc1e660,&UNK_1106a65f8);
  puRam0000000112fac500 = puVar1;
  return;
}



/* Entry: 1038d4428; end: 1038d4467;  */

void FUN_1038d4428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e660;
  func_0x000107c61520(&UNK_10dc1e660,&UNK_1106a65f8);
  puRam0000000112fac500 = puVar1;
  return;
}



/* Entry: 1038d4468; end: 1038d446b;  */

void FUN_1038d4468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e6c8;
  func_0x000107c61520(&UNK_10dc1e6c8,&UNK_1106a6678);
  puRam0000000112fac508 = puVar1;
  return;
}



/* Entry: 1038d446c; end: 1038d44ab;  */

void FUN_1038d446c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e6c8;
  func_0x000107c61520(&UNK_10dc1e6c8,&UNK_1106a6678);
  puRam0000000112fac508 = puVar1;
  return;
}



/* Entry: 1038d44ac; end: 1038d44af;  */

void FUN_1038d44ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e730;
  func_0x000107c61520(&UNK_10dc1e730,&UNK_1106a6700);
  puRam0000000112fac510 = puVar1;
  return;
}



/* Entry: 1038d44b0; end: 1038d44ef;  */

void FUN_1038d44b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e730;
  func_0x000107c61520(&UNK_10dc1e730,&UNK_1106a6700);
  puRam0000000112fac510 = puVar1;
  return;
}



/* Entry: 1038d44f0; end: 1038d44f3;  */

void FUN_1038d44f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e7d0;
  func_0x000107c61520(&UNK_10dc1e7d0,&UNK_1106a6798);
  puRam0000000112fac518 = puVar1;
  return;
}



/* Entry: 1038d44f4; end: 1038d4533;  */

void FUN_1038d44f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fac518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1e7d0;
  func_0x000107c61520(&UNK_10dc1e7d0,&UNK_1106a6798);
  puRam0000000112fac518 = puVar1;
  return;
}



/* Entry: 1038d4534; end: 1038d459f;  */

/* WARNING: Possible PIC construction at 0x0001038d4548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038d454c) */

void FUN_1038d4534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038d45a0; end: 1038d460b;  */

undefined8 * FUN_1038d45a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038d460c; end: 1038d4657;  */

undefined8 * FUN_1038d460c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar2);
  return param_1;
}


