/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109fdfe40; end: 109fdfe53;  */

long * FUN_109fdfe40(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x540;
    FUN_109fdfc8c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109fdfe54; end: 109fdfe9f;  */

long * FUN_109fdfe54(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x540;
    FUN_109fdfc8c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109fdfea0; end: 109fe006b;  */

long * FUN_109fdfea0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar4 = *param_1;
  lVar10 = param_1[1];
  lVar11 = lVar10 - lVar4;
  uVar7 = (lVar11 >> 3) * -0x1111111111111111 + 1;
  if (uVar7 < 0x222222222222223) {
    lVar8 = param_1[2] - lVar4 >> 3;
    uVar9 = lVar8 * -0x2222222222222222;
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      uVar9 = uVar7;
    }
    if (0x111111111111110 < (ulong)(lVar8 * -0x1111111111111111)) {
      uVar9 = 0x222222222222222;
    }
    plStack_68 = param_1;
    if (uVar9 < 0x222222222222223) {
      lVar3 = uVar9 * 0x78;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar11);
      uVar6 = *param_2;
      uVar13 = param_2[3];
      uVar12 = param_2[2];
      puVar2[1] = param_2[1];
      *puVar2 = uVar6;
      puVar2[3] = uVar13;
      puVar2[2] = uVar12;
      uVar6 = param_2[4];
      puVar2[5] = param_2[5];
      puVar2[4] = uVar6;
      puVar2[6] = param_2[6];
      func_0x00010924a098(puVar2 + 7,param_2 + 7);
      lStack_88 = *param_1;
      lVar11 = param_1[1];
      lVar8 = lVar11 - lStack_88;
      uVar6 = param_2[0xe];
      param_2[0xe] = 0;
      puVar2[0xe] = uVar6;
      if (lVar11 - lStack_88 != 0) {
        lVar4 = ((lVar10 + (lVar11 - lStack_88 >> 3) * -8) - lVar4) + lVar3 + 0x38;
        lVar10 = lStack_88 + 0x38;
        do {
          uVar12 = *(undefined8 *)(lVar10 + -0x30);
          uVar6 = *(undefined8 *)(lVar10 + -0x38);
          uVar14 = *(undefined8 *)(lVar10 + -0x20);
          uVar13 = *(undefined8 *)(lVar10 + -0x28);
          uVar16 = *(undefined8 *)(lVar10 + -0x10);
          uVar15 = *(undefined8 *)(lVar10 + -0x18);
          *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar10 + -8);
          *(undefined8 *)(lVar4 + -0x10) = uVar16;
          *(undefined8 *)(lVar4 + -0x18) = uVar15;
          *(undefined8 *)(lVar4 + -0x20) = uVar14;
          *(undefined8 *)(lVar4 + -0x28) = uVar13;
          *(undefined8 *)(lVar4 + -0x30) = uVar12;
          *(undefined8 *)(lVar4 + -0x38) = uVar6;
          func_0x00010924a098(lVar4,lVar10);
          uVar6 = *(undefined8 *)(lVar10 + 0x38);
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar4 + 0x38) = uVar6;
          lVar4 = lVar4 + 0x78;
          lVar1 = lVar10 + 0x40;
          lVar10 = lVar10 + 0x78;
        } while (lVar1 != lVar11);
        lVar4 = lStack_88 + 0x38;
        do {
          _objc_release(*(undefined8 *)(lVar4 + 0x38));
          func_0x00010922e088(lVar4);
          lVar10 = lVar4 + 0x40;
          lVar4 = lVar4 + 0x78;
        } while (lVar10 != lVar11);
        lStack_88 = *param_1;
      }
      *param_1 = (long)puVar2 - lVar8;
      param_1[1] = (long)(puVar2 + 0xf);
      lStack_70 = param_1[2];
      param_1[2] = lVar3 + uVar9 * 0x78;
      lStack_80 = lStack_88;
      lStack_78 = lStack_88;
      FUN_109fe0080(&lStack_88);
      return puVar2 + 0xf;
    }
  }
  else {
    FUN_109fe006c();
  }
  func_0x000104c4f740();
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = plVar5[1];
  lVar10 = plVar5[2];
  while (lVar10 != lVar4) {
    plVar5[2] = lVar10 + -0x78;
    _objc_release(*(undefined8 *)(lVar10 + -8));
    func_0x00010922e088(lVar10 + -0x40);
    lVar10 = plVar5[2];
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 109fe006c; end: 109fe007f;  */

long * FUN_109fe006c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x78;
    _objc_release(*(undefined8 *)(lVar3 + -8));
    func_0x00010922e088(lVar3 + -0x40);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109fe0080; end: 109fe00df;  */

long * FUN_109fe0080(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x78;
    _objc_release(*(undefined8 *)(lVar2 + -8));
    func_0x00010922e088(lVar2 + -0x40);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109fe00e0; end: 109fe0123;  */

long FUN_109fe00e0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  FUN_109fdfb9c(param_1 + 0x40);
  func_0x000109fdfc24(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe0124; end: 109fe0277;  */

undefined8 * FUN_109fe0124(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 4) = 0x17;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_110b998b8;
  param_1[5] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x8e8);
  puVar3 = PTR__OBJC_CLASS___MTLCounterSampleBufferDescriptor_1126de048;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLCounterSampleBufferDescriptor_1126de048);
  func_0x00010c1848e0();
  func_0x00010c20c0c0(puVar3);
  func_0x00010c1f5380(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x8d8);
  uStack_48 = 0;
  func_0x00010c0d8820();
  uVar2 = uStack_48;
  _objc_retain(uStack_48);
  uVar5 = param_1[5];
  param_1[5] = uVar4;
  _objc_release(uVar5);
  uStack_4c = *param_3;
  if (param_1[5] == 0) {
    FUN_109fd2e10(param_2 + 0x810,6,1,&UNK_10f62fb18,0x46,&uStack_4c);
  }
  _objc_release(uVar2);
  _objc_release(puVar3);
  return param_1;
}



/* Entry: 109fe0278; end: 109fe03e3;  */

byte FUN_109fe0278(long param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  if ((uVar2 == 0) ||
     (*(uint *)(param_1 + 0x24) < param_3 || *(uint *)(param_1 + 0x24) - param_3 < param_2)) {
    bVar6 = 3;
  }
  else {
    func_0x00010c13a720(uVar2,param_2,param_2,(ulong)param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      bVar6 = 1;
    }
    else {
      uVar3 = uVar2;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uVar4 = uVar2;
      func_0x00010c08fa60();
      if (param_3 == 0) {
        bVar6 = 0;
      }
      else {
        uVar5 = 0;
        bVar6 = 1;
        do {
          if (uVar5 < uVar4 >> 3) {
            uVar7 = *(ulong *)(uVar3 + uVar5 * 8);
            bVar1 = uVar7 != 0xffffffffffffffff;
            bVar6 = bVar6 & bVar1;
            if (param_5 != 0) {
              if (uVar7 == 0xffffffffffffffff) {
                bVar1 = false;
                bVar6 = 0;
                lVar8 = 0x7fffffffffffffff;
              }
              else {
                lVar8 = (long)(*(double *)(param_1 + 0x30) * (double)uVar7);
                bVar1 = true;
              }
LAB_109fe0378:
              *(long *)(param_4 + uVar5 * 8) = lVar8;
            }
          }
          else {
            bVar1 = false;
            if (param_5 != 0) {
              lVar8 = 0x7fffffffffffffff;
              bVar6 = 0;
              goto LAB_109fe0378;
            }
            bVar6 = 0;
          }
          if (param_7 != 0) {
            *(bool *)(param_6 + uVar5) = bVar1;
          }
          uVar5 = uVar5 + 1;
        } while (param_3 != uVar5);
        bVar6 = bVar6 ^ 1;
      }
    }
    _objc_release(uVar2);
  }
  return bVar6;
}



/* Entry: 109fe03e4; end: 109fe03e7;  */

long FUN_109fe03e4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe03e8; end: 109fe03fb;  */

void FUN_109fe03e8(void)

{
  FUN_109fe03fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe03fc; end: 109fe042f;  */

long FUN_109fe03fc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe0430; end: 109fe05ab;  */

void FUN_109fe0430(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x16;
  param_1[7] = param_3;
  param_1[8] = param_2 + 0x810;
  param_1[9] = param_3 + 0x68;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_110b99920;
  param_1[1] = 0;
  param_1[5] = &PTR_FUN_110b99a48;
  param_1[6] = param_3;
  param_1[0xb] = param_3 + 200;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  param_1[0xf] = 3;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0xffffffffffffffff;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  do {
    *(undefined2 *)((long)param_1 + lVar2 + 0x1e0) = 0xff;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x24);
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 1;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  lVar2 = 0x300;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    lVar2 = lVar2 + 0x18;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
  } while (lVar2 != 0x3c0);
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0x3f80000000000000;
  *(undefined2 *)(param_1 + 0x7d) = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  return;
}



/* Entry: 109fe05ac; end: 109fe061f;  */

void FUN_109fe05ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 3;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_109fdec90(param_1 + 0x3f0);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38);
  _objc_retainAutorelease(uVar3);
  lVar2 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(lVar2 + 0x90) = 1;
  *(undefined4 *)(lVar2 + 0x94) = 2;
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109fe0620; end: 109fe0a43;  */

