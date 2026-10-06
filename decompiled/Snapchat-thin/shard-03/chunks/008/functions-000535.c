/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d1fd48; end: 102d1fd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1fd48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(&lStack_68,&UNK_1105c41d8,uVar1,&UNK_1105c41d8,uVar2,&PTR_DAT_1105c33a8,lVar5);
  if (lStack_48 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&lStack_68,&UNK_1105c4278,uVar1,&UNK_1105c4278,uVar2,&PTR_DAT_1105c33c8,lVar5);
    if (lStack_68 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar5 != 0) {
        func_0x000102d1e928(lStack_68);
        func_0x000107c6142c(lStack_58);
        func_0x000107c6142c(lStack_68);
        goto LAB_102d1e37c;
      }
      func_0x000107c6142c(lStack_58);
      lVar5 = lStack_68;
      goto LAB_102d1e2d8;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&lStack_68,&UNK_1105c37f8,uVar1,&UNK_1105c37f8,uVar2,&PTR_DAT_1105c32f0,lVar5);
    if (lStack_58 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = param_1;
      func_0x0001000a8868(param_1,uVar1);
      FUN_102d24050(&lStack_68,&UNK_1105c4208,uVar1,&UNK_1105c4208,uVar2,&PTR_DAT_1105c33b0,lVar5);
      if (lStack_58 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar5 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&lStack_68,&UNK_1105c4230,uVar1,&UNK_1105c4230,uVar2,&PTR_DAT_1105c33b8,lVar5)
        ;
        if (lStack_60 != 0) {
          func_0x000107c6142c();
          func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
          lVar5 = unaff_x20 + 0x10;
          func_0x000107c61618();
          if (lVar5 == 0) {
            return;
          }
          FUN_102d1ec70();
LAB_102d1e37c:
          func_0x000107c61170();
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar5 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&lStack_68,&UNK_1105c4250,uVar1,&UNK_1105c4250,uVar2,&PTR_DAT_1105c33c0,lVar5)
        ;
        if (lStack_58 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          lVar5 = param_1;
          func_0x0001000a8868(param_1,uVar1);
          FUN_102d24050(&lStack_68,&UNK_1105c4158,uVar1,&UNK_1105c4158,uVar2,&PTR_DAT_1105c33a0,
                        lVar5);
          if (lStack_58 == 0) {
            uVar1 = *(undefined8 *)(param_1 + 0x18);
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            func_0x0001000a8868(param_1,uVar1);
            FUN_102d24050(&lStack_68,&UNK_1105c3898,uVar1,&UNK_1105c3898,uVar2,&PTR_DAT_1105c3300,
                          param_1);
            if (lStack_58 == 0) {
              return;
            }
            func_0x000107c6142c();
            func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
            lVar5 = unaff_x20 + 0x10;
            func_0x000107c61618();
            if (lVar5 == 0) {
              return;
            }
            if (*(char *)(lVar5 + _DAT_112f0dc08) == '\x01') {
              lVar5 = *(long *)(lVar5 + _DAT_112f0dbd8);
              func_0x000107c5dec4();
              func_0x000107c61180();
              if (lVar5 != 0) {
                func_0x000107c54188();
                func_0x000107c615e8(lVar5);
              }
            }
            goto LAB_102d1e37c;
          }
          func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
          lVar3 = unaff_x20 + 0x10;
          func_0x000107c61618();
          lVar5 = lStack_58;
          if (lVar3 != 0) {
            *(undefined1 *)(lVar3 + _DAT_112f0dc08) = 1;
            *(byte *)(lVar3 + _DAT_112f0dc10) = (byte)lStack_68 & 1;
            lVar4 = *(long *)(lVar3 + _DAT_112f0dbd8);
            func_0x000107c5dec4();
            func_0x000107c61180();
            if (lVar4 != 0) {
              func_0x000107c54188();
              func_0x000107c615e8(lVar4);
            }
            func_0x000107c61170(lVar3);
          }
          goto LAB_102d1e2d8;
        }
        func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
        lVar3 = unaff_x20 + 0x10;
        func_0x000107c61618();
        lVar5 = lStack_58;
        if (lVar3 == 0) goto LAB_102d1e2d8;
        FUN_102d1edfc(lStack_68);
      }
      else {
        func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
        lVar3 = unaff_x20 + 0x10;
        func_0x000107c61618();
        lVar5 = lStack_58;
        if (lVar3 == 0) goto LAB_102d1e2d8;
        func_0x000102d1eacc(lStack_68);
      }
    }
    else {
      func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      lVar5 = lStack_58;
      if (lVar3 == 0) goto LAB_102d1e2d8;
      FUN_102d1fa8c();
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,&lStack_68,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    lVar5 = lStack_48;
    if (lVar3 == 0) goto LAB_102d1e2d8;
    FUN_102d1e6f4(lStack_68,lStack_60,(uint)lStack_58 & 1);
    lStack_58 = lStack_48;
  }
  func_0x000107c61170(lVar3);
  lVar5 = lStack_58;
LAB_102d1e2d8:
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 102d1fd68; end: 102d1fedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1fd68(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lStack_68;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0dca0);
  if (lVar3 != 0) {
    func_0x000107c5fadc();
    func_0x000107c4dbf4(lVar3);
    func_0x000107c61170(param_1);
  }
  lVar3 = 0x647261635f646e65;
  uVar2 = 0xee00746e6576655f;
  FUN_102d1fee0(0x647261635f646e65,0xee00746e6576655f);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar2);
    }
    func_0x000107c610f8(PTR_PTR_1126b90b8);
    func_0x000107c30d44();
    func_0x000107c61170(lVar1);
    func_0x000104682c90(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar1 = lVar3;
    func_0x000104682530();
    lStack_68 = lVar1;
    func_0x0001002a64a8(&lStack_68);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102d1fee0; end: 102d203d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d1fee0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112f0dc90);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f0dc88);
  func_0x000107c5fadc(lVar5,((long *)(unaff_x20 + _DAT_112f0dc88))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar15 == 0) {
    return (undefined *)0x0;
  }
  func_0x0001041f3970();
  func_0x000107c61170(lVar15);
  lVar15 = _DAT_113068f40;
  if (lVar5 == 0) {
    return (undefined *)0x0;
  }
  lVar6 = *(long *)(lVar5 + _DAT_113068f40);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f0dca8);
  func_0x000107c61174();
  func_0x000107c3ceac(uVar16);
  uVar16 = *(undefined8 *)(lVar6 + _DAT_11308f130);
  uVar1 = ((undefined8 *)(lVar6 + _DAT_11308f130))[1];
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c61434(uVar1);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fb78(uVar16,uVar1);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&uStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_80;
  uVar10 = uStack_88;
  func_0x0001000d224c(&uStack_88);
  uVar17 = uStack_88;
  if (uStack_88 == 0) {
    uVar24 = 0;
  }
  else {
    uVar21 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    uVar24 = uVar17;
    func_0x000107c5ce1c();
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar21);
  }
  func_0x0001000d224c(&uStack_88);
  uVar17 = uStack_88;
  if (uStack_88 == 0) {
    uVar25 = 1;
  }
  else {
    uVar21 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    uVar25 = uVar17;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar21);
  }
  func_0x0001000d224c(&uStack_88);
  uVar17 = uStack_88;
  if (uStack_88 == 0) {
    uStack_90 = 1;
  }
  else {
    uVar21 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    uStack_90 = uVar17;
    func_0x000107c42f50();
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar21);
  }
  uVar17 = *(ulong *)(lVar6 + _DAT_113815208);
  if (uVar17 == 0) {
    func_0x000107c61174(lVar6);
    lVar18 = 0;
  }
  else {
    uVar22 = uVar17 & 0xffffffffffffff8;
    if (uVar17 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar22 + 0x10);
    }
    else {
      uVar7 = uVar17;
      if (-1 < (long)uVar17) {
        uVar7 = uVar22;
      }
      func_0x000107c60480();
    }
    if (uVar7 == 0) {
      func_0x000107c61174(lVar6);
      lVar18 = 0;
    }
    else if ((uVar17 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d203d8);
        (*pcVar4)();
      }
      lVar18 = *(long *)(uVar17 + 0x20);
      func_0x000107c61174(lVar6);
      func_0x000107c61174(lVar18);
    }
    else {
      func_0x000107c61174(lVar6);
      lVar18 = 0;
      func_0x000100e471e4(0,uVar17);
    }
  }
  lVar8 = lVar6;
  lVar13 = lVar18;
  func_0x0001084c6f7c(lVar6,lVar18);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar18);
  if ((long)(uVar25 | uVar24 | uStack_90) < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102d203bc);
    (*pcVar4)();
  }
  uVar21 = *(undefined8 *)(lVar6 + _DAT_11308f140);
  lVar18 = ((undefined8 *)(lVar6 + _DAT_11308f140))[1];
  uVar19 = *(undefined8 *)(lVar6 + _DAT_11308f138);
  lVar2 = ((undefined8 *)(lVar6 + _DAT_11308f138))[1];
  lVar15 = *(long *)(*(long *)(lVar5 + lVar15) + _DAT_113815208);
  if (lVar15 != 0) {
    uVar23 = *(undefined8 *)(lVar5 + _DAT_113068f48);
    func_0x000107c61434(lVar15);
    lVar13 = lVar15;
    FUN_102c7fa90();
    uVar12 = (uint)lVar13;
    func_0x000107c6142c(lVar15);
    if ((uVar12 & 0xff) != 1) goto LAB_102d20250;
  }
  uVar23 = 0;
