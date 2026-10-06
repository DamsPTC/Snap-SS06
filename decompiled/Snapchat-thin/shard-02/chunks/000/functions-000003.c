/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10167cce8; end: 10167cd93;  */

void FUN_10167cce8(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c41018();
  *(undefined8 *)(unaff_x20 + 0x108) = param_1;
  if (!SCARRY8(*(long *)(unaff_x20 + 0x90),1)) {
    *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + 1;
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61428(unaff_x20 + 0x98,auStack_58,0x21,0);
      func_0x000107c61434(param_3);
      func_0x000100403b00(auStack_40,param_2,param_3);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(uStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10167cd94);
  (*pcVar2)();
}



/* Entry: 10167cd94; end: 10167d18b;  */

undefined * FUN_10167cd94(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_1c8 [176];
  undefined *puStack_118;
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
  
  if (*(char *)(unaff_x20 + 0xd8) == '\x01') {
    func_0x000107c61428(unaff_x20 + 0x128,&uStack_110,0x20,0);
    lVar6 = *(long *)(unaff_x20 + 0x128);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      func_0x000100029284();
      if ((param_2 & 1) != 0) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x38) + param_1 * 0x10);
        lVar2 = *plVar1;
        lVar8 = plVar1[1];
        func_0x000107c61438(lVar2,2);
        func_0x000107c61434(lVar8);
        func_0x000107c614a8(&uStack_110);
        func_0x000107c6142c(lVar6);
        FUN_10167da40(lVar2,lVar8);
        if (lVar2 == 0) {
          return (undefined *)0x0;
        }
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 == 0) {
          func_0x000107c6142c(lVar2);
          return PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_10167dad4(0,lVar6,0);
        puVar7 = puStack_118;
        uVar4 = 0;
        func_0x000104273684(0);
        lVar8 = 0x20;
        do {
          puVar5 = (undefined8 *)(lVar2 + lVar8);
          uStack_108 = puVar5[1];
          uStack_110 = *puVar5;
          uStack_f8 = puVar5[3];
          uStack_100 = puVar5[2];
          uStack_e8 = puVar5[5];
          uStack_f0 = puVar5[4];
          uStack_d8 = puVar5[7];
          uStack_e0 = puVar5[6];
          uStack_c8 = puVar5[9];
          uStack_d0 = puVar5[8];
          uStack_b8 = puVar5[0xb];
          uStack_c0 = puVar5[10];
          uStack_a8 = puVar5[0xd];
          uStack_b0 = puVar5[0xc];
          uStack_98 = puVar5[0xf];
          uStack_a0 = puVar5[0xe];
          uStack_88 = puVar5[0x11];
          uStack_90 = puVar5[0x10];
          uStack_80 = puVar5[0x12];
          uStack_6f = *(undefined8 *)((long)puVar5 + 0xa1);
          uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar5 + 0x99) >> 0x38);
          uStack_78 = (undefined1)puVar5[0x13];
          uStack_77 = (undefined7)((ulong)puVar5[0x13] >> 8);
          func_0x000107c610f8(uVar4);
          func_0x00010167cc20(&uStack_110,auStack_1c8);
          puVar5 = &uStack_110;
          func_0x000104272a44();
          uVar3 = *(ulong *)(puVar7 + 0x10);
          puStack_118 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
            FUN_10167dad4(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
          }
          puVar7 = puStack_118;
          *(ulong *)(puStack_118 + 0x10) = uVar3 + 1;
          *(undefined8 **)(puStack_118 + uVar3 * 8 + 0x20) = puVar5;
          lVar8 = lVar8 + 0xb0;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        func_0x000107c6142c(lVar2);
        return puVar7;
      }
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c614a8(&uStack_110);
  }
  return (undefined *)0x0;
}



/* Entry: 10167d18c; end: 10167d333;  */

void FUN_10167d18c(undefined8 param_1,byte param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_58 [24];
  
  puVar2 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c41018();
  *(undefined8 *)(unaff_x20 + 0x100) = param_1;
  *(byte *)(unaff_x20 + 0xb8) = param_2;
  func_0x000107c41018(puVar2);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(unaff_x20 + 0x60) = param_1;
    *(undefined1 *)(unaff_x20 + 0x68) = 0;
  }
  else {
    *(undefined8 *)(unaff_x20 + 0x50) = param_1;
    *(undefined1 *)(unaff_x20 + 0x58) = 0;
    if (*(char *)(unaff_x20 + 0xd8) == '\x01' && param_4 != 0) {
      func_0x000107c61428(unaff_x20 + 0x128,auStack_58,0x20,0);
      lVar8 = *(long *)(unaff_x20 + 0x128);
      lVar9 = *(long *)(lVar8 + 0x10);
      func_0x000107c61434(param_4);
      if (lVar9 != 0) {
        func_0x000107c61434(lVar8);
        lVar9 = param_3;
        uVar6 = param_4;
        func_0x000100029284();
        if ((uVar6 & 1) != 0) {
          puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar9 * 0x10);
          uVar4 = *puVar1;
          uVar3 = puVar1[1];
          func_0x000107c61434(uVar3);
          func_0x000107c61434(uVar4);
          func_0x000107c614a8(auStack_58);
          func_0x000107c6142c(param_4);
          func_0x000107c6142c(uVar3);
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(lVar8);
          return;
        }
        func_0x000107c6142c(lVar8);
      }
      func_0x000107c614a8(auStack_58);
      uVar3 = *(undefined8 *)(unaff_x20 + 0xd0);
      FUN_10167d3b0(uVar3);
      uVar4 = uVar3;
      FUN_10167d46c(*(undefined8 *)(unaff_x20 + 0xe0));
      func_0x000107c61428(unaff_x20 + 0x128,auStack_58,0x21,0);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x128);
      func_0x000107c61558(uVar5);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x128);
      *(undefined8 *)(unaff_x20 + 0x128) = 0x8000000000000000;
      func_0x00010167ad90(uVar3,uVar4,param_3,param_4,uVar5);
      func_0x000107c6142c(param_4);
      *(undefined8 *)(unaff_x20 + 0x128) = uVar7;
      func_0x000107c614a8(auStack_58);
    }
  }
  return;
}



/* Entry: 10167d334; end: 10167d3af;  */

void FUN_10167d334(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
      *(ulong *)(unaff_x20 + 0xa8) = param_1;
      *(ulong *)(unaff_x20 + 0xb0) = param_2;
      func_0x000107c61434(param_2);
      func_0x000107c6142c(uVar2);
    }
  }
  dVar3 = *(double *)(unaff_x20 + 0x48);
  if (dVar3 == 0.0) {
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c41018();
    *(double *)(unaff_x20 + 0x48) = dVar3;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined1 *)(unaff_x20 + 0x68) = 1;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined1 *)(unaff_x20 + 0x58) = 1;
  }
  return;
}



/* Entry: 10167d3b0; end: 10167d46b;  */

long FUN_10167d3b0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0xf0,auStack_48,0,0);
  lVar3 = *(long *)(unaff_x20 + 0xf0);
  lVar2 = *(long *)(lVar3 + 0x10);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    if (param_1 <= lVar2) {
      if (SBORROW8(lVar2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10167d430);
        (*pcVar1)();
      }
      if (lVar2 < lVar2 - param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10167d434);
        (*pcVar1)();
      }
      if (lVar2 - param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10167d438);
        (*pcVar1)();
      }
      if (lVar2 != param_1) {
        lVar2 = lVar3;
        func_0x000107c61434(lVar3);
        FUN_10167bec8();
        func_0x000107c6142c(lVar3);
        return lVar2;
      }
    }
    func_0x000107c61434(lVar3);
  }
  return lVar3;
}



/* Entry: 10167d46c; end: 10167d6bf;  */

undefined8 * FUN_10167d46c(double param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_200 [176];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  double dStack_138;
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
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined1 auStack_98 [24];
  
  func_0x000107c61428(unaff_x20 + 0xf0,auStack_98,0,0);
  lVar9 = *(long *)(unaff_x20 + 0xf0);
  lVar11 = *(long *)(lVar9 + 0x10);
  puVar7 = (undefined8 *)0x0;
  if ((lVar11 != 0) && (0.0 < param_1)) {
    func_0x000107c61434(lVar9);
    lVar12 = lVar11 * 0xb0 + -0x90;
    dVar14 = 0.0;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(long *)(lVar9 + 0x10) < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10167d6bc);
        (*pcVar3)();
      }
      puVar7 = (undefined8 *)(lVar9 + lVar12);
      uStack_148 = puVar7[1];
      uStack_150 = *puVar7;
      dStack_138 = (double)puVar7[3];
      uStack_140 = puVar7[2];
      uStack_128 = puVar7[5];
      uStack_130 = puVar7[4];
      uStack_118 = puVar7[7];
      uStack_120 = puVar7[6];
      uStack_108 = puVar7[9];
      uStack_110 = puVar7[8];
      uStack_f8 = puVar7[0xb];
      uStack_100 = puVar7[10];
      uStack_e8 = puVar7[0xd];
      uStack_f0 = puVar7[0xc];
      uStack_d8 = puVar7[0xf];
      uStack_e0 = puVar7[0xe];
      uStack_c8 = puVar7[0x11];
      uStack_d0 = puVar7[0x10];
      uStack_c0 = puVar7[0x12];
      uStack_af = *(undefined8 *)((long)puVar7 + 0xa1);
      uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)puVar7 + 0x99) >> 0x38);
      uStack_b8 = (undefined1)puVar7[0x13];
      uStack_b7 = (undefined7)((ulong)puVar7[0x13] >> 8);
      puVar4 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      dVar13 = dStack_138;
      func_0x00010167cc20(&uStack_150,auStack_200);
      func_0x000107c4cec4(puVar4);
      puVar4 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_10167a6e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_10167a6e0(puVar6,uVar1 + 1,1,puVar5);
      }
      dVar14 = dVar14 + dVar13;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(double *)(puVar6 + uVar1 * 0xb0 + 0x38) = dStack_138;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x30) = uStack_140;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x48) = uStack_128;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x40) = uStack_130;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x28) = uStack_148;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x20) = uStack_150;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x78) = uStack_f8;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x70) = uStack_100;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x88) = uStack_e8;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x80) = uStack_f0;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x58) = uStack_118;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x50) = uStack_120;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x68) = uStack_108;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x60) = uStack_110;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0xc1) = uStack_af;
      *(ulong *)(puVar6 + uVar1 * 0xb0 + 0xb9) = CONCAT17(uStack_b0,uStack_b7);
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0xa8) = uStack_c8;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0xa0) = uStack_d0;
      *(ulong *)(puVar6 + uVar1 * 0xb0 + 0xb8) = CONCAT71(uStack_b7,uStack_b8);
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0xb0) = uStack_c0;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x98) = uStack_d8;
      *(undefined8 *)(puVar6 + uVar1 * 0xb0 + 0x90) = uStack_e0;
      if (param_1 < dVar14) break;
      lVar12 = lVar12 + -0xb0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    func_0x000107c6142c(lVar9);
    puVar10 = *(undefined8 **)(puVar6 + 0x10);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x000107c6142c(puVar6);
      puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar7 = puVar10;
      FUN_10167ab74(puVar10,0);
      puVar8 = &uStack_150;
      FUN_10167c17c(puVar8,puVar7 + 4,puVar10,puVar6);
      uVar2 = uStack_150;
      func_0x000107c61434(puVar6);
      func_0x000107c6142c(uVar2);
      if (puVar8 != puVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10167d6c0);
        (*pcVar3)();
      }
      func_0x000107c6142c(puVar6);
    }
  }
  return puVar7;
}



/* Entry: 10167d6c0; end: 10167d78b;  */

void FUN_10167d6c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  return;
}



/* Entry: 10167d78c; end: 10167d7e7;  */

/* WARNING: Possible PIC construction at 0x00010167d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010167d7a4) */

