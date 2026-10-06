/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103264a1c; end: 103264a1f;  */

void FUN_103264a1c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4f5e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4f5f0;
  func_0x00010002969c(0x112f4f5f0,&UNK_10dba2ca8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4f5e8 = puVar2;
  return;
}



/* Entry: 103264a20; end: 103264a6f;  */

void FUN_103264a20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4f5e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4f5f0;
  func_0x00010002969c(0x112f4f5f0,&UNK_10dba2ca8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4f5e8 = puVar2;
  return;
}



/* Entry: 103264a70; end: 103264a87;  */

undefined ** FUN_103264a70(void)

{
  return &PTR_DAT_11062d2e8;
}



/* Entry: 103264a88; end: 103264abf;  */

undefined * FUN_103264a88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031f573c();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103264ac0; end: 103264b17;  */

/* WARNING: Possible PIC construction at 0x000103264afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103264b00) */

void FUN_103264ac0(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
  func_0x000107c61170(param_1[1]);
  func_0x000107c61170(param_1[2]);
  func_0x000107c61170(param_1[3]);
  func_0x000107c61170(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1[5]);
  return;
}



/* Entry: 103264b18; end: 103264bcf;  */

undefined8 * FUN_103264b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  lVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar7;
  pcVar6 = (code *)**(undefined8 **)(lVar7 + -8);
  func_0x000107c6157c();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar5);
  (*pcVar6)(param_1 + 6,param_2 + 6,lVar7);
  param_1[0xb] = param_2[0xb];
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 103264bd0; end: 103264caf;  */

undefined8 * FUN_103264bd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  func_0x000100083374(param_1 + 6,param_2 + 6);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 103264cb0; end: 103264d53;  */

undefined8 * FUN_103264cb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c615e8(uVar1);
  func_0x0001000834e4(param_1 + 6);
  uVar1 = param_2[6];
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c615e8(uVar2);
  return param_1;
}



/* Entry: 103264d54; end: 103264e03;  */

int FUN_103264d54(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103264e04; end: 103264e67;  */

/* WARNING: Possible PIC construction at 0x000103264e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103264e1c) */

void FUN_103264e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103264e68; end: 103264ed3;  */

undefined8 * FUN_103264e68(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103264ed4; end: 103264f17;  */

undefined8 * FUN_103264ed4(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103264f18; end: 103264faf;  */

int FUN_103264f18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103264fb0; end: 10326500b;  */

void FUN_103264fb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10326500c; end: 10326503b;  */

void FUN_10326500c(undefined8 *param_1)

{
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10326503c; end: 10326506f;  */

void FUN_10326503c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  func_0x000107c61434(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 103265070; end: 103265083;  */

void FUN_103265070(byte *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  byte bVar15;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_217;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
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
  undefined8 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  uVar12 = *(ulong *)(unaff_x20 + 0x20);
  bVar15 = *param_1;
  uVar14 = uVar4;
  uVar10 = uVar4;
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (uVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032648d0);
    (*pcVar2)();
  }
  uVar3 = uVar14;
  func_0x000107c3cfdc();
  func_0x000107c61170(uVar14);
  if (bVar15 < 2) {
    if (bVar15 == 0) {
      bVar15 = 3;
      uVar12 = 0;
      uVar5 = 0;
      uVar14 = 0;
    }
    else {
      func_0x000107c44f7c();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032648d4);
        (*pcVar2)();
      }
      uVar14 = uVar4;
      func_0x000107c3e214();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032648d8);
        (*pcVar2)();
      }
      func_0x000107c61438(uVar12,2);
      func_0x000107c61174(uVar14);
      bVar15 = 0;
    }
  }
  else {
    if (bVar15 == 2) {
      func_0x0001000285a8(0x112f4f638,&UNK_10dba2d08);
      FUN_10326500c(&uStack_190);
      func_0x000107c610b4(&uStack_2b8,&uStack_190,0x128);
      func_0x000100854cb0(&uStack_2b8);
      return;
    }
    if ((int)uVar3 == 0xc) {
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032648dc);
        (*pcVar2)();
      }
      uVar14 = uVar4;
      func_0x000107c4f604();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032648e0);
        (*pcVar2)();
      }
      uVar4 = uVar14;
      func_0x000107c4f38c();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      if (uVar4 == 0) {
        bVar15 = 2;
        func_0x000107c61438(uVar12,2);
        uVar14 = 0;
        goto LAB_1032645b8;
      }
      uVar5 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      uVar12 = uVar10;
    }
    else {
      func_0x000107c61434(uVar12);
    }
    func_0x000107c61434(uVar12);
    uVar14 = 0;
    bVar15 = 2;
  }
LAB_1032645b8:
  uVar6 = (ulong)((int)uVar3 == 0xc);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar4 = uVar5;
  uVar10 = uVar12;
  uVar3 = uVar14;
  FUN_103261454();
  FUN_10326158c(lVar7,uVar11,uVar9,uVar1,uVar13,uVar5,uVar12,uVar14,bVar15);
  if (lVar7 == 0) {
    uStack_180 = 0x6e6f69746e656d;
    uStack_178 = 0xe700000000000000;
    if (bVar15 < 2) {
      func_0x00010326b640();
    }
    else if (bVar15 == 2) {
      func_0x00010326b650();
    }
    else {
      func_0x00010326b664();
    }
    func_0x0001000285a8(0x112f4f638,&UNK_10dba2d08);
    func_0x0001031e60c4(&uStack_2b8);
    uStack_e0 = uStack_240;
    uStack_e8 = uStack_248;
    uStack_d0 = uStack_230;
    uStack_d8 = uStack_238;
    uStack_c8 = uStack_228;
    uStack_b7 = uStack_217;
    uStack_120 = uStack_280;
    uStack_128 = uStack_288;
    uStack_110 = uStack_270;
    uStack_118 = uStack_278;
    uStack_100 = uStack_260;
    uStack_108 = uStack_268;
    uStack_f0 = uStack_250;
    uStack_f8 = uStack_258;
    uStack_150 = uStack_2b0;
    uStack_158 = uStack_2b8;
    uStack_140 = uStack_2a0;
    uStack_148 = uStack_2a8;
    uStack_130 = uStack_290;
    uStack_138 = uStack_298;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_a0 = 3;
    uStack_a8 = 0;
    uStack_160 = 0;
    uStack_7f = 1;
    uStack_78 = 0;
    uStack_70 = 1;
    lStack_170 = lVar7;
    uStack_168 = uVar11;
    uStack_98 = uVar6;
    uStack_90 = uVar4;
    uStack_88 = uVar10;
    uStack_80 = (char)uVar3;
    func_0x000103265080(&uStack_190);
    FUN_10320d790(uVar6,uVar4,uVar10,uVar3 & 0xffffffff);
    func_0x000100854cb0(&uStack_190);
    FUN_103261930(uVar5,uVar12,uVar14,bVar15);
    FUN_103261930(uVar5,uVar12,uVar14,bVar15);
    FUN_1031e1b78(uVar6,uVar4,uVar10,uVar3 & 0xffffffff);
    FUN_103265084(&uStack_190);
  }
  else {
    puVar8 = &UNK_11062d480;
    func_0x000107c613fc(&UNK_11062d480,0x59,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x6e6f69746e656d;
    *(undefined8 *)(puVar8 + 0x18) = 0xe700000000000000;
    *(ulong *)(puVar8 + 0x20) = uVar5;
    *(ulong *)(puVar8 + 0x28) = uVar12;
    *(ulong *)(puVar8 + 0x30) = uVar14;
    puVar8[0x38] = bVar15;
    *(ulong *)(puVar8 + 0x40) = uVar6;
    *(ulong *)(puVar8 + 0x48) = uVar4;
    *(ulong *)(puVar8 + 0x50) = uVar10;
    puVar8[0x58] = (char)uVar3;
    func_0x0001032618ac(uVar5,uVar12,uVar14,bVar15);
    FUN_10320d790(uVar6,uVar4,uVar10,uVar3 & 0xffffffff);
    uVar9 = 0x112f4f5d8;
    func_0x0001000285a8(0x112f4f5d8,&UNK_10dba2c70);
    func_0x0001000bfde0(FUN_1032650cc,puVar8,uVar9);
    FUN_103261930(uVar5,uVar12,uVar14,bVar15);
    FUN_103261930(uVar5,uVar12,uVar14,bVar15);
    func_0x000107c61574(lVar7);
    func_0x000107c61574(puVar8);
    FUN_1031e1b78(uVar6,uVar4,uVar10,uVar3 & 0xffffffff);
  }
  return;
}



/* Entry: 103265084; end: 1032650cb;  */

undefined8 FUN_103265084(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4f5d8;
  func_0x0001000285a8(0x112f4f5d8,&UNK_10dba2c70);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1032650cc; end: 10326510f;  */

void FUN_1032650cc(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_1032689f4(*param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 103265110; end: 10326511b;  */

void FUN_103265110(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_2a0 [296];
  undefined1 uStack_178;
  undefined7 uStack_177;
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
  
  lVar1 = *param_1;
  uVar6 = param_1[1];
  if (1 < uVar6 && 0 < lVar1) {
    puVar2 = (undefined1 *)param_1[2];
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      if (lVar1 == 1) {
        FUN_10326503c(1,uVar6,puVar2,lVar3);
        func_0x000107c61174(uVar6);
        func_0x000107c61434(lVar3);
        puVar4 = puVar2;
        FUN_103261ff8(puVar2,lVar3);
      }
      else {
        func_0x0001000285a8(0x112f4f490,&UNK_10dba2d10);
        uStack_178 = 0;
        FUN_10326503c(lVar1,uVar6,puVar2,lVar3);
        func_0x000107c61174(uVar6);
        func_0x000107c61434(lVar3);
        puVar4 = &uStack_178;
        func_0x000100854cb0(puVar4);
      }
      FUN_1032643e0(unaff_x20 + 0x10,&uStack_178);
      puVar5 = &UNK_11062d458;
      func_0x000107c613fc(&UNK_11062d458,0x88,7);
      *(undefined8 *)(puVar5 + 0x50) = uStack_150;
      *(undefined8 *)(puVar5 + 0x48) = uStack_158;
      *(undefined8 *)(puVar5 + 0x60) = uStack_140;
      *(undefined8 *)(puVar5 + 0x58) = uStack_148;
      *(undefined8 *)(puVar5 + 0x70) = uStack_130;
      *(undefined8 *)(puVar5 + 0x68) = uStack_138;
      *(undefined8 *)(puVar5 + 0x80) = uStack_120;
      *(undefined8 *)(puVar5 + 0x78) = uStack_128;
      *(undefined8 *)(puVar5 + 0x30) = uStack_170;
      *(ulong *)(puVar5 + 0x28) = CONCAT71(uStack_177,uStack_178);
      *(ulong *)(puVar5 + 0x10) = uVar6;
      *(undefined1 **)(puVar5 + 0x18) = puVar2;
      *(long *)(puVar5 + 0x20) = lVar3;
      *(undefined8 *)(puVar5 + 0x40) = uStack_160;
      *(undefined8 *)(puVar5 + 0x38) = uStack_168;
      func_0x000107c61174(uVar6);
      uVar7 = 0x112f4f5d8;
      func_0x0001000285a8(0x112f4f5d8,&UNK_10dba2c70);
      func_0x00010068b194(FUN_103265070,puVar5,uVar7);
      func_0x000107c6142c(lVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      return;
    }
    FUN_10326503c(lVar1,uVar6,puVar2,0);
    func_0x000107c61170(uVar6);
  }
  func_0x0001000285a8(0x112f4f638,&UNK_10dba2d08);
  FUN_10326500c(&uStack_178);
  func_0x000107c610b4(auStack_2a0,&uStack_178,0x128);
  func_0x000100854cb0(auStack_2a0);
  return;
}



/* Entry: 10326511c; end: 103265577;  */

code * FUN_10326511c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = FUN_1032665e0;
  func_0x00010487de38(FUN_1032665e0,0);
  uVar7 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[4];
  puVar2 = &UNK_11062d4c0;
  func_0x000107c613fc(&UNK_11062d4c0,0x38,7);
  uVar8 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar9 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  func_0x000107c6157c(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  FUN_103267170(&uStack_68,auStack_78,0x112f4f640,&UNK_10dba2d20);
  FUN_103267170(&uStack_70,auStack_78,0x112f4f648,&UNK_10dba2d28);
  uVar8 = 0x112f4f650;
  func_0x0001000285a8(0x112f4f650,&UNK_10dba2d30);
  pcVar5 = FUN_103266964;
  func_0x0001000bfde0(FUN_103266964,puVar2,uVar8);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar2);
  FUN_10326696c();
  puVar6 = puVar2;
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  func_0x0001000c2068(puVar2);
  func_0x000107c61574(puVar6);
  uVar8 = 0x1032653b4;
  func_0x00010487e4e0(0x1032653b4,0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11062d4e8;
  func_0x000107c613fc(&UNK_11062d4e8,0x38,7);
  uVar9 = *unaff_x20;
  uVar11 = unaff_x20[3];
  uVar10 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x28) = uVar11;
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  func_0x000107c6157c(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  FUN_103267170(&uStack_68,auStack_78,0x112f4f640,&UNK_10dba2d20);
  FUN_103267170(&uStack_70,auStack_78,0x112f4f648,&UNK_10dba2d28);
  uVar7 = 0x112f4f668;
  func_0x0001000285a8(0x112f4f668,&UNK_10dba2d38);
  uVar4 = 0x112f4f670;
  FUN_103266e88(0x112f4f670,0x112f4f650,&UNK_10dba2d30,PTR___sSayxGSlsMc_11034dd20);
  pcVar1 = FUN_1032669f4;
  func_0x00010487f108(FUN_1032669f4,puVar2,uVar7,uVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar2);
  uVar8 = 0x112f4f678;
  func_0x0001000285a8(0x112f4f678,&UNK_10dba2d40);
  pcVar5 = FUN_103265ec0;
  func_0x00010068b194(FUN_103265ec0,0,uVar8);
  func_0x000107c61574(pcVar1);
  return pcVar5;
}



/* Entry: 103265578; end: 10326579b;  */

undefined * FUN_103265578(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 uStack_64;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    func_0x000100403514(0,lVar10,0);
    uVar1 = param_1 + 0x38;
    uVar11 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar15 = 0;
    do {
      if (uVar11 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10326578c);
        (*pcVar4)();
      }
      uVar9 = uVar11 >> 6;
      uVar13 = 1L << (uVar11 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar9 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103265790);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      uStack_64 = *(undefined4 *)(*(long *)(param_1 + 0x30) + uVar11 * 4);
      uVar5 = 0;
      FUN_103261830();
      puVar6 = &uStack_64;
      func_0x000107c5fb20();
      uVar12 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar12) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar12 + 1;
      *(undefined4 **)(puVar3 + uVar12 * 0x10 + 0x20) = puVar6;
      *(undefined8 *)(puVar3 + uVar12 * 0x10 + 0x28) = uVar5;
      uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar12 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103265794);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar9 * 8);
      if ((uVar7 & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103265798);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10326579c);
        (*pcVar4)();
      }
      uVar7 = uVar7 & -2L << (uVar11 & 0x3f);
      if (uVar7 == 0) {
        lVar14 = uVar9 << 6;
        puVar8 = (ulong *)(param_1 + 0x40 + uVar9 * 8);
        do {
          uVar9 = uVar9 + 1;
          if (uVar12 + 0x3f >> 6 <= uVar9) {
            FUN_10326899c(uVar11,iVar2,0);
            uVar11 = uVar12;
            goto LAB_103265610;
          }
          uVar13 = *puVar8;
          lVar14 = lVar14 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar13 == 0);
        FUN_10326899c(uVar11,iVar2,0);
        uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar14;
      }
      else {
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 & 0x7fffffffffffffc0;
      }