LAB_102d20250:
  uVar14 = *(undefined8 *)(lVar6 + _DAT_113815200);
  uVar20 = *(undefined8 *)(lVar6 + _DAT_11308f128);
  uVar9 = uVar20;
  func_0x000104840e10();
  func_0x000107c5fadc(uVar10,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fadc(uVar16,uVar1);
  func_0x000107c6142c(uVar1);
  if (lVar18 == 0) {
    uVar21 = 0;
  }
  else {
    func_0x000107c5fadc(uVar21,lVar18);
  }
  if (lVar2 == 0) {
    uVar19 = 0;
  }
  else {
    func_0x000107c5fadc(uVar19,lVar2);
  }
  puVar11 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c5fadc(uVar9,lVar13);
  func_0x000107c6142c(lVar13);
  func_0x000107c30ad4(param_1 * 1000.0,puVar11,uVar10,uVar16,uVar21,uVar19,0,uVar24,uVar25,uStack_90
                      ,0,uVar23,uVar14,lVar8,lVar8,uVar20,uVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar9);
  return puVar11;
}



/* Entry: 102d203d8; end: 102d20503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d203d8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_48;
  
  lVar2 = 0x647261635f646e65;
  uVar4 = 0xee00746e6576655f;
  FUN_102d1fee0(0x647261635f646e65,0xee00746e6576655f);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
    }
    if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d20504);
      (*pcVar1)();
    }
    func_0x000107c610f8(PTR_PTR_1126b90b8);
    func_0x000107c30d44();
    func_0x000107c61170(lVar3);
    func_0x000104682c90(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000104682530();
    lStack_48 = lVar3;
    func_0x0001002a64a8(&lStack_48);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102d20504; end: 102d20617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d20504(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  lVar1 = 0x647261635f646e65;
  uVar3 = 0xee00746e6576655f;
  FUN_102d1fee0(0x647261635f646e65,0xee00746e6576655f);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c610f8(PTR_PTR_1126b90b8);
    func_0x000107c30d44();
    func_0x000107c61170(lVar2);
    func_0x000104682c90(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000104682530();
    lStack_38 = lVar2;
    func_0x0001002a64a8(&lStack_38);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102d20618; end: 102d20973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d20618(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  
  lVar1 = 0x647261635f646e65;
  uVar3 = 0xee00746e6576655f;
  FUN_102d1fee0(0x647261635f646e65,0xee00746e6576655f);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c610f8(PTR_PTR_1126b90b8);
    func_0x000107c30d44();
    func_0x000107c61170(lVar2);
    func_0x000104682c90(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000104682530();
    lStack_48 = lVar2;
    func_0x0001002a64a8(&lStack_48);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102d20974; end: 102d209d3; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker init] */

void FUN_102d20974(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdEndCardImplementation.AdEndCardAdTracker",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d209a0);
  (*pcVar1)();
}



/* Entry: 102d209d4; end: 102d20a5f; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d20a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d20a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d20a18) */
/* WARNING: Removing unreachable block (ram,0x000102d20a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d209d4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0dc88 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0dc90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0dc98));
  return;
}



/* Entry: 102d20a60; end: 102d20a7f;  */

void FUN_102d20a60(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1190);
  return;
}



/* Entry: 102d20a80; end: 102d20ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d20a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + _DAT_112f0dca0);
  if (lVar1 != 0) {
    func_0x000107c5fadc();
    func_0x000107c5315c(lVar1,param_2,1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102d20ae8; end: 102d20b07;  */

void FUN_102d20ae8(void)

{
  FUN_102d1fd68();
  return;
}



/* Entry: 102d20b08; end: 102d20b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d20b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + _DAT_112f0dca0);
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4dbf8(lVar1);
    func_0x000107c61170(param_2);
  }
  FUN_102d203d8(param_1);
  return;
}



/* Entry: 102d20b80; end: 102d20be3;  */

void FUN_102d20b80(void)

{
  FUN_102d20504();
  return;
}



/* Entry: 102d20be4; end: 102d20c0b; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker adLifecycleEventObservableV2] */

void FUN_102d20be4(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d20c0c; end: 102d20c13; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker streamsType] */

undefined8 FUN_102d20c0c(void)

{
  return 3;
}



/* Entry: 102d20c14; end: 102d20c53; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker tooltipImpressionEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d20c14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d20c54; end: 102d20c93; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker adEndCardEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d20c54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d20c94; end: 102d20c97; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker adInteractionEventObservable] */

void FUN_102d20c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d20c98; end: 102d20c9b; -[_TtC23AdEndCardImplementation18AdEndCardAdTracker adLifecycleEventObservable] */

void FUN_102d20c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d20c9c; end: 102d20ca3; +[SCAdResponse minNumberOfEndCardScreenshots] */

undefined8 FUN_102d20c9c(void)

{
  return 2;
}



/* Entry: 102d20ca4; end: 102d20db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d20ca4(void)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  
  puVar4 = *(undefined **)(unaff_x20 + _DAT_113815208);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  if ((ulong)puVar1 >> 0x3e == 0) {
    puVar7 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar1) {
      puVar7 = puVar1;
    }
    func_0x000107c60480();
  }
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61434(puVar4);
    lVar8 = 0;
  }
  else {
    if ((long)puVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d20db8);
      (*pcVar2)();
    }
    func_0x000107c61434(puVar4);
    lVar8 = 0;
    puVar4 = (undefined *)0x0;
    do {
      if (((ulong)puVar1 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(puVar1 + (long)puVar4 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar4;
        func_0x000100e471e4(puVar4,puVar1);
      }
      puVar6 = puVar5;
      func_0x000107c3f3b8();
      func_0x000107c61170(puVar5);
      if (((int)puVar6 != 0) && (bVar3 = lVar8 == -1, lVar8 = lVar8 + 1, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d20d64);
        (*pcVar2)();
      }
      puVar4 = puVar4 + 1;
    } while (puVar7 != puVar4);
  }
  func_0x000107c6142c(puVar1);
  return lVar8;
}



/* Entry: 102d20db8; end: 102d20e13; -[SCAdResponse numberOfMultiSegmentEndCardsWithConfigProvider:] */