void FUN_10167d78c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10167d7e8; end: 10167d843;  */

undefined8 * FUN_10167d7e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10167d844; end: 10167d87f;  */

undefined8 * FUN_10167d844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10167d880; end: 10167d977;  */

int FUN_10167d880(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10167d978; end: 10167da3f;  */

void FUN_10167d978(long param_1,code *param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && ((*param_2)(), param_1 != 0)) {
    param_3 = (ulong *)0x112d36e60;
    param_4 = (long *)&UNK_10d901170;
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10167da40; end: 10167da6f;  */

/* WARNING: Possible PIC construction at 0x00010167da5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010167da60) */

void FUN_10167da40(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10167da70; end: 10167dad3;  */

void FUN_10167da70(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10167dad4; end: 10167daef;  */

void FUN_10167dad4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10167daf0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10167daf0; end: 10167dc2f;  */

undefined * FUN_10167daf0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10167dc30);
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
    puVar3 = (undefined *)0x0;
    FUN_10167d978(0,&SUB_104273684,0x112dbe250,&UNK_10d979268);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000104273684(0);
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



/* Entry: 10167dc30; end: 10167dd63;  */

void FUN_10167dc30(ulong *param_1)

{
  double *pdVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double *pdVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  double *pdStack_50;
  ulong uStack_48;
  
  uVar9 = *param_1;
  uVar5 = uVar9;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    FUN_10167e558();
  }
  uVar10 = *(ulong *)(uVar9 + 0x10);
  pdVar1 = (double *)(uVar9 + 0x20);
  uVar5 = uVar10;
  pdStack_50 = pdVar1;
  uStack_48 = uVar10;
  func_0x000107c60574();
  if ((long)uVar5 < (long)uVar10) {
    puVar11 = (undefined *)(uVar10 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar10) {
      puVar3 = puVar11;
      func_0x000107c60380(puVar11,PTR___sSdN_11034dd90);
      *(undefined **)(puVar3 + 0x10) = puVar11;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar11;
    FUN_10167dd64(&puStack_68,auStack_58,&pdStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if ((uVar10 != 0) && (uVar10 != 1)) {
    lVar4 = -1;
    uVar5 = 1;
    pdVar6 = pdVar1;
    do {
      dVar12 = pdVar1[uVar5];
      lVar7 = lVar4;
      pdVar8 = pdVar6;
      do {
        dVar13 = *pdVar8;
        if (dVar13 <= dVar12) break;
        *pdVar8 = dVar12;
        pdVar8[1] = dVar13;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        pdVar8 = pdVar8 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      pdVar6 = pdVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar10);
  }
  *param_1 = uVar9;
  return;
}



/* Entry: 10167dd64; end: 10167e0df;  */

void FUN_10167dd64(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  double *pdVar14;
  long lVar15;
  long lVar16;
  double *pdVar17;
  long unaff_x21;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      puVar7 = puStack_58;
      lVar20 = lVar10 + 1;
      if (lVar20 < lVar8) {
        lVar11 = *param_3;
        dVar21 = *(double *)(lVar11 + lVar20 * 8);
        dVar24 = *(double *)(lVar11 + lVar10 * 8);
        lVar15 = lVar10 + 2;
        dVar23 = dVar21;
        do {
          lVar16 = lVar15;
          lVar20 = lVar8;
          if (lVar8 == lVar16) break;
          dVar25 = *(double *)(lVar11 + lVar16 * 8);
          bVar4 = dVar23 <= dVar25;
          lVar15 = lVar16 + 1;
          dVar23 = dVar25;
          lVar20 = lVar16;
        } while (dVar21 < dVar24 != bVar4);
        if (dVar21 < dVar24) {
          if (lVar20 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0b4);
            (*pcVar3)();
          }
          if (lVar10 < lVar20) {
            puVar9 = (undefined8 *)(lVar11 + lVar20 * 8);
            puVar13 = (undefined8 *)(lVar11 + lVar10 * 8);
            lVar15 = lVar20;
            lVar8 = lVar10;
            do {
              puVar9 = puVar9 + -1;
              lVar15 = lVar15 + -1;
              if (lVar8 != lVar15) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0d4);
                  (*pcVar3)();
                }
                uVar22 = *puVar13;
                *puVar13 = *puVar9;
                *puVar9 = uVar22;
              }
              lVar8 = lVar8 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar8 < lVar15);
            lVar8 = param_3[1];
          }
        }
      }
      lVar15 = lVar20;
      if (lVar20 < lVar8) {
        if (SBORROW8(lVar20,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0b0);
          (*pcVar3)();
        }
        if (lVar20 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0b8);
            (*pcVar3)();
          }
          lVar11 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar11 = lVar8;
          }
          if (lVar11 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0bc);
            (*pcVar3)();
          }
          if (lVar20 != lVar11) {
            lVar8 = *param_3;
            pdVar14 = (double *)(lVar8 + lVar20 * 8 + -8);
            lVar16 = lVar10 - lVar20;
            do {
              dVar23 = *(double *)(lVar8 + lVar20 * 8);
              lVar15 = lVar16;
              pdVar17 = pdVar14;
              do {
                dVar21 = *pdVar17;
                if (dVar21 <= dVar23) break;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0c0);
                  (*pcVar3)();
                }
                *pdVar17 = dVar23;
                pdVar17[1] = dVar21;
                bVar4 = lVar15 != -1;
                lVar15 = lVar15 + 1;
                pdVar17 = pdVar17 + -1;
              } while (bVar4);
              lVar20 = lVar20 + 1;
              pdVar14 = pdVar14 + 1;
              lVar16 = lVar16 + -1;
              lVar15 = lVar11;
            } while (lVar20 != lVar11);
          }
        }
      }
      if (lVar15 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0a0);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar19 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar19) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar19 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar19 + 1;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0d8);
        (*pcVar3)();
      }
      FUN_10167e0e0(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10167e070;
      lVar8 = param_3[1];
      lVar10 = lVar15;
    } while (lVar15 < lVar8);
  }
  puVar7 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0e0);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar18 = (ulong *)(puVar7 + 0x10);
  uVar19 = *puVar18;
  while (1 < uVar19) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0dc);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar7 + uVar19 * 0x10);
    lVar20 = *plVar1;
    puVar2 = puVar18 + uVar19 * 2;
    uVar12 = puVar2[1];
    FUN_10167e350(lVar10 + lVar20 * 8,lVar10 + *puVar2 * 8,lVar10 + uVar12 * 8,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar20) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0a4);
      (*pcVar3)();
    }
    if (*puVar18 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0a8);
      (*pcVar3)();
    }
    *plVar1 = lVar20;
    plVar1[1] = uVar12;
    uVar12 = *puVar18;
    lVar10 = uVar12 - uVar19;
    if (uVar12 < uVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10167e0ac);
      (*pcVar3)();
    }
    uVar19 = uVar12 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar10 * 0x10);
    *puVar18 = uVar19;
  }
LAB_10167e070:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 10167e0e0; end: 10167e34f;  */

undefined8 FUN_10167e0e0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_10167e1b8;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e330);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_10167e218:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e320);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e328);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e308);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e30c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e314);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e31c);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10167e1b8:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e310);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e318);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e324);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e32c);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_10167e218;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e334);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e2f8);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e350);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_10167e350(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e2fc);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e300);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10167e304);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 10167e350; end: 10167e557;  */

undefined8 FUN_10167e350(double *param_1,double *param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  ulong uVar4;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double *pdVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    pdVar5 = param_4 + lVar2;
    pdVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        dVar12 = *param_2;
        if (*param_4 <= dVar12) {
          dVar12 = *param_4;
          pdVar9 = param_4 + 1;
          pdVar7 = param_2;
          pdVar3 = param_4;
        }
        else {
          pdVar9 = param_4;
          pdVar7 = param_2 + 1;
          pdVar3 = param_2;
        }
        param_2 = pdVar7;
        param_4 = pdVar9;
        if (pdVar8 != pdVar3) {
          *pdVar8 = dVar12;
        }
        pdVar8 = pdVar8 + 1;
      } while (param_4 < pdVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    pdVar3 = param_4 + lVar6;
    pdVar5 = pdVar3;
    pdVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        pdVar7 = param_2 + -1;
        pdVar9 = param_3;
        while( true ) {
          param_3 = pdVar9 + -1;
          pdVar5 = pdVar3 + -1;
          if (*pdVar5 < *pdVar7) break;
          if (pdVar9 != pdVar3) {
            *param_3 = *pdVar5;
          }
          pdVar3 = pdVar5;
          pdVar8 = param_2;
          pdVar9 = param_3;
          if (pdVar5 <= param_4) goto LAB_10167e4fc;
        }
        if (pdVar9 != param_2) {
          *param_3 = *pdVar7;
        }
        pdVar5 = pdVar3;
        pdVar8 = pdVar7;
      } while ((param_1 < pdVar7) && (param_2 = pdVar7, param_4 < pdVar3));
    }
  }
LAB_10167e4fc:
  uVar4 = (long)pdVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((pdVar8 != param_4) || ((double *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= pdVar8)) {
    func_0x000107c610b8(pdVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 10167e558; end: 10167e56b;  */

/* WARNING: Removing unreachable block (ram,0x00010134171c) */
/* WARNING: Removing unreachable block (ram,0x00010134172c) */
/* WARNING: Removing unreachable block (ram,0x0001013417fc) */
/* WARNING: Removing unreachable block (ram,0x000101341738) */
/* WARNING: Removing unreachable block (ram,0x000101341740) */
/* WARNING: Removing unreachable block (ram,0x0001013417b8) */
/* WARNING: Removing unreachable block (ram,0x0001013417c0) */
/* WARNING: Removing unreachable block (ram,0x0001013417c4) */
/* WARNING: Removing unreachable block (ram,0x0001013417c8) */
/* WARNING: Removing unreachable block (ram,0x0001013417d0) */

undefined * FUN_10167e558(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112d74b38;
    func_0x0001000285a8(0x112d74b38,&UNK_10d979270);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  func_0x000107c610b4(puVar3 + 0x20,param_1 + 0x20,lVar5 << 3);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 10167e56c; end: 10167e643;  */

/* WARNING: Removing unreachable block (ram,0x00010167e63c) */

undefined8 FUN_10167e56c(double param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    lStack_38 = param_2;
    func_0x000107c61434();
    FUN_10167dc30(&lStack_38);
    param_1 = param_1 * (double)(long)(*(ulong *)(lStack_38 + 0x10) - 1);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167e634);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167e638);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167e63c);
      (*pcVar1)();
    }
    uVar2 = (ulong)param_1;
    uVar3 = 0;
    if ((-1 < (long)uVar2) && (uVar2 < *(ulong *)(lStack_38 + 0x10))) {
      uVar3 = *(undefined8 *)(lStack_38 + uVar2 * 8 + 0x20);
    }
    func_0x000107c61574();
  }
  return uVar3;
}



/* Entry: 10167e644; end: 10167e72f;  */

undefined8 FUN_10167e644(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    pdVar6 = (double *)(param_2 + 0x20);
    do {
      dVar7 = *pdVar6;
      if (dVar7 <= param_1) {
        puVar3 = puVar2;
        func_0x000107c61558();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010134166c(0,*(long *)(puVar2 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          func_0x00010134166c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
        *(double *)(puVar2 + uVar1 * 8 + 0x20) = dVar7;
      }
      lVar5 = lVar5 + -1;
      pdVar6 = pdVar6 + 1;
    } while (lVar5 != 0);
  }
  uVar4 = *(undefined8 *)(puVar2 + 0x10);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 10167e730; end: 10167e737;  */

undefined8 * FUN_10167e730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 10167e738; end: 10167e957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10167e738(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_3 + _DAT_113043d30);
  uVar2 = *(undefined8 *)(param_4 + _DAT_11304a480);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_113010968);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar3 = *(undefined8 *)(param_5 + _DAT_113010a50);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar3);
  uVar1 = param_6;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return unaff_x20;
}



