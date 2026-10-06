/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013dcf3c; end: 1013dcf5b;  */

void FUN_1013dcf3c(void)

{
  func_0x000107c61168(&PTR_PTR_112d7b6a0);
  return;
}



/* Entry: 1013dcf5c; end: 1013dcfab;  */

void FUN_1013dcf5c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103afb58;
  if (lRam0000000112d7b718 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d7b718 = param_1;
  }
  return;
}



/* Entry: 1013dcfac; end: 1013dcfeb;  */

void FUN_1013dcfac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013dcfec; end: 1013dd3ef;  */

undefined *
FUN_1013dcfec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126a6cd0;
  func_0x000107c610f8(PTR_PTR_1126a6cd0);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  uVar3 = 0x6e6f69746361;
  func_0x000107c5fadc(0x6e6f69746361,0xe600000000000000);
  func_0x000107c5a4a0(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar3 = param_2;
  }
  uVar4 = 0x65756c6176;
  func_0x000107c5fadc(0x65756c6176,0xe500000000000000);
  func_0x000107c5a4a0(puVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  uVar3 = 0;
  if (param_5 != 0) {
    func_0x000107c5fadc(param_4,param_5);
    uVar3 = param_4;
  }
  uVar4 = 0x437972746e756f63;
  func_0x000107c5fadc(0x437972746e756f63,0xeb0000000065646f);
  func_0x000107c5a4a0(puVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 1013dd3f0; end: 1013dd403;  */

void FUN_1013dd3f0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103afc10;
  if (lRam0000000112d7b740 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d7b740 = param_1;
  }
  return;
}



/* Entry: 1013dd404; end: 1013dd447;  */

void FUN_1013dd404(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1013dd448; end: 1013dd46b;  */

void FUN_1013dd448(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1013dd46c; end: 1013dd7a3;  */

/* WARNING: Possible PIC construction at 0x0001013dd69c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013dd6a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dd46c(ulong param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  
  uVar5 = 0;
  bVar4 = 0;
  FUN_1013dccec(0x6d457265646e6572,0xeb000000006c6961);
  uVar6 = 0x6c62617070696b73;
  FUN_1013dccec(0x6c62617070696b73,0xe900000000000065);
  *(bool *)(unaff_x20 + _DAT_112d7b780) = (uVar6 & 1) != 0 || param_3 != '\x01' && param_2 == 2;
  uVar6 = 0xd000000000000013;
  FUN_1013dccec(0xd000000000000013,0x800000010ef3c900);
  *(bool *)(unaff_x20 + _DAT_112d7b798) = (uVar6 & 1) != 0 || param_3 != '\x01' && param_2 == 3;
  *(bool *)(unaff_x20 + _DAT_112d7b7a0) = param_3 != '\x01' && param_2 == 4;
  bVar3 = 0x73;
  FUN_1013dccec(0x6261686374697773,0xea0000000000656c);
  *(byte *)(unaff_x20 + _DAT_112d7b788) = bVar3 & 1;
  FUN_1013dccec(0x6d457265646e6572,0xeb000000006c6961);
  *(byte *)(unaff_x20 + _DAT_112d7b790) = bVar4 & 1;
  uVar7 = 0x6954726564616568;
  uVar10 = 0xeb00000000656c74;
  FUN_1013dcdd8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7a8);
  uVar11 = puVar1[1];
  *puVar1 = uVar7;
  puVar1[1] = uVar10;
  func_0x000107c6142c(uVar11);
  uVar7 = 0x7553726564616568;
  uVar10 = 0xee00656c74697462;
  FUN_1013dcdd8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7b0);
  uVar11 = puVar1[1];
  *puVar1 = uVar7;
  puVar1[1] = uVar10;
  func_0x000107c6142c(uVar11);
  uVar8 = 0x73654d726f727265;
  uVar6 = 0xec00000065676173;
  FUN_1013dcdd8();
  uVar9 = uVar6;
  FUN_1013e4688();
  func_0x000107c6142c();
  uVar12 = uVar8;
  uVar13 = uVar9;
  if (uVar9 == 0) {
    func_0x000105219858();
    func_0x000107c61180();
    if (uVar6 != 0) {
      func_0x000107c5faec();
      goto code_r0x000107c61170;
    }
    uVar12 = 0;
    uVar13 = 0;
  }
  puVar2 = (ulong *)(unaff_x20 + _DAT_112d7b7e0);
  uVar6 = puVar2[1];
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar6);
  uVar12 = uVar9;
  FUN_1013dfec4(uVar8,uVar9);
  func_0x000107c6142c();
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (((*(byte *)(unaff_x20 + _DAT_112d7b7b8) != 2) &&
      ((uint)*(byte *)(unaff_x20 + _DAT_112d7b7b8) != ((uVar5 ^ 1) & 1))) &&
     (FUN_1013e139c(), (uVar9 & 1) == 0)) {
    func_0x0001013e153c();
  }
  uVar6 = param_1;
  FUN_1013e4304(param_1);
  FUN_1013e44fc(param_1);
  FUN_1013e0054(uVar6,param_1,uVar12);
  func_0x000107c6142c(uVar12);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1013dd7a4; end: 1013de2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dd7a4(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined *puVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined auStack_88 [40];
  
  puVar3 = (undefined *)0x0;
  func_0x000107c5eb9c();
  lStack_c8 = *(long *)(puVar3 + -8);
  puStack_c0 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  puStack_d0 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112d7b7c0);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar13 = puVar3;
      func_0x0001008479c8();
      puVar9 = auStack_88;
      func_0x000107c61534();
      *(undefined8 *)(puVar13 + 0x18) = 3;
      *(undefined8 *)(puVar13 + 0x10) = 1;
      *(undefined **)(puVar13 + 0x20) = puVar3;
      func_0x000107c61174();
      FUN_1013e25f4();
      puStack_98 = puVar13;
      func_0x000100847d40();
      puVar13 = puStack_98;
      if ((ulong)puStack_98 >> 0x3e == 0) {
        puStack_a8 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
        puVar4 = *(undefined **)(puStack_a8 + 0x10);
      }
      else {
        puStack_a8 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
        puVar4 = puStack_a8;
        if ((undefined *)0x7fffffffffffffff < puStack_98) {
          puVar4 = puStack_98;
        }
        func_0x000107c60480();
      }
      uStack_a0 = (ulong)puVar13 & 0xc000000000000001;
      puStack_b0 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar4 = (undefined *)0x0;
        do {
          while( true ) {
            if (uStack_a0 == 0) {
              if (*(undefined **)(puStack_a8 + 0x10) <= puVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddb90);
                (*pcVar2)();
              }
              puVar5 = *(undefined **)(puVar13 + (long)puVar4 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar5 = puVar4;
              FUN_1013e3f50(puVar4,puVar13,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
            }
            puVar10 = puVar4 + 1;
            if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddb8c);
              (*pcVar2)();
            }
            puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
            func_0x000107c61168();
            puVar6 = puVar5;
            func_0x000107c6148c();
            puVar14 = puStack_b8;
            if (puVar6 != (undefined *)0x0) break;
            func_0x000107c61170(puVar5);
            puVar4 = puVar4 + 1;
            if (puVar10 == puStack_b0) goto LAB_1013dda28;
          }
          puVar4 = puStack_b8;
          func_0x000107c61550();
          if ((((int)puVar4 == 0) || ((long)puVar14 < 0)) ||
             (puVar4 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar14 >> 0x3e == 0) {
              puVar9 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar9 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar14) {
                puVar9 = puVar14;
              }
              func_0x000107c60480();
            }
            puVar9 = puVar9 + 1;
            puVar4 = (undefined *)0x0;
            func_0x000100847e2c(0,puVar9,1,puVar14,FUN_10140e1bc,0x112d7b960,
                                &PTR__OBJC_CLASS___UILabel_1126aec30);
          }
          uVar12 = (ulong)puVar4 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar12 + 0x10);
          puVar5 = (undefined *)(uVar11 + 1);
          puStack_b8 = puVar4;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            puVar9 = puVar5;
            func_0x000100847e2c(puVar14,puVar5,1,puVar4,FUN_10140e1bc,0x112d7b960,
                                &PTR__OBJC_CLASS___UILabel_1126aec30);
            uVar12 = (ulong)puVar14 & 0xffffffffffffff8;
            puStack_b8 = puVar14;
          }
          *(undefined **)(uVar12 + 0x10) = puVar5;
          *(undefined **)(uVar12 + uVar11 * 8 + 0x20) = puVar6;
          puVar4 = puVar10;
        } while (puVar10 != puStack_b0);
      }
LAB_1013dda28:
      puVar4 = puStack_b8;
      puStack_e0 = puVar13;
      puStack_e8 = puVar3;
      if ((ulong)puStack_b8 >> 0x3e == 0) {
        puVar3 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar3 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_b8) {
          puVar3 = puStack_b8;
        }
        func_0x000107c60480();
      }
      if (puVar3 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        uVar11 = (ulong)puVar4 & 0xc000000000000001;
        uVar12 = (ulong)puVar4 & 0xffffffffffffff8;
        do {
          if (uVar11 == 0) {
            if (*(undefined **)(uVar12 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddb98);
              (*pcVar2)();
            }
            puVar5 = *(undefined **)(puVar4 + (long)puVar13 * 8 + 0x20);
            func_0x000107c61174();
            puVar10 = puVar9;
          }
          else {
            puVar5 = puVar13;
            puVar10 = puVar4;
            FUN_1013e3f50(puVar13,puVar4,&PTR__OBJC_CLASS___UILabel_1126aec30,0x112d7b960);
          }
          puVar14 = puVar13 + 1;
          if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddb94);
            (*pcVar2)();
          }
          puVar6 = puVar5;
          func_0x000107c3cf00();
          func_0x000107c61180();
          puVar9 = puVar10;
          if (puVar6 != (undefined *)0x0) {
            puVar7 = puVar6;
            func_0x000107c5faec();
            puVar9 = puVar10;
            func_0x000107c61170(puVar6);
            if ((puVar7 == (undefined *)0xd000000000000012) &&
               (puVar10 == (undefined *)0x800000010ef3c9c0)) {
              func_0x000107c6142c(puStack_e0);
              puVar10 = puStack_b8;
              puVar4 = (undefined *)0x800000010ef3c9c0;
            }
            else {
              puVar9 = puVar10;
              func_0x000107c605b8(puVar7,puVar10,0xd000000000000012,0x800000010ef3c9c0,0);
              func_0x000107c6142c(puVar10);
              puVar10 = puStack_e0;
              puVar4 = puStack_b8;
              if (((ulong)puVar7 & 1) == 0) goto LAB_1013dda94;
            }
            func_0x000107c6142c(puVar10);
            func_0x000107c6142c(puVar4);
            puVar3 = puVar5;
            func_0x000107c5c82c();
            func_0x000107c61180();
            goto joined_r0x0001013ddb68;
          }
LAB_1013dda94:
          func_0x000107c61170(puVar5);
          puVar13 = puVar13 + 1;
        } while (puVar14 != puVar3);
      }
      func_0x000107c6142c(puVar4);
      puVar13 = puStack_e0;
      puVar3 = puStack_b0;
      if (puStack_b0 == (undefined *)0x0) {
        puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar4 = (undefined *)0x0;
        do {
          while( true ) {
            if (uStack_a0 == 0) {
              if (*(undefined **)(puStack_a8 + 0x10) <= puVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddf48);
                (*pcVar2)();
              }
              puVar5 = *(undefined **)(puVar13 + (long)puVar4 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar5 = puVar4;
              FUN_1013e3f50(puVar4,puVar13,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
            }
            puVar10 = puVar4 + 1;
            if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddf44);
              (*pcVar2)();
            }
            puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
            func_0x000107c61168();
            puVar6 = puVar5;
            func_0x000107c6148c();
            puVar14 = puStack_d8;
            if (puVar6 != (undefined *)0x0) break;
            func_0x000107c61170(puVar5);
            puVar4 = puVar4 + 1;
            if (puVar10 == puVar3) goto LAB_1013ddd74;
          }
          puVar3 = puStack_d8;
          func_0x000107c61550();
          if ((((int)puVar3 == 0) || ((long)puVar14 < 0)) ||
             (puVar3 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar14 >> 0x3e == 0) {
              puVar9 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar9 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar14) {
                puVar9 = puVar14;
              }
              func_0x000107c60480();
            }
            puVar9 = puVar9 + 1;
            puVar3 = (undefined *)0x0;
            func_0x000100847e2c(0,puVar9,1,puVar14,FUN_10140e1bc,0x112d7b960,
                                &PTR__OBJC_CLASS___UILabel_1126aec30);
          }
          uVar12 = (ulong)puVar3 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar12 + 0x10);
          puVar4 = (undefined *)(uVar11 + 1);
          puStack_d8 = puVar3;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            puVar9 = puVar4;
            func_0x000100847e2c(puVar5,puVar4,1,puVar3,FUN_10140e1bc,0x112d7b960,
                                &PTR__OBJC_CLASS___UILabel_1126aec30);
            uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
            puStack_d8 = puVar5;
          }
          *(undefined **)(uVar12 + 0x10) = puVar4;
          *(undefined **)(uVar12 + uVar11 * 8 + 0x20) = puVar6;
          puVar4 = puVar10;
          puVar3 = puStack_b0;
        } while (puVar10 != puStack_b0);
      }
LAB_1013ddd74:
      puVar4 = puStack_d8;
      if ((ulong)puStack_d8 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puStack_d8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_d8) {
          puVar10 = puStack_d8;
        }
        func_0x000107c60480();
      }
      if (puVar10 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        puStack_b8 = (undefined *)((ulong)puVar4 & 0xc000000000000001);
        uVar11 = (ulong)puVar4 & 0xffffffffffffff8;
        do {
          if (puStack_b8 == (undefined *)0x0) {
            if (*(undefined **)(uVar11 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddf50);
              (*pcVar2)();
            }
            puVar5 = *(undefined **)(puVar4 + (long)puVar14 * 8 + 0x20);
            func_0x000107c61174();
            puVar3 = puVar9;
          }
          else {
            puVar5 = puVar14;
            puVar3 = puVar4;
            FUN_1013e3f50(puVar14,puVar4,&PTR__OBJC_CLASS___UILabel_1126aec30,0x112d7b960);
          }
          puVar6 = puVar14 + 1;
          if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013ddf4c);
            (*pcVar2)();
          }
          puVar7 = puVar5;
          func_0x000107c5c82c();
          func_0x000107c61180();
          puVar9 = puVar3;
          if (puVar7 != (undefined *)0x0) {
            puVar9 = puVar7;
            func_0x000107c5faec();
            func_0x000107c61170(puVar7);
            puVar1 = puStack_d0;
            puStack_98 = puVar9;
            puStack_90 = puVar3;
            func_0x000107c5eb88(puStack_d0);
            FUN_100e8b654();
            puVar8 = puVar1;
            puVar4 = PTR___sSSN_11034da80;
            func_0x000107c601f0(puVar1,PTR___sSSN_11034da80,puVar7);
            puVar9 = puStack_c0;
            (**(code **)(lStack_c8 + 8))(puVar1);
            func_0x000107c6142c(puVar3);
            uVar12 = (ulong)puVar8 & 0xffffffffffff;
            if (((ulong)puVar4 & 0x2000000000000000) != 0) {
              uVar12 = (ulong)puVar4 >> 0x38 & 0xf;
            }
            if (uVar12 == 0) {
              func_0x000107c6142c(puVar4);
              puVar4 = puStack_d8;
            }
            else {
              uVar12 = 0x2b;
              puVar9 = (undefined *)0xe100000000000000;
              func_0x000107c5fbb4(0x2b,0xe100000000000000,puVar8,puVar4);
              func_0x000107c6142c(puVar4);
              puVar3 = puStack_d8;
              puVar4 = puStack_d8;
              if ((uVar12 & 1) != 0) {
                func_0x000107c6142c(puVar13);
                func_0x000107c6142c(puVar3);
                puVar3 = puVar5;
                func_0x000107c5c82c();
                func_0x000107c61180();
                if (puVar3 == (undefined *)0x0) {
                  puVar13 = (undefined *)0x0;
                  puStack_b8 = (undefined *)0x0;
                }
                else {
                  puVar13 = puVar3;
                  func_0x000107c5faec();
                  puStack_b8 = puVar9;
                  func_0x000107c61170(puVar3);
                }
                FUN_1013e4688(puVar13,puStack_b8);
                func_0x000107c61170(puStack_e8);
                goto LAB_1013de280;
              }
            }
          }
          func_0x000107c61170(puVar5);
          puVar14 = puVar14 + 1;
          puVar3 = puStack_b0;
        } while (puVar6 != puVar10);
      }
      func_0x000107c6142c(puVar4);
      if (puVar3 == (undefined *)0x0) {
        puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar4 = (undefined *)0x0;
        do {
          while( true ) {
            if (uStack_a0 == 0) {
              if (*(undefined **)(puStack_a8 + 0x10) <= puVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1013de290);
                (*pcVar2)();
              }
              puVar5 = *(undefined **)(puVar13 + (long)puVar4 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar5 = puVar4;
              FUN_1013e3f50(puVar4,puVar13,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
            }
            puVar10 = puVar4 + 1;
            if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013de28c);
              (*pcVar2)();
            }
            puVar9 = PTR__OBJC_CLASS___UITextField_1126af060;
            func_0x000107c61168();
            puVar14 = puVar5;
            func_0x000107c6148c();
            if (puVar14 != (undefined *)0x0) break;
            func_0x000107c61170(puVar5);
            puVar4 = puVar4 + 1;
            if (puVar10 == puVar3) goto LAB_1013de110;
          }
          puVar3 = puStack_b8;
          func_0x000107c61550();
          if ((((int)puVar3 == 0) || ((long)puStack_b8 < 0)) ||
             (((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_b8 >> 0x3e == 0) {
              puVar9 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar9 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_b8) {
                puVar9 = puStack_b8;
              }
              func_0x000107c60480();
            }
            puVar9 = puVar9 + 1;
            puVar3 = (undefined *)0x0;
            func_0x000100847e2c(0,puVar9,1,puStack_b8,FUN_10140e120,0x112d60470,
                                &PTR__OBJC_CLASS___UITextField_1126af060);
            puStack_b8 = puVar3;
          }
          uVar12 = (ulong)puStack_b8 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar12 + 0x10);
          puVar3 = (undefined *)(uVar11 + 1);
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
            puVar4 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            puVar9 = puVar3;
            func_0x000100847e2c(puVar4,puVar3,1,puStack_b8,FUN_10140e120,0x112d60470,
                                &PTR__OBJC_CLASS___UITextField_1126af060);
            uVar12 = (ulong)puVar4 & 0xffffffffffffff8;
            puStack_b8 = puVar4;
          }
          *(undefined **)(uVar12 + 0x10) = puVar3;
          *(undefined **)(uVar12 + uVar11 * 8 + 0x20) = puVar14;
          puVar4 = puVar10;
          puVar3 = puStack_b0;
        } while (puVar10 != puStack_b0);
      }
LAB_1013de110:
      func_0x000107c6142c(puVar13);
      if ((ulong)puStack_b8 >> 0x3e == 0) {
        puVar3 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar3 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_b8) {
          puVar3 = puStack_b8;
        }
        func_0x000107c60480();
      }
      if (puVar3 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        uVar12 = (ulong)puStack_b8 & 0xc000000000000001;
        uVar11 = (ulong)puStack_b8 & 0xffffffffffffff8;
LAB_1013de198:
        if (uVar12 == 0) {
          if (*(undefined **)(uVar11 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013de298);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puStack_b8 + (long)puVar13 * 8 + 0x20);
          func_0x000107c61174();
          puVar4 = puVar9;
        }
        else {
          puVar5 = puVar13;
          puVar4 = puStack_b8;
          FUN_1013e3f50(puVar13,puStack_b8,&PTR__OBJC_CLASS___UITextField_1126af060,0x112d60470);
        }
        puVar10 = puVar13 + 1;
        if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013de294);
          (*pcVar2)();
        }
        puVar14 = puVar5;
        func_0x000107c3cf00();
        func_0x000107c61180();
        puVar9 = puVar4;
        if (puVar14 == (undefined *)0x0) goto LAB_1013de184;
        puVar6 = puVar14;
        func_0x000107c5faec();
        puVar9 = puVar4;
        func_0x000107c61170(puVar14);
        if ((puVar6 == (undefined *)0xd000000000000012) &&
           (puVar4 == (undefined *)0x800000010ef3c9c0)) {
          func_0x000107c6142c(puStack_b8);
          puVar4 = (undefined *)0x800000010ef3c9c0;
        }
        else {
          puVar9 = puVar4;
          func_0x000107c605b8(puVar6,puVar4,0xd000000000000012,0x800000010ef3c9c0,0);
          func_0x000107c6142c(puVar4);
          puVar4 = puStack_b8;
          if (((ulong)puVar6 & 1) == 0) goto LAB_1013de184;
        }
        func_0x000107c6142c(puVar4);
        puVar3 = puVar5;
        func_0x000107c5c82c();
        func_0x000107c61180();
joined_r0x0001013ddb68:
        if (puVar3 == (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
          puStack_b8 = (undefined *)0x0;
        }
        else {
          puVar13 = puVar3;
          func_0x000107c5faec();
          puStack_b8 = puVar9;
          func_0x000107c61170(puVar3);
        }
        FUN_1013e4688(puVar13,puStack_b8);
        func_0x000107c61170(puStack_e8);
LAB_1013de280:
        func_0x000107c61170(puVar5);
        goto LAB_1013de2c4;
      }
LAB_1013de2b4:
      func_0x000107c61170(puStack_e8);
LAB_1013de2c4:
      func_0x000107c6142c(puStack_b8);
    }
  }
  return;
LAB_1013de184:
  func_0x000107c61170(puVar5);
  puVar13 = puVar13 + 1;
  if (puVar10 == puVar3) goto LAB_1013de2b4;
  goto LAB_1013de198;
}



/* Entry: 1013de2f4; end: 1013de643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013de2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  puVar7 = &stack0xffffffffffffff60;
  func_0x000107c614f0();
  lVar4 = unaff_x20 + _DAT_112d7b748;
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c61614(lVar4,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7b770) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b778) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b780) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b788) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b790) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b798) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b7a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b7b8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b7c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b7c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b7d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b7d8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b750) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b758) = param_6;
  lVar3 = 0;
  FUN_1013e32f0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b840);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b848);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7b828) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112d7b830) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_7);
  plVar5 = &lStack_80;
  func_0x000107c61154(plVar5,puVar2);
  lVar3 = 0;
  FUN_1013e382c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b890);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7b898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d7b878) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112d7b880) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_7);
  plVar6 = &lStack_90;
  func_0x000107c61154(plVar6,puVar2);
  *(long **)(unaff_x20 + _DAT_112d7b760) = plVar5;
  *(long **)(unaff_x20 + _DAT_112d7b768) = plVar6;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(plVar5);
  func_0x000107c61174(plVar6);
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff60,puVar2);
  func_0x000107c61180();
  FUN_1013de644();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(plVar6);
  return puVar7;
}



/* Entry: 1013de644; end: 1013de83f;  */

/* WARNING: Possible PIC construction at 0x0001013de6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013de70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013de764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013de7c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013de768) */
/* WARNING: Removing unreachable block (ram,0x0001013de710) */
/* WARNING: Removing unreachable block (ram,0x0001013de6b8) */
/* WARNING: Removing unreachable block (ram,0x0001013de7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013de644(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar4 = &UNK_1103afd50;
  func_0x000107c613fc(&UNK_1103afd50,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b7e8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_1013e4d14;
  puVar1[1] = puVar4;
  func_0x000107c6157c(puVar4);
  FUN_100cafef4(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 1013de840; end: 1013de873; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView initWithCoder:] */

undefined8 FUN_1013de840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1013e4768();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1013de874; end: 1013dfe37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013de874(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  ulong uVar13;
  long unaff_x20;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined auStack_110 [8];
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  puVar3 = (undefined *)0x0;
  func_0x000107c5eb9c();
  lStack_d8 = *(long *)(puVar3 + -8);
  puStack_d0 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  puStack_e0 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001008479c8();
  puVar14 = auStack_90;
  func_0x000107c61534();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined **)(puVar3 + 0x20) = param_1;
  func_0x000107c61174();
  FUN_1013e25f4();
  puStack_a0 = puVar3;
  func_0x000100847d40();
  puStack_c8 = puStack_a0;
  func_0x000105219828();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    puVar14 = (undefined1 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  puVar19 = puStack_c8;
  FUN_1013e48d0(puStack_c8,puVar3,puVar14);
  func_0x000107c6142c(puVar14);
  if (puVar19 != (undefined *)0x0) {
    func_0x000107c61174(puVar19);
    uVar4 = 0x65756e69746e6f63;
    puVar3 = (undefined *)0xef6e6f747475625f;
    func_0x000107c5fadc(0x65756e69746e6f63);
    func_0x000107c520f4(puVar19);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(uVar4);
  }
  if ((((*(byte *)(unaff_x20 + _DAT_112d7b798) & 1) != 0) ||
      (*(char *)(unaff_x20 + _DAT_112d7b7a0) == '\x01')) &&
     (puVar19 = puStack_c8, func_0x0001013e4b2c(), puVar19 != (undefined *)0x0)) {
    uVar4 = 0x6564616548474953;
    puVar3 = (undefined *)0xee006b6361422d72;
    func_0x000107c5fadc(0x6564616548474953);
    func_0x000107c520f4(puVar19);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(uVar4);
  }
  puVar19 = puStack_c8;
  if ((*(byte *)(unaff_x20 + _DAT_112d7b790) & 1) == 0) {
    puVar6 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
    if ((ulong)puStack_c8 >> 0x3e == 0) {
      puVar15 = *(undefined **)(puVar6 + 0x10);
    }
    else {
      puVar15 = puVar6;
      if ((undefined *)0x7fffffffffffffff < puStack_c8) {
        puVar15 = puStack_c8;
      }
      func_0x000107c60480();
    }
    puStack_c0 = (undefined *)((ulong)puVar19 & 0xc000000000000001);
    puStack_e8 = puVar15;
    if (puVar15 == (undefined *)0x0) {
      puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar17 = (undefined *)0x0;
      do {
        while( true ) {
          if (puStack_c0 == (undefined *)0x0) {
            if (*(undefined **)(puVar6 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5a4);
              (*pcVar2)();
            }
            puVar5 = *(undefined **)(puVar19 + (long)puVar17 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar17;
            FUN_1013e3f50(puVar17,puVar19,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
          }
          puVar18 = puVar17 + 1;
          if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df59c);
            (*pcVar2)();
          }
          puVar3 = PTR__OBJC_CLASS___UITextField_1126af060;
          func_0x000107c61168();
          puVar7 = puVar5;
          func_0x000107c6148c();
          puVar11 = puStack_108;
          if (puVar7 != (undefined *)0x0) break;
          func_0x000107c61170(puVar5);
          puVar17 = puVar17 + 1;
          if (puVar18 == puVar15) goto LAB_1013ded88;
        }
        puVar15 = puStack_108;
        func_0x000107c61550();
        if ((((int)puVar15 == 0) || ((long)puVar11 < 0)) ||
           (puVar15 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar3 = puVar11;
            }
            func_0x000107c60480();
          }
          puVar3 = puVar3 + 1;
          puVar15 = (undefined *)0x0;
          func_0x000100847e2c(0,puVar3,1,puVar11,FUN_10140e120,0x112d60470,
                              &PTR__OBJC_CLASS___UITextField_1126af060);
        }
        uVar13 = (ulong)puVar15 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar13 + 0x10);
        puVar17 = (undefined *)(uVar20 + 1);
        puStack_108 = puVar15;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          puVar3 = puVar17;
          func_0x000100847e2c(puVar5,puVar17,1,puVar15,FUN_10140e120,0x112d60470,
                              &PTR__OBJC_CLASS___UITextField_1126af060);
          uVar13 = (ulong)puVar5 & 0xffffffffffffff8;
          puStack_108 = puVar5;
        }
        *(undefined **)(uVar13 + 0x10) = puVar17;
        *(undefined **)(uVar13 + uVar20 * 8 + 0x20) = puVar7;
        puVar15 = puStack_e8;
        puVar17 = puVar18;
      } while (puVar18 != puStack_e8);
    }
LAB_1013ded88:
    puVar17 = puStack_108;
    puStack_f0 = puVar6;
    if ((ulong)puStack_108 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puStack_108 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puStack_108 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_108) {
        puVar6 = puStack_108;
      }
      func_0x000107c60480();
    }
    if (puVar6 != (undefined *)0x0) {
      uVar20 = 0;
      uStack_f8 = (ulong)puVar17 & 0xc000000000000001;
      uStack_100 = (ulong)puVar17 & 0xffffffffffffff8;
      do {
        if (uStack_f8 == 0) {
          if (*(ulong *)(uStack_100 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5ac);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(puVar17 + uVar20 * 8 + 0x20);
          func_0x000107c61174();
          puVar5 = puVar3;
        }
        else {
          uVar13 = uVar20;
          puVar5 = puVar17;
          FUN_1013e3f50(uVar20,puVar17,&PTR__OBJC_CLASS___UITextField_1126af060,0x112d60470);
        }
        puVar18 = (undefined *)(uVar20 + 1);
        if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5a8);
          (*pcVar2)();
        }
        uVar8 = uVar13;
        func_0x000107c4e80c();
        func_0x000107c61180();
        puVar3 = puVar5;
        if (uVar8 != 0) {
          uVar9 = uVar8;
          func_0x000107c5faec();
          func_0x000107c61170(uVar8);
          puVar19 = puStack_e0;
          puStack_a0 = (undefined *)uVar9;
          puStack_98 = puVar5;
          func_0x000107c5eb88(puStack_e0);
          FUN_100e8b654();
          puVar3 = PTR___sSSN_11034da80;
          puVar15 = puVar19;
          puVar17 = PTR___sSSN_11034da80;
          func_0x000107c601f0(puVar19,PTR___sSSN_11034da80,uVar8);
          (**(code **)(lStack_d8 + 8))(puVar19,puStack_d0);
          func_0x000107c6142c(puVar5);
          puVar5 = puVar17;
          func_0x000107c5fb1c();
          puVar19 = puStack_c8;
          func_0x000107c6142c(puVar17);
          puVar17 = puStack_108;
          uStack_b0 = 0x656e6f6870;
          uStack_a8 = 0xe500000000000000;
          puVar10 = &uStack_b0;
          puStack_a0 = puVar15;
          puStack_98 = puVar5;
          func_0x000107c6022c(puVar10,puVar3,puVar3,uVar8,uVar8);
          puVar15 = puStack_e8;
          func_0x000107c6142c(puVar5);
          if (((ulong)puVar10 & 1) != 0) {
            func_0x000107c6142c(puVar17);
            func_0x000107c61174(uVar13);
            uVar4 = 0xd000000000000013;
            puVar3 = (undefined *)0x800000010ef3c9a0;
            func_0x000107c5fadc(0xd000000000000013);
            func_0x000107c520f4(uVar13);
            func_0x000107c61170(uVar13);
            func_0x000107c61170(uVar13);
            func_0x000107c61170(uVar4);
            puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puVar17 = puStack_f0;
            goto joined_r0x0001013def70;
          }
        }
        func_0x000107c61170(uVar13);
        uVar20 = uVar20 + 1;
      } while (puVar18 != puVar6);
    }
    func_0x000107c6142c(puVar17);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar17 = puStack_f0;