undefined8 FUN_102d20db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d20ca4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102d20e14; end: 102d20ef7; -[SCAdSnap screenshots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d20e14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3dde0();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_102d20e70:
    lVar2 = param_1;
    func_0x000107c414c4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar3 = *(long *)(lVar2 + _DAT_11308fe50);
      func_0x000107c61434(lVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) goto LAB_102d20eb4;
    }
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(lVar2 + _DAT_11308fae0);
    func_0x000107c61434(lVar3);
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) goto LAB_102d20e70;
    func_0x000107c61170(param_1);
LAB_102d20eb4:
    uVar1 = 0;
    func_0x0001047fc144(0);
    lVar2 = lVar3;
    func_0x000107c5fc48(lVar3,uVar1);
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102d20ef8; end: 102d20f4f; -[SCAdSnap canDisplayEndCardWithConfigProvider:] */

uint FUN_102d20ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_102d21134();
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102d20f50; end: 102d20f77;  */

ulong FUN_102d20f50(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d2105c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d21060);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ac2d8;
    func_0x000107c61168(PTR_PTR_1126ac2d8);
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
    puVar4 = PTR_PTR_1126ac2d8;
    func_0x000107c61168(PTR_PTR_1126ac2d8);
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
  func_0x000102d211d8(0,0x112f0dce8,&PTR_PTR_1126ac2d8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d21134);
  (*pcVar2)();
}



/* Entry: 102d20f78; end: 102d21133;  */

ulong FUN_102d20f78(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d2105c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d21060);
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
  func_0x000102d211d8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d21134);
  (*pcVar2)();
}



/* Entry: 102d21134; end: 102d21217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102d21134(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_11308f288);
  bVar2 = false;
  if (lVar3 != 0) {
    iVar1 = *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + _DAT_11308f298) + _DAT_11308f538) +
                              _DAT_11308f418) + _DAT_11308f4d8);
    func_0x000107c61174();
    if (iVar1 == 1) {
      uVar4 = *(ulong *)(lVar3 + _DAT_11308f890);
      func_0x000107c61170();
      bVar2 = (uVar4 & 0xfffffffb) != 0;
    }
    else {
      func_0x000107c61170();
      bVar2 = false;
    }
  }
  return bVar2;
}



/* Entry: 102d21218; end: 102d21227;  */

void FUN_102d21218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d21228; end: 102d21247;  */

void FUN_102d21228(void)

{
  func_0x000107c61168(&PTR_PTR_112f0dd38);
  return;
}