/* Entry: 10167e958; end: 10167ea93;  */

undefined8 FUN_10167e958(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000d224c(&uStack_48);
    uVar4 = uStack_48;
    func_0x000107c615f0(lVar2);
    func_0x0001000d224c(&uStack_50);
    uVar6 = uStack_50;
    uVar3 = 0;
    func_0x000102d14ffc(0);
    func_0x000107c610f8();
    func_0x000102d14abc(uVar4,lVar2,uVar6,uVar3);
    func_0x0001000d224c(&uStack_48);
    func_0x000107c61174(uVar4);
    func_0x0001000d224c(&uStack_50);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar5 = 0;
    FUN_1016800b4(0);
    func_0x000107c610f8();
    uVar6 = uStack_48;
    func_0x00010167ec7c(uStack_48,uVar4,uStack_50,lVar2,uVar3,uVar5);
    func_0x000107c61170(uVar4);
    return uVar6;
  }
  func_0x0001048d9980(0xd000000000000067,0x800000010efb46f0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10167ea94);
  (*pcVar1)();
}



/* Entry: 10167ea94; end: 10167eac7;  */

/* WARNING: Possible PIC construction at 0x00010167eab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010167eab4) */

void FUN_10167ea94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10167eac8; end: 10167eb4f;  */

void FUN_10167eac8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10167eb50; end: 10167ebdf;  */

void FUN_10167eb50(undefined8 param_1)

{
  if (lRam000000011346f940 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e64b544);
  return;
}



/* Entry: 10167ebe0; end: 10167ee4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167ebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbe348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe350) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe358) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe360) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe368) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10167ee4c; end: 10167ef13; -[_TtC30SponsoredSnapAttachmentBuilder30SponsoredSnapAttachmentBuilder attachmentDataModelForAdResponseBytes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167ee4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dbe348);
  uVar1 = param_3;
  func_0x000107c5ee20(param_3,param_2);
  func_0x000107c4e36c(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x00010167ed18(uVar2);
  func_0x000107c61170(uVar2);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10167ef14; end: 10167ef73; -[_TtC30SponsoredSnapAttachmentBuilder30SponsoredSnapAttachmentBuilder attachmentDataModelForAdResponse:] */

void FUN_10167ef14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010167ed18(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10167ef74; end: 10167efd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10167ef74(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  FUN_10167efd8();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c4e8c0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      uVar1 = *(undefined1 *)(lVar2 + _DAT_113815358);
      func_0x000107c61170(lVar2);
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 10167efd8; end: 10167f133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167efd8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + _DAT_113815208);
  if (*(int *)(param_1 + _DAT_113815200) == 0x16) {
    if (uVar4 == 0) {
      return;
    }
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112dbe360);
    uVar2 = 0xd000000000000045;
    func_0x000107c5fadc(0xd000000000000045,0x800000010efb4800);
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar2);
    uVar6 = uVar4 & 0xffffffffffffff8;
    uVar5 = uVar5 & 0xffffffff;
    if (uVar4 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar3 = uVar4;
      if (-1 < (long)uVar4) {
        uVar3 = uVar6;
      }
      func_0x000107c60480();
    }
    if ((long)uVar3 <= (long)uVar5) {
      return;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (uVar5 < *(ulong *)(uVar6 + 0x10)) {
        func_0x000107c61174(*(undefined8 *)(uVar4 + uVar5 * 8 + 0x20));
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167f134);
      (*pcVar1)();
    }
  }
  else {
    if (uVar4 == 0) {
      return;
    }
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar6 = uVar4;
      if (-1 < (long)uVar4) {
        uVar6 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar6 == 0) {
      return;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar5 + 0x10) != 0) {
        func_0x000107c61174(*(undefined8 *)(uVar4 + 0x20));
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167f130);
      (*pcVar1)();
    }
    uVar5 = 0;
  }
  func_0x000100e471e4(uVar5,uVar4);
  return;
}



/* Entry: 10167f134; end: 10167f2f3; -[_TtC30SponsoredSnapAttachmentBuilder30SponsoredSnapAttachmentBuilder opensPlayableAttachmentForAdResponse:] */

