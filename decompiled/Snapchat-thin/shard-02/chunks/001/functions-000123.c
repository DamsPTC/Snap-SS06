/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019cdc54; end: 1019cdcd3;  */

void FUN_1019cdc54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b1540;
  func_0x000107c61520(&UNK_10d9b1540,&UNK_1104263f0);
  puRam0000000112de6c50 = puVar1;
  return;
}



/* Entry: 1019cdcd4; end: 1019cdd63;  */

long FUN_1019cdcd4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019cdd64; end: 1019cddcf;  */

undefined8 * FUN_1019cdd64(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1019cddd0; end: 1019cde13;  */

undefined8 * FUN_1019cddd0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1019cde14; end: 1019cdeab;  */

int FUN_1019cde14(int *param_1,int param_2)

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



/* Entry: 1019cdeac; end: 1019ce033;  */

/* WARNING: Removing unreachable block (ram,0x0001019cdfec) */
/* WARNING: Removing unreachable block (ram,0x0001019cdf74) */

undefined1 * FUN_1019cdeac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112de6c60;
  func_0x0001000285a8(0x112de6c60,&UNK_10d9b1628);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_1019ce034();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110426560,&UNK_110426560,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c604f4(&uStack_52,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 1019ce034; end: 1019ce073;  */

void FUN_1019ce034(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b16fc;
  func_0x000107c61520(&UNK_10d9b16fc,&UNK_110426560);
  puRam0000000112de6c68 = puVar1;
  return;
}



/* Entry: 1019ce074; end: 1019ce1db;  */

int FUN_1019ce074(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1019ce0f0;
        goto LAB_1019ce0d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1019ce0d4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1019ce0f0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1019ce1dc; end: 1019ce21b;  */

void FUN_1019ce1dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b16d4;
  func_0x000107c61520(&UNK_10d9b16d4,&UNK_110426560);
  puRam0000000112de6c78 = puVar1;
  return;
}



/* Entry: 1019ce21c; end: 1019ce21f;  */

void FUN_1019ce21c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b166c;
  func_0x000107c61520(&UNK_10d9b166c,&UNK_110426560);
  puRam0000000112de6c80 = puVar1;
  return;
}



/* Entry: 1019ce220; end: 1019ce25f;  */

void FUN_1019ce220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b166c;
  func_0x000107c61520(&UNK_10d9b166c,&UNK_110426560);
  puRam0000000112de6c80 = puVar1;
  return;
}



/* Entry: 1019ce260; end: 1019ce263;  */

void FUN_1019ce260(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b1644;
  func_0x000107c61520(&UNK_10d9b1644,&UNK_110426560);
  puRam0000000112de6c88 = puVar1;
  return;
}



/* Entry: 1019ce264; end: 1019ce2a3;  */

void FUN_1019ce264(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b1644;
  func_0x000107c61520(&UNK_10d9b1644,&UNK_110426560);
  puRam0000000112de6c88 = puVar1;
  return;
}



/* Entry: 1019ce2a4; end: 1019ce37f;  */

ulong FUN_1019ce2a4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ce348);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar6;
        FUN_1019cb864(uVar6,param_1);
      }
      uVar1 = uVar6 + 1;
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ce344);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c5d0f0();
      if (uVar4 == 1) {
        return uVar3;
      }
      func_0x000107c61170(uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar5);
  }
  return 0;
}



/* Entry: 1019ce380; end: 1019ce3d3;  */

void FUN_1019ce380(undefined8 *param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1019ce3d4(&uStack_78);
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[7] = uStack_40;
  param_1[6] = uStack_48;
  param_1[9] = uStack_30;
  param_1[8] = uStack_38;
  param_1[10] = uStack_28;
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[3] = uStack_60;
  param_1[2] = uStack_68;
  return;
}



/* Entry: 1019ce3d4; end: 1019ce693;  */

void FUN_1019ce3d4(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_110;
  long lStack_108;
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
  
  if (param_3 == 0) {
    lStack_70 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    goto LAB_1019ce660;
  }
  lVar2 = param_3;
  func_0x000107c61174();
  lVar3 = lVar2;
  func_0x000107c5beac();
  func_0x000107c61180();
  lStack_c8 = 0;
  lStack_d0 = 0;
  if (lVar3 == 0) {
LAB_1019ce644:
    lVar3 = lVar2;
    lStack_70 = 0;
    lStack_e8 = 0;
    lStack_f0 = 0;
    lStack_d8 = 0;
    lStack_e0 = 0;
    lStack_108 = 0;
    lStack_110 = 0;
    lStack_f8 = 0;
    lStack_100 = 0;
  }
  else {
    lVar4 = 0;
    FUN_1019ce6a4();
    lVar5 = lVar3;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar3);
    lVar3 = lVar5;
    FUN_1019ce2a4();
    func_0x000107c6142c(lVar5);
    if (lVar3 == 0) goto LAB_1019ce644;
    lVar5 = lVar3;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    if (lVar5 == 0) {
LAB_1019ce630:
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      goto LAB_1019ce644;
    }
    lVar6 = lVar5;
    func_0x000107c5faec();
    lVar9 = lVar4;
    func_0x000107c61170(lVar5);
    lVar5 = lVar3;
    func_0x000107c3f9b4();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_1019ce630;
    }
    lVar7 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    puVar8 = PTR_PTR_1126de6c8;
    func_0x000107c610f8(PTR_PTR_1126de6c8);
    func_0x000107c5fadc(lVar6,lVar4);
    func_0x000107c6142c(lVar4);
    lVar5 = lVar9;
    func_0x000107c5fadc(lVar7);
    func_0x000107c6142c(lVar9);
    func_0x000107c48eb0(puVar8);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ce694);
      (*pcVar1)();
    }
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    lStack_c0 = lVar4;
    lStack_b8 = lVar5;
    func_0x000107c61434(lVar5);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c6142c(lVar5);
    lVar2 = lStack_b8;
    func_0x000107c61434(lStack_b8);
    func_0x000107c5fb78(0x65746f6d6572,0xe600000000000000);
    func_0x000107c6142c(lVar2);
    lVar5 = lStack_b8;
    lVar2 = lStack_c0;
    func_0x000107c61174(param_2);
    FUN_1019cc6d8(&lStack_c0,lVar2,lVar5,puVar8,param_2,param_3,3);
    lStack_d8 = lStack_a8;
    lStack_e0 = lStack_b0;
    lStack_c8 = lStack_b8;
    lStack_d0 = lStack_c0;
    lStack_f8 = lStack_88;
    lStack_100 = lStack_90;
    lStack_e8 = lStack_98;
    lStack_f0 = lStack_a0;
    lStack_108 = lStack_78;
    lStack_110 = lStack_80;
  }
  func_0x000107c61170(lVar3);
