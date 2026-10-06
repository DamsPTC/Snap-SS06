/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016c32a4; end: 1016c32b3;  */

void FUN_1016c32a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1016c32b4; end: 1016c33c3;  */

long FUN_1016c32b4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x48);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    func_0x0001016c3310();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar1;
    func_0x000107c61174();
    func_0x0001016c5d18(uVar3);
  }
  FUN_1016c5e90(lVar2);
  return lVar1;
}



/* Entry: 1016c33c4; end: 1016c344b;  */

undefined8
FUN_1016c33c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c614f0(param_4);
  uVar1 = param_2;
  (*param_5)(param_1,param_2,param_3,param_4);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 1016c344c; end: 1016c34a3;  */

void FUN_1016c344c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1016c34a4();
    FUN_1016c36e8();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1016c34a4; end: 1016c36e7;  */

/* WARNING: Removing unreachable block (ram,0x0001016c3564) */

void FUN_1016c34a4(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  
  lVar1 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016c32b4();
  if (lVar1 == 0) {
    func_0x0001007d6c8c(3,0xd00000000000002d,0x800000010efb7670);
  }
  else {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x20));
    param_1 = param_1 - *(double *)(unaff_x20 + 0x30);
    uVar2 = 0;
    dStack_60 = param_1;
    FUN_1016c5edc(0,0x112dc10c0,&PTR_PTR_1126a7960);
    func_0x0001031acfe4(0,0,FUN_1016c5f1c,&uStack_70,lVar1,uVar2,PTR___sytN_11034f1b0 + 8);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1b);
    func_0x000107c5fb78(0xd000000000000019,0x800000010efb76c0);
    func_0x000107c5fddc(param_1,&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar2 = uStack_68;
    func_0x0001007d6c8c(0,uStack_70,uStack_68);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1016c36e8; end: 1016c3927;  */

/* WARNING: Removing unreachable block (ram,0x0001016c3738) */

void FUN_1016c36e8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  ulong uStack_58;
  undefined8 uStack_50;
  
  uVar1 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016c4724();
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0x3a6b6f2064616572;
  uStack_50 = 0xe900000000000020;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x73776f7220,0xe500000000000000);
  uVar3 = uStack_50;
  func_0x0001007d6c8c(0,uStack_58,uStack_50);
  func_0x000107c6142c(uVar3);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  if (lVar5 == 0) {
    func_0x000107c61434(uVar1);
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar5);
    uVar2 = uVar1;
    FUN_1016c567c(uVar1,lVar5);
    func_0x000107c6142c(lVar5);
    if ((uVar2 & 1) != 0) {
      func_0x000107c61430(uVar1,2);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  *(ulong *)(unaff_x20 + 0x40) = uVar1;
  func_0x000107c6142c(uVar3);
  uStack_58 = uVar1;
  func_0x000100087c34(&uStack_58);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1016c3928; end: 1016c39a7;  */

void FUN_1016c3928(long param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [24];
  
  puVar2 = auStack_38;
  func_0x000107c61428(param_1 + 0x10,puVar2,0,0);
  uVar1 = (uint)puVar2;
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1016c39a8();
    if ((param_2 & 1) != 0) {
      func_0x0001016c3c74();
      if ((uVar1 & 0xff) != 1) {
        func_0x0001016c3e04(0,1);
      }
      FUN_1016c36e8();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1016c39a8; end: 1016c403b;  */

/* WARNING: Removing unreachable block (ram,0x0001016c3ab0) */

undefined8 FUN_1016c39a8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  double dStack_50;
  char cStack_48;
  
  lVar1 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016c32b4();
  if (lVar1 == 0) {
    func_0x0001007d6c8c(3,0xd000000000000026,0x800000010efb7730);
  }
  else {
    uVar2 = 0;
    puStack_60 = param_1;
    FUN_1016c5edc(0,0x112dc10c0,&PTR_PTR_1126a7960);
    uVar3 = 0x112dc10e8;
    func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
    func_0x0001031ac8e8(&dStack_50,0,0,0x1016c5f60,&uStack_70,lVar1,uVar2,uVar3);
    if ((cStack_48 == '\x01') || (dStack_50 < (double)param_1[0xb])) {
      puStack_60 = param_1;
      func_0x0001031acfe4(0,0,0x1016c5f78,&uStack_70,lVar1,uVar2,PTR___sytN_11034f1b0 + 8);
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1c);
      func_0x000107c6142c(uStack_68);
      uStack_70 = 0xd000000000000010;
      uStack_68 = 0x800000010efb7760;
      func_0x000107c5fb78(*param_1,param_1[1]);
      func_0x000107c5fb78(0x3d74706d6f727020,0xe800000000000000);
      func_0x000107c5fb78(param_1[4],param_1[5]);
      uVar3 = uStack_68;
      func_0x0001007d6c8c(0,uStack_70,uStack_68);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(lVar1);
      return 1;
    }
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 1016c403c; end: 1016c42b3;  */

/* WARNING: Removing unreachable block (ram,0x0001016c40fc) */

void FUN_1016c403c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016c32b4();
  if (lVar1 == 0) {
    func_0x0001007d6c8c(3,0xd000000000000026,0x800000010efb76e0);
  }
  else {
    uVar2 = 0;
    uStack_80 = param_1;
    uStack_78 = param_2;
    uStack_70 = param_3;
    uStack_68 = param_4;
    FUN_1016c5edc(0,0x112dc10c0,&PTR_PTR_1126a7960);
    func_0x0001031acfe4(0,0,FUN_1016c5f44,&uStack_90,lVar1,uVar2,PTR___sytN_11034f1b0 + 8);
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(uStack_88);
    uStack_90 = 0xd000000000000010;
    uStack_88 = 0x800000010efb7710;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0x3d74706d6f727020,0xe800000000000000);
    func_0x000107c5fb78(param_3,param_4);
    uVar2 = uStack_88;
    func_0x0001007d6c8c(0,uStack_90,uStack_88);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1016c42b4; end: 1016c454f;  */

void FUN_1016c42b4(long param_1,code *param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    (*param_4)();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1016c36e8();
    func_0x000107c61574(param_1);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1016c4550; end: 1016c45e7;  */

void FUN_1016c4550(long param_1,code *param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    uVar1 = (ulong)(param_4 & 1);
    FUN_1016c45e8();
    if ((uVar1 & 1) != 0) {
      FUN_1016c36e8();
    }
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1016c45e8; end: 1016c46b3;  */

undefined8 FUN_1016c45e8(double param_1,ulong param_2)

{
  double dVar1;
  uint uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = 0x12d69830;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  if ((param_2 & 1) == 0) {
    dVar1 = *(double *)(unaff_x20 + 0x20);
    func_0x000107c3ceac();
    func_0x0001016c3c74();
    if ((uVar2 & 0xff) != 1) {
      if (param_1 - dVar1 < *(double *)(unaff_x20 + 0x30)) {
        return 0;
      }
      func_0x0001016c4360();
      return 1;
    }
    uVar3 = 0;
  }
  else {
    func_0x0001016c3c74();
    if ((uVar2 & 0xff) == 1) {
      return 0;
    }
    param_1 = 0.0;
    uVar3 = 1;
  }
  func_0x0001016c3e04(param_1,uVar3);
  return 0;
}



/* Entry: 1016c46b4; end: 1016c4723;  */

void FUN_1016c46b4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10d97dbd8;
  func_0x000107c614e0(&UNK_10d97dbd8);
  uVar2 = *param_2;
  uStack_38 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c614bc(param_1,&uStack_38,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1016c4724; end: 1016c49db;  */

undefined * FUN_1016c4724(double param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined *puVar7;
  long unaff_x21;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
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
  undefined *apuStack_78 [3];
  
  lVar4 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016c32b4();
  if (lVar4 == 0) {
    func_0x0001016c5e38();
    func_0x000107c613f8(&UNK_1103f8cb0,lVar4,0,0);
    func_0x000107c61654();
  }
  else {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x20));
    dStack_110 = param_1 - *(double *)(unaff_x20 + 0x30);
    unaff_x20 = (undefined *)0x0;
    FUN_1016c5edc(0,0x112dc10c0,&PTR_PTR_1126a7960);
    uVar5 = 0x112dc10c8;
    func_0x0001000285a8(0x112dc10c8,&UNK_10d97dc10);
    func_0x0001031ac8e8(apuStack_78,0,0,0x1016c5e78,&uStack_120,lVar4,unaff_x20,uVar5);
    puVar2 = apuStack_78[0];
    if (unaff_x21 == 0) {
      if ((ulong)apuStack_78[0] >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)apuStack_78[0] & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)apuStack_78[0] & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < apuStack_78[0]) {
          puVar9 = apuStack_78[0];
        }
        func_0x000107c60480();
      }
      if (puVar9 != (undefined *)0x0) {
        apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1016c593c(0,(ulong)puVar9 & ((long)puVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016c49dc);
          (*pcVar3)();
        }
        puVar8 = (undefined *)0x0;
        if (((ulong)puVar2 & 0xc000000000000001) == 0) goto LAB_1016c48ac;
        do {
          puVar7 = apuStack_78[0];
          puVar6 = puVar8;
          FUN_1016c5780(puVar8,puVar2,&PTR_PTR_1126b8508,0x112dc10d0);
          while( true ) {
            puStack_128 = puVar6;
            FUN_1016c4f10(&uStack_120,&puStack_128);
            func_0x000107c61170(puVar6);
            uVar1 = *(ulong *)(puVar7 + 0x10);
            apuStack_78[0] = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
              FUN_1016c593c(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
            }
            puVar7 = apuStack_78[0];
            *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x28) = uStack_118;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x20) = uStack_120;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x38) = uStack_108;
            *(double *)(apuStack_78[0] + uVar1 * 0xa0 + 0x30) = dStack_110;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x68) = uStack_d8;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x60) = uStack_e0;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x78) = uStack_c8;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x70) = uStack_d0;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x48) = uStack_f8;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x40) = uStack_100;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x58) = uStack_e8;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x50) = uStack_f0;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0xa8) = uStack_98;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0xa0) = uStack_a0;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0xb8) = uStack_88;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0xb0) = uStack_90;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x88) = uStack_b8;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x80) = uStack_c0;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x98) = uStack_a8;
            *(undefined8 *)(apuStack_78[0] + uVar1 * 0xa0 + 0x90) = uStack_b0;
            if (puVar9 + -1 == puVar8) {
              func_0x000107c6142c(puVar2);
              func_0x000107c61170(lVar4);
              return puVar7;
            }
            puVar8 = puVar8 + 1;
            if (((ulong)puVar2 & 0xc000000000000001) != 0) break;