uint FUN_10167f134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10167ef74(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10167f2f4; end: 10167f313;  */

void FUN_10167f2f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10167f314; end: 10167f32f;  */

void FUN_10167f314(long param_1,long param_2)

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



/* Entry: 10167f330; end: 101680017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10167f330(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  byte **ppbVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  long unaff_x20;
  byte *pbVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong auStack_1d0 [6];
  byte *pbStack_1a0;
  ulong auStack_198 [4];
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte *pbStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  
  lVar6 = 0;
  uVar22 = param_2;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar13 = (long)auStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar21 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar24 = (undefined8 *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar9 = param_2;
  func_0x000107c4e8c0();
  func_0x000107c61180();
  if (uVar9 == 0) {
    puVar12 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    uVar19 = 0xd000000000000018;
    FUN_1016800d4(0xd000000000000018,0x800000010efb4870);
    uVar25 = uVar19;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar19);
    func_0x000107c42d78(puVar12);
    func_0x000107c61180();
    goto LAB_10167ff84;
  }
  uVar10 = param_2;
  func_0x000107c3dde4();
  func_0x000107c61180();
  if (uVar10 == 0) {
    puVar12 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    uVar19 = 0xd000000000000026;
    FUN_1016800d4(0xd000000000000026,0x800000010efb4890);
    uVar25 = uVar19;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar19);
    func_0x000107c42d78(puVar12);
    func_0x000107c61180();
  }
  else {
    pbVar11 = (byte *)0x0;
    func_0x00010403f32c();
    func_0x00010403d898();
    if (uVar22 == 0) {
LAB_10167f564:
      pbVar11 = *(byte **)(uVar10 + _DAT_11308faa8);
      uVar22 = ((ulong *)(uVar10 + _DAT_11308faa8))[1];
      uVar28 = (ulong)pbVar11 & 0xffffffffffff;
      func_0x000107c61434(uVar22);
    }
    else {
      uVar28 = (ulong)pbVar11 & 0xffffffffffff;
      uVar26 = uVar28;
      if ((uVar22 & 0x2000000000000000) != 0) {
        uVar26 = uVar22 >> 0x38 & 0xf;
      }
      if (uVar26 == 0) {
        func_0x000107c6142c(uVar22);
        goto LAB_10167f564;
      }
    }
    uVar14 = uVar22 >> 0x38 & 0xf;
    uVar26 = uVar28;
    if ((uVar22 & 0x2000000000000000) != 0) {
      uVar26 = uVar14;
    }
    if (uVar26 == 0) {
      func_0x000107c6142c(uVar22);
    }
    else {
      if ((uVar22 >> 0x3c & 1) == 0) {
        if ((uVar22 >> 0x3d & 1) == 0) {
          if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
            uVar28 = uVar22;
            func_0x000107c60358();
          }
          else {
            pbVar11 = (byte *)((uVar22 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar11 == 0x2b) {
            if ((long)uVar28 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101680014);
              (*pcVar4)();
            }
            lVar16 = uVar28 - 1;
            if (lVar16 == 0) goto LAB_10167f7e4;
            pbVar20 = (byte *)0x0;
            do {
              pbVar11 = pbVar11 + 1;
              if (((9 < *pbVar11 - 0x30) ||
                  (lVar17 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                 (uVar26 = (ulong)(byte)(*pbVar11 - 0x30), pbVar20 = (byte *)(lVar17 + uVar26),
                 SCARRY8(lVar17,uVar26))) goto LAB_10167f7e4;
              uVar23 = 0;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          else if (*pbVar11 == 0x2d) {
            if ((long)uVar28 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10168000c);
              (*pcVar4)();
            }
            lVar16 = uVar28 - 1;
            if (lVar16 == 0) {
LAB_10167f7e4:
              pbVar20 = (byte *)0x0;
              uVar23 = 1;
            }
            else {
              pbVar20 = (byte *)0x0;
              do {
                pbVar11 = pbVar11 + 1;
                if (((9 < *pbVar11 - 0x30) ||
                    (lVar17 = (long)pbVar20 * 10,
                    SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar26 = (ulong)(byte)(*pbVar11 - 0x30), pbVar20 = (byte *)(lVar17 - uVar26),
                   SBORROW8(lVar17,uVar26))) goto LAB_10167f7e4;
                uVar23 = 0;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          else {
            if (uVar28 == 0) goto LAB_10167f7e4;
            if (pbVar11 == (byte *)0x0) {
              uVar23 = 0;
              pbVar20 = (byte *)0x0;
            }
            else {
              pbVar20 = (byte *)0x0;
              do {
                if (((9 < *pbVar11 - 0x30) ||
                    (lVar16 = (long)pbVar20 * 10,
                    SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                   (uVar26 = (ulong)(byte)(*pbVar11 - 0x30), pbVar20 = (byte *)(lVar16 + uVar26),
                   SCARRY8(lVar16,uVar26))) goto LAB_10167f7e4;
                uVar23 = 0;
                uVar28 = uVar28 - 1;
                pbVar11 = pbVar11 + 1;
              } while (uVar28 != 0);
            }
          }
        }
        else {
          pbStack_d8 = pbVar11;
          uStack_d0 = uVar22 & 0xffffffffffffff;
          uVar23 = (uint)pbVar11 & 0xff;
          if (uVar23 == 0x2b) {
            if (uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101680018);
              (*pcVar4)();
            }
            lVar16 = uVar14 - 1;
            if (lVar16 == 0) goto LAB_10167f7e4;
            pbVar20 = (byte *)0x0;
            pbVar11 = (byte *)((ulong)&pbStack_d8 | 1);
            do {
              if (((9 < *pbVar11 - 0x30) ||
                  (lVar17 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                 (uVar26 = (ulong)(byte)(*pbVar11 - 0x30), pbVar20 = (byte *)(lVar17 + uVar26),
                 SCARRY8(lVar17,uVar26))) goto LAB_10167f7e4;
              uVar23 = 0;
              lVar16 = lVar16 + -1;
              pbVar11 = pbVar11 + 1;
            } while (lVar16 != 0);
          }
          else if (uVar23 == 0x2d) {
            if (uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101680010);
              (*pcVar4)();
            }
            lVar16 = uVar14 - 1;
            if (lVar16 == 0) goto LAB_10167f7e4;
            pbVar20 = (byte *)0x0;
            pbVar11 = (byte *)((ulong)&pbStack_d8 | 1);
            do {
              if (((9 < *pbVar11 - 0x30) ||
                  (lVar17 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                 (uVar26 = (ulong)(byte)(*pbVar11 - 0x30), pbVar20 = (byte *)(lVar17 - uVar26),
                 SBORROW8(lVar17,uVar26))) goto LAB_10167f7e4;
              uVar23 = 0;
              lVar16 = lVar16 + -1;
              pbVar11 = pbVar11 + 1;
            } while (lVar16 != 0);
          }
          else {
            if (uVar14 == 0) goto LAB_10167f7e4;
            pbVar20 = (byte *)0x0;
            ppbVar15 = &pbStack_d8;
            do {
              if (((9 < *(byte *)ppbVar15 - 0x30) ||
                  (lVar16 = (long)pbVar20 * 10,
                  SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar26 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                 pbVar20 = (byte *)(lVar16 + uVar26), SCARRY8(lVar16,uVar26))) goto LAB_10167f7e4;
              uVar23 = 0;
              uVar14 = uVar14 - 1;
              ppbVar15 = (byte **)((long)ppbVar15 + 1);
            } while (uVar14 != 0);
          }
        }
        func_0x000107c6142c(uVar22);
        pbVar11 = pbVar20;
      }
      else {
        func_0x000107c61434(uVar22);
        uVar26 = uVar22;
        func_0x000100edba6c(pbVar11,uVar22,10);
        uVar23 = (uint)uVar26;
        func_0x000107c61430(uVar22,2);
      }
      if (((uVar23 & 0xff) != 1) && (pbVar11 != (byte *)0x0)) {
        puVar1 = (undefined8 *)(param_1 + _DAT_11308f138);
        puVar2 = (undefined8 *)(param_1 + _DAT_11308f140);
        auStack_198[0] = puVar1[1];
        pbStack_1a0 = (byte *)*puVar1;
        uVar29 = puVar1[1];
        auStack_1d0[5] = puVar2[1];
        auStack_1d0[4] = *puVar2;
        uVar27 = puVar2[1];
        uVar19 = *(undefined8 *)(param_2 + _DAT_11308f1e0);
        uVar22 = *(ulong *)(param_1 + _DAT_11308f128);
        auStack_1d0[3] = *(undefined8 *)(param_1 + _DAT_11308f130);
        uVar25 = ((undefined8 *)(param_1 + _DAT_11308f130))[1];
        uVar26 = *(ulong *)(param_1 + _DAT_113815208);
        auStack_198[2] = lVar6;
        auStack_198[3] = lVar21;
        if (uVar26 == 0) {
          func_0x000107c61434(uVar27);
          func_0x000107c61434(uVar25);
          func_0x000107c61434(uVar29);
          uStack_88 = 0;
          uStack_a8 = uVar19;
          uStack_a0 = uVar22;
        }
        else {
          uVar28 = uVar26 & 0xffffffffffffff8;
          auStack_1d0[0] = uVar22;
          auStack_1d0[1] = uVar19;
          auStack_1d0[2] = uVar9;
          if (uVar26 >> 0x3e == 0) {
            uVar22 = *(ulong *)(uVar28 + 0x10);
          }
          else {
            uVar22 = uVar26;
            if (-1 < (long)uVar26) {
              uVar22 = uVar28;
            }
            func_0x000107c60480();
          }
          func_0x000107c61434(uVar29);
          func_0x000107c61434(uVar27);
          func_0x000107c61434(uVar25);
          uStack_88 = 0;
          while (uVar22 != uStack_88) {
            if ((uVar26 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar28 + 0x10) <= uStack_88) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10167ff08);
                (*pcVar4)();
              }
              uVar14 = *(ulong *)(uVar26 + uStack_88 * 8 + 0x20);
            }
            else {
              uVar14 = uStack_88;
              func_0x000100e471e4(uStack_88,uVar26);
              func_0x000107c615e8();
            }
            uStack_a8 = auStack_1d0[1];
            uStack_a0 = auStack_1d0[0];
            uVar9 = auStack_1d0[2];
            if (uVar14 == param_2) goto LAB_10167f988;
            bVar5 = SCARRY8(uStack_88,1);
            uStack_88 = uStack_88 + 1;
            if (bVar5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10167ff0c);
              (*pcVar4)();
            }
          }
          uStack_88 = 0;
          uStack_a8 = auStack_1d0[1];
          uStack_a0 = auStack_1d0[0];
          uVar9 = auStack_1d0[2];
        }
LAB_10167f988:
        uStack_70 = *(undefined8 *)(param_1 + _DAT_113815300);
        uStack_c0 = auStack_1d0[5];
        uStack_c8 = auStack_1d0[4];
        uStack_d0 = auStack_198[0];
        pbStack_d8 = pbStack_1a0;
        uStack_b8 = auStack_1d0[3];
        uStack_90 = 0xe800000000000000;
        uStack_98 = 0x7364615f70616e73;
        uStack_80 = 0;
        uStack_78 = 1;
        uStack_b0 = uVar25;
        func_0x000107c3d378();
        func_0x000107c61180();
        iVar18 = *(int *)(lVar8 + 0x18);
        if (param_1 != 0) {
          func_0x0001041cacf8((long)puVar24 + (long)iVar18);
        }
        lVar6 = 0;
        func_0x000100b918b4();
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))
                  ((long)puVar24 + (long)iVar18,param_1 == 0,1,lVar6);
        puVar24[1] = 0;
        puVar24[2] = 0;
        *puVar24 = pbVar11;
        *(undefined8 *)((long)puVar24 + (long)*(int *)(lVar8 + 0x1c)) = 0;
        *(undefined8 *)((long)puVar24 + (long)*(int *)(lVar8 + 0x20)) = 5;
        puVar1 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar8 + 0x24));
        puVar1[9] = uStack_90;
        puVar1[8] = uStack_98;
        puVar1[0xb] = uStack_80;
        puVar1[10] = uStack_88;
        puVar1[0xd] = uStack_70;
        puVar1[0xc] = CONCAT71(uStack_77,uStack_78);
        puVar1[1] = uStack_d0;
        *puVar1 = pbStack_d8;
        puVar1[3] = uStack_c0;
        puVar1[2] = uStack_c8;
        puVar1[5] = uStack_b0;
        puVar1[4] = uStack_b8;
        puVar1[7] = uStack_a0;
        puVar1[6] = uStack_a8;
        *(undefined8 *)((long)puVar24 + (long)*(int *)(lVar8 + 0x28)) = 0;
        lVar6 = _DAT_113815330;
        lVar8 = 0;
        func_0x000107c5ede0();
        uVar22 = auStack_198[3];
        (**(code **)(*(long *)(lVar8 + -8) + 0x10))(auStack_198[3],uVar9 + lVar6,lVar8);
        func_0x000103bfb8b0(0);
        uVar25 = *(undefined8 *)(uVar9 + _DAT_113815338);
        uVar19 = ((undefined8 *)(uVar9 + _DAT_113815338))[1];
        func_0x000107c61434(uVar19);
        func_0x000100e3eca0(&pbStack_d8,&uStack_148);
        uVar27 = uVar19;
        func_0x000103bfaab8();
        func_0x000107c6142c();
        uStack_148 = uVar25;
        uStack_140 = uVar27;
        func_0x000100e8b654();
        puVar12 = PTR___sSSN_11034da80;
        func_0x000107c601f8();
        func_0x000107c6142c(uVar27);
        auStack_1d0[4] = uVar19;
        pbStack_1a0 = puVar12;
        if (*(long *)(uVar10 + _DAT_11308fab8) == 0) {
          auStack_1d0[3] = 0;
          uVar25 = 0;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(uVar10 + _DAT_11308fab8) + _DAT_113090408);
          auStack_1d0[3] = *puVar1;
          uVar25 = puVar1[1];
          func_0x000107c61434(uVar25);
        }
        uVar27 = *(undefined8 *)(uVar10 + _DAT_11308fab0);
        uVar29 = ((undefined8 *)(uVar10 + _DAT_11308fab0))[1];
        FUN_101680210(puVar24,uVar22 + (long)*(int *)(lVar7 + 0x24),&SUB_100b91790);
        lVar6 = uVar22 + (long)*(int *)(lVar7 + 0x28);
        func_0x000107c61434(uVar29);
        iVar18 = (int)*(undefined8 *)(unaff_x20 + _DAT_112dbe360);
        uVar19 = 0xd000000000000036;
        func_0x000107c5fadc(0xd000000000000036,0x800000010efb48e0);
        func_0x000107c3ebdc();
        func_0x000107c61170(uVar19);
        if (iVar18 != 0) {
          lVar8 = *(long *)(unaff_x20 + _DAT_112dbe350);
          uVar19 = 0x612f6e;
          func_0x000107c5fadc(0x612f6e,0xe300000000000000);
          func_0x000107c3ecf0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          if (lVar8 != 0) {
            uVar19 = *(undefined8 *)(lVar8 + _DAT_113068838);
            func_0x000107c61174();
            func_0x000107c61174(uVar19);
            func_0x0001047b6fb0(lVar6);
            uVar19 = *(undefined8 *)(lVar8 + _DAT_113068840);
            lVar21 = 0;
            func_0x000100b91cc8();
            *(undefined8 *)(lVar6 + *(int *)(lVar21 + 0x14)) = uVar19;
            *(undefined8 *)(lVar6 + *(int *)(lVar21 + 0x18)) =
                 *(undefined8 *)(lVar8 + _DAT_113068848);
            uVar19 = *(undefined8 *)(lVar8 + _DAT_113068850);
            iVar18 = *(int *)(lVar21 + 0x1c);
            func_0x000107c61434();
            func_0x000107c61174(uVar19);
            func_0x0001041ed0c4(lVar6 + iVar18);
            func_0x000107c61170(lVar8);
            *(undefined8 *)(lVar6 + *(int *)(lVar21 + 0x20)) =
                 *(undefined8 *)(lVar8 + _DAT_113068858);
            uVar19 = *(undefined8 *)(lVar8 + _DAT_113068860);
            uVar3 = ((undefined8 *)(lVar8 + _DAT_113068860))[1];
            func_0x000107c61434(uVar3);
            func_0x000107c61170(lVar8);
            puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar21 + 0x24));
            *puVar1 = uVar19;
            puVar1[1] = uVar3;
            pcVar4 = *(code **)(*(long *)(lVar21 + -8) + 0x38);
            uVar19 = 0;
            uVar22 = auStack_198[3];
            goto LAB_10167fdc8;
          }
        }
        lVar21 = 0;
        func_0x000100b91cc8();
        pcVar4 = *(code **)(*(long *)(lVar21 + -8) + 0x38);
        uVar19 = 1;
LAB_10167fdc8:
        (*pcVar4)(lVar6,uVar19,1,lVar21);
        puVar1 = (undefined8 *)(uVar22 + (long)*(int *)(lVar7 + 0x14));
        *puVar1 = pbStack_1a0;
        puVar1[1] = auStack_1d0[4];
        puVar1 = (undefined8 *)(uVar22 + (long)*(int *)(lVar7 + 0x18));
        *puVar1 = auStack_1d0[3];
        puVar1[1] = uVar25;
        puVar1 = (undefined8 *)(uVar22 + (long)*(int *)(lVar7 + 0x1c));
        *puVar1 = uVar27;
        puVar1[1] = uVar29;
        puVar1 = (undefined8 *)(uVar22 + (long)*(int *)(lVar7 + 0x20));
        puVar1[9] = uStack_90;
        puVar1[8] = uStack_98;
        puVar1[0xb] = uStack_80;
        puVar1[10] = uStack_88;
        puVar1[0xd] = uStack_70;
        puVar1[0xc] = CONCAT71(uStack_77,uStack_78);
        puVar1[1] = uStack_d0;
        *puVar1 = pbStack_d8;
        puVar1[3] = uStack_c0;
        puVar1[2] = uStack_c8;
        puVar1[5] = uStack_b0;
        puVar1[4] = uStack_b8;
        puVar1[7] = uStack_a0;
        puVar1[6] = uStack_a8;
        puVar12 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x0001041bb118(0);
        FUN_101680210(uVar22,lVar13,&SUB_100b91b84);
        func_0x000107c6159c(lVar13,auStack_198[2],8);
        func_0x0001041b84d4(lVar13);
        func_0x000107c5c3c8(puVar12);
        func_0x000107c61180();
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar13);
        func_0x000101680254(uVar22,&SUB_100b91b84);
        func_0x000101680254(puVar24,&SUB_100b91790);
        return puVar12;
      }
    }
    puVar12 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    uVar19 = 0xd00000000000001a;
    FUN_1016800d4(0xd00000000000001a,0x800000010efb48c0);
    uVar25 = uVar19;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar19);
    func_0x000107c42d78(puVar12);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar9 = uVar10;
  }
  func_0x000107c61170(uVar9);
LAB_10167ff84:
  func_0x000107c61170(uVar25);
  return puVar12;
}



/* Entry: 101680018; end: 10168004b;  */

void FUN_101680018(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10168004c; end: 1016800b3; -[_TtC30SponsoredSnapAttachmentBuilder30SponsoredSnapAttachmentBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168004c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe348));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe350));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe358));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe360));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbe368));
  return;
}



/* Entry: 1016800b4; end: 1016800d3;  */