joined_r0x0001013def70:
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
    puStack_f0 = puVar17;
    if (puVar15 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      do {
        while( true ) {
          if (puStack_c0 == (undefined *)0x0) {
            if (*(undefined **)(puVar17 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df848);
              (*pcVar2)();
            }
            puVar18 = *(undefined **)(puVar19 + (long)puVar5 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar18 = puVar5;
            FUN_1013e3f50(puVar5,puVar19,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
          }
          puVar11 = puVar5 + 1;
          if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df844);
            (*pcVar2)();
          }
          puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
          func_0x000107c61168();
          puVar7 = puVar18;
          func_0x000107c6148c();
          if (puVar7 != (undefined *)0x0) break;
          func_0x000107c61170(puVar18);
          puVar5 = puVar5 + 1;
          if (puVar11 == puVar15) goto LAB_1013def7c;
        }
        puVar15 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar15 == 0) || ((long)puVar6 < 0)) ||
           (puVar15 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar3 = puVar6;
            }
            func_0x000107c60480();
          }
          puVar3 = puVar3 + 1;
          puVar15 = (undefined *)0x0;
          func_0x000100847e2c(0,puVar3,1,puVar6,FUN_10140e1bc,0x112d7b960,
                              &PTR__OBJC_CLASS___UILabel_1126aec30);
        }
        uVar13 = (ulong)puVar15 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar13 + 0x10);
        puVar5 = (undefined *)(uVar20 + 1);
        puVar6 = puVar15;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          puVar3 = puVar5;
          func_0x000100847e2c(puVar6,puVar5,1,puVar15,FUN_10140e1bc,0x112d7b960,
                              &PTR__OBJC_CLASS___UILabel_1126aec30);
          uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar13 + 0x10) = puVar5;
        *(undefined **)(uVar13 + uVar20 * 8 + 0x20) = puVar7;
        puVar15 = puStack_e8;
        puVar5 = puVar11;
      } while (puVar11 != puStack_e8);
    }