LAB_1016c48ac:
            puVar7 = apuStack_78[0];
            if (*(long *)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10) <= (long)puVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1016c4980);
              (*pcVar3)();
            }
            puVar6 = *(undefined **)(puVar2 + (long)puVar8 * 8 + 0x20);
            func_0x000107c61174();
          }
        } while( true );
      }
      func_0x000107c6142c(apuStack_78[0]);
      func_0x000107c61170(lVar4);
      unaff_x20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61170(lVar4);
    }
  }
  return unaff_x20;
}



/* Entry: 1016c49dc; end: 1016c4b3b;  */

void FUN_1016c49dc(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  
  uVar3 = *param_4;
  func_0x000107c5fadc(uVar3,param_4[1]);
  uVar2 = param_4[4];
  func_0x000107c5fadc(uVar2,param_4[5]);
  func_0x0001053d3eb4(param_3,uVar3,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar3 = 0;
  FUN_1016c5edc(0,0x112dc10d0,&PTR_PTR_1126b8508);
  uVar4 = param_3;
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c61170(param_3);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    func_0x000107c6142c(uVar4);
    uVar6 = 1;
    param_2 = 0;
  }
  else {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c4b3c);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(uVar4 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      FUN_1016c5780(0,uVar4,&PTR_PTR_1126b8508,0x112dc10d0);
    }
    func_0x000107c6142c(uVar4);
    func_0x0001053d4f4c(uVar3);
    func_0x000107c61170(uVar3);
    uVar6 = 0;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar6;
  return;
}



/* Entry: 1016c4b3c; end: 1016c4cef;  */