void FUN_1016800b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3838);
  return;
}



/* Entry: 1016800d4; end: 10168020f;  */

undefined * FUN_1016800d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010efb4920);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 101680210; end: 10168028f;  */

undefined8 FUN_101680210(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101680290; end: 10168029f;  */

void FUN_101680290(void)

{
  return;
}



/* Entry: 1016802a0; end: 101680433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1016802a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112dbe398;
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112dbe3a0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe3a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe3b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe3b8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe3c0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe3c8) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  puVar6 = auStack_70;
  func_0x000107c61154(puVar6,puVar3);
  func_0x000107c61180();
  FUN_101680434();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_6);
  return puVar6;
}



/* Entry: 101680434; end: 10168059b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101680434(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c43bf8();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x0001000b637c();
  func_0x000107c61170(puVar1);
  uVar3 = 0x112dbe408;
  func_0x0001000285a8(0x112dbe408,&UNK_10d9793b8);
  pcVar4 = FUN_10168059c;
  func_0x0001000bfde0(FUN_10168059c,0,uVar3);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112dbe410;
  func_0x0001000285a8(0x112dbe410,&UNK_10d9793c0);
  pcVar5 = FUN_101680778;
  func_0x00010068b194(FUN_101680778,0,uVar3);
  func_0x000107c61574(pcVar4);
  puVar1 = &UNK_1103f2210;
  func_0x000107c613fc(&UNK_1103f2210,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcVar4 = FUN_101681b54;
  puVar2 = puVar1;
  (**(code **)(*(long *)pcVar5 + 0x60))(FUN_101681b54);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar1);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar2 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112dbe3a0),pcVar5,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
  return;
}



/* Entry: 10168059c; end: 101680737;  */

void FUN_10168059c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  uVar9 = *param_2;
  *param_1 = 0;
  puVar4 = &UNK_1103f22b0;
  func_0x000107c613fc(&UNK_1103f22b0,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = param_1;
  puVar5 = &UNK_1103f22d8;
  func_0x000107c613fc(&UNK_1103f22d8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101681e60;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = (code *)0x101681e8c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101680738;
  puStack_68 = &UNK_1103f22f0;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_60 = FUN_101680774;
  puStack_58 = (undefined *)0x0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100e27b38;
  puStack_68 = &UNK_1103f2318;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4c754(uVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x71,0x32,0x25,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101680734);
    (*pcVar3)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x71,0x32,0x3e,1);
  if ((uVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101680738);
  (*pcVar3)();
}



/* Entry: 101680738; end: 101680773;  */

void FUN_101680738(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 101680774; end: 101680777;  */

void FUN_101680774(void)

{
  return;
}



/* Entry: 101680778; end: 10168085f;  */

void FUN_101680778(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x000107c43fb8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar2 = lVar1;
      func_0x000107c5b84c(lVar1);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x0001000b637c();
      func_0x000107c61170(lVar2);
      uVar4 = 0x112dbe410;
      func_0x0001000285a8(0x112dbe410,&UNK_10d9793c0);
      func_0x0001000bfde0(FUN_101680860,0,uVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(lVar3);
      return;
    }
  }
  func_0x0001000285a8(0x112dbe428,&UNK_10d9793d0);
  uStack_38 = 0;
  func_0x000100854cb0(&uStack_38);
  return;
}



/* Entry: 101680860; end: 10168088b;  */

void FUN_101680860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c61174();
  FUN_10168088c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10168088c; end: 101680b2b;  */

undefined8 FUN_10168088c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar3 = &UNK_1103f2238;
  func_0x000107c613fc(&UNK_1103f2238,0x18,7);
  puVar6 = (undefined8 *)(puVar3 + 0x10);
  *puVar6 = 0;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x101681ec0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100b61264;
  puStack_68 = &UNK_1103f2250;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar2);
  uStack_60 = 0x101681ed8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000d0bb0;
  puStack_68 = &UNK_1103f2278;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6bc(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61428(puVar6,&puStack_80,0,0);
  uVar7 = *puVar6;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar3);
  return uVar7;
}



/* Entry: 101680b2c; end: 101680b87;  */

void FUN_101680b2c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101680b88(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101680b88; end: 10168163f;  */

/* WARNING: Possible PIC construction at 0x000101680ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101680ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101680e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101680ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101680ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016810dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168115c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101681290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016812a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101680fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016812ac) */
/* WARNING: Removing unreachable block (ram,0x000101681294) */
/* WARNING: Removing unreachable block (ram,0x000101681258) */
/* WARNING: Removing unreachable block (ram,0x000101681178) */
/* WARNING: Removing unreachable block (ram,0x000101681160) */
/* WARNING: Removing unreachable block (ram,0x00010168110c) */
/* WARNING: Removing unreachable block (ram,0x0001016810e0) */
/* WARNING: Removing unreachable block (ram,0x0001016810e4) */
/* WARNING: Removing unreachable block (ram,0x000101681128) */
/* WARNING: Removing unreachable block (ram,0x00010168112c) */
/* WARNING: Removing unreachable block (ram,0x00010168117c) */
/* WARNING: Removing unreachable block (ram,0x000101681184) */
/* WARNING: Removing unreachable block (ram,0x000101681144) */
/* WARNING: Removing unreachable block (ram,0x0001016810f8) */
/* WARNING: Removing unreachable block (ram,0x00010168109c) */
/* WARNING: Removing unreachable block (ram,0x000101681084) */
/* WARNING: Removing unreachable block (ram,0x0001016810a0) */
/* WARNING: Removing unreachable block (ram,0x0001016810a8) */
/* WARNING: Removing unreachable block (ram,0x000101681110) */
/* WARNING: Removing unreachable block (ram,0x000101681114) */
/* WARNING: Removing unreachable block (ram,0x000101681188) */
/* WARNING: Removing unreachable block (ram,0x0001016810c4) */
/* WARNING: Removing unreachable block (ram,0x000101681088) */
/* WARNING: Removing unreachable block (ram,0x000101681068) */
/* WARNING: Removing unreachable block (ram,0x00010168103c) */
/* WARNING: Removing unreachable block (ram,0x000101681024) */
/* WARNING: Removing unreachable block (ram,0x000101680ef4) */
/* WARNING: Removing unreachable block (ram,0x000101680f3c) */
/* WARNING: Removing unreachable block (ram,0x000101680f44) */
/* WARNING: Removing unreachable block (ram,0x000101680efc) */
/* WARNING: Removing unreachable block (ram,0x000101680f50) */
/* WARNING: Removing unreachable block (ram,0x000101680f08) */
/* WARNING: Removing unreachable block (ram,0x0001016812c8) */
/* WARNING: Removing unreachable block (ram,0x000101680f10) */
/* WARNING: Removing unreachable block (ram,0x0001016812d8) */
/* WARNING: Removing unreachable block (ram,0x000101680f1c) */
/* WARNING: Removing unreachable block (ram,0x000101680f24) */
/* WARNING: Removing unreachable block (ram,0x000101680f38) */
/* WARNING: Removing unreachable block (ram,0x000101680ecc) */
/* WARNING: Removing unreachable block (ram,0x000101680f58) */
/* WARNING: Removing unreachable block (ram,0x000101680f64) */
/* WARNING: Removing unreachable block (ram,0x000101680ff8) */
/* WARNING: Removing unreachable block (ram,0x000101680f68) */
/* WARNING: Removing unreachable block (ram,0x000101680ed4) */
/* WARNING: Removing unreachable block (ram,0x000101680e58) */
/* WARNING: Removing unreachable block (ram,0x000101680cec) */
/* WARNING: Removing unreachable block (ram,0x000101680cf8) */
/* WARNING: Removing unreachable block (ram,0x000101680dd4) */
/* WARNING: Removing unreachable block (ram,0x000101680d00) */
/* WARNING: Removing unreachable block (ram,0x000101680e80) */
/* WARNING: Removing unreachable block (ram,0x000101680d30) */
/* WARNING: Removing unreachable block (ram,0x000101680cd0) */
/* WARNING: Removing unreachable block (ram,0x000101680ddc) */
/* WARNING: Removing unreachable block (ram,0x000101680e54) */
/* WARNING: Removing unreachable block (ram,0x000101680cd4) */
/* WARNING: Removing unreachable block (ram,0x000101680ff0) */
/* WARNING: Removing unreachable block (ram,0x0001016812b0) */
/* WARNING: Removing unreachable block (ram,0x000101680e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101680b88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_c0 [64];
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  func_0x000103e07278();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  if (param_1 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dbe398);
    puVar3 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4d664(uVar4);
  }
  else {
    lStack_80 = lVar1;
    puStack_78 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c61174();
    func_0x0001000d224c(auStack_70);
    puVar3 = *(undefined **)(unaff_x20 + _DAT_112dbe3c0);
    func_0x000107c5fadc(puVar3,((undefined8 *)(unaff_x20 + _DAT_112dbe3c0))[1]);
    func_0x000107c43a9c(auStack_70[0]);
    func_0x000107c61180();
    func_0x000107c615e8(auStack_70[0]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101681640; end: 10168169f; -[_TtC44SponsoredSnapBannerDataServiceImplementation31SponsoredSnapBannerDataProvider init] */

void FUN_101681640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapBannerDataServiceImplementation.SponsoredSnapBannerDataProvider"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10168166c);
  (*pcVar1)();
}



/* Entry: 1016816a0; end: 1016817b3; -[_TtC44SponsoredSnapBannerDataServiceImplementation31SponsoredSnapBannerDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016816cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016816ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016816d0) */
/* WARNING: Removing unreachable block (ram,0x0001016816f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016816a0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbe398));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbe3a0));
  return;
}



/* Entry: 1016817b4; end: 1016818ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016817b4(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  ulong *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  
  lVar1 = 0;
  func_0x000103e07278();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (ulong *)(puVar6 + -extraout_x12);
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112dbe398);
    lVar1 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x0001016809dc();
    if (lVar1 != 0) {
      func_0x000103e0de94(puVar6);
      func_0x000101681ba4(puVar6,puVar4,&SUB_103e07278);
      uVar2 = *puVar4;
      if ((uVar2 == param_1 && puVar4[1] == param_2) ||
         (func_0x000107c605b8(uVar2,puVar4[1],param_1,param_2,0), (uVar2 & 1) != 0)) {
        puVar3 = PTR_PTR_1126ae750;
        func_0x000107c61168(PTR_PTR_1126ae750);
        func_0x000107c4d73c();
        func_0x000107c61180();
        func_0x000107c4d664(lVar5);
        func_0x000107c61170(puVar3);
      }
      func_0x000101681c2c(puVar4,&SUB_103e07278);
    }
  }
  return;
}



/* Entry: 1016818f0; end: 101681a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016818f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112dbe398);
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x0001016809dc();
  if (lVar1 != 0) {
    func_0x000103e0de94(param_1);
  }
  lVar2 = 0;
  func_0x000103e07278();
                    /* WARNING: Could not recover jumptable at 0x00010168195c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,lVar1 == 0,1,lVar2);
  return;
}



/* Entry: 101681a18; end: 101681a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101681a18(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  ulong *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  
  lVar1 = 0;
  func_0x000103e07278();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (ulong *)(puVar6 + -extraout_x12);
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112dbe398);
    lVar1 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x0001016809dc();
    if (lVar1 != 0) {
      func_0x000103e0de94(puVar6);
      func_0x000101681ba4(puVar6,puVar4,&SUB_103e07278);
      uVar2 = *puVar4;
      if ((uVar2 == param_1 && puVar4[1] == param_2) ||
         (func_0x000107c605b8(uVar2,puVar4[1],param_1,param_2,0), (uVar2 & 1) != 0)) {
        puVar3 = PTR_PTR_1126ae750;
        func_0x000107c61168(PTR_PTR_1126ae750);
        func_0x000107c4d73c();
        func_0x000107c61180();
        func_0x000107c4d664(lVar5);
        func_0x000107c61170(puVar3);
      }
      func_0x000101681c2c(puVar4,&SUB_103e07278);
    }
  }
  return;
}



/* Entry: 101681a1c; end: 101681a6b; -[_TtC44SponsoredSnapBannerDataServiceImplementation31SponsoredSnapBannerDataProvider sponsoredSnapBannerMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101681a1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dbe398);
  func_0x000107c61174();
  func_0x000107c5dc0c(uVar1);
  func_0x000107c61180();
  func_0x0001016809dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101681a6c; end: 101681a7b; -[_TtC44SponsoredSnapBannerDataServiceImplementation31SponsoredSnapBannerDataProvider sponsoredSnapBannerMetadataObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101681a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dbe398));
  return;
}



/* Entry: 101681a7c; end: 101681ad3;  */