LAB_1013def7c:
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar5 = puVar6;
      }
      func_0x000107c60480();
    }
    if (puVar5 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      uStack_f8 = (ulong)puVar6 & 0xc000000000000001;
      do {
        if (uStack_f8 == 0) {
          if (*(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5c4);
            (*pcVar2)();
          }
          puVar11 = *(undefined **)(puVar6 + (long)puVar18 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar11 = puVar18;
          puVar3 = puVar6;
          FUN_1013e3f50(puVar18,puVar6,&PTR__OBJC_CLASS___UILabel_1126aec30,0x112d7b960);
        }
        puVar7 = puVar18 + 1;
        if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5c0);
          (*pcVar2)();
        }
        puVar19 = puVar11;
        func_0x000107c5c82c();
        func_0x000107c61180();
        if (puVar19 == (undefined *)0x0) {
          puVar21 = (undefined *)0x0;
          puVar16 = (undefined *)0xe000000000000000;
        }
        else {
          puVar17 = puVar19;
          func_0x000107c5faec();
          func_0x000107c61170(puVar19);
          puVar15 = puStack_e0;
          puStack_a0 = puVar17;
          puStack_98 = puVar3;
          func_0x000107c5eb88(puStack_e0);
          FUN_100e8b654();
          puVar21 = puVar15;
          puVar16 = PTR___sSSN_11034da80;
          func_0x000107c601f0(puVar15,PTR___sSSN_11034da80,puVar19);
          puVar17 = puStack_f0;
          (**(code **)(lStack_d8 + 8))(puVar15,puStack_d0);
          puVar15 = puStack_e8;
          func_0x000107c6142c(puVar3);
        }
        uVar20 = 0x2b;
        puVar3 = (undefined *)0xe100000000000000;
        func_0x000107c5fbb4(0x2b,0xe100000000000000,puVar21,puVar16);
        func_0x000107c6142c(puVar16);
        if ((uVar20 & 1) != 0) {
          func_0x000107c6142c(puVar6);
          func_0x000107c61174();
          uVar4 = 0xd000000000000012;
          puVar3 = (undefined *)0x800000010ef3c9c0;
          func_0x000107c5fadc(0xd000000000000012);
          func_0x000107c520f4(puVar11);
          func_0x000107c61170(uVar4);
          puVar6 = puVar11;
          func_0x000107c5c42c();
          func_0x000107c61180();
          func_0x000107c61170(puVar11);
          puVar19 = puStack_c8;
          if (puVar6 != (undefined *)0x0) {
            puVar3 = (undefined *)0x800000010ef3ca20;
            uVar4 = 0xd000000000000010;
            func_0x000107c5fadc(0xd000000000000010);
            func_0x000107c520f4(puVar6);
            func_0x000107c61170(puVar6);
            puVar15 = puStack_e8;
            func_0x000107c61170(uVar4);
          }
          func_0x000107c61170(puVar11);
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          goto joined_r0x0001013df17c;
        }
        func_0x000107c61170(puVar11);
        puVar18 = puVar18 + 1;
        puVar19 = puStack_c8;
      } while (puVar7 != puVar5);
    }
    func_0x000107c6142c(puVar6);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x0001013df17c:
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
    if (puVar15 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      do {
        while( true ) {
          if (puStack_c0 == (undefined *)0x0) {
            if (*(undefined **)(puVar17 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013dfc14);
              (*pcVar2)();
            }
            puVar18 = *(undefined **)(puVar19 + (long)puVar5 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar18 = puVar5;
            FUN_1013e3f50(puVar5,puVar19,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
          }
          puVar11 = puVar5 + 1;
          if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013dfc10);
            (*pcVar2)();
          }
          puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
          func_0x000107c61168();
          puVar7 = puVar18;
          func_0x000107c6148c();
          if (puVar7 != (undefined *)0x0) break;
          func_0x000107c61170(puVar18);
          puVar5 = puVar5 + 1;
          if (puVar11 == puVar15) goto LAB_1013df188;
        }
        puVar15 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar15 == 0) || ((long)puVar6 < 0)) ||
           (puVar15 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar3 = puVar6;
            }
            func_0x000107c60480();
          }
          puVar3 = puVar3 + 1;
          puVar15 = (undefined *)0x0;
          func_0x000100847e2c(0,puVar3,1,puVar6,FUN_10140e1bc,0x112d7b960,
                              &PTR__OBJC_CLASS___UILabel_1126aec30);
        }
        uVar13 = (ulong)puVar15 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar13 + 0x10);
        puVar5 = (undefined *)(uVar20 + 1);
        puVar6 = puVar15;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          puVar3 = puVar5;
          func_0x000100847e2c(puVar6,puVar5,1,puVar15,FUN_10140e1bc,0x112d7b960,
                              &PTR__OBJC_CLASS___UILabel_1126aec30);
          uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar13 + 0x10) = puVar5;
        *(undefined **)(uVar13 + uVar20 * 8 + 0x20) = puVar7;
        puVar15 = puStack_e8;
        puVar5 = puVar11;
      } while (puVar11 != puStack_e8);
    }
LAB_1013df188:
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar19 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar19 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar19 = puVar6;
      }
      func_0x000107c60480();
    }
    if (puVar19 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      uStack_f8 = (ulong)puVar6 & 0xc000000000000001;
      uStack_100 = (ulong)puVar6 & 0xffffffffffffff8;
      do {
        if (uStack_f8 == 0) {
          if (*(undefined **)(uStack_100 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5bc);
            (*pcVar2)();
          }
          puVar15 = *(undefined **)(puVar6 + (long)puVar5 * 8 + 0x20);
          func_0x000107c61174();
          puVar18 = puVar3;
        }
        else {
          puVar15 = puVar5;
          puVar18 = puVar6;
          FUN_1013e3f50(puVar5,puVar6,&PTR__OBJC_CLASS___UILabel_1126aec30,0x112d7b960);
        }
        puVar11 = puVar5 + 1;
        if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5b8);
          (*pcVar2)();
        }
        puVar3 = puVar15;
        func_0x000107c5c82c();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
          puVar21 = (undefined *)0x0;
          puVar16 = (undefined *)0xe000000000000000;
          puVar7 = (undefined *)0x0;
        }
        else {
          puVar21 = puVar3;
          puVar7 = puVar18;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
          puVar1 = puStack_e0;
          puStack_a0 = puVar21;
          puStack_98 = puVar7;
          func_0x000107c5eb88(puStack_e0);
          FUN_100e8b654();
          puVar21 = puVar1;
          puVar16 = PTR___sSSN_11034da80;
          func_0x000107c601f0(puVar1,PTR___sSSN_11034da80,puVar3);
          puVar18 = puStack_d0;
          (**(code **)(lStack_d8 + 8))(puVar1);
          func_0x000107c6142c();
        }
        uVar20 = (ulong)puVar21 & 0xffffffffffff;
        if (((ulong)puVar16 & 0x2000000000000000) != 0) {
          uVar20 = (ulong)puVar16 >> 0x38 & 0xf;
        }
        if (uVar20 == 0) {
          func_0x000107c61170(puVar15);
          func_0x000107c6142c(puVar16);
          puVar3 = puVar18;
        }
        else {
          func_0x000105219858();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) {
            func_0x000107c6142c(puVar6);
            puVar6 = puVar16;
LAB_1013df36c:
            func_0x000107c6142c(puVar6);
            func_0x000107c61174(puVar15);
            uVar4 = 0xd000000000000018;
            puVar3 = (undefined *)0x800000010ef3c9e0;
            func_0x000107c5fadc(0xd000000000000018);
            func_0x000107c520f4(puVar15);
            func_0x000107c61170(puVar15);
            func_0x000107c61170(puVar15);
            func_0x000107c61170(uVar4);
            puVar15 = puStack_e8;
            puVar19 = puStack_c8;
            goto joined_r0x0001013df3d0;
          }
          puVar17 = puVar7;
          func_0x000107c5faec();
          puVar3 = puVar18;
          func_0x000107c61170(puVar7);
          if ((puVar21 == puVar17) && (puVar16 == puVar18)) {
            func_0x000107c61170(puVar15);
            func_0x000107c6142c(puVar16);
            func_0x000107c6142c(puVar18);
            puVar17 = puStack_f0;
          }
          else {
            puVar3 = puVar16;
            func_0x000107c605b8(puVar21,puVar16,puVar17,puVar18,0);
            func_0x000107c6142c(puVar16);
            func_0x000107c6142c(puVar18);
            puVar17 = puStack_f0;
            if (((ulong)puVar21 & 1) == 0) goto LAB_1013df36c;
            func_0x000107c61170(puVar15);
            puVar17 = puStack_f0;
          }
        }
        puVar5 = puVar5 + 1;
        puVar15 = puStack_e8;
      } while (puVar11 != puVar19);
    }
    func_0x000107c6142c(puVar6);
    puVar19 = puStack_c8;