/* Entry: 102d21248; end: 102d2124b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d21248(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lStack_88;
  
  func_0x0001041f3970();
  if (param_1 == 0) {
    return (undefined *)0x0;
  }
  lVar8 = *(long *)(param_1 + _DAT_113068f48);
  func_0x000107c61174();
  func_0x000107c61170();
  uVar12 = *(undefined8 *)(lVar8 + _DAT_11308f1f8);
  uVar15 = ((undefined8 *)(lVar8 + _DAT_11308f1f8))[1];
  uVar2 = *(undefined8 *)(lVar8 + _DAT_11308f200);
  lVar4 = ((undefined8 *)(lVar8 + _DAT_11308f200))[1];
  func_0x0001041f3970();
  if (param_1 == 0) {
    func_0x000107c61434(lVar4);
    uVar13 = uVar15;
    func_0x000107c61434();
LAB_102d2150c:
    func_0x0001041f3970();
    if (uVar13 == 0) {
      iVar18 = 0;
      func_0x0001041f3970();
      uVar9 = uVar13;
      goto joined_r0x000102d21764;
    }
    uVar9 = *(ulong *)(uVar13 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(uVar13);
    uVar13 = uVar9;
    func_0x000107c4a4dc();
    iVar18 = (int)uVar13;
    func_0x000107c61170();
    func_0x0001041f3970();
    if (uVar9 == 0) goto LAB_102d214e0;
LAB_102d21550:
    lVar17 = *(long *)(uVar9 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    lVar14 = *(long *)(lVar17 + _DAT_113815280);
    func_0x000107c61174(lVar14);
    func_0x000107c61170();
    func_0x0001041f3970();
    if (lVar17 == 0) goto LAB_102d214ec;
LAB_102d21598:
    lVar10 = *(long *)(lVar17 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(lVar17);
    lVar17 = *(long *)(lVar10 + _DAT_1138152e0);
    func_0x000107c61174(lVar17);
    func_0x000107c61170(lVar10);
  }
  else {
    uVar13 = *(ulong *)(param_1 + _DAT_113068f40);
    func_0x000107c61434(lVar4);
    func_0x000107c61174();
    func_0x000107c61434(uVar15);
    func_0x000107c61170(param_1);
    uVar9 = uVar13;
    func_0x000107c4a4e0();
    func_0x000107c61170();
    if ((uVar9 & 1) == 0) goto LAB_102d2150c;
    iVar18 = 1;
    func_0x0001041f3970();
    uVar9 = uVar13;
joined_r0x000102d21764:
    if (uVar9 != 0) goto LAB_102d21550;
LAB_102d214e0:
    lVar17 = 0;
    lVar14 = 0;
    func_0x0001041f3970();
    if (lVar17 != 0) goto LAB_102d21598;
LAB_102d214ec:
    lVar17 = 0;
  }
  lVar10 = lVar17;
  if (((lVar14 == 0) || ((*(byte *)(lVar14 + _DAT_11308ee30) & 1) != 0)) ||
     (*(long *)(lVar14 + _DAT_11308ee20) == 0)) {
    lVar11 = 0;
    lVar16 = 0;
    if (lVar17 != 0) goto LAB_102d21650;
joined_r0x000102d21634:
    lStack_88 = 0;
    lVar3 = lVar16;
    if (iVar18 != 0) goto LAB_102d216a0;
LAB_102d21638:
    lVar16 = lVar10;
    if (lVar3 != 0) goto LAB_102d216b4;
  }
  else {
    plVar1 = (long *)(*(long *)(lVar14 + _DAT_11308ee20) + _DAT_113090408);
    lVar11 = *plVar1;
    lVar16 = plVar1[1];
    func_0x000107c61434(lVar16);
    if (lVar17 == 0) goto joined_r0x000102d21634;
LAB_102d21650:
    if (((*(byte *)(lVar17 + _DAT_11308ee30) & 1) != 0) || (*(long *)(lVar17 + _DAT_11308ee20) == 0)
       ) {
      lVar10 = 0;
      goto joined_r0x000102d21634;
    }
    plVar1 = (long *)(*(long *)(lVar17 + _DAT_11308ee20) + _DAT_113090408);
    lStack_88 = *plVar1;
    lVar10 = plVar1[1];
    func_0x000107c61434(lVar10);
    lVar3 = lVar16;
    if (iVar18 == 0) goto LAB_102d21638;
LAB_102d216a0:
    func_0x000107c6142c(lVar10);
    lVar11 = 0;
    lVar3 = 0;
LAB_102d216b4:
    lVar10 = lVar3;
    func_0x000107c6142c(lVar16);
    lStack_88 = lVar11;
  }
  lVar11 = lVar8;
  if (*(long *)(lVar8 + _DAT_11308f1e0) == 1) {
    func_0x000107c3dde0();
    func_0x000107c61180();
    if (lVar11 == 0) goto LAB_102d217dc;
    lVar16 = *(long *)(lVar11 + _DAT_11308fab8);
  }
  else {
    if ((*(long *)(lVar8 + _DAT_11308f1e0) != 6) || (FUN_102d2124c(), lVar11 == 0))
    goto LAB_102d217dc;
    uVar13 = ((undefined8 *)(lVar11 + _DAT_11308fe18))[1];
    if (uVar13 != 0) {
      uVar12 = *(undefined8 *)(lVar11 + _DAT_11308fe18);
      func_0x000107c61434(uVar13);
      func_0x000107c6142c(uVar15);
      uVar15 = uVar13;
    }
    lVar16 = *(long *)(lVar11 + _DAT_11308fe38);
  }
  lVar3 = lVar16;
  func_0x000107c61174();
  func_0x000107c61170(lVar11);
  if (lVar16 != 0) {
    lVar11 = *(long *)(lVar3 + _DAT_113090408);
    lVar16 = ((long *)(lVar3 + _DAT_113090408))[1];
    func_0x000107c61434(lVar16);
    func_0x000107c61170(lVar3);
    if (lVar16 != 0) {
      func_0x000107c6142c(lVar10);
      lVar10 = lVar16;
      lStack_88 = lVar11;
    }
  }
LAB_102d217dc:
  uVar6 = 0;
  if (uVar15 != 0) {
    uVar6 = uVar12;
  }
  uVar13 = 0xe000000000000000;
  if (uVar15 != 0) {
    uVar13 = uVar15;
  }
  uVar12 = 0;
  if (lVar4 != 0) {
    uVar12 = uVar2;
  }
  lVar11 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar11 = lVar4;
  }
  func_0x000107c61434();
  lVar4 = lVar8;
  FUN_102d21310(lVar8);
  puVar5 = PTR_PTR_1126ac2e8;
  func_0x000107c610f8(PTR_PTR_1126ac2e8);
  func_0x000107c5fadc(uVar6,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c5fadc(uVar12,lVar11);
  func_0x000107c6142c(lVar11);
  func_0x000107c5fadc(lVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48d8c(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar4);
  if (lVar10 == 0) {
    lStack_88 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_88,lVar10);
  }
  func_0x000107c55208(puVar5);
  func_0x000107c61170();
  func_0x0001041f3970();
  if (lStack_88 != 0) {
    lVar11 = *(long *)(lStack_88 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(lStack_88);
    lVar16 = *(long *)(lVar11 + _DAT_113815278);
    lVar4 = lVar16;
    func_0x000107c61174(lVar16);
    func_0x000107c61170(lVar11);
    if (lVar16 != 0) {
      func_0x000107c61170(lVar4);
      func_0x000104041e90();
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c544f0(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c6142c(uVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar17);
  func_0x000107c6142c(lVar10);
  return puVar5;
}



/* Entry: 102d2124c; end: 102d2130f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d2124c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11308f208);
  if (*(int *)(param_1 + _DAT_11308f1e0) == 0x14) {
    if (((lVar1 == 0) || (*(long *)(lVar1 + _DAT_113091070) == 0)) ||
       (lVar1 = *(long *)(*(long *)(lVar1 + _DAT_113091070) + _DAT_113091020), lVar1 == 0)) {
      return 0;
    }
    lVar1 = *(long *)(lVar1 + _DAT_113090ca8);
    plVar2 = (long *)&DAT_113090ce0;
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = *(long *)(lVar1 + _DAT_113091070);
    if (lVar1 == 0) {
      return 0;
    }
    plVar2 = (long *)&DAT_113090fc8;
  }
  uVar3 = *(undefined8 *)(lVar1 + *plVar2);
  func_0x000107c61174(uVar3);
  return uVar3;
}



/* Entry: 102d21310; end: 102d213fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102d21310(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(param_1 + _DAT_11308f208);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_113091068);
    lVar2 = *(long *)(lVar2 + _DAT_113091070);
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uVar3);
  }
  func_0x000103bfb8b0(0);
  lVar1 = lVar2;
  func_0x000103bfab18();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
    uVar3 = 0xe000000000000000;
  }
  else {
    func_0x000100e8b654();
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c601f8(PTR___sSSN_11034da80,uVar3);
    func_0x000107c6142c(lVar1);
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = puVar4;
  return auVar5;
}



/* Entry: 102d213fc; end: 102d219cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d213fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lStack_88;
  
  func_0x0001041f3970();
  if (param_1 == 0) {
    return (undefined *)0x0;
  }
  lVar8 = *(long *)(param_1 + _DAT_113068f48);
  func_0x000107c61174();
  func_0x000107c61170();
  uVar12 = *(undefined8 *)(lVar8 + _DAT_11308f1f8);
  uVar15 = ((undefined8 *)(lVar8 + _DAT_11308f1f8))[1];
  uVar2 = *(undefined8 *)(lVar8 + _DAT_11308f200);
  lVar4 = ((undefined8 *)(lVar8 + _DAT_11308f200))[1];
  func_0x0001041f3970();
  if (param_1 == 0) {
    func_0x000107c61434(lVar4);
    uVar13 = uVar15;
    func_0x000107c61434();
LAB_102d2150c:
    func_0x0001041f3970();
    if (uVar13 == 0) {
      iVar18 = 0;
      func_0x0001041f3970();
      uVar9 = uVar13;
      goto joined_r0x000102d21764;
    }
    uVar9 = *(ulong *)(uVar13 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(uVar13);
    uVar13 = uVar9;
    func_0x000107c4a4dc();
    iVar18 = (int)uVar13;
    func_0x000107c61170();
    func_0x0001041f3970();
    if (uVar9 == 0) goto LAB_102d214e0;
LAB_102d21550:
    lVar17 = *(long *)(uVar9 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    lVar14 = *(long *)(lVar17 + _DAT_113815280);
    func_0x000107c61174(lVar14);
    func_0x000107c61170();
    func_0x0001041f3970();
    if (lVar17 == 0) goto LAB_102d214ec;
LAB_102d21598:
    lVar10 = *(long *)(lVar17 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(lVar17);
    lVar17 = *(long *)(lVar10 + _DAT_1138152e0);
    func_0x000107c61174(lVar17);
    func_0x000107c61170(lVar10);
  }
  else {
    uVar13 = *(ulong *)(param_1 + _DAT_113068f40);
    func_0x000107c61434(lVar4);
    func_0x000107c61174();
    func_0x000107c61434(uVar15);
    func_0x000107c61170(param_1);
    uVar9 = uVar13;
    func_0x000107c4a4e0();
    func_0x000107c61170();
    if ((uVar9 & 1) == 0) goto LAB_102d2150c;
    iVar18 = 1;
    func_0x0001041f3970();
    uVar9 = uVar13;
joined_r0x000102d21764:
    if (uVar9 != 0) goto LAB_102d21550;
LAB_102d214e0:
    lVar17 = 0;
    lVar14 = 0;
    func_0x0001041f3970();
    if (lVar17 != 0) goto LAB_102d21598;
LAB_102d214ec:
    lVar17 = 0;
  }
  lVar10 = lVar17;
  if (((lVar14 == 0) || ((*(byte *)(lVar14 + _DAT_11308ee30) & 1) != 0)) ||
     (*(long *)(lVar14 + _DAT_11308ee20) == 0)) {
    lVar11 = 0;
    lVar16 = 0;
    if (lVar17 != 0) goto LAB_102d21650;
joined_r0x000102d21634:
    lStack_88 = 0;
    lVar3 = lVar16;
    if (iVar18 != 0) goto LAB_102d216a0;
LAB_102d21638:
    lVar16 = lVar10;
    if (lVar3 != 0) goto LAB_102d216b4;
  }
  else {
    plVar1 = (long *)(*(long *)(lVar14 + _DAT_11308ee20) + _DAT_113090408);
    lVar11 = *plVar1;
    lVar16 = plVar1[1];
    func_0x000107c61434(lVar16);
    if (lVar17 == 0) goto joined_r0x000102d21634;
LAB_102d21650:
    if (((*(byte *)(lVar17 + _DAT_11308ee30) & 1) != 0) || (*(long *)(lVar17 + _DAT_11308ee20) == 0)
       ) {
      lVar10 = 0;
      goto joined_r0x000102d21634;
    }
    plVar1 = (long *)(*(long *)(lVar17 + _DAT_11308ee20) + _DAT_113090408);
    lStack_88 = *plVar1;
    lVar10 = plVar1[1];
    func_0x000107c61434(lVar10);
    lVar3 = lVar16;
    if (iVar18 == 0) goto LAB_102d21638;
LAB_102d216a0:
    func_0x000107c6142c(lVar10);
    lVar11 = 0;
    lVar3 = 0;
LAB_102d216b4:
    lVar10 = lVar3;
    func_0x000107c6142c(lVar16);
    lStack_88 = lVar11;
  }
  lVar11 = lVar8;
  if (*(long *)(lVar8 + _DAT_11308f1e0) == 1) {
    func_0x000107c3dde0();
    func_0x000107c61180();
    if (lVar11 == 0) goto LAB_102d217dc;
    lVar16 = *(long *)(lVar11 + _DAT_11308fab8);
  }
  else {
    if ((*(long *)(lVar8 + _DAT_11308f1e0) != 6) || (FUN_102d2124c(), lVar11 == 0))
    goto LAB_102d217dc;
    uVar13 = ((undefined8 *)(lVar11 + _DAT_11308fe18))[1];
    if (uVar13 != 0) {
      uVar12 = *(undefined8 *)(lVar11 + _DAT_11308fe18);
      func_0x000107c61434(uVar13);
      func_0x000107c6142c(uVar15);
      uVar15 = uVar13;
    }
    lVar16 = *(long *)(lVar11 + _DAT_11308fe38);
  }
  lVar3 = lVar16;
  func_0x000107c61174();
  func_0x000107c61170(lVar11);
  if (lVar16 != 0) {
    lVar11 = *(long *)(lVar3 + _DAT_113090408);
    lVar16 = ((long *)(lVar3 + _DAT_113090408))[1];
    func_0x000107c61434(lVar16);
    func_0x000107c61170(lVar3);
    if (lVar16 != 0) {
      func_0x000107c6142c(lVar10);
      lVar10 = lVar16;
      lStack_88 = lVar11;
    }
  }
LAB_102d217dc:
  uVar6 = 0;
  if (uVar15 != 0) {
    uVar6 = uVar12;
  }
  uVar13 = 0xe000000000000000;
  if (uVar15 != 0) {
    uVar13 = uVar15;
  }
  uVar12 = 0;
  if (lVar4 != 0) {
    uVar12 = uVar2;
  }
  lVar11 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar11 = lVar4;
  }
  func_0x000107c61434();
  lVar4 = lVar8;
  FUN_102d21310(lVar8);
  puVar5 = PTR_PTR_1126ac2e8;
  func_0x000107c610f8(PTR_PTR_1126ac2e8);
  func_0x000107c5fadc(uVar6,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c5fadc(uVar12,lVar11);
  func_0x000107c6142c(lVar11);
  func_0x000107c5fadc(lVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48d8c(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar4);
  if (lVar10 == 0) {
    lStack_88 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_88,lVar10);
  }
  func_0x000107c55208(puVar5);
  func_0x000107c61170();
  func_0x0001041f3970();
  if (lStack_88 != 0) {
    lVar11 = *(long *)(lStack_88 + _DAT_113068f40);
    func_0x000107c61174();
    func_0x000107c61170(lStack_88);
    lVar16 = *(long *)(lVar11 + _DAT_113815278);
    lVar4 = lVar16;
    func_0x000107c61174(lVar16);
    func_0x000107c61170(lVar11);
    if (lVar16 != 0) {
      func_0x000107c61170(lVar4);
      func_0x000104041e90();
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c544f0(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c6142c(uVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar17);
  func_0x000107c6142c(lVar10);
  return puVar5;
}



/* Entry: 102d219d0; end: 102d21aa7;  */