LAB_103265610:
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar10);
  }
  return puVar3;
}



/* Entry: 10326579c; end: 103265837;  */

void FUN_10326579c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = uVar4;
  FUN_103265838(uVar4);
  puVar2 = &UNK_11062d650;
  func_0x000107c613fc(&UNK_11062d650,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  func_0x000107c61174(uVar4);
  uVar4 = 0x112f4b560;
  func_0x0001000285a8(0x112f4b560,&UNK_10db9b890);
  uVar3 = 0x1032681ac;
  func_0x0001000bfde0(0x1032681ac,puVar2,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 103265838; end: 103265ebf;  */

code * FUN_103265838(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1ff;
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
  undefined8 uStack_13f;
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
  undefined8 uStack_8f;
  undefined8 auStack_78 [3];
  
  pcVar7 = (code *)&uStack_2a0;
  FUN_103267d7c(&uStack_1e0);
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_a0 = uStack_150;
  uStack_8f = uStack_13f;
  uStack_e8 = uStack_198;
  uStack_f0 = uStack_1a0;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_128 = uStack_1d8;
  uStack_130 = uStack_1e0;
  uStack_118 = uStack_1c8;
  uStack_120 = uStack_1d0;
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  iVar1 = (int)&uStack_130;
  FUN_103233944();
  if (iVar1 != 1) {
    func_0x0001000285a8(0x112f4d5d0,&UNK_10db9f710);
    uStack_218 = uStack_158;
    uStack_220 = uStack_160;
    uStack_210 = uStack_150;
    uStack_1ff = uStack_13f;
    uStack_258 = uStack_198;
    uStack_260 = uStack_1a0;
    uStack_248 = uStack_188;
    uStack_250 = uStack_190;
    uStack_238 = uStack_178;
    uStack_240 = uStack_180;
    uStack_228 = uStack_168;
    uStack_230 = uStack_170;
    uStack_298 = uStack_1d8;
    uStack_2a0 = uStack_1e0;
    uStack_288 = uStack_1c8;
    uStack_290 = uStack_1d0;
    uStack_278 = uStack_1b8;
    uStack_280 = uStack_1c0;
    uStack_268 = uStack_1a8;
    uStack_270 = uStack_1b0;
    func_0x000100854cb0(&uStack_2a0);
    FUN_1032681b4(&uStack_2a0,0x112f4d5c8,&UNK_10db9f700);
    return pcVar7;
  }
  puVar2 = param_1;
  func_0x000107c3e214();
  func_0x000107c61180();
  uVar10 = *unaff_x20;
  uVar8 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  uStack_2a0 = unaff_x20[3];
  auStack_78[0] = unaff_x20[4];
  if (puVar2 == (undefined8 *)0x0) {
LAB_103265aac:
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    uStack_1e8 = 0;
    puVar5 = &uStack_1e8;
    func_0x000100854cb0(puVar5);
  }
  else {
    func_0x000107c6157c(uVar10);
    uVar3 = uVar8;
    func_0x000107c61174(uVar8);
    uVar4 = uVar9;
    func_0x000107c61174(uVar9);
    func_0x000107c61174();
    FUN_103267170(&uStack_2a0,&uStack_1e8,0x112f4f640,&UNK_10dba2d20);
    FUN_103267170(auStack_78,&uStack_1e8,0x112f4f648,&UNK_10dba2d28);
    puVar5 = puVar2;
    FUN_10326ca04(puVar2,uVar10,uVar3,uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(uVar10);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      FUN_1032681b4(&uStack_2a0,0x112f4f640,&UNK_10dba2d20);
      FUN_1032681b4(auStack_78,0x112f4f648,&UNK_10dba2d28);
      goto LAB_103265aac;
    }
    uStack_1e8 = 0;
    puVar6 = &uStack_1e8;
    func_0x0001006c71a4(puVar6);
    func_0x000107c61574(puVar5);
    func_0x000100de1ee8();
    func_0x0001000c2068();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uVar10);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(puVar6);
    FUN_1032681b4(&uStack_2a0,0x112f4f640,&UNK_10dba2d20);
    FUN_1032681b4(auStack_78,0x112f4f648,&UNK_10dba2d28);
  }
  func_0x000107c5c248();
  func_0x000107c61180();
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107c6157c(uVar10);
    func_0x000107c61174(uVar8);
    func_0x000107c61174(uVar9);
    FUN_103267170(&uStack_2a0,&uStack_1e8,0x112f4f640,&UNK_10dba2d20);
    FUN_103267170(auStack_78,&uStack_1e8,0x112f4f648,&UNK_10dba2d28);
    func_0x000107c61174();
    puVar2 = param_1;
    FUN_10326ca04();
    if (puVar2 != (undefined8 *)0x0) {
      uStack_1e8 = 0;
      puVar6 = &uStack_1e8;
      func_0x0001006c71a4(puVar6);
      func_0x000107c61574(puVar2);
      func_0x000100de1ee8();
      func_0x0001000c2068();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c61574(uVar10);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar6);
      FUN_1032681b4(&uStack_2a0,0x112f4f640,&UNK_10dba2d20);
      FUN_1032681b4(auStack_78,0x112f4f648,&UNK_10dba2d28);
      goto LAB_103265c74;
    }
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61574(uVar10);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_1);
    FUN_1032681b4(&uStack_2a0,0x112f4f640,&UNK_10dba2d20);
    FUN_1032681b4(auStack_78,0x112f4f648,&UNK_10dba2d28);
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_1e8 = 0;
  puVar2 = &uStack_1e8;
  func_0x000100854cb0(puVar2);
LAB_103265c74:
  puVar6 = puVar2;
  func_0x0001006c733c(puVar2);
  uVar10 = 0x112f4d5c8;
  func_0x0001000285a8(0x112f4d5c8,&UNK_10db9f700);
  pcVar7 = FUN_103266a6c;
  func_0x0001000bfde0(FUN_103266a6c,0,uVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar6);
  return pcVar7;
}



/* Entry: 103265ec0; end: 103265efb;  */

void FUN_103265ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x0001000285a8(0x112f4f668,&UNK_10dba2d38);
  func_0x000100b658a4(uVar1);
  return;
}



/* Entry: 103265efc; end: 103266183;  */

code * FUN_103265efc(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = FUN_1032665e0;
  func_0x00010487de38(FUN_1032665e0,0);
  uVar8 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[4];
  puVar2 = &UNK_11062d510;
  func_0x000107c613fc(&UNK_11062d510,0x38,7);
  uVar6 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar9 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  FUN_103267170(&uStack_68,auStack_78,0x112f4f640,&UNK_10dba2d20);
  FUN_103267170(&uStack_70,auStack_78,0x112f4f648,&UNK_10dba2d28);
  uVar6 = 0x112f4f650;
  func_0x0001000285a8(0x112f4f650,&UNK_10dba2d30);
  pcVar5 = FUN_1032689f0;
  func_0x0001000bfde0(FUN_1032689f0,puVar2,uVar6);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar2);
  FUN_10326696c();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  uVar6 = 0;
  FUN_1032689b0(0,0x112f4d150,&PTR_PTR_1126acdc0);
  pcVar1 = FUN_103266204;
  func_0x0001000d5158(FUN_103266204,0,uVar6);
  func_0x000107c61574(puVar2);
  uVar6 = 0x112f4f660;
  FUN_103268144(0x112f4f660,0x112f4d150,&PTR_PTR_1126acdc0);
  func_0x0001000c2068();
  func_0x000107c61574(pcVar1);
  puVar2 = &UNK_11062d538;
  func_0x000107c613fc(&UNK_11062d538,0x38,7);
  uVar9 = *unaff_x20;
  uVar11 = unaff_x20[3];
  uVar10 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x28) = uVar11;
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  puVar7 = &UNK_11062d560;
  func_0x000107c613fc(&UNK_11062d560,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103266a40;
  *(undefined **)(puVar7 + 0x18) = puVar2;
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  FUN_103267170(&uStack_68,auStack_78,0x112f4f640,&UNK_10dba2d20);
  FUN_103267170(&uStack_70,auStack_78,0x112f4f648,&UNK_10dba2d28);
  uVar8 = 0x112f4b548;
  func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
  pcVar1 = FUN_103266a48;
  func_0x00010068b194(FUN_103266a48,puVar7,uVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  return pcVar1;
}



/* Entry: 103266184; end: 103266203;  */

void FUN_103266184(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  if (uVar4 >> 0x3e == 0) {
    uVar2 = 0;
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1032661c8;
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
    if (uVar3 == 0) {
      uVar2 = 0;
      goto LAB_1032661c8;
    }
  }
  if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103266204);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(uVar4 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar2 = 0;
    FUN_10326b53c(0,uVar4);
  }
LAB_1032661c8:
  *param_1 = uVar2;
  return;
}



/* Entry: 103266204; end: 103266273;  */