joined_r0x0001013df3d0:
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_c8 = puVar19;
    if (puVar15 != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        while( true ) {
          if (puStack_c0 == (undefined *)0x0) {
            if (*(undefined **)(puVar17 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013dfdb8);
              (*pcVar2)();
            }
            puVar5 = *(undefined **)(puVar19 + (long)puVar6 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar6;
            FUN_1013e3f50(puVar6,puVar19,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
          }
          puVar18 = puVar6 + 1;
          if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013dfdb4);
            (*pcVar2)();
          }
          puVar3 = PTR__OBJC_CLASS___UITextField_1126af060;
          func_0x000107c61168();
          puVar7 = puVar5;
          func_0x000107c6148c();
          puVar11 = puStack_f0;
          if (puVar7 != (undefined *)0x0) break;
          func_0x000107c61170(puVar5);
          puVar6 = puVar6 + 1;
          if (puVar18 == puVar15) goto LAB_1013df3e0;
        }
        puVar6 = puStack_f0;
        func_0x000107c61550();
        if ((((int)puVar6 == 0) || ((long)puVar11 < 0)) ||
           (puVar6 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar3 = puVar11;
            }
            func_0x000107c60480();
          }
          puVar3 = puVar3 + 1;
          puVar6 = (undefined *)0x0;
          func_0x000100847e2c(0,puVar3,1,puVar11,FUN_10140e120,0x112d60470,
                              &PTR__OBJC_CLASS___UITextField_1126af060);
        }
        uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar13 + 0x10);
        puVar15 = (undefined *)(uVar20 + 1);
        puStack_f0 = puVar6;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          puVar3 = puVar15;
          func_0x000100847e2c(puVar5,puVar15,1,puVar6,FUN_10140e120,0x112d60470,
                              &PTR__OBJC_CLASS___UITextField_1126af060);
          uVar13 = (ulong)puVar5 & 0xffffffffffffff8;
          puStack_f0 = puVar5;
        }
        *(undefined **)(uVar13 + 0x10) = puVar15;
        *(undefined **)(uVar13 + uVar20 * 8 + 0x20) = puVar7;
        puVar6 = puVar18;
        puVar15 = puStack_e8;
      } while (puVar18 != puStack_e8);
    }
LAB_1013df3e0:
    func_0x000107c6142c(puVar19);
    puVar6 = puStack_f0;
    if ((ulong)puStack_f0 >> 0x3e == 0) {
      puVar19 = *(undefined **)(((ulong)puStack_f0 & 0xffffffffffffff8) + 0x10);
      puVar15 = puStack_e0;
    }
    else {
      puVar19 = (undefined *)((ulong)puStack_f0 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_f0) {
        puVar19 = puStack_f0;
      }
      func_0x000107c60480();
      puVar15 = puStack_e0;
    }
    puStack_e0 = puVar15;
    if (puVar19 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      puStack_c0 = (undefined *)((ulong)puVar6 & 0xc000000000000001);
      puStack_c8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      do {
        if (puStack_c0 == (undefined *)0x0) {
          if (*(undefined **)(puStack_c8 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5b4);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puVar6 + (long)puVar17 * 8 + 0x20);
          func_0x000107c61174();
          puVar18 = puVar3;
        }
        else {
          puVar5 = puVar17;
          puVar18 = puVar6;
          FUN_1013e3f50(puVar17,puVar6,&PTR__OBJC_CLASS___UITextField_1126af060,0x112d60470);
        }
        puVar11 = puVar17 + 1;
        if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5b0);
          (*pcVar2)();
        }
        puVar7 = puVar5;
        func_0x000107c4e80c();
        func_0x000107c61180();
        puVar3 = puVar18;
        if (puVar7 != (undefined *)0x0) {
          puVar3 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          puStack_a0 = puVar3;
          puStack_98 = puVar18;
          func_0x000107c5eb88(puVar15);
          FUN_100e8b654();
          puVar3 = PTR___sSSN_11034da80;
          puVar21 = puVar15;
          puVar6 = PTR___sSSN_11034da80;
          func_0x000107c601f0(puVar15,PTR___sSSN_11034da80,puVar7);
          (**(code **)(lStack_d8 + 8))(puVar15,puStack_d0);
          func_0x000107c6142c(puVar18);
          puVar18 = puVar6;
          func_0x000107c5fb1c();
          func_0x000107c6142c(puVar6);
          puVar6 = puStack_f0;
          uStack_b0 = 0x65646f63;
          uStack_a8 = 0xe400000000000000;
          puVar10 = &uStack_b0;
          puStack_a0 = puVar21;
          puStack_98 = puVar18;
          func_0x000107c6022c(puVar10,puVar3,puVar3,puVar7,puVar7);
          func_0x000107c6142c(puVar18);
          if (((ulong)puVar10 & 1) != 0) {
            func_0x000107c6142c(puVar6);
            func_0x000107c61174(puVar5);
            uVar4 = 0xd000000000000011;
            uVar12 = 0x800000010ef3ca00;
            goto LAB_1013dfa48;
          }
        }
        func_0x000107c61170(puVar5);
        puVar17 = puVar17 + 1;
      } while (puVar11 != puVar19);
    }
    goto LAB_1013dfdf0;
  }
  puVar3 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
  if ((ulong)puStack_c8 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar3 + 0x10);
    if (puVar15 != (undefined *)0x0) goto LAB_1013dea6c;
LAB_1013df5dc:
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = puVar3;
    if ((undefined *)0x7fffffffffffffff < puStack_c8) {
      puVar15 = puStack_c8;
    }
    func_0x000107c60480();
    if (puVar15 == (undefined *)0x0) goto LAB_1013df5dc;
LAB_1013dea6c:
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = (undefined *)0x0;
    puVar17 = puVar19;
    do {
      while( true ) {
        if (((ulong)puVar19 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar3 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df5a0);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puVar17 + (long)puVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar6;
          FUN_1013e3f50(puVar6,puVar17,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        puVar18 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df598);
          (*pcVar2)();
        }
        puVar11 = PTR__OBJC_CLASS___UITextField_1126af060;
        func_0x000107c61168(PTR__OBJC_CLASS___UITextField_1126af060);
        puVar7 = puVar5;
        func_0x000107c6148c(puVar5,puVar11);
        puVar11 = puStack_c0;
        if (puVar7 != (undefined *)0x0) break;
        func_0x000107c61170(puVar5);
        puVar6 = puVar6 + 1;
        if (puVar18 == puVar15) goto LAB_1013df5e8;
      }
      puVar6 = puStack_c0;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar11 < 0)) ||
         (puVar6 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar11 >> 0x3e == 0) {
          puVar17 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar17 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar11) {
            puVar17 = puVar11;
          }
          func_0x000107c60480(puVar17);
        }
        puVar6 = (undefined *)0x0;
        func_0x000100847e2c(0,puVar17 + 1,1,puVar11,FUN_10140e120,0x112d60470,
                            &PTR__OBJC_CLASS___UITextField_1126af060);
      }
      uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar20 = *(ulong *)(uVar13 + 0x10);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        func_0x000100847e2c(puVar17,uVar20 + 1,1,puVar6,FUN_10140e120,0x112d60470,
                            &PTR__OBJC_CLASS___UITextField_1126af060);
        uVar13 = (ulong)puVar17 & 0xffffffffffffff8;
        puVar6 = puVar17;
      }
      puStack_c0 = puVar6;
      *(ulong *)(uVar13 + 0x10) = uVar20 + 1;
      *(undefined **)(uVar13 + uVar20 * 8 + 0x20) = puVar7;
      puVar6 = puVar18;
      puVar17 = puStack_c8;
    } while (puVar18 != puVar15);
  }
LAB_1013df5e8:
  puVar6 = puStack_c0;
  if ((ulong)puStack_c0 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puStack_c0 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puStack_c0 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_c0) {
      puVar17 = puStack_c0;
    }
    func_0x000107c60480();
  }
  if (puVar17 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    puVar11 = puVar6;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df69c);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar11 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar18;
        FUN_1013e3f50(puVar18,puVar11,&PTR__OBJC_CLASS___UITextField_1126af060,0x112d60470);
      }
      puVar7 = puVar18 + 1;
      if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013df698);
        (*pcVar2)();
      }
      uVar20 = 0;
      puStack_a0 = puVar5;
      FUN_1013e2a04();
      if ((uVar20 & 1) != 0) {
        func_0x000107c6142c(puStack_c8);
        puVar6 = puStack_c0;
        goto LAB_1013dfa28;
      }
      func_0x000107c61170(puVar5);
      puVar18 = puVar18 + 1;
      puVar11 = puStack_c0;
    } while (puVar7 != puVar17);
  }
  func_0x000107c6142c();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar19 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar3 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013dfa80);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puStack_c8 + (long)puVar17 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar17;
          FUN_1013e3f50(puVar17,puStack_c8,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        puVar18 = puVar17 + 1;
        if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013dfa7c);
          (*pcVar2)();
        }
        puVar11 = PTR__OBJC_CLASS___UITextField_1126af060;
        func_0x000107c61168(PTR__OBJC_CLASS___UITextField_1126af060);
        puVar7 = puVar5;
        func_0x000107c6148c(puVar5,puVar11);
        if (puVar7 != (undefined *)0x0) break;
        func_0x000107c61170(puVar5);
        puVar17 = puVar17 + 1;
        if (puVar18 == puVar15) goto LAB_1013df9e8;
      }
      puVar17 = puVar6;
      func_0x000107c61550();
      if ((((int)puVar17 == 0) || ((long)puVar6 < 0)) || (((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar17 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar17 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar17 = puVar6;
          }
          func_0x000107c60480(puVar17);
        }
        puVar5 = (undefined *)0x0;
        func_0x000100847e2c(0,puVar17 + 1,1,puVar6,FUN_10140e120,0x112d60470,
                            &PTR__OBJC_CLASS___UITextField_1126af060);
        puVar6 = puVar5;
      }
      uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar20 = *(ulong *)(uVar13 + 0x10);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        func_0x000100847e2c(puVar17,uVar20 + 1,1,puVar6,FUN_10140e120,0x112d60470,
                            &PTR__OBJC_CLASS___UITextField_1126af060);
        uVar13 = (ulong)puVar17 & 0xffffffffffffff8;
        puVar6 = puVar17;
      }
      *(ulong *)(uVar13 + 0x10) = uVar20 + 1;
      *(undefined **)(uVar13 + uVar20 * 8 + 0x20) = puVar7;
      puVar17 = puVar18;
    } while (puVar18 != puVar15);
  }
LAB_1013df9e8:
  func_0x000107c6142c(puStack_c8);
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar3 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar3 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar3 != (undefined *)0x0) {
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013dfe38);
        (*pcVar2)();
      }
      puVar5 = *(undefined **)(puVar6 + 0x20);
      func_0x000107c61174(puVar5);
    }
    else {
      puVar5 = (undefined *)0x0;
      FUN_1013e3f50(0,puVar6,&PTR__OBJC_CLASS___UITextField_1126af060,0x112d60470);
    }
LAB_1013dfa28:
    func_0x000107c6142c(puVar6);
    func_0x000107c61174(puVar5);
    uVar4 = 0x6c69616d65;
    uVar12 = 0xe500000000000000;
LAB_1013dfa48:
    func_0x000107c5fadc(uVar4,uVar12);
    func_0x000107c520f4(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar4);
    return;
  }