void FUN_101681a7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3918);
  return;
}



/* Entry: 101681ad4; end: 101681aef;  */

void FUN_101681ad4(long param_1,long param_2)

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



/* Entry: 101681af0; end: 101681b3b;  */

void FUN_101681af0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 101681b3c; end: 101681b53;  */

void FUN_101681b3c(void)

{
  FUN_101681af0();
  return;
}



/* Entry: 101681b54; end: 101681b5b;  */

void FUN_101681b54(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101680b88(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101681b5c; end: 101681c67;  */

undefined8 FUN_101681b5c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101681c68; end: 101681cab;  */

void FUN_101681c68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbe420 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b2d28;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dbe420 = puVar1;
  return;
}



/* Entry: 101681cac; end: 101681e5f;  */

ulong FUN_101681cac(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101681d90);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101681d94);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b2d28;
    func_0x000107c61168(PTR_PTR_1126b2d28);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b2d28;
    func_0x000107c61168(PTR_PTR_1126b2d28);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101681c68(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101681e60);
  (*pcVar2)();
}



/* Entry: 101681e60; end: 101681eab;  */

void FUN_101681e60(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101681eac; end: 101681edb;  */

void FUN_101681eac(long param_1,long param_2)

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



/* Entry: 101681edc; end: 101682053;  */

void FUN_101681edc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x0001000285a8(0x112dbe438,&UNK_10d979418);
  puVar1 = &UNK_1103f23a0;
  func_0x000107c613fc(&UNK_1103f23a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  pcVar2 = FUN_101682370;
  func_0x0001000823a8(FUN_101682370,puVar1);
  uVar3 = 0x112dbe440;
  func_0x0001000285a8(0x112dbe440,&UNK_10d979420);
  uVar4 = 0x101682390;
  func_0x00010072927c(0x101682390,0,uVar3);
  uVar3 = 0x112dbe448;
  func_0x0001000285a8(0x112dbe448,&UNK_10d979428);
  uVar5 = 0x1016823a4;
  func_0x00010072927c(0x1016823a4,0,uVar3);
  uVar3 = uVar5;
  func_0x0001000cad14();
  uVar6 = uVar3;
  func_0x0001000ad7c4();
  uVar7 = 0;
  func_0x00010023eb18(0);
  func_0x000107c610f8();
  func_0x000103e0717c(uVar3,uVar6,uVar7);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  *param_1 = uVar3;
  return;
}



/* Entry: 101682054; end: 10168206f;  */

void FUN_101682054(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000285a8(0x112dbe438,&UNK_10d979418);
  puVar1 = &UNK_1103f23a0;
  func_0x000107c613fc(&UNK_1103f23a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x30) = uVar7;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  pcVar2 = FUN_101682370;
  func_0x0001000823a8(FUN_101682370,puVar1);
  uVar3 = 0x112dbe440;
  func_0x0001000285a8(0x112dbe440,&UNK_10d979420);
  uVar4 = 0x101682390;
  func_0x00010072927c(0x101682390,0,uVar3);
  uVar3 = 0x112dbe448;
  func_0x0001000285a8(0x112dbe448,&UNK_10d979428);
  uVar5 = 0x1016823a4;
  func_0x00010072927c(0x1016823a4,0,uVar3);
  uVar3 = uVar5;
  func_0x0001000cad14();
  uVar6 = uVar3;
  func_0x0001000ad7c4();
  uVar7 = 0;
  func_0x00010023eb18(0);
  func_0x000107c610f8();
  func_0x000103e0717c(uVar3,uVar6,uVar7);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  *param_1 = uVar3;
  return;
}



/* Entry: 101682070; end: 10168232b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101682070(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  uVar12 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar7 = lVar3;
  func_0x000107c4d490();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(lVar4 + _DAT_11301aeb0);
  uVar14 = *(undefined8 *)(lVar5 + _DAT_113010968);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar14);
  func_0x000100083b20(&lStack_68);
  uVar16 = *(undefined8 *)(lStack_68 + _DAT_112e775d8);
  func_0x000107c6157c(uVar16);
  func_0x000107c61170(lStack_68);
  lVar8 = 0;
  FUN_101681a7c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar2 = _DAT_112dbe398;
  puVar10 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar10);
  *(undefined **)(lVar9 + lVar2) = puVar11;
  lVar2 = _DAT_112dbe3a0;
  uVar12 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + lVar2) = uVar12;
  *(long *)(lVar9 + _DAT_112dbe3a8) = lVar7;
  *(undefined8 *)(lVar9 + _DAT_112dbe3b0) = uVar15;
  *(undefined8 *)(lVar9 + _DAT_112dbe3b8) = uVar14;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112dbe3c0);
  *puVar1 = uVar6;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar9 + _DAT_112dbe3c8) = uVar16;
  puVar10 = PTR_s_init_1125d9248;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar16);
  func_0x000107c61174(lVar7);
  plVar13 = &lStack_78;
  func_0x000107c61154(plVar13,puVar10);
  func_0x000107c61180();
  FUN_101680434();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(plVar13);
  func_0x000107c61170(lVar7);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar16);
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 10168232c; end: 10168236f;  */

void FUN_10168232c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101682370; end: 1016823c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101682370(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar14,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = lStack_68;
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  uVar12 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar7 = lVar3;
  func_0x000107c4d490();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(lVar4 + _DAT_11301aeb0);
  uVar15 = *(undefined8 *)(lVar5 + _DAT_113010968);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar15);
  func_0x000100083b20(&lStack_68);
  uVar17 = *(undefined8 *)(lStack_68 + _DAT_112e775d8);
  func_0x000107c6157c(uVar17);
  func_0x000107c61170(lStack_68);
  lVar8 = 0;
  FUN_101681a7c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar2 = _DAT_112dbe398;
  puVar10 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar10);
  *(undefined **)(lVar9 + lVar2) = puVar11;
  lVar2 = _DAT_112dbe3a0;
  uVar12 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + lVar2) = uVar12;
  *(long *)(lVar9 + _DAT_112dbe3a8) = lVar7;
  *(undefined8 *)(lVar9 + _DAT_112dbe3b0) = uVar16;
  *(undefined8 *)(lVar9 + _DAT_112dbe3b8) = uVar15;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112dbe3c0);
  *puVar1 = uVar6;
  puVar1[1] = uVar14;
  *(undefined8 *)(lVar9 + _DAT_112dbe3c8) = uVar17;
  puVar10 = PTR_s_init_1125d9248;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar17);
  func_0x000107c61174(lVar7);
  plVar13 = &lStack_78;
  func_0x000107c61154(plVar13,puVar10);
  func_0x000107c61180();
  FUN_101680434();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(plVar13);
  func_0x000107c61170(lVar7);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar17);
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 1016823c4; end: 10168246f;  */

void FUN_1016823c4(void)

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



/* Entry: 101682470; end: 101682473;  */

void FUN_101682470(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbe450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d979430;
  func_0x000107c61520(&UNK_10d979430,&UNK_1103f24e0);
  puRam0000000112dbe450 = puVar1;
  return;
}



/* Entry: 101682474; end: 1016824b3;  */

void FUN_101682474(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbe450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d979430;
  func_0x000107c61520(&UNK_10d979430,&UNK_1103f24e0);
  puRam0000000112dbe450 = puVar1;
  return;
}



/* Entry: 1016824b4; end: 101682617;  */

int FUN_1016824b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101682530;
        goto LAB_101682514;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101682514:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101682530:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101682618; end: 1016829af;  */

void FUN_101682618(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_78;
  
  puVar3 = PTR_PTR_1126a7798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c522e0(puVar3);
  func_0x000107c61170(uVar4);
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c523d0(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c54a20(puVar3);
  func_0x000107c52250(puVar3);
  func_0x000107c54784(puVar3);
  func_0x000107c53370(0x3ff0000000000000,puVar3);
  func_0x000107c5336c(puVar3);
  func_0x000107c522e8(puVar3);
  func_0x000107c55014(puVar3);
  lVar5 = 0;
  func_0x000100b91d00();
  lVar5 = *(long *)(param_1 + *(int *)(lVar5 + 0x4c));
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    lVar6 = 0;
    func_0x0001046d90b0();
    uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    lVar5 = lVar5 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x30);
      func_0x000107c61434(lVar6);
      func_0x000107c5fadc(uVar4,lVar6);
      func_0x000107c6142c(lVar6);
      goto LAB_10168278c;
    }
  }
  uVar4 = 0;
LAB_10168278c:
  func_0x000107c57d18(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c5556c(puVar3);
  func_0x000101682c20();
  func_0x000107c55690(puVar3);
  lVar5 = *(long *)(param_4 + 0x10);
  if (lVar5 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101682c38(0,lVar5,0);
    plVar9 = (long *)(param_4 + 0x30);
    do {
      puVar1 = puStack_78;
      dVar11 = (double)plVar9[-2];
      dVar10 = (double)plVar9[-1];
      lVar6 = *plVar9;
      puVar7 = PTR_PTR_1126a77a0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101682998);
        (*pcVar2)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10168299c);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829a0);
        (*pcVar2)();
      }
      func_0x000107c61174();
      func_0x000107c597e8();
      if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829a4);
        (*pcVar2)();
      }
      if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829a8);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829ac);
        (*pcVar2)();
      }
      func_0x000107c5a57c(puVar7);
      if (lVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829b0);
        (*pcVar2)();
      }
      func_0x000107c5a58c(puVar7);
      func_0x000107c61170(puVar7);
      uVar8 = *(ulong *)(puVar1 + 0x10);
      puStack_78 = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar8) {
        FUN_101682c38(1 < *(ulong *)(puVar1 + 0x18),uVar8 + 1,1);
      }
      puVar1 = puStack_78;
      plVar9 = plVar9 + 3;
      *(ulong *)(puStack_78 + 0x10) = uVar8 + 1;
      *(undefined **)(puStack_78 + uVar8 * 8 + 0x20) = puVar7;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar4 = 0;
    func_0x000101682c54(0);
    puVar7 = puVar1;
    func_0x000107c5fc48(puVar1,uVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c52458(puVar3);
    func_0x000107c61170(puVar7);
  }
  func_0x0001000d224c(&puStack_78);
  puVar1 = puStack_78;
  if (puStack_78 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_78);
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1016829b0; end: 101682bcf;  */

void FUN_1016829b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126a7790;
  func_0x000107c610f8(PTR_PTR_1126a7790);
  func_0x000107c453e4();
  func_0x000107c59694();
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c523d0(puVar1);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar2 = param_2;
  }
  func_0x000107c52410(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000100b91d00();
  func_0x000107c55754(puVar1);
  func_0x000107c5556c(puVar1);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c615e8(lStack_48);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101682bd0; end: 101682c13;  */

void FUN_101682bd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101682c14; end: 101682c37;  */

void FUN_101682c14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_78;
  
  puVar3 = PTR_PTR_1126a7798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c522e0(puVar3);
  func_0x000107c61170(uVar4);
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c523d0(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c54a20(puVar3);
  func_0x000107c52250(puVar3);
  func_0x000107c54784(puVar3);
  func_0x000107c53370(0x3ff0000000000000,puVar3);
  func_0x000107c5336c(puVar3);
  func_0x000107c522e8(puVar3);
  func_0x000107c55014(puVar3);
  lVar5 = 0;
  func_0x000100b91d00();
  lVar5 = *(long *)(param_1 + *(int *)(lVar5 + 0x4c));
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    lVar6 = 0;
    func_0x0001046d90b0();
    uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    lVar5 = lVar5 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x30);
      func_0x000107c61434(lVar6);
      func_0x000107c5fadc(uVar4,lVar6);
      func_0x000107c6142c(lVar6);
      goto LAB_10168278c;
    }
  }
  uVar4 = 0;