void FUN_103266204(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10dba2dc8;
  func_0x000107c614e0(&UNK_10dba2dc8);
  uVar2 = *param_2;
  uStack_38 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c614bc(param_1,&uStack_38,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103266274; end: 1032663f7;  */

void FUN_103266274(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long alStack_290 [37];
  undefined8 uStack_168;
  undefined8 uStack_160;
  
  if (param_1 == 0) {
    func_0x0001000285a8(0x112f4f6c8,&UNK_10dba2dc0);
    FUN_103214e3c(&uStack_168);
    func_0x000107c610b4(alStack_290,&uStack_168,0x128);
    func_0x000100854cb0(alStack_290);
  }
  else {
    uStack_168 = 0;
    uStack_160 = 0xe000000000000000;
    func_0x000107c61174();
    func_0x000107c602fc(0x2d);
    func_0x000107c6142c(uStack_160);
    uStack_168 = 0xd00000000000002b;
    uStack_160 = 0x800000010f132650;
    lVar1 = param_1;
    func_0x000107c3cf80();
    func_0x000107c61180();
    uVar2 = 0x112f4eb48;
    alStack_290[0] = lVar1;
    func_0x0001000285a8(0x112f4eb48,&UNK_10dba1750);
    func_0x000107c5fb20(alStack_290,uVar2);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uStack_160);
    lVar1 = param_1;
    FUN_103265838(param_1);
    puVar3 = &UNK_11062d628;
    func_0x000107c613fc(&UNK_11062d628,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    uVar2 = 0x112f4b548;
    func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
    func_0x0001000bfde0(0x103267168,puVar3,uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1032663f8; end: 1032665df;  */

void FUN_1032663f8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
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
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
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
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_80 = param_2[0x12];
  uStack_78 = (undefined1)param_2[0x13];
  uStack_6f = *(undefined8 *)((long)param_2 + 0xa1);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  lVar2 = param_3;
  lVar6 = param_3;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032665d8);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar7 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar4 = param_3;
  func_0x000107c5c26c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    *(long *)(lVar2 + 0x20) = lVar5;
    *(undefined8 *)(lVar2 + 0x28) = uVar7;
    FUN_103267170(&uStack_110,&uStack_238,0x112f4d5c8,&UNK_10db9f700);
    func_0x000107c3cf80();
    func_0x000107c61180();
    if (param_3 != 0) {
      uStack_198 = param_2[0xd];
      uStack_1a0 = param_2[0xc];
      uStack_188 = param_2[0xf];
      uStack_190 = param_2[0xe];
      uStack_178 = param_2[0x11];
      uStack_180 = param_2[0x10];
      uStack_170 = param_2[0x12];
      uStack_168 = (undefined1)param_2[0x13];
      uStack_15f = *(undefined8 *)((long)param_2 + 0xa1);
      uStack_167 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
      uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
      uStack_1d8 = param_2[5];
      uStack_1e0 = param_2[4];
      uStack_1c8 = param_2[7];
      uStack_1d0 = param_2[6];
      uStack_1b8 = param_2[9];
      uStack_1c0 = param_2[8];
      uStack_1a8 = param_2[0xb];
      uStack_1b0 = param_2[10];
      uStack_1f8 = param_2[1];
      uStack_200 = *param_2;
      uStack_1e8 = param_2[3];
      uStack_1f0 = param_2[2];
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_228 = 0x746e6f43696e696d;
      uStack_220 = 0xeb00000000747865;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0x100;
      uStack_120 = 0;
      uStack_118 = 1;
      lStack_218 = lVar3;
      lStack_210 = lVar6;
      lStack_208 = lVar2;
      lStack_140 = param_3;
      func_0x0001031e60ec(&uStack_238);
      func_0x000107c610b4(param_1,&uStack_238,0x128);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032665e0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032665dc);
  (*pcVar1)();
}



/* Entry: 1032665e0; end: 103266743;  */

uint FUN_1032665e0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  puVar2 = &UNK_10dba2e48;
  func_0x000107c614e0(&UNK_10dba2e48);
  if (lVar4 == 0) {
    func_0x000107c61574();
    lVar5 = 0;
  }
  else {
    func_0x000107c61434(lVar4);
    FUN_10326a398(lVar5,lVar4,uVar7,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar4);
  }
  puVar2 = &UNK_10dba2e48;
  func_0x000107c614e0(&UNK_10dba2e48);
  if (lVar1 == 0) {
    func_0x000107c61574();
    if (lVar5 == 0) {
LAB_103266720:
      uVar6 = 1;
      goto LAB_103266724;
    }
LAB_103266700:
    uVar6 = 0;
    lVar3 = lVar5;
  }
  else {
    func_0x000107c61434(lVar1);
    FUN_10326a398(lVar3,lVar1,uVar8,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar1);
    if (lVar5 == 0) {
      if (lVar3 == 0) goto LAB_103266720;
      uVar6 = 0;
    }
    else {
      if (lVar3 == 0) goto LAB_103266700;
      FUN_1032689b0(0,0x112f4d740,&PTR_PTR_1126caaf8);
      func_0x000107c61174(lVar5);
      lVar4 = lVar5;
      func_0x000107c60118();
      uVar6 = (uint)lVar4;
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar5);
      lVar3 = lVar5;
    }
  }
  func_0x000107c61170(lVar3);
LAB_103266724:
  return uVar6 & 1;
}



/* Entry: 103266744; end: 103266963;  */

void FUN_103266744(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_220 [16];
  undefined8 auStack_210 [8];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_168 = param_2[5];
  uStack_170 = param_2[4];
  uStack_158 = param_2[7];
  uStack_160 = param_2[6];
  uStack_148 = param_2[9];
  uStack_150 = param_2[8];
  uStack_138 = param_2[0xb];
  uStack_140 = param_2[10];
  uStack_188 = param_2[1];
  uStack_190 = *param_2;
  uStack_178 = param_2[3];
  uStack_180 = param_2[2];
  uStack_b0 = param_2[8];
  puVar2 = &UNK_10dba2e00;
  uStack_f0 = uStack_190;
  uStack_e8 = uStack_188;
  uStack_e0 = uStack_180;
  uStack_d8 = uStack_178;
  uStack_d0 = uStack_170;
  uStack_c8 = uStack_168;
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  func_0x000107c614e0(&UNK_10dba2e00);
  lStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  if (lStack_98 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_1c8 = param_2[1];
    uStack_1d0 = *param_2;
    uStack_1b8 = param_2[3];
    uStack_1c0 = param_2[2];
    uStack_1a8 = param_2[5];
    uStack_1b0 = param_2[4];
    uStack_198 = param_2[7];
    uStack_1a0 = param_2[6];
    uStack_130 = uStack_1d0;
    uStack_128 = uStack_1c8;
    uStack_120 = uStack_1c0;
    uStack_118 = uStack_1b8;
    uStack_110 = uStack_1b0;
    uStack_108 = uStack_1a8;
    uStack_100 = uStack_1a0;
    uStack_f8 = uStack_198;
    FUN_1031e7474(&uStack_1d0,auStack_210);
    puVar3 = &uStack_130;
    FUN_1031e7358(puVar3,&uStack_f0,puVar2);
    FUN_1032681b4(&uStack_a0,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar2);
    if (puVar3 != (undefined8 *)0x0) {
      uVar6 = param_3[3];
      puVar4 = &uStack_190;
      FUN_1032683c8(puVar4,uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        uVar5 = *param_3;
        uVar1 = param_3[1];
        uVar7 = param_3[2];
        auStack_210[0] = param_3[4];
        puVar2 = &UNK_11062d678;
        func_0x000107c613fc(&UNK_11062d678,0x48,7);
        uVar8 = *param_3;
        uVar10 = param_3[3];
        uVar9 = param_3[2];
        *(undefined8 *)(puVar2 + 0x18) = param_3[1];
        *(undefined8 *)(puVar2 + 0x10) = uVar8;
        *(undefined8 *)(puVar2 + 0x28) = uVar10;
        *(undefined8 *)(puVar2 + 0x20) = uVar9;
        *(undefined8 *)(puVar2 + 0x30) = param_3[4];
        *(undefined8 **)(puVar2 + 0x38) = puVar4;
        *(undefined8 **)(puVar2 + 0x40) = puVar3;
        func_0x000107c6157c(uVar6);
        func_0x000107c6157c(uVar5);
        func_0x000107c61174(uVar1);
        func_0x000107c61174(uVar7);
        FUN_103267170(auStack_210,auStack_220,0x112f4f648,&UNK_10dba2d28);
        func_0x000107c61434(puVar4);
        func_0x000107c61174(puVar3);
        uVar6 = 0x112d518a8;
        func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
        uVar5 = 0;
        func_0x0001001ca524(0,0,0x20,0,0,0,&UNK_10dba2e30,puVar2,uVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(uVar5);
        *param_1 = puVar4;
        return;
      }
      func_0x000107c61170(puVar3);
    }
  }
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 103266964; end: 10326696b;  */

void FUN_103266964(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_220 [16];
  undefined8 auStack_210 [8];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_168 = param_2[5];
  uStack_170 = param_2[4];
  uStack_158 = param_2[7];
  uStack_160 = param_2[6];
  uStack_148 = param_2[9];
  uStack_150 = param_2[8];
  uStack_138 = param_2[0xb];
  uStack_140 = param_2[10];
  uStack_188 = param_2[1];
  uStack_190 = *param_2;
  uStack_178 = param_2[3];
  uStack_180 = param_2[2];
  uStack_b0 = param_2[8];
  puVar2 = &UNK_10dba2e00;
  uStack_f0 = uStack_190;
  uStack_e8 = uStack_188;
  uStack_e0 = uStack_180;
  uStack_d8 = uStack_178;
  uStack_d0 = uStack_170;
  uStack_c8 = uStack_168;
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  func_0x000107c614e0(&UNK_10dba2e00);
  lStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  if (lStack_98 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_1c8 = param_2[1];
    uStack_1d0 = *param_2;
    uStack_1b8 = param_2[3];
    uStack_1c0 = param_2[2];
    uStack_1a8 = param_2[5];
    uStack_1b0 = param_2[4];
    uStack_198 = param_2[7];
    uStack_1a0 = param_2[6];
    uStack_130 = uStack_1d0;
    uStack_128 = uStack_1c8;
    uStack_120 = uStack_1c0;
    uStack_118 = uStack_1b8;
    uStack_110 = uStack_1b0;
    uStack_108 = uStack_1a8;
    uStack_100 = uStack_1a0;
    uStack_f8 = uStack_198;
    FUN_1031e7474(&uStack_1d0,auStack_210);
    puVar3 = &uStack_130;
    FUN_1031e7358(puVar3,&uStack_f0,puVar2);
    FUN_1032681b4(&uStack_a0,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar2);
    if (puVar3 != (undefined8 *)0x0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
      puVar4 = &uStack_190;
      FUN_1032683c8(puVar4,uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
        auStack_210[0] = *(undefined8 *)(unaff_x20 + 0x30);
        puVar2 = &UNK_11062d678;
        func_0x000107c613fc(&UNK_11062d678,0x48,7);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
        *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined8 *)(puVar2 + 0x10) = uVar8;
        *(undefined8 *)(puVar2 + 0x28) = uVar10;
        *(undefined8 *)(puVar2 + 0x20) = uVar9;
        *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
        *(undefined8 **)(puVar2 + 0x38) = puVar4;
        *(undefined8 **)(puVar2 + 0x40) = puVar3;
        func_0x000107c6157c(uVar6);
        func_0x000107c6157c(uVar5);
        func_0x000107c61174(uVar1);
        func_0x000107c61174(uVar7);
        FUN_103267170(auStack_210,auStack_220,0x112f4f648,&UNK_10dba2d28);
        func_0x000107c61434(puVar4);
        func_0x000107c61174(puVar3);
        uVar6 = 0x112d518a8;
        func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
        uVar5 = 0;
        func_0x0001001ca524(0,0,0x20,0,0,0,&UNK_10dba2e30,puVar2,uVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(uVar5);
        *param_1 = puVar4;
        return;
      }
      func_0x000107c61170(puVar3);
    }
  }
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 10326696c; end: 1032669f3;  */

void FUN_10326696c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4f658 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4f650;
  func_0x00010002969c(0x112f4f650,&UNK_10dba2d30);
  uVar2 = 0x112f4f660;
  FUN_103268144(0x112f4f660,0x112f4d150,&PTR_PTR_1126acdc0);
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112f4f658 = puVar3;
  return;
}



/* Entry: 1032669f4; end: 1032669fb;  */

void FUN_1032669f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = uVar4;
  FUN_103265838(uVar4,unaff_x20 + 0x10);
  puVar2 = &UNK_11062d650;
  func_0x000107c613fc(&UNK_11062d650,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  func_0x000107c61174(uVar4);
  uVar4 = 0x112f4b560;
  func_0x0001000285a8(0x112f4b560,&UNK_10db9b890);
  uVar3 = 0x1032681ac;
  func_0x0001000bfde0(0x1032681ac,puVar2,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 1032669fc; end: 103266a3f;  */

void FUN_1032669fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103266a40; end: 103266a47;  */

void FUN_103266a40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long alStack_290 [37];
  undefined8 uStack_168;
  undefined8 uStack_160;
  
  if (param_1 == 0) {
    func_0x0001000285a8(0x112f4f6c8,&UNK_10dba2dc0);
    FUN_103214e3c(&uStack_168);
    func_0x000107c610b4(alStack_290,&uStack_168,0x128);
    func_0x000100854cb0(alStack_290);
  }
  else {
    uStack_168 = 0;
    uStack_160 = 0xe000000000000000;
    func_0x000107c61174(param_1,unaff_x20 + 0x10);
    func_0x000107c602fc(0x2d);
    func_0x000107c6142c(uStack_160);
    uStack_168 = 0xd00000000000002b;
    uStack_160 = 0x800000010f132650;
    lVar1 = param_1;
    func_0x000107c3cf80();
    func_0x000107c61180();
    uVar2 = 0x112f4eb48;
    alStack_290[0] = lVar1;
    func_0x0001000285a8(0x112f4eb48,&UNK_10dba1750);
    func_0x000107c5fb20(alStack_290,uVar2);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uStack_160);
    lVar1 = param_1;
    FUN_103265838(param_1);
    puVar3 = &UNK_11062d628;
    func_0x000107c613fc(&UNK_11062d628,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    uVar2 = 0x112f4b548;
    func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
    func_0x0001000bfde0(0x103267168,puVar3,uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 103266a48; end: 103266a6b;  */

void FUN_103266a48(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 103266a6c; end: 103266ba3;  */

void FUN_103266a6c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lStack_260 = *param_2;
  lVar1 = param_2[1];
  if (lStack_260 == 0) {
    if (lVar1 == 0) {
      func_0x0001031e60c4(&lStack_100);
      goto LAB_103266b4c;
    }
    lStack_260 = lVar1;
    lVar2 = 0;
LAB_103266ac8:
    func_0x0001031e60f0(&lStack_260);
  }
  else {
    lVar2 = lStack_260;
    if (lVar1 == 0) goto LAB_103266ac8;
    lStack_258 = lVar1;
    FUN_103268184(&lStack_260);
  }
  lStack_128 = lStack_1d8;
  lStack_130 = lStack_1e0;
  uStack_118 = uStack_1c8;
  lStack_120 = lStack_1d0;
  uStack_10f = uStack_1bf;
  uStack_117 = uStack_1c7;
  uStack_110 = uStack_1c0;
  lStack_168 = lStack_218;
  lStack_170 = lStack_220;
  lStack_158 = lStack_208;
  lStack_160 = lStack_210;
  lStack_148 = lStack_1f8;
  lStack_150 = lStack_200;
  lStack_138 = lStack_1e8;
  lStack_140 = lStack_1f0;
  lStack_1a8 = lStack_258;
  lStack_1b0 = lStack_260;
  lStack_198 = lStack_248;
  lStack_1a0 = lStack_250;
  lStack_188 = lStack_238;
  lStack_190 = lStack_240;
  lStack_178 = lStack_228;
  lStack_180 = lStack_230;
  func_0x0001031e6100(&lStack_1b0);
  lStack_78 = lStack_128;
  lStack_80 = lStack_130;
  uStack_68 = uStack_118;
  lStack_70 = lStack_120;
  uStack_5f = uStack_10f;
  uStack_67 = uStack_117;
  uStack_60 = uStack_110;
  lStack_b8 = lStack_168;
  lStack_c0 = lStack_170;
  lStack_a8 = lStack_158;
  lStack_b0 = lStack_160;
  lStack_98 = lStack_148;
  lStack_a0 = lStack_150;
  lStack_88 = lStack_138;
  lStack_90 = lStack_140;
  lStack_f8 = lStack_1a8;
  lStack_100 = lStack_1b0;
  lStack_e8 = lStack_198;
  lStack_f0 = lStack_1a0;
  lStack_d8 = lStack_188;
  lStack_e0 = lStack_190;
  lStack_c8 = lStack_178;
  lStack_d0 = lStack_180;
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar1);
LAB_103266b4c:
  param_1[0x11] = lStack_78;
  param_1[0x10] = lStack_80;
  param_1[0x13] = CONCAT71(uStack_67,uStack_68);
  param_1[0x12] = lStack_70;
  *(undefined8 *)((long)param_1 + 0xa1) = uStack_5f;
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_60,uStack_67);
  param_1[9] = lStack_b8;
  param_1[8] = lStack_c0;
  param_1[0xb] = lStack_a8;
  param_1[10] = lStack_b0;
  param_1[0xd] = lStack_98;
  param_1[0xc] = lStack_a0;
  param_1[0xf] = lStack_88;
  param_1[0xe] = lStack_90;
  param_1[1] = lStack_f8;
  *param_1 = lStack_100;
  param_1[3] = lStack_e8;
  param_1[2] = lStack_f0;
  param_1[5] = lStack_d8;
  param_1[4] = lStack_e0;
  param_1[7] = lStack_c8;
  param_1[6] = lStack_d0;
  return;
}



/* Entry: 103266ba4; end: 103266bbf;  */

void FUN_103266ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103266bc0,0,0);
  return;
}



/* Entry: 103266bc0; end: 103266deb;  */

void FUN_103266bc0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x40) + 0x20) == 0) {
    **(undefined1 **)(unaff_x22 + 0x38) = 1;
  }
  else {
    uVar11 = *(ulong *)(unaff_x22 + 0x48);
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
    if (uVar11 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar11 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x48)) {
        uVar10 = *(ulong *)(unaff_x22 + 0x48);
      }
      func_0x000107c60480();
    }
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar10 != 0) {
      FUN_1032019bc(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103266dec);
        (*pcVar4)();
      }
      if ((uVar11 & 0xc000000000000001) == 0) {
        plVar12 = (long *)(*(long *)(unaff_x22 + 0x48) + 0x20);
        do {
          lVar7 = *plVar12;
          func_0x000107c61174();
          lVar8 = lVar7;
          func_0x000107c3cf80();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103266dcc);
            (*pcVar4)();
          }
          uVar11 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar11) {
            FUN_1032019bc(1 < *(ulong *)(puVar3 + 0x18),uVar11 + 1,1);
          }
          *(ulong *)(puVar3 + 0x10) = uVar11 + 1;
          *(long *)(puVar3 + uVar11 * 8 + 0x20) = lVar8;
          uVar10 = uVar10 - 1;
          plVar12 = plVar12 + 1;
        } while (uVar10 != 0);
      }
      else {
        uVar11 = 0;
        do {
          uVar5 = uVar11;
          FUN_10326b53c(uVar11,*(undefined8 *)(unaff_x22 + 0x48));
          uVar6 = uVar5;
          func_0x000107c3cf80();
          func_0x000107c61180();
          func_0x000107c615e8(uVar5);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103266dc8);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
            FUN_1032019bc(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
          }
          uVar11 = uVar11 + 1;
          *(ulong *)(puVar3 + 0x10) = uVar5 + 1;
          *(ulong *)(puVar3 + uVar5 * 8 + 0x20) = uVar6;
        } while (uVar10 != uVar11);
      }
    }
    puVar9 = *(undefined1 **)(unaff_x22 + 0x38);
    (**(code **)(lVar2 + 0x10))(puVar3,*(undefined8 *)(unaff_x22 + 0x50),0,uVar1,lVar2);
    func_0x000107c6142c(puVar3);
    *puVar9 = 0;
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000103266dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103266dec; end: 103266def;  */