LAB_1013dfdf0:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1013dfe38; end: 1013dfec3; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dfe38(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar2 = *(long *)(param_1 + _DAT_112d7b7c0);
  if (lVar2 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      FUN_1013de874();
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013dfec4; end: 1013e0053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013dfec4(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  
  if (param_2 == 0) {
LAB_1013e0038:
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(*(long *)(unaff_x20 + _DAT_112d7b760) + _DAT_112d7b840);
    pcVar8 = (code *)*plVar1;
    if (pcVar8 == (code *)0x0) {
      plVar1 = (long *)(*(long *)(unaff_x20 + _DAT_112d7b768) + _DAT_112d7b890);
      pcVar8 = (code *)*plVar1;
      if (pcVar8 == (code *)0x0) goto LAB_1013e0038;
      lVar9 = plVar1[1];
      puVar2 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7b768) + _DAT_112d7b888);
      uVar7 = *puVar2;
      uVar4 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      func_0x000107c6157c(lVar9);
      func_0x000100cafef8(uVar7,uVar4);
      lVar3 = *plVar1;
      lVar5 = plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      func_0x000100cafef8(lVar3,lVar5);
      puVar6 = PTR_PTR_1126afb48;
      func_0x000107c61168(PTR_PTR_1126afb48);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c50838(puVar6);
    }
    else {
      lVar9 = plVar1[1];
      puVar2 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7b760) + _DAT_112d7b838);
      uVar7 = *puVar2;
      uVar4 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      func_0x000107c6157c(lVar9);
      FUN_100cafef4(uVar7,uVar4);
      lVar3 = *plVar1;
      lVar5 = plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      func_0x000100cafef8(lVar3,lVar5);
      puVar6 = PTR_PTR_1126d0ba0;
      func_0x000107c61168(PTR_PTR_1126d0ba0);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c50838(puVar6);
    }
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    (*pcVar8)(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000100cafef8(pcVar8,lVar9);
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 1013e0054; end: 1013e0a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e0054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar7 = _DAT_112d7b7b8;
  ppuVar6 = &puStack_d0;
  *(byte *)(unaff_x20 + _DAT_112d7b7b8) = (*(byte *)(unaff_x20 + _DAT_112d7b790) ^ 0xff) & 1;
  puVar3 = &UNK_1103afd50;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_1103afd50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(&UNK_1103afd50,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1013e464c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100e1779c;
  puStack_88 = &UNK_1103afd68;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  uStack_b0 = 0x1013e4654;
  puStack_d0 = puVar1;
  uStack_c8 = 0x42000000;
  uStack_c0 = 0x100e17304;
  puStack_b8 = &UNK_1103afd90;
  puStack_a8 = puVar3;
  func_0x000107c60bc4(&puStack_d0);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c47be0();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_a8);
  puVar1 = puStack_78;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d7b7c8);
  *(undefined **)(unaff_x20 + _DAT_112d7b7c8) = puVar4;
  func_0x000107c61174(puVar4);
  func_0x000107c61170(uVar9);
  if (*(char *)(unaff_x20 + lVar7) == '\0') {
    lVar8 = *(long *)(unaff_x20 + _DAT_112d7b758);
    lVar7 = lVar8;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    lVar8 = *(long *)(unaff_x20 + _DAT_112d7b750);
    lVar7 = lVar8;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    func_0x0001013e0c74(param_2,param_3);
  }
  else {
    lVar8 = *(long *)(unaff_x20 + _DAT_112d7b750);
    lVar7 = lVar8;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    lVar8 = *(long *)(unaff_x20 + _DAT_112d7b758);
    lVar7 = lVar8;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    func_0x0001013e0fe4(param_1);
    param_2 = param_1;
  }
  func_0x000107c42c1c(lVar8);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1013e0a44; end: 1013e0b03;  */

void FUN_1013e0a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1103aff08;
  func_0x000107c613fc(&UNK_1103aff08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uStack_40 = 0x1013e4f00;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103aff20;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("COS Communication Input accessibility identifiers",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1013e0b04; end: 1013e0c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e0b04(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + _DAT_112d7b7d0);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c4ff34(lVar2);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + _DAT_112d7b7c0);
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c61170(lVar3);
      lVar3 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e0c74);
        (*pcVar1)();
      }
      func_0x000107c4ff34(lVar3);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + _DAT_112d7b7c0);
    if (lVar3 != 0) {
      func_0x000107c61174(lVar3);
      func_0x000107c61170(param_3);
      func_0x000107c420a8(lVar3);
    }
    func_0x000107c61170();
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1013e0c74; end: 1013e139b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013e0c74(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined1 uVar18;
  undefined *puVar19;
  long *plVar20;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar9 = _DAT_112d7b798;
  if ((*(byte *)(unaff_x20 + _DAT_112d7b798) & 1) == 0) {
    uVar18 = *(undefined1 *)(unaff_x20 + _DAT_112d7b7a0);
  }
  else {
    uVar18 = 1;
  }
  bVar6 = *(byte *)(unaff_x20 + _DAT_112d7b788);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7b7a8);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d7b7a8))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7b7b0);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d7b7b0))[1];
  lVar10 = 0;
  FUN_1013e3b8c();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar8 = _DAT_112d7b918;
  *(undefined1 *)(lVar11 + _DAT_112d7b918) = 2;
  lVar15 = _DAT_112d7b920;
  *(undefined1 *)(lVar11 + _DAT_112d7b920) = 2;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112d7b928);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(lVar11 + _DAT_112d7b930);
  *(undefined1 *)(lVar11 + lVar8) = uVar18;
  *(byte *)(lVar11 + lVar15) = bVar6 & 1;
  *puVar1 = uVar17;
  puVar1[1] = uVar4;
  *puVar2 = uVar3;
  puVar2[1] = uVar5;
  puVar12 = PTR_s_init_1125d9248;
  lStack_88 = lVar11;
  lStack_80 = lVar10;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  plVar20 = &lStack_88;
  func_0x000107c61154(plVar20,puVar12);
  lVar8 = _DAT_112d7b778;
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7b778);
  *(long **)(unaff_x20 + _DAT_112d7b778) = plVar20;
  func_0x000107c61170(uVar17);
  puVar19 = *(undefined **)(unaff_x20 + _DAT_112d7b7c8);
  puVar12 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    puVar12 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8(PTR_PTR_1126aeaf8);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_1013e1778;
    uStack_90 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0x100e1779c;
    puStack_a0 = &UNK_1103afdb8;
    ppuVar13 = &puStack_b8;
    func_0x000107c60bc4(ppuVar13);
    uStack_c8 = 0x1013e4ef8;
    uStack_c0 = 0;
    puStack_e8 = puVar7;
    uStack_e0 = 0x42000000;
    uStack_d8 = 0x100e17304;
    puStack_d0 = &UNK_1103afde0;
    ppuVar14 = &puStack_e8;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c47be0(puVar12);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61574(uStack_c0);
    func_0x000107c61574(uStack_90);
  }
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7b760);
  plVar20 = *(long **)(unaff_x20 + lVar8);
  if (plVar20 == (long *)0x0) {
    if ((*(byte *)(unaff_x20 + lVar9) & 1) == 0) {
      uVar18 = *(undefined1 *)(unaff_x20 + _DAT_112d7b7a0);
    }
    else {
      uVar18 = 1;
    }
    lVar15 = lVar10;
    func_0x000107c610f8();
    lVar9 = _DAT_112d7b918;
    *(undefined1 *)(lVar15 + _DAT_112d7b918) = 2;
    lVar8 = _DAT_112d7b920;
    *(undefined1 *)(lVar15 + _DAT_112d7b920) = 2;
    puVar1 = (undefined8 *)(lVar15 + _DAT_112d7b928);
    puVar2 = (undefined8 *)(lVar15 + _DAT_112d7b930);
    *(undefined1 *)(lVar15 + lVar9) = uVar18;
    *(undefined1 *)(lVar15 + lVar8) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar7 = PTR_s_init_1125d9248;
    lStack_f8 = lVar15;
    lStack_f0 = lVar10;
    func_0x000107c61174(puVar19);
    func_0x000107c61174(uVar17);
    plVar16 = &lStack_f8;
    func_0x000107c61154(plVar16,puVar7);
  }
  else {
    func_0x000107c61174(puVar19);
    func_0x000107c61174(uVar17);
    plVar16 = plVar20;
  }
  if (param_2 == 0) {
    func_0x000107c61174(plVar20);
    func_0x000107c61174();
    param_1 = 0;
  }
  else {
    func_0x000107c61174(plVar20);
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  puVar19 = PTR_PTR_1126d0c18;
  func_0x000107c610f8(PTR_PTR_1126d0c18);
  func_0x000107c49028();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170();
  func_0x000107c61170(plVar16);
  func_0x000107c61170(param_1);
  return puVar19;
}



/* Entry: 1013e139c; end: 1013e1707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013e139c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b838);
  pcVar7 = (code *)*puVar1;
  if (pcVar7 != (code *)0x0) {
    uVar9 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7b840);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_100cafef4(uVar2,uVar3);
    puVar4 = &UNK_1103afcd8;
    func_0x000107c613fc(&UNK_1103afcd8,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar7;
    *(undefined8 *)(puVar4 + 0x18) = uVar9;
    lVar8 = *(long *)(unaff_x20 + _DAT_112d7b828);
    func_0x000107c6157c(uVar9);
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar8 == 0) {
      puVar6 = PTR_PTR_1126d0ba8;
      func_0x000107c61168(PTR_PTR_1126d0ba8);
      func_0x000107c4d73c();
      func_0x000107c61180();
      (*pcVar7)();
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000100cafef8(pcVar7,uVar9);
    }
    else {
      puVar6 = &UNK_1103afd00;
      func_0x000107c613fc(&UNK_1103afd00,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x1013e4624;
      *(undefined **)(puVar6 + 0x18) = puVar4;
      pcStack_50 = FUN_1013e462c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000b0c7c;
      puStack_58 = &UNK_1103afd18;
      puStack_48 = puVar6;
      func_0x000107c60bc4(&puStack_70);
      puVar6 = puStack_48;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c5e2a4(lVar8);
      func_0x000100cafef8(pcVar7,uVar9);
      func_0x000107c61574(puVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar8);
    }
  }
  return pcVar7 != (code *)0x0;
}



/* Entry: 1013e1708; end: 1013e1777; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView skipTappedWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e1708(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7b7e8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112d7b7e8))[1];
  func_0x000107c61174();
  FUN_100caffa0(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1013e1778; end: 1013e177f;  */

void FUN_1013e1778(void)

{
  return;
}



/* Entry: 1013e1780; end: 1013e1783; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView emailEntryFinished:] */

void FUN_1013e1780(void)

{
  return;
}



/* Entry: 1013e1784; end: 1013e192f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e1784(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  ppuVar4 = &puStack_60;
  if (*(char *)(unaff_x20 + _DAT_112d7b7d8) == '\x01') {
    if (*(char *)(unaff_x20 + _DAT_112d7b798) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + _DAT_112d7b750);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      if (lVar1 != 0) {
        puVar3 = &UNK_1103b01b0;
        func_0x000107c613fc(&UNK_1103b01b0,0x18,7);
        *(long *)(puVar3 + 0x10) = unaff_x20;
        pcStack_40 = FUN_1013e4dcc;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_1000b0c7c;
        puStack_48 = &UNK_1103b01c8;
        puStack_38 = puVar3;
        func_0x000107c60bc4(&puStack_60);
        puVar3 = puStack_38;
        func_0x000107c615f0(lVar1);
        func_0x000107c61174();
        func_0x000107c61574(puVar3);
        func_0x000107c5e2a4(lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c60bd0(ppuVar2);
        func_0x000107c615e8(lVar1);
      }
    }
    else if (*(char *)(unaff_x20 + _DAT_112d7b7a0) == '\x01') {
      puVar3 = &UNK_1103b0160;
      func_0x000107c613fc(&UNK_1103b0160,0x18,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      pcStack_40 = FUN_1013e4dc4;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1103b0178;
      puStack_38 = puVar3;
      func_0x000107c60bc4(&puStack_60);
      puVar3 = puStack_38;
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      func_0x0001000d76cc("COS Abandoned",ppuVar4);
      func_0x000107c60bd0(ppuVar4);
    }
  }
  return;
}



/* Entry: 1013e1930; end: 1013e1c43;  */

/* WARNING: Possible PIC construction at 0x0001013e1a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e1ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e1b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e1ac4) */
/* WARNING: Removing unreachable block (ram,0x0001013e1c40) */
/* WARNING: Removing unreachable block (ram,0x0001013e1ad4) */
/* WARNING: Removing unreachable block (ram,0x0001013e1a50) */
/* WARNING: Removing unreachable block (ram,0x0001013e1c3c) */
/* WARNING: Removing unreachable block (ram,0x0001013e1a60) */
/* WARNING: Removing unreachable block (ram,0x0001013e1b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e1930(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  lVar4 = *(long *)(param_1 + _DAT_112d7b7c0);
  if (lVar4 == 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112d7b7f0);
    if (pcVar1 == (code *)0x0) {
      return;
    }
    puVar5 = (undefined *)((undefined8 *)(param_1 + _DAT_112d7b7f0))[1];
    func_0x000107c6157c(puVar5);
    (*pcVar1)();
    if (pcVar1 == (code *)0x0) {
      return;
    }
  }
  else {
    puVar5 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174(lVar4);
    func_0x000107c4807c();
    func_0x000105219810();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e1c3c);
      (*pcVar1)();
    }
    puVar2 = &UNK_1103b0200;
    func_0x000107c613fc(&UNK_1103b0200,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    uStack_70 = 0x1013e4de4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100de205c;
    puStack_78 = &UNK_1103b0218;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = PTR_PTR_1126aed70;
    func_0x000107c61168(PTR_PTR_1126aed70);
    func_0x000107c61174(param_1);
    func_0x000107c3dad0(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar5);
    puVar5 = puStack_68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 1013e1c44; end: 1013e1d2b; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView emailEntryExited] */

void FUN_1013e1c44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013e1784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e1d2c; end: 1013e1d2f; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView phoneEntryFinishedWithSuccess:] */

void FUN_1013e1d2c(void)

{
  return;
}



/* Entry: 1013e1d30; end: 1013e1edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e1d30(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  ppuVar4 = &puStack_60;
  if (*(char *)(unaff_x20 + _DAT_112d7b7d8) == '\x01') {
    if (*(char *)(unaff_x20 + _DAT_112d7b798) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + _DAT_112d7b758);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      if (lVar1 != 0) {
        puVar3 = &UNK_1103b0048;
        func_0x000107c613fc(&UNK_1103b0048,0x18,7);
        *(long *)(puVar3 + 0x10) = unaff_x20;
        uStack_40 = 0x1013e4ed4;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_1000b0c7c;
        puStack_48 = &UNK_1103b0060;
        puStack_38 = puVar3;
        func_0x000107c60bc4(&puStack_60);
        puVar3 = puStack_38;
        func_0x000107c615f0(lVar1);
        func_0x000107c61174();
        func_0x000107c61574(puVar3);
        func_0x000107c5e2a4(lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c60bd0(ppuVar2);
        func_0x000107c615e8(lVar1);
      }
    }
    else if (*(char *)(unaff_x20 + _DAT_112d7b7a0) == '\x01') {
      puVar3 = &UNK_1103afff8;
      func_0x000107c613fc(&UNK_1103afff8,0x18,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      uStack_40 = 0x1013e4d84;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1103b0010;
      puStack_38 = puVar3;
      func_0x000107c60bc4(&puStack_60);
      puVar3 = puStack_38;
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      func_0x0001000d76cc("COS Abandoned",ppuVar4);
      func_0x000107c60bd0(ppuVar4);
    }
  }
  return;
}



/* Entry: 1013e1edc; end: 1013e21ef;  */