void FUN_109fe0620(long param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 auStack_460 [2];
  undefined1 auStack_450 [448];
  long lStack_290;
  long *plStack_288;
  long *plStack_280;
  long lStack_278;
  long *plStack_270;
  long lStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined4 uStack_244;
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
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *param_2;
  lVar9 = param_2[1];
  lVar10 = param_2[0x27];
  uVar12 = (undefined4)param_2[0x28];
  uVar13 = *(undefined4 *)((long)param_2 + 0x144);
  if ((lVar10 != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
    FUN_109fccc60(*(long *)(param_1 + 0x48),lVar10);
  }
  lVar7 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_238 = 0;
  lStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_100 = 0xffffffffffffffff;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  do {
    *(undefined2 *)((long)&uStack_f8 + lVar7) = 0xff;
    lVar7 = lVar7 + 2;
  } while (lVar7 != 0x24);
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 1;
  *(long *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  plVar3 = (long *)(param_1 + 0xa8);
  FUN_109fe1bd0(plVar3,&uStack_230);
  *(undefined8 *)(param_1 + 0x1e8) = uStack_f0;
  *(undefined8 *)(param_1 + 0x1e0) = uStack_f8;
  *(undefined8 *)(param_1 + 0x1f8) = uStack_e0;
  *(undefined8 *)(param_1 + 0x1f0) = uStack_e8;
  *(ulong *)(param_1 + 0x208) = CONCAT44(uStack_cc,uStack_d0);
  *(ulong *)(param_1 + 0x200) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(param_1 + 0x218) = CONCAT44(uStack_bc,uStack_c0);
  *(ulong *)(param_1 + 0x210) = CONCAT44(uStack_c4,uStack_c8);
  *(undefined8 *)(param_1 + 0x1d8) = uStack_100;
  *(undefined8 *)(param_1 + 0x1d0) = uStack_108;
  uVar1 = *(uint *)(lVar11 + 0x6d0);
  *(uint *)(param_1 + 0x21c) = uVar1;
  if (1 < uVar1) {
    lVar7 = *param_2;
    *(long *)(param_1 + 0xa0) = param_2[1];
    *(long *)(param_1 + 0x98) = lVar7;
    if (plVar3 != param_2 + 2) {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      if (param_2[0x26] != 0) {
        uVar8 = 0;
        lVar7 = param_2[0x26] << 4;
        plVar4 = param_2 + 2;
        do {
          if (0x11 < uVar8) {
            uVar5 = 0x10;
            ___cxa_allocate_exception(0x10);
            func_0x000104c4f71c();
            ___cxa_throw(uVar5,PTR___ZTISt12length_error_110352238,
                         PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x109fe0a0c);
            (*pcVar2)();
          }
          lVar14 = *plVar4;
          (plVar3 + uVar8 * 2)[1] = plVar4[1];
          plVar3[uVar8 * 2] = lVar14;
          uVar8 = *(long *)(param_1 + 0x1c8) + 1;
          *(ulong *)(param_1 + 0x1c8) = uVar8;
          lVar7 = lVar7 + -0x10;
          plVar4 = plVar4 + 2;
        } while (lVar7 != 0);
      }
    }
    *(long *)(param_1 + 0x1d0) = lVar10;
    *(undefined4 *)(param_1 + 0x1d8) = uVar12;
    *(undefined4 *)(param_1 + 0x1dc) = uVar13;
    uStack_244 = uVar12;
    FUN_109fce054(&lStack_240,lVar11 + 0x28);
    *(undefined8 *)(param_1 + 0x1e8) = uStack_238;
    *(long *)(param_1 + 0x1e0) = lStack_240;
    *(undefined8 *)(param_1 + 0x1f8) = uStack_228;
    *(undefined8 *)(param_1 + 0x1f0) = uStack_230;
    *(undefined8 *)(param_1 + 0x208) = uStack_218;
    *(undefined8 *)(param_1 + 0x200) = uStack_220;
    *(undefined8 *)(param_1 + 0x210) = uStack_210;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    lStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar7 = 0xe0;
    do {
      lVar14 = lVar7 + 0x18;
      *(undefined8 *)((long)&lStack_240 + lVar7) = 0;
      *(undefined8 *)((long)&uStack_238 + lVar7) = 0;
      *(undefined4 *)((long)&uStack_230 + lVar7) = 0;
      lVar7 = lVar14;
    } while (lVar14 != 0x1a0);
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_90 = 0x3f80000000000000;
    lVar7 = param_1 + 0x230;
    lVar14 = 0x220;
    uStack_78 = 0;
    do {
      uVar5 = *(undefined8 *)((long)auStack_460 + lVar14);
      *(undefined8 *)(lVar7 + -8) = *(undefined8 *)((long)auStack_460 + lVar14 + 8);
      *(undefined8 *)(lVar7 + -0x10) = uVar5;
      func_0x000109261f4c(lVar7,auStack_450 + lVar14);
      lVar14 = lVar14 + 0x38;
      lVar7 = lVar7 + 0x38;
    } while (lVar14 != 0x300);
    *(undefined8 *)(param_1 + 0x3c8) = uStack_98;
    *(undefined8 *)(param_1 + 0x3c0) = uStack_a0;
    *(ulong *)(param_1 + 0x3d8) = CONCAT62(uStack_86,uStack_88);
    *(undefined8 *)(param_1 + 0x3d0) = uStack_90;
    *(ulong *)(param_1 + 0x3e2) = CONCAT26(uStack_78,uStack_7e);
    *(ulong *)(param_1 + 0x3da) = CONCAT26(uStack_80,uStack_86);
    *(ulong *)(param_1 + 0x388) = CONCAT44(uStack_d4,uStack_d8);
    *(undefined8 *)(param_1 + 0x380) = uStack_e0;
    *(ulong *)(param_1 + 0x398) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(param_1 + 0x390) = CONCAT44(uStack_cc,uStack_d0);
    *(undefined8 *)(param_1 + 0x3a8) = uStack_b8;
    *(ulong *)(param_1 + 0x3a0) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined8 *)(param_1 + 0x3b8) = uStack_a8;
    *(undefined8 *)(param_1 + 0x3b0) = uStack_b0;
    *(undefined8 *)(param_1 + 0x348) = uStack_118;
    *(undefined8 *)(param_1 + 0x340) = uStack_120;
    *(undefined8 *)(param_1 + 0x358) = uStack_108;
    *(undefined8 *)(param_1 + 0x350) = uStack_110;
    *(undefined8 *)(param_1 + 0x368) = uStack_f8;
    *(undefined8 *)(param_1 + 0x360) = uStack_100;
    *(undefined8 *)(param_1 + 0x378) = uStack_e8;
    *(undefined8 *)(param_1 + 0x370) = uStack_f0;
    *(undefined8 *)(param_1 + 0x308) = uStack_158;
    *(undefined8 *)(param_1 + 0x300) = uStack_160;
    *(undefined8 *)(param_1 + 0x318) = uStack_148;
    *(undefined8 *)(param_1 + 0x310) = uStack_150;
    uVar13 = 0xffffffff;
    *(undefined8 *)(param_1 + 0x328) = uStack_138;
    *(undefined8 *)(param_1 + 800) = uStack_140;
    *(undefined8 *)(param_1 + 0x338) = uStack_128;
    *(undefined8 *)(param_1 + 0x330) = uStack_130;
    uVar12 = uStack_244;
  }
  plVar3 = (long *)(lVar9 + 0x30);
  lVar7 = param_1 + 0x1e0;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  plVar4 = (long *)(lVar11 + 0x28);
  FUN_109fe7be0(plVar4,plVar3,*(undefined8 *)(lVar9 + 0xc0),param_2 + 2,param_2[0x26],0,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uStack_238 = CONCAT44(uVar13,uVar12);
  lStack_240 = lVar10;
  FUN_109fe0a44();
  plVar6 = plVar4;
  FUN_109fd49cc(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(lVar9 + 0xc0) != 0) {
    lVar11 = *(long *)(lVar9 + 0xc0) << 3;
    do {
      plVar6 = (long *)*plVar3;
      if ((plVar6 != (long *)0x0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
        FUN_109fccc60();
      }
      plVar3 = plVar3 + 1;
      lVar11 = lVar11 + -8;
      lVar10 = 0;
    } while (lVar11 != 0);
  }
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
    plVar6 = (long *)param_2[1];
    FUN_109fccc60();
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
      plVar6 = (long *)*param_2;
      FUN_109fccc60();
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
        plVar6 = *(long **)(lVar9 + 0x28);
        FUN_109fccc60();
      }
    }
  }
  _objc_release(plVar4);
  FUN_109fe05ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  lVar11 = param_1;
  __Unwind_Resume(param_1);
  pcStack_258 = FUN_109fe0a44;
  lStack_290 = lVar9;
  plStack_288 = plVar3;
  plStack_280 = plVar4;
  lStack_278 = lVar10;
  plStack_270 = param_2;
  lStack_268 = param_1;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (*plVar6 != 0) {
    lVar9 = *(long *)(*plVar6 + 0x28);
    _objc_retain(lVar9);
    if (lVar9 != 0) {
      lVar10 = lVar11;
      func_0x00010c1494e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      func_0x00010c1f52e0(lVar7);
      func_0x00010c2096c0(lVar7);
      func_0x00010c195fa0(lVar7);
      func_0x00010c2096a0(lVar7);
      func_0x00010c195f80(lVar7);
      _objc_release(lVar7);
      _objc_release(lVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 109fe0a44; end: 109fe0b5b;  */

void FUN_109fe0a44(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain();
  if (*param_2 != 0) {
    lVar3 = *(long *)(*param_2 + 0x28);
    _objc_retain(lVar3);
    if (lVar3 != 0) {
      uVar1 = param_1;
      func_0x00010c1494e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010c1f52e0(uVar2);
      func_0x00010c2096c0(uVar2);
      func_0x00010c195fa0(uVar2);
      func_0x00010c2096a0(uVar2);
      func_0x00010c195f80(uVar2);
      _objc_release(uVar2);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109fe0b5c; end: 109fe0d83;  */

void FUN_109fe0b5c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *(int *)(param_1 + 0x218) + 1;
  if (uVar1 < *(uint *)(param_1 + 0x21c)) {
    *(uint *)(param_1 + 0x218) = uVar1;
    FUN_109fd4a38(*(undefined8 *)(param_1 + 0x58));
    lVar2 = *(long *)(param_1 + 0x98) + 0x28;
    FUN_109fe7be0(lVar2,*(long *)(param_1 + 0xa0) + 0x30,
                  *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0xc0),param_1 + 0xa8,
                  *(undefined8 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x218),param_1 + 0x1e0)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(int *)(param_1 + 0x218) + 1 == *(int *)(param_1 + 0x21c)) {
      uStack_90 = *(undefined8 *)(param_1 + 0x1d0);
      uStack_88 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20),0xffffffff);
      FUN_109fe0a44(lVar2,&uStack_90);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    FUN_109fd49cc(puVar3,lVar2);
    uVar5 = *puVar3;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    _objc_release(uVar4);
    FUN_109fdec90(param_1 + 0x3f0);
    func_0x00010c20a5e0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38));
    if (*(char *)(param_1 + 1000) == '\x01') {
      FUN_109fe0d84(param_1,param_1 + 0x3c0);
    }
    if (*(char *)(param_1 + 0x3e9) == '\x01') {
      if (1 < *(uint *)(param_1 + 0x21c)) {
        *(undefined1 *)(param_1 + 0x3e9) = 1;
      }
      func_0x00010c171980(*(undefined4 *)(param_1 + 0x3d8),*(undefined4 *)(param_1 + 0x3dc),
                          *(undefined4 *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4),
                          *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38));
    }
    lVar6 = 0;
    do {
      puVar3 = (undefined8 *)(param_1 + 0x220 + lVar6 * 0x38);
      uStack_88 = puVar3[1];
      uStack_90 = *puVar3;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = 0;
      if (puVar3[6] != 0) {
        puVar7 = puVar3 + 2;
        lVar9 = puVar3[6] << 2;
        do {
          func_0x000109261ecc(&uStack_80,puVar7);
          puVar7 = (undefined8 *)((long)puVar7 + 4);
          lVar9 = lVar9 + -4;
        } while (lVar9 != 0);
      }
      if (uStack_88 != 0) {
        FUN_109fe0e24(param_1,lVar6,uStack_90,uStack_88,&uStack_80,uStack_60);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 4);
    lVar6 = 0;
    puVar8 = (undefined4 *)(param_1 + 0x310);
    do {
      if (*(long *)(puVar8 + -2) != 0) {
        FUN_109fe1050(param_1,lVar6,*(undefined8 *)(puVar8 + -4),*(long *)(puVar8 + -2),*puVar8);
      }
      lVar6 = lVar6 + 1;
      puVar8 = puVar8 + 6;
    } while (lVar6 != 8);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 109fe0d84; end: 109fe0df3;  */

void FUN_109fe0d84(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  double dStack_20;
  double dStack_18;
  
  if (1 < *(uint *)(param_1 + 0x21c)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *(ulong *)(param_1 + 0x3d0) = param_2[2];
    *(ulong *)(param_1 + 0x3c8) = uVar2;
    *(ulong *)(param_1 + 0x3c0) = uVar1;
    *(undefined1 *)(param_1 + 1000) = 1;
  }
  auVar3._0_8_ = *param_2 & 0xffffffff;
  auVar3._8_8_ = *param_2 >> 0x20;
  auVar3 = NEON_ucvtf(auVar3,8);
  auVar4._0_8_ = param_2[1] & 0xffffffff;
  auVar4._8_8_ = param_2[1] >> 0x20;
  auVar4 = NEON_ucvtf(auVar4,8);
  uStack_38 = auVar3._8_8_;
  uStack_40 = auVar3._0_8_;
  uStack_28 = auVar4._8_8_;
  uStack_30 = auVar4._0_8_;
  dStack_20 = (double)(float)param_2[2];
  dStack_18 = (double)(float)(param_2[2] >> 0x20);
  func_0x00010c2232a0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38),param_2,&uStack_40);
  return;
}



/* Entry: 109fe0df4; end: 109fe0e23;  */

void FUN_109fe0df4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  if (1 < *(uint *)(param_5 + 0x21c)) {
    *(undefined4 *)(param_5 + 0x3d8) = param_1;
    *(undefined4 *)(param_5 + 0x3dc) = param_2;
    *(undefined4 *)(param_5 + 0x3e0) = param_3;
    *(undefined4 *)(param_5 + 0x3e4) = param_4;
    *(undefined1 *)(param_5 + 0x3e9) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c171990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_5 + 0x58) + 0x38),
             PTR_s_setBlendColorRed_green_blue_alph_11263a080);
  return;
}



/* Entry: 109fe0e24; end: 109fe104f;  */