code * FUN_103266dec(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = FUN_1032665e0;
  func_0x00010487de38(FUN_1032665e0,0);
  uVar8 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[4];
  puVar2 = &UNK_11062d510;
  func_0x000107c613fc(&UNK_11062d510,0x38,7);
  uVar6 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar9 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  FUN_103267170(&uStack_68,auStack_78,0x112f4f640,&UNK_10dba2d20);
  FUN_103267170(&uStack_70,auStack_78,0x112f4f648,&UNK_10dba2d28);
  uVar6 = 0x112f4f650;
  func_0x0001000285a8(0x112f4f650,&UNK_10dba2d30);
  pcVar5 = FUN_1032689f0;
  func_0x0001000bfde0(FUN_1032689f0,puVar2,uVar6);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar2);
  FUN_10326696c();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  uVar6 = 0;
  FUN_1032689b0(0,0x112f4d150,&PTR_PTR_1126acdc0);
  pcVar1 = FUN_103266204;
  func_0x0001000d5158(FUN_103266204,0,uVar6);
  func_0x000107c61574(puVar2);
  uVar6 = 0x112f4f660;
  FUN_103268144(0x112f4f660,0x112f4d150,&PTR_PTR_1126acdc0);
  func_0x0001000c2068();
  func_0x000107c61574(pcVar1);
  puVar2 = &UNK_11062d538;
  func_0x000107c613fc(&UNK_11062d538,0x38,7);
  uVar9 = *unaff_x20;
  uVar11 = unaff_x20[3];
  uVar10 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x28) = uVar11;
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  puVar7 = &UNK_11062d560;
  func_0x000107c613fc(&UNK_11062d560,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103266a40;
  *(undefined **)(puVar7 + 0x18) = puVar2;
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  FUN_103267170(&uStack_68,auStack_78,0x112f4f640,&UNK_10dba2d20);
  FUN_103267170(&uStack_70,auStack_78,0x112f4f648,&UNK_10dba2d28);
  uVar8 = 0x112f4b548;
  func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
  pcVar1 = FUN_103266a48;
  func_0x00010068b194(FUN_103266a48,puVar7,uVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  return pcVar1;
}



/* Entry: 103266df0; end: 103266e13;  */

void FUN_103266df0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103266e14();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103266e14; end: 103266e87;  */

void FUN_103266e14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba2d78;
  func_0x000107c61520(&DAT_10dba2d78,&UNK_11062d5f8);
  puRam0000000112f4f680 = puVar1;
  return;
}



/* Entry: 103266e88; end: 103266ecb;  */

void FUN_103266e88(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103266ecc; end: 103266ee7;  */

undefined ** FUN_103266ecc(void)

{
  return &PTR_DAT_11062dbb8;
}



/* Entry: 103266ee8; end: 103266f53;  */

long FUN_103266ee8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103266f54; end: 103266fbf;  */

undefined8 * FUN_103266f54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  func_0x000107c6157c();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  return param_1;
}



/* Entry: 103266fc0; end: 103267063;  */

undefined8 * FUN_103266fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103267064; end: 1032670c7;  */

undefined8 * FUN_103267064(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1032670c8; end: 10326716f;  */

int FUN_1032670c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103267170; end: 1032671b7;  */

undefined8 FUN_103267170(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1032671b8; end: 1032671eb;  */

void FUN_1032671b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1032671ec();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1032671ec; end: 103267327;  */

undefined *
FUN_1032671ec(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103267328);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1032689b0(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103267328; end: 10326741b;  */

ulong FUN_103267328(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  ulong uVar4;
  ulong auStack_88 [9];
  
  uVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(uVar4 + 0x28));
  uVar3 = param_1;
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(uVar4 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(int *)(*(long *)(uVar4 + 0x30) + uVar3 * 4) == (int)param_1) {
        uVar2 = *unaff_x20;
        func_0x000107c61558();
        auStack_88[0] = *unaff_x20;
        if ((uVar2 & 1) == 0) {
          FUN_10326762c();
        }
        uVar2 = auStack_88[0];
        uVar1 = *(uint *)(*(long *)(auStack_88[0] + 0x30) + uVar3 * 4);
        FUN_1032679c0(uVar3);
        *unaff_x20 = uVar2;
        return (ulong)uVar1;
      }
      uVar3 = uVar3 + 1 & ~uVar2;
    } while ((*(ulong *)(uVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  return 0x100000000;
}



/* Entry: 10326741c; end: 10326762b;  */

void FUN_10326741c(long param_1)

{
  long lVar1;
  uint uVar2;
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
  uVar5 = 0x112f4f6d0;
  func_0x0001000285a8(0x112f4f6d0,&UNK_10dba2e40);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1032675f4:
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103267628);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) goto LAB_1032675f4;
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
    uVar2 = *(uint *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar15 << 6) * 4);
    uVar14 = (ulong)uVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c6069c();
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10326762c);
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
    *(uint *)(*(long *)(lVar6 + 0x30) + uVar7 * 4) = uVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 10326762c; end: 10326776b;  */

void FUN_10326762c(void)

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
  
  func_0x0001000285a8(0x112f4f6d0,&UNK_10dba2e40);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10326776c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_10326774c;
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
      *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar8 * 4) =
           *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
    } while( true );
  }
LAB_10326774c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 10326776c; end: 1032679bf;  */

void FUN_10326776c(long param_1)

{
  long lVar1;
  uint uVar2;
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
  uVar5 = 0x112f4f6d0;
  func_0x0001000285a8(0x112f4f6d0,&UNK_10dba2e40);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_10326798c:
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1032679bc);
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
          goto LAB_10326798c;
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
    uVar2 = *(uint *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar16 << 6) * 4);
    uVar15 = (ulong)uVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c6069c();
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1032679c0);
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
    *(uint *)(*(long *)(lVar6 + 0x30) + uVar7 * 4) = uVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 1032679c0; end: 103267b4f;  */

void FUN_1032679c0(ulong param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_98 [72];
  
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x38;
  uVar5 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  uVar6 = 1L << (uVar9 & 0x3f);
  if ((uVar6 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar5 = ~uVar5;
    uVar7 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar5);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar6) != 0) {
      uVar6 = uVar7 + 1 & uVar5;
      do {
        uVar7 = (ulong)*(uint *)(*(long *)(lVar8 + 0x30) + uVar9 * 4);
        func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar8 + 0x28));
        func_0x000107c6069c();
        func_0x000107c606a8();
        uVar7 = uVar7 & uVar5;
        if ((long)param_1 < (long)uVar6) {
          if (uVar7 < uVar6) {
LAB_103267aa8:
            if ((long)param_1 < (long)uVar7) goto LAB_103267a4c;
          }
          puVar2 = (undefined4 *)(*(long *)(lVar8 + 0x30) + param_1 * 4);
          puVar3 = (undefined4 *)(*(long *)(lVar8 + 0x30) + uVar9 * 4);
          if ((param_1 != uVar9) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
            param_1 = uVar9;
          }
        }
        else if (uVar6 <= uVar7) goto LAB_103267aa8;
LAB_103267a4c:
        uVar9 = uVar9 + 1 & uVar5;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar5);
  }
  if (SBORROW8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103267b50);
    (*pcVar4)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
  *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
  return;
}



/* Entry: 103267b50; end: 103267d7b;  */

undefined8 FUN_103267b50(int *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *unaff_x20;
  ulong uVar3;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar3 = param_2;
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(int *)(*(long *)(lVar4 + 0x30) + uVar3 * 4) == (int)param_2) {
        uVar1 = 0;
        goto LAB_103267c20;
      }
      uVar3 = uVar3 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  func_0x000103267c3c(param_2,uVar3,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
LAB_103267c20:
  *param_1 = (int)param_2;
  return uVar1;
}



/* Entry: 103267d7c; end: 103268143;  */