/* WARNING: Possible PIC construction at 0x0001013e1ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e2110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e2070) */
/* WARNING: Removing unreachable block (ram,0x0001013e21ec) */
/* WARNING: Removing unreachable block (ram,0x0001013e2080) */
/* WARNING: Removing unreachable block (ram,0x0001013e1ffc) */
/* WARNING: Removing unreachable block (ram,0x0001013e21e8) */
/* WARNING: Removing unreachable block (ram,0x0001013e200c) */
/* WARNING: Removing unreachable block (ram,0x0001013e2114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e1edc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  lVar4 = *(long *)(param_1 + _DAT_112d7b7c0);
  if (lVar4 == 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112d7b7f0);
    if (pcVar1 == (code *)0x0) {
      return;
    }
    puVar5 = (undefined *)((undefined8 *)(param_1 + _DAT_112d7b7f0))[1];
    func_0x000107c6157c(puVar5);
    (*pcVar1)();
    if (pcVar1 == (code *)0x0) {
      return;
    }
  }
  else {
    puVar5 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174(lVar4);
    func_0x000107c4807c();
    func_0x000105219810();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e21e8);
      (*pcVar1)();
    }
    puVar2 = &UNK_1103b0098;
    func_0x000107c613fc(&UNK_1103b0098,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    pcStack_70 = FUN_1013e4d8c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100de205c;
    puStack_78 = &UNK_1103b00b0;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = PTR_PTR_1126aed70;
    func_0x000107c61168(PTR_PTR_1126aed70);
    func_0x000107c61174(param_1);
    func_0x000107c3dad0(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar5);
    puVar5 = puStack_68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 1013e21f0; end: 1013e22d3;  */

void FUN_1013e21f0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = *(long *)(param_2 + *param_3);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c613fc(param_4,0x18,7);
    *(long *)(param_4 + 0x10) = param_2;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    uStack_58 = param_6;
    uStack_50 = param_5;
    lStack_48 = param_4;
    func_0x000107c60bc4(&puStack_70);
    lVar1 = lStack_48;
    func_0x000107c615f0(lVar2);
    func_0x000107c61174(param_2);
    func_0x000107c61574(lVar1);
    func_0x000107c5e2a4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1013e22d4; end: 1013e2323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e22d4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7b7f0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112d7b7f0))[1];
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1013e2324; end: 1013e2413; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView phoneEntryExited] */

void FUN_1013e2324(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013e1d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e2414; end: 1013e25f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e2414(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112d7b748;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      FUN_1013dcfec(param_2,0,0,0,0);
      if ((*(byte *)(lVar3 + 0x28) & 1) == 0) {
        *(undefined1 *)(lVar3 + 0x28) = 1;
        pcVar1 = *(code **)(lVar3 + 0x18);
        uVar2 = *(undefined8 *)(lVar3 + 0x20);
        func_0x000107c6157c(uVar2);
        (*pcVar1)(param_2);
        func_0x000107c61574(uVar2);
      }
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1013e25f4; end: 1013e2a03;  */

ulong FUN_1013e25f4(void)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined *puVar10;
  
  uVar4 = unaff_x20;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar5 = 0;
  func_0x000100848110(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar4 = unaff_x20;
  func_0x000107c5fc54();
  func_0x000107c61170(unaff_x20);
  if (uVar4 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar16 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar16 = uVar4;
    }
    func_0x000107c60480();
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar18;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e2988);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar4 + 0x20 + uVar19 * 8);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar19;
        FUN_1013e3f50(uVar19,uVar4,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e2984);
        (*pcVar2)();
      }
      uVar19 = uVar19 + 1;
      uVar8 = uVar7;
      FUN_1013e25f4();
      func_0x000107c61170(uVar7);
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar8 & 0xffffffffffffff8;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      uVar20 = (ulong)puVar18 >> 0x3e;
      if (uVar20 == 0) {
        puVar9 = *(undefined **)((undefined *)((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
        if (((ulong)puVar18 & 0x8000000000000000) != 0) {
          puVar9 = puVar18;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar9,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e298c);
        (*pcVar2)();
      }
      puVar9 = puVar9 + uVar7;
      puVar10 = puVar18;
      func_0x000107c61550();
      uVar3 = 0;
      if (uVar20 == 0) {
        uVar3 = (uint)puVar10;
      }
      puVar10 = (undefined *)(ulong)uVar3;
      if ((uVar3 != 1) ||
         (uVar17 = (ulong)puVar18 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar17 + 0x18) >> 1) < (long)puVar9)) {
        if (uVar20 == 0) {
          puVar14 = *(undefined **)((undefined *)((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar14 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
          if (((ulong)puVar18 & 0x8000000000000000) != 0) {
            puVar14 = puVar18;
          }
          func_0x000107c60480();
        }
        if ((long)puVar14 <= (long)puVar9) {
          puVar14 = puVar9;
        }
        func_0x000100847e2c(puVar10,puVar14,1,puVar18,&SUB_1008479c8,0x112d360b0,
                            &PTR__OBJC_CLASS___UIView_1126aec20);
        uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
        puVar18 = puVar10;
      }
      lVar1 = *(long *)(uVar17 + 0x10);
      uVar23 = (*(ulong *)(uVar17 + 0x18) >> 1) - lVar1;
      uVar20 = uVar8 & 0xffffffffffffff8;
      if (uVar8 >> 0x3e == 0) {
        uVar21 = *(ulong *)(uVar20 + 0x10);
        if (uVar21 == 0) goto LAB_1013e26d8;
        if (uVar23 < uVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e299c);
          (*pcVar2)();
        }
        func_0x000107c6140c(uVar17 + lVar1 * 8 + 0x20,uVar20 + 0x20,uVar21,uVar5);
LAB_1013e28e0:
        func_0x000107c6142c(uVar8);
        if ((long)uVar21 < (long)uVar7) goto LAB_1013e298c;
        if (0 < (long)uVar21) {
          if (SCARRY8(*(long *)(uVar17 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e2994);
            (*pcVar2)();
          }
          *(ulong *)(uVar17 + 0x10) = *(long *)(uVar17 + 0x10) + uVar21;
        }
      }
      else {
        uVar21 = uVar20;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar21 = uVar8;
        }
        uVar20 = uVar21;
        func_0x000107c60480();
        if (uVar20 != 0) {
          func_0x000107c60480();
          if ((long)uVar23 < (long)uVar21) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e2998);
            (*pcVar2)();
          }
          if ((long)uVar20 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e29a0);
            (*pcVar2)();
          }
          lVar1 = uVar17 + lVar1 * 8;
          puVar22 = (undefined8 *)(lVar1 + 0x20);
          if ((uVar8 & 0xc000000000000001) == 0) {
            uVar12 = *(undefined8 *)(uVar8 + 0x20);
            *puVar22 = uVar12;
            lVar15 = uVar20 - 1;
            if (lVar15 != 0) {
              uVar13 = uVar12;
              puVar22 = (undefined8 *)(uVar8 + 0x28);
              puVar24 = (undefined8 *)(lVar1 + 0x28);
              do {
                uVar12 = *puVar22;
                *puVar24 = uVar12;
                func_0x000107c61174(uVar13);
                lVar15 = lVar15 + -1;
                uVar13 = uVar12;
                puVar22 = puVar22 + 1;
                puVar24 = puVar24 + 1;
              } while (lVar15 != 0);
            }
            func_0x000107c61174(uVar12);
          }
          else {
            uVar23 = 0;
            do {
              uVar11 = uVar23;
              FUN_1013e3f50(uVar23,uVar8,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
              puVar22[uVar23] = uVar11;
              uVar23 = uVar23 + 1;
            } while (uVar20 != uVar23);
          }
          goto LAB_1013e28e0;
        }
LAB_1013e26d8:
        func_0x000107c6142c(uVar8);
        if (0 < (long)uVar7) {
LAB_1013e298c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e2990);
          (*pcVar2)();
        }
      }
    } while (uVar19 != uVar16);
  }
  func_0x000107c6142c(uVar4);
  func_0x000100847d40(puVar18);
  return uVar6;
}



/* Entry: 1013e2a04; end: 1013e2c63;  */

uint FUN_1013e2a04(long *param_1,undefined *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *param_1;
  lVar7 = lVar11;
  func_0x000107c4e80c();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar10 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar10 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    lStack_70 = lVar10;
    puStack_68 = param_2;
    func_0x000107c5eb88(lVar8);
    FUN_100e8b654();
    lVar10 = lVar8;
    puVar3 = PTR___sSSN_11034da80;
    func_0x000107c601f0(lVar8,PTR___sSSN_11034da80,lVar7);
    (**(code **)(lVar5 + 8))(lVar8,lVar1);
    func_0x000107c6142c(param_2);
    puVar9 = puVar3;
    func_0x000107c5fb1c();
    param_2 = puVar9;
    func_0x000107c6142c(puVar3);
  }
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar11 == 0) {
    lVar7 = 0;
    param_2 = (undefined *)0xe000000000000000;
  }
  else {
    lVar7 = lVar11;
    func_0x000107c5faec();
    func_0x000107c61170(lVar11);
  }
  lStack_70 = lVar7;
  puStack_68 = param_2;
  func_0x000107c5eb88(lVar8);
  FUN_100e8b654();
  lVar7 = lVar8;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar8,PTR___sSSN_11034da80,lVar11);
  (**(code **)(lVar5 + 8))(lVar8,lVar1);
  func_0x000107c6142c(param_2);
  puVar4 = puVar3;
  func_0x000107c5fb1c();
  func_0x000107c6142c(puVar3);
  if (puVar9 != (undefined *)0x0) {
    uStack_80 = 0x6c69616d65;
    uStack_78 = 0xe500000000000000;
    puVar2 = &uStack_80;
    lStack_70 = lVar10;
    puStack_68 = puVar9;
    func_0x000107c6022c(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar11,lVar11);
    func_0x000107c6142c(puVar9);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000107c6142c(puVar4);
      uVar6 = 1;
      goto LAB_1013e2c3c;
    }
  }
  uStack_80 = 0x40;
  uStack_78 = 0xe100000000000000;
  puVar2 = &uStack_80;
  lStack_70 = lVar7;
  puStack_68 = puVar4;
  func_0x000107c6022c(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar11,lVar11);
  uVar6 = (uint)puVar2;
  func_0x000107c6142c(puVar4);
LAB_1013e2c3c:
  return uVar6 & 1;
}



/* Entry: 1013e2c64; end: 1013e2c8f; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView initWithFrame:] */

void FUN_1013e2c64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSCommunicationInputNativeView",0x2f,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e2c90);
  (*pcVar1)();
}



/* Entry: 1013e2c90; end: 1013e2c93;  */

void FUN_1013e2c90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013e2c94; end: 1013e2dc3; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013e2da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e2da8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e2c94(long param_1)

{
  FUN_1013e4e1c(param_1 + _DAT_112d7b748);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b750));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b758));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b760));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b768));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b770));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b778));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7b7a8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7b7b0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b7c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b7c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b7d0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7b7e0 + 8));
  FUN_100cafef4(*(undefined8 *)(param_1 + _DAT_112d7b7e8),
                ((undefined8 *)(param_1 + _DAT_112d7b7e8))[1]);
  if (*(long *)(param_1 + _DAT_112d7b7f0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d7b7f0))[1]);
    return;
  }
  return;
}



/* Entry: 1013e2dc4; end: 1013e2de3;  */

void FUN_1013e2dc4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d09d8);
  return;
}



/* Entry: 1013e2de4; end: 1013e2f53;  */

/* WARNING: Possible PIC construction at 0x0001013e2e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e2ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e2ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e2ec8) */
/* WARNING: Removing unreachable block (ram,0x0001013e2f30) */
/* WARNING: Removing unreachable block (ram,0x0001013e2ee8) */
/* WARNING: Removing unreachable block (ram,0x0001013e2e6c) */
/* WARNING: Removing unreachable block (ram,0x0001013e2ef4) */
/* WARNING: Removing unreachable block (ram,0x000100cafef8) */
/* WARNING: Removing unreachable block (ram,0x000100caff04) */
/* WARNING: Removing unreachable block (ram,0x000100cafefc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e2de4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d7b838);
  if (*plVar1 == 0) {
    plVar2 = (long *)(unaff_x20 + _DAT_112d7b840);
    if (*plVar2 == 0) {
      FUN_1013e2f54();
      lVar3 = *plVar1;
      lVar4 = plVar1[1];
      *plVar1 = param_3;
      plVar1[1] = param_4;
      FUN_100cafef4(lVar3,lVar4);
      *plVar2 = param_5;
      plVar2[1] = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_retain_11034f4d0)(param_4);
      return;
    }
  }
  func_0x0001052198e8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61168(PTR_PTR_1126d0ba0);
    func_0x000107c50838();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1013e2f54);
  (*pcVar5)();
}



/* Entry: 1013e2f54; end: 1013e311f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e2f54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  long unaff_x20;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  if (*(long *)(unaff_x20 + _DAT_112d7b830) == 0) {
    return;
  }
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    return;
  }
  lVar1 = lStack_48;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar3 = *(ulong **)(lVar1 + _DAT_113093350);
    puVar2 = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    if (puVar3 != (ulong *)0x0) goto LAB_1013e2fe8;
  }
  puVar2 = (ulong *)0x0;
  func_0x000104861108();
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1013e2fe8:
  func_0x000104865260(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000104864afc(param_1,param_2,1);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x158))();
  lVar1 = lStack_48;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_113093358);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar1);
  }
  lVar1 = lStack_48;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_113093360);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar1);
  }
  func_0x000104864a24(0);
  func_0x000107c610f8();
  puVar3 = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000104863d8c(puVar2,uVar4,uVar5);
  func_0x000107c57ea4(lStack_48);
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1013e3120; end: 1013e3203; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7433COSPromiseNativeEmailEntryService submitEmail:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001013e31e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e31ec) */