LAB_1019ce660:
  param_1[1] = lStack_c8;
  *param_1 = lStack_d0;
  param_1[3] = lStack_d8;
  param_1[2] = lStack_e0;
  param_1[5] = lStack_e8;
  param_1[4] = lStack_f0;
  param_1[7] = lStack_f8;
  param_1[6] = lStack_100;
  param_1[9] = lStack_108;
  param_1[8] = lStack_110;
  param_1[10] = lStack_70;
  return;
}



/* Entry: 1019ce694; end: 1019ce6a3;  */

undefined1  [16] FUN_1019ce694(void)

{
  return ZEXT816(0x110426648);
}



/* Entry: 1019ce6a4; end: 1019ce6e7;  */

void FUN_1019ce6a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6968 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bb840;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112de6968 = puVar1;
  return;
}



/* Entry: 1019ce6e8; end: 1019cea93;  */

/* WARNING: Removing unreachable block (ram,0x0001019cea88) */
/* WARNING: Removing unreachable block (ram,0x0001019cea90) */

void FUN_1019ce6e8(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  if (param_2 != 0) {
    lVar15 = param_2;
    func_0x000107c61174();
    lVar3 = lVar15;
    func_0x000107c3e990();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      lVar11 = param_3;
      func_0x000107c5fb5c(lVar4,param_3);
      if (0 < lVar3) {
        func_0x000100ba00b8(0);
        func_0x000107c4b1dc(lVar15);
        func_0x000107c61180();
        lVar3 = lVar15;
        func_0x000107c5faec();
        func_0x000107c61170(lVar15);
        lVar12 = param_3;
        FUN_1019cf0e8(lVar4,param_3,lVar3,lVar11);
        func_0x000107c6142c(lVar11);
        func_0x000107c6142c(param_3);
        plVar5 = (long *)PTR_PTR_1126b08b8;
        func_0x000107c610f8();
        lVar15 = lVar4;
        func_0x000107c5fadc(lVar4,lVar12);
        func_0x000107c4766c();
        func_0x000107c61170(lVar15);
        puVar6 = PTR_PTR_1126b08b0;
        func_0x000107c61168();
        iVar2 = 0;
        puVar13 = (undefined *)0xe000000000000000;
        func_0x000107c5fadc();
        func_0x000107c3f71c();
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c30a14();
        lVar15 = (long)iVar2 * 0x15180;
        if (SUB168(SEXT816((long)iVar2) * SEXT816(0x15180),8) != lVar15 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019cea88);
          (*pcVar1)();
        }
        puVar7 = PTR_PTR_1126b9620;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c537f4();
        if (lVar15 / 0x3c < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019cea90);
          (*pcVar1)();
        }
        puVar8 = puVar7;
        func_0x000107c41214();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          puVar13 = (undefined *)0xf000000000000000;
        }
        else {
          puVar16 = puVar8;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar8);
        }
        func_0x000107c61174();
        func_0x000107c61174();
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar14 = PTR___sSSN_11034da80;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8);
        if ((ulong)puVar13 >> 0x3c < 0xf) {
          puVar17 = puVar16;
          func_0x000107c5ee20(puVar16,puVar13);
          func_0x0001000b44c0(puVar16);
        }
        else {
          puVar17 = (undefined *)0x0;
          puVar13 = puVar14;
        }
        puVar16 = PTR_PTR_1126e1540;
        func_0x000107c610f8();
        puVar14 = puVar6;
        func_0x000107c460f0();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(plVar5);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar17);
        func_0x000107c61174();
        plVar9 = plVar5;
        FUN_1019d31e4();
        plVar10 = plVar9;
        FUN_1019cf160();
        lVar15 = *plVar10;
        lVar3 = plVar10[1];
        func_0x000107c61434(lVar3);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(plVar5);
        func_0x000107c61170(puVar6);
        goto LAB_1019cea4c;
      }
      func_0x000107c6142c(param_3);
    }
    func_0x000107c61170(lVar15);
    param_2 = 0;
  }
  puVar14 = (undefined *)0x0;
  puVar13 = (undefined *)0x0;
  plVar9 = (long *)0x0;
  lVar3 = 0;
  lVar15 = 0;
  lVar12 = 0;
  lVar4 = 0;
  puVar16 = (undefined *)0x0;
LAB_1019cea4c:
  *param_1 = lVar4;
  param_1[1] = lVar12;
  param_1[2] = (long)plVar9;
  param_1[3] = (long)puVar13;
  param_1[4] = (long)puVar14;
  param_1[5] = 0;
  param_1[6] = lVar15;
  param_1[7] = lVar3;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = (long)puVar16;
  return;
}



/* Entry: 1019cea94; end: 1019ceaa3;  */

undefined1  [16] FUN_1019cea94(void)

{
  return ZEXT816(0x110426670);
}



/* Entry: 1019ceaa4; end: 1019ceaf7;  */

void FUN_1019ceaa4(undefined8 *param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1019ceaf8(&uStack_78);
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[7] = uStack_40;
  param_1[6] = uStack_48;
  param_1[9] = uStack_30;
  param_1[8] = uStack_38;
  param_1[10] = uStack_28;
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[3] = uStack_60;
  param_1[2] = uStack_68;
  return;
}



/* Entry: 1019ceaf8; end: 1019cec67;  */