void FUN_102d219d0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(alStack_48,&UNK_1105c4480,uVar1,&UNK_1105c4480,uVar2,&PTR_DAT_1105c33f8,param_1);
  if (alStack_48[0] != 0) {
    func_0x000107c61428(param_2 + 0x10,alStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(uStack_38);
    }
    else {
      lVar3 = alStack_48[0];
      func_0x000107c61174(alStack_48[0]);
      FUN_102d21aa8();
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uStack_38);
      func_0x000107c61170(lVar3);
      alStack_48[0] = lVar3;
    }
    func_0x000107c61170(alStack_48[0]);
  }
  return;
}



/* Entry: 102d21aa8; end: 102d21c33;  */

/* WARNING: Possible PIC construction at 0x000102d21b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d21b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d21bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d21b24) */
/* WARNING: Removing unreachable block (ram,0x000102d21b28) */
/* WARNING: Removing unreachable block (ram,0x000102d21b4c) */
/* WARNING: Removing unreachable block (ram,0x000102d21b88) */
/* WARNING: Removing unreachable block (ram,0x000102d21b98) */
/* WARNING: Removing unreachable block (ram,0x000102d21b0c) */
/* WARNING: Removing unreachable block (ram,0x000102d21c1c) */
/* WARNING: Removing unreachable block (ram,0x000102d21b10) */
/* WARNING: Removing unreachable block (ram,0x000102d21bf8) */
/* WARNING: Removing unreachable block (ram,0x000102d21c00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d21aa8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0ddb0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0dda8);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f0dda8))[1]);
  func_0x000107c3d368(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d21c34; end: 102d21e77;  */

void FUN_102d21c34(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *param_2;
  lVar9 = lVar8;
  func_0x000107c433b8();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5dbfc();
  func_0x000107c61170(lVar9);
  lVar9 = lVar8;
  func_0x000107c433b8();
  func_0x000107c61180();
  lVar3 = lVar9;
  func_0x000107c5ba28();
  func_0x000107c61170(lVar9);
  func_0x000103bfc098();
  lVar9 = lVar8;
  func_0x000107c433b8();
  func_0x000107c61180();
  lVar10 = lVar9;
  func_0x000107c410b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar10 == 0) {
    lVar9 = 0;
    lVar10 = 0;
    lVar12 = param_3;
  }
  else {
    lVar9 = lVar10;
    func_0x000107c5faec();
    lVar12 = param_3;
    func_0x000107c61170(lVar10);
    lVar10 = param_3;
  }
  lVar4 = lVar8;
  func_0x000107c4c16c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    lVar11 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  lVar4 = lVar8;
  func_0x000107c5c260();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    func_0x000102d226e4(0,0x112f0de00,&PTR_PTR_1126ac2f0);
    lVar6 = lVar4;
    func_0x000107c5fc54(lVar4,uVar5);
    func_0x000107c61170(lVar4);
    lVar4 = lVar6;
    func_0x000103bfc0a8();
    func_0x000107c6142c(lVar6);
  }
  lVar6 = lVar8;
  func_0x000107c433c0();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5d388();
    func_0x000107c61170(lVar6);
    if (3 < lVar7 - 1U) {
      lVar7 = 0;
    }
  }
  func_0x000107c5c260();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar5 = 0;
    func_0x000102d226e4(0,0x112f0de00,&PTR_PTR_1126ac2f0);
    lVar6 = lVar8;
    func_0x000107c5fc54(lVar8,uVar5);
    func_0x000107c61170(lVar8);
    lVar8 = lVar6;
    func_0x000103bfc328();
    func_0x000107c6142c(lVar6);
  }
  uVar1 = (int)lVar2 - 1;
  lVar2 = 0;
  if (uVar1 < 7) {
    lVar2 = (ulong)uVar1 + 1;
  }
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_1[2] = lVar9;
  param_1[3] = lVar10;
  param_1[4] = lVar11;
  param_1[5] = lVar12;
  param_1[6] = lVar4;
  param_1[7] = lVar7;
  param_1[8] = lVar8;
  return;
}