void FUN_103267d7c(ulong *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uVar3 = param_2;
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103268128);
    (*pcVar2)();
  }
  uVar4 = uVar3;
  func_0x000107c3cfdc();
  func_0x000107c61170(uVar3);
  if ((int)uVar4 == 0x1c) {
    func_0x000107c3cf80();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326812c);
      (*pcVar2)();
    }
    uVar3 = param_2;
    func_0x000107c5b608();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c446fc();
      uVar5 = uVar3;
      if ((int)uVar4 != 0) {
        uVar4 = uVar3;
        func_0x000107c3dab0();
        func_0x000107c61180();
        if (uVar4 != 0) {
          uVar5 = uVar4;
          func_0x000107c40500();
          func_0x000107c61180();
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103268130);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c5faec();
          uVar10 = param_3;
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(param_3);
          uVar6 = uVar6 & 0xffffffffffff;
          if ((param_3 & 0x2000000000000000) != 0) {
            uVar6 = param_3 >> 0x38 & 0xf;
          }
          uVar7 = uVar3;
          uVar5 = uVar4;
          if (uVar6 != 0) {
            func_0x000107c4271c();
            func_0x000107c61180();
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103268134);
              (*pcVar2)();
            }
            uVar6 = uVar5;
            func_0x000107c5ee30();
            func_0x000107c61170(uVar5);
            uVar1 = (uint)(uVar10 >> 0x20);
            uVar12 = uVar1 >> 0x1e;
            uVar7 = uVar4;
            if (uVar1 >> 0x1e < 2) {
              if (uVar12 == 0) {
                uVar8 = uVar10;
                func_0x00010006c090(uVar6);
                uVar5 = uVar3;
                if ((uVar10 & 0xff000000000000) == 0) goto LAB_103267f9c;
              }
              else {
                func_0x00010006c090(uVar6);
                lVar13 = (long)(int)uVar6;
                lVar14 = (long)uVar6 >> 0x20;
                uVar8 = uVar10;
LAB_103267efc:
                uVar5 = uVar3;
                if (lVar13 == lVar14) goto LAB_103267f9c;
              }
              uVar5 = uVar4;
              func_0x000107c42718();
              func_0x000107c61180();
              if (uVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103268138);
                (*pcVar2)();
              }
              uVar6 = uVar5;
              func_0x000107c5ee30();
              func_0x000107c61170(uVar5);
              uVar1 = (uint)(uVar8 >> 0x20);
              uVar12 = uVar1 >> 0x1e;
              if (uVar1 >> 0x1e < 2) {
                if (uVar12 != 0) {
                  func_0x00010006c090(uVar6);
                  lVar13 = (long)(int)uVar6;
                  lVar14 = (long)uVar6 >> 0x20;
                  uVar10 = uVar8;
                  goto LAB_103267f90;
                }
                uVar10 = uVar8;
                func_0x00010006c090(uVar6);
                uVar5 = uVar3;
                if ((uVar8 & 0xff000000000000) == 0) goto LAB_103267f9c;
              }
              else {
                if (uVar12 != 2) goto LAB_103267f74;
                lVar13 = *(long *)(uVar6 + 0x10);
                lVar14 = *(long *)(uVar6 + 0x18);
                func_0x00010006c090(uVar6);
                uVar10 = uVar8;
LAB_103267f90:
                uVar5 = uVar3;
                if (lVar13 == lVar14) goto LAB_103267f9c;
              }
              uVar5 = uVar4;
              func_0x000107c40500();
              func_0x000107c61180();
              if (uVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10326813c);
                (*pcVar2)();
              }
              uVar6 = uVar5;
              func_0x000107c5faec();
              uVar7 = uVar10;
              func_0x000107c61170(uVar5);
              uVar5 = uVar4;
              func_0x000107c4271c();
              func_0x000107c61180();
              if (uVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103268140);
                (*pcVar2)();
              }
              uVar8 = uVar5;
              func_0x000107c5ee30();
              uVar11 = uVar7;
              func_0x000107c61170(uVar5);
              uVar5 = uVar4;
              func_0x000107c42718();
              func_0x000107c61180();
              if (uVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103268144);
                (*pcVar2)();
              }
              uVar9 = uVar5;
              func_0x000107c5ee30();
              func_0x000107c61170(uVar4);
              func_0x000107c61170(uVar3);
              func_0x000107c61170(uVar5);
              uStack_280 = uVar6;
              uStack_278 = uVar10;
              uStack_270 = uVar8;
              uStack_268 = uVar7;
              uStack_260 = uVar9;
              uStack_258 = uVar11;
              func_0x000103268198(&uStack_280);
              uStack_148 = uStack_1f8;
              uStack_150 = uStack_200;
              uStack_138 = uStack_1e8;
              uStack_140 = uStack_1f0;
              uStack_12f = uStack_1df;
              uStack_137 = uStack_1e7;
              uStack_130 = uStack_1e0;
              uStack_188 = uStack_238;
              uStack_190 = uStack_240;
              uStack_178 = uStack_228;
              uStack_180 = uStack_230;
              uStack_168 = uStack_218;
              uStack_170 = uStack_220;
              uStack_158 = uStack_208;
              uStack_160 = uStack_210;
              uStack_1c8 = uStack_278;
              uStack_1d0 = uStack_280;
              uStack_1b8 = uStack_268;
              uStack_1c0 = uStack_270;
              uStack_1a8 = uStack_258;
              uStack_1b0 = uStack_260;
              uStack_198 = uStack_248;
              uStack_1a0 = uStack_250;
              func_0x0001031e6100(&uStack_1d0);
              uStack_98 = uStack_148;
              uStack_a0 = uStack_150;
              uStack_90 = uStack_140;
              uStack_88 = uStack_138;
              uStack_7f = uStack_12f;
              uStack_87 = uStack_137;
              uStack_80 = uStack_130;
              uStack_d8 = uStack_188;
              uStack_e0 = uStack_190;
              uStack_c8 = uStack_178;
              uStack_d0 = uStack_180;
              uStack_b8 = uStack_168;
              uStack_c0 = uStack_170;
              uStack_a8 = uStack_158;
              uStack_b0 = uStack_160;
              uStack_118 = uStack_1c8;
              uStack_120 = uStack_1d0;
              uStack_108 = uStack_1b8;
              uStack_110 = uStack_1c0;
              uStack_f8 = uStack_1a8;
              uStack_100 = uStack_1b0;
              uStack_e8 = uStack_198;
              uStack_f0 = uStack_1a0;
              goto LAB_103267fb0;
            }
            if (uVar12 == 2) {
              lVar13 = *(long *)(uVar6 + 0x10);
              lVar14 = *(long *)(uVar6 + 0x18);
              func_0x00010006c090(uVar6);
              uVar8 = uVar10;
              goto LAB_103267efc;
            }
LAB_103267f74:
            func_0x00010006c090(uVar6);
            uVar5 = uVar3;
          }
LAB_103267f9c:
          func_0x000107c61170(uVar7);
        }
      }
      func_0x000107c61170(uVar5);
    }
  }
  func_0x0001031e60c4(&uStack_120);
LAB_103267fb0:
  param_1[0x11] = uStack_98;
  param_1[0x10] = uStack_a0;
  param_1[0x13] = CONCAT71(uStack_87,uStack_88);
  param_1[0x12] = uStack_90;
  *(undefined8 *)((long)param_1 + 0xa1) = uStack_7f;
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_80,uStack_87);
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xd] = uStack_b8;
  param_1[0xc] = uStack_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  return;
}



/* Entry: 103268144; end: 103268183;  */

void FUN_103268144(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1032689b0(0xff);
    puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
    func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 103268184; end: 1032681b3;  */

void FUN_103268184(long param_1)

{
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 1 | 0x20;
  return;
}



/* Entry: 1032681b4; end: 1032681f3;  */

undefined8 FUN_1032681b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1032681f4; end: 1032683c7;  */

undefined * FUN_1032681f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_4c [4];
  undefined *puStack_48;
  
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_2 != 0) {
    func_0x0001000d224c(&puStack_48);
    puVar1 = puStack_48;
    func_0x000107c4ab80(param_1);
    func_0x000108437a30(param_1);
    puStack_48 = puVar3;
    uVar2 = param_1;
    func_0x000108437ce4();
    if ((int)uVar2 == 0) {
      puVar3 = puVar1;
      func_0x000107c5ad40();
      if ((int)puVar3 != 0) {
        FUN_103267b50(auStack_4c,0xe);
        FUN_103267b50(auStack_4c,0x66);
      }
      puVar3 = puVar1;
      func_0x000107c5ad84();
      if ((int)puVar3 != 0) {
        FUN_103267b50(auStack_4c,0x1c);
        FUN_103267b50(auStack_4c,0x14);
        FUN_103267b50(auStack_4c,0x1a);
      }
      func_0x000107c5def0(param_1);
      puVar3 = puVar1;
      func_0x000107c5ad74();
      if ((int)puVar3 != 0) {
        FUN_103267b50(auStack_4c,0x1c);
        FUN_103267b50(auStack_4c,0x14);
      }
      puVar3 = puVar1;
      func_0x000107c5ad9c();
      if ((int)puVar3 != 0) {
        FUN_103267b50(auStack_4c,0x43);
      }
      puVar3 = puVar1;
      func_0x000107c5ad90();
      if ((int)puVar3 != 0) {
        FUN_103267b50(auStack_4c,0x55);
      }
      func_0x000107c5def0(param_1);
      puVar3 = puVar1;
      func_0x000107c5ad70();
      if (((int)puVar3 != 0) && (*(long *)(puStack_48 + 0x10) != 0)) {
        FUN_103267328(0x1c);
        FUN_103267328(0x14);
      }
      func_0x000107c615e8(puVar1);
      puVar3 = puStack_48;
    }
    else {
      func_0x000107c615e8(puVar1);
    }
  }
  return puVar3;
}



/* Entry: 1032683c8; end: 1032688f7;  */

undefined * FUN_1032683c8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_198;
  undefined *puStack_190;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_100 = param_1[8];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  puVar3 = &UNK_10dba2e00;
  func_0x000107c614e0(&UNK_10dba2e00);
  lStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_178 = param_1[1];
    uStack_180 = *param_1;
    uStack_168 = param_1[3];
    uStack_170 = param_1[2];
    uStack_158 = param_1[5];
    uStack_160 = param_1[4];
    uStack_148 = param_1[7];
    uStack_150 = param_1[6];
    uStack_f0 = uStack_180;
    uStack_e8 = uStack_178;
    uStack_e0 = uStack_170;
    uStack_d8 = uStack_168;
    uStack_d0 = uStack_160;
    uStack_c8 = uStack_158;
    uStack_c0 = uStack_150;
    uStack_b8 = uStack_148;
    FUN_1031e7474(&uStack_180,&uStack_1e0);
    puVar4 = &uStack_f0;
    FUN_1031e7358(puVar4,&uStack_140,puVar3);
    func_0x000107c61574(puVar3);
    FUN_1032681b4(&uStack_b0,0x112f4b698,&UNK_10db9ae60);
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = param_1[9];
      FUN_10326bd48(uVar5,param_1[10],param_1[0xb]);
      if (uVar5 != 0) {
        if (uVar5 >> 0x3e == 0) {
          uVar13 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar13 = uVar5 & 0xffffffffffffff8;
          if ((uVar5 & 0x8000000000000000) != 0) {
            uVar13 = uVar5;
          }
          func_0x000107c60480();
        }
        if (uVar13 != 0) {
          uStack_1e0 = 0;
          uStack_1d8 = 0xe000000000000000;
          func_0x000107c602fc(0x1f);
          func_0x000107c6142c(uStack_1d8);
          uStack_1e0 = 0xd00000000000001d;
          uStack_1d8 = 0x800000010f1326b0;
          if (uVar5 >> 0x3e == 0) {
            uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar15 = uVar5 & 0xffffffffffffff8;
            if ((uVar5 & 0x8000000000000000) != 0) {
              uVar15 = uVar5;
            }
            func_0x000107c60480();
          }
          puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uVar15 != 0) {
            puStack_190 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000100403514(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
            if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1032688f4);
              (*pcVar1)();
            }
            uVar16 = 0;
            do {
              puVar3 = puStack_190;
              if ((uVar5 & 0xc000000000000001) == 0) {
                uVar12 = *(ulong *)(uVar5 + uVar16 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar12 = uVar16;
                FUN_10326b53c();
              }
              uVar6 = uVar12;
              func_0x000107c3cf80();
              func_0x000107c61180();
              uVar7 = 0x112f4eb48;
              uStack_198 = uVar6;
              func_0x0001000285a8(0x112f4eb48,&UNK_10dba1750);
              puVar8 = &uStack_198;
              func_0x000107c5fb20();
              func_0x000107c61170(uVar12);
              uVar12 = *(ulong *)(puVar3 + 0x10);
              puStack_190 = puVar3;
              if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar12) {
                func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar12 + 1,1);
              }
              uVar16 = uVar16 + 1;
              *(ulong *)(puStack_190 + 0x10) = uVar12 + 1;
              *(ulong **)(puStack_190 + uVar12 * 0x10 + 0x20) = puVar8;
              *(undefined8 *)(puStack_190 + uVar12 * 0x10 + 0x28) = uVar7;
              puVar3 = puStack_190;
            } while (uVar15 != uVar16);
          }
          puVar11 = PTR___sSSN_11034da80;
          func_0x000107c5fc58(puVar3,PTR___sSSN_11034da80);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar3);
          func_0x000107c6142c(puVar11);
          func_0x000107c6142c(uStack_1d8);
        }
        puVar9 = puVar4;
        FUN_1032681f4(puVar4,param_2);
        if (puVar9[2] != 0) {
          uStack_1e0 = 0;
          uStack_1d8 = 0xe000000000000000;
          func_0x000107c602fc(0x13);
          func_0x000107c6142c(uStack_1d8);
          uStack_1e0 = 0xd000000000000011;
          uStack_1d8 = 0x800000010f1326d0;
          puVar10 = puVar9;
          FUN_103265578(puVar9);
          puVar3 = PTR___sSSN_11034da80;
          func_0x000107c5fc58();
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar10);
          func_0x000107c6142c(puVar3);
          func_0x000107c6142c(uStack_1d8);
        }
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar13 != 0) {
          uVar15 = 0;
          do {
            if ((uVar5 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1032688d8);
                (*pcVar1)();
              }
              uVar16 = *(ulong *)(uVar5 + 0x20 + uVar15 * 8);
              func_0x000107c61174();
            }
            else {
              uVar16 = uVar15;
              FUN_10326b53c(uVar15,uVar5);
            }
            bVar2 = SCARRY8(uVar15,1);
            uVar15 = uVar15 + 1;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1032688d4);
              (*pcVar1)();
            }
            uVar12 = uVar16;
            func_0x000107c3cf80();
            func_0x000107c61180();
            if (uVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1032688f8);
              (*pcVar1)();
            }
            uVar6 = uVar12;
            func_0x000107c3cfdc();
            func_0x000107c61170(uVar12);
            if (puVar9[2] != 0) {
              func_0x000107c6068c(&uStack_1e0,puVar9[5]);
              uVar12 = uVar6;
              func_0x000107c6069c();
              func_0x000107c606a8();
              uVar14 = -1L << ((ulong)*(byte *)(puVar9 + 4) & 0x3f);
              uVar12 = uVar12 & (uVar14 ^ 0xffffffffffffffff);
              if (((ulong)puVar9[(uVar12 >> 6) + 7] >> (uVar12 & 0x3f) & 1) != 0) {
                do {
                  if (*(int *)(puVar9[6] + uVar12 * 4) == (int)uVar6) {
                    puVar11 = puVar3;
                    func_0x000107c61558();
                    puStack_190 = puVar3;
                    if (((ulong)puVar11 & 1) == 0) {
                      FUN_1032671b8(0,*(long *)(puVar3 + 0x10) + 1,1);
                    }
                    uVar12 = *(ulong *)(puStack_190 + 0x10);
                    if (*(ulong *)(puStack_190 + 0x18) >> 1 <= uVar12) {
                      FUN_1032671b8(1 < *(ulong *)(puStack_190 + 0x18),uVar12 + 1,1);
                    }
                    *(ulong *)(puStack_190 + 0x10) = uVar12 + 1;
                    *(ulong *)(puStack_190 + uVar12 * 8 + 0x20) = uVar16;
                    puVar3 = puStack_190;
                    goto joined_r0x000103268854;
                  }
                  uVar12 = uVar12 + 1 & ~uVar14;
                } while (((ulong)puVar9[(uVar12 >> 6) + 7] >> (uVar12 & 0x3f) & 1) != 0);
              }
            }
            func_0x000107c61170(uVar16);