void FUN_1013e3120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103affa8;
  func_0x000107c613fc(&UNK_1103affa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_1103affd0;
  func_0x000107c613fc(&UNK_1103affd0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_1013e2de4(param_3,param_2,0x1013e4d74,puVar1,0x1013e4d7c,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013e3204; end: 1013e324f;  */

void FUN_1013e3204(code *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0ba8;
  func_0x000107c61168(PTR_PTR_1126d0ba8);
  func_0x000107c4d73c();
  func_0x000107c61180();
  (*param_1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013e3250; end: 1013e327b; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7433COSPromiseNativeEmailEntryService init] */

void FUN_1013e3250(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPromiseNativeEmailEntryService",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e327c);
  (*pcVar1)();
}



/* Entry: 1013e327c; end: 1013e32ef; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7433COSPromiseNativeEmailEntryService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013e32a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e32d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e32ac) */
/* WARNING: Removing unreachable block (ram,0x0001013e32d4) */
/* WARNING: Removing unreachable block (ram,0x000100cafef8) */
/* WARNING: Removing unreachable block (ram,0x000100caff04) */
/* WARNING: Removing unreachable block (ram,0x000100cafefc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e327c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b828));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7b830));
  return;
}



/* Entry: 1013e32f0; end: 1013e330f;  */

void FUN_1013e32f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0b48);
  return;
}



/* Entry: 1013e3310; end: 1013e3467;  */

/* WARNING: Possible PIC construction at 0x0001013e3390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e33e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e3410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e33e8) */
/* WARNING: Removing unreachable block (ram,0x0001013e3448) */
/* WARNING: Removing unreachable block (ram,0x0001013e3408) */
/* WARNING: Removing unreachable block (ram,0x0001013e3394) */
/* WARNING: Removing unreachable block (ram,0x0001013e3414) */
/* WARNING: Removing unreachable block (ram,0x000100cafef8) */
/* WARNING: Removing unreachable block (ram,0x000100caff04) */
/* WARNING: Removing unreachable block (ram,0x000100cafefc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e3310(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d7b888);
  if (*plVar1 == 0) {
    plVar2 = (long *)(unaff_x20 + _DAT_112d7b890);
    if (*plVar2 == 0) {
      FUN_1013e3468();
      lVar3 = *plVar1;
      lVar4 = plVar1[1];
      *plVar1 = param_2;
      plVar1[1] = param_3;
      FUN_100cafef4(lVar3,lVar4);
      *plVar2 = param_4;
      plVar2[1] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_retain_11034f4d0)(param_3);
      return;
    }
  }
  func_0x0001052198e8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61168(PTR_PTR_1126afb48);
    func_0x000107c50838();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1013e3468);
  (*pcVar5)();
}



/* Entry: 1013e3468; end: 1013e363b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e3468(undefined8 param_1)

{
  long lVar1;
  ulong *puVar2;
  long unaff_x20;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  if (*(long *)(unaff_x20 + _DAT_112d7b880) == 0) {
    return;
  }
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    return;
  }
  lVar1 = lStack_48;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar3 = *(ulong **)(lVar1 + _DAT_113093350);
    puVar2 = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    if (puVar3 != (ulong *)0x0) goto LAB_1013e34f8;
  }
  puVar2 = (ulong *)0x0;
  func_0x000104861108();
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_1013e34f8:
  func_0x000104866d7c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000104865d0c(param_1,1,0,0xf000000000000000,0,0xf000000000000000);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x170))();
  lVar1 = lStack_48;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_113093358);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar1);
  }
  lVar1 = lStack_48;
  func_0x000107c5072c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_113093360);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar1);
  }
  func_0x000104864a24(0);
  func_0x000107c610f8();
  puVar3 = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000104863d8c(puVar2,uVar4,uVar5);
  func_0x000107c57ea4(lStack_48);
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1013e363c; end: 1013e3713; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7433COSPromiseNativePhoneEntryService submitPhoneNumber:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001013e36f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e36fc) */

void FUN_1013e363c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103aff58;
  func_0x000107c613fc(&UNK_1103aff58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_1103aff80;
  func_0x000107c613fc(&UNK_1103aff80,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013e3310(param_3,0x1013e4d64,puVar1,0x1013e4d6c,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013e3714; end: 1013e378b;  */

/* WARNING: Possible PIC construction at 0x0001013e376c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e3770) */

void FUN_1013e3714(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb38;
  func_0x000107c61168(PTR_PTR_1126afb38);
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c610f8(PTR_PTR_1126afb30);
  func_0x000107c494a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013e378c; end: 1013e37b7; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7433COSPromiseNativePhoneEntryService init] */

void FUN_1013e378c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPromiseNativePhoneEntryService",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e37b8);
  (*pcVar1)();
}



/* Entry: 1013e37b8; end: 1013e382b; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7433COSPromiseNativePhoneEntryService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013e37e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e380c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e37e8) */
/* WARNING: Removing unreachable block (ram,0x0001013e3810) */
/* WARNING: Removing unreachable block (ram,0x000100cafef8) */
/* WARNING: Removing unreachable block (ram,0x000100caff04) */
/* WARNING: Removing unreachable block (ram,0x000100cafefc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e37b8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7b878));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7b880));
  return;
}



/* Entry: 1013e382c; end: 1013e384b;  */

void FUN_1013e382c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0c28);
  return;
}



/* Entry: 1013e384c; end: 1013e38ff; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource accessoryTextForPhoneEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e384c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ((long *)(param_1 + _DAT_112d7b8e8))[1];
  if (lVar1 == 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000105219858();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
      lVar2 = 0;
      goto LAB_1013e38dc;
    }
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    lVar1 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112d7b8e8);
    param_2 = lVar1;
  }
  func_0x000107c61434(lVar1);
  func_0x000107c5fadc(lVar2,param_2);
  func_0x000107c6142c(param_2);
LAB_1013e38dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013e3900; end: 1013e3913; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource shouldShowBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013e3900(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7b8c8) & 1;
}



/* Entry: 1013e3914; end: 1013e3927; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource shouldShowSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013e3914(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7b8d0) & 1;
}



/* Entry: 1013e3928; end: 1013e3933; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource headerTitleForPhoneEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e3928(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7b8d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7b8d8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013e3934; end: 1013e393f; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource headerSubtitleForPhoneEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e3934(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7b8e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7b8e0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013e3940; end: 1013e396b; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource init] */

void FUN_1013e3940(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPromisePhoneEntryDataSource",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e396c);
  (*pcVar1)();
}



/* Entry: 1013e396c; end: 1013e39bf; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013e398c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e3990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e396c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7b8d8 + 8))
  ;
  return;
}



/* Entry: 1013e39c0; end: 1013e39df;  */

void FUN_1013e39c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0d08);
  return;
}



/* Entry: 1013e39e0; end: 1013e39f3; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource shouldShowBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013e39e0(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7b918) & 1;
}



/* Entry: 1013e39f4; end: 1013e39fb; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource shouldDisplay1TLButton] */

undefined8 FUN_1013e39f4(void)

{
  return 0;
}



/* Entry: 1013e39fc; end: 1013e3a0f; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource shouldShowSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1013e39fc(long param_1)

{
  return *(byte *)(param_1 + _DAT_112d7b920) & 1;
}



/* Entry: 1013e3a10; end: 1013e3a1b; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource headerTitleForEmailEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e3a10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7b928))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7b928);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013e3a1c; end: 1013e3a27; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource headerSubtitleForEmailEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e3a1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7b930))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7b930);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013e3a28; end: 1013e3a7f;  */

void FUN_1013e3a28(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013e3a80; end: 1013e3aeb;  */

void FUN_1013e3a80(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000105219828();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013e3aec; end: 1013e3b4b; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource init] */

void FUN_1013e3aec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPromiseEmailEntryDataSource",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e3b18);
  (*pcVar1)();
}



/* Entry: 1013e3b4c; end: 1013e3b8b; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013e3b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e3b70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e3b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7b928 + 8))
  ;
  return;
}



/* Entry: 1013e3b8c; end: 1013e3bab;  */

void FUN_1013e3b8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0de8);
  return;
}



/* Entry: 1013e3bac; end: 1013e3f4f;  */

ulong FUN_1013e3bac(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_4 >> 0x3e;
  if (uVar5 == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e3d08);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (uVar5 == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000100847f74(uVar2,uVar4,0x10140e1e0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e3d04);
      (*pcVar1)();
    }
    if (uVar5 != 0) {
      uVar5 = param_4 & 0xffffffffffffff8;
      if ((param_4 & 0x8000000000000000) != 0) {
        uVar5 = param_4;
      }
      func_0x000107c6047c(0,uVar2,uVar3 + 0x20,uVar5);
      return uVar3;
    }
    func_0x000107c6140c(uVar3 + 0x20,(param_4 & 0xffffffffffffff8) + 0x20,uVar2,
                        PTR___syXlN_11034f1a0 + 8);
  }
  else {
    uVar5 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar5) || (uVar5 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar5 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return uVar3;
}



/* Entry: 1013e3f50; end: 1013e410b;  */

ulong FUN_1013e3f50(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e4034);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e4038);
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
  func_0x000100848110(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e410c);
  (*pcVar2)();
}



/* Entry: 1013e410c; end: 1013e4133;  */

ulong FUN_1013e410c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e4034);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e4038);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c61168(PTR__OBJC_CLASS___UILabel_1126aec30);
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
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c61168(PTR__OBJC_CLASS___UILabel_1126aec30);
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
  func_0x000100848110(0,0x112d7b960,&PTR__OBJC_CLASS___UILabel_1126aec30);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e410c);
  (*pcVar2)();
}



/* Entry: 1013e4134; end: 1013e42ef;  */

ulong FUN_1013e4134(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e4218);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e421c);
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
  func_0x000100848110(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e42f0);
  (*pcVar2)();
}



/* Entry: 1013e42f0; end: 1013e4303;  */

ulong FUN_1013e42f0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e4218);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e421c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a6cd8;
    func_0x000107c61168(PTR_PTR_1126a6cd8);
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
    puVar4 = PTR_PTR_1126a6cd8;
    func_0x000107c61168(PTR_PTR_1126a6cd8);
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
  func_0x000100848110(0,0x112d7b968,&PTR_PTR_1126a6cd8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013e42f0);
  (*pcVar2)();
}



/* Entry: 1013e4304; end: 1013e44fb;  */

void FUN_1013e4304(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar9 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x6d754e656e6f6870;
  lVar5 = -0x14ffffffff8d9a9e;
  FUN_1013dcdd8();
  uStack_70 = 0;
  if (lVar5 != 0) {
    uStack_70 = uVar3;
  }
  lVar1 = -0x2000000000000000;
  if (lVar5 != 0) {
    lVar1 = lVar5;
  }
  lStack_68 = lVar1;
  func_0x000107c5eb88(uVar9);
  FUN_100e8b654();
  uVar8 = uVar9;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar9,PTR___sSSN_11034da80,uVar3);
  pcVar13 = *(code **)(lVar12 + 8);
  (*pcVar13)(uVar9,lVar2);
  func_0x000107c6142c(lVar1);
  uVar4 = 0x437972746e756f63;
  lVar5 = -0x14ffffffff9a9b91;
  FUN_1013dcdd8();
  uStack_70 = 0;
  if (lVar5 != 0) {
    uStack_70 = uVar4;
  }
  lVar12 = -0x2000000000000000;
  if (lVar5 != 0) {
    lVar12 = lVar5;
  }
  lStack_68 = lVar12;
  func_0x000107c5eb88(uVar9);
  uVar11 = uVar9;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar9,PTR___sSSN_11034da80,uVar3);
  (*pcVar13)(uVar9,lVar2);
  func_0x000107c6142c(lVar12);
  uVar10 = (ulong)puVar7 >> 0x38 & 0xf;
  uVar9 = uVar8 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar9 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  if (uVar9 == 0) {
    uVar9 = uVar11 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar9 = uVar10;
    }
    func_0x000107c6142c(puVar6);
    if (uVar9 == 0) {
      func_0x000107c6142c(puVar7);
      return;
    }
    uVar8 = 0;
    puVar6 = (undefined *)0x0;
  }
  uVar9 = uVar11 & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar9 = uVar10;
  }
  if (uVar9 == 0) {
    func_0x000107c6142c(puVar7);
    uVar11 = 0;
    puVar7 = (undefined *)0x0;
  }
  uVar3 = 0;
  func_0x000104872184(0);
  func_0x000107c610f8();
  func_0x000104871870(uVar8,puVar6,uVar11,puVar7,uVar3);
  return;
}



/* Entry: 1013e44fc; end: 1013e45ff;  */

undefined1  [16] FUN_1013e44fc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar6 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x6c69616d65;
  lVar4 = -0x1b00000000000000;
  FUN_1013dcdd8();
  uStack_50 = 0;
  if (lVar4 != 0) {
    uStack_50 = uVar3;
  }
  lVar1 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  lStack_48 = lVar1;
  func_0x000107c5eb88(uVar6);
  FUN_100e8b654();
  uVar5 = uVar6;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar6,PTR___sSSN_11034da80,uVar3);
  (**(code **)(lVar8 + 8))(uVar6,lVar2);
  func_0x000107c6142c(lVar1);
  uVar6 = uVar5 & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar6 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    func_0x000107c6142c(puVar7);
    uVar5 = 0;
    puVar7 = (undefined *)0x0;
  }
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



/* Entry: 1013e4600; end: 1013e462b;  */