/* Entry: 102d21e78; end: 102d21ed7; -[_TtC23AdEndCardImplementation33AdLeadGenEndCardSubmissionHandler init] */

void FUN_102d21e78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdEndCardImplementation.AdLeadGenEndCardSubmissionHandler",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d21ea4);
  (*pcVar1)();
}



/* Entry: 102d21ed8; end: 102d21f33; -[_TtC23AdEndCardImplementation33AdLeadGenEndCardSubmissionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d21ed8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0dda8 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0ddb0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0ddb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0ddc0));
  return;
}



/* Entry: 102d21f34; end: 102d21f53;  */

void FUN_102d21f34(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1280);
  return;
}



/* Entry: 102d21f54; end: 102d2206b;  */

undefined * FUN_102d21f54(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d2206c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112f0ddf0;
    func_0x0001000285a8(0x112f0ddf0,&UNK_10db40b48);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110752d20);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 102d2206c; end: 102d22087;  */

void FUN_102d2206c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102d22088();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102d22088; end: 102d221ab;  */

undefined * FUN_102d22088(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d221ac);
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
    puVar3 = (undefined *)0x112f0ddf8;
    func_0x0001000285a8(0x112f0ddf8,&UNK_10db40b50);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110752ed0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102d221ac; end: 102d226a7;  */

void FUN_102d221ac(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined *puVar20;
  long alStack_160 [10];
  undefined *puStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar18 = param_1;
  func_0x000107c4acb8();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x000102d226e4(0,0x112f0dcf0,&PTR_PTR_1126ac2e0);
  uVar14 = uVar18;
  func_0x000107c5fc54(uVar18,uVar4);
  func_0x000107c61170(uVar18);
  if (uVar14 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar18 = uVar14;
    }
    func_0x000107c60480();
  }
  if (uVar18 == 0) {
    func_0x000107c6142c(uVar14);
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102d2236c:
    uVar14 = param_1;
    func_0x000107c4ada8();
    func_0x000107c61180();
    uVar18 = 0;
    func_0x000102d226e4(0,0x112f0dce8,&PTR_PTR_1126ac2d8);
    uVar6 = uVar14;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar14);
    if (uVar6 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar14 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar14 = uVar6;
      }
      func_0x000107c60480();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
    if (uVar14 != 0) {
      uVar17 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d224f0);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(uVar6 + uVar17 * 8 + 0x20);
          func_0x000107c61174();
          uVar13 = uVar18;
        }
        else {
          uVar7 = uVar17;
          uVar13 = uVar6;
          func_0x000102d20f50();
        }
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d224ec);
          (*pcVar2)();
        }
        uVar15 = uVar17 + 1;
        uVar8 = uVar7;
        func_0x000107c4a950();
        func_0x000107c61180();
        uVar9 = uVar8;
        func_0x000107c5faec();
        uVar18 = uVar13;
        func_0x000107c61170(uVar8);
        uVar8 = uVar7;
        func_0x000107c3f9a8();
        func_0x000107c61170(uVar7);
        puVar10 = puVar12;
        func_0x000107c61558();
        puVar11 = puVar12;
        if (((ulong)puVar10 & 1) == 0) {
          uVar18 = *(long *)(puVar12 + 0x10) + 1;
          puVar11 = (undefined *)0x0;
          FUN_102d21f54(0,uVar18,1,puVar12);
        }
        uVar1 = *(ulong *)(puVar11 + 0x10);
        uVar7 = uVar1 + 1;
        puVar12 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          uVar18 = uVar7;
          FUN_102d21f54(puVar12,uVar7,1,puVar11);
        }
        *(ulong *)(puVar12 + 0x10) = uVar7;
        *(ulong *)(puVar12 + uVar1 * 0x18 + 0x20) = uVar9;
        *(ulong *)(puVar12 + uVar1 * 0x18 + 0x28) = uVar13;
        puVar12[uVar1 * 0x18 + 0x30] = (char)uVar8;
        uVar17 = uVar17 + 1;
      } while (uVar15 != uVar14);
    }
    func_0x000107c6142c(uVar6);
    uVar14 = param_1;
    func_0x000107c4e6d8();
    func_0x000107c61180();
    if (uVar14 == 0) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar6 = uVar14;
      func_0x000107c49804();
      func_0x000107c61170(uVar14);
      uVar19 = (int)uVar6 - 1;
    }
    uVar14 = param_1;
    func_0x000107c4ecb8();
    uVar6 = param_1;
    func_0x000107c4284c();
    func_0x000107c61180();
    if (uVar6 == 0) {
      uVar3 = 2;
    }
    else {
      uVar17 = uVar6;
      func_0x000107c5dab8();
      uVar3 = (undefined1)uVar17;
      func_0x000107c61170(uVar6);
    }
    uVar6 = param_1;
    func_0x000107c5c0c0();
    uVar17 = param_1;
    func_0x000107c3e4f8();
    func_0x000107c4ac9c();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar7 = 0;
      uVar18 = 0xf000000000000000;
    }
    else {
      uVar7 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
    }
    lVar16 = 0;
    if (uVar19 < 5) {
      lVar16 = (ulong)uVar19 + 1;
    }
    uVar13 = 2;
    if ((int)uVar17 != 2) {
      uVar13 = (ulong)((int)uVar17 == 1);
    }
    uVar17 = 2;
    if ((int)uVar6 != 2) {
      uVar17 = (ulong)((int)uVar6 == 1);
    }
    uVar6 = 2;
    if ((int)uVar14 != 2) {
      uVar6 = (ulong)((int)uVar14 == 1);
    }
    func_0x0001000b44c0(0,0xf000000000000000);
    uStack_70 = 2;
    uStack_c8 = 2;
    puStack_110 = puVar20;
    puStack_108 = puVar12;
    uStack_100 = uVar6;
    uStack_f8 = uVar3;
    uStack_f0 = uVar17;
    uStack_e8 = uVar13;
    uStack_e0 = uVar7;
    uStack_d8 = uVar18;
    lStack_d0 = lVar16;
    puStack_b8 = puVar20;
    puStack_b0 = puVar12;
    uStack_a8 = uVar6;
    uStack_a0 = uVar3;
    uStack_98 = uVar17;
    uStack_90 = uVar13;
    uStack_88 = uVar7;
    uStack_80 = uVar18;
    lStack_78 = lVar16;
    func_0x000102d226a8(&puStack_b8,alStack_160);
    func_0x0001017b6434(&puStack_110);
    func_0x00010428a35c(0);
    func_0x000107c610f8();
    func_0x000104288eb8(&puStack_b8);
    return;
  }
  puStack_110 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102d2206c(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d226a8);
    (*pcVar2)();
  }
  lVar16 = 0;
  if ((uVar14 & 0xc000000000000001) == 0) goto LAB_102d22280;
  do {
    puVar20 = puStack_110;
    lVar5 = lVar16;
    func_0x000102d20f64(lVar16,uVar14);
    while( true ) {
      alStack_160[0] = lVar5;
      FUN_102d21c34(&puStack_b8,alStack_160);
      func_0x000107c61170(lVar5);
      uVar6 = *(ulong *)(puVar20 + 0x10);
      puStack_110 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar6) {
        FUN_102d2206c(1 < *(ulong *)(puVar20 + 0x18),uVar6 + 1,1);
      }
      puVar20 = puStack_110;
      *(ulong *)(puStack_110 + 0x10) = uVar6 + 1;
      *(undefined **)(puStack_110 + uVar6 * 0x48 + 0x28) = puStack_b0;
      *(undefined **)(puStack_110 + uVar6 * 0x48 + 0x20) = puStack_b8;
      *(long *)(puStack_110 + uVar6 * 0x48 + 0x60) = lStack_78;
      *(ulong *)(puStack_110 + uVar6 * 0x48 + 0x48) = uStack_90;
      *(ulong *)(puStack_110 + uVar6 * 0x48 + 0x40) = uStack_98;
      *(ulong *)(puStack_110 + uVar6 * 0x48 + 0x58) = uStack_80;
      *(ulong *)(puStack_110 + uVar6 * 0x48 + 0x50) = uStack_88;
      *(ulong *)(puStack_110 + uVar6 * 0x48 + 0x38) = CONCAT71(uStack_9f,uStack_a0);
      *(ulong *)(puStack_110 + uVar6 * 0x48 + 0x30) = uStack_a8;
      if (uVar18 - 1 == lVar16) {
        func_0x000107c6142c(uVar14);
        goto LAB_102d2236c;
      }
      lVar16 = lVar16 + 1;
      if ((uVar14 & 0xc000000000000001) != 0) break;
LAB_102d22280:
      puVar20 = puStack_110;
      if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) <= lVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d22340);
        (*pcVar2)();
      }
      lVar5 = *(long *)(uVar14 + lVar16 * 8 + 0x20);
      func_0x000107c61174();
    }
  } while( true );
}