LAB_10168278c:
  func_0x000107c57d18(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c5556c(puVar3);
  func_0x000101682c20();
  func_0x000107c55690(puVar3);
  lVar5 = *(long *)(param_4 + 0x10);
  if (lVar5 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101682c38(0,lVar5,0);
    plVar9 = (long *)(param_4 + 0x30);
    do {
      puVar1 = puStack_78;
      dVar11 = (double)plVar9[-2];
      dVar10 = (double)plVar9[-1];
      lVar6 = *plVar9;
      puVar7 = PTR_PTR_1126a77a0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101682998);
        (*pcVar2)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10168299c);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829a0);
        (*pcVar2)();
      }
      func_0x000107c61174();
      func_0x000107c597e8();
      if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829a4);
        (*pcVar2)();
      }
      if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829a8);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829ac);
        (*pcVar2)();
      }
      func_0x000107c5a57c(puVar7);
      if (lVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016829b0);
        (*pcVar2)();
      }
      func_0x000107c5a58c(puVar7);
      func_0x000107c61170(puVar7);
      uVar8 = *(ulong *)(puVar1 + 0x10);
      puStack_78 = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar8) {
        FUN_101682c38(1 < *(ulong *)(puVar1 + 0x18),uVar8 + 1,1);
      }
      puVar1 = puStack_78;
      plVar9 = plVar9 + 3;
      *(ulong *)(puStack_78 + 0x10) = uVar8 + 1;
      *(undefined **)(puStack_78 + uVar8 * 8 + 0x20) = puVar7;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar4 = 0;
    func_0x000101682c54(0);
    puVar7 = puVar1;
    func_0x000107c5fc48(puVar1,uVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c52458(puVar3);
    func_0x000107c61170(puVar7);
  }
  func_0x0001000d224c(&puStack_78);
  puVar1 = puStack_78;
  if (puStack_78 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_78);
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101682c38; end: 101682c97;  */

void FUN_101682c38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101682c98();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101682c98; end: 101682dbb;  */

undefined * FUN_101682c98(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101682dbc);
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
    FUN_101682dbc();
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
    func_0x000101682c54(0);
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



/* Entry: 101682dbc; end: 101682e17;  */

void FUN_101682dbc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000101682c54();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dbe500;
  plVar5 = (long *)&UNK_10d9795c8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101682e18; end: 101682e9b;  */

void FUN_101682e18(void)

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