void FUN_109fe0e24(long param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  long *plVar5;
  long extraout_x9;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lStack_58;
  
  if (((uint)param_2 < 4) && (1 < *(uint *)(param_1 + 0x21c))) {
    lVar7 = param_1 + (param_2 & 0xffffffff) * 0x38;
    *(undefined8 *)(lVar7 + 0x220) = param_3;
    *(long *)(lVar7 + 0x228) = param_4;
    *(undefined8 *)(lVar7 + 0x250) = 0;
    if (param_6 != 0) {
      lVar3 = 0;
      lVar6 = lVar7 + 0x220;
      lVar8 = param_6 * 4;
      do {
        lVar8 = lVar8 + -4;
        *(undefined4 *)(lVar7 + 0x230 + lVar3 * 4) = *(undefined4 *)(param_5 + lVar3 * 4);
        lVar3 = lVar3 + 1;
        if (lVar8 == 0) goto LAB_109fe0ee8;
      } while (lVar3 != 8);
      *(undefined8 *)(lVar7 + 0x250) = 8;
      param_6 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000104c4f71c();
      ___cxa_throw(param_6,PTR___ZTISt12length_error_110352238,
                   PTR___ZNSt12length_errorD1Ev_110346170);
      lVar3 = extraout_x8;
      lVar6 = extraout_x9;
LAB_109fe0ee8:
      *(long *)(lVar6 + 0x30) = lVar3;
    }
  }
  if (*(long *)(param_4 + 0x310) != 0) {
    lVar7 = *(long *)(param_1 + 0x58);
    func_0x00010c220f00(*(undefined8 *)(lVar7 + 0x38));
    func_0x00010c19f000(*(undefined8 *)(lVar7 + 0x38));
    FUN_109fd7464(param_4,*(undefined8 *)(param_1 + 0x58));
    lVar7 = *(long *)(param_1 + 0x38);
    if ((*(byte *)(lVar7 + 0x98) & 1) == 0) {
      uVar4 = *(ulong *)(param_4 + 0x250);
      if (uVar4 != 0) {
        uVar10 = 0;
        do {
          if ((*(long *)(*(long *)(param_4 + 0x248) + uVar10 * 8) != 0) &&
             (*(int *)(lVar7 + 0x88) == 0)) {
            FUN_109fccc60(lVar7 + 0x68);
            uVar4 = *(ulong *)(param_4 + 0x250);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar4);
      }
      if (*(int *)(lVar7 + 0x88) == 0) {
        FUN_109fccc60(lVar7 + 0x68,param_4);
      }
      if (*(int *)(lVar7 + 0x60) == 0) {
        FUN_109fccc60(lVar7 + 0x40,*(undefined8 *)(param_4 + 0x30));
      }
    }
    if (*(long *)(param_4 + 0x2a8) != 0) {
      lVar7 = *(long *)(param_1 + 0x38);
      plVar9 = *(long **)(param_4 + 0x2a0);
      plVar1 = plVar9 + *(long *)(param_4 + 0x2a8);
      do {
        lStack_58 = *plVar9;
        plVar5 = *(long **)(lVar7 + 0xb0);
        plVar2 = *(long **)(lVar7 + 0xb8);
        if (plVar5 == plVar2) {
LAB_109fe0fe4:
          if (plVar5 == plVar2) goto LAB_109fe0fec;
        }
        else {
          do {
            if (*plVar5 == lStack_58) goto LAB_109fe0fe4;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar2);
LAB_109fe0fec:
          func_0x000109249b14(lVar7 + 0xb0,&lStack_58);
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
  }
  FUN_109fde968(param_1 + 0x3f0,param_2,param_3,param_5,param_6);
  return;
}



/* Entry: 109fe1050; end: 109fe10e3;  */

void FUN_109fe1050(long param_1,ulong param_2,long param_3,long param_4,undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lStack_30;
  long *plStack_28;
  
  if (((uint)param_2 < 8) && (1 < *(uint *)(param_1 + 0x21c))) {
    lVar6 = param_1 + (param_2 & 0xffffffff) * 0x18;
    *(long *)(lVar6 + 0x300) = param_3;
    *(long *)(lVar6 + 0x308) = param_4;
    *(undefined4 *)(lVar6 + 0x310) = param_5;
  }
  if (*(char *)(param_3 + 0x78) == '\x01') {
    iVar5 = *(int *)(param_3 + 0x70);
  }
  else {
    iVar5 = 0x17;
  }
  func_0x00010c220f00(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38),param_2,
                      *(undefined8 *)(param_4 + 0x48),param_5,iVar5 + (uint)param_2);
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_4)) {
    func_0x00010922d97c(&lStack_30,*puVar4);
    if (lStack_30 != 0) {
      func_0x00010925df7c(puVar4 + 1,&lStack_30);
    }
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 109fe10e4; end: 109fe1327;  */

void FUN_109fe10e4(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x22;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  lVar12 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  do {
    *(undefined2 *)((long)&uStack_88 + lVar12) = 0xff;
    lVar12 = lVar12 + 2;
  } while (lVar12 != 0x24);
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_109fe1bd0(param_1 + 0xa8,&uStack_1c0);
  *(undefined8 *)(param_1 + 0x1f8) = uStack_70;
  *(undefined8 *)(param_1 + 0x1f0) = uStack_78;
  *(ulong *)(param_1 + 0x208) = CONCAT44(uStack_5c,uStack_60);
  *(ulong *)(param_1 + 0x200) = CONCAT44(uStack_64,uStack_68);
  *(ulong *)(param_1 + 0x218) = CONCAT44(uStack_4c,uStack_50);
  *(ulong *)(param_1 + 0x210) = CONCAT44(uStack_54,uStack_58);
  *(undefined8 *)(param_1 + 0x1d8) = uStack_90;
  *(undefined8 *)(param_1 + 0x1d0) = uStack_98;
  *(undefined8 *)(param_1 + 0x1e8) = uStack_80;
  *(undefined8 *)(param_1 + 0x1e0) = uStack_88;
  plVar5 = param_2;
  FUN_109fe8c5c();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = param_2[0x5d];
  lStack_1d0 = param_2[0x5c];
  if ((lStack_1d0 != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
    FUN_109fccc60();
  }
  FUN_109fe0a44(plVar5,&lStack_1d0);
  FUN_109fd49cc(*(undefined8 *)(param_1 + 0x58),plVar5);
  if (param_2[0x49] != 0) {
    unaff_x22 = param_2 + param_2[0x49] * 9 + 1;
    plVar15 = param_2 + 1;
    do {
      if ((*plVar15 != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
        FUN_109fccc60();
      }
      if ((plVar15[2] != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
        FUN_109fccc60();
      }
      plVar15 = plVar15 + 9;
    } while (plVar15 != unaff_x22);
  }
  if ((param_2[0x4a] != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
    FUN_109fccc60();
  }
  if ((param_2[0x4c] != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
    FUN_109fccc60();
  }
  if ((param_2[0x53] != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
    FUN_109fccc60();
  }
  uVar10 = param_2[0x55];
  if ((uVar10 != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0)) {
    FUN_109fccc60();
  }
  _objc_release(plVar5);
  FUN_109fe05ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  lVar12 = param_1;
  __Unwind_Resume();
  pcStack_1d8 = FUN_109fe1328;
  lVar14 = *(long *)(lVar12 + 0x58);
  uVar13 = *(undefined8 *)(lVar14 + 0x38);
  uVar6 = uVar10;
  plStack_200 = unaff_x22;
  plStack_1f8 = plVar5;
  plStack_1f0 = param_2;
  lStack_1e8 = param_1;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x000109fe2598(uVar10);
  func_0x00010c1ea880(uVar13);
  func_0x00010c18bf80(*(undefined8 *)(lVar14 + 0x38));
  uVar2 = *(uint *)(uVar10 + 0x2e8);
  uVar11 = (ulong)uVar2;
  if (uVar2 == 0) {
LAB_109fe1380:
    func_0x00010c21a1a0(*(undefined8 *)(lVar14 + 0x38));
    if (*(uint *)(uVar10 + 0x2ec) < 3) {
      uVar11 = 2 - (ulong)*(uint *)(uVar10 + 0x2ec);
      func_0x00010c186960(*(undefined8 *)(lVar14 + 0x38));
      if ((*(int *)(uVar10 + 0x2f0) == 0) || (*(int *)(uVar10 + 0x2f0) == 1)) {
        func_0x00010c1a1300(*(undefined8 *)(lVar14 + 0x38));
        uVar6 = (ulong)*(uint *)(uVar10 + 0x2e0);
        func_0x000109fe5158();
        *(ulong *)(lVar12 + 0x78) = uVar6;
        cVar3 = *(char *)(uVar10 + 0x2f4);
        *(char *)(lVar12 + 0x60) = cVar3;
        if (cVar3 == '\x01') {
          uVar16 = *(undefined4 *)(lVar12 + 100);
          uVar17 = *(undefined4 *)(lVar12 + 0x68);
          uVar18 = *(undefined4 *)(lVar12 + 0x6c);
        }
        else {
          uVar16 = 0;
          uVar17 = 0;
          uVar18 = 0;
        }
        func_0x00010c18be20(uVar16,uVar17,uVar18,*(undefined8 *)(lVar14 + 0x38));
        puVar7 = *(undefined8 **)(lVar12 + 0x48);
        if (*(int *)(puVar7 + 4) == 0) {
          if ((puVar7[1] == puVar7[2]) || (*(ulong *)(puVar7[2] + -0x10) != uVar10)) {
            func_0x00010922d97c(&plStack_200,*puVar7);
            if (plStack_200 != (long *)0x0) {
              func_0x00010925df7c(puVar7 + 1,&plStack_200);
            }
            plVar5 = plStack_1f8;
            if (plStack_1f8 != (long *)0x0) {
              plVar15 = plStack_1f8 + 1;
              do {
                lVar12 = *plVar15;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar4) {
                  *plVar15 = lVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
          }
          return;
        }
        return;
      }
      goto LAB_109fe1448;
    }
    func_0x000109243bf8(&UNK_10f55eb8f);
  }
  else if (uVar2 == 1) {
    uVar11 = 1;
    goto LAB_109fe1380;
  }
  func_0x000109243bf8(&UNK_10f55eba1);
LAB_109fe1448:
  puVar8 = &UNK_10f55eb7a;
  func_0x000109243bf8(&UNK_10f55eb7a);
  if (param_5 != 0) {
    lVar12 = 0;
    uVar6 = uVar6 & 0xffffffff;
    do {
      lVar9 = *(long *)(*(long *)(uVar11 + 0x60) + uVar6 * 8);
      uVar13 = *param_4;
      FUN_109fd0a20(lVar9,uVar13);
      lVar14 = param_7 - lVar12;
      if (lVar9 != -1) {
        lVar14 = lVar9;
      }
      lVar1 = lVar12 * 4;
      lVar12 = lVar9 + lVar12;
      FUN_109fe0e24(puVar8,uVar6,uVar11,uVar13,param_6 + lVar1,lVar14);
      uVar6 = uVar6 + 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109fe1328; end: 109fe1453;  */

void FUN_109fe1328(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x21;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  lVar13 = *(long *)(param_1 + 0x58);
  uVar12 = *(undefined8 *)(lVar13 + 0x38);
  uVar7 = param_2;
  func_0x000109fe2598(param_2);
  func_0x00010c1ea880(uVar12);
  func_0x00010c18bf80(*(undefined8 *)(lVar13 + 0x38));
  uVar4 = *(uint *)(param_2 + 0x2e8);
  uVar11 = (ulong)uVar4;
  if (uVar4 == 0) {
LAB_109fe1380:
    func_0x00010c21a1a0(*(undefined8 *)(lVar13 + 0x38));
    if (*(uint *)(param_2 + 0x2ec) < 3) {
      uVar11 = 2 - (ulong)*(uint *)(param_2 + 0x2ec);
      func_0x00010c186960(*(undefined8 *)(lVar13 + 0x38));
      if ((*(int *)(param_2 + 0x2f0) == 0) || (*(int *)(param_2 + 0x2f0) == 1)) {
        func_0x00010c1a1300(*(undefined8 *)(lVar13 + 0x38));
        uVar7 = (ulong)*(uint *)(param_2 + 0x2e0);
        func_0x000109fe5158();
        *(ulong *)(param_1 + 0x78) = uVar7;
        cVar5 = *(char *)(param_2 + 0x2f4);
        *(char *)(param_1 + 0x60) = cVar5;
        if (cVar5 == '\x01') {
          uVar14 = *(undefined4 *)(param_1 + 100);
          uVar15 = *(undefined4 *)(param_1 + 0x68);
          uVar16 = *(undefined4 *)(param_1 + 0x6c);
        }
        else {
          uVar14 = 0;
          uVar15 = 0;
          uVar16 = 0;
        }
        func_0x00010c18be20(uVar14,uVar15,uVar16,*(undefined8 *)(lVar13 + 0x38));
        puVar8 = *(undefined8 **)(param_1 + 0x48);
        if (*(int *)(puVar8 + 4) == 0) {
          if ((puVar8[1] == puVar8[2]) || (*(ulong *)(puVar8[2] + -0x10) != param_2)) {
            func_0x00010922d97c(&stack0xffffffffffffffd0,*puVar8);
            if (unaff_x22 != 0) {
              func_0x00010925df7c(puVar8 + 1,&stack0xffffffffffffffd0);
            }
            if (unaff_x21 != (long *)0x0) {
              plVar2 = unaff_x21 + 1;
              do {
                lVar13 = *plVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
              }
            }
          }
          return;
        }
        return;
      }
      goto LAB_109fe1448;
    }
    func_0x000109243bf8(&UNK_10f55eb8f);
  }
  else if (uVar4 == 1) {
    uVar11 = 1;
    goto LAB_109fe1380;
  }
  func_0x000109243bf8(&UNK_10f55eba1);
LAB_109fe1448:
  puVar9 = &UNK_10f55eb7a;
  func_0x000109243bf8(&UNK_10f55eb7a);
  if (param_5 != 0) {
    lVar13 = 0;
    uVar7 = uVar7 & 0xffffffff;
    do {
      lVar10 = *(long *)(*(long *)(uVar11 + 0x60) + uVar7 * 8);
      uVar12 = *param_4;
      FUN_109fd0a20(lVar10,uVar12);
      lVar3 = param_7 - lVar13;
      if (lVar10 != -1) {
        lVar3 = lVar10;
      }
      lVar1 = lVar13 * 4;
      lVar13 = lVar10 + lVar13;
      FUN_109fe0e24(puVar9,uVar7,uVar11,uVar12,param_6 + lVar1,lVar3);
      uVar7 = uVar7 + 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109fe1454; end: 109fe14f7;  */

void FUN_109fe1454(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_5 != 0) {
    lVar5 = 0;
    param_2 = param_2 & 0xffffffff;
    do {
      lVar3 = *(long *)(*(long *)(param_3 + 0x60) + param_2 * 8);
      uVar4 = *param_4;
      FUN_109fd0a20(lVar3,uVar4);
      lVar2 = param_7 - lVar5;
      if (lVar3 != -1) {
        lVar2 = lVar3;
      }
      lVar1 = lVar5 * 4;
      lVar5 = lVar3 + lVar5;
      FUN_109fe0e24(param_1,param_2,param_3,uVar4,param_6 + lVar1,lVar2);
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109fe14f8; end: 109fe1577;  */

void FUN_109fe14f8(undefined8 param_1,int param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_5 != 0) {
    uVar2 = 0;
    uVar3 = 1;
    do {
      FUN_109fe1050(param_1,param_2 + uVar3 + -1,param_3,*(undefined8 *)(param_4 + uVar2 * 8),
                    *(undefined4 *)(param_6 + uVar2 * 4));
      uVar2 = (ulong)uVar3;
      uVar1 = (ulong)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar1 < param_5);
  }
  return;
}



/* Entry: 109fe1578; end: 109fe15c7;  */

void FUN_109fe1578(long param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long in_stack_ffffffffffffffd0;
  long *in_stack_ffffffffffffffd8;
  
  *(ulong *)(param_1 + 0x88) = param_2;
  *(int *)(param_1 + 0x90) = (int)param_3;
  if ((int)param_4 == 2) {
    uVar6 = 0;
  }
  else {
    if ((int)param_4 != 3) {
      puVar5 = &UNK_10f62ff28;
      func_0x000109243bf8();
      if ((param_5 != 0) && ((*(byte *)(*(long *)(puVar5 + 0x18) + 0x69) & 1) == 0)) {
        FUN_109fd19d0(*(undefined8 *)(puVar5 + 0x40),6,0x10,&UNK_10f62fb5f,0x9a);
      }
      lVar7 = *(long *)(puVar5 + 0x58);
      FUN_109fdea58(puVar5 + 0x3f0,*(undefined8 *)(lVar7 + 0x38));
      uVar6 = *(undefined8 *)(lVar7 + 0x38);
      if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf89b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (uVar6,PTR_s_drawPrimitives_vertexStart_verte_1125c0078);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf89b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar6,PTR_s_drawPrimitives_vertexStart_verte_1125c0070,
                 *(undefined8 *)(puVar5 + 0x78),param_3 & 0xffffffff,param_2 & 0xffffffff,
                 param_4 & 0xffffffff);
      return;
    }
    uVar6 = 1;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(ulong *)(puVar4[2] + -0x10) != param_2)) {
    func_0x00010922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (in_stack_ffffffffffffffd0 != 0) {
      func_0x00010925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (in_stack_ffffffffffffffd8 != (long *)0x0) {
      plVar1 = in_stack_ffffffffffffffd8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*in_stack_ffffffffffffffd8 + 0x10))(in_stack_ffffffffffffffd8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffd8);
      }
    }
  }
  return;
}



/* Entry: 109fe15c8; end: 109fe1767;  */

void FUN_109fe15c8(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_5 != 0) && ((*(byte *)(*(long *)(param_1 + 0x18) + 0x69) & 1) == 0)) {
    FUN_109fd19d0(*(undefined8 *)(param_1 + 0x40),6,0x10,&UNK_10f62fb5f,0x9a);
  }
  lVar2 = *(long *)(param_1 + 0x58);
  FUN_109fdea58(param_1 + 0x3f0,*(undefined8 *)(lVar2 + 0x38));
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf89b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawPrimitives_vertexStart_verte_1125c0078);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf89b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_drawPrimitives_vertexStart_verte_1125c0070,*(undefined8 *)(param_1 + 0x78),
             param_3,param_2,param_4);
  return;
}



/* Entry: 109fe1768; end: 109fe188b;  */

void FUN_109fe1768(long param_1,long param_2,undefined8 param_3)

{
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x6a) & 1) == 0) {
    FUN_109fd19d0(*(undefined8 *)(param_1 + 0x40),6,0x10,&UNK_10f62fc9c,0x91);
  }
  FUN_109fdea58(param_1 + 0x3f0,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38));
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
    FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf89af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38),
             PTR_s_drawPrimitives_indirectBuffer_in_1125c0060,*(undefined8 *)(param_1 + 0x78),
             *(undefined8 *)(param_2 + 0x48),param_3);
  return;
}



/* Entry: 109fe188c; end: 109fe1a07;  */

void FUN_109fe188c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x6c) & 1) == 0) {
    FUN_109fd19d0(*(undefined8 *)(param_1 + 0x40),6,0x10,&UNK_10f62fdc7,0xa0);
  }
  FUN_109fdea58(param_1 + 0x3f0,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38));
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
    FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
  }
  if (param_4 != 0) {
    uVar1 = (ulong)param_4;
    do {
      func_0x00010bf89ae0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38));
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109fe1a08; end: 109fe1a37;  */

void FUN_109fe1a08(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 100) = param_1;
  *(undefined4 *)(param_4 + 0x68) = param_2;
  *(undefined4 *)(param_4 + 0x6c) = param_3;
  if (*(char *)(param_4 + 0x60) != '\x01') {
    param_1 = 0;
    param_2 = 0;
    param_3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c18be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,*(undefined8 *)(*(long *)(param_4 + 0x58) + 0x38),
             PTR_s_setDepthBias_slopeScale_clamp__1126409a8);
  return;
}



/* Entry: 109fe1a38; end: 109fe1aa7;  */

void FUN_109fe1a38(undefined *param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0x70;
    goto LAB_109fe1a70;
  }
  if (param_2 == 2) {
LAB_109fe1a60:
    *(undefined4 *)(param_1 + 0x70) = param_3;
  }
  else if (param_2 != 1) {
    param_1 = &UNK_10f62ff10;
    func_0x000109243bf8();
    goto LAB_109fe1a60;
  }
  lVar1 = 0x74;
LAB_109fe1a70:
  *(undefined4 *)(param_1 + lVar1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c20a5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38),
             PTR_s_setStencilFrontReferenceValue_ba_1126603a0,*(undefined4 *)(param_1 + 0x70),
             *(undefined4 *)(param_1 + 0x74));
  return;
}



/* Entry: 109fe1aa8; end: 109fe1b5b;  */

void FUN_109fe1aa8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long in_stack_00000000;
  ulong in_stack_00000008;
  long lStack_48;
  
  if (in_stack_00000008 != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(in_stack_00000000 + uVar5 * 0x28 + 0x10);
      if ((lVar3 != 0) && (lStack_48 = *(long *)(lVar3 + 0x88), lStack_48 != 0)) {
        plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
        plVar4 = (long *)*plVar2;
        plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
        if (plVar4 == plVar1) {
LAB_109fe1b1c:
          if (plVar4 != plVar1) goto LAB_109fe1b30;
        }
        else {
          do {
            if (*plVar4 == lStack_48) goto LAB_109fe1b1c;
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
        }
        func_0x000109245a44(plVar2,&lStack_48);
      }
LAB_109fe1b30:
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < in_stack_00000008);
  }
  return;
}



/* Entry: 109fe1b5c; end: 109fe1b97;  */

void FUN_109fe1b5c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined4 uStack_28;
  
  FUN_109fd4a38(*(undefined8 *)(param_1 + 0x58));
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x94) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  lStack_30 = param_1 + 0x490;
  uStack_28 = 0;
  func_0x000109fded98(&lStack_30,4);
  *(undefined4 *)(param_1 + 0x498) = 0xffffffff;
  return;
}



/* Entry: 109fe1b98; end: 109fe1b9b;  */

long FUN_109fe1b98(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe1b9c; end: 109fe1baf;  */

void FUN_109fe1b9c(void)

{
  FUN_109fd2da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe1bb0; end: 109fe1bb7;  */

long FUN_109fe1bb0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + -0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + -0x28;
}



/* Entry: 109fe1bb8; end: 109fe1bcf;  */

void FUN_109fe1bb8(long param_1)

{
  FUN_109fd2da8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe1bd0; end: 109fe1c8f;  */

void FUN_109fe1bd0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    param_1[0x24] = 0;
    if (param_2[0x24] != 0) {
      uVar4 = 0;
      lVar3 = param_2[0x24] << 4;
      puVar5 = param_2;
      do {
        if (0x11 < uVar4) {
          plVar2 = (long *)0x10;
          ___cxa_allocate_exception();
          __ZNSt11logic_errorC2EPKc();
          *plVar2 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
          ___cxa_throw(plVar2,PTR___ZTISt12length_error_110352238,
                       PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x109fe1c74);
          (*pcVar1)();
        }
        uVar6 = *puVar5;
        (param_1 + uVar4 * 2)[1] = puVar5[1];
        param_1[uVar4 * 2] = uVar6;
        uVar4 = param_1[0x24] + 1;
        param_1[0x24] = uVar4;
        lVar3 = lVar3 + -0x10;
        puVar5 = puVar5 + 2;
      } while (lVar3 != 0);
    }
    param_2[0x24] = 0;
  }
  return;
}



/* Entry: 109fe1c90; end: 109fe206b;  */