/* WARNING: Possible PIC construction at 0x0001013e376c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e3770) */

void FUN_1013e4600(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126afb38;
  func_0x000107c61168(PTR_PTR_1126afb38,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c610f8(PTR_PTR_1126afb30);
  func_0x000107c494a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013e462c; end: 1013e464b;  */

void FUN_1013e462c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1013e464c; end: 1013e465b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e464c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar14 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar14 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112d7b7c0);
      *(long *)(lVar1 + _DAT_112d7b7c0) = param_1;
      func_0x000107c61170(uVar2);
      func_0x000107c61174(param_1);
      func_0x000107c5a050(lVar14);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c3d89c();
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar4 = puVar3;
      func_0x0001008478a8();
      puVar5 = puVar4;
      func_0x000107c613fc();
      *(undefined8 *)(puVar5 + 0x18) = 9;
      *(undefined8 *)(puVar5 + 0x10) = 4;
      lVar6 = lVar14;
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar7 = lVar1;
      func_0x000107c4acb0(lVar1);
      func_0x000107c61180();
      lVar8 = lVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar7);
      *(long *)(puVar5 + 0x20) = lVar8;
      lVar6 = lVar14;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar7 = lVar1;
      func_0x000107c5ce8c(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      lVar8 = lVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar7);
      *(long *)(puVar5 + 0x28) = lVar8;
      lVar6 = lVar14;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar7 = lVar1;
      func_0x000107c5cbe4(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      lVar8 = lVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar7);
      *(long *)(puVar5 + 0x30) = lVar8;
      lVar6 = lVar14;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      lVar7 = lVar1;
      func_0x000107c3ec1c(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      lVar8 = lVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar7);
      *(long *)(puVar5 + 0x38) = lVar8;
      uVar2 = 0;
      func_0x000100848110(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar9 = puVar5;
      func_0x000107c5fc48(puVar5,uVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(puVar9);
      puVar5 = &UNK_1103afe68;
      func_0x000107c613fc(&UNK_1103afe68,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar1;
      *(long *)(puVar5 + 0x18) = lVar14;
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = FUN_1013e465c;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_1103afe80;
      ppuVar10 = &puStack_b8;
      puStack_90 = puVar5;
      func_0x000107c60bc4(ppuVar10);
      puVar5 = puStack_90;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61574(puVar5);
      func_0x0001000d76cc("COS Communication Input accessibility identifiers",ppuVar10);
      func_0x000107c60bd0(ppuVar10);
      puVar5 = &UNK_1103afeb8;
      func_0x000107c613fc(&UNK_1103afeb8,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar1;
      *(long *)(puVar5 + 0x18) = lVar14;
      pcStack_98 = FUN_1013e4680;
      puStack_b8 = puVar9;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_1103afed0;
      ppuVar10 = &puStack_b8;
      puStack_90 = puVar5;
      func_0x000107c60bc4(ppuVar10);
      puVar5 = puStack_90;
      func_0x000107c61174();
      func_0x000107c61174(lVar14);
      func_0x000107c61574(puVar5);
      func_0x000100162d98("COS Communication Input delayed accessibility identifiers",ppuVar10);
      func_0x000107c60bd0(ppuVar10);
      if ((*(byte *)(lVar1 + _DAT_112d7b780) == 2) || ((*(byte *)(lVar1 + _DAT_112d7b780) & 1) == 0)
         ) {
        func_0x000107c61170(lVar14);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar1);
      }
      else {
        puVar5 = PTR_PTR_1126aea58;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c61180();
        uVar11 = 0x7475625f70696b73;
        func_0x000107c5fadc(0x7475625f70696b73,0xeb000000006e6f74);
        func_0x000107c520f4(puVar5);
        func_0x000107c61170(uVar11);
        func_0x000107c61174();
        func_0x000107c56ba8();
        puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        puVar12 = puVar9;
        func_0x000107c5af88();
        func_0x000107c61180();
        func_0x000107c52b50(puVar5);
        func_0x000107c61170(puVar12);
        puVar12 = puVar5;
        func_0x000107c59c74(puVar5);
        func_0x0001052198d0();
        func_0x000107c61180();
        func_0x000107c59c6c(puVar5);
        func_0x000107c61170(puVar12);
        func_0x000107c5af88(puVar9);
        func_0x000107c61180();
        func_0x000107c59c78(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000107c5a100(puVar5);
        func_0x000107c5a378(puVar5);
        func_0x000107c61170(puVar5);
        puVar9 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        func_0x000107c48c2c();
        func_0x000107c3d6fc(puVar5);
        func_0x000107c5a050(puVar5);
        func_0x000107c3d89c(lVar1);
        func_0x000107c613fc(puVar4,((ulong)*(uint *)(puVar4 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                            *(ushort *)(puVar4 + 0x34) | 7);
        *(undefined8 *)(puVar4 + 0x18) = 5;
        *(undefined8 *)(puVar4 + 0x10) = 2;
        puVar12 = puVar5;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar6 = lVar1;
        func_0x000107c515ac(lVar1);
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        lVar7 = lVar6;
        func_0x000107c5ce8c(lVar6);
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        puVar13 = puVar12;
        func_0x000107c40284(0xc034000000000000);
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(lVar7);
        *(undefined **)(puVar4 + 0x20) = puVar13;
        puVar12 = puVar5;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        lVar6 = lVar1;
        func_0x000107c515ac(lVar1);
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        lVar7 = lVar6;
        func_0x000107c5cbe4(lVar6);
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        puVar13 = puVar12;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(lVar7);
        *(undefined **)(puVar4 + 0x28) = puVar13;
        puVar12 = puVar4;
        func_0x000107c5fc48(puVar4,uVar2);
        func_0x000107c61574(puVar4);
        func_0x000107c3d048(puVar3);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar14);
        lVar14 = *(long *)(lVar1 + _DAT_112d7b7d0);
        *(undefined **)(lVar1 + _DAT_112d7b7d0) = puVar5;
        func_0x000107c61170(lVar1);
        lVar1 = lVar14;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013e465c; end: 1013e467f;  */

void FUN_1013e465c(void)

{
  long unaff_x20;
  
  FUN_1013de874(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1013e4680; end: 1013e4687;  */

void FUN_1013e4680(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  puVar3 = &UNK_1103aff08;
  func_0x000107c613fc(&UNK_1103aff08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  uStack_40 = 0x1013e4f00;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103aff20;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000d76cc("COS Communication Input accessibility identifiers",ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1013e4688; end: 1013e4767;  */

undefined1  [16] FUN_1013e4688(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  ulong uStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar5 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  uVar4 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    uStack_50 = param_1;
    lStack_48 = param_2;
    func_0x000107c5eb88(uVar4);
    FUN_100e8b654();
    param_1 = uVar4;
    puVar3 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar4,PTR___sSSN_11034da80,lVar2);
    (**(code **)(lVar5 + 8))(uVar4,lVar1);
    uVar4 = param_1 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar4 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar4 != 0) goto LAB_1013e474c;
    func_0x000107c6142c(puVar3);
    param_1 = 0;
  }
  puVar3 = (undefined *)0x0;
LAB_1013e474c:
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1013e4768; end: 1013e48cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e4768(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d7b748;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7b770) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b778) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b780) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b788) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b790) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b798) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b7a0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7b7a8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7b7b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b7b8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b7c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b7c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b7d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7b7d8) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7b7e0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7b7e8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7b7f0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7b7f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSCommunicationInputNativeView.swift",0x35,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013e48d0);
  (*pcVar3)();
}



/* Entry: 1013e48d0; end: 1013e4d13;  */

ulong FUN_1013e48d0(ulong param_1,undefined1 *param_2,undefined *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  puStack_78 = param_2;
  func_0x000107c5eb9c();
  lStack_88 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  puStack_90 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar11 != 0) {
    uVar13 = 0;
    uVar12 = param_1 & 0xc000000000000001;
    uStack_a8 = param_1 & 0xffffffffffffff8;
    uStack_a0 = param_1;
    uStack_98 = uVar12;
    do {
      if (uVar12 == 0) {
        if (*(ulong *)(uStack_a8 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1013e4aec);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar13;
        FUN_1013e3f50(uVar13,param_1,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      uVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013e4ae8);
        (*pcVar3)();
      }
      puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x000107c61168();
      uVar7 = uVar5;
      func_0x000107c6148c();
      if (uVar7 != 0) {
        uVar8 = uVar7;
        func_0x000107c5cabc();
        func_0x000107c61180();
        if (uVar8 == 0) {
          if (param_3 == (undefined *)0x0) {
            return uVar7;
          }
        }
        else {
          uVar12 = uVar8;
          func_0x000107c5faec();
          func_0x000107c61170(uVar8);
          puVar2 = puStack_90;
          uStack_70 = uVar12;
          puStack_68 = puVar6;
          func_0x000107c5eb88(puStack_90);
          FUN_100e8b654();
          puVar9 = puVar2;
          puVar10 = PTR___sSSN_11034da80;
          func_0x000107c601f0(puVar2,PTR___sSSN_11034da80,uVar8);
          (**(code **)(lStack_88 + 8))(puVar2,lStack_80);
          func_0x000107c6142c(puVar6);
          uVar12 = uStack_98;
          if (param_3 == (undefined *)0x0) {
            func_0x000107c6142c(puVar10);
            param_1 = uStack_a0;
            uVar12 = uStack_98;
          }
          else {
            if ((puVar9 == puStack_78) && (param_3 == puVar10)) {
              func_0x000107c6142c(puVar10);
              return uVar7;
            }
            func_0x000107c605b8(puVar9,puVar10,puStack_78,param_3,0);
            func_0x000107c6142c(puVar10);
            param_1 = uStack_a0;
            if (((ulong)puVar9 & 1) != 0) {
              return uVar7;
            }
          }
        }
      }
      func_0x000107c61170(uVar5);
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar11);
  }
  return 0;
}



/* Entry: 1013e4d14; end: 1013e4d2f;  */

void FUN_1013e4d14(void)

{
  FUN_1013e2414();
  return;
}



/* Entry: 1013e4d30; end: 1013e4d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e4d30(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d7b748;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      FUN_1013dc93c();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1013e4d38; end: 1013e4d53;  */

void FUN_1013e4d38(void)

{
  FUN_1013e2414();
  return;
}



/* Entry: 1013e4d54; end: 1013e4d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e4d54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d7b748;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      FUN_1013dc9fc(param_1,param_2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1013e4d8c; end: 1013e4dc3;  */

void FUN_1013e4d8c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1013e21f0(param_1,*(undefined8 *)(unaff_x20 + 0x10),&DAT_112d7b758,&UNK_1103b0110,0x1013e4ec8,
                &UNK_1103b0128);
  return;
}



/* Entry: 1013e4dc4; end: 1013e4dcb;  */

/* WARNING: Possible PIC construction at 0x0001013e1a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e1ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013e1b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013e1ac4) */
/* WARNING: Removing unreachable block (ram,0x0001013e1c40) */
/* WARNING: Removing unreachable block (ram,0x0001013e1ad4) */
/* WARNING: Removing unreachable block (ram,0x0001013e1a50) */
/* WARNING: Removing unreachable block (ram,0x0001013e1c3c) */
/* WARNING: Removing unreachable block (ram,0x0001013e1a60) */
/* WARNING: Removing unreachable block (ram,0x0001013e1b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013e4dc4(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_90;
  lVar5 = *(long *)(lVar4 + _DAT_112d7b7c0);
  if (lVar5 == 0) {
    pcVar1 = *(code **)(lVar4 + _DAT_112d7b7f0);
    if (pcVar1 == (code *)0x0) {
      return;
    }
    puVar6 = (undefined *)((undefined8 *)(lVar4 + _DAT_112d7b7f0))[1];
    func_0x000107c6157c(puVar6);
    (*pcVar1)();
    if (pcVar1 == (code *)0x0) {
      return;
    }
  }
  else {
    puVar6 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174(lVar5);
    func_0x000107c4807c();
    func_0x000105219810();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013e1c3c);
      (*pcVar1)();
    }
    puVar2 = &UNK_1103b0200;
    func_0x000107c613fc(&UNK_1103b0200,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar4;
    uStack_70 = 0x1013e4de4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100de205c;
    puStack_78 = &UNK_1103b0218;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = PTR_PTR_1126aed70;
    func_0x000107c61168(PTR_PTR_1126aed70);
    func_0x000107c61174(lVar4);
    func_0x000107c3dad0(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar6);
    puVar6 = puStack_68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar6);
  return;
}



/* Entry: 1013e4dcc; end: 1013e4e1b;  */

void FUN_1013e4dcc(void)

{
  long unaff_x20;
  
  FUN_1013e22d4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1013e4e1c; end: 1013e4e3f;  */

undefined8 FUN_1013e4e1c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013e4e40; end: 1013e4eeb;  */

void FUN_1013e4e40(long param_1,long param_2)

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



/* Entry: 1013e4eec; end: 1013e4eef; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView phoneEntrySwitchButtonTapped] */

void FUN_1013e4eec(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001013e1c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e4ef0; end: 1013e4f03; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView emailEntrySwitchButtonTapped] */

void FUN_1013e4ef0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001013e1c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013e4f04; end: 1013e4f07; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromisePhoneEntryDataSource continueButtonTitleForPhoneEntry] */

void FUN_1013e4f04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000105219828();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013e4f08; end: 1013e4f0b; -[_TtC15COSServicesImplP33_2679D90B26F7BFA0BA72ECEEA7571E7430COSPromiseEmailEntryDataSource continueButtonTitleForEmailEntry] */

void FUN_1013e4f08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000105219828();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1013e4f0c; end: 1013e4f0f; -[_TtC15COSServicesImpl31COSCommunicationInputNativeView phoneEntryExitedWithUnretryableError:] */

void FUN_1013e4f0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x00010006e7f4(&uStack_40);
  return;
}