void FUN_1019ceaf8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lStack_a0 = 0;
  lStack_98 = 0;
  if (param_2 == 0) {
    lStack_50 = 0;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5062c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c415fc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        func_0x000107c4b1dc();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        lStack_a0 = lVar2;
        lStack_98 = param_3;
        func_0x000107c61434(param_3);
        func_0x000107c5fb78(0x5f,0xe100000000000000);
        func_0x000107c6142c(param_3);
        lVar1 = lStack_98;
        func_0x000107c61434(lStack_98);
        func_0x000107c5fb78(0x746e65746e6f63,0xe700000000000000);
        func_0x000107c6142c(lVar1);
        FUN_1019cc6d8(&lStack_a0,lStack_a0,lStack_98,lVar3,param_2,0,1);
        goto LAB_1019cec40;
      }
    }
    func_0x000107c61170(lVar1);
    lStack_50 = 0;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    lStack_a0 = 0;
    lStack_98 = 0;
  }
LAB_1019cec40:
  param_1[1] = lStack_98;
  *param_1 = lStack_a0;
  param_1[3] = lStack_88;
  param_1[2] = lStack_90;
  param_1[5] = lStack_78;
  param_1[4] = lStack_80;
  param_1[7] = lStack_68;
  param_1[6] = lStack_70;
  param_1[9] = lStack_58;
  param_1[8] = lStack_60;
  param_1[10] = lStack_50;
  return;
}



/* Entry: 1019cec68; end: 1019cec77;  */

undefined1  [16] FUN_1019cec68(void)

{
  return ZEXT816(0x1104266a0);
}



/* Entry: 1019cec78; end: 1019ceccb;  */

void FUN_1019cec78(undefined8 *param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1019ceccc(&uStack_78);
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[7] = uStack_40;
  param_1[6] = uStack_48;
  param_1[9] = uStack_30;
  param_1[8] = uStack_38;
  param_1[10] = uStack_28;
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[3] = uStack_60;
  param_1[2] = uStack_68;
  return;
}



/* Entry: 1019ceccc; end: 1019cef87;  */

/* WARNING: Removing unreachable block (ram,0x0001019cef7c) */
/* WARNING: Removing unreachable block (ram,0x0001019cef84) */

void FUN_1019ceccc(long *param_1,long param_2,undefined *param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  if (param_2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x000107c44fb4();
    func_0x000107c61180();
    if (lVar8 == 0) {
      lVar11 = 0;
    }
    else {
      lVar3 = lVar8;
      func_0x000107c5faec();
      lVar11 = lVar3;
      puVar10 = param_3;
      FUN_1019cbc24();
      if (lVar11 != 0) {
        puVar4 = PTR_PTR_1126b08b0;
        func_0x000107c61168();
        func_0x000107c3f71c();
        func_0x000107c61180();
        func_0x000107c61170();
        iVar2 = (int)lVar8;
        func_0x000107c30a14();
        lVar8 = (long)iVar2 * 0x15180;
        if (SUB168(SEXT816((long)iVar2) * SEXT816(0x15180),8) != lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019cef7c);
          (*pcVar1)();
        }
        puVar5 = PTR_PTR_1126b9620;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c537f4();
        func_0x000107c4c950();
        if (lVar8 / 0x3c < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019cef84);
          (*pcVar1)();
        }
        puVar6 = puVar5;
        func_0x000107c41214();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
          puVar10 = (undefined *)0xf000000000000000;
        }
        else {
          puVar12 = puVar6;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar6);
        }
        func_0x000107c61174();
        func_0x000107c61174();
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar7 = PTR___sSSN_11034da80;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8);
        if ((ulong)puVar10 >> 0x3c < 0xf) {
          puVar9 = puVar12;
          func_0x000107c5ee20(puVar12,puVar10);
          func_0x0001000b44c0(puVar12);
        }
        else {
          puVar9 = (undefined *)0x0;
          puVar10 = puVar7;
        }
        puVar12 = PTR_PTR_1126e1540;
        func_0x000107c610f8();
        puVar7 = puVar4;
        func_0x000107c460f0();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar9);
        FUN_1019d31e4();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        func_0x000107c61174(param_2);
        goto LAB_1019cef40;
      }
      func_0x000107c6142c(param_3);
      func_0x000107c61170(lVar8);
    }
    param_2 = 0;
  }
  puVar10 = (undefined *)0x0;
  puVar7 = (undefined *)0x0;
  param_3 = (undefined *)0x0;
  lVar3 = 0;
  puVar12 = (undefined *)0x0;
LAB_1019cef40:
  *param_1 = lVar3;
  param_1[1] = (long)param_3;
  param_1[2] = lVar11;
  param_1[3] = (long)puVar10;
  param_1[4] = (long)puVar7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = (long)puVar12;
  return;
}



/* Entry: 1019cef88; end: 1019cef9f;  */

undefined1  [16] FUN_1019cef88(void)

{
  return ZEXT816(0x1104266d8);
}



/* Entry: 1019cefa0; end: 1019cf03f;  */

void FUN_1019cefa0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019cf040; end: 1019cf04f;  */