undefined8 * FUN_109fe1c90(undefined8 *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  long alStack_d8 [2];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined **ppuStack_a8;
  uint *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined **ppuStack_68;
  
  puVar2 = param_1;
  FUN_109fc9df8();
  *puVar2 = &PTR_FUN_110b99a90;
  puVar2[0xb3] = 0;
  puVar2[0xb2] = 0;
  __ZNSt3__17promiseIvEC1Ev(puVar2 + 0xb4);
  param_1[0xb5] = param_2 + 0x810;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  ppuVar8 = (undefined **)(param_3 + 2);
  FUN_109fe7b88(ppuVar8,*(undefined8 *)(param_3 + 8),0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3 + 2;
  ppuStack_98 = ppuVar8;
  FUN_109fe7b88(puVar3,*(undefined8 *)(param_3 + 8),1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  puStack_a0 = puVar3;
  FUN_109fe7110(param_3,&ppuStack_98,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_3 + 0x134) != 0) {
    FUN_109fdf4d0(*(long *)(param_3 + 0x134),param_3,&ppuStack_98,&puStack_a0);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170200(puVar4);
    _objc_release(puVar5);
  }
  ppuVar8 = ppuStack_98;
  puStack_b0 = param_1;
  _objc_retain(ppuStack_98);
  ppuStack_a8 = ppuVar8;
  uVar1 = *param_3;
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_c0,param_1 + 0xb4);
  uVar6 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_90 = (undefined *)puVar2[0xb3];
  puVar2[0xb3] = uVar6;
  __ZNSt3__113shared_futureIvED1Ev(&puStack_90);
  __ZNSt3__113shared_futureIvED1Ev(&uStack_b8);
  __ZNSt3__16futureIvED1Ev(&uStack_c0);
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x8d8);
    if ((uVar1 >> 1 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
      alStack_d8[0] = 0;
      plVar10 = alStack_d8;
      func_0x00010c0d8ec0();
    }
    else {
      alStack_d8[1] = 0;
      ppuStack_c8 = (undefined **)0x0;
      func_0x00010c0d8f00();
      ppuVar8 = ppuStack_c8;
      _objc_retain(ppuStack_c8);
      plVar10 = alStack_d8 + 1;
    }
    puVar2 = param_1 + 0xb6;
    ppuVar9 = (undefined **)*plVar10;
    _objc_retain(ppuVar9);
    uVar7 = *puVar2;
    *puVar2 = uVar6;
    _objc_release(uVar7);
    FUN_109fe206c(&puStack_b0,*puVar2,ppuVar8,ppuVar9);
  }
  else {
    puStack_70 = param_1;
    if ((uVar1 >> 1 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x8d8);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc6000000;
      pcStack_80 = FUN_109fe2650;
      puStack_78 = &UNK_110b99ae0;
      _objc_retain(ppuVar8);
      ppuStack_68 = ppuVar8;
      ppuVar8 = &puStack_90;
      _objc_retainBlock(ppuVar8);
      _objc_release(ppuStack_68);
      func_0x00010c0d8ee0(uVar6);
      goto LAB_109fe1f5c;
    }
    _objc_retain(ppuVar8);
    uVar6 = *(undefined8 *)(param_2 + 0x8d8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc6000000;
    pcStack_80 = (code *)0x109fe2690;
    puStack_78 = &UNK_110b99b10;
    _objc_retain(ppuVar8);
    ppuStack_68 = ppuVar8;
    ppuVar9 = &puStack_90;
    _objc_retainBlock(ppuVar9);
    _objc_release(ppuStack_68);
    func_0x00010c0d8ea0(uVar6);
  }
  _objc_release(ppuVar9);
LAB_109fe1f5c:
  _objc_release(ppuVar8);
  FUN_109fe22ac(param_1,param_2,*(undefined8 *)(param_3 + 0x132));
  _objc_release(ppuStack_a8);
  _objc_release(puVar4);
  _objc_release(puStack_a0);
  _objc_release(ppuStack_98);
  return param_1;
}



/* Entry: 109fe206c; end: 109fe22ab;  */

void FUN_109fe206c(long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *apuStack_88 [3];
  undefined8 auStack_70 [3];
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *param_1;
  if ((param_2 != 0) && (param_4 == 0)) {
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0x5b0);
    *(long *)(lVar4 + 0x5b0) = param_2;
    _objc_release(uVar3);
    if (param_3 != 0) {
      FUN_109fe5554(apuStack_88,param_3,*(undefined8 *)(lVar4 + 0x500));
      FUN_109fe533c(auStack_70,param_1 + 1);
      func_0x000109269ad4(lVar4 + 0x558,apuStack_88);
      ppuStack_58 = (undefined8 **)auStack_70;
      func_0x0001092349c8(&ppuStack_58);
      ppuStack_58 = apuStack_88;
      func_0x00010922dc0c(&ppuStack_58);
    }
    __ZNSt3__17promiseIvE9set_valueEv(lVar4 + 0x5a0);
    _objc_release(0);
    _objc_release(param_3);
    _objc_release(param_2);
    return;
  }
  func_0x000107c31940(apuStack_88,&UNK_10f62ffbc);
  if (param_4 != 0) {
    func_0x00010bf6e340(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5184(&ppuStack_58);
    pppuVar1 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppuVar1 = &ppuStack_58;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (apuStack_88,pppuVar1,uStack_50);
    if ((char)bStack_41 < '\0') {
      __ZdlPv(ppuStack_58);
    }
    _objc_release(param_4);
  }
  FUN_109fd4658(apuStack_88);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fe21cc);
  (*pcVar2)();
}



/* Entry: 109fe22ac; end: 109fe23fb;  */

void FUN_109fe22ac(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    lVar1 = param_3 + 0x308;
    func_0x00010926a840(lVar1,param_1 + 0x308);
    if ((int)lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_3 + 0x5b8);
      _objc_retain(uVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x5b8);
      *(undefined8 *)(param_1 + 0x5b8) = uVar4;
      _objc_release(uVar2);
    }
  }
  if (*(long *)(param_1 + 0x5b8) != 0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8);
  if (*(char *)(param_1 + 0x308) == '\x01') {
    func_0x00010c18bfc0(puVar3);
    func_0x000109fe5134(*(undefined4 *)(param_1 + 0x30c));
    func_0x00010c18be40(puVar3);
  }
  if (*(char *)(param_1 + 0x310) == '\x01') {
    lVar1 = param_1 + 0x32c;
    FUN_109fe2754(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e280(puVar3);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x314;
    FUN_109fe2754(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a12a0(puVar3);
    _objc_release(lVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x8d8);
  func_0x00010c0d8880();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x5b8);
  *(undefined8 *)(param_1 + 0x5b8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 109fe23fc; end: 109fe251f;  */

undefined8 *
FUN_109fe23fc(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = param_1;
  FUN_109fc9df8();
  *puVar1 = &PTR_FUN_110b99a90;
  puVar1[0xb3] = 0;
  puVar1[0xb2] = 0;
  __ZNSt3__17promiseIvEC1Ev(puVar1 + 0xb4);
  param_1[0xb5] = param_2 + 0x810;
  uVar2 = *param_5;
  _objc_retain(uVar2);
  param_1[0xb6] = uVar2;
  param_1[0xb7] = 0;
  FUN_109fe22ac(param_1,param_2,*(undefined8 *)(param_3 + 0x4c8));
  FUN_109fe2520(param_1 + 0xab,param_4);
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_58,param_1 + 0xb4);
  uVar2 = uStack_58;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = puVar1[0xb3];
  puVar1[0xb3] = uVar2;
  __ZNSt3__113shared_futureIvED1Ev(&uStack_48);
  __ZNSt3__113shared_futureIvED1Ev(&uStack_50);
  __ZNSt3__16futureIvED1Ev(&uStack_58);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0xb4);
  return param_1;
}



/* Entry: 109fe2520; end: 109fe2637;  */

long * FUN_109fe2520(long *param_1,long *param_2)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1 != param_2) {
      func_0x0001092416f8(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 7);
      func_0x000109241488(param_1 + 3,param_2[3],param_2[4],param_2[4] - param_2[3] >> 5);
    }
  }
  else {
    FUN_109fe26d8(param_1,param_2);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}



/* Entry: 109fe2638; end: 109fe263b;  */

undefined8 * FUN_109fe2638(undefined8 *param_1)