joined_r0x000103268854:
          } while (uVar15 != uVar13);
        }
        func_0x000107c6142c(puVar9);
        func_0x000107c61170(puVar4);
        func_0x000107c6142c(uVar5);
        return puVar3;
      }
      func_0x000107c61170(puVar4);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1032688f8; end: 10326895f;  */

void FUN_1032688f8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103268960;
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
  plVar3[7] = param_1;
  plVar3[8] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103266bc0,0,0);
  return;
}



/* Entry: 103268960; end: 10326899b;  */

void FUN_103268960(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103268998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10326899c; end: 1032689af;  */

void FUN_10326899c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1032689b0; end: 1032689ef;  */

void FUN_1032689b0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1032689f0; end: 1032689f3;  */

void FUN_1032689f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_220 [16];
  undefined8 auStack_210 [8];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_168 = param_2[5];
  uStack_170 = param_2[4];
  uStack_158 = param_2[7];
  uStack_160 = param_2[6];
  uStack_148 = param_2[9];
  uStack_150 = param_2[8];
  uStack_138 = param_2[0xb];
  uStack_140 = param_2[10];
  uStack_188 = param_2[1];
  uStack_190 = *param_2;
  uStack_178 = param_2[3];
  uStack_180 = param_2[2];
  uStack_b0 = param_2[8];
  puVar2 = &UNK_10dba2e00;
  uStack_f0 = uStack_190;
  uStack_e8 = uStack_188;
  uStack_e0 = uStack_180;
  uStack_d8 = uStack_178;
  uStack_d0 = uStack_170;
  uStack_c8 = uStack_168;
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  func_0x000107c614e0(&UNK_10dba2e00);
  lStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  if (lStack_98 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_1c8 = param_2[1];
    uStack_1d0 = *param_2;
    uStack_1b8 = param_2[3];
    uStack_1c0 = param_2[2];
    uStack_1a8 = param_2[5];
    uStack_1b0 = param_2[4];
    uStack_198 = param_2[7];
    uStack_1a0 = param_2[6];
    uStack_130 = uStack_1d0;
    uStack_128 = uStack_1c8;
    uStack_120 = uStack_1c0;
    uStack_118 = uStack_1b8;
    uStack_110 = uStack_1b0;
    uStack_108 = uStack_1a8;
    uStack_100 = uStack_1a0;
    uStack_f8 = uStack_198;
    FUN_1031e7474(&uStack_1d0,auStack_210);
    puVar3 = &uStack_130;
    FUN_1031e7358(puVar3,&uStack_f0,puVar2);
    FUN_1032681b4(&uStack_a0,0x112f4b698,&UNK_10db9ae60);
    func_0x000107c61574(puVar2);
    if (puVar3 != (undefined8 *)0x0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
      puVar4 = &uStack_190;
      FUN_1032683c8(puVar4,uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
        auStack_210[0] = *(undefined8 *)(unaff_x20 + 0x30);
        puVar2 = &UNK_11062d678;
        func_0x000107c613fc(&UNK_11062d678,0x48,7);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
        *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined8 *)(puVar2 + 0x10) = uVar8;
        *(undefined8 *)(puVar2 + 0x28) = uVar10;
        *(undefined8 *)(puVar2 + 0x20) = uVar9;
        *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
        *(undefined8 **)(puVar2 + 0x38) = puVar4;
        *(undefined8 **)(puVar2 + 0x40) = puVar3;
        func_0x000107c6157c(uVar6);
        func_0x000107c6157c(uVar5);
        func_0x000107c61174(uVar1);
        func_0x000107c61174(uVar7);
        FUN_103267170(auStack_210,auStack_220,0x112f4f648,&UNK_10dba2d28);
        func_0x000107c61434(puVar4);
        func_0x000107c61174(puVar3);
        uVar6 = 0x112d518a8;
        func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
        uVar5 = 0;
        func_0x0001001ca524(0,0,0x20,0,0,0,&UNK_10dba2e30,puVar2,uVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(uVar5);
        *param_1 = puVar4;
        return;
      }
      func_0x000107c61170(puVar3);
    }
  }
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 1032689f4; end: 103268a33;  */

void FUN_1032689f4(void)

{
  FUN_103268a34();
  return;
}



/* Entry: 103268a34; end: 103268bc7;  */

void FUN_103268a34(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte in_w6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  code *in_stack_00000018;
  code *in_stack_00000020;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
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
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined8 uStack_1af;
  long lStack_1a0;
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
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  
  if (param_2 == 0) {
    (*in_stack_00000020)(&lStack_1a0);
    func_0x000107c610b4(param_1,&lStack_1a0,0x128);
  }
  else {
    param_1[2] = param_3;
    param_1[3] = param_4;
    func_0x000107c61174();
    func_0x000107c61434();
    if (in_w6 < 2) {
      func_0x00010326b640();
    }
    else if (in_w6 == 2) {
      func_0x00010326b650();
    }
    else {
      func_0x00010326b664();
    }
    lStack_250 = param_2;
    func_0x0001031e60f0(&lStack_250);
    uStack_118 = uStack_1c8;
    uStack_120 = uStack_1d0;
    uStack_108 = uStack_1b8;
    uStack_110 = uStack_1c0;
    uStack_ff = uStack_1af;
    uStack_107 = uStack_1b7;
    uStack_100 = uStack_1b0;
    uStack_158 = uStack_208;
    uStack_160 = uStack_210;
    uStack_148 = uStack_1f8;
    uStack_150 = uStack_200;
    uStack_138 = uStack_1e8;
    uStack_140 = uStack_1f0;
    uStack_128 = uStack_1d8;
    uStack_130 = uStack_1e0;
    uStack_198 = uStack_248;
    lStack_1a0 = lStack_250;
    uStack_188 = uStack_238;
    uStack_190 = uStack_240;
    uStack_178 = uStack_228;
    uStack_180 = uStack_230;
    uStack_168 = uStack_218;
    uStack_170 = uStack_220;
    func_0x0001031e6100(&lStack_1a0);
    param_1[0x16] = uStack_128;
    param_1[0x15] = uStack_130;
    param_1[0x18] = uStack_118;
    param_1[0x17] = uStack_120;
    param_1[0x1a] = CONCAT71(uStack_107,uStack_108);
    param_1[0x19] = uStack_110;
    *(undefined8 *)((long)param_1 + 0xd9) = uStack_ff;
    *(ulong *)((long)param_1 + 0xd1) = CONCAT17(uStack_100,uStack_107);
    param_1[0xe] = uStack_168;
    param_1[0xd] = uStack_170;
    param_1[0x10] = uStack_158;
    param_1[0xf] = uStack_160;
    param_1[0x12] = uStack_148;
    param_1[0x11] = uStack_150;
    param_1[0x14] = uStack_138;
    param_1[0x13] = uStack_140;
    param_1[8] = uStack_198;
    param_1[7] = lStack_1a0;
    param_1[10] = uStack_188;
    param_1[9] = uStack_190;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = param_4;
    param_1[5] = param_3;
    param_1[6] = 0;
    param_1[0xc] = uStack_178;
    param_1[0xb] = uStack_180;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = in_x7;
    param_1[0x20] = in_stack_00000000;
    param_1[0x21] = in_stack_00000008;
    *(undefined1 *)(param_1 + 0x22) = in_stack_00000010;
    *(undefined1 *)((long)param_1 + 0x111) = 1;
    param_1[0x23] = 0;
    param_1[0x24] = 1;
    (*in_stack_00000018)(param_1);
    FUN_10320d790(in_x7,in_stack_00000000,in_stack_00000008,in_stack_00000010);
  }
  return;
}



/* Entry: 103268bc8; end: 103268be3;  */

undefined8 FUN_103268bc8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    if (((uVar3 != *param_2) || (uVar1 != uVar2)) &&
       (func_0x000107c605b8(uVar3,uVar1,*param_2,uVar2,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar4 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if (uVar5 != 0) {
    func_0x00010326a624(0,0x112f4c5b0,&PTR_PTR_1126b14b8);
    func_0x000107c61174(uVar5);
    func_0x000107c61174();
    uVar3 = uVar4;
    func_0x000107c60118();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103268be4; end: 103268c2b;  */

void FUN_103268be4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x00010326c18c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0d958;
  uVar2 = param_3;
  func_0x000107c5faec();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = ppuVar1;
  param_1[3] = uVar2;
  return;
}



/* Entry: 103268c2c; end: 103268cdf;  */

long FUN_103268c2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  lVar5 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  uVar6 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  uVar6 = 0x112f4c580;
  func_0x0001000285a8(0x112f4c580,&UNK_10db9d0b0);
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  *(undefined ***)(lVar5 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x48) = uVar2;
  *(undefined8 *)(lVar5 + 0x50) = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return lVar5;
}



/* Entry: 103268ce0; end: 103269157;  */

/* WARNING: Removing unreachable block (ram,0x000103269154) */

void FUN_103268ce0(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuVar15;
  uint uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar14 = *(long *)(param_3 + 0x70);
  if (lVar14 != 0) {
    uVar10 = *param_2;
    uVar2 = param_2[1];
    uVar12 = param_2[2];
    uVar3 = param_2[3];
    uVar1 = param_2[4];
    uVar8 = param_2[5];
    uVar19 = param_2[6];
    uVar18 = param_2[7];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 != 0) {
      puVar4 = &UNK_10dba2f40;
      func_0x000107c614e0(&UNK_10dba2f40);
      if (uVar2 == 0) {
        func_0x000107c615e8(lVar14);
        func_0x000107c61574(puVar4);
      }
      else {
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar3);
        uVar5 = uVar10;
        FUN_10326a4b8(uVar10,uVar2,uVar12,uVar3,uVar1,puVar4,0x112d7a520,&PTR_PTR_1126b2390);
        func_0x000107c61574(puVar4);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar2);
        if (uVar5 == 0) {
          func_0x000107c615e8(lVar14);
        }
        else {
          uVar6 = uVar5;
          func_0x000107c5c018();
          func_0x000107c61180();
          if (uVar6 == 0) {
            func_0x000107c615e8(lVar14);
          }
          else {
            uVar7 = uVar6;
            func_0x000107c4a1f4();
            if ((uVar7 & 1) == 0) {
              uVar7 = uVar8;
              FUN_10326bb9c(uVar8,uVar19,uVar18);
              if (((uVar7 & 1) != 0) && (FUN_10326b8c0(uVar8,uVar19,uVar18), uVar8 != 0)) {
                if (uVar8 >> 0x3e == 0) {
                  uVar18 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
                  func_0x000107c6142c();
                }
                else {
                  uVar18 = uVar8;
                  if (-1 < (long)uVar8) {
                    uVar18 = uVar8 & 0xffffffffffffff8;
                  }
                  func_0x000107c60480();
                  func_0x000107c6142c(uVar8);
                }
                if (uVar18 == 0) {
                  uVar8 = uVar6;
                  func_0x000107c5c084();
                  lVar9 = lVar14;
                  func_0x000107c4ded0();
                  uVar16 = (uint)lVar9;
                  if (uVar8 == 0) {
                    uVar8 = uVar6;
                    func_0x000107c49e10();
                    uVar16 = (uVar16 | (uint)uVar8) & 1;
                  }
                  if (uVar16 != 0) {
                    uVar8 = uVar6;
                    func_0x000107c5c05c();
                    func_0x000107c61180();
                    if (uVar8 != 0) {
                      uVar18 = uVar8;
                      func_0x000107c5faec();
                      func_0x000107c61170(uVar8);
                      if (((uVar18 != *(ulong *)(param_3 + 0x60)) ||
                          (uVar19 != *(ulong *)(param_3 + 0x68))) &&
                         (uVar8 = uVar18,
                         func_0x000107c605b8(uVar18,uVar19,*(ulong *)(param_3 + 0x60),
                                             *(ulong *)(param_3 + 0x68),0), (uVar8 & 1) == 0)) {
                        puVar4 = &UNK_10dba2f60;
                        func_0x000107c614e0(&UNK_10dba2f60);
                        func_0x000107c61434(uVar2);
                        func_0x000107c61434(uVar3);
                        uVar8 = uVar2;
                        FUN_10326a4b8(uVar10,uVar2,uVar12,uVar3,uVar1,puVar4,0x112d55e50,
                                      &PTR__OBJC_CLASS___NSDictionary_1126ae670);
                        func_0x000107c61574(puVar4);
                        func_0x000107c6142c(uVar3);
                        func_0x000107c6142c(uVar2);
                        if (uVar10 == 0) {
                          uStack_88 = 0;
                          ppuStack_90 = (undefined **)0x0;
                          lStack_78 = 0;
                          uStack_80 = 0;
LAB_1032690f4:
                          func_0x00010326a5e4(&ppuStack_90,0x112d387f8,&UNK_10d902650);
                          ppuVar17 = (undefined **)0x0;
                        }
                        else {
                          ppuVar17 = &PTR____CFConstantStringClassReference_110ebeb58;
                          func_0x000107c5faec();
                          func_0x000107c61170(&PTR____CFConstantStringClassReference_110ebeb58);
                          ppuStack_90 = ppuVar17;
                          uStack_88 = uVar8;
                          func_0x000107c61434(uVar8);
                          pppuVar11 = &ppuStack_90;
                          func_0x000107c6061c(pppuVar11,PTR___sSSN_11034da80);
                          uVar12 = uVar10;
                          func_0x000107c3ac74();
                          func_0x000107c61180();
                          func_0x000107c61170(uVar10);
                          func_0x000107c615e8(pppuVar11);
                          if (uVar12 == 0) {
                            func_0x000107c6142c(uVar8);
                            uStack_a8 = 0;
                            ppuStack_b0 = (undefined **)0x0;
                            lStack_98 = 0;
                            uStack_a0 = 0;
                          }
                          else {
                            func_0x000107c60234(&ppuStack_b0,uVar12);
                            func_0x000107c615e8(uVar12);
                            func_0x000107c6142c(uVar8);
                          }
                          uStack_88 = uStack_a8;
                          ppuStack_90 = ppuStack_b0;
                          lStack_78 = lStack_98;
                          uStack_80 = uStack_a0;
                          if (lStack_98 == 0) goto LAB_1032690f4;
                          uVar13 = 0;
                          func_0x00010326a624(0,0x112d4ed88,&PTR_PTR_1126b15c8);
                          pppuVar11 = &ppuStack_b0;
                          func_0x000107c6147c(pppuVar11,&ppuStack_90,PTR___sypN_11034f1a8 + 8,uVar13
                                              ,6);
                          ppuVar17 = ppuStack_b0;
                          if ((int)pppuVar11 == 0) {
                            ppuVar17 = (undefined **)0x0;
                          }
                        }
                        func_0x000107c61174();
                        ppuVar15 = ppuVar17;
                        func_0x000107c3e9e8();
                        func_0x000107c61180();
                        func_0x000107c61170(ppuVar17);
                        func_0x000107c61170(ppuVar17);
                        func_0x000107c615e8(lVar14);
                        func_0x000107c61170(uVar6);
                        func_0x000107c61170(uVar5);
                        goto LAB_103268e88;
                      }
                      func_0x000107c6142c(uVar19);
                    }
                  }
                  func_0x000107c615e8(lVar14);
                  func_0x000107c61170(uVar6);
                  goto LAB_103268e78;
                }
              }
              func_0x000107c615e8(lVar14);
              func_0x000107c61170(uVar5);
              uVar5 = uVar6;
            }
            else {
              func_0x000107c615e8(lVar14);
              func_0x000107c61170(uVar5);
              uVar5 = uVar6;
            }
          }
LAB_103268e78:
          func_0x000107c61170(uVar5);
        }
      }
    }
  }
  uVar18 = 0;
  ppuVar15 = (undefined **)0x0;
  uVar19 = 1;
LAB_103268e88:
  *param_1 = uVar18;
  param_1[1] = uVar19;
  param_1[2] = (ulong)ppuVar15;
  return;
}