void FUN_1016c4b3c(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar3 = *param_2;
  func_0x000107c5fadc(uVar3,param_2[1]);
  uVar4 = param_2[2];
  func_0x000107c5fadc(uVar4,param_2[3]);
  uVar5 = param_2[4];
  func_0x000107c5fadc(uVar5,param_2[5]);
  bVar1 = *(byte *)(param_2 + 6);
  bVar2 = *(byte *)((long)param_2 + 0x31);
  if (param_2[8] == 0) {
    uVar6 = 0;
    lVar12 = param_2[10];
  }
  else {
    uVar6 = param_2[7];
    func_0x000107c5fadc(uVar6);
    lVar12 = param_2[10];
  }
  if (lVar12 == 0) {
    uVar7 = 0;
    lVar12 = param_2[0xd];
  }
  else {
    uVar7 = param_2[9];
    func_0x000107c5fadc(uVar7);
    lVar12 = param_2[0xd];
  }
  if (lVar12 == 0) {
    uVar8 = 0;
    lVar12 = param_2[0xf];
  }
  else {
    uVar8 = param_2[0xc];
    func_0x000107c5fadc();
    lVar12 = param_2[0xf];
  }
  if (lVar12 == 0) {
    uVar9 = 0;
    lVar12 = param_2[0x11];
  }
  else {
    uVar9 = param_2[0xe];
    func_0x000107c5fadc();
    lVar12 = param_2[0x11];
  }
  if (lVar12 == 0) {
    uVar10 = 0;
    lVar12 = param_2[0x13];
  }
  else {
    uVar10 = param_2[0x10];
    func_0x000107c5fadc();
    lVar12 = param_2[0x13];
  }
  if (lVar12 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = param_2[0x12];
    func_0x000107c5fadc();
  }
  func_0x0001053d41b4(param_2[0xb],param_1,uVar3,uVar4,uVar5,bVar1 & 1,bVar2 & 1,uVar6,uVar7,uVar8,
                      uVar9,uVar10,uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 1016c4cf0; end: 1016c4d6b;  */

void FUN_1016c4cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x0001053d45d8(param_1,param_2,param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1016c4d6c; end: 1016c4d8f;  */

void FUN_1016c4d6c(void)

{
  func_0x0001053d473c();
  return;
}



/* Entry: 1016c4d90; end: 1016c4e9f;  */

void FUN_1016c4d90(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x0001053d404c();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1016c5edc(0,0x112dc10e0,&PTR_PTR_1126b8510);
  uVar3 = param_3;
  func_0x000107c5fc54(param_3,uVar2);
  func_0x000107c61170(param_3);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar3);
    param_2 = 0;
  }
  else {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c4ea0);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_1016c5780(0,uVar3,&PTR_PTR_1126b8510,0x112dc10e0);
    }
    func_0x000107c6142c(uVar3);
    func_0x0001053d51d0(uVar2);
    func_0x000107c61170(uVar2);
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1016c4ea0; end: 1016c4f0f;  */

void FUN_1016c4ea0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001053d3d84();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_1016c5edc(0,0x112dc10d0,&PTR_PTR_1126b8508);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 1016c4f10; end: 1016c5193;  */

void FUN_1016c4f10(long *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  
  lVar13 = *param_3;
  lVar1 = lVar13;
  func_0x0001053d4ef8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  lVar6 = param_4;
  func_0x000107c61170(lVar1);
  lVar1 = lVar13;
  func_0x0001053d4f04();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c5faec();
  lVar7 = lVar6;
  func_0x000107c61170(lVar1);
  lVar1 = lVar13;
  func_0x0001053d4f10();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c5faec();
  lVar10 = lVar7;
  func_0x000107c61170(lVar1);
  lVar1 = lVar13;
  func_0x0001053d4f1c();
  lVar5 = lVar13;
  func_0x0001053d4f28();
  lVar8 = lVar13;
  func_0x0001053d4f34();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lStack_b8 = 0;
    lStack_b0 = 0;
    lVar12 = lVar10;
  }
  else {
    lStack_b0 = lVar8;
    func_0x000107c5faec();
    lVar12 = lVar10;
    func_0x000107c61170(lVar8);
    lStack_b8 = lVar10;
  }
  lVar8 = lVar13;
  func_0x0001053d4f40();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lStack_c8 = 0;
    lStack_c0 = 0;
    lVar10 = lVar12;
  }
  else {
    lStack_c0 = lVar8;
    func_0x000107c5faec();
    lVar10 = lVar12;
    func_0x000107c61170(lVar8);
    lStack_c8 = lVar12;
  }
  func_0x0001053d4f4c(lVar13);
  lVar8 = lVar13;
  func_0x0001053d4f60();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lStack_d0 = 0;
    lVar8 = 0;
    lVar12 = lVar10;
  }
  else {
    lStack_d0 = lVar8;
    func_0x000107c5faec();
    lVar12 = lVar10;
    func_0x000107c61170(lVar8);
    lVar8 = lVar10;
  }
  lVar10 = lVar13;
  func_0x0001053d4f6c();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar9 = 0;
    lVar10 = 0;
    lVar14 = lVar12;
  }
  else {
    lVar9 = lVar10;
    func_0x000107c5faec();
    lVar14 = lVar12;
    func_0x000107c61170(lVar10);
    lVar10 = lVar12;
  }
  lVar12 = lVar13;
  func_0x0001053d4f78();
  func_0x000107c61180();
  if (lVar12 == 0) {
    lVar11 = 0;
    lVar12 = 0;
    lVar15 = lVar14;
  }
  else {
    lVar11 = lVar12;
    func_0x000107c5faec();
    lVar15 = lVar14;
    func_0x000107c61170(lVar12);
    lVar12 = lVar14;
  }
  func_0x0001053d4f84();
  func_0x000107c61180();
  if (lVar13 == 0) {
    lVar14 = 0;
    lVar15 = 0;
  }
  else {
    lVar14 = lVar13;
    func_0x000107c5faec();
    func_0x000107c61170(lVar13);
  }
  *param_1 = lVar2;
  param_1[1] = param_4;
  param_1[2] = lVar3;
  param_1[3] = lVar6;
  param_1[4] = lVar4;
  param_1[5] = lVar7;
  *(bool *)(param_1 + 6) = lVar1 != 0;
  *(bool *)((long)param_1 + 0x31) = lVar5 != 0;
  param_1[7] = lStack_b0;
  param_1[8] = lStack_b8;
  param_1[9] = lStack_c0;
  param_1[10] = lStack_c8;
  param_1[0xb] = param_2;
  param_1[0xc] = lStack_d0;
  param_1[0xd] = lVar8;
  param_1[0xe] = lVar9;
  param_1[0xf] = lVar10;
  param_1[0x10] = lVar11;
  param_1[0x11] = lVar12;
  param_1[0x12] = lVar14;
  param_1[0x13] = lVar15;
  return;
}



/* Entry: 1016c5194; end: 1016c51ff;  */