{
  if (param_1[0xb3] != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  _objc_release(param_1[0xb7]);
  _objc_release(param_1[0xb6]);
  __ZNSt3__17promiseIvED1Ev(param_1 + 0xb4);
  __ZNSt3__113shared_futureIvED1Ev(param_1 + 0xb3);
  *param_1 = &PTR_DAT_110b97e88;
  func_0x000109234978(param_1 + 0xab);
  func_0x000109234a54(param_1 + 0xa1);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe263c; end: 109fe264f;  */

void FUN_109fe263c(void)

{
  FUN_109fe2824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe2650; end: 109fe2657;  */

void FUN_109fe2650(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *apuStack_88 [3];
  undefined8 auStack_70 [3];
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((param_2 != 0) && (param_4 == 0)) {
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0x5b0);
    *(long *)(lVar4 + 0x5b0) = param_2;
    _objc_release(uVar3);
    if (param_3 != 0) {
      FUN_109fe5554(apuStack_88,param_3,*(undefined8 *)(lVar4 + 0x500));
      FUN_109fe533c(auStack_70,param_1 + 0x28);
      func_0x000109269ad4(lVar4 + 0x558,apuStack_88);
      ppuStack_58 = (undefined8 **)auStack_70;
      func_0x0001092349c8(&ppuStack_58);
      ppuStack_58 = apuStack_88;
      func_0x00010922dc0c(&ppuStack_58);
    }
    __ZNSt3__17promiseIvE9set_valueEv(lVar4 + 0x5a0);
    _objc_release(0);
    _objc_release(param_3);
    _objc_release(param_2);
    return;
  }
  func_0x000107c31940(apuStack_88,&UNK_10f62ffbc);
  if (param_4 != 0) {
    func_0x00010bf6e340(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5184(&ppuStack_58);
    pppuVar1 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppuVar1 = &ppuStack_58;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (apuStack_88,pppuVar1,uStack_50);
    if ((char)bStack_41 < '\0') {
      __ZdlPv(ppuStack_58);
    }
    _objc_release(param_4);
  }
  FUN_109fd4658(apuStack_88);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fe21cc);
  (*pcVar2)();
}



/* Entry: 109fe2658; end: 109fe2687;  */

void FUN_109fe2658(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 109fe2688; end: 109fe269f;  */

void FUN_109fe2688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 109fe26a0; end: 109fe26cf;  */

void FUN_109fe26a0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 109fe26d0; end: 109fe26d7;  */

void FUN_109fe26d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 109fe26d8; end: 109fe2753;  */

undefined8 * FUN_109fe26d8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010924a188();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x000109269c38();
  return param_1;
}



/* Entry: 109fe2754; end: 109fe27ff;  */

void FUN_109fe2754(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0;
  _objc_opt_new(PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0);
  uVar2 = (ulong)param_1[2];
  FUN_109fe2800(uVar2);
  func_0x00010c18bec0(puVar1,param_2,uVar2);
  uVar2 = (ulong)param_1[1];
  FUN_109fe2800(uVar2);
  func_0x00010c18bf40(puVar1,param_2,uVar2);
  uVar2 = (ulong)*param_1;
  FUN_109fe2800(uVar2);
  func_0x00010c20a5c0(puVar1,param_2,uVar2);
  uVar2 = (ulong)param_1[3];
  func_0x000109fe5134(uVar2);
  func_0x00010c20a5a0(puVar1,param_2,uVar2);
  func_0x00010c227420(puVar1,param_2,param_1[5]);
  func_0x00010c1e7e80(puVar1,param_2,param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109fe2800; end: 109fe2823;  */

undefined8 * FUN_109fe2800(uint param_1)

{
  undefined8 *puVar1;
  
  if (param_1 < 8) {
    return (undefined8 *)(ulong)param_1;
  }
  puVar1 = (undefined8 *)&UNK_10f55ebb6;
  func_0x000109243bf8();
  if (puVar1[0xb3] != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  _objc_release(puVar1[0xb7]);
  _objc_release(puVar1[0xb6]);
  __ZNSt3__17promiseIvED1Ev(puVar1 + 0xb4);
  __ZNSt3__113shared_futureIvED1Ev(puVar1 + 0xb3);
  *puVar1 = &PTR_DAT_110b97e88;
  func_0x000109234978(puVar1 + 0xab);
  func_0x000109234a54(puVar1 + 0xa1);
  if (puVar1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar1;
}



/* Entry: 109fe2824; end: 109fe2873;  */

undefined8 * FUN_109fe2824(undefined8 *param_1)

{
  if (param_1[0xb3] != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  _objc_release(param_1[0xb7]);
  _objc_release(param_1[0xb6]);
  __ZNSt3__17promiseIvED1Ev(param_1 + 0xb4);
  __ZNSt3__113shared_futureIvED1Ev(param_1 + 0xb3);
  *param_1 = &PTR_DAT_110b97e88;
  func_0x000109234978(param_1 + 0xab);
  func_0x000109234a54(param_1 + 0xa1);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe2874; end: 109fe288f;  */

void FUN_109fe2874(undefined8 *param_1)

{
  if (*(long *)(**(long **)*param_1 + 0x598) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__117__assoc_sub_state4copyEv_1103465d0)();
    return;
  }
  return;
}



/* Entry: 109fe2890; end: 109fe2b2f;  */

undefined8 * FUN_109fe2890(undefined8 *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined4 *)(param_1 + 4) = 0xb;
  param_1[2] = 0;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_110b97ee8;
  param_1[1] = 0;
  uVar6 = *(undefined8 *)(param_3 + 2);
  uVar5 = *(undefined8 *)param_3;
  uVar10 = *(undefined8 *)(param_3 + 6);
  uVar9 = *(undefined8 *)(param_3 + 4);
  uVar12 = *(undefined8 *)(param_3 + 10);
  uVar11 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar12;
  *(undefined8 *)((long)param_1 + 0x44) = uVar11;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar10;
  *(undefined8 *)((long)param_1 + 0x34) = uVar9;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar6;
  *(undefined8 *)((long)param_1 + 0x24) = uVar5;
  *param_1 = &PTR_FUN_110b99b50;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar3 = PTR__OBJC_CLASS___MTLSamplerDescriptor_1126d94f8;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLSamplerDescriptor_1126d94f8);
  iVar2 = param_3[0xc];
  puVar4 = &UNK_10f62fff5;
  if (iVar2 < 2) {
    if ((iVar2 != 0) && (puVar4 = &UNK_10f62fff5, iVar2 != 1)) goto LAB_109fe2ae8;
LAB_109fe2940:
    func_0x00010c173280(puVar3);
  }
  else {
    if (iVar2 == 2) goto LAB_109fe2940;
    if (iVar2 != 3) goto LAB_109fe2ae8;
  }
  if ((char)param_3[6] == '\x01') {
    func_0x00010c1c2fc0(puVar3);
  }
  if ((param_3[1] == 0) || (param_3[1] == 1)) {
    func_0x00010c1c1600(puVar3);
    if ((*param_3 == 0) || (*param_3 == 1)) {
      func_0x00010c1c7b80(puVar3);
      if ((uint)param_3[2] < 3) {
        func_0x00010c1c8560(puVar3);
        func_0x00010c1cdc00(puVar3);
        FUN_109fe2b30(param_3[3],param_3[0xc]);
        func_0x00010c1ef0e0(puVar3);
        FUN_109fe2b30(param_3[4],param_3[0xc]);
        func_0x00010c211280(puVar3);
        FUN_109fe2b30(param_3[5],param_3[0xc]);
        func_0x00010c1e6de0(puVar3);
        if ((char)param_3[8] == '\x01') {
          func_0x000109fe5134(param_3[9]);
        }
        func_0x00010c17f980(puVar3);
        func_0x00010c1c0240(param_3[10],puVar3);
        func_0x00010c1c0220(param_3[0xb],puVar3);
        func_0x00010c20fea0(puVar3);
        uVar5 = *(undefined8 *)(param_2 + 0x8d8);
        func_0x00010c0d8f60();
        uVar6 = param_1[0xd];
        param_1[0xd] = uVar5;
        _objc_release(uVar6);
        lVar7 = param_1[0xd];
        _objc_retain(lVar7);
        if (lVar7 != 0) {
          iVar2 = 2;
          func_0x000107c31924(2,0x10,0,0);
          if (iVar2 != 0) {
            lVar8 = lVar7;
            func_0x00010bfcd800();
            goto LAB_109fe2aac;
          }
        }
        lVar8 = 0;
LAB_109fe2aac:
        _objc_release(lVar7);
        param_1[0xc] = lVar8;
        _objc_release(puVar3);
        return param_1;
      }
      puVar4 = &UNK_10f63004b;
      goto LAB_109fe2ae8;
    }
  }
  puVar4 = &UNK_10f630021;
LAB_109fe2ae8:
  func_0x000109243bf8(puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109fe2af0);
  (*pcVar1)();
}



/* Entry: 109fe2b30; end: 109fe2b8f;  */

undefined * FUN_109fe2b30(int param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      return (undefined *)0x0;
    }
    if (param_1 == 1) {
      return (undefined *)0x2;
    }
  }
  else {
    if (param_1 == 2) {
      return (undefined *)0x3;
    }
    if (param_1 == 3) {
      puVar1 = (undefined *)0x4;
      if (param_2 != 3) {
        puVar1 = (undefined *)0x5;
      }
      return puVar1;
    }
  }
  puVar1 = &UNK_10f630072;
  func_0x000109243bf8();
  _objc_release(*(undefined8 *)(puVar1 + 0x68));
  if (*(long *)(puVar1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar1;
}



/* Entry: 109fe2b90; end: 109fe2b93;  */

long FUN_109fe2b90(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe2b94; end: 109fe2ba7;  */

void FUN_109fe2b94(void)

{
  FUN_109fe2ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe2ba8; end: 109fe2bdb;  */

long FUN_109fe2ba8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe2bdc; end: 109fe2cbb;  */

undefined8 * FUN_109fe2bdc(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 6;
  *param_1 = &PTR_DAT_110b99ba8;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x8d8);
  func_0x00010c0d9060();
  uVar3 = param_1[5];
  param_1[5] = uVar2;
  _objc_release(uVar3);
  if ((param_1[5] != 0) && (func_0x00010c202940(), param_1[5] != 0)) {
    return param_1;
  }
  func_0x000109243bf8(&UNK_10f630086);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109fe2c94);
  (*pcVar1)();
}



/* Entry: 109fe2cbc; end: 109fe2d63;  */

void FUN_109fe2cbc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bf932b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*param_2,PTR_s_encodeWaitForEvent_value__1125c2650,*(undefined8 *)(param_1 + 0x28),
             uVar1);
  return;
}



/* Entry: 109fe2d64; end: 109fe2d6b;  */

void FUN_109fe2d64(void)

{
  return;
}



/* Entry: 109fe2d6c; end: 109fe2d7f;  */

void FUN_109fe2d6c(void)

{
  FUN_109fe2d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe2d80; end: 109fe2dbb;  */

long FUN_109fe2d80(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe2dbc; end: 109fe3807;  */

undefined8 * FUN_109fe2dbc(undefined8 *param_1,long param_2,int *param_3)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 ***pppuVar18;
  long lVar19;
  long unaff_x24;
  undefined8 uVar20;
  long lVar21;
  undefined8 ***pppuVar22;
  undefined8 **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 **ppuStack_e0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xc;
  puVar11 = param_1 + 5;
  *(undefined1 *)puVar11 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_110b99c00;
  param_1[1] = 0;
  param_1[9] = 0;
  if (*param_3 == 1) {
    uVar17 = *(ulong *)(param_2 + 0x8d8);
    uVar20 = *(undefined8 *)(param_3 + 2);
    uVar7 = *(undefined8 *)(param_3 + 4);
    _objc_retain(uVar17);
    _dispatch_data_create(uVar20,uVar7,PTR___dispatch_main_q_11034be20,0);
    lStack_170 = 0;
    uVar4 = uVar17;
    func_0x00010c0d8b80();
    unaff_x24 = lStack_170;
    _objc_retain(lStack_170);
    if (unaff_x24 != 0) {
      lVar16 = unaff_x24;
      func_0x00010bf6e340(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      lVar13 = lVar16;
      func_0x00010bdc3520(lVar16);
      func_0x000107c31940(&ppuStack_100,lVar13);
      _objc_release(lVar16);
      if ((long)ppuStack_f0 < 0) {
        __ZdlPv(ppuStack_100);
      }
    }
    if (uVar4 == 0) {
      func_0x00010bf6e340(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      lVar16 = unaff_x24;
      func_0x00010bdc3520(unaff_x24);
      func_0x000107c31940(&ppuStack_100,lVar16);
      _objc_release(unaff_x24);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_140,&UNK_10f63010f,&ppuStack_100);
      func_0x00010924a434(&uStack_140);
      goto LAB_109fe35c8;
    }
    _objc_release(uVar20);
    _objc_release(unaff_x24);
    _objc_release(uVar17);
LAB_109fe2f9c:
    puVar14 = param_1 + 9;
    uVar17 = *puVar14;
    *puVar14 = uVar4;
    _objc_release(uVar17);
    uVar4 = *puVar14;
LAB_109fe2fb0:
    ppuStack_1a0 = (undefined8 ***)0x0;
    ppuStack_198 = (undefined8 ***)0x0;
    ppuStack_190 = (undefined8 ***)0x0;
    func_0x00010bfbc020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf529e0();
    ppuVar1 = ppuStack_198;
    lVar16 = (long)ppuStack_198 - (long)ppuStack_1a0;
    lVar13 = lVar16 >> 3;
    bVar3 = uVar6 < (ulong)(lVar13 * 0x6db6db6db6db6db7);
    uVar17 = uVar6 + lVar13 * -0x6db6db6db6db6db7;
    if (bVar3 || uVar17 == 0) {
      pppuVar5 = (undefined8 ***)ppuStack_198;
      if (bVar3) {
        pppuVar5 = (undefined8 ***)(ppuStack_1a0 + uVar6 * 7);
        pppuVar18 = (undefined8 ***)ppuStack_198;
        while (pppuVar18 != pppuVar5) {
          pppuVar18 = pppuVar18 + -7;
          func_0x000109234d1c(pppuVar18);
        }
      }
    }
    else if ((ulong)(((long)ppuStack_190 - (long)ppuStack_198 >> 3) * 0x6db6db6db6db6db7) < uVar17)
    {
      if (0x492492492492492 < uVar6) {
        func_0x00010923f960();
        goto LAB_109fe35c8;
      }
      lVar13 = (long)ppuStack_190 - (long)ppuStack_1a0 >> 3;
      uVar12 = lVar13 * -0x2492492492492492;
      if (uVar12 < uVar6 || uVar12 - uVar6 == 0) {
        uVar12 = uVar6;
      }
      if (0x249249249249248 < (ulong)(lVar13 * 0x6db6db6db6db6db7)) {
        uVar12 = 0x492492492492492;
      }
      ppuStack_e0 = &ppuStack_1a0;
      pppuVar5 = &ppuStack_1a0;
      func_0x00010923f974();
      lVar16 = (long)pppuVar5 + lVar16;
      lVar13 = ((uVar17 * 0x38 - 0x38) / 0x38) * 0x38 + 0x38;
      ppuStack_100 = pppuVar5;
      ppuStack_f8 = (undefined8 **)lVar16;
      ppuStack_e8 = pppuVar5 + uVar12 * 7;
      _bzero(lVar16,lVar13);
      pppuVar18 = (undefined8 ***)(lVar16 + lVar13);
      pppuVar22 = (undefined8 ***)((long)ppuStack_1a0 + (lVar16 - (long)ppuStack_198));
      ppuStack_f0 = pppuVar18;
      func_0x00010923f9bc(&ppuStack_1a0,ppuStack_1a0,ppuStack_198,pppuVar22);
      ppuStack_f0 = ppuStack_1a0;
      ppuStack_e8 = ppuStack_190;
      ppuStack_100 = ppuStack_1a0;
      ppuStack_f8 = ppuStack_1a0;
      ppuStack_1a0 = pppuVar22;
      ppuStack_198 = pppuVar18;
      ppuStack_190 = pppuVar5 + uVar12 * 7;
      func_0x00010923fa4c(&ppuStack_100);
      pppuVar5 = (undefined8 ***)ppuStack_198;
    }
    else {
      uVar17 = (uVar17 * 0x38 - 0x38) / 0x38;
      _bzero(ppuStack_198,uVar17 * 0x38 + 0x38);
      pppuVar5 = (undefined8 ***)(ppuVar1 + uVar17 * 7 + 7);
    }
    ppuStack_198 = pppuVar5;
    _objc_release(uVar4);
    uVar4 = 0;
    while( true ) {
      uVar6 = param_1[9];
      func_0x00010bfbc020();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      if (uVar17 <= uVar4) break;
      uVar7 = param_1[9];
      func_0x00010bfbc020(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      FUN_109fe5184(&ppuStack_100);
      pppuVar5 = (undefined8 ***)(ppuStack_1a0 + uVar4 * 7);
      if (*(char *)((long)pppuVar5 + 0x17) < '\0') {
        __ZdlPv(*pppuVar5);
      }
      pppuVar5[2] = ppuStack_f0;
      pppuVar5[1] = ppuStack_f8;
      *pppuVar5 = ppuStack_100;
      ppuStack_f0 = (undefined8 **)((ulong)ppuStack_f0 & 0xffffffffffffff);
      ppuStack_100 = (undefined8 **)((ulong)ppuStack_100 & 0xffffffffffffff00);
      _objc_release(uVar20);
      _objc_release(uVar7);
      lVar19 = param_1[9];
      lVar16 = lVar19;
      func_0x00010bfbc020(lVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar16;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d8900();
      _objc_release(lVar13);
      _objc_release(lVar16);
      lVar16 = lVar19;
      func_0x00010bfbc080();
      ppuVar1 = ppuStack_1a0;
      if (2 < lVar16 - 1U) {
        func_0x000109243bf8(&UNK_10f63014f);
        goto LAB_109fe35c8;
      }
      *(int *)(ppuStack_1a0 + uVar4 * 7 + 6) = (int)(lVar16 - 1U);
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lVar16 = lVar19;
      func_0x00010bfbbfc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar16;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      lVar16 = lVar13;
      func_0x00010bf52a60();
      if (lVar16 != 0) {
        lVar15 = *plStack_130;
        do {
          lVar21 = 0;
          do {
            if (*plStack_130 != lVar15) {
              _objc_enumerationMutation(lVar13);
            }
            uVar20 = *(undefined8 *)(lStack_138 + lVar21 * 8);
            lVar8 = lVar19;
            func_0x00010bfbbfc0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            lStack_160 = 0;
            uStack_168 = 0;
            lStack_170 = 0;
            uStack_158 = 0xffffffff;
            uStack_150 = 0;
            FUN_109fe5184(&lStack_188,uVar20);
            if (lStack_160 < 0) {
              __ZdlPv(lStack_170);
            }
            uStack_168 = uStack_180;
            lStack_170 = lStack_188;
            lStack_160 = lStack_178;
            lVar8 = lVar9;
            func_0x00010c27dd80();
            if (lVar8 < 0x21) {
              if (lVar8 == 3) {
                uVar10 = 2;
              }
              else {
                if (lVar8 != 0x1d) {
LAB_109fe34f8:
                  func_0x000109243bf8(&UNK_10f63017d);
                  goto LAB_109fe35c8;
                }
                uVar10 = 3;
              }
            }
            else if (lVar8 == 0x21) {
              uVar10 = 4;
            }
            else {
              if (lVar8 != 0x35) goto LAB_109fe34f8;
              uVar10 = 1;
            }
            lVar8 = lVar9;
            uStack_158._4_4_ = uVar10;
            func_0x00010bfec9e0();
            uStack_158 = CONCAT44(uStack_158._4_4_,(int)lVar8);
            lVar8 = lVar9;
            func_0x00010c137580();
            uStack_150 = (undefined1)lVar8;
            func_0x00010923b364(ppuVar1 + uVar4 * 7 + 3,&lStack_170);
            if (lStack_160 < 0) {
              __ZdlPv(lStack_170);
            }
            _objc_release(lVar9);
            lVar21 = lVar21 + 1;
          } while (lVar16 != lVar21);
          lVar16 = lVar13;
          func_0x00010bf52a60();
        } while (lVar16 != 0);
      }
      unaff_x24 = 0;
      _objc_release(lVar13);
      _objc_release(lVar19);
      uVar4 = uVar4 + 1;
    }
    if (*(char *)(param_1 + 8) == '\x01') {
      func_0x00010923fe1c(puVar11);
      pppuVar5 = (undefined8 ***)ppuStack_190;
      pppuVar18 = (undefined8 ***)ppuStack_1a0;
      pppuVar22 = (undefined8 ***)ppuStack_198;
    }
    else {
      *puVar11 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      pppuVar5 = (undefined8 ***)ppuStack_190;
      pppuVar18 = (undefined8 ***)ppuStack_1a0;
      pppuVar22 = (undefined8 ***)ppuStack_198;
    }
    ppuStack_190 = (undefined8 ***)0x0;
    ppuStack_198 = (undefined8 ***)0x0;
    ppuStack_1a0 = (undefined8 ***)0x0;
    param_1[6] = pppuVar22;
    param_1[5] = pppuVar18;
    param_1[7] = pppuVar5;
    ppuStack_100 = &ppuStack_1a0;
    func_0x000109234cac(&ppuStack_100);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    uVar4 = 0;
    if (*param_3 != 0) goto LAB_109fe2fb0;
    uVar17 = *(ulong *)(param_2 + 0x8d8);
    pppuVar18 = *(undefined8 ****)(param_3 + 2);
    pppuVar22 = *(undefined8 ****)(param_3 + 4);
    _objc_retain(uVar17);
    pppuVar5 = &ppuStack_100;
    ppuStack_100 = pppuVar18;
    ppuStack_f8 = pppuVar22;
    FUN_109fe51ec(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    lStack_170 = 0;
    uVar4 = uVar17;
    func_0x00010c0d8bc0();
    unaff_x24 = lStack_170;
    _objc_retain(lStack_170);
    if (unaff_x24 != 0) {
      lVar16 = unaff_x24;
      func_0x00010bf6e340(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      lVar13 = lVar16;
      func_0x00010bdc3520(lVar16);
      func_0x000107c31940(&ppuStack_100,lVar13);
      _objc_release(lVar16);
      if ((long)ppuStack_f0 < 0) {
        __ZdlPv(ppuStack_100);
      }
    }
    if (uVar4 != 0) {
      _objc_release(pppuVar5);
      _objc_release(unaff_x24);
      _objc_release(uVar17);
      goto LAB_109fe2f9c;
    }
  }
  func_0x00010bf6e340(unaff_x24);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  lVar16 = unaff_x24;
  func_0x00010bdc3520(unaff_x24);
  func_0x000107c31940(&ppuStack_100,lVar16);
  _objc_release(unaff_x24);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_140,&UNK_10f6300e9,&ppuStack_100);
  func_0x00010924a434(&uStack_140);
LAB_109fe35c8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fe35cc);
  (*pcVar2)();
}



/* Entry: 109fe3808; end: 109fe380b;  */

void FUN_109fe3808(void)

{
  return;
}



/* Entry: 109fe380c; end: 109fe385f;  */

undefined8 * FUN_109fe380c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  _objc_release(param_1[9]);
  *param_1 = &PTR_DAT_110ae3a88;
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x000109234cac(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe3860; end: 109fe3b5f;  */

undefined8 * FUN_109fe3860(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  
  puVar4 = param_1;
  FUN_109fc9ed0();
  *puVar4 = &PTR_FUN_110b99c58;
  puVar8 = puVar4 + 0x1f;
  *puVar8 = 0;
  puVar4[0x1e] = 0;
  __ZNSt3__17promiseIvEC1Ev(puVar4 + 0x20);
  param_1[0x21] = 0;
  lVar11 = param_1[0x19];
  puVar5 = PTR__OBJC_CLASS___MTLFunctionConstantValues_1126ddfd0;
  _objc_opt_new(PTR__OBJC_CLASS___MTLFunctionConstantValues_1126ddfd0);
  if (*(int *)(param_1 + 0x15) != 0) {
    lVar10 = 0;
    uVar13 = 0;
    do {
      lVar7 = param_1[0x18];
      uVar1 = (ulong)*(uint *)(param_1[0x16] + lVar10 + 4);
      iVar2 = *(int *)(param_1[0x16] + lVar10 + 8);
      if (iVar2 < 3) {
        if (iVar2 == 1) {
          puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,*(int *)(lVar7 + uVar1) != 0);
          func_0x00010c181160(puVar5);
        }
        else {
          if (iVar2 != 2) {
LAB_109fe3ad0:
            func_0x000109243bf8(&UNK_10f6301ac);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x109fe3ae0);
            (*pcVar3)();
          }
          puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,*(undefined4 *)(lVar7 + uVar1));
          func_0x00010c181160(puVar5);
        }
      }
      else if (iVar2 == 3) {
        puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,*(undefined4 *)(lVar7 + uVar1));
        func_0x00010c181160(puVar5);
      }
      else {
        if (iVar2 != 4) goto LAB_109fe3ad0;
        puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,*(undefined4 *)(lVar7 + uVar1));
        func_0x00010c181160(puVar5);
      }
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 0xc;
    } while (uVar13 < *(uint *)(param_1 + 0x15));
  }
  puVar4 = param_1 + 0x13;
  FUN_109fe51ec(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = param_1;
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_90,param_1 + 0x20);
  uVar12 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_78 = (undefined *)*puVar8;
  *puVar8 = uVar12;
  __ZNSt3__113shared_futureIvED1Ev(&puStack_78);
  __ZNSt3__113shared_futureIvED1Ev(&uStack_88);
  __ZNSt3__16futureIvED1Ev(&uStack_90);
  uVar12 = *(undefined8 *)(lVar11 + 0x48);
  if ((*param_3 & 1) == 0) {
    func_0x00010c0d8940();
    ppuVar9 = (undefined **)0x0;
    _objc_retain(0);
    uVar6 = param_1[0x21];
    param_1[0x21] = uVar12;
    _objc_release(uVar6);
    FUN_109fe3b60(&puStack_80,param_1[0x21],0);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc6000000;
    uStack_68 = 0x109fe4018;
    puStack_60 = &UNK_110b99ca8;
    ppuVar9 = &puStack_78;
    puStack_58 = param_1;
    _objc_retainBlock(ppuVar9);
    func_0x00010c0d8920(uVar12);
  }
  _objc_release(ppuVar9);
  _objc_release(puVar4);
  _objc_release(puVar5);
  return param_1;
}



/* Entry: 109fe3b60; end: 109fe3f3b;  */

void FUN_109fe3b60(long *param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  undefined7 uStack_78;
  byte bStack_71;
  undefined8 *puStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar8 = *param_1;
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(lVar8 + 0x108);
    *(ulong *)(lVar8 + 0x108) = param_2;
    _objc_release(uVar4);
    uVar7 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    while( true ) {
      uVar5 = param_2;
      func_0x00010c298d60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      if (uVar6 <= uVar7) break;
      uVar5 = param_2;
      func_0x00010c298d60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c06b700();
      if ((int)uVar5 != 0) {
        lStack_60 = 0;
        uStack_68 = 0;
        puStack_70 = (undefined8 *)0x0;
        uStack_58 = 0xffffffff;
        uVar5 = uVar6;
        func_0x00010c0d4f60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        FUN_109fe5184(&uStack_88);
        if (lStack_60 < 0) {
          __ZdlPv(puStack_70);
        }
        puStack_70 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
        uStack_68 = uStack_80;
        lStack_60 = CONCAT17(bStack_71,uStack_78);
        bStack_71 = 0;
        uStack_88 = 0;
        _objc_release(uVar5);
        uVar5 = uVar6;
        func_0x00010bf0de80();
        uStack_58 = CONCAT44(uStack_58._4_4_,(int)uVar5);
        uVar5 = uVar6;
        func_0x00010bf0df40();
        uVar3 = (undefined4)uVar5;
        FUN_109fe5220();
        uStack_58 = CONCAT44(uVar3,(undefined4)uStack_58);
        func_0x000109241120(&uStack_a0,&puStack_70);
        if (lStack_60 < 0) {
          __ZdlPv(puStack_70);
        }
      }
      _objc_release(uVar6);
      uVar7 = uVar7 + 1;
    }
    if (*(char *)(lVar8 + 0x40) == '\x01') {
      func_0x00010923fde4(lVar8 + 0x28);
      uVar4 = uStack_90;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
    }
    else {
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(undefined8 *)(lVar8 + 0x38) = 0;
      *(undefined1 *)(lVar8 + 0x40) = 1;
      uVar4 = uStack_90;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
    }
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    *(undefined8 *)(lVar8 + 0x30) = uVar10;
    *(undefined8 *)(lVar8 + 0x28) = uVar9;
    *(undefined8 *)(lVar8 + 0x38) = uVar4;
    puStack_70 = &uStack_a0;
    func_0x0001092349c8(&puStack_70);
    __ZNSt3__17promiseIvE9set_valueEv(lVar8 + 0x100);
    _objc_release(0);
    _objc_release(param_2);
    return;
  }
  func_0x000107c31940(&puStack_70,&UNK_10f6301ec);
  if (param_3 != 0) {
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5184(&uStack_a0);
    func_0x00010928a5e0(&uStack_88,": ",&uStack_a0);
    puVar1 = (undefined1 *)CONCAT71(uStack_87,uStack_88);
    if (-1 < (char)bStack_71) {
      uStack_80 = (ulong)bStack_71;
      puVar1 = &uStack_88;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_70,puVar1,uStack_80);
    if ((char)bStack_71 < '\0') {
      __ZdlPv(CONCAT71(uStack_87,uStack_88));
    }
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(uStack_a0);
    }
    _objc_release(param_3);
  }
  FUN_109fd4658(&puStack_70);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fe3e10);
  (*pcVar2)();
}