/* Entry: 103269158; end: 10326918b;  */

undefined8 FUN_103269158(undefined8 param_1,undefined8 param_2)

{
  FUN_103269ad0(param_2,param_1,&UNK_11062d740);
  return param_2;
}



/* Entry: 10326918c; end: 103269193;  */

/* WARNING: Removing unreachable block (ram,0x000103269154) */

void FUN_10326918c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined **ppuVar15;
  uint uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar14 = *(long *)(unaff_x20 + 0x80);
  if (lVar14 != 0) {
    uVar10 = *param_2;
    uVar2 = param_2[1];
    uVar12 = param_2[2];
    uVar3 = param_2[3];
    uVar1 = param_2[4];
    uVar8 = param_2[5];
    uVar19 = param_2[6];
    uVar18 = param_2[7];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 != 0) {
      puVar4 = &UNK_10dba2f40;
      func_0x000107c614e0(&UNK_10dba2f40);
      if (uVar2 == 0) {
        func_0x000107c615e8(lVar14);
        func_0x000107c61574(puVar4);
      }
      else {
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar3);
        uVar5 = uVar10;
        FUN_10326a4b8(uVar10,uVar2,uVar12,uVar3,uVar1,puVar4,0x112d7a520,&PTR_PTR_1126b2390);
        func_0x000107c61574(puVar4);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar2);
        if (uVar5 == 0) {
          func_0x000107c615e8(lVar14);
        }
        else {
          uVar6 = uVar5;
          func_0x000107c5c018();
          func_0x000107c61180();
          if (uVar6 == 0) {
            func_0x000107c615e8(lVar14);
          }
          else {
            uVar7 = uVar6;
            func_0x000107c4a1f4();
            if ((uVar7 & 1) == 0) {
              uVar7 = uVar8;
              FUN_10326bb9c(uVar8,uVar19,uVar18);
              if (((uVar7 & 1) != 0) && (FUN_10326b8c0(uVar8,uVar19,uVar18), uVar8 != 0)) {
                if (uVar8 >> 0x3e == 0) {
                  uVar18 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
                  func_0x000107c6142c();
                }
                else {
                  uVar18 = uVar8;
                  if (-1 < (long)uVar8) {
                    uVar18 = uVar8 & 0xffffffffffffff8;
                  }
                  func_0x000107c60480();
                  func_0x000107c6142c(uVar8);
                }
                if (uVar18 == 0) {
                  uVar8 = uVar6;
                  func_0x000107c5c084();
                  lVar9 = lVar14;
                  func_0x000107c4ded0();
                  uVar16 = (uint)lVar9;
                  if (uVar8 == 0) {
                    uVar8 = uVar6;
                    func_0x000107c49e10();
                    uVar16 = (uVar16 | (uint)uVar8) & 1;
                  }
                  if (uVar16 != 0) {
                    uVar8 = uVar6;
                    func_0x000107c5c05c();
                    func_0x000107c61180();
                    if (uVar8 != 0) {
                      uVar18 = uVar8;
                      func_0x000107c5faec();
                      func_0x000107c61170(uVar8);
                      if (((uVar18 != *(ulong *)(unaff_x20 + 0x70)) ||
                          (uVar19 != *(ulong *)(unaff_x20 + 0x78))) &&
                         (uVar8 = uVar18,
                         func_0x000107c605b8(uVar18,uVar19,*(ulong *)(unaff_x20 + 0x70),
                                             *(ulong *)(unaff_x20 + 0x78),0), (uVar8 & 1) == 0)) {
                        puVar4 = &UNK_10dba2f60;
                        func_0x000107c614e0(&UNK_10dba2f60);
                        func_0x000107c61434(uVar2);
                        func_0x000107c61434(uVar3);
                        uVar8 = uVar2;
                        FUN_10326a4b8(uVar10,uVar2,uVar12,uVar3,uVar1,puVar4,0x112d55e50,
                                      &PTR__OBJC_CLASS___NSDictionary_1126ae670);
                        func_0x000107c61574(puVar4);
                        func_0x000107c6142c(uVar3);
                        func_0x000107c6142c(uVar2);
                        if (uVar10 == 0) {
                          uStack_88 = 0;
                          ppuStack_90 = (undefined **)0x0;
                          lStack_78 = 0;
                          uStack_80 = 0;
LAB_1032690f4:
                          func_0x00010326a5e4(&ppuStack_90,0x112d387f8,&UNK_10d902650);
                          ppuVar17 = (undefined **)0x0;
                        }
                        else {
                          ppuVar17 = &PTR____CFConstantStringClassReference_110ebeb58;
                          func_0x000107c5faec();
                          func_0x000107c61170(&PTR____CFConstantStringClassReference_110ebeb58);
                          ppuStack_90 = ppuVar17;
                          uStack_88 = uVar8;
                          func_0x000107c61434(uVar8);
                          pppuVar11 = &ppuStack_90;
                          func_0x000107c6061c(pppuVar11,PTR___sSSN_11034da80);
                          uVar12 = uVar10;
                          func_0x000107c3ac74();
                          func_0x000107c61180();
                          func_0x000107c61170(uVar10);
                          func_0x000107c615e8(pppuVar11);
                          if (uVar12 == 0) {
                            func_0x000107c6142c(uVar8);
                            uStack_a8 = 0;
                            ppuStack_b0 = (undefined **)0x0;
                            lStack_98 = 0;
                            uStack_a0 = 0;
                          }
                          else {
                            func_0x000107c60234(&ppuStack_b0,uVar12);
                            func_0x000107c615e8(uVar12);
                            func_0x000107c6142c(uVar8);
                          }
                          uStack_88 = uStack_a8;
                          ppuStack_90 = ppuStack_b0;
                          lStack_78 = lStack_98;
                          uStack_80 = uStack_a0;
                          if (lStack_98 == 0) goto LAB_1032690f4;
                          uVar13 = 0;
                          func_0x00010326a624(0,0x112d4ed88,&PTR_PTR_1126b15c8);
                          pppuVar11 = &ppuStack_b0;
                          func_0x000107c6147c(pppuVar11,&ppuStack_90,PTR___sypN_11034f1a8 + 8,uVar13
                                              ,6);
                          ppuVar17 = ppuStack_b0;
                          if ((int)pppuVar11 == 0) {
                            ppuVar17 = (undefined **)0x0;
                          }
                        }
                        func_0x000107c61174();
                        ppuVar15 = ppuVar17;
                        func_0x000107c3e9e8();
                        func_0x000107c61180();
                        func_0x000107c61170(ppuVar17);
                        func_0x000107c61170(ppuVar17);
                        func_0x000107c615e8(lVar14);
                        func_0x000107c61170(uVar6);
                        func_0x000107c61170(uVar5);
                        goto LAB_103268e88;
                      }
                      func_0x000107c6142c(uVar19);
                    }
                  }
                  func_0x000107c615e8(lVar14);
                  func_0x000107c61170(uVar6);
                  goto LAB_103268e78;
                }
              }
              func_0x000107c615e8(lVar14);
              func_0x000107c61170(uVar5);
              uVar5 = uVar6;
            }
            else {
              func_0x000107c615e8(lVar14);
              func_0x000107c61170(uVar5);
              uVar5 = uVar6;
            }
          }
LAB_103268e78:
          func_0x000107c61170(uVar5);
        }
      }
    }
  }
  uVar18 = 0;
  ppuVar15 = (undefined **)0x0;
  uVar19 = 1;
LAB_103268e88:
  *param_1 = uVar18;
  param_1[1] = uVar19;
  param_1[2] = (ulong)ppuVar15;
  return;
}



/* Entry: 103269194; end: 103269277;  */

uint FUN_103269194(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1[1];
  lVar1 = param_2[1];
  if (lVar2 == 1) {
    if (lVar1 != 1) {
      func_0x000107c61434(lVar1);
LAB_103269218:
      if (lVar1 != 0) {
        uVar3 = 0;
        goto LAB_103269234;
      }
    }
LAB_103269224:
    uVar3 = 1;
  }
  else {
    lVar4 = *param_2;
    lVar5 = *param_1;
    func_0x000107c61434(lVar2);
    if (lVar1 == 1) {
      if (lVar2 == 0) goto LAB_103269224;
LAB_10326922c:
      uVar3 = 0;
      lVar1 = lVar2;
    }
    else {
      func_0x000107c61434(lVar1);
      if (lVar2 == 0) goto LAB_103269218;
      if (lVar1 == 0) goto LAB_10326922c;
      if ((lVar5 == lVar4) && (lVar2 == lVar1)) {
        func_0x000107c6142c(lVar2);
        uVar3 = 1;
      }
      else {
        func_0x000107c605b8(lVar5,lVar2,lVar4,lVar1,0);
        uVar3 = (uint)lVar5;
        func_0x000107c6142c(lVar2);
      }
    }
LAB_103269234:
    func_0x000107c6142c(lVar1);
  }
  return uVar3 & 1;
}



/* Entry: 103269278; end: 1032693fb;  */