/* Entry: 102d226a8; end: 102d22723;  */

undefined8 FUN_102d226a8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10421397c)(param_2,param_1);
  return param_2;
}



/* Entry: 102d22724; end: 102d2279f;  */

uint FUN_102d22724(ulong *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  lVar4 = *param_2;
  cVar1 = (char)param_2[1];
  bVar2 = (byte)param_1[1];
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
        if (uVar6 == 0) {
LAB_102d22a14:
          if (lVar4 == 0) goto LAB_102d22a54;
        }
        else if (lVar4 != 0) {
          func_0x000100ea57c8(0);
          FUN_102cf0990(lVar4,0);
          FUN_102cf0990(uVar6,0);
          uVar3 = uVar6;
          func_0x000107c60118(uVar6,lVar4);
          FUN_102ce86f8(lVar4,0);
          FUN_102ce86f8(uVar6,0);
          if ((uVar3 & 1) != 0) goto LAB_102d22a54;
        }
      }
    }
    else if (cVar1 == '\x01') {
      uVar5 = (uint)((uint)uVar6 == (uint)lVar4);
      goto LAB_102d22a60;
    }
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') {
LAB_102d2297c:
      uVar5 = (uint)lVar4 ^ (uint)uVar6 ^ 1;
      goto LAB_102d22a60;
    }
  }
  else if (bVar2 == 3) {
    if (cVar1 == '\x03') goto LAB_102d2297c;
  }
  else if ((long)uVar6 < 3) {
    if (uVar6 == 0) {
      if (cVar1 == '\x04') goto LAB_102d22a14;
    }
    else if (uVar6 == 1) {
      if ((cVar1 == '\x04') && (lVar4 == 1)) goto LAB_102d22a54;
    }
    else if ((cVar1 == '\x04') && (lVar4 == 2)) goto LAB_102d22a54;
  }
  else if ((long)uVar6 < 5) {
    if (uVar6 == 3) {
      if ((cVar1 == '\x04') && (lVar4 == 3)) {
LAB_102d22a54:
        uVar5 = 1;
        goto LAB_102d22a60;
      }
    }
    else if ((cVar1 == '\x04') && (lVar4 == 4)) goto LAB_102d22a54;
  }
  else if (uVar6 == 5) {
    if ((cVar1 == '\x04') && (lVar4 == 5)) goto LAB_102d22a54;
  }
  else if ((cVar1 == '\x04') && (lVar4 == 6)) goto LAB_102d22a54;
  uVar5 = 0;
LAB_102d22a60:
  return uVar5 & 1;
}



/* Entry: 102d227a0; end: 102d228c3;  */

void FUN_102d227a0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d228c4; end: 102d22a73;  */

uint FUN_102d228c4(ulong param_1,byte param_2,long param_3,char param_4)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (param_4 == '\0') {
        if (param_1 == 0) {
LAB_102d22a14:
          if (param_3 == 0) goto LAB_102d22a54;
        }
        else if (param_3 != 0) {
          func_0x000100ea57c8(0);
          FUN_102cf0990(param_3,0);
          FUN_102cf0990(param_1,0);
          uVar1 = param_1;
          func_0x000107c60118(param_1,param_3);
          FUN_102ce86f8(param_3,0);
          FUN_102ce86f8(param_1,0);
          if ((uVar1 & 1) != 0) goto LAB_102d22a54;
        }
      }
    }
    else if (param_4 == '\x01') {
      uVar2 = (uint)((uint)param_1 == (uint)param_3);
      goto LAB_102d22a60;
    }
  }
  else if (param_2 == 2) {
    if (param_4 == '\x02') {
LAB_102d2297c:
      uVar2 = (uint)param_3 ^ (uint)param_1 ^ 1;
      goto LAB_102d22a60;
    }
  }
  else if (param_2 == 3) {
    if (param_4 == '\x03') goto LAB_102d2297c;
  }
  else if ((long)param_1 < 3) {
    if (param_1 == 0) {
      if (param_4 == '\x04') goto LAB_102d22a14;
    }
    else if (param_1 == 1) {
      if ((param_4 == '\x04') && (param_3 == 1)) goto LAB_102d22a54;
    }
    else if ((param_4 == '\x04') && (param_3 == 2)) goto LAB_102d22a54;
  }
  else if ((long)param_1 < 5) {
    if (param_1 == 3) {
      if ((param_4 == '\x04') && (param_3 == 3)) {
LAB_102d22a54:
        uVar2 = 1;
        goto LAB_102d22a60;
      }
    }
    else if ((param_4 == '\x04') && (param_3 == 4)) goto LAB_102d22a54;
  }
  else if (param_1 == 5) {
    if ((param_4 == '\x04') && (param_3 == 5)) goto LAB_102d22a54;
  }
  else if ((param_4 == '\x04') && (param_3 == 6)) goto LAB_102d22a54;
  uVar2 = 0;
LAB_102d22a60:
  return uVar2 & 1;
}



/* Entry: 102d22a74; end: 102d22a77;  */

void FUN_102d22a74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40bd0;
  func_0x000107c61520(&UNK_10db40bd0,&UNK_1105c3720);
  puRam0000000112f0de08 = puVar1;
  return;
}



/* Entry: 102d22a78; end: 102d22ab7;  */

void FUN_102d22a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40bd0;
  func_0x000107c61520(&UNK_10db40bd0,&UNK_1105c3720);
  puRam0000000112f0de08 = puVar1;
  return;
}



/* Entry: 102d22ab8; end: 102d22abb;  */

void FUN_102d22ab8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40cb8;
  func_0x000107c61520(&UNK_10db40cb8,&UNK_1105c39d8);
  puRam0000000112f0de10 = puVar1;
  return;
}



/* Entry: 102d22abc; end: 102d22afb;  */