/* Entry: 109fe3f3c; end: 109fe3f87;  */

undefined8 * FUN_109fe3f3c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0x1f] != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  _objc_release(param_1[0x21]);
  __ZNSt3__17promiseIvED1Ev(param_1 + 0x20);
  __ZNSt3__113shared_futureIvED1Ev(param_1 + 0x1f);
  *param_1 = &PTR_DAT_110b97f28;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puStack_28 = param_1 + 0x1a;
    func_0x000109234fc8(&puStack_28);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x0001092349c8(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe3f88; end: 109fe3f8b;  */

undefined8 * FUN_109fe3f88(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0x1f] != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  _objc_release(param_1[0x21]);
  __ZNSt3__17promiseIvED1Ev(param_1 + 0x20);
  __ZNSt3__113shared_futureIvED1Ev(param_1 + 0x1f);
  *param_1 = &PTR_DAT_110b97f28;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puStack_28 = param_1 + 0x1a;
    func_0x000109234fc8(&puStack_28);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x0001092349c8(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe3f8c; end: 109fe3fef;  */

void FUN_109fe3f8c(void)

{
  FUN_109fe3f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe3ff0; end: 109fe4013;  */

long FUN_109fe3ff0(long param_1)

{
  func_0x000109fe3fa0();
  return param_1 + 0x28;
}



/* Entry: 109fe4014; end: 109fe404b;  */

void FUN_109fe4014(void)

{
  return;
}



/* Entry: 109fe404c; end: 109fe41c3;  */

undefined8 * FUN_109fe404c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_3[5];
  uVar19 = *(undefined8 *)(lVar18 + 0x24);
  uVar20 = *(undefined8 *)(lVar18 + 0x38);
  uVar8 = *(undefined4 *)(lVar18 + 0x54);
  uVar2 = *(undefined4 *)param_3;
  uVar5 = *(undefined4 *)((long)param_3 + 4);
  iVar3 = *(int *)(param_3 + 2);
  uVar6 = *(undefined4 *)((long)param_3 + 0x14);
  uVar26 = param_3[4];
  uVar25 = param_3[3];
  uVar21 = *param_3;
  iVar4 = *(int *)(param_3 + 1);
  uVar7 = *(undefined4 *)((long)param_3 + 0xc);
  uVar24 = *(undefined8 *)((long)param_3 + 0x1c);
  uVar23 = *(undefined8 *)((long)param_3 + 0x14);
  uVar9 = *(undefined4 *)((long)param_3 + 0x24);
  iVar10 = *(int *)(lVar18 + 0x68);
  iVar11 = *(int *)(lVar18 + 0x60);
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)((long)param_1 + 0x24) = uVar19;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 6) = uVar7;
  *(undefined4 *)((long)param_1 + 0x34) = uVar5;
  param_1[7] = uVar20;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar26;
  *(undefined8 *)((long)param_1 + 0x44) = uVar25;
  *(undefined4 *)((long)param_1 + 0x54) = uVar8;
  puVar15 = param_1 + 0xb;
  *puVar15 = uVar21;
  *(int *)(param_1 + 0xc) = iVar11 + iVar4;
  *(undefined4 *)((long)param_1 + 100) = uVar7;
  *(int *)(param_1 + 0xd) = iVar10 + iVar3;
  *(undefined4 *)((long)param_1 + 0x7c) = uVar9;
  *(undefined8 *)((long)param_1 + 0x74) = uVar24;
  *(undefined8 *)((long)param_1 + 0x6c) = uVar23;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = lVar18;
  *param_1 = &PTR_DAT_110b99ce8;
  param_1[1] = 0;
  plVar22 = param_1 + 0x15;
  param_1[0x16] = 0;
  *plVar22 = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_109fe41c4(plVar22,param_3[5] + 0xa8);
  puVar14 = (undefined8 *)*plVar22;
  FUN_109fd75b8();
  uVar19 = param_1[0x13];
  param_1[0x13] = puVar14;
  puVar16 = puVar15;
  _objc_retain();
  _objc_release(uVar19);
  param_1[0x14] = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000109fe4a94(uVar19);
  _objc_release(param_1[0x13]);
  func_0x0001092350bc(param_1);
  __Unwind_Resume();
  uVar20 = puVar16[1];
  uVar19 = *puVar16;
  if (puVar16[1] != 0) {
    plVar22 = (long *)(puVar16[1] + 8);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar13) {
        *plVar22 = *plVar22 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  plVar22 = (long *)puVar14[1];
  puVar14[1] = uVar20;
  *puVar14 = uVar19;
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 1;
    do {
      lVar17 = *plVar1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar17 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  return puVar14;
}



/* Entry: 109fe41c4; end: 109fe423f;  */

undefined8 * FUN_109fe41c4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109fe4240; end: 109fe445b;  */

undefined8 * FUN_109fe4240(undefined8 *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  long *plStack_50;
  long *plStack_48;
  undefined1 auVar17 [16];
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = &PTR_FUN_110b97f88;
  param_1[1] = 0;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  uVar19 = param_4[5];
  uVar18 = param_4[4];
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_4 + 6);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar19;
  *(undefined8 *)((long)param_1 + 0x44) = uVar18;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar6;
  *(undefined8 *)((long)param_1 + 0x34) = uVar5;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar9;
  *(undefined8 *)((long)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_4 + 0x1c);
  uVar14 = *(ulong *)((long)param_4 + 0xc);
  iVar10 = *(int *)(param_4 + 2);
  auVar7[8] = (char)(uVar14 >> 0x20);
  auVar7._0_8_ = uVar14;
  auVar7[9] = (char)(uVar14 >> 0x28);
  auVar7[10] = (char)(uVar14 >> 0x30);
  auVar7[0xb] = (char)(uVar14 >> 0x38);
  auVar15._8_4_ = (int)uVar14;
  auVar15._0_8_ = uVar14 >> 0x20;
  auVar15._12_4_ = auVar7._8_4_;
  auVar15 = NEON_rev64(auVar15,4);
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = auVar15._4_4_;
  auVar17._0_8_ = auVar16._0_8_;
  auVar17._8_4_ = auVar15._12_4_;
  auVar17._12_4_ = auVar15._12_4_;
  *(ulong *)((long)param_1 + 100) = auVar17._8_8_ & 0xffffffff;
  *(ulong *)((long)param_1 + 0x5c) = (ulong)auVar15._4_4_;
  uVar2 = *(undefined4 *)(param_4 + 1);
  if (iVar10 != 2) {
    uVar2 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x6c) = uVar2;
  param_1[0xf] = 0x500000004;
  param_1[0xe] = 0x300000002;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_DAT_110b99ce8;
  lVar13 = *param_3;
  _objc_retain(lVar13);
  param_1[0x15] = 0;
  param_1[0x13] = lVar13;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  plVar11 = (long *)0xa0;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110b99d40;
  lVar13 = *param_3;
  _objc_retain(lVar13);
  plVar11[4] = param_2;
  plVar11[5] = lVar13;
  plVar11[6] = param_2 + 0x810;
  plVar11[7] = 0x32aaaba7;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xc] = 0;
  plVar11[0xf] = 0;
  plVar11[0xe] = 0;
  plVar11[0x11] = 0;
  plVar11[0x10] = 0;
  plVar11[0x12] = 0;
  *(undefined4 *)(plVar11 + 0x13) = 0x3f800000;
  plStack_50 = plVar11 + 3;
  *plStack_50 = (long)&PTR_FUN_110b99d90;
  plStack_48 = plVar11;
  FUN_109fe445c(param_1 + 0x15,&plStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  lVar13 = *param_3;
  _objc_retain(lVar13);
  if (lVar13 != 0) {
    iVar10 = 2;
    func_0x000107c31924(2,0x10,0,0);
    if (iVar10 != 0) {
      lVar12 = lVar13;
      func_0x00010bfcd800();
      goto LAB_109fe4400;
    }
  }
  lVar12 = 0;
LAB_109fe4400:
  _objc_release(lVar13);
  param_1[0x14] = lVar12;
  return param_1;
}



/* Entry: 109fe445c; end: 109fe44bf;  */

undefined8 * FUN_109fe445c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109fe44c0; end: 109fe484f;  */

undefined8 * FUN_109fe44c0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  long *plStack_60;
  long *plStack_58;
  undefined1 auVar20 [16];
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = &PTR_FUN_110b97f88;
  param_1[1] = 0;
  uVar8 = *param_3;
  uVar9 = param_3[1];
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  uVar22 = param_3[5];
  uVar21 = param_3[4];
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_3 + 6);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar22;
  *(undefined8 *)((long)param_1 + 0x44) = uVar21;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar6;
  *(undefined8 *)((long)param_1 + 0x34) = uVar5;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar9;
  *(undefined8 *)((long)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_3 + 0x1c);
  uVar17 = *(ulong *)((long)param_3 + 0xc);
  iVar11 = *(int *)(param_3 + 2);
  auVar7[8] = (char)(uVar17 >> 0x20);
  auVar7._0_8_ = uVar17;
  auVar7[9] = (char)(uVar17 >> 0x28);
  auVar7[10] = (char)(uVar17 >> 0x30);
  auVar7[0xb] = (char)(uVar17 >> 0x38);
  auVar18._8_4_ = (int)uVar17;
  auVar18._0_8_ = uVar17 >> 0x20;
  auVar18._12_4_ = auVar7._8_4_;
  auVar18 = NEON_rev64(auVar18,4);
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ = auVar18._4_4_;
  auVar20._0_8_ = auVar19._0_8_;
  auVar20._8_4_ = auVar18._12_4_;
  auVar20._12_4_ = auVar18._12_4_;
  *(ulong *)((long)param_1 + 100) = auVar20._8_8_ & 0xffffffff;
  *(ulong *)((long)param_1 + 0x5c) = (ulong)auVar18._4_4_;
  uVar2 = *(undefined4 *)(param_3 + 1);
  if (iVar11 != 2) {
    uVar2 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x6c) = uVar2;
  param_1[0xf] = 0x500000004;
  param_1[0xe] = 0x300000002;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_DAT_110b99ce8;
  plVar16 = param_1 + 0x13;
  param_1[0x14] = 0;
  *plVar16 = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  puVar12 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220);
  uVar17 = *(ulong *)(param_2 + 0x8d8);
  func_0x00010c263c80();
  if ((uVar17 & 1) == 0) {
    func_0x000109243bf8(&UNK_10f63021a);
LAB_109fe4800:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109fe4804);
    (*pcVar10)();
  }
  FUN_109fe4e08(*(undefined4 *)((long)param_3 + 0x1c));
  func_0x00010c1dc0a0(puVar12);
  FUN_109fe9a8c(*(undefined4 *)(param_3 + 2),*(undefined4 *)(param_3 + 3));
  func_0x00010c213a20(puVar12);
  func_0x00010c2256c0(puVar12);
  func_0x00010c1a7d00(puVar12);
  func_0x00010c18bde0(puVar12);
  func_0x00010c16a340(puVar12);
  func_0x00010c1c8580(puVar12);
  func_0x00010c1f5380(puVar12);
  func_0x00010c21d540(puVar12);
  func_0x00010c1ecd40(puVar12);
  if (*(char *)((long)param_3 + 0x14) < '\0') {
    func_0x00010c20c0c0(puVar12);
  }
  if (*(int *)((long)param_3 + 0x1c) == 0x26) {
    if (*(char *)(param_1[3] + 0x42) != '\x01') {
      func_0x000109243bf8(&UNK_10f630233);
      goto LAB_109fe4800;
    }
    func_0x00010c210ac0(puVar12);
  }
  lVar13 = *(long *)(param_2 + 0x8d8);
  func_0x00010c0d91c0();
  lVar15 = *plVar16;
  *plVar16 = lVar13;
  _objc_release(lVar15);
  lVar13 = *plVar16;
  plVar14 = (long *)0xa0;
  __Znwm();
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&PTR_FUN_110b99d40;
  _objc_retain(lVar13);
  plVar14[4] = param_2;
  plVar14[5] = lVar13;
  plVar14[6] = param_2 + 0x810;
  plVar14[7] = 0x32aaaba7;
  plVar14[9] = 0;
  plVar14[8] = 0;
  plVar14[0xb] = 0;
  plVar14[10] = 0;
  plVar14[0xd] = 0;
  plVar14[0xc] = 0;
  plVar14[0xf] = 0;
  plVar14[0xe] = 0;
  plVar14[0x11] = 0;
  plVar14[0x10] = 0;
  plVar14[0x12] = 0;
  *(undefined4 *)(plVar14 + 0x13) = 0x3f800000;
  plStack_60 = plVar14 + 3;
  *plStack_60 = (long)&PTR_FUN_110b99d90;
  plStack_58 = plVar14;
  FUN_109fe445c(param_1 + 0x15,&plStack_60);
  plVar14 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  lVar13 = *plVar16;
  _objc_retain(lVar13);
  if (lVar13 != 0) {
    iVar11 = 2;
    func_0x000107c31924(2,0x10,0,0);
    if (iVar11 != 0) {
      lVar15 = lVar13;
      func_0x00010bfcd800();
      goto LAB_109fe47b0;
    }
  }
  lVar15 = 0;