void FUN_1016c5194(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001016c5d18(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1016c5200; end: 1016c52ff;  */

void FUN_1016c5200(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [160];
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1103f8ae0;
  func_0x000107c613fc(&UNK_1103f8ae0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1103f8c18;
  func_0x000107c613fc(&UNK_1103f8c18,0xb8,7);
  uVar3 = param_1[0xc];
  uVar5 = param_1[0xf];
  uVar4 = param_1[0xe];
  *(undefined8 *)(puVar2 + 0x80) = param_1[0xd];
  *(undefined8 *)(puVar2 + 0x78) = uVar3;
  *(undefined8 *)(puVar2 + 0x90) = uVar5;
  *(undefined8 *)(puVar2 + 0x88) = uVar4;
  uVar3 = param_1[0x10];
  uVar5 = param_1[0x13];
  uVar4 = param_1[0x12];
  *(undefined8 *)(puVar2 + 0xa0) = param_1[0x11];
  *(undefined8 *)(puVar2 + 0x98) = uVar3;
  *(undefined8 *)(puVar2 + 0xb0) = uVar5;
  *(undefined8 *)(puVar2 + 0xa8) = uVar4;
  uVar3 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)(puVar2 + 0x40) = param_1[5];
  *(undefined8 *)(puVar2 + 0x38) = uVar3;
  *(undefined8 *)(puVar2 + 0x50) = uVar5;
  *(undefined8 *)(puVar2 + 0x48) = uVar4;
  uVar3 = param_1[8];
  uVar5 = param_1[0xb];
  uVar4 = param_1[10];
  *(undefined8 *)(puVar2 + 0x60) = param_1[9];
  *(undefined8 *)(puVar2 + 0x58) = uVar3;
  *(undefined8 *)(puVar2 + 0x70) = uVar5;
  *(undefined8 *)(puVar2 + 0x68) = uVar4;
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)(puVar2 + 0x20) = param_1[1];
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  func_0x000107c6157c(puVar1);
  FUN_1016c5c80(param_1,auStack_d0);
  uVar3 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x00010090569c(0x1016c60cc,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1016c5300; end: 1016c53e3;  */

/* WARNING: Possible PIC construction at 0x0001016c53c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c53c8) */

void FUN_1016c5300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1103f8ae0;
  func_0x000107c613fc(&UNK_1103f8ae0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1103f8bf0;
  func_0x000107c613fc(&UNK_1103f8bf0,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  uVar3 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x00010090569c(0x1016c60d0,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016c53e4; end: 1016c548f;  */

undefined8 FUN_1016c53e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x28);
  uVar1 = uVar2;
  func_0x000107c615f0(uVar2);
  func_0x000100471e0c();
  func_0x000107c615e8(uVar2);
  return uVar1;
}



/* Entry: 1016c5490; end: 1016c54b7;  */

/* WARNING: Possible PIC construction at 0x0001016c5568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c556c) */

void FUN_1016c5490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  puVar2 = &UNK_1103f8bc8;
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1103f8ae0;
  func_0x000107c613fc(&UNK_1103f8ae0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  func_0x000107c613fc(&UNK_1103f8bc8,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c6157c(puVar1);
  func_0x000100b64c10(param_1,param_2);
  uVar3 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x00010090569c(0x1016c60d8,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016c54b8; end: 1016c5587;  */

/* WARNING: Possible PIC construction at 0x0001016c5568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c556c) */

void FUN_1016c54b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_1103f8ae0;
  func_0x000107c613fc(&UNK_1103f8ae0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar2);
  func_0x000107c613fc(param_5,0x28,7);
  *(undefined **)(param_5 + 0x10) = puVar1;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  func_0x000107c6157c(puVar1);
  func_0x000100b64c10(param_1,param_2);
  uVar2 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x00010090569c(param_6,param_5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016c5588; end: 1016c5657;  */

/* WARNING: Possible PIC construction at 0x0001016c563c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c5640) */

void FUN_1016c5588(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1103f8ae0;
  func_0x000107c613fc(&UNK_1103f8ae0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1103f8b78;
  func_0x000107c613fc(&UNK_1103f8b78,0x29,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar2[0x28] = param_1;
  func_0x000107c6157c(puVar1);
  func_0x000100b64c10(param_2,param_3);
  uVar3 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x00010090569c(FUN_1016c60c8,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016c5658; end: 1016c567b;  */

void FUN_1016c5658(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001016c5668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1016c567c; end: 1016c577f;  */

uint FUN_1016c567c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_220 [160];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_118 = puVar4[0xd];
        uStack_120 = puVar4[0xc];
        uStack_108 = puVar4[0xf];
        uStack_110 = puVar4[0xe];
        uStack_f8 = puVar4[0x11];
        uStack_100 = puVar4[0x10];
        uStack_e8 = puVar4[0x13];
        uStack_f0 = puVar4[0x12];
        uStack_158 = puVar4[5];
        uStack_160 = puVar4[4];
        uStack_148 = puVar4[7];
        uStack_150 = puVar4[6];
        uStack_138 = puVar4[9];
        uStack_140 = puVar4[8];
        uStack_128 = puVar4[0xb];
        uStack_130 = puVar4[10];
        uStack_178 = puVar4[1];
        uStack_180 = *puVar4;
        uStack_168 = puVar4[3];
        uStack_170 = puVar4[2];
        uStack_78 = puVar5[0xd];
        uStack_80 = puVar5[0xc];
        uStack_68 = puVar5[0xf];
        uStack_70 = puVar5[0xe];
        uStack_58 = puVar5[0x11];
        uStack_60 = puVar5[0x10];
        uStack_48 = puVar5[0x13];
        uStack_50 = puVar5[0x12];
        uStack_b8 = puVar5[5];
        uStack_c0 = puVar5[4];
        uStack_a8 = puVar5[7];
        uStack_b0 = puVar5[6];
        uStack_98 = puVar5[9];
        uStack_a0 = puVar5[8];
        uStack_88 = puVar5[0xb];
        uStack_90 = puVar5[10];
        uStack_d8 = puVar5[1];
        uStack_e0 = *puVar5;
        uStack_c8 = puVar5[3];
        uStack_d0 = puVar5[2];
        FUN_1016c5c80(&uStack_180,auStack_220);
        FUN_1016c5c80(&uStack_e0,auStack_220);
        puVar1 = &uStack_180;
        func_0x0001037346bc(puVar1,&uStack_e0);
        uVar3 = (uint)puVar1;
        FUN_1016c2a94(&uStack_e0);
        FUN_1016c2a94(&uStack_180);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar4 = puVar4 + 0x14;
        puVar5 = puVar5 + 0x14;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1016c5780; end: 1016c593b;  */

ulong FUN_1016c5780(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c5864);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c5868);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1016c5edc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c593c);
  (*pcVar2)();
}



/* Entry: 1016c593c; end: 1016c5957;  */

void FUN_1016c593c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1016c5958();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1016c5958; end: 1016c5a73;  */

undefined * FUN_1016c5958(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c5a74);
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
    puVar3 = (undefined *)0x112dc10d8;
    func_0x0001000285a8(0x112dc10d8,&UNK_10d97dc18);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0xa0) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11068b1a8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0xa0 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0xa0);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1016c5a74; end: 1016c5c0f;  */

long FUN_1016c5a74(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar1 = "FriendsGameActivityServices";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(param_5 + 0x28) = pcVar1;
  func_0x0001000285a8(0x112dc0ec0,&UNK_10d97da00);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(param_5 + 0x38) = uVar2;
  *(undefined8 *)(param_5 + 0x48) = 1;
  *(undefined8 *)(param_5 + 0x40) = 0;
  *(undefined8 *)(param_5 + 0x10) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_4;
  if (param_1 <= 0.0) {
    param_1 = 259200.0;
  }
  *(double *)(param_5 + 0x30) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_4);
  func_0x0001000d224c(auStack_78);
  puVar3 = auStack_78;
  func_0x0001000a8868(puVar3,uStack_60);
  uVar2 = 2;
  func_0x000100774b74(2,0x2d,1,uStack_60,uStack_58,puVar3);
  *(undefined8 *)(param_5 + 0x18) = uVar2;
  func_0x0001000834e4(auStack_78);
  uVar5 = *(undefined8 *)(param_5 + 0x18);
  puVar4 = &UNK_1103f8ae0;
  func_0x000107c613fc(&UNK_1103f8ae0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,param_5);
  uVar2 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(puVar4);
  func_0x00010090569c(FUN_1016c5f90,puVar4,uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61578(puVar4,2);
  return param_5;
}



/* Entry: 1016c5c10; end: 1016c5c73;  */

long FUN_1016c5c10(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c613fc(param_5,0x50,7);
  pcVar1 = "FriendsGameActivityServices";
  func_0x0001000c10c0("FriendsGameActivityServices",param_3,param_4,param_5,param_6);
  func_0x000107c61180();
  *(char **)(param_5 + 0x28) = pcVar1;
  func_0x0001000285a8(0x112dc0ec0,&UNK_10d97da00);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(param_5 + 0x38) = uVar2;
  *(undefined8 *)(param_5 + 0x48) = 1;
  *(undefined8 *)(param_5 + 0x40) = 0;
  *(undefined8 *)(param_5 + 0x10) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_4;
  if (param_1 <= 0.0) {
    param_1 = 259200.0;
  }
  *(double *)(param_5 + 0x30) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_4);
  func_0x0001000d224c(auStack_78);
  puVar3 = auStack_78;
  func_0x0001000a8868(puVar3,uStack_60);
  uVar2 = 2;
  func_0x000100774b74(2,0x2d,1,uStack_60,uStack_58,puVar3);
  *(undefined8 *)(param_5 + 0x18) = uVar2;
  func_0x0001000834e4(auStack_78);
  uVar5 = *(undefined8 *)(param_5 + 0x18);
  puVar4 = &UNK_1103f8ae0;
  func_0x000107c613fc(&UNK_1103f8ae0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,param_5);
  uVar2 = 0;
  FUN_1016c5edc(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(puVar4);
  func_0x00010090569c(FUN_1016c5f90,puVar4,uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61578(puVar4,2);
  return param_5;
}



/* Entry: 1016c5c74; end: 1016c5c7f;  */

void FUN_1016c5c74(void)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = unaff_x20 + 0x18;
  puVar4 = auStack_38;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  uVar3 = (uint)puVar4;
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1016c39a8();
    if ((uVar1 & 1) != 0) {
      func_0x0001016c3c74();
      if ((uVar3 & 0xff) != 1) {
        func_0x0001016c3e04(0,1);
      }
      FUN_1016c36e8();
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1016c5c80; end: 1016c5cbb;  */

undefined8 FUN_1016c5c80(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103735058)(param_2,param_1);
  return param_2;
}



/* Entry: 1016c5cbc; end: 1016c5cbf;  */

void FUN_1016c5cbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar4 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_1016c403c(uVar2,uVar1,uVar3,uVar6);
    func_0x000107c61574(lVar4);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_70,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    FUN_1016c36e8();
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 1016c5cc0; end: 1016c5d07;  */

void FUN_1016c5cc0(void)

{
  long unaff_x20;
  
  FUN_1016c42b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_1016c34a4);
  return;
}



/* Entry: 1016c5d08; end: 1016c5d27;  */

void FUN_1016c5d08(void)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  else {
    uVar4 = (ulong)(bVar2 & 1);
    FUN_1016c45e8();
    if ((uVar4 & 1) != 0) {
      FUN_1016c36e8();
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1016c5d28; end: 1016c5d47;  */

void FUN_1016c5d28(void)

{
  func_0x000107c61168(&PTR_PTR_112dc1020);
  return;
}



/* Entry: 1016c5d48; end: 1016c5d87;  */

void FUN_1016c5d48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016c5d88; end: 1016c5dbb;  */

void FUN_1016c5d88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016c5dbc; end: 1016c5dcb;  */

void FUN_1016c5dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar4 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_1016c403c(uVar2,uVar1,uVar3,uVar6);
    func_0x000107c61574(lVar4);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_70,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    FUN_1016c36e8();
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 1016c5dcc; end: 1016c5e8f;  */

void FUN_1016c5dcc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016c5e90; end: 1016c5e9f;  */

void FUN_1016c5e90(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1016c5ea0; end: 1016c5edb;  */

void FUN_1016c5ea0(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x0001053d493c();
  }
  else {
    func_0x0001053d4828(*(undefined8 *)(unaff_x20 + 0x10));
  }
  return;
}



/* Entry: 1016c5edc; end: 1016c5f1b;  */

void FUN_1016c5edc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016c5f1c; end: 1016c5f43;  */

void FUN_1016c5f1c(void)

{
  long unaff_x20;
  
  func_0x0001053d44c4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1016c5f44; end: 1016c5f8f;  */

void FUN_1016c5f44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1016c4cf0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1016c5f90; end: 1016c6087;  */

void FUN_1016c5f90(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1016c34a4();
    FUN_1016c36e8();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1016c6088; end: 1016c60c7;  */

void FUN_1016c6088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc10f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97dc7c;
  func_0x000107c61520(&UNK_10d97dc7c,&UNK_1103f8cb0);
  puRam0000000112dc10f0 = puVar1;
  return;
}



/* Entry: 1016c60c8; end: 1016c60eb;  */

void FUN_1016c60c8(void)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  else {
    uVar4 = (ulong)(bVar2 & 1);
    FUN_1016c45e8();
    if ((uVar4 & 1) != 0) {
      FUN_1016c36e8();
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1016c60ec; end: 1016c60fb;  */

undefined1  [16] FUN_1016c60ec(void)

{
  return ZEXT816(0x1103f8e68);
}



/* Entry: 1016c60fc; end: 1016c63c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c60fc(byte param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  code *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1118);
  pcVar13 = (code *)*puVar1;
  if (pcVar13 != (code *)0x0) {
    uVar14 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar5 = &UNK_1103f8eb0;
    func_0x000107c613fc(&UNK_1103f8eb0,0x21,7);
    *(code **)(puVar5 + 0x10) = pcVar13;
    *(undefined8 *)(puVar5 + 0x18) = uVar14;
    puVar5[0x20] = param_1 & 1;
    lVar10 = _DAT_112dc1110;
    lVar6 = unaff_x20 + _DAT_112dc1110;
    func_0x000107c61618();
    func_0x000107c61604(unaff_x20 + lVar10,0);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar8 = &UNK_1103f8ed8;
    func_0x000107c613fc(&UNK_1103f8ed8,0x18,7);
    *(long *)(puVar8 + 0x10) = lVar6;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1016c6d18;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1103f8ef0;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_78;
    func_0x000101237340(pcVar13,uVar14);
    lVar10 = lVar6;
    func_0x000107c61174(lVar6);
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_1103f8f28;
    func_0x000107c613fc(&UNK_1103f8f28,0x18,7);
    *(long *)(puVar8 + 0x10) = lVar6;
    pcStack_80 = (code *)0x1016c6d48;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100288f10;
    puStack_88 = &UNK_1103f8f40;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(ppuVar11);
    puVar8 = puStack_78;
    func_0x000107c61174(lVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c3dcd0(0x3fd0000000000000,puVar7);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar9);
    lVar6 = unaff_x20 + _DAT_112dc1108;
    lVar12 = lVar6;
    func_0x000107c61618();
    if (lVar12 == 0) {
      (*pcVar13)(param_1 & 1);
      func_0x000107c61574(puVar5);
      func_0x000100cb9934(pcVar13,uVar14);
      func_0x000107c61170(lVar10);
    }
    else {
      uVar15 = *(undefined8 *)(lVar6 + 8);
      *(undefined8 *)(lVar6 + 8) = 0;
      func_0x000107c61604(lVar6,0);
      puVar1 = (undefined8 *)(lVar12 + _DAT_112f58000);
      func_0x000107c61428(puVar1,&puStack_a0,1,0);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000100cb9934(uVar2,uVar3);
      puVar8 = &UNK_1103f8f78;
      func_0x000107c613fc(&UNK_1103f8f78,0x30,7);
      *(long *)(puVar8 + 0x10) = lVar12;
      *(undefined8 *)(puVar8 + 0x18) = uVar15;
      *(undefined8 *)(puVar8 + 0x20) = 0x1016c6cf0;
      *(undefined **)(puVar8 + 0x28) = puVar5;
      func_0x000107c615f0(lVar12);
      func_0x000107c6157c(puVar5);
      func_0x0001033097a4(FUN_1016c6d50,puVar8);
      func_0x000107c61574(puVar5);
      func_0x000100cb9934(pcVar13,uVar14);
      func_0x000107c61170(lVar10);
      func_0x000107c615e8(lVar12);
      func_0x000107c61574(puVar8);
    }
  }
  return;
}



/* Entry: 1016c63c4; end: 1016c6953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016c63c4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x0001000285a8(0x112dc1148,&UNK_10d9bbf70);
  func_0x000107c613fc();
  lVar4 = 0;
  func_0x00010095c380();
  lVar1 = unaff_x20 + _DAT_112dc1108;
  lVar5 = lVar1;
  func_0x000107c61618();
  if (lVar5 == 0) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112dc1118);
    uVar9 = *puVar2;
    uVar3 = puVar2[1];
    *puVar2 = FUN_1016c6d78;
    puVar2[1] = lVar4;
    func_0x000107c6157c(lVar4);
    func_0x000100cb9934(uVar9,uVar3);
    lVar5 = param_1;
    func_0x0001016c66b8();
    func_0x000107c61604(unaff_x20 + _DAT_112dc1110,lVar5);
    func_0x000103309bb4(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x0001033088dc();
    puVar7 = &UNK_1103f8fa0;
    puVar6 = puVar7;
    func_0x000107c613fc(&UNK_1103f8fa0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    func_0x000107c6157c(puVar6);
    func_0x0001033099ec(0x1016c6d9c,puVar6);
    func_0x000107c61578(puVar6,2);
    puVar6 = puVar7;
    func_0x000107c613fc(&UNK_1103f8fa0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    func_0x000107c6157c(puVar6);
    func_0x000103309a64(0x1016c6db8,puVar6);
    func_0x000107c61578(puVar6,2);
    func_0x000107c613fc(&UNK_1103f8fa0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar2 = (undefined8 *)(param_1 + _DAT_112f58000);
    func_0x000107c61428(puVar2,auStack_68,1,0);
    uVar9 = *puVar2;
    uVar3 = puVar2[1];
    *puVar2 = FUN_1016c6dd4;
    puVar2[1] = puVar7;
    func_0x000107c6157c(puVar7);
    func_0x000100cb9934(uVar9,uVar3);
    func_0x000107c61574(puVar7);
    *(undefined ***)(lVar1 + 8) = &PTR_DAT_1103f8e10;
    func_0x000107c61604(lVar1,param_1);
    func_0x0001033095d0();
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1103f8fc8;
    func_0x000107c613fc(&UNK_1103f8fc8,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar5;
    uStack_78 = 0x1016c6ddc;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103f8fe0;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_70;
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c3dccc(0x3fd0000000000000,puVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar5);
    func_0x000107c60bd0(ppuVar8);
  }
  else {
    func_0x000107c615e8();
    puStack_98 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff00);
    func_0x000100b60084(&puStack_98);
  }
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(lVar4);
  return uVar9;
}



/* Entry: 1016c6954; end: 1016c69af;  */

void FUN_1016c6954(long param_1,uint param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1016c60fc(param_2 & 1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016c69b0; end: 1016c6ac7;  */

void FUN_1016c69b0(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = "resolveIfPending(optedIn:)";
    func_0x0001000c10c0("resolveIfPending(optedIn:)");
    func_0x000107c61180();
    puVar2 = &UNK_1103f8fa0;
    func_0x000107c613fc(&UNK_1103f8fa0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    puVar3 = &UNK_1103f9018;
    func_0x000107c613fc(&UNK_1103f9018,0x19,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = 0;
    uStack_58 = 0x1016c6dec;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1103f9030;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e590(pcVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1016c6ac8; end: 1016c6af3; -[_TtC36GamesConsentPresentationServicesImpl35GamesConsentPresentationServiceImpl backdropTapped] */

void FUN_1016c6ac8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1016c60fc(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016c6af4; end: 1016c6bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c6af4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112dc1118);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar3 = param_1 + _DAT_112dc1108;
      *(undefined8 *)(lVar3 + 8) = 0;
      func_0x000107c61604(lVar3,0);
      lVar2 = _DAT_112dc1110;
      lVar3 = param_1 + _DAT_112dc1110;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c4ff34();
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61604(param_1 + lVar2,0);
      (*pcVar5)(param_2 & 1);
      func_0x000100cb9934(pcVar5,uVar4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016c6bd0; end: 1016c6c2f; -[_TtC36GamesConsentPresentationServicesImpl35GamesConsentPresentationServiceImpl init] */

void FUN_1016c6bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesConsentPresentationServicesImpl.GamesConsentPresentationServiceImpl",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c6bfc);
  (*pcVar1)();
}



/* Entry: 1016c6c30; end: 1016c6c8b; -[_TtC36GamesConsentPresentationServicesImpl35GamesConsentPresentationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c6c30(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112dc1100);
  FUN_1016c6df8(param_1 + _DAT_112dc1108);
  func_0x000107c61610(param_1 + _DAT_112dc1110);
  if (*(long *)(param_1 + _DAT_112dc1118) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112dc1118))[1]);
    return;
  }
  return;
}



/* Entry: 1016c6c8c; end: 1016c6cab;  */

void FUN_1016c6c8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e71f8);
  return;
}



/* Entry: 1016c6cac; end: 1016c6d17;  */

void FUN_1016c6cac(void)

{
  FUN_1016c63c4();
  return;
}



/* Entry: 1016c6d18; end: 1016c6d4f;  */

void FUN_1016c6d18(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0,*(long *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 1016c6d50; end: 1016c6d77;  */

void FUN_1016c6d50(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c4ff34(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)();
  return;
}



/* Entry: 1016c6d78; end: 1016c6dd3;  */

void FUN_1016c6d78(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  func_0x000100b60084(&uStack_11);
  return;
}



/* Entry: 1016c6dd4; end: 1016c6df7;  */

void FUN_1016c6dd4(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "resolveIfPending(optedIn:)";
    func_0x0001000c10c0("resolveIfPending(optedIn:)");
    func_0x000107c61180();
    puVar3 = &UNK_1103f8fa0;
    func_0x000107c613fc(&UNK_1103f8fa0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    puVar4 = &UNK_1103f9018;
    func_0x000107c613fc(&UNK_1103f9018,0x19,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    puVar4[0x18] = 0;
    uStack_58 = 0x1016c6dec;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1103f9030;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e590(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1016c6df8; end: 1016c6e1b;  */

undefined8 FUN_1016c6df8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1016c6e1c; end: 1016c6e33;  */

void FUN_1016c6e1c(long param_1,long param_2)

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



/* Entry: 1016c6e34; end: 1016c6ea7;  */

void FUN_1016c6e34(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112dc1158,&UNK_10d97de48);
  func_0x000107c613fc();
  pcVar1 = FUN_1016c6eb8;
  func_0x0001000bdd8c(FUN_1016c6eb8,0);
  uVar2 = 0;
  func_0x0001001b8c48(0);
  func_0x000107c610f8();
  func_0x00010214d050(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1016c6ea8; end: 1016c6eb7;  */

undefined1  [16] FUN_1016c6ea8(void)

{
  return ZEXT816(0x1103f9070);
}



/* Entry: 1016c6eb8; end: 1016c6ef3;  */

void FUN_1016c6eb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1016c6ef4();
  uVar1 = 0;
  FUN_1016c6c8c();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1103f8e88;
  *param_1 = param_2;
  return;
}



/* Entry: 1016c6ef4; end: 1016c6fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016c6ef4(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  plVar5 = &lStack_90;
  puStack_40 = &UNK_1103f8e68;
  ppuStack_38 = &PTR_DAT_1103f8e78;
  lVar3 = 0;
  FUN_1016c6c8c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_58,&UNK_1103f8e68);
  puStack_68 = &UNK_1103f8e68;
  ppuStack_60 = &PTR_DAT_1103f8e78;
  lVar1 = lVar4 + _DAT_112dc1108;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61614(lVar4 + _DAT_112dc1110,0);
  puVar2 = (undefined8 *)(lVar4 + _DAT_112dc1118);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_1016c6fd0(auStack_80,lVar4 + _DAT_112dc1100);
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_80);
  func_0x0001000834e4(auStack_58);
  return (undefined1 *)plVar5;
}



/* Entry: 1016c6fd0; end: 1016c7013;  */

long FUN_1016c6fd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1016c7014; end: 1016c7023;  */

undefined1  [16] FUN_1016c7014(void)

{
  return ZEXT816(0x1103f9190);
}



/* Entry: 1016c7024; end: 1016c77f3;  */

void FUN_1016c7024(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  
  puVar5 = &uStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined2 *)(param_2 + 2);
  func_0x0001000285a8(0x112dc1170,&UNK_10d97dea8);
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_70 = uVar4;
  func_0x0001000838ec(&uStack_80);
  FUN_1016cac78(uVar6,uVar2,uVar1,uVar3,uVar7,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000100082720("PreviewLensIconImpressionLoggingWorkflowEntryPointProvider",0x3a,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 1016c77f4; end: 1016c78f7;  */

undefined8 FUN_1016c77f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_80,0,0);
    func_0x0001016c799c(lVar2 + 0x10,&uStack_b0);
    if (lStack_98 == 0) {
      func_0x0001016c79ec(&uStack_b0);
    }
    else {
      FUN_1016c7a34(&uStack_b0,auStack_68);
      func_0x0001000a8868(auStack_68,uStack_50);
      pcVar3 = *(code **)(lStack_48 + 8);
      func_0x000107c6157c(lVar2);
      (*pcVar3)(0,0,uStack_50,lStack_48);
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      func_0x000107c61428(lVar2 + 0x10,auStack_c8,0x21,0);
      func_0x0001016c794c(&uStack_b0,lVar2 + 0x10);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(lVar2);
      func_0x0001000834e4(auStack_68);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1016c78f8; end: 1016c791b;  */

void FUN_1016c78f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c791c; end: 1016c791f;  */

void FUN_1016c791c(void)

{
  return;
}



/* Entry: 1016c7920; end: 1016c7943;  */

undefined8 FUN_1016c7920(void)

{
  FUN_1016c77f4();
  return 0;
}



/* Entry: 1016c7944; end: 1016c794b;  */

/* WARNING: Possible PIC construction at 0x0001016c9240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c9244) */

void FUN_1016c7944(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x0001016c9480();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103f94b0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1016c794c; end: 1016c7a33;  */

undefined8 FUN_1016c794c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc1190;
  func_0x0001000285a8(0x112dc1190,&UNK_10d97ded0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1016c7a34; end: 1016c7a4b;  */

undefined8 * FUN_1016c7a34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1016c7a4c; end: 1016c7a6b;  */

void FUN_1016c7a4c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc11d8);
  return;
}



/* Entry: 1016c7a6c; end: 1016c819b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c7a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,long param_10,long param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined *puVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  long unaff_x20;
  undefined8 uVar23;
  undefined1 auStack_c0 [24];
  long alStack_a8 [3];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = *(long *)(param_4 + _DAT_113083868);
  func_0x000107c61174();
  lVar2 = param_5;
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar3 = param_9;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = param_6;
  func_0x000107c4b58c();
  func_0x000107c61180();
  lVar6 = 0;
  func_0x0001016cac58();
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  lVar3 = param_10;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar5 = param_7;
  func_0x000107c4b080();
  func_0x000107c61180();
  uVar7 = param_8;
  func_0x000107c5b7f4();
  func_0x000107c61180();
  lVar8 = 0;
  func_0x0001016c927c();
  func_0x000107c613fc();
  puVar22 = (undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *puVar22 = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  lVar9 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c61574(lVar6);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
  }
  else {
    lVar10 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 == 0) {
      func_0x000107c61574(lVar6);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
LAB_1016c8134:
      func_0x000107c61170(param_11);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
    }
    else {
      lVar11 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar11 != 0) {
        lVar12 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar12 != 0) {
          func_0x0001000285a8(0x112dc1178,&UNK_10d97deb0);
          lVar13 = lVar12;
          func_0x000107c4ae74(lVar12);
          func_0x000107c61180();
          lVar14 = lVar13;
          func_0x0001000b637c();
          func_0x000107c61170(lVar13);
          uVar20 = 0x112dc1180;
          func_0x0001000285a8(0x112dc1180,&UNK_10d97deb8);
          pcVar15 = FUN_1016c906c;
          func_0x0001000d5158(FUN_1016c906c,0,uVar20);
          func_0x000107c61574(lVar14);
          puVar16 = &UNK_1103f92f8;
          func_0x000107c613fc(&UNK_1103f92f8,0x20,7);
          *(undefined8 *)(puVar16 + 0x10) = uVar5;
          *(undefined8 *)(puVar16 + 0x18) = uVar7;
          func_0x0001000285a8(0x112dc1188,&UNK_10d97dec0);
          func_0x000107c613fc();
          func_0x000107c61174();
          func_0x000107c61174();
          pcVar17 = FUN_1016c82ec;
          func_0x0001000bdd8c(FUN_1016c82ec,puVar16);
          func_0x0001000285a8(0x112d3b3f0,&UNK_10d904a98);
          func_0x000107c615f0(lVar9);
          lVar13 = lVar10;
          func_0x000107c4b3fc();
          func_0x000107c61180();
          lVar14 = lVar13;
          func_0x0001000b637c();
          func_0x000107c61170(lVar13);
          pcVar18 = pcVar15;
          func_0x000107c6157c();
          FUN_1016ca898();
          pcVar19 = pcVar18;
          FUN_1016caa28();
          func_0x000107c6157c(pcVar17);
          lVar13 = lVar11;
          func_0x000107c4c020();
          func_0x000107c61180();
          puVar16 = PTR_PTR_1126aeea8;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar23 = *(undefined8 *)(param_11 + _DAT_113036458);
          uVar20 = 0;
          FUN_1016d36c8();
          func_0x000107c613fc();
          func_0x000107c6157c(uVar23);
          lVar21 = lVar9;
          func_0x0001016d02e4(lVar9,lVar14,pcVar15,pcVar18,pcVar19,pcVar17,lVar13,puVar16,uVar23,0,0
                              ,0,0);
          ppuStack_88 = &PTR_DAT_1103f98c8;
          uStack_90 = uVar20;
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_7);
          func_0x000107c61170(param_8);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_10);
          alStack_a8[0] = lVar21;
          func_0x000107c61574(lVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(lVar9);
          func_0x000107c61574(pcVar15);
          func_0x000107c61574(pcVar17);
          func_0x000107c615e8(lVar12);
          func_0x000107c615e8(lVar10);
          func_0x000107c615e8(lVar11);
          func_0x000107c61170(param_11);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_2);
          func_0x000107c61428(puVar22,auStack_c0,0x21,0);
          FUN_1016c794c(alStack_a8,puVar22);
          func_0x000107c614a8(auStack_c0);
          goto LAB_1016c8170;
        }
        func_0x000107c61574(lVar6);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c615e8(lVar10);
        func_0x000107c615e8(lVar11);
        goto LAB_1016c8134;
      }
      func_0x000107c61574(lVar6);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(param_11);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(uVar7);
LAB_1016c8170:
  *(long *)(unaff_x20 + 0x10) = lVar8;
  return;
}



/* Entry: 1016c819c; end: 1016c829f;  */

undefined8 FUN_1016c819c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_80,0,0);
    func_0x0001016c799c(lVar2 + 0x10,&uStack_b0);
    if (lStack_98 == 0) {
      func_0x0001016c79ec(&uStack_b0);
    }
    else {
      FUN_1016c7a34(&uStack_b0,auStack_68);
      func_0x0001000a8868(auStack_68,uStack_50);
      pcVar3 = *(code **)(lStack_48 + 8);
      func_0x000107c6157c(lVar2);
      (*pcVar3)(0,0,uStack_50,lStack_48);
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      func_0x000107c61428(lVar2 + 0x10,auStack_c8,0x21,0);
      func_0x0001016c794c(&uStack_b0,lVar2 + 0x10);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(lVar2);
      func_0x0001000834e4(auStack_68);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1016c82a0; end: 1016c82c3;  */

void FUN_1016c82a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c82c4; end: 1016c82c7;  */

void FUN_1016c82c4(void)

{
  return;
}



/* Entry: 1016c82c8; end: 1016c82eb;  */

undefined8 FUN_1016c82c8(void)

{
  FUN_1016c819c();
  return 0;
}



/* Entry: 1016c82ec; end: 1016c82f3;  */

/* WARNING: Possible PIC construction at 0x0001016c9240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c9244) */

void FUN_1016c82ec(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x0001016c9480();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103f94b0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1016c82f4; end: 1016c8313;  */

void FUN_1016c82f4(void)

{
  func_0x000107c61168(&PTR_PTR_112dc1278);
  return;
}



/* Entry: 1016c8314; end: 1016c8a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c8314(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x20;
  long lVar23;
  undefined8 *puVar24;
  undefined1 auStack_d0 [24];
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = *(long *)(param_3 + _DAT_113083868);
  func_0x000107c61174();
  lVar2 = param_4;
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar6 = param_5;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar3 = lVar6;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = _DAT_113074f68;
  puVar4 = *(undefined **)(param_6 + _DAT_113074f68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168();
    func_0x000107c42538();
    func_0x000107c61180();
  }
  else {
    puVar5 = puVar4;
    func_0x000107c3f630();
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
  }
  lVar6 = *(long *)(param_6 + lVar6);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = lVar6;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
  }
  lVar7 = 0;
  FUN_1016c901c();
  lVar6 = lVar7;
  func_0x000107c61534();
  *(undefined **)(lVar6 + 0x10) = puVar5;
  *(long *)(lVar6 + 0x18) = lVar23;
  lVar23 = param_9;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar8 = param_7;
  func_0x000107c4b080();
  func_0x000107c61180();
  uVar9 = param_8;
  func_0x000107c5b7f4();
  func_0x000107c61180();
  lVar10 = 0;
  func_0x0001016c927c();
  func_0x000107c613fc();
  puVar24 = (undefined8 *)(lVar10 + 0x10);
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *puVar24 = 0;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  lVar11 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c61574(lVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
LAB_1016c8960:
    func_0x000107c61170(lVar3);
  }
  else {
    lVar12 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar12 == 0) {
      func_0x000107c61574(lVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      goto LAB_1016c8960;
    }
    lVar13 = lVar23;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar13 == 0) {
      func_0x000107c61574(lVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
    }
    else {
      lVar14 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar14 != 0) {
        func_0x0001000285a8(0x112dc1178,&UNK_10d97deb0);
        lVar15 = lVar14;
        func_0x000107c4ae74(lVar14);
        func_0x000107c61180();
        lVar16 = lVar15;
        func_0x0001000b637c();
        func_0x000107c61170(lVar15);
        uVar20 = 0x112dc1180;
        func_0x0001000285a8(0x112dc1180,&UNK_10d97deb8);
        pcVar17 = FUN_1016c906c;
        func_0x0001000d5158(FUN_1016c906c,0,uVar20);
        func_0x000107c61574(lVar16);
        puVar4 = &UNK_1103f9340;
        func_0x000107c613fc(&UNK_1103f9340,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = uVar8;
        *(undefined8 *)(puVar4 + 0x18) = uVar9;
        func_0x0001000285a8(0x112dc1188,&UNK_10d97dec0);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c61174();
        pcVar18 = FUN_1016c8bc0;
        func_0x0001000bdd8c(FUN_1016c8bc0,puVar4);
        func_0x0001000285a8(0x112d3b3f0,&UNK_10d904a98);
        func_0x000107c615f0(lVar11);
        lVar15 = lVar12;
        func_0x000107c4b3fc();
        func_0x000107c61180();
        lVar16 = lVar15;
        func_0x0001000b637c();
        func_0x000107c61170(lVar15);
        FUN_1016c8fe8();
        pcVar19 = pcVar17;
        func_0x000107c6157c();
        FUN_1016c8ea8();
        func_0x000107c6157c(pcVar18);
        lVar15 = lVar13;
        func_0x000107c4c020(lVar13);
        func_0x000107c61180();
        puVar4 = PTR_PTR_1126aeea8;
        func_0x000107c610f8(PTR_PTR_1126aeea8);
        func_0x000107c453e4();
        uVar22 = *(undefined8 *)(param_10 + _DAT_113036458);
        uVar20 = 0;
        FUN_1016d36c8();
        func_0x000107c613fc();
        func_0x000107c6157c(uVar22);
        lVar21 = lVar11;
        func_0x0001016d02e4(lVar11,lVar16,pcVar17,lVar7,pcVar19,pcVar18,lVar15,puVar4,uVar22,0,0,0,0
                           );
        ppuStack_98 = &PTR_DAT_1103f98c8;
        uStack_a0 = uVar20;
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        alStack_b8[0] = lVar21;
        func_0x000107c61574(lVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar9);
        func_0x000107c615e8(lVar11);
        func_0x000107c61574(pcVar17);
        func_0x000107c61574(pcVar18);
        func_0x000107c615e8(lVar14);
        func_0x000107c615e8(lVar12);
        func_0x000107c615e8(lVar13);
        func_0x000107c61170(param_10);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar23);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_6);
        func_0x000107c61428(puVar24,auStack_d0,0x21,0);
        FUN_1016c794c(alStack_b8,puVar24);
        func_0x000107c614a8(auStack_d0);
        goto LAB_1016c8a44;
      }
      func_0x000107c61574(lVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c615e8(lVar12);
      lVar12 = lVar13;
    }
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar23);
LAB_1016c8a44:
  *(long *)(unaff_x20 + 0x10) = lVar10;
  return;
}



/* Entry: 1016c8a70; end: 1016c8b73;  */

undefined8 FUN_1016c8a70(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_80,0,0);
    func_0x0001016c799c(lVar2 + 0x10,&uStack_b0);
    if (lStack_98 == 0) {
      func_0x0001016c79ec(&uStack_b0);
    }
    else {
      FUN_1016c7a34(&uStack_b0,auStack_68);
      func_0x0001000a8868(auStack_68,uStack_50);
      pcVar3 = *(code **)(lStack_48 + 8);
      func_0x000107c6157c(lVar2);
      (*pcVar3)(0,0,uStack_50,lStack_48);
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      func_0x000107c61428(lVar2 + 0x10,auStack_c8,0x21,0);
      func_0x0001016c794c(&uStack_b0,lVar2 + 0x10);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(lVar2);
      func_0x0001000834e4(auStack_68);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1016c8b74; end: 1016c8b97;  */

void FUN_1016c8b74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c8b98; end: 1016c8b9b;  */

void FUN_1016c8b98(void)

{
  return;
}



/* Entry: 1016c8b9c; end: 1016c8bbf;  */

undefined8 FUN_1016c8b9c(void)

{
  FUN_1016c8a70();
  return 0;
}



/* Entry: 1016c8bc0; end: 1016c8bc7;  */

/* WARNING: Possible PIC construction at 0x0001016c9240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c9244) */

void FUN_1016c8bc0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x0001016c9480();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103f94b0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1016c8bc8; end: 1016c8be7;  */

void FUN_1016c8bc8(void)

{
  func_0x000107c61168(&PTR_PTR_112dc1318);
  return;
}



/* Entry: 1016c8be8; end: 1016c8c17;  */

void FUN_1016c8be8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}