void FUN_103269278(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_2a0 [296];
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
  
  uVar3 = param_1[1];
  if (uVar3 < 2) {
    func_0x0001000285a8(0x112f4f740,&UNK_10dba2f38);
    func_0x000100d3ecc8(&uStack_178);
    func_0x000107c610b4(auStack_2a0,&uStack_178,0x128);
    func_0x000100854cb0(auStack_2a0);
  }
  else {
    uVar4 = param_1[2];
    uVar5 = *param_1;
    FUN_10326a2f4(uVar5,uVar3,uVar4);
    func_0x000107c61434(uVar3);
    uVar1 = uVar5;
    FUN_103261ff8(uVar5,uVar3);
    FUN_103269158(param_2,&uStack_178);
    puVar2 = &UNK_11062d8c8;
    func_0x000107c613fc(&UNK_11062d8c8,0xb0,7);
    *(undefined8 *)(puVar2 + 0x80) = uStack_130;
    *(undefined8 *)(puVar2 + 0x78) = uStack_138;
    *(undefined8 *)(puVar2 + 0x90) = uStack_120;
    *(undefined8 *)(puVar2 + 0x88) = uStack_128;
    *(undefined8 *)(puVar2 + 0xa0) = uStack_110;
    *(undefined8 *)(puVar2 + 0x98) = uStack_118;
    *(undefined8 *)(puVar2 + 0x40) = uStack_170;
    *(undefined8 *)(puVar2 + 0x38) = uStack_178;
    *(undefined8 *)(puVar2 + 0x50) = uStack_160;
    *(undefined8 *)(puVar2 + 0x48) = uStack_168;
    *(undefined8 *)(puVar2 + 0x60) = uStack_150;
    *(undefined8 *)(puVar2 + 0x58) = uStack_158;
    *(undefined8 *)(puVar2 + 0x10) = uVar5;
    *(ulong *)(puVar2 + 0x18) = uVar3;
    *(undefined8 *)(puVar2 + 0x20) = uVar5;
    *(ulong *)(puVar2 + 0x28) = uVar3;
    *(undefined8 *)(puVar2 + 0x30) = uVar4;
    *(undefined8 *)(puVar2 + 0xa8) = uStack_108;
    *(undefined8 *)(puVar2 + 0x70) = uStack_140;
    *(undefined8 *)(puVar2 + 0x68) = uStack_148;
    func_0x000107c61174(uVar4);
    func_0x000107c61434(uVar3);
    uVar5 = 0x112f4f6e0;
    func_0x0001000285a8(0x112f4f6e0,&UNK_10dba2e70);
    func_0x00010068b194(FUN_10326a328,puVar2,uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1032693fc; end: 103269403;  */

void FUN_1032693fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_2a0 [296];
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
  
  uVar3 = param_1[1];
  if (uVar3 < 2) {
    func_0x0001000285a8(0x112f4f740,&UNK_10dba2f38);
    func_0x000100d3ecc8(&uStack_178);
    func_0x000107c610b4(auStack_2a0,&uStack_178,0x128);
    func_0x000100854cb0(auStack_2a0);
  }
  else {
    uVar4 = param_1[2];
    uVar5 = *param_1;
    FUN_10326a2f4(uVar5,uVar3,uVar4);
    func_0x000107c61434(uVar3);
    uVar1 = uVar5;
    FUN_103261ff8(uVar5,uVar3);
    FUN_103269158(unaff_x20 + 0x10,&uStack_178);
    puVar2 = &UNK_11062d8c8;
    func_0x000107c613fc(&UNK_11062d8c8,0xb0,7);
    *(undefined8 *)(puVar2 + 0x80) = uStack_130;
    *(undefined8 *)(puVar2 + 0x78) = uStack_138;
    *(undefined8 *)(puVar2 + 0x90) = uStack_120;
    *(undefined8 *)(puVar2 + 0x88) = uStack_128;
    *(undefined8 *)(puVar2 + 0xa0) = uStack_110;
    *(undefined8 *)(puVar2 + 0x98) = uStack_118;
    *(undefined8 *)(puVar2 + 0x40) = uStack_170;
    *(undefined8 *)(puVar2 + 0x38) = uStack_178;
    *(undefined8 *)(puVar2 + 0x50) = uStack_160;
    *(undefined8 *)(puVar2 + 0x48) = uStack_168;
    *(undefined8 *)(puVar2 + 0x60) = uStack_150;
    *(undefined8 *)(puVar2 + 0x58) = uStack_158;
    *(undefined8 *)(puVar2 + 0x10) = uVar5;
    *(ulong *)(puVar2 + 0x18) = uVar3;
    *(undefined8 *)(puVar2 + 0x20) = uVar5;
    *(ulong *)(puVar2 + 0x28) = uVar3;
    *(undefined8 *)(puVar2 + 0x30) = uVar4;
    *(undefined8 *)(puVar2 + 0xa8) = uStack_108;
    *(undefined8 *)(puVar2 + 0x70) = uStack_140;
    *(undefined8 *)(puVar2 + 0x68) = uStack_148;
    func_0x000107c61174(uVar4);
    func_0x000107c61434(uVar3);
    uVar5 = 0x112f4f6e0;
    func_0x0001000285a8(0x112f4f6e0,&UNK_10dba2e70);
    func_0x00010068b194(FUN_10326a328,puVar2,uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 103269404; end: 1032697eb;  */

void FUN_103269404(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_217;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
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
  undefined8 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  bVar1 = *param_1;
  puVar3 = PTR_PTR_1126b5b00;
  uVar4 = param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
LAB_1032694b4:
      func_0x0001000285a8(0x112f4f740,&UNK_10dba2f38);
      func_0x000100d3ecc8(&uStack_190);
      func_0x000107c610b4(&uStack_2b8,&uStack_190,0x128);
      func_0x000100854cb0(&uStack_2b8);
      return;
    }
    lStack_2c0 = *param_7;
    lStack_2c8 = param_7[1];
    lStack_2d0 = param_7[2];
    lVar8 = param_7[3];
    lVar9 = param_7[0xb];
    func_0x000107c61168();
    uVar2 = param_6;
    func_0x000107c61174(param_6);
    func_0x000107c61438(param_3,2);
    func_0x000107c61174(uVar2);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c43970();
    bVar7 = false;
    uVar6 = 1;
  }
  else {
    if (bVar1 == 2) goto LAB_1032694b4;
    lStack_2c0 = *param_7;
    lStack_2c8 = param_7[1];
    lStack_2d0 = param_7[2];
    lVar8 = param_7[3];
    lVar9 = param_7[0xb];
    func_0x000107c61168();
    uVar6 = 2;
    func_0x000107c61438(param_3,2);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c5da2c();
    param_6 = 0;
    bVar7 = true;
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  FUN_10326158c(lStack_2c0,lStack_2c8,lStack_2d0,lVar8,lVar9,param_2,param_3,param_6,uVar6);
  if (lStack_2c0 == 0) {
    uStack_180 = 0x726574736f70;
    uStack_178 = 0xe600000000000000;
    if (bVar7) {
      func_0x00010326b650();
    }
    else {
      func_0x00010326b640();
    }
    func_0x0001000285a8(0x112f4f740,&UNK_10dba2f38);
    func_0x0001031e60c4(&uStack_2b8);
    uStack_e0 = uStack_240;
    uStack_e8 = uStack_248;
    uStack_d0 = uStack_230;
    uStack_d8 = uStack_238;
    uStack_c8 = uStack_228;
    uStack_b7 = uStack_217;
    uStack_120 = uStack_280;
    uStack_128 = uStack_288;
    uStack_110 = uStack_270;
    uStack_118 = uStack_278;
    uStack_100 = uStack_260;
    uStack_108 = uStack_268;
    uStack_f0 = uStack_250;
    uStack_f8 = uStack_258;
    uStack_150 = uStack_2b0;
    uStack_158 = uStack_2b8;
    uStack_140 = uStack_2a0;
    uStack_148 = uStack_2a8;
    uStack_130 = uStack_290;
    uStack_138 = uStack_298;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_a0 = 3;
    uStack_a8 = 0;
    uStack_160 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x100;
    uStack_78 = 0;
    uStack_70 = 1;
    lStack_170 = lStack_2c0;
    lStack_168 = lStack_2c8;
    puStack_98 = puVar3;
    func_0x00010326a33c(&uStack_190);
    FUN_10320d790(puVar3,0,0,0);
    func_0x000100854cb0(&uStack_190);
    FUN_103261930(param_2,param_3,param_6,uVar6);
    FUN_103261930(param_2,param_3,param_6,uVar6);
    FUN_1031e1b78(puVar3,0,0,0);
    FUN_10326a5e4(&uStack_190,0x112f4f6e0,&UNK_10dba2e70);
  }
  else {
    puVar5 = &UNK_11062d8f0;
    func_0x000107c613fc(&UNK_11062d8f0,0x59,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x726574736f70;
    *(undefined8 *)(puVar5 + 0x18) = 0xe600000000000000;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    *(undefined8 *)(puVar5 + 0x28) = param_3;
    *(undefined8 *)(puVar5 + 0x30) = param_6;
    puVar5[0x38] = uVar6;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    *(undefined8 *)(puVar5 + 0x50) = 0;
    *(undefined **)(puVar5 + 0x40) = puVar3;
    puVar5[0x58] = 0;
    func_0x0001032618ac(param_2,param_3,param_6,uVar6);
    FUN_10320d790(puVar3,0,0,0);
    uVar4 = 0x112f4f6e0;
    func_0x0001000285a8(0x112f4f6e0,&UNK_10dba2e70);
    func_0x0001000bfde0(FUN_10326a340,puVar5,uVar4);
    FUN_103261930(param_2,param_3,param_6,uVar6);
    FUN_103261930(param_2,param_3,param_6,uVar6);
    func_0x000107c61574(lStack_2c0);
    func_0x000107c61574(puVar5);
    FUN_1031e1b78(puVar3,0,0,0);
  }
  return;
}



/* Entry: 1032697ec; end: 10326995f;  */

code * FUN_1032697ec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_103269158();
  puVar1 = &UNK_11062d878;
  func_0x000107c613fc(&UNK_11062d878,0x88,7);
  *(undefined8 *)(puVar1 + 0x58) = uStack_60;
  *(undefined8 *)(puVar1 + 0x50) = uStack_68;
  *(undefined8 *)(puVar1 + 0x68) = uStack_50;
  *(undefined8 *)(puVar1 + 0x60) = uStack_58;
  *(undefined8 *)(puVar1 + 0x78) = uStack_40;
  *(undefined8 *)(puVar1 + 0x70) = uStack_48;
  *(undefined8 *)(puVar1 + 0x80) = uStack_38;
  *(undefined8 *)(puVar1 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar1 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar1 + 0x28) = uStack_90;
  *(undefined8 *)(puVar1 + 0x20) = uStack_98;
  *(undefined8 *)(puVar1 + 0x38) = uStack_80;
  *(undefined8 *)(puVar1 + 0x30) = uStack_88;
  *(undefined8 *)(puVar1 + 0x48) = uStack_70;
  *(undefined8 *)(puVar1 + 0x40) = uStack_78;
  uVar2 = 0x112f4f6d8;
  func_0x0001000285a8(0x112f4f6d8,&UNK_10dba2e68);
  uVar3 = 0x10326a670;
  func_0x0001000bfde0(0x10326a670,puVar1,uVar2);
  func_0x000107c61574(puVar1);
  pcVar4 = FUN_103269194;
  func_0x00010487de38(FUN_103269194,0);
  func_0x000107c61574(uVar3);
  FUN_103269158();
  puVar1 = &UNK_11062d8a0;
  func_0x000107c613fc(&UNK_11062d8a0,0x88,7);
  *(undefined8 *)(puVar1 + 0x58) = uStack_60;
  *(undefined8 *)(puVar1 + 0x50) = uStack_68;
  *(undefined8 *)(puVar1 + 0x68) = uStack_50;
  *(undefined8 *)(puVar1 + 0x60) = uStack_58;
  *(undefined8 *)(puVar1 + 0x78) = uStack_40;
  *(undefined8 *)(puVar1 + 0x70) = uStack_48;
  *(undefined8 *)(puVar1 + 0x80) = uStack_38;
  *(undefined8 *)(puVar1 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar1 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar1 + 0x28) = uStack_90;
  *(undefined8 *)(puVar1 + 0x20) = uStack_98;
  *(undefined8 *)(puVar1 + 0x38) = uStack_80;
  *(undefined8 *)(puVar1 + 0x30) = uStack_88;
  *(undefined8 *)(puVar1 + 0x48) = uStack_70;
  *(undefined8 *)(puVar1 + 0x40) = uStack_78;
  uVar2 = 0x112f4f6e0;
  func_0x0001000285a8(0x112f4f6e0,&UNK_10dba2e70);
  pcVar5 = FUN_10326a664;
  func_0x00010068b194(FUN_10326a664,puVar1,uVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar1);
  return pcVar5;
}



/* Entry: 103269960; end: 103269983;  */

void FUN_103269960(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103269984();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103269984; end: 1032699c3;  */

void FUN_103269984(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba2eb0;
  func_0x000107c61520(&DAT_10dba2eb0,&UNK_11062d740);
  puRam0000000112f4f6e8 = puVar1;
  return;
}



/* Entry: 1032699c4; end: 1032699c7;  */

void FUN_1032699c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4f6f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4f6f8;
  func_0x00010002969c(0x112f4f6f8,&UNK_10dba2ea8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4f6f0 = puVar2;
  return;
}



/* Entry: 1032699c8; end: 103269a17;  */

void FUN_1032699c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4f6f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4f6f8;
  func_0x00010002969c(0x112f4f6f8,&UNK_10dba2ea8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4f6f0 = puVar2;
  return;
}



/* Entry: 103269a18; end: 103269a2f;  */

undefined ** FUN_103269a18(void)

{
  return &PTR_DAT_11062d6a8;
}



/* Entry: 103269a30; end: 103269a67;  */

undefined * FUN_103269a30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001031f577c();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103269a68; end: 103269acf;  */

/* WARNING: Possible PIC construction at 0x000103269a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103269a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103269a88) */
/* WARNING: Removing unreachable block (ram,0x000103269a98) */

void FUN_103269a68(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 103269ad0; end: 103269b9f;  */

undefined8 * FUN_103269ad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  lVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar7;
  pcVar6 = (code *)**(undefined8 **)(lVar7 + -8);
  func_0x000107c6157c();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar5);
  (*pcVar6)(param_1 + 6,param_2 + 6,lVar7);
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  func_0x000107c615f0();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 103269ba0; end: 103269cb7;  */

undefined8 * FUN_103269ba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  func_0x000100083374(param_1 + 6,param_2 + 6);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103269cb8; end: 103269d7b;  */

undefined8 * FUN_103269cb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c615e8(uVar1);
  func_0x0001000834e4(param_1 + 6);
  uVar1 = param_2[6];
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c615e8(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103269d7c; end: 103269e2f;  */

int FUN_103269d7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xf] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103269e30; end: 103269e93;  */

/* WARNING: Possible PIC construction at 0x000103269e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103269e48) */

void FUN_103269e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103269e94; end: 103269eff;  */

undefined8 * FUN_103269e94(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103269f00; end: 103269f43;  */

undefined8 * FUN_103269f00(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103269f44; end: 103269fdb;  */

int FUN_103269f44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103269fdc; end: 10326a03f;  */

void FUN_103269fdc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}