LAB_109fe47b0:
  _objc_release(lVar13);
  param_1[0x14] = lVar15;
  _objc_release(puVar12);
  return param_1;
}



/* Entry: 109fe4850; end: 109fe4a2f;  */

undefined8 * FUN_109fe4850(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plStack_50;
  long *plStack_48;
  
  puVar5 = param_1;
  FUN_109fca588();
  *puVar5 = &PTR_DAT_110b99ce8;
  plVar9 = puVar5 + 0x13;
  puVar5[0x14] = 0;
  *plVar9 = 0;
  puVar5[0x16] = 0;
  puVar5[0x15] = 0;
  *(undefined1 *)(puVar5 + 0x17) = 1;
  plVar6 = (long *)*param_3;
  ___dynamic_cast(plVar6,&PTR_DAT_110ae7280,&PTR_DAT_110ae7448,0xffffffffffffffff);
  (**(code **)*plVar6)();
  lVar8 = *plVar6;
  _objc_retain(lVar8);
  lVar7 = *plVar9;
  *plVar9 = lVar8;
  _objc_release(lVar7);
  lVar7 = *plVar9;
  plVar6 = (long *)0xa0;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110b99d40;
  _objc_retain(lVar7);
  plVar6[4] = param_2;
  plVar6[5] = lVar7;
  plVar6[6] = param_2 + 0x810;
  plVar6[7] = 0x32aaaba7;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[0x12] = 0;
  *(undefined4 *)(plVar6 + 0x13) = 0x3f800000;
  plStack_50 = plVar6 + 3;
  *plStack_50 = (long)&PTR_FUN_110b99d90;
  plStack_48 = plVar6;
  FUN_109fe445c(puVar5 + 0x15,&plStack_50);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  lVar7 = *plVar9;
  _objc_retain(lVar7);
  if (lVar7 != 0) {
    iVar4 = 2;
    func_0x000107c31924(2,0x10,0,0);
    if (iVar4 != 0) {
      lVar8 = lVar7;
      func_0x00010bfcd800();
      goto LAB_109fe49d0;
    }
  }
  lVar8 = 0;
LAB_109fe49d0:
  _objc_release(lVar7);
  param_1[0x14] = lVar8;
  return param_1;
}



/* Entry: 109fe4a30; end: 109fe4a4f;  */

long FUN_109fe4a30(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    lVar5 = 0;
    uVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x3c);
    do {
      uVar3 = (ulong)*(uint *)(param_1 + 0x34);
      lVar2 = param_1 + 0x24;
      func_0x000109fc8e08(lVar2,uVar3,uVar4);
      FUN_109fc8e58();
      lVar5 = lVar5 + lVar2 * (uVar3 & 0xffffffff);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x30));
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    return lVar5 * (ulong)uVar1;
  }
  return 0;
}



/* Entry: 109fe4a50; end: 109fe4a63;  */

void FUN_109fe4a50(void)