/* Entry: 101682e9c; end: 101683033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101682e9c(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000100b91d00();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_101683034();
  lVar2 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,auStack_68,0,0);
  FUN_101685588(unaff_x20 + lVar2,puVar7);
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_101681b5c(puVar7);
  }
  else {
    func_0x0001016855d8(puVar7,lVar6);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe510);
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dbe510))[1];
    func_0x000107c614f0(uVar5);
    lVar3 = _DAT_112dbe590;
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112dbe558);
    func_0x000107c61428(unaff_x20 + _DAT_112dbe590,auStack_80,0,0);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
    pcVar10 = *(code **)(lVar2 + 8);
    func_0x000107c61434(uVar9);
    (*pcVar10)(lVar6,1,uVar1,uVar9,uVar5,lVar2);
    func_0x000107c6142c(uVar9);
    func_0x00010168561c(lVar6);
  }
  FUN_101683184();
  return;
}



/* Entry: 101683034; end: 101683183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101683034(double param_1)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_78 [24];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112dbe598);
  if (*(char *)(pdVar1 + 1) != '\x01') {
    dVar10 = *pdVar1;
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112dbe528));
    FUN_1016860bc();
    lVar3 = _DAT_112dbe5a0;
    lVar2 = _DAT_112dbe590;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112dbe5a0);
    func_0x000107c61428(unaff_x20 + _DAT_112dbe590,auStack_78,0x21,0);
    uVar8 = *(ulong *)(unaff_x20 + lVar2);
    uVar7 = uVar8;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar2) = uVar8;
    uVar5 = uVar8;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
      FUN_1016856a8(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      *(ulong *)(unaff_x20 + lVar2) = uVar5;
    }
    uVar7 = *(ulong *)(uVar5 + 0x10);
    uVar8 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar7) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1016856a8(uVar8,uVar7 + 1,1,uVar5);
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
    lVar6 = uVar8 + uVar7 * 0x18;
    *(double *)(lVar6 + 0x20) = dVar10;
    *(double *)(lVar6 + 0x28) = param_1 - dVar10;
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(ulong *)(unaff_x20 + lVar2) = uVar8;
    func_0x000107c614a8(auStack_78);
    uVar7 = *(ulong *)(unaff_x20 + lVar3);
    if (0xfffffffffffffffe < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101683184);
      (*pcVar4)();
    }
    *(ulong *)(unaff_x20 + lVar3) = uVar7 + 1;
    *pdVar1 = 0.0;
    *(undefined1 *)(pdVar1 + 1) = 1;
  }
  return;
}



/* Entry: 101683184; end: 1016836b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101683184(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar7 = 0x612f6e;
  lVar5 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_98 = auStack_b0 + -extraout_x8;
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x5f);
  uStack_90 = uStack_78;
  uStack_88 = uStack_70;
  func_0x000107c5fb78(0xd00000000000001c,0x800000010efb49b0);
  lVar5 = unaff_x20 + _DAT_112dbe578;
  func_0x000107c61428(lVar5,&uStack_78,0,0);
  lVar6 = 0;
  func_0x000100b91d00();
  lVar9 = *(long *)(lVar6 + -8);
  lVar8 = lVar5;
  (**(code **)(lVar9 + 0x30))(lVar5,1,lVar6);
  if (((int)lVar8 == 0) && (lVar8 = *(long *)(lVar5 + 0x40), lVar8 != 0)) {
    uVar7 = *(undefined8 *)(lVar5 + 0x38);
    func_0x000107c61434(lVar8);
  }
  else {
    lVar8 = -0x1d00000000000000;
  }
  func_0x000107c5fb78(uVar7,lVar8);
  func_0x000107c6142c(lVar8);
  func_0x000107c5fb78(0xd000000000000019,0x800000010efb49d0);
  lStack_a0 = _DAT_112dbe560;
  bVar4 = *(char *)(unaff_x20 + _DAT_112dbe560) == '\0';
  uVar7 = 0x65757274;
  if (bVar4) {
    uVar7 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar7,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0xd000000000000024,0x800000010efb49f0);
  lStack_a8 = _DAT_112dbe558;
  bVar4 = *(char *)(unaff_x20 + _DAT_112dbe558) == '\0';
  uVar7 = 0x65757274;
  if (bVar4) {
    uVar7 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar7,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uStack_88);
  puVar3 = puStack_98;
  (**(code **)(lVar9 + 0x38))(puStack_98,1,1,lVar6);
  func_0x000107c61428(lVar5,&uStack_90,0x21,0);
  func_0x000101685658(puVar3,lVar5);
  func_0x000107c614a8(&uStack_90);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe580);
  uVar7 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar7);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe588);
  uVar7 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar7);
  lVar5 = _DAT_112dbe590;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe590,&uStack_90,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined **)(unaff_x20 + lVar5) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar7);
  *(undefined8 *)(unaff_x20 + _DAT_112dbe5a0) = 0;
  FUN_1016838b0();
  lVar5 = _DAT_112dbe548;
  uVar7 = 0;
  if (*(long *)(unaff_x20 + _DAT_112dbe548) != 0) {
    func_0x000107c498f8();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  }
  *(undefined8 *)(unaff_x20 + lVar5) = 0;
  func_0x000107c61170(uVar7);
  *(undefined1 *)(unaff_x20 + lStack_a8) = 0;
  *(undefined1 *)(unaff_x20 + lStack_a0) = 0;
  return;
}



/* Entry: 1016836b4; end: 1016838af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016836b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uStack_60 = 0;
  puStack_58 = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(puStack_58);
  lVar5 = _DAT_112dbe560;
  uStack_60 = 0xd000000000000030;
  puStack_58 = (undefined *)0x800000010efb4a40;
  bVar4 = *(char *)(unaff_x20 + _DAT_112dbe560) == '\0';
  uVar10 = 0x65757274;
  if (bVar4) {
    uVar10 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar10,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(puStack_58);
  if ((*(byte *)(unaff_x20 + lVar5) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + lVar5) = 1;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112dbe508);
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112dbe508))[1];
    func_0x000107c614f0(uVar10);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dbe588);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112dbe588))[1];
    pcVar15 = *(code **)(lVar5 + 0x10);
    func_0x000107c61434(uVar3);
    (*pcVar15)(param_2,uVar2,uVar3,uVar10,lVar5);
    func_0x000107c6142c(uVar3);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112dbe510);
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112dbe510))[1];
    func_0x000107c614f0(uVar10);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dbe580);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112dbe580))[1];
    pcVar15 = *(code **)(lVar5 + 0x10);
    func_0x000107c61434(uVar3);
    (*pcVar15)(param_2,uVar2,uVar3,uVar10,lVar5);
    func_0x000107c6142c(uVar3);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe598);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112dbe528));
    FUN_1016860bc();
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  FUN_1016844ec(param_2);
  if ((*(byte *)(unaff_x20 + _DAT_112dbe558) & 1) != 0) {
    return;
  }
  lVar5 = 0;
  func_0x000100b91d00();
  lVar16 = *(long *)(lVar5 + -8);
  lVar13 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)&puStack_80 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd000000000000038,0x800000010efb4a80);
  lVar5 = _DAT_112dbe540;
  bVar4 = *(long *)(unaff_x20 + _DAT_112dbe540) != 0;
  uVar10 = 0x7465736e75;
  if (bVar4) {
    uVar10 = 0x746573;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4) {
    uVar2 = 0xe300000000000000;
  }
  func_0x000107c5fb78(uVar10,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uStack_78);
  if (*(long *)(unaff_x20 + lVar5) == 0) {
    puVar6 = &UNK_1103f2700;
    func_0x000107c613fc(&UNK_1103f2700,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,unaff_x20);
    func_0x000101681be8(param_2,lVar12);
    uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar14 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
    puVar7 = &UNK_1103f2728;
    func_0x000107c613fc(&UNK_1103f2728,uVar14 + lVar13,uVar11 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    func_0x0001016855d8(lVar12,puVar7 + uVar14);
    uStack_60 = 0x101685810;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100fef460;
    puStack_68 = &UNK_1103f2740;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar9 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    func_0x000107c6157c(puVar6);
    func_0x000107c5ca5c(0x3fb9a027525460aa);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    puVar7 = puStack_58;
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar7);
    puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar6);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
    *(undefined **)(unaff_x20 + lVar5) = puVar9;
    func_0x000107c61170(uVar10);
  }
  return;
}



/* Entry: 1016838b0; end: 101683b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016838b0(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112dbe540;
  uVar6 = 0;
  if (*(long *)(unaff_x20 + _DAT_112dbe540) != 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112dbe558) & 1) == 0) {
      lVar1 = unaff_x20 + _DAT_112dbe578;
      func_0x000107c61428(lVar1,auStack_58,0,0);
      lVar4 = 0;
      func_0x000100b91d00();
      lVar5 = lVar1;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
      if ((int)lVar5 == 0) {
        bVar3 = *(int *)(lVar1 + *(int *)(lVar4 + 0x48)) == 7;
      }
      else {
        bVar3 = false;
      }
      lVar1 = unaff_x20 + _DAT_112dbe518;
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar6);
      (**(code **)(lVar5 + 0x20))(0,bVar3,uVar6,lVar5);
      uVar6 = 0;
      if (*(long *)(unaff_x20 + lVar2) == 0) goto LAB_101683998;
    }
    func_0x000107c498f8();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  }
LAB_101683998:
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112dbe550) = 0;
  return;
}



/* Entry: 101683b38; end: 101683f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101683b38(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar3 = 0;
  func_0x000100b91d00();
  lVar13 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_80 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd000000000000038,0x800000010efb4a80);
  lVar3 = _DAT_112dbe540;
  bVar2 = *(long *)(unaff_x20 + _DAT_112dbe540) != 0;
  uVar8 = 0x7465736e75;
  if (bVar2) {
    uVar8 = 0x746573;
  }
  uVar1 = 0xe500000000000000;
  if (bVar2) {
    uVar1 = 0xe300000000000000;
  }
  func_0x000107c5fb78(uVar8,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uStack_78);
  if (*(long *)(unaff_x20 + lVar3) == 0) {
    puVar4 = &UNK_1103f2700;
    func_0x000107c613fc(&UNK_1103f2700,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x000101681be8(param_1,lVar10);
    uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar12 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1103f2728;
    func_0x000107c613fc(&UNK_1103f2728,uVar12 + lVar11,uVar9 | 7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    func_0x0001016855d8(lVar10,puVar5 + uVar12);
    uStack_60 = 0x101685810;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100fef460;
    puStack_68 = &UNK_1103f2740;
    ppuVar6 = &puStack_80;
    puStack_58 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    func_0x000107c6157c(puVar4);
    func_0x000107c5ca5c(0x3fb9a027525460aa);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    puVar5 = puStack_58;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar4);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101683f24; end: 101684053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101683f24(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar2 = 0;
  func_0x000100b91d00();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + _DAT_112dbe570) = 0;
  lVar1 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,auStack_58,0,0);
  FUN_101685588(unaff_x20 + lVar1,puVar4);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_101681b5c(puVar4);
  }
  else {
    func_0x0001016855d8(puVar4,lVar5);
    if (*(char *)(unaff_x20 + _DAT_112dbe568) == '\x01') {
      FUN_1016836b4(lVar5);
    }
    func_0x00010168561c(lVar5);
  }
  return;
}



/* Entry: 101684054; end: 1016841fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101684054(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000100b91d00();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + _DAT_112dbe568) = 3;
  FUN_101683034();
  lVar2 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,auStack_68,0,0);
  FUN_101685588(unaff_x20 + lVar2,puVar7);
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_101681b5c(puVar7);
  }
  else {
    func_0x0001016855d8(puVar7,lVar6);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe510);
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dbe510))[1];
    func_0x000107c614f0(uVar5);
    lVar3 = _DAT_112dbe590;
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112dbe558);
    func_0x000107c61428(unaff_x20 + _DAT_112dbe590,auStack_80,0,0);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
    pcVar10 = *(code **)(lVar2 + 8);
    func_0x000107c61434(uVar9);
    (*pcVar10)(lVar6,1,uVar1,uVar9,uVar5,lVar2);
    func_0x000107c6142c(uVar9);
    func_0x00010168561c(lVar6);
  }
  FUN_101683184();
  return;
}



/* Entry: 1016841fc; end: 1016844eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016841fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_5;
  func_0x000100b91d00();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar6 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(uStack_78);
  uStack_80 = 0xd000000000000018;
  uStack_78 = 0x800000010efb4a20;
  FUN_101685588(param_1,lVar7);
  pcVar8 = *(code **)(lVar4 + 0x30);
  lVar9 = lVar7;
  (*pcVar8)(lVar7,1,lVar2);
  if ((int)lVar9 == 1) {
    FUN_101681b5c(lVar7);
  }
  else {
    uVar5 = *(undefined8 *)(lVar7 + 0x38);
    lVar9 = *(long *)(lVar7 + 0x40);
    func_0x000107c61434(lVar9);
    func_0x00010168561c(lVar7);
    if (lVar9 != 0) goto LAB_101684350;
  }
  lVar9 = -0x1d00000000000000;
  uVar5 = 0x612f6e;
LAB_101684350:
  func_0x000107c5fb78(uVar5,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(uStack_78);
  *(undefined1 *)(unaff_x20 + _DAT_112dbe568) = 1;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe520);
  lVar9 = ((undefined8 *)(unaff_x20 + _DAT_112dbe520))[1];
  func_0x000107c614f0(uVar5);
  uStack_80 = 0xd000000000000026;
  uStack_78 = 0x800000010efb4b90;
  uStack_70 = 0;
  (**(code **)(lVar9 + 8))
            ((long)&uStack_68 + 7,&uStack_80,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lVar9);
  lVar9 = _DAT_112dbe578;
  if (uStack_68._7_1_ == '\x01') {
    func_0x000107c61428(unaff_x20 + _DAT_112dbe578,&uStack_80,0x21,0);
    FUN_1016857c0(param_1,unaff_x20 + lVar9);
    func_0x000107c614a8(&uStack_80);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe580);
    uVar5 = puVar1[1];
    *puVar1 = uStack_a0;
    puVar1[1] = uStack_98;
    func_0x000107c61434();
    func_0x000107c6142c(uVar5);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe588);
    uVar5 = puVar1[1];
    *puVar1 = uStack_90;
    puVar1[1] = uStack_88;
    func_0x000107c61434();
    func_0x000107c6142c(uVar5);
  }
  lVar9 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,&uStack_80,0,0);
  FUN_101685588(unaff_x20 + lVar9,lVar6);
  lVar9 = lVar6;
  (*pcVar8)(lVar6,1,lVar2);
  if ((int)lVar9 == 1) {
    FUN_101681b5c(lVar6);
  }
  else {
    func_0x0001016855d8(lVar6,lVar3);
    FUN_1016836b4(lVar3);
    func_0x00010168561c(lVar3);
  }
  return;
}



/* Entry: 1016844ec; end: 10168477b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016844ec(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000100b91d00();
  lVar14 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)&puStack_90 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(uStack_88);
  lVar3 = _DAT_112dbe548;
  puStack_90 = (undefined *)0xd000000000000030;
  uStack_88 = 0x800000010efb4ac0;
  bVar2 = *(long *)(unaff_x20 + _DAT_112dbe548) != 0;
  uVar8 = 0x7465736e75;
  if (bVar2) {
    uVar8 = 0x746573;
  }
  uVar1 = 0xe500000000000000;
  if (bVar2) {
    uVar1 = 0xe300000000000000;
  }
  func_0x000107c5fb78(uVar8,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uStack_88);
  if (*(long *)(unaff_x20 + lVar3) == 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dbe520);
    uVar9 = (uint)((undefined8 *)(unaff_x20 + _DAT_112dbe520))[1];
    func_0x000107c614f0();
    FUN_10168494c();
    if ((uVar9 & 0xff) != 1) {
      puVar4 = &UNK_1103f2700;
      func_0x000107c613fc(&UNK_1103f2700,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      func_0x000101681be8(param_1,lVar11);
      uVar10 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar15 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
      uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
      puVar5 = &UNK_1103f2778;
      func_0x000107c613fc(&UNK_1103f2778,uVar13 + 8,uVar10 | 7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      func_0x0001016855d8(lVar11,puVar5 + uVar15);
      *(undefined8 *)(puVar5 + uVar13) = uVar8;
      pcStack_70 = FUN_10168586c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100fef460;
      puStack_78 = &UNK_1103f2790;
      ppuVar6 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c61168();
      func_0x000107c6157c(puVar4);
      func_0x000107c5ca5c(uVar8);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      puVar5 = puStack_68;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      func_0x000107c4c190();
      func_0x000107c61180();
      func_0x000107c3d8e0();
      func_0x000107c61170(puVar4);
      uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
      *(undefined **)(unaff_x20 + lVar3) = puVar7;
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 10168477c; end: 10168494b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168477c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    dVar8 = *(double *)(param_2 + _DAT_112dbe550) + 0.1001;
    *(double *)(param_2 + _DAT_112dbe550) = dVar8;
    if (1.0 <= dVar8) {
      lVar5 = param_2 + _DAT_112dbe518;
      uVar1 = *(undefined8 *)(lVar5 + 0x18);
      lVar3 = *(long *)(lVar5 + 0x20);
      func_0x0001000a8868(lVar5,uVar1);
      lVar5 = 0;
      func_0x000100b91d00();
      (**(code **)(lVar3 + 0x20))(1,*(int *)(param_3 + *(int *)(lVar5 + 0x48)) == 7,uVar1,lVar3);
      uVar1 = *(undefined8 *)(param_2 + _DAT_112dbe508);
      lVar5 = ((undefined8 *)(param_2 + _DAT_112dbe508))[1];
      uVar6 = uVar1;
      func_0x000107c614f0(uVar1);
      uVar2 = *(undefined8 *)(param_2 + _DAT_112dbe588);
      uVar4 = ((undefined8 *)(param_2 + _DAT_112dbe588))[1];
      pcVar7 = *(code **)(lVar5 + 8);
      func_0x000107c61434(uVar4);
      func_0x000107c615f0(uVar1);
      (*pcVar7)(param_3,uVar2,uVar4,uVar6,lVar5);
      func_0x000107c615e8(uVar1);
      func_0x000107c6142c(uVar4);
      uVar1 = *(undefined8 *)(param_2 + _DAT_112dbe510);
      lVar5 = ((undefined8 *)(param_2 + _DAT_112dbe510))[1];
      uVar6 = uVar1;
      func_0x000107c614f0(uVar1);
      uVar2 = *(undefined8 *)(param_2 + _DAT_112dbe580);
      uVar4 = ((undefined8 *)(param_2 + _DAT_112dbe580))[1];
      pcVar7 = *(code **)(lVar5 + 0x18);
      func_0x000107c61434(uVar4);
      func_0x000107c615f0(uVar1);
      (*pcVar7)(param_3,uVar2,uVar4,uVar6,lVar5);
      func_0x000107c615e8(uVar1);
      func_0x000107c6142c(uVar4);
      *(undefined1 *)(param_2 + _DAT_112dbe558) = 1;
      FUN_1016838b0();
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10168494c; end: 101684a8f;  */

undefined1  [16] FUN_10168494c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lVar1 = param_1;
  func_0x00010403f724();
  if (lVar1 < 1) {
    uStack_60 = 0xd00000000000003b;
    uStack_58 = 0x800000010efb4b20;
    uStack_50 = 0;
    pcVar4 = *(code **)(param_2 + 8);
    (*pcVar4)(&uStack_48,&uStack_60,&UNK_110738448,&PTR_DAT_11304a4e0,param_1,param_2);
    if ((long)uStack_48 < 1) {
      uStack_60 = 0xd00000000000002b;
      uStack_58 = 0x800000010efb4b60;
      uStack_50 = 1000;
      (*pcVar4)(&uStack_48,&uStack_60,&UNK_110738448,&PTR_DAT_11304a4e0,param_1,param_2);
      if ((long)uStack_48 < 1) {
        dVar5 = 0.0;
        uVar3 = 1;
        goto LAB_101684a6c;
      }
      func_0x000107c61168(PTR_PTR_1126afec0);
      dVar5 = (double)uStack_48;
    }
    else {
      func_0x000107c61168(PTR_PTR_1126afec0);
      dVar5 = (double)uStack_48;
    }
  }
  else {
    puVar2 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x00010403f724();
    dVar5 = (double)(long)puVar2;
  }
  func_0x000107c4cec4(dVar5);
  uVar3 = 0;
LAB_101684a6c:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = dVar5;
  return auVar6;
}