void FUN_102d22abc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40cb8;
  func_0x000107c61520(&UNK_10db40cb8,&UNK_1105c39d8);
  puRam0000000112f0de10 = puVar1;
  return;
}



/* Entry: 102d22afc; end: 102d22aff;  */

void FUN_102d22afc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40d20;
  func_0x000107c61520(&UNK_10db40d20,&UNK_1105c3a68);
  puRam0000000112f0de18 = puVar1;
  return;
}



/* Entry: 102d22b00; end: 102d22b3f;  */

void FUN_102d22b00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40d20;
  func_0x000107c61520(&UNK_10db40d20,&UNK_1105c3a68);
  puRam0000000112f0de18 = puVar1;
  return;
}



/* Entry: 102d22b40; end: 102d22b43;  */

void FUN_102d22b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40e28;
  func_0x000107c61520(&UNK_10db40e28,&UNK_1105c3e60);
  puRam0000000112f0de20 = puVar1;
  return;
}



/* Entry: 102d22b44; end: 102d22b83;  */

void FUN_102d22b44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0de20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40e28;
  func_0x000107c61520(&UNK_10db40e28,&UNK_1105c3e60);
  puRam0000000112f0de20 = puVar1;
  return;
}



/* Entry: 102d22b84; end: 102d22c43;  */

undefined1  [16] FUN_102d22b84(void)

{
  return ZEXT816(0x1105c3410);
}



/* Entry: 102d22c44; end: 102d22c87;  */

undefined8 * FUN_102d22c44(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_102cf0990(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 102d22c88; end: 102d22c97;  */

void FUN_102d22c88(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 102d22c98; end: 102d22ce7;  */

undefined8 * FUN_102d22c98(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_102cf0990(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_102ce86f8(uVar3,uVar2);
  return param_1;
}



/* Entry: 102d22ce8; end: 102d22d23;  */

undefined8 * FUN_102d22ce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_102ce86f8(uVar3,uVar2);
  return param_1;
}



/* Entry: 102d22d24; end: 102d22df3;  */

int FUN_102d22d24(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102d22df4; end: 102d22e1f;  */

long FUN_102d22df4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d22e20; end: 102d233b3;  */

int FUN_102d22e20(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102d233b4; end: 102d233ef;  */

undefined8 * FUN_102d233b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102d233f0; end: 102d233fb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102d233f0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102d233fc; end: 102d2343f;  */

undefined8 * FUN_102d233fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 102d23440; end: 102d23477;  */

undefined8 * FUN_102d23440(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102d23478; end: 102d23b4b;  */

int FUN_102d23478(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102d23b4c; end: 102d23b97;  */

undefined8 * FUN_102d23b4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102d23b98; end: 102d23c13;  */

undefined8 * FUN_102d23b98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 102d23c14; end: 102d23c77;  */

undefined8 * FUN_102d23c14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 102d23c78; end: 102d23eab;  */

int FUN_102d23c78(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102d23eac; end: 102d23f1b;  */

void FUN_102d23eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  lVar2 = 0;
  FUN_102d23f1c(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 102d23f1c; end: 102d23f3f;  */

void FUN_102d23f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e729adc);
  return;
}



/* Entry: 102d23f40; end: 102d23f73;  */

undefined1  [16] FUN_102d23f40(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x24));
  auVar2 = *pauVar1;
  func_0x000107c61434(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102d23f74; end: 102d23f77;  */

void FUN_102d23f74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0xff;
  FUN_102d23f1c(0xff,param_4,param_6);
  lVar2 = 0;
  FUN_102d24828(0,uVar1,&PTR_DAT_1105c4558);
  uVar1 = param_1;
  func_0x000107c6147c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      param_3,lVar2,6);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,(uint)uVar1 ^ 1,1,lVar2);
  return;
}



/* Entry: 102d23f78; end: 102d2404f;  */

void FUN_102d23f78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0xff;
  FUN_102d23f1c(0xff,param_4,param_6);
  lVar2 = 0;
  FUN_102d24828(0,uVar1,&PTR_DAT_1105c4558);
  uVar1 = param_1;
  func_0x000107c6147c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      param_3,lVar2,6);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,(uint)uVar1 ^ 1,1,lVar2);
  return;
}



/* Entry: 102d24050; end: 102d24053;  */

void FUN_102d24050(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = 0;
  FUN_102d23f1c(0,param_4,param_6);
  uVar2 = param_1;
  func_0x000107c6147c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      param_3,lVar1,6);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,(uint)uVar2 ^ 1,1,lVar1);
  return;
}



/* Entry: 102d24054; end: 102d24117;  */

void FUN_102d24054(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = 0;
  FUN_102d23f1c(0,param_4,param_6);
  uVar2 = param_1;
  func_0x000107c6147c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      param_3,lVar1,6);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,(uint)uVar2 ^ 1,1,lVar1);
  return;
}



/* Entry: 102d24118; end: 102d24127;  */

undefined8 FUN_102d24118(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x18);
}



/* Entry: 102d24128; end: 102d2419b;  */

void FUN_102d24128(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10db41508;
    func_0x000107c6153c(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 102d2419c; end: 102d24253;  */

long * FUN_102d2419c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    func_0x000107c61434();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102d24254; end: 102d24293;  */

void FUN_102d24254(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 102d24294; end: 102d24437;  */

long FUN_102d24294(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102d24438; end: 102d2452b;  */

uint * FUN_102d24438(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_102d244c8;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_102d244c8:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_102d244c8;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000102d24504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8U) + 8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Entry: 102d2452c; end: 102d2468b;  */

void FUN_102d2452c(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)lVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000102d2463c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
        puVar7[1] = 0;
      }
      else {
        puVar7[1] = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      func_0x000107c60ee4(param_1,lVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  return;
}



/* Entry: 102d2468c; end: 102d2468f;  */

void FUN_102d2468c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0xff;
  FUN_102d23f1c(0xff,param_4,param_6);
  lVar2 = 0;
  FUN_102d24828(0,uVar1,&PTR_DAT_1105c4558);
  uVar1 = param_1;
  func_0x000107c6147c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      param_3,lVar2,6);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,(uint)uVar1 ^ 1,1,lVar2);
  return;
}



/* Entry: 102d24690; end: 102d24727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d24690(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0ded0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d24728; end: 102d24787; -[AdPlaybackPageEventService init] */

void FUN_102d24728(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackPageEventServices.AdPlaybackPageEventService",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d24754);
  (*pcVar1)();
}



/* Entry: 102d24788; end: 102d24797; -[AdPlaybackPageEventService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d24788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0ded0));
  return;
}



/* Entry: 102d24798; end: 102d247b7;  */

void FUN_102d24798(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1358);
  return;
}



/* Entry: 102d247b8; end: 102d24827;  */

void FUN_102d247b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  lVar2 = 0;
  FUN_102d24828(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 102d24828; end: 102d2484b;  */

void FUN_102d24828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e729be4);
  return;
}



/* Entry: 102d2484c; end: 102d248b3;  */

undefined1  [16] FUN_102d2484c(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x24));
  auVar2 = *pauVar1;
  func_0x000107c61434(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102d248b4; end: 102d248bb;  */

undefined8 FUN_102d248b4(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x18);
}



/* Entry: 102d248bc; end: 102d248e7;  */

void FUN_102d248bc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10db415a8;
  func_0x000107c61520();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 102d248e8; end: 102d248ef;  */

void FUN_102d248e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 102d248f0; end: 102d24963;  */

void FUN_102d248f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10db41648;
    func_0x000107c6153c(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 102d24964; end: 102d24a1b;  */

long * FUN_102d24964(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    func_0x000107c61434();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102d24a1c; end: 102d24a5b;  */

void FUN_102d24a1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xffffffffffffff8) + 8));
  return;
}