{
  FUN_109fe4a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe4a64; end: 109fe4aeb;  */

undefined8 * FUN_109fe4a64(undefined8 *param_1)

{
  func_0x000109fe4a94(param_1 + 0x15);
  _objc_release(param_1[0x13]);
  *param_1 = &PTR_FUN_110b97f88;
  func_0x0001092350f8(param_1 + 0x11);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fe4aec; end: 109fe4afb;  */

void FUN_109fe4aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99d40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109fe4afc; end: 109fe4b1b;  */

void FUN_109fe4afc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99d40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe4b1c; end: 109fe4b27;  */

undefined8 * FUN_109fe4b1c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110b99df8;
  FUN_109fe4d94(param_1 + 0x78);
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 109fe4b28; end: 109fe4b67;  */

undefined8 * FUN_109fe4b28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99df8;
  FUN_109fe4d94(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  _objc_release(param_1[2]);
  return param_1;
}



/* Entry: 109fe4b68; end: 109fe4b6b;  */

undefined8 * FUN_109fe4b68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99df8;
  FUN_109fe4d94(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  _objc_release(param_1[2]);
  return param_1;
}



/* Entry: 109fe4b6c; end: 109fe4b7f;  */

void FUN_109fe4b6c(void)

{
  FUN_109fe4b28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fe4b80; end: 109fe4d8b;  */

undefined1  [16] FUN_109fe4b80(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  FUN_109fe4e08(*param_2);
  uVar1 = param_2[1];
  lVar3 = lVar4;
  func_0x00010c149760(lVar4);
  FUN_109fe9a8c(uVar1,lVar3);
  func_0x00010c26cf40();
  lVar3 = lVar4;
  if (((((param_2[6] == 2) && (param_2[7] == 3)) && (param_2[8] == 4)) && (param_2[9] == 5)) ||
     (*(char *)(*(long *)(param_1 + 8) + 0x42) != '\x01')) {
    func_0x00010c0d9180();
  }
  else {
    func_0x00010c0d91a0();
  }
  if (lVar3 == 0) {
    FUN_109fd19d0(*(undefined8 *)(param_1 + 0x18),6,1,&UNK_10f630271,0x37);
  }
  else {
    _objc_retain(lVar3);
    _objc_retain(lVar3);
    iVar2 = 2;
    func_0x000107c31924(2,0x10,0,0);
    if (iVar2 != 0) {
      lVar5 = lVar3;
      func_0x00010bfcd800(lVar3);
      goto LAB_109fe4d0c;
    }
  }
  lVar5 = 0;
LAB_109fe4d0c:
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 109fe4d8c; end: 109fe4d93;  */

void FUN_109fe4d8c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109fe4d90);
  (*pcVar1)();
}



/* Entry: 109fe4d94; end: 109fe4e07;  */

long * FUN_109fe4d94(long *param_1)

{
  long lVar1;
  
  func_0x000109fe4dcc(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109fe4e08; end: 109fe5183;  */

undefined8 FUN_109fe4e08(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  switch(param_1) {
  case 1:
  case 0x26:
    uVar3 = 10;
    break;
  case 2:
    uVar3 = 0x1e;
    break;
  case 4:
    uVar3 = 0x46;
    break;
  case 5:
    uVar3 = 0x14;
    break;
  case 6:
    uVar3 = 0x3c;
    break;
  case 7:
    uVar3 = 0x6e;
    break;
  case 8:
    uVar3 = 0xc;
    break;
  case 9:
    uVar3 = 0x20;
    break;
  case 10:
    uVar3 = 0x48;
    break;
  case 0xb:
    uVar3 = 0x16;
    break;
  case 0xc:
    uVar3 = 0x3e;
    break;
  case 0xd:
    uVar3 = 0x70;
    break;
  case 0xe:
    uVar3 = 0xd;
    break;
  case 0xf:
    uVar3 = 0x21;
    break;
  case 0x10:
    uVar3 = 0x49;
    break;
  case 0x11:
    uVar3 = 0x17;
    break;
  case 0x12:
    uVar3 = 0x3f;
    break;
  case 0x13:
    uVar3 = 0x71;
    break;
  case 0x14:
    uVar3 = 0x35;
    break;
  case 0x15:
    uVar3 = 0x67;
    break;
  case 0x16:
    uVar3 = 0x7b;
    break;
  case 0x17:
    uVar3 = 0xe;
    break;
  case 0x18:
    uVar3 = 0x22;
    break;
  case 0x19:
    uVar3 = 0x4a;
    break;
  case 0x1a:
    uVar3 = 0x18;
    break;
  case 0x1b:
    uVar3 = 0x40;
    break;
  case 0x1c:
    uVar3 = 0x72;
    break;
  case 0x1d:
    uVar3 = 0x36;
    break;
  case 0x1e:
    uVar3 = 0x68;
    break;
  case 0x1f:
    uVar3 = 0x7c;
    break;
  case 0x20:
    uVar3 = 0x19;
    break;
  case 0x21:
    uVar3 = 0x41;
    break;
  case 0x22:
    uVar3 = 0x73;
    break;
  case 0x23:
    uVar3 = 0x37;
    break;
  case 0x24:
    uVar3 = 0x69;
    break;
  case 0x25:
    uVar3 = 0x7d;
    break;
  case 0x27:
    uVar3 = 0x50;
    break;
  case 0x28:
    uVar3 = 0x47;
    break;
  case 0x29:
    uVar3 = 0x5a;
    break;
  case 0x2a:
    uVar3 = 0x5b;
    break;
  case 0x2b:
    uVar3 = 0x5c;
    break;
  case 0x2c:
    uVar3 = 0xfa;
    break;
  case 0x2d:
    uVar3 = 0xfc;
    break;
  case 0x2f:
    uVar3 = 0x104;
    break;
  case 0x30:
  case 0x31:
    uVar3 = 0xb4;
    break;
  case 0x32:
    uVar3 = 0xb6;
    break;
  case 0x33:
    uVar3 = 0xb2;
    break;
  case 0x34:
    uVar3 = 0xb5;
    break;
  case 0x35:
    uVar3 = 0xb7;
    break;
  case 0x36:
    uVar3 = 0xb3;
    break;
  case 0x37:
    iVar2 = 2;
    func_0x000107c31924(2,0x10,4,0);
    bVar1 = iVar2 == 0;
    uVar4 = 0x87;
    goto code_r0x000109fe50f8;
  case 0x38:
    iVar2 = 2;
    func_0x000107c31924(2,0x10,4,0);
    bVar1 = iVar2 == 0;
    uVar4 = 0x86;
    goto code_r0x000109fe50f8;
  case 0x39:
    iVar2 = 2;
    func_0x000107c31924(2,0x10,4,0);
    bVar1 = iVar2 == 0;
    uVar4 = 0x99;
    goto code_r0x000109fe50f8;
  case 0x3a:
    iVar2 = 2;
    func_0x000107c31924(2,0x10,4,0);
    bVar1 = iVar2 == 0;
    uVar4 = 0x98;
code_r0x000109fe50f8:
    uVar3 = 0;
    if (!bVar1) {
      uVar3 = uVar4;
    }
    break;
  case 0x3b:
    uVar3 = 0xcc;
    break;
  case 0x3c:
    uVar3 = 0xba;
    break;
  case 0x3d:
    uVar3 = 0xcd;
    break;
  case 0x3e:
    uVar3 = 0xbb;
    break;
  case 0x3f:
    uVar3 = 0xce;
    break;
  case 0x40:
    uVar3 = 0xbc;
    break;
  case 0x41:
    uVar3 = 0xcf;
    break;
  case 0x42:
    uVar3 = 0xbd;
    break;
  case 0x43:
    uVar3 = 0xd0;
    break;
  case 0x44:
    uVar3 = 0xbe;
    break;
  case 0x45:
    uVar3 = 0xd2;
    break;
  case 0x46:
    uVar3 = 0xc0;
    break;
  case 0x47:
    uVar3 = 0xd3;
    break;
  case 0x48:
    uVar3 = 0xc1;
    break;
  case 0x49:
    uVar3 = 0xd4;
    break;
  case 0x4a:
    uVar3 = 0xc2;
    break;
  case 0x4b:
    uVar3 = 0xd5;
    break;
  case 0x4c:
    uVar3 = 0xc3;
    break;
  case 0x4d:
    uVar3 = 0xd6;
    break;
  case 0x4e:
    uVar3 = 0xc4;
    break;
  case 0x4f:
    uVar3 = 0xd7;
    break;
  case 0x50:
    uVar3 = 0xc5;
    break;
  case 0x51:
    uVar3 = 0xd8;
    break;
  case 0x52:
    uVar3 = 0xc6;
    break;
  case 0x53:
    uVar3 = 0xd9;
    break;
  case 0x54:
    uVar3 = 199;
    break;
  case 0x55:
    uVar3 = 0xda;
    break;
  case 0x56:
    uVar3 = 200;
  }
  return uVar3;
}



/* Entry: 109fe5184; end: 109fe51eb;  */

void FUN_109fe5184(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_2 != 0) {
    lVar1 = param_2;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    if (lVar1 != 0) {
      func_0x000107c31940(param_1);
      goto LAB_109fe51c8;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_109fe51c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109fe51ec; end: 109fe521f;  */

void FUN_109fe51ec(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bffa180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109fe5220; end: 109fe52ff;  */

undefined8 FUN_109fe5220(long param_1)

{
  if (param_1 < 0x1f) {
    if (param_1 < 6) {
      if (param_1 == 3) {
        return 0x1c;
      }
      if (param_1 == 4) {
        return 0x1d;
      }
      if (param_1 == 5) {
        return 0x1e;
      }
    }
    else {
      if (param_1 == 6) {
        return 0x1f;
      }
      if (param_1 == 0x1d) {
        return 0x20;
      }
      if (param_1 == 0x1e) {
        return 0x21;
      }
    }
  }
  else if (param_1 < 0x22) {
    if (param_1 == 0x1f) {
      return 0x22;
    }
    if (param_1 == 0x20) {
      return 0x23;
    }
    if (param_1 == 0x21) {
      return 0x24;
    }
  }
  else {
    if (param_1 == 0x22) {
      return 0x25;
    }
    if (param_1 == 0x23) {
      return 0x26;
    }
    if (param_1 == 0x24) {
      return 0x27;
    }
  }
  return 0;
}



/* Entry: 109fe5300; end: 109fe533b;  */

ulong FUN_109fe5300(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong unaff_x22;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  uVar5 = param_1 - 2;
  if ((uVar5 < 8) && ((0xabU >> (ulong)((uint)uVar5 & 0x1f) & 1) != 0)) {
    return (ulong)*(uint *)(&UNK_10e482588 + uVar5 * 4);
  }
  puVar2 = (ulong *)&UNK_10f6302f9;
  func_0x000109243bf8();
  pcStack_18 = FUN_109fe533c;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar3 = *puVar2;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010c298d60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar6 = *plStack_130;
    do {
      uVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(uVar3);
        }
        unaff_x22 = *(ulong *)(lStack_138 + uVar7 * 8);
        uVar4 = unaff_x22;
        func_0x00010c06b700();
        if ((uVar4 & 1) != 0) {
          lStack_150 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0xffffffff;
          uVar4 = unaff_x22;
          func_0x00010c0d4f60(unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          FUN_109fe5184(&uStack_178);
          if (lStack_150 < 0) {
            __ZdlPv(uStack_160);
          }
          uStack_160 = CONCAT71(uStack_177,uStack_178);
          uStack_158 = uStack_170;
          lStack_150 = CONCAT17(uStack_161,uStack_168);
          uStack_161 = 0;
          uStack_178 = 0;
          _objc_release(uVar4);
          uVar4 = unaff_x22;
          func_0x00010bf0de80();
          uStack_148 = CONCAT44(uStack_148._4_4_,(int)uVar4);
          uVar4 = unaff_x22;
          func_0x00010bf0df40();
          uVar1 = (undefined4)uVar4;
          FUN_109fe5220();
          uStack_148 = CONCAT44(uVar1,(undefined4)uStack_148);
          param_2 = &uStack_160;
          func_0x000109241120(extraout_x8,param_2);
          if (lStack_150 < 0) {
            __ZdlPv(uStack_160);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      uVar5 = uVar3;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  uVar5 = uVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_release(uVar3);
  func_0x0001092349c8(&uStack_160);
  uVar7 = uVar5;
  __Unwind_Resume();
  pcStack_188 = FUN_109fe5554;
  uStack_1b0 = unaff_x22;
  uStack_1a8 = uVar5;
  uStack_1a0 = uVar3;
  ppuStack_190 = &puStack_20;
  _objc_retain();
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  *extraout_x8_00 = 0;
  if (uVar7 == 0) {
    FUN_109fe56a0(&uStack_1d0,param_2);
    func_0x00010923fd80(extraout_x8_00);
    extraout_x8_00[1] = uStack_1c8;
    *extraout_x8_00 = uStack_1d0;
    extraout_x8_00[2] = uStack_1c0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    puStack_1b8 = (undefined1 *)&uStack_1d0;
    func_0x00010922dc0c(&puStack_1b8);
  }
  else {
    FUN_109fe5ac8(&uStack_1d0,param_2);
    uVar5 = uVar7;
    func_0x00010c298d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5c04();
    _objc_release(uVar5);
    uVar5 = uVar7;
    func_0x00010bfb6860(uVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5c04();
    _objc_release(uVar5);
    puStack_1b8 = (undefined1 *)&uStack_1d0;
    FUN_109fea0e8(&puStack_1b8);
  }
  _objc_release(uVar7);
  return uVar7;
}



/* Entry: 109fe533c; end: 109fe5553;  */

void FUN_109fe533c(undefined8 *param_1,long *param_2,undefined8 **param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  ulong unaff_x22;
  long lVar5;
  long lVar6;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *param_2;
  func_0x00010c298d60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x22 = *(ulong *)(lStack_128 + lVar6 * 8);
        uVar4 = unaff_x22;
        func_0x00010c06b700();
        if ((uVar4 & 1) != 0) {
          lStack_140 = 0;
          uStack_148 = 0;
          puStack_150 = (undefined8 *)0x0;
          uStack_138 = 0xffffffff;
          uVar4 = unaff_x22;
          func_0x00010c0d4f60(unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          FUN_109fe5184(&uStack_168);
          if (lStack_140 < 0) {
            __ZdlPv(puStack_150);
          }
          puStack_150 = (undefined8 *)CONCAT71(uStack_167,uStack_168);
          uStack_148 = uStack_160;
          lStack_140 = CONCAT17(uStack_151,uStack_158);
          uStack_151 = 0;
          uStack_168 = 0;
          _objc_release(uVar4);
          uVar4 = unaff_x22;
          func_0x00010bf0de80();
          uStack_138 = CONCAT44(uStack_138._4_4_,(int)uVar4);
          uVar4 = unaff_x22;
          func_0x00010bf0df40();
          uVar1 = (undefined4)uVar4;
          FUN_109fe5220();
          uStack_138 = CONCAT44(uVar1,(undefined4)uStack_138);
          param_3 = &puStack_150;
          func_0x000109241120(param_1,param_3);
          if (lStack_140 < 0) {
            __ZdlPv(puStack_150);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  puStack_150 = param_1;
  func_0x0001092349c8(&puStack_150);
  lVar5 = lVar3;
  __Unwind_Resume();
  pcStack_178 = FUN_109fe5554;
  uStack_1a0 = unaff_x22;
  lStack_198 = lVar3;
  lStack_190 = lVar2;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  if (lVar5 == 0) {
    FUN_109fe56a0(&uStack_1c0,param_3);
    func_0x00010923fd80(extraout_x8);
    extraout_x8[1] = uStack_1b8;
    *extraout_x8 = uStack_1c0;
    extraout_x8[2] = uStack_1b0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c0 = 0;
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010922dc0c(&puStack_1a8);
  }
  else {
    FUN_109fe5ac8(&uStack_1c0,param_3);
    lVar3 = lVar5;
    func_0x00010c298d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5c04();
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010bfb6860(lVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5c04();
    _objc_release(lVar3);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    FUN_109fea0e8(&puStack_1a8);
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 109fe5554; end: 109fe569f;  */

void FUN_109fe5554(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    FUN_109fe56a0(&uStack_50,param_3);
    func_0x00010923fd80(param_1);
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    puStack_38 = (undefined1 *)&uStack_50;
    func_0x00010922dc0c(&puStack_38);
  }
  else {
    FUN_109fe5ac8(&uStack_50,param_3);
    lVar1 = param_2;
    func_0x00010c298d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5c04();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bfb6860(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5c04();
    _objc_release(lVar1);
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_109fea0e8(&puStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 109fe56a0; end: 109fe5ac7;  */

void FUN_109fe56a0(long *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *extraout_x8;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long *plStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  
  if (param_2 == 0) {
    puVar5 = &UNK_10f630407;
    func_0x000109243bf8();
    func_0x00010922dc0c(&plStack_b8);
    __Unwind_Resume();
    if (puVar5 == (undefined *)0x0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
    }
    else {
      FUN_109fe9fc0(extraout_x8,
                    (*(long *)(puVar5 + 0x88) - *(long *)(puVar5 + 0x80) >> 4) * 0x6db6db6db6db6db7)
      ;
      lVar9 = *extraout_x8;
      lVar6 = extraout_x8[1];
      if (lVar6 != lVar9) {
        uVar8 = 0;
        do {
          lVar7 = *(long *)(puVar5 + 0x80) + uVar8 * 0x70;
          if ((*(char *)(lVar7 + 0x68) == '\x01') && (*(long *)(lVar7 + 0x58) != 0)) {
            lVar6 = *(long *)(lVar7 + 0x50);
            lVar7 = *(long *)(lVar7 + 0x58) * 0x14;
            do {
              if (*(uint *)(lVar6 + 4) < 8 &&
                  (1 << (ulong)(*(uint *)(lVar6 + 4) & 0x1f) & 0xa8U) != 0) {
                func_0x000107270fb0(lVar9 + uVar8 * 0x28,lVar6,lVar6);
              }
              lVar6 = lVar6 + 0x14;
              lVar7 = lVar7 + -0x14;
            } while (lVar7 != 0);
            lVar9 = *extraout_x8;
            lVar6 = extraout_x8[1];
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (ulong)((lVar6 - lVar9 >> 3) * -0x3333333333333333));
      }
    }
    return;
  }
  lVar9 = *(long *)(param_2 + 0x80);
  lVar6 = *(long *)(param_2 + 0x88);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  lVar6 = lVar6 - lVar9;
  if (lVar6 != 0) {
    lVar6 = lVar6 >> 4;
    plStack_b8 = param_1;
    func_0x00010924185c(param_1,lVar6 * 0x6db6db6db6db6db7);
    lVar9 = param_1[1];
    _bzero(lVar9,lVar6 * -0x2492492492492480);
    lVar9 = lVar9 + lVar6 * -0x2492492492492480;
    param_1[1] = lVar9;
    lVar6 = *param_1;
    if (lVar9 != lVar6) {
      uVar8 = 0;
      do {
        puVar1 = (undefined4 *)(lVar6 + uVar8 * 0x80);
        lVar7 = *(long *)(param_2 + 0x80) + uVar8 * 0x70;
        *puVar1 = (int)uVar8;
        if ((*(char *)(lVar7 + 0x68) == '\x01') && (*(long *)(lVar7 + 0x58) != 0)) {
          puVar10 = *(uint **)(lVar7 + 0x50);
          lVar9 = *(long *)(lVar7 + 0x58) * 0x14;
          do {
            uVar2 = puVar10[1];
            if ((int)uVar2 < 5) {
              if ((int)uVar2 < 3) {
                if (uVar2 == 1) {
                  plStack_b8 = (long *)0x0;
                  uStack_b0 = 0;
                  lStack_a8 = 0;
                  uStack_a0 = *puVar10;
                  uStack_9c = 0;
                  uStack_98 = 1;
                  puVar4 = *(undefined8 **)(puVar1 + 0x1c);
                  if (puVar4 < *(undefined8 **)(puVar1 + 0x1e)) {
                    *puVar4 = 0;
                    puVar4[1] = 0;
                    puVar4[2] = 0;
                    plStack_b8 = (long *)0x0;
                    uStack_b0 = 0;
                    lStack_a8 = 0;
                    puVar4[3] = (ulong)uStack_a0;
                    *(undefined4 *)(puVar4 + 4) = 1;
                    puVar4 = puVar4 + 5;
                  }
                  else {
                    puVar4 = (undefined8 *)(puVar1 + 0x1a);
                    FUN_109fe9e88(puVar4,&plStack_b8);
                  }
                  *(undefined8 **)(puVar1 + 0x1c) = puVar4;
                }
                else {
                  if (uVar2 != 2) {
LAB_109fe5a4c:
                    func_0x000109243bf8(&UNK_10f63043f);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109fe5a5c);
                    (*pcVar3)();
                  }
LAB_109fe5854:
                  plStack_b8 = (long *)0x0;
                  uStack_b0 = 0;
                  lStack_a8 = 0;
                  uStack_a0 = *puVar10;
                  uStack_9c = 0;
                  uStack_98 = 1;
                  puVar4 = *(undefined8 **)(puVar1 + 0x10);
                  if (puVar4 < *(undefined8 **)(puVar1 + 0x12)) {
                    *puVar4 = 0;
                    puVar4[1] = 0;
                    puVar4[2] = 0;
                    plStack_b8 = (long *)0x0;
                    uStack_b0 = 0;
                    lStack_a8 = 0;
                    puVar4[3] = (ulong)uStack_a0;
                    *(undefined4 *)(puVar4 + 4) = 1;
                    puVar4 = puVar4 + 5;
                  }
                  else {
                    puVar4 = (undefined8 *)(puVar1 + 0xe);
                    FUN_109fe9c20(puVar4,&plStack_b8);
                  }
                  *(undefined8 **)(puVar1 + 0x10) = puVar4;
                }
              }
              else {
                if (uVar2 != 3) {
                  if (uVar2 != 4) goto LAB_109fe5a4c;
LAB_109fe57d4:
                  plStack_b8 = (long *)0x0;
                  uStack_b0 = 0;
                  lStack_a8 = 0;
                  uStack_a0 = *puVar10;
                  uStack_9c = 0;
                  uStack_98 = 1;
                  uStack_88 = 0;
                  uStack_80 = 0;
                  uStack_90 = 0;
                  puVar4 = *(undefined8 **)(puVar1 + 4);
                  if (puVar4 < *(undefined8 **)(puVar1 + 6)) {
                    puVar4[1] = 0;
                    puVar4[2] = 0;
                    *puVar4 = 0;
                    uStack_b0 = 0;
                    lStack_a8 = 0;
                    plStack_b8 = (long *)0x0;
                    puVar4[3] = (ulong)uStack_a0;
                    *(undefined4 *)(puVar4 + 4) = 1;
                    puVar4[6] = 0;
                    puVar4[7] = 0;
                    puVar4[5] = 0;
                    puVar4[6] = 0;
                    puVar4[5] = 0;
                    puVar4[7] = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    puVar4 = puVar4 + 8;
                  }
                  else {
                    puVar4 = (undefined8 *)(puVar1 + 2);
                    func_0x000109276118(puVar4,&plStack_b8);
                  }
                  *(undefined8 **)(puVar1 + 4) = puVar4;
                  goto LAB_109fe59b0;
                }
                plStack_b8 = (long *)0x0;
                uStack_b0 = 0;
                lStack_a8 = 0;
                uStack_a0 = *puVar10;
                uStack_9c = 0;
                uStack_98 = 0;
                uStack_94 = 1;
                puVar4 = *(undefined8 **)(puVar1 + 0x16);
                if (puVar4 < *(undefined8 **)(puVar1 + 0x18)) {
                  *puVar4 = 0;
                  puVar4[1] = 0;
                  puVar4[2] = 0;
                  plStack_b8 = (long *)0x0;
                  uStack_b0 = 0;
                  lStack_a8 = 0;
                  puVar4[4] = 0x100000000;
                  puVar4[3] = (ulong)uStack_a0;
                  puVar4 = puVar4 + 5;
                }
                else {
                  puVar4 = (undefined8 *)(puVar1 + 0x14);
                  FUN_109fe9af0(puVar4,&plStack_b8);
                }
                *(undefined8 **)(puVar1 + 0x16) = puVar4;
              }
            }
            else {
              if ((int)uVar2 < 7) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) goto LAB_109fe5a4c;
                  goto LAB_109fe57d4;
                }
              }
              else if (uVar2 != 7) {
                if (uVar2 != 8) goto LAB_109fe5a4c;
                goto LAB_109fe5854;
              }
              plStack_b8 = (long *)0x0;
              uStack_b0 = 0;
              lStack_a8 = 0;
              uStack_a0 = *puVar10;
              uStack_9c = 0;
              uStack_98 = 0;
              uStack_94 = 1;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_90 = 0;
              puVar4 = *(undefined8 **)(puVar1 + 10);
              if (puVar4 < *(undefined8 **)(puVar1 + 0xc)) {
                puVar4[1] = 0;
                puVar4[2] = 0;
                *puVar4 = 0;
                uStack_b0 = 0;
                lStack_a8 = 0;
                plStack_b8 = (long *)0x0;
                puVar4[4] = 0x100000000;
                puVar4[3] = (ulong)uStack_a0;
                puVar4[6] = 0;
                puVar4[7] = 0;
                puVar4[5] = 0;
                puVar4[6] = 0;
                puVar4[5] = 0;
                puVar4[7] = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                puVar4 = puVar4 + 8;
              }
              else {
                puVar4 = (undefined8 *)(puVar1 + 8);
                FUN_109fe9d58(puVar4,&plStack_b8);
              }
              *(undefined8 **)(puVar1 + 10) = puVar4;
LAB_109fe59b0:
              puStack_78 = &uStack_90;
              func_0x00010922df48(&puStack_78);
            }
            if (lStack_a8 < 0) {
              __ZdlPv(plStack_b8);
            }
            puVar10 = puVar10 + 5;
            lVar9 = lVar9 + -0x14;
          } while (lVar9 != 0);
          lVar6 = *param_1;
          lVar9 = param_1[1];
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulong)(lVar9 - lVar6 >> 7));
    }
  }
  return;
}