void FUN_1019cf040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1019cf050; end: 1019cf0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf050(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112de6c98;
  uVar2 = 0x112de6c90;
  func_0x0001000285a8(0x112de6c90,&UNK_10d9b19b0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112de6ca0) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019cf0e8; end: 1019cf15f;  */

undefined1  [16]
FUN_1019cf0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61434(param_4);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c61434(param_4);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 1019cf160; end: 1019cf187;  */

undefined * FUN_1019cf160(void)

{
  return &UNK_110426770;
}



/* Entry: 1019cf188; end: 1019cf1b3; -[_TtC17LensFetchExternal18BitmojiIconFetcher fetcherId] */

void FUN_1019cf188(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010d9b1810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1019cf1b4; end: 1019cf4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf1b4(undefined *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  func_0x000107c40450();
  func_0x000107c61180();
  puVar2 = param_1;
  func_0x000107c40470();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    puStack_90 = puVar2;
    uStack_88 = param_2;
    func_0x000100e8b654();
    puVar2 = &UNK_10d9b1850;
    func_0x000107c601dc(&UNK_10d9b1850,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar3,puVar3);
    if (*(long *)(puVar2 + 0x10) == 2) {
      uVar5 = *(undefined8 *)(puVar2 + 0x20);
      puVar3 = *(undefined **)(puVar2 + 0x28);
      uVar6 = *(undefined8 *)(puVar2 + 0x30);
      uVar1 = *(undefined8 *)(puVar2 + 0x38);
      func_0x000107c61434(puVar3);
      func_0x000107c61434(uVar1);
      func_0x000107c6142c(puVar2);
      func_0x000107c6142c(param_2);
      func_0x0001000d224c(&puStack_90);
      puVar2 = puStack_90;
      if (puStack_90 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126b0820;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5fadc(uVar5,puVar3);
        func_0x000107c6142c(puVar3);
        puVar3 = puVar4;
        func_0x000107c5e650();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c5fadc(uVar6,uVar1);
        func_0x000107c6142c(uVar1);
        puVar4 = puVar3;
        func_0x000107c5e460();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar6);
        puVar7 = puVar4;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar8 = puVar2;
        func_0x000107c42fe8(puVar2);
        func_0x000107c61180();
        puVar3 = &UNK_110426790;
        func_0x000107c613fc(&UNK_110426790,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        puVar4 = &UNK_1104267b8;
        func_0x000107c613fc(&UNK_1104267b8,0x30,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined **)(puVar4 + 0x18) = puVar7;
        *(code **)(puVar4 + 0x20) = param_4;
        *(undefined8 *)(puVar4 + 0x28) = param_5;
        pcStack_70 = FUN_1019cf654;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_10134a1dc;
        puStack_78 = &UNK_1104267d0;
        puStack_68 = puVar4;
        func_0x000107c60bc4(&puStack_90);
        puVar3 = puStack_68;
        func_0x000107c61174(puVar7);
        func_0x000107c6157c(param_5);
        func_0x000107c61574(puVar3);
        func_0x000107c5dc64(puVar8);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar8);
        return;
      }
      func_0x000107c6142c(uVar1);
      puVar2 = puVar3;
    }
    else {
      func_0x000107c6142c(param_2);
    }
    func_0x000107c6142c(puVar2);
  }
  (*param_4)(0);
  return;
}



/* Entry: 1019cf4ac; end: 1019cf653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf4ac(long param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126af5d0;
    if (param_1 == 0) {
      if (param_2 == 0) {
        func_0x000107c61168(PTR_PTR_1126af5d0);
        puVar3 = puVar2;
        func_0x0001019cfbac();
        puVar4 = &UNK_110426900;
        func_0x000107c613f8(&UNK_110426900,puVar3,0,0);
        puVar3 = puVar4;
        func_0x000107c5ed2c();
        func_0x000107c614ac(puVar4);
        func_0x000107c42d78(puVar2);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
      }
      else {
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c614b0(param_2);
        lVar1 = param_2;
        func_0x000107c5ed2c(param_2);
        func_0x000107c42d78(puVar2);
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        func_0x000107c614ac(param_2);
      }
    }
    else {
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
    }
    puVar4 = PTR_PTR_1126dfa88;
    func_0x000107c61168();
    func_0x000107c41be0();
    func_0x000107c61180();
    puStack_70 = puVar4;
    func_0x0001002a64a8(&puStack_70);
    (*param_5)(1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1019cf654; end: 1019cf67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf654(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126af5d0;
    if (param_1 == 0) {
      if (param_2 == 0) {
        func_0x000107c61168(PTR_PTR_1126af5d0);
        puVar5 = puVar4;
        func_0x0001019cfbac();
        puVar6 = &UNK_110426900;
        func_0x000107c613f8(&UNK_110426900,puVar5,0,0);
        puVar5 = puVar6;
        func_0x000107c5ed2c();
        func_0x000107c614ac(puVar6);
        func_0x000107c42d78(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
      }
      else {
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c614b0(param_2);
        lVar3 = param_2;
        func_0x000107c5ed2c(param_2);
        func_0x000107c42d78(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c614ac(param_2);
      }
    }
    else {
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
    }
    puVar6 = PTR_PTR_1126dfa88;
    func_0x000107c61168();
    func_0x000107c41be0();
    func_0x000107c61180();
    puStack_70 = puVar6;
    func_0x0001002a64a8(&puStack_70);
    (*pcVar1)(1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1019cf67c; end: 1019cf6f7; -[_TtC17LensFetchExternal18BitmojiIconFetcher fetchItem:requestPriority:importance:completion:] */

/* WARNING: Possible PIC construction at 0x0001019cf6e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019cf6e4) */

void FUN_1019cf67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c60bc4(param_6);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1019cf7f4(param_3,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1019cf6f8; end: 1019cf71b;  */

void FUN_1019cf6f8(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1019cf71c; end: 1019cf743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf71c(void)

{
  func_0x0001004575f0();
  return;
}



/* Entry: 1019cf744; end: 1019cf79f; -[_TtC17LensFetchExternal18BitmojiIconFetcher init] */

void FUN_1019cf744(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFetchExternal.BitmojiIconFetcher",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019cf770);
  (*pcVar1)();
}



/* Entry: 1019cf7a0; end: 1019cf7d7; -[_TtC17LensFetchExternal18BitmojiIconFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019cf7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019cf7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112de6ca0));
  return;
}



/* Entry: 1019cf7d8; end: 1019cf7f3;  */

undefined1  [16] FUN_1019cf7d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010d9b1810;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Entry: 1019cf7f4; end: 1019cfb63;  */

/* WARNING: Possible PIC construction at 0x0001019cfa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019cfab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019cfb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019cfa9c) */
/* WARNING: Removing unreachable block (ram,0x0001019cfabc) */
/* WARNING: Removing unreachable block (ram,0x0001019cfb44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf7f4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_110426818;
  uVar9 = 0x18;
  func_0x000107c613fc(&UNK_110426818,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  func_0x000107c40450();
  func_0x000107c61180();
  puVar3 = param_1;
  func_0x000107c40470();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    puVar4 = puVar3;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    puStack_90 = puVar3;
    uStack_88 = uVar9;
    func_0x000100e8b654();
    puVar3 = &UNK_10d9b1850;
    func_0x000107c601dc(&UNK_10d9b1850,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar4,puVar4);
    if (*(long *)(puVar3 + 0x10) == 2) {
      uVar6 = *(undefined8 *)(puVar3 + 0x20);
      puVar4 = *(undefined **)(puVar3 + 0x28);
      uVar7 = *(undefined8 *)(puVar3 + 0x30);
      uVar1 = *(undefined8 *)(puVar3 + 0x38);
      func_0x000107c61434(puVar4);
      func_0x000107c61434(uVar1);
      func_0x000107c6142c(puVar3);
      func_0x000107c6142c(uVar9);
      func_0x0001000d224c(&puStack_90);
      puVar3 = puStack_90;
      if (puStack_90 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b0820;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5fadc(uVar6,puVar4);
        func_0x000107c6142c(puVar4);
        puVar4 = puVar5;
        func_0x000107c5e650();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c5fadc(uVar7,uVar1);
        func_0x000107c6142c(uVar1);
        puVar5 = puVar4;
        func_0x000107c5e460();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar7);
        puVar8 = puVar5;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c42fe8(puVar3);
        func_0x000107c61180();
        puVar3 = &UNK_110426790;
        func_0x000107c613fc(&UNK_110426790,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_2);
        puVar4 = &UNK_110426840;
        func_0x000107c613fc(&UNK_110426840,0x30,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined **)(puVar4 + 0x18) = puVar8;
        *(code **)(puVar4 + 0x20) = FUN_1019cfb64;
        *(undefined **)(puVar4 + 0x28) = puVar2;
        pcStack_70 = FUN_1019cfd1c;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_10134a1dc;
        puStack_78 = &UNK_110426858;
        puStack_68 = puVar4;
        func_0x000107c60bc4(&puStack_90);
        puVar3 = puStack_68;
        func_0x000107c61174(puVar8);
        func_0x000107c6157c(puVar2);
        puVar2 = puVar3;
        goto code_r0x000107c61574;
      }
      func_0x000107c6142c(uVar1);
      puVar3 = puVar4;
    }
    else {
      func_0x000107c6142c(uVar9);
    }
    func_0x000107c6142c(puVar3);
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1019cfb64; end: 1019cfb77;  */

void FUN_1019cfb64(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001019cfb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1019cfb78; end: 1019cfbeb;  */

void FUN_1019cfb78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019cfbec; end: 1019cfcdb;  */

uint FUN_1019cfbec(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1019cfcdc; end: 1019cfd1b;  */

void FUN_1019cfcdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b18e8;
  func_0x000107c61520(&UNK_10d9b18e8,&UNK_110426900);
  puRam0000000112de6cd8 = puVar1;
  return;
}



/* Entry: 1019cfd1c; end: 1019cfd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cfd1c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126af5d0;
    if (param_1 == 0) {
      if (param_2 == 0) {
        func_0x000107c61168(PTR_PTR_1126af5d0);
        puVar5 = puVar4;
        func_0x0001019cfbac();
        puVar6 = &UNK_110426900;
        func_0x000107c613f8(&UNK_110426900,puVar5,0,0);
        puVar5 = puVar6;
        func_0x000107c5ed2c();
        func_0x000107c614ac(puVar6);
        func_0x000107c42d78(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
      }
      else {
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c614b0(param_2);
        lVar3 = param_2;
        func_0x000107c5ed2c(param_2);
        func_0x000107c42d78(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c614ac(param_2);
      }
    }
    else {
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
    }
    puVar6 = PTR_PTR_1126dfa88;
    func_0x000107c61168();
    func_0x000107c41be0();
    func_0x000107c61180();
    puStack_70 = puVar6;
    func_0x0001002a64a8(&puStack_70);
    (*pcVar1)(1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1019cfd34; end: 1019cfdf3;  */

void FUN_1019cfd34(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1019cfdf4; end: 1019cfdf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cfdf4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar3 = 0;
  func_0x000100ba00b8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112de6c98;
  uVar5 = 0x112de6c90;
  func_0x0001000285a8(0x112de6c90,&UNK_10d9b19b0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112de6ca0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar6;
  param_1[1] = &PTR_DAT_1104267f8;
  return;
}



/* Entry: 1019cfdf8; end: 1019cff07;  */

void FUN_1019cfdf8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_110426ca8;
  func_0x000107c613fc(&UNK_110426ca8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1019d092c;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_1019d0934;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1019d09f0;
  puStack_58 = &UNK_110426cc0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c7e4(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x73,0x22,0x56,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019cff08);
  (*pcVar1)();
}



/* Entry: 1019cff08; end: 1019d0047;  */

void FUN_1019cff08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar3 = &UNK_110426cf8;
  func_0x000107c613fc(&UNK_110426cf8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = &UNK_110426d20;
  func_0x000107c613fc(&UNK_110426d20,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1019d0980;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_60 = FUN_1019d0988;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010a45c8;
  puStack_68 = &UNK_110426d38;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x73,0x23,0x2a,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d0048);
  (*pcVar2)();
}



/* Entry: 1019d0048; end: 1019d0107;  */

void FUN_1019d0048(long param_1,long param_2,undefined8 param_3)

{
  long lStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61174(param_1);
      func_0x0001000d224c(&lStack_50);
      if (lStack_50 != 0) {
        func_0x000107c4045c(param_3);
        func_0x000107c61180();
        func_0x000107c55d64(lStack_50);
        func_0x000107c615e8(lStack_50);
        func_0x000107c61170(param_3);
      }
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1019d0108; end: 1019d021b;  */

void FUN_1019d0108(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_110426be0;
  func_0x000107c613fc(&UNK_110426be0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1019d091c;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x1019d09e0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1019d09ec;
  puStack_58 = &UNK_110426bf8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c7e8(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x73,0x31,0x2e,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d021c);
  (*pcVar1)();
}



/* Entry: 1019d021c; end: 1019d039f;  */

void FUN_1019d021c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = &UNK_110426c30;
  func_0x000107c613fc(&UNK_110426c30,0x20,7);
  *(long *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar3 = &UNK_110426c58;
  func_0x000107c613fc(&UNK_110426c58,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x1019d0924;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uStack_60 = 0x1019d09e8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10103b958;
  puStack_68 = &UNK_110426c70;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c4c754(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61428(param_3 + 0x10,&puStack_80,0,0);
  puVar5 = (undefined *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c547f4(*(undefined8 *)(puVar5 + 0x10));
    func_0x000107c61574(puVar2);
    puVar2 = puVar5;
  }
  func_0x000107c61574(puVar2);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x73,0x33,0x34,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d03a0);
  (*pcVar1)();
}



/* Entry: 1019d03a0; end: 1019d0417;  */

void FUN_1019d03a0(long param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c3eefc(*(undefined8 *)(param_2 + 0x10));
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 1019d0418; end: 1019d0527;  */

void FUN_1019d0418(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_110426b18;
  func_0x000107c613fc(&UNK_110426b18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1019d08ec;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_1019d08f4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1019d0780;
  puStack_58 = &UNK_110426b30;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c7e0(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x73,0x40,0x57,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d0528);
  (*pcVar1)();
}



/* Entry: 1019d0528; end: 1019d0667;  */

void FUN_1019d0528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar3 = &UNK_110426b68;
  func_0x000107c613fc(&UNK_110426b68,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = &UNK_110426b90;
  func_0x000107c613fc(&UNK_110426b90,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1019d0914;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_60 = 0x1019d09e4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1019d0744;
  puStack_68 = &UNK_110426ba8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x73,0x42,0x28,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d0668);
  (*pcVar2)();
}



/* Entry: 1019d0668; end: 1019d0743;  */

void FUN_1019d0668(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  if (param_1 != 0) {
    uVar1 = 0;
    lStack_48 = param_1;
    func_0x000107c615f0();
    func_0x000107c6147c(&uStack_60,&lStack_48,PTR___syXlN_11034f1a0 + 8,PTR___sSSN_11034da80,6);
    if ((uVar1 & 1) != 0) {
      func_0x000107c61428(param_2 + 0x10,&uStack_60,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 == 0) {
        func_0x000107c6142c(uStack_58);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        uVar2 = uStack_60;
        func_0x000107c5fadc(uStack_60,uStack_58);
        func_0x000107c3ef30(uVar3);
        func_0x000107c6142c(uStack_58);
        func_0x000107c61574(param_2);
        func_0x000107c61170(uVar2);
      }
    }
  }
  return;
}



/* Entry: 1019d0744; end: 1019d077f;  */

void FUN_1019d0744(long param_1,undefined8 param_2)

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



/* Entry: 1019d0780; end: 1019d07fb;  */

/* WARNING: Possible PIC construction at 0x0001019d07d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d07dc) */

void FUN_1019d0780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019d07fc; end: 1019d0847;  */

void FUN_1019d07fc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019d0848; end: 1019d08cb;  */

void FUN_1019d0848(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019d08cc; end: 1019d08f3;  */

void FUN_1019d08cc(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_110426ca8;
  func_0x000107c613fc(&UNK_110426ca8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1019d092c;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_1019d0934;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1019d09f0;
  puStack_58 = &UNK_110426cc0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c7e4(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x73,0x22,0x56,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019cff08);
  (*pcVar1)();
}



/* Entry: 1019d08f4; end: 1019d0913;  */

void FUN_1019d08f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019d0914; end: 1019d0933;  */

void FUN_1019d0914(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0;
    lStack_48 = param_1;
    func_0x000107c615f0();
    func_0x000107c6147c(&uStack_60,&lStack_48,PTR___syXlN_11034f1a0 + 8,PTR___sSSN_11034da80,6);
    if ((uVar1 & 1) != 0) {
      func_0x000107c61428(lVar2 + 0x10,&uStack_60,0,0);
      lVar2 = lVar2 + 0x10;
      func_0x000107c61648();
      if (lVar2 == 0) {
        func_0x000107c6142c(uStack_58);
      }
      else {
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        uVar3 = uStack_60;
        func_0x000107c5fadc(uStack_60,uStack_58);
        func_0x000107c3ef30(uVar4);
        func_0x000107c6142c(uStack_58);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(uVar3);
      }
    }
  }
  return;
}



/* Entry: 1019d0934; end: 1019d0953;  */

void FUN_1019d0934(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019d0954; end: 1019d097f;  */

void FUN_1019d0954(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019d0980; end: 1019d0987;  */

void FUN_1019d0980(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      func_0x0001000d224c(&lStack_50);
      if (lStack_50 != 0) {
        func_0x000107c4045c(uVar2);
        func_0x000107c61180();
        func_0x000107c55d64(lStack_50);
        func_0x000107c615e8(lStack_50);
        func_0x000107c61170(uVar2);
      }
      func_0x000107c61574(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1019d0988; end: 1019d09a7;  */

void FUN_1019d0988(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019d09a8; end: 1019d09ff;  */

void FUN_1019d09a8(long param_1,long param_2)

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



/* Entry: 1019d0a00; end: 1019d0a6f;  */

void FUN_1019d0a00(undefined8 *param_1,long param_2)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = *(undefined1 *)(param_1 + 6);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001019d0c38(&uStack_60);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1019d0a70; end: 1019d0e1b;  */

void FUN_1019d0a70(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_220 [96];
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
  undefined1 uStack_160;
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
  long lStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_e8 [24];
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
  char cStack_70;
  
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  cStack_70 = *(char *)(param_1 + 0xc);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_e8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  uVar3 = param_1[9];
  uVar2 = param_1[8];
  lVar7 = param_1[0xb];
  uVar6 = param_1[10];
  uStack_f0 = *(undefined1 *)(param_1 + 0xc);
  uVar4 = param_1[1];
  uStack_150 = *param_1;
  uVar8 = param_1[3];
  uStack_140 = param_1[2];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uVar5 = param_1[7];
  uStack_120 = param_1[6];
  uStack_148 = uVar4;
  uStack_138 = uVar8;
  uStack_118 = uVar5;
  uStack_110 = uVar2;
  uStack_108 = uVar3;
  uStack_100 = uVar6;
  lStack_f8 = lVar7;
  if (cStack_70 == '\x01') {
LAB_1019d0b04:
    func_0x000107c61574();
  }
  else {
    uStack_178 = param_1[9];
    uStack_180 = param_1[8];
    uStack_168 = param_1[0xb];
    uStack_170 = param_1[10];
    uStack_160 = *(undefined1 *)(param_1 + 0xc);
    uStack_1b8 = param_1[1];
    uStack_1c0 = *param_1;
    uStack_1a8 = param_1[3];
    uStack_1b0 = param_1[2];
    uStack_198 = param_1[5];
    uStack_1a0 = param_1[4];
    uStack_188 = param_1[7];
    uStack_190 = param_1[6];
    FUN_1019d0e58(&uStack_1c0,auStack_220,0x112de6498,&UNK_10d9b0ee8);
    FUN_1019d0e58(&uStack_150,auStack_220,0x112de6498,&UNK_10d9b0ee8);
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    if (lVar7 != 0) {
      lVar1 = lVar7;
      func_0x000107c44314();
      if (lVar1 == 0) {
        func_0x000107c3ef14(*(undefined8 *)(param_2 + 0x10));
        func_0x000107c615e8(lVar7);
        func_0x0001019d0ea0(&uStack_d0,0x112de6f38,&UNK_10d9b1a90);
        goto LAB_1019d0b04;
      }
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61574(param_2);
    func_0x0001019d0ea0(&uStack_d0,0x112de6f38,&UNK_10d9b1a90);
  }
  return;
}



/* Entry: 1019d0e1c; end: 1019d0e47;  */

void FUN_1019d0e1c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019d0e48; end: 1019d0e57;  */

void FUN_1019d0e48(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = *(undefined1 *)(param_1 + 6);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001019d0c38(&uStack_60);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1019d0e58; end: 1019d0f3b;  */

undefined8 FUN_1019d0e58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1019d0f3c; end: 1019d1003;  */

void FUN_1019d0f3c(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined1 auStack_110 [96];
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
  long lStack_58;
  char cStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)(param_1 + 0xc);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    lVar2 = param_1[0xb];
    uStack_60 = param_1[10];
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    lStack_58 = lVar2;
    cStack_50 = cVar1;
    if (cVar1 != '\x01') {
      FUN_1019d1614(&uStack_b0,auStack_110,0x112de6498,&UNK_10d9b0ee8);
      FUN_1019c6544(&uStack_b0);
      if (lVar2 != 0) {
        FUN_1019d1318(param_1,lVar2,0);
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1019d1004; end: 1019d1317;  */

void FUN_1019d1004(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_128 [88];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  if (*(char *)(param_1 + 0x30) != '\x01') {
    lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    if (lVar10 != 0) {
      lVar7 = *(long *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
      do {
        uStack_c8 = puVar8[1];
        uStack_d0 = *puVar8;
        uVar12 = puVar8[3];
        lVar9 = puVar8[2];
        uStack_a8 = puVar8[5];
        uVar11 = puVar8[4];
        uStack_98 = puVar8[7];
        uStack_a0 = puVar8[6];
        lStack_88 = puVar8[9];
        lStack_90 = puVar8[8];
        uStack_80 = puVar8[10];
        if (*(long *)(lVar7 + 0x10) != 0) {
          lStack_c0 = lVar9;
          uStack_b8 = uVar12;
          uStack_b0 = uVar11;
          FUN_1019c5260(&uStack_d0,auStack_128);
          func_0x000107c61434(uVar12);
          func_0x000107c61434(lVar7);
          uVar5 = uVar12;
          FUN_1019c69fc(lVar9,uVar12,uVar11);
          if ((uVar5 & 1) == 0) {
            FUN_1019c6544(&uStack_d0);
            func_0x000107c6142c(uVar12);
            func_0x000107c6142c(lVar7);
          }
          else {
            lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + lVar9 * 8);
            func_0x000107c615f0(lVar9);
            func_0x000107c6142c(lVar7);
            func_0x000107c6142c(uVar12);
            if ((byte)uStack_a8 - 2 < 2) {
              if (lStack_88 == 0) {
LAB_1019d1204:
                func_0x000107c615e8(lVar9);
                FUN_1019c6544(&uStack_d0);
                goto LAB_1019d1070;
              }
              lVar1 = lStack_88;
              func_0x000107c61174();
              lVar2 = lVar9;
              func_0x000107c44314();
              if (lVar2 == 0) {
                lVar2 = lVar9;
                func_0x000107c4407c();
                func_0x000107c61180();
                if (lVar2 == 0) goto LAB_1019d112c;
                func_0x000107c61170();
              }
              else {
LAB_1019d112c:
                lVar2 = lVar9;
                func_0x000107c44144();
                func_0x000107c61180();
                lVar3 = lVar2;
                func_0x000107c4d5c8();
                func_0x000107c61180();
                func_0x000107c61170(lVar2);
                if (lVar3 != 0) {
                  func_0x000107c50650(lVar3);
                  func_0x000107c61170(lVar3);
                }
              }
              lVar2 = lVar9;
              func_0x000107c44144(lVar9);
              func_0x000107c61180();
              func_0x000107c4b76c();
              func_0x000107c61170(lVar2);
              func_0x000107c4bc5c(uVar6);
              func_0x000107c615e8(lVar9);
              FUN_1019c6544(&uStack_d0);
              func_0x000107c61170(lVar1);
            }
            else {
              if (((byte)uStack_a8 == 0) || (lStack_90 == 0)) goto LAB_1019d1204;
              lVar1 = lStack_90;
              func_0x000107c61174();
              lVar2 = lVar9;
              func_0x000107c44144();
              func_0x000107c61180();
              lVar3 = lVar2;
              func_0x000107c4b76c();
              if (lVar3 == 2) {
                lVar3 = lVar9;
                func_0x000107c44314();
                if (lVar3 == 0) {
                  lVar3 = lVar9;
                  func_0x000107c4407c();
                  func_0x000107c61180();
                  if (lVar3 == 0) goto LAB_1019d11b8;
                  func_0x000107c61170();
                }
                else {
LAB_1019d11b8:
                  lVar3 = lVar9;
                  func_0x000107c44144();
                  func_0x000107c61180();
                  lVar4 = lVar3;
                  func_0x000107c4d5c8();
                  func_0x000107c61180();
                  func_0x000107c61170(lVar3);
                  if (lVar4 != 0) {
                    func_0x000107c50650(lVar4);
                    func_0x000107c61170(lVar4);
                  }
                }
                func_0x000107c4bc60(uVar6);
              }
              func_0x000107c615e8(lVar9);
              FUN_1019c6544(&uStack_d0);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
            }
          }
        }
LAB_1019d1070:
        puVar8 = puVar8 + 0xb;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}



/* Entry: 1019d1318; end: 1019d147b;  */

/* WARNING: Possible PIC construction at 0x0001019d13a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d143c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d13ac) */
/* WARNING: Removing unreachable block (ram,0x0001019d1440) */

void FUN_1019d1318(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  if (*(byte *)(param_1 + 0x28) - 2 < 2) {
    lStack_58 = *(long *)(param_1 + 0x48);
    if (lStack_58 == 0) {
      return;
    }
    FUN_1019d1614(&lStack_58,auStack_60,0x112de7028,&UNK_10d9b1af8);
    FUN_1019d14a8(param_2,param_3);
    func_0x000107c44144(param_2);
    func_0x000107c61180();
    func_0x000107c4b76c();
    lVar1 = param_2;
  }
  else {
    if (*(byte *)(param_1 + 0x28) == 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c61174();
    lVar2 = param_2;
    func_0x000107c44144();
    func_0x000107c61180();
    func_0x000107c4b76c();
    if (lVar2 == 2) {
      FUN_1019d14a8(param_2,param_3);
      func_0x000107c4bc60(*(undefined8 *)(unaff_x20 + 0x30));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1019d147c; end: 1019d14a7;  */

void FUN_1019d147c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019d14a8; end: 1019d15bb;  */

long FUN_1019d14a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lStack_40;
  long lStack_38;
  
  uVar5 = 0;
  lVar2 = param_1;
  func_0x000107c44314();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c4407c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61170();
      return 200;
    }
  }
  func_0x000107c44144();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c4d5c8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar2 == 0) {
    if (param_2 != 0) {
      lStack_38 = param_2;
      func_0x000107c614b0(param_2);
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar4 = 0;
      func_0x000100ea57c8(0);
      func_0x000107c6147c(&lStack_40,&lStack_38,uVar3,uVar4,6);
      if ((uVar5 & 1) != 0) {
        lVar2 = lStack_40;
        func_0x000107c3fcb0(lStack_40);
        func_0x000107c61170(lStack_40);
        return lVar2;
      }
    }
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c50650(lVar2);
    func_0x000107c61170(lVar2);
    lVar2 = (long)(int)lVar1;
  }
  return lVar2;
}



/* Entry: 1019d15bc; end: 1019d1603;  */

undefined8 FUN_1019d15bc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112de7028;
  func_0x0001000285a8(0x112de7028,&UNK_10d9b1af8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1019d1604; end: 1019d1613;  */

void FUN_1019d1604(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1019d1004(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1019d1614; end: 1019d165b;  */

undefined8 FUN_1019d1614(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1019d165c; end: 1019d16ab;  */

void FUN_1019d165c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 1019d16ac; end: 1019d16e7;  */

void FUN_1019d16ac(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019d16e8; end: 1019d1733;  */

undefined1  [16] FUN_1019d16e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(0x7065647665645f,0xe700000000000000);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1019d1734; end: 1019d1743;  */

undefined1  [16] FUN_1019d1734(void)

{
  return ZEXT816(0x110426e98);
}



/* Entry: 1019d1744; end: 1019d1793;  */

void FUN_1019d1744(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112de7100 != 0) {
    return;
  }
  puVar1 = &UNK_110426eb8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112de7100 = param_1;
  return;
}



/* Entry: 1019d1794; end: 1019d1797;  */

void FUN_1019d1794(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112de7108 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1019d1744(0xff);
  puVar2 = &UNK_10d9b1c40;
  func_0x000107c61520(&UNK_10d9b1c40,uVar1);
  puRam0000000112de7108 = puVar2;
  return;
}



/* Entry: 1019d1798; end: 1019d17db;  */

void FUN_1019d1798(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112de7108 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1019d1744(0xff);
  puVar2 = &UNK_10d9b1c40;
  func_0x000107c61520(&UNK_10d9b1c40,uVar1);
  puRam0000000112de7108 = puVar2;
  return;
}



/* Entry: 1019d17dc; end: 1019d1887;  */

void FUN_1019d17dc(void)

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



/* Entry: 1019d1888; end: 1019d1897;  */

void FUN_1019d1888(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1019d1898; end: 1019d1ecb;  */

/* WARNING: Possible PIC construction at 0x0001019d18ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d18b0) */

void FUN_1019d1898(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1019d1ecc; end: 1019d1edb;  */

void FUN_1019d1ecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1019d1edc; end: 1019d1f57;  */

long FUN_1019d1edc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019d1f58; end: 1019d1fff;  */

undefined8 * FUN_1019d1f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar2 = param_2[8];
  uVar5 = param_2[9];
  param_1[8] = uVar2;
  param_1[9] = uVar5;
  uVar1 = param_2[10];
  uVar6 = param_2[0xb];
  param_1[10] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar1);
  func_0x000107c614b0(uVar6);
  param_1[0xb] = uVar6;
  return param_1;
}



/* Entry: 1019d2000; end: 1019d20fb;  */

undefined8 * FUN_1019d2000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar1 = param_2[0xb];
  func_0x000107c614b0(uVar1);
  uVar2 = param_1[0xb];
  param_1[0xb] = uVar1;
  func_0x000107c614ac(uVar2);
  return param_1;
}



/* Entry: 1019d20fc; end: 1019d2197;  */

undefined8 * FUN_1019d20fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  func_0x000107c6142c(param_1[7]);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1[9]);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c614ac(uVar2);
  return param_1;
}



/* Entry: 1019d2198; end: 1019d2237;  */

int FUN_1019d2198(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019d2238; end: 1019d283f;  */

long FUN_1019d2238(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}


