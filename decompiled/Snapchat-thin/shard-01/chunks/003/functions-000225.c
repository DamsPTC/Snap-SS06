/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ed6ff0; end: 100ed78df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed6ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [24];
  
  lVar2 = 0;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = _DAT_1137ff050;
  puVar6 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_b8,0,0);
  FUN_100ed5144(unaff_x20 + lVar2,puVar6);
  puVar3 = (undefined8 *)0x0;
  FUN_100ed330c();
  func_0x000100ed5188(puVar6);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_100ed5144(unaff_x20 + lVar2,puVar6);
    puVar4 = (undefined8 *)0x1;
    FUN_100ed330c();
    func_0x000100ed5188(puVar6);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_100ed5144(unaff_x20 + lVar2,puVar6);
      puVar5 = (undefined8 *)0x2;
      FUN_100ed330c();
      func_0x000100ed5188();
      if (puVar5 != (undefined8 *)0x0) {
        FUN_100ed9a74();
        func_0x000107c61534();
        *(undefined8 *)(puVar6 + 0x18) = 7;
        *(undefined8 *)(puVar6 + 0x10) = 3;
        puVar13 = (undefined8 *)(puVar6 + 0x20);
        *puVar13 = puVar3;
        *(undefined8 **)(puVar6 + 0x28) = puVar4;
        *(undefined8 **)(puVar6 + 0x30) = puVar5;
        uVar17 = (ulong)puVar6 & 0xc000000000000001;
        func_0x000107c61174(puVar3);
        func_0x000107c61174(puVar4);
        func_0x000107c61174(puVar5);
        if (uVar17 == 0) {
          puVar12 = puVar3;
          func_0x000107c61174(puVar3);
        }
        else {
          puVar12 = (undefined8 *)0x0;
          FUN_100ed9ad0(0,puVar6);
        }
        func_0x000107c61174();
        puVar7 = puVar12;
        func_0x000107c5e308();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c402a0(0x4052000000000000);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c521e8(puVar8);
        func_0x000107c61170(puVar8);
        puVar7 = puVar12;
        func_0x000107c5e308(puVar12);
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        puVar8 = puVar7;
        func_0x000107c40290(0x4056800000000000,puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c5784c(0x443b8000,puVar8);
        func_0x000107c521e8(puVar8);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar8);
        if (uVar17 == 0) {
          if (*(ulong *)(puVar6 + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed78dc);
            (*pcVar1)();
          }
          uVar9 = *(undefined8 *)(puVar6 + 0x28);
          func_0x000107c61174(uVar9);
        }
        else {
          uVar9 = 1;
          FUN_100ed9ad0(1,puVar6);
        }
        func_0x000107c61174();
        uVar14 = uVar9;
        func_0x000107c5e308();
        func_0x000107c61180();
        uVar15 = uVar14;
        func_0x000107c402a0(0x4052000000000000);
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x000107c521e8(uVar15);
        func_0x000107c61170(uVar15);
        uVar14 = uVar9;
        func_0x000107c5e308(uVar9);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        uVar15 = uVar14;
        func_0x000107c40290(0x4056800000000000,uVar14);
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x000107c5784c(0x443b8000,uVar15);
        func_0x000107c521e8(uVar15);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar15);
        if (uVar17 == 0) {
          if (*(ulong *)(puVar6 + 0x10) < 3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed78e0);
            (*pcVar1)();
          }
          uVar9 = *(undefined8 *)(puVar6 + 0x30);
          func_0x000107c61174(uVar9);
        }
        else {
          uVar9 = 2;
          FUN_100ed9ad0(2,puVar6);
        }
        func_0x000107c61174();
        uVar14 = uVar9;
        func_0x000107c5e308();
        func_0x000107c61180();
        uVar15 = uVar14;
        func_0x000107c402a0(0x4052000000000000);
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x000107c521e8(uVar15);
        func_0x000107c61170(uVar15);
        uVar14 = uVar9;
        func_0x000107c5e308(uVar9);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        uVar15 = uVar14;
        func_0x000107c40290(0x4056800000000000,uVar14);
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x000107c5784c(0x443b8000,uVar15);
        func_0x000107c521e8(uVar15);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar15);
        func_0x000107c61588(puVar6);
        uVar14 = *(undefined8 *)(puVar6 + 0x10);
        uVar9 = 0;
        FUN_100edba4c(0);
        func_0x000107c61408(puVar13,uVar14,uVar9);
        func_0x0001008478a8();
        func_0x000107c613fc();
        puVar13[3] = 0x11;
        puVar13[2] = 8;
        uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d48c90);
        uVar9 = uVar15;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        lVar2 = unaff_x20;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        dVar18 = 24.0;
        uVar14 = uVar9;
        func_0x000107c40284();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar2);
        puVar13[4] = uVar14;
        uVar9 = uVar15;
        func_0x000107c3f75c();
        func_0x000107c61180();
        lVar2 = unaff_x20;
        func_0x000107c3f75c();
        func_0x000107c61180();
        uVar14 = uVar9;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar2);
        puVar13[5] = uVar14;
        uVar9 = uVar15;
        func_0x000107c4acb0();
        func_0x000107c61180();
        lVar2 = unaff_x20;
        func_0x000107c4acb0();
        func_0x000107c61180();
        puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        puVar11 = puVar10;
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c51724();
        func_0x000107c61170(puVar11);
        func_0x000107c609cc(dVar18,param_2,param_3,param_4);
        dVar19 = 8.0;
        if (320.0 < dVar18) {
          dVar19 = 20.0;
        }
        uVar14 = uVar9;
        func_0x000107c40298();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar2);
        puVar13[6] = uVar14;
        uVar9 = uVar15;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar2 = unaff_x20;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        puVar11 = puVar10;
        func_0x000107c4c194(puVar10);
        func_0x000107c61180();
        func_0x000107c51724();
        func_0x000107c61170(puVar11);
        func_0x000107c609cc(dVar19,param_2,param_3,param_4);
        uVar14 = 0xc020000000000000;
        if (320.0 < dVar19) {
          uVar14 = 0xc034000000000000;
        }
        uVar16 = uVar9;
        func_0x000107c402a8(uVar14);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar2);
        puVar13[7] = uVar16;
        uVar16 = *(undefined8 *)(unaff_x20 + _DAT_1137ff068);
        uVar9 = uVar16;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c3ec1c(uVar15);
        func_0x000107c61180();
        dVar18 = 12.0;
        uVar14 = uVar9;
        func_0x000107c40284();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar15);
        puVar13[8] = uVar14;
        uVar9 = uVar16;
        func_0x000107c4acb0();
        func_0x000107c61180();
        lVar2 = unaff_x20;
        func_0x000107c4acb0();
        func_0x000107c61180();
        puVar11 = puVar10;
        func_0x000107c4c194(puVar10);
        func_0x000107c61180();
        func_0x000107c51724();
        func_0x000107c61170(puVar11);
        func_0x000107c609cc(dVar18,param_2,param_3,param_4);
        dVar19 = 8.0;
        if (320.0 < dVar18) {
          dVar19 = 20.0;
        }
        uVar14 = uVar9;
        func_0x000107c40284();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar2);
        puVar13[9] = uVar14;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar2 = unaff_x20;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c4c194(puVar10);
        func_0x000107c61180();
        func_0x000107c51724();
        func_0x000107c61170(puVar10);
        func_0x000107c609cc(dVar19,param_2,param_3,param_4);
        puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        uVar9 = 0xc020000000000000;
        if (320.0 < dVar19) {
          uVar9 = 0xc034000000000000;
        }
        uVar14 = uVar16;
        func_0x000107c40284(uVar9);
        func_0x000107c61180();
        func_0x000107c61170(uVar16);
        func_0x000107c61170(lVar2);
        puVar13[10] = uVar14;
        func_0x000107c44d9c();
        func_0x000107c61180();
        lVar2 = unaff_x20;
        func_0x000107c402a0(0x405e000000000000);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        puVar13[0xb] = lVar2;
        uVar9 = 0;
        func_0x000100edac0c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        puVar12 = puVar13;
        func_0x000107c5fc48(puVar13,uVar9);
        func_0x000107c61574(puVar13);
        func_0x000107c3d048(puVar10);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        puVar3 = puVar5;
        puVar4 = puVar12;
      }
      func_0x000107c61170(puVar3);
      puVar3 = puVar4;
    }
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 100ed78e0; end: 100ed7b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed78e0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _DAT_1137ff050;
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_58,0,0);
  FUN_100ed5144(unaff_x20 + lVar1,puVar4);
  lVar2 = 0;
  FUN_100ed330c();
  func_0x000100ed5188(puVar4);
  if (lVar2 != 0) {
    uVar3 = 0x796144;
    func_0x000107c5fadc(0x796144,0xe300000000000000);
    func_0x000107c520fc(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  FUN_100ed5144(unaff_x20 + lVar1,puVar4);
  lVar2 = 0;
  FUN_100ed330c();
  func_0x000100ed5188(puVar4);
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010ef17fd0);
    func_0x000107c520f4(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  FUN_100ed5144(unaff_x20 + lVar1,puVar4);
  lVar2 = 1;
  FUN_100ed330c();
  func_0x000100ed5188(puVar4);
  if (lVar2 != 0) {
    uVar3 = 0x68746e6f4d;
    func_0x000107c5fadc(0x68746e6f4d,0xe500000000000000);
    func_0x000107c520fc(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  FUN_100ed5144(unaff_x20 + lVar1,puVar4);
  lVar2 = 1;
  FUN_100ed330c();
  func_0x000100ed5188(puVar4);
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010ef17fb0);
    func_0x000107c520f4(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  FUN_100ed5144(unaff_x20 + lVar1,puVar4);
  lVar2 = 2;
  FUN_100ed330c();
  func_0x000100ed5188(puVar4);
  if (lVar2 != 0) {
    uVar3 = 0x72616559;
    func_0x000107c5fadc(0x72616559,0xe400000000000000);
    func_0x000107c520fc(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  FUN_100ed5144(unaff_x20 + lVar1,puVar4);
  lVar1 = 2;
  FUN_100ed330c();
  func_0x000100ed5188(puVar4);
  if (lVar1 != 0) {
    uVar3 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef17f90);
    func_0x000107c520f4(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 100ed7b84; end: 100ed7d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed7b84(ulong *param_1,byte *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*param_2;
  FUN_100edba4c(0);
  func_0x000107c610f8();
  uVar2 = uVar6;
  FUN_100edb3f8();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174();
  func_0x000107c53fcc();
  lVar1 = uVar2 + _DAT_112d48d38;
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_1103659e8;
  func_0x000107c61604(lVar1,param_3);
  FUN_100eda354(uVar6);
  func_0x000107c529c0(uVar2);
  func_0x000107c61170(uVar6);
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar6);
  func_0x000107c54adc(uVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar5 = puVar4;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(uVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59e10(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c52e04(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c3d8b8(uVar2);
  func_0x000107c3d8b8(uVar2);
  *param_1 = uVar2;
  return;
}



/* Entry: 100ed7d38; end: 100ed7ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed7d38(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_1137ff050;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_78,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar1);
  uVar9 = uVar6 & 0xffffffffffffff8;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    uVar7 = uVar9;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar6);
  uVar8 = 0;
  while( true ) {
    if (uVar7 == uVar8) {
      func_0x000107c6142c(uVar6);
      uVar6 = *(ulong *)(unaff_x20 + lVar1);
      if (uVar6 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar9 = uVar6;
        }
        func_0x000107c60480();
      }
      if (uVar9 == 0) {
        return;
      }
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed7ed4);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(uVar6 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        func_0x000107c61434(uVar6);
        uVar5 = 0;
        FUN_100ed9ad0(0,uVar6);
        func_0x000107c6142c(uVar6);
      }
      func_0x000107c3e738(uVar5);
      func_0x000107c61170(uVar5);
      return;
    }
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed7e7c);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar8;
      FUN_100ed9ad0(uVar8,uVar6);
    }
    if (SCARRY8(uVar8,1)) break;
    uVar4 = uVar3;
    func_0x000107c49d98();
    func_0x000107c61170(uVar3);
    uVar8 = uVar8 + 1;
    if ((int)uVar4 != 0) {
      func_0x000107c6142c(uVar6);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed7dfc);
  (*pcVar2)();
}



/* Entry: 100ed7ed4; end: 100ed7f13;  */

undefined1  [16] FUN_100ed7ed4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar2 = 0xf;
    func_0x000107c5fbcc(0xf,param_1,param_2);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  return ZEXT816(0);
}



/* Entry: 100ed7f14; end: 100ed7f3b; -[SCNumpadPicker activateFirstField] */

void FUN_100ed7f14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ed7d38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ed7f3c; end: 100ed7f8b; -[SCNumpadPicker placeholderTexts] */

void FUN_100ed7f3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100ed7f8c();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100ed7f8c; end: 100ed8a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ed7f8c(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [24];
  
  lVar6 = _DAT_1137ff050;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_78,0,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar6);
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    func_0x000107c61434(uVar9);
    func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed82e8);
      (*pcVar2)();
    }
    uVar11 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) <= (long)uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed82cc);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar11;
        FUN_100ed9ad0(uVar11,uVar9);
      }
      if (*(char *)(uVar3 + _DAT_112d48d20) == '\0') {
        lVar7 = 0x63616c705f796164;
        func_0x000107c5fadc(0x63616c705f796164,0xef7265646c6f6865);
        uVar4 = 0x69506461706d754e;
        func_0x000107c5fadc(0x69506461706d754e,0xec00000072656b63);
        uVar5 = 0;
        func_0x000107c5fe40(0);
        lVar6 = lVar7;
        uVar8 = uVar4;
        func_0x0001000f6108(lVar7,uVar4,uVar5);
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed82f0);
          (*pcVar2)();
        }
      }
      else if (*(char *)(uVar3 + _DAT_112d48d20) == '\x01') {
        lVar7 = -0x2fffffffffffffef;
        func_0x000107c5fadc(0xd000000000000011,0x800000010ef17f70);
        uVar4 = 0x69506461706d754e;
        func_0x000107c5fadc(0x69506461706d754e,0xec00000072656b63);
        uVar5 = 0;
        func_0x000107c5fe40(0);
        lVar6 = lVar7;
        uVar8 = uVar4;
        func_0x0001000f6108(lVar7,uVar4,uVar5);
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed82ec);
          (*pcVar2)();
        }
      }
      else {
        lVar7 = -0x2ffffffffffffff0;
        func_0x000107c5fadc(0xd000000000000010,0x800000010ef17f50);
        uVar4 = 0x69506461706d754e;
        func_0x000107c5fadc(0x69506461706d754e,0xec00000072656b63);
        uVar5 = 0;
        func_0x000107c5fe40(0);
        lVar6 = lVar7;
        uVar8 = uVar4;
        func_0x0001000f6108(lVar7,uVar4,uVar5);
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed82f4);
          (*pcVar2)();
        }
      }
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar6);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(long *)(puVar1 + uVar3 * 0x10 + 0x20) = lVar7;
      *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar8;
    } while (uVar10 != uVar11);
    func_0x000107c6142c(uVar9);
  }
  return puVar1;
}



/* Entry: 100ed8a4c; end: 100ed8ae7; -[SCNumpadPicker textField:shouldChangeCharactersInRange:replacementString:] */

uint FUN_100ed8a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000100ed82f4(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 100ed8ae8; end: 100ed8c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed8ae8(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar3 = 0;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = _DAT_1137ff050;
  puVar4 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_48,0,0);
  uVar2 = (int)unaff_x20 + (int)lVar3;
  puVar5 = puVar4;
  FUN_100ed5144();
  func_0x000100ed3ad8();
  func_0x000100ed5188(puVar4);
  uVar1 = uVar2 & 0xff;
  if (uVar1 < 7) {
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x36U) == 0) {
      if (uVar1 == 3) {
        func_0x000100edc4b8();
        goto LAB_100ed8bd4;
      }
      if (uVar1 != 6) goto LAB_100ed8bd0;
    }
    else {
      FUN_100ed9508();
      if (puVar5 != (undefined1 *)0x0) {
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1137ff068);
        goto LAB_100ed8be4;
      }
    }
    FUN_100ed9388();
  }
  else {
LAB_100ed8bd0:
    func_0x000100edc3ec();
LAB_100ed8bd4:
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1137ff068);
LAB_100ed8be4:
    func_0x000107c5fadc();
    func_0x000107c59c6c(uVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c550d8(uVar6);
    func_0x000107c60b98(*(undefined4 *)PTR__UIAccessibilityLayoutChangedNotification_1103458e0,uVar6
                       );
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 100ed8c3c; end: 100ed8c87; -[SCNumpadPicker textFieldEditingChanged:] */

/* WARNING: Possible PIC construction at 0x000100ed8c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ed8c74) */

void FUN_100ed8c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100eda5bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ed8c88; end: 100ed8dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed8c88(ulong param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar17;
  long unaff_x20;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  bVar1 = *(byte *)(param_1 + _DAT_112d48d20);
  if (bVar1 != 2) {
    uVar16 = param_1;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar16 != 0) {
      uVar5 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(uVar16);
      uVar16 = uVar5 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar16 = param_2 >> 0x38 & 0xf;
      }
      if (uVar16 != 0) {
        uVar16 = uVar5;
        func_0x000107c5fb5c(uVar5,param_2);
        lVar8 = 2;
        if (1 < bVar1) {
          lVar8 = 4;
        }
        if ((long)uVar16 < lVar8) {
          uVar16 = uVar5;
          func_0x000107c5fb5c(uVar5,param_2);
          if (SBORROW8(lVar8,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100ed8dc8);
            (*pcVar4)();
          }
          uVar6 = 0x30;
          uVar13 = 0xe100000000000000;
          func_0x000107c5fbc0(0x30,0xe100000000000000,lVar8 - uVar16);
          func_0x000107c61434(uVar13);
          func_0x000107c5fb78(uVar5,param_2);
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(uVar13);
          func_0x000107c5fadc(uVar6,uVar13);
          func_0x000107c6142c(uVar13);
          func_0x000107c59c6c(param_1);
          func_0x000107c61170(uVar6);
          goto LAB_100ed8dac;
        }
      }
      func_0x000107c6142c(param_2);
    }
  }
LAB_100ed8dac:
  lVar7 = 0;
  func_0x000107c5eea4();
  lStack_a0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar15 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d373d0;
  lStack_d0 = lVar15;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  lStack_b0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_00;
  lVar8 = 0x112d373d8;
  lStack_98 = lVar15;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  uVar16 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_c8 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar16 - extraout_x12;
  lStack_88 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12_00;
  lVar8 = 0;
  lStack_a8 = lVar15;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = _DAT_1137ff050;
  lStack_b8 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,puVar10,0,0);
  lStack_c0 = lVar8;
  puVar20 = *(undefined1 **)(unaff_x20 + lVar8);
  puVar21 = (undefined1 *)((ulong)puVar20 & 0xffffffffffffff8);
  lStack_90 = lVar7;
  lStack_80 = unaff_x20;
  if ((ulong)puVar20 >> 0x3e == 0) {
    puVar18 = *(undefined1 **)(puVar21 + 0x10);
  }
  else {
    puVar18 = puVar21;
    if ((undefined1 *)0x7fffffffffffffff < puVar20) {
      puVar18 = puVar20;
    }
    func_0x000107c60480();
  }
  puVar19 = (undefined1 *)0x0;
  do {
    lVar8 = lStack_b8;
    if (puVar18 == puVar19) {
      FUN_100ed5144(lStack_80 + lStack_c0,lStack_b8);
      lVar7 = lStack_a8;
      FUN_100ed33f8(lStack_a8);
      func_0x000100ed5188(lVar8);
      lVar12 = lStack_88;
      lVar3 = lStack_90;
      lVar15 = lStack_a0;
      (**(code **)(lStack_a0 + 0x38))(lStack_88,1,1,lStack_90);
      lVar2 = lStack_98;
      lVar8 = (long)*(int *)(lStack_b0 + 0x30);
      func_0x000100edac8c(lVar7,lStack_98,0x112d373d8,&UNK_10d9014c0);
      func_0x000100edac8c(lVar12,lVar2 + lVar8,0x112d373d8,&UNK_10d9014c0);
      pcVar4 = *(code **)(lVar15 + 0x30);
      lVar11 = lVar2;
      (*pcVar4)(lVar2,1,lVar3);
      uVar16 = uStack_c8;
      if ((int)lVar11 == 1) {
        func_0x000100edac4c(lVar12,0x112d373d8,&UNK_10d9014c0);
        func_0x000100edac4c(lVar7,0x112d373d8,&UNK_10d9014c0);
        lVar8 = lVar2 + lVar8;
        (*pcVar4)(lVar8,1,lVar3);
        if ((int)lVar8 != 1) {
LAB_100ed9198:
          func_0x000100edac4c(lVar2,0x112d373d0,&UNK_10d90f8f0);
          break;
        }
        func_0x000100edac4c(lVar2,0x112d373d8,&UNK_10d9014c0);
      }
      else {
        func_0x000100edac8c(lVar2,uStack_c8,0x112d373d8,&UNK_10d9014c0);
        lVar12 = lVar2 + lVar8;
        (*pcVar4)(lVar12,1,lVar3);
        lVar11 = lStack_d0;
        if ((int)lVar12 == 1) {
          func_0x000100edac4c(lStack_88,0x112d373d8,&UNK_10d9014c0);
          func_0x000100edac4c(lVar7,0x112d373d8,&UNK_10d9014c0);
          (**(code **)(lVar15 + 8))(uVar16,lVar3);
          goto LAB_100ed9198;
        }
        (**(code **)(lVar15 + 0x20))(lStack_d0,lVar2 + lVar8,lVar3);
        uVar6 = 0x112d373e0;
        func_0x000100edacd4(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                            PTR___s10Foundation4DateVSQAAMc_110350be0);
        uVar5 = uVar16;
        func_0x000107c5fab8(uVar16,lVar11,lVar3,uVar6);
        pcVar4 = *(code **)(lVar15 + 8);
        (*pcVar4)(lVar11,lVar3);
        func_0x000100edac4c(lStack_88,0x112d373d8,&UNK_10d9014c0);
        func_0x000100edac4c(lVar7,0x112d373d8,&UNK_10d9014c0);
        (*pcVar4)(uVar16,lVar3);
        func_0x000100edac4c(lVar2,0x112d373d8,&UNK_10d9014c0);
        if ((uVar5 & 1) == 0) break;
      }
      FUN_100ed8ae8();
      goto LAB_100ed91c8;
    }
    if (((ulong)puVar20 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)(puVar21 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ed92b0);
        (*pcVar4)();
      }
      puVar9 = *(undefined1 **)(puVar20 + (long)puVar19 * 8 + 0x20);
      func_0x000107c61174();
      puVar14 = puVar10;
    }
    else {
      puVar9 = puVar19;
      puVar14 = puVar20;
      FUN_100ed9ad0(puVar19,puVar20);
    }
    if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100ed92ac);
      (*pcVar4)();
    }
    puVar10 = puVar9;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (puVar10 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)0x0;
      puVar10 = puVar14;
    }
    else {
      puVar17 = puVar10;
      func_0x000107c5faec();
      func_0x000107c61170(puVar10);
      puVar10 = puVar14;
      func_0x000107c5fb5c(puVar17,puVar14);
      func_0x000107c6142c(puVar14);
    }
    bVar1 = puVar9[_DAT_112d48d20];
    func_0x000107c61170(puVar9);
    puVar9 = (undefined1 *)0x2;
    if (1 < bVar1) {
      puVar9 = (undefined1 *)0x4;
    }
    puVar19 = puVar19 + 1;
  } while (puVar17 == puVar9);
  func_0x000107c550d8(*(undefined8 *)(lStack_80 + _DAT_1137ff068));
LAB_100ed91c8:
  func_0x000100ed59bc();
  return;
}



/* Entry: 100ed8dc8; end: 100ed92c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed8dc8(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar16;
  long unaff_x20;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lStack_a0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar14 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d373d0;
  lStack_d0 = lVar14;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  lStack_b0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_00;
  lVar6 = 0x112d373d8;
  lStack_98 = lVar14;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  uVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_c8 = uVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar15 - extraout_x12;
  lStack_88 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_00;
  lVar6 = 0;
  lStack_a8 = lVar14;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = _DAT_1137ff050;
  lStack_b8 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,puVar8,0,0);
  lStack_c0 = lVar6;
  puVar19 = *(undefined1 **)(unaff_x20 + lVar6);
  puVar20 = (undefined1 *)((ulong)puVar19 & 0xffffffffffffff8);
  lStack_90 = lVar5;
  if ((ulong)puVar19 >> 0x3e == 0) {
    puVar17 = *(undefined1 **)(puVar20 + 0x10);
  }
  else {
    puVar17 = puVar20;
    if ((undefined1 *)0x7fffffffffffffff < puVar19) {
      puVar17 = puVar19;
    }
    func_0x000107c60480();
  }
  puVar18 = (undefined1 *)0x0;
  do {
    lVar6 = lStack_b8;
    if (puVar17 == puVar18) {
      FUN_100ed5144(unaff_x20 + lStack_c0,lStack_b8);
      lVar5 = lStack_a8;
      FUN_100ed33f8(lStack_a8);
      func_0x000100ed5188(lVar6);
      lVar10 = lStack_88;
      lVar3 = lStack_90;
      lVar14 = lStack_a0;
      (**(code **)(lStack_a0 + 0x38))(lStack_88,1,1,lStack_90);
      lVar2 = lStack_98;
      lVar6 = (long)*(int *)(lStack_b0 + 0x30);
      func_0x000100edac8c(lVar5,lStack_98,0x112d373d8,&UNK_10d9014c0);
      func_0x000100edac8c(lVar10,lVar2 + lVar6,0x112d373d8,&UNK_10d9014c0);
      pcVar4 = *(code **)(lVar14 + 0x30);
      lVar9 = lVar2;
      (*pcVar4)(lVar2,1,lVar3);
      uVar15 = uStack_c8;
      if ((int)lVar9 == 1) {
        func_0x000100edac4c(lVar10,0x112d373d8,&UNK_10d9014c0);
        func_0x000100edac4c(lVar5,0x112d373d8,&UNK_10d9014c0);
        lVar6 = lVar2 + lVar6;
        (*pcVar4)(lVar6,1,lVar3);
        if ((int)lVar6 != 1) {
LAB_100ed9198:
          func_0x000100edac4c(lVar2,0x112d373d0,&UNK_10d90f8f0);
          break;
        }
        func_0x000100edac4c(lVar2,0x112d373d8,&UNK_10d9014c0);
      }
      else {
        func_0x000100edac8c(lVar2,uStack_c8,0x112d373d8,&UNK_10d9014c0);
        lVar10 = lVar2 + lVar6;
        (*pcVar4)(lVar10,1,lVar3);
        lVar9 = lStack_d0;
        if ((int)lVar10 == 1) {
          func_0x000100edac4c(lStack_88,0x112d373d8,&UNK_10d9014c0);
          func_0x000100edac4c(lVar5,0x112d373d8,&UNK_10d9014c0);
          (**(code **)(lVar14 + 8))(uVar15,lVar3);
          goto LAB_100ed9198;
        }
        (**(code **)(lVar14 + 0x20))(lStack_d0,lVar2 + lVar6,lVar3);
        uVar11 = 0x112d373e0;
        func_0x000100edacd4(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                            PTR___s10Foundation4DateVSQAAMc_110350be0);
        uVar12 = uVar15;
        func_0x000107c5fab8(uVar15,lVar9,lVar3,uVar11);
        pcVar4 = *(code **)(lVar14 + 8);
        (*pcVar4)(lVar9,lVar3);
        func_0x000100edac4c(lStack_88,0x112d373d8,&UNK_10d9014c0);
        func_0x000100edac4c(lVar5,0x112d373d8,&UNK_10d9014c0);
        (*pcVar4)(uVar15,lVar3);
        func_0x000100edac4c(lVar2,0x112d373d8,&UNK_10d9014c0);
        if ((uVar12 & 1) == 0) break;
      }
      FUN_100ed8ae8();
      goto LAB_100ed91c8;
    }
    if (((ulong)puVar19 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)(puVar20 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ed92b0);
        (*pcVar4)();
      }
      puVar7 = *(undefined1 **)(puVar19 + (long)puVar18 * 8 + 0x20);
      func_0x000107c61174();
      puVar13 = puVar8;
    }
    else {
      puVar7 = puVar18;
      puVar13 = puVar19;
      FUN_100ed9ad0(puVar18,puVar19);
    }
    if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100ed92ac);
      (*pcVar4)();
    }
    puVar8 = puVar7;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (puVar8 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)0x0;
      puVar8 = puVar13;
    }
    else {
      puVar16 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      puVar8 = puVar13;
      func_0x000107c5fb5c(puVar16,puVar13);
      func_0x000107c6142c(puVar13);
    }
    bVar1 = puVar7[_DAT_112d48d20];
    func_0x000107c61170(puVar7);
    puVar7 = (undefined1 *)0x2;
    if (1 < bVar1) {
      puVar7 = (undefined1 *)0x4;
    }
    puVar18 = puVar18 + 1;
  } while (puVar16 == puVar7);
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_1137ff068));
LAB_100ed91c8:
  func_0x000100ed59bc();
  return;
}



/* Entry: 100ed92c4; end: 100ed9313; -[SCNumpadPicker textFieldEditingDidEnd:] */

/* WARNING: Possible PIC construction at 0x000100ed92fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ed9300) */

void FUN_100ed92c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100ed8c88(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ed9314; end: 100ed9387; -[SCNumpadPicker showError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed9314(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_1137ff068;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1137ff068);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c59c6c(uVar3);
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c60b98(*(undefined4 *)PTR__UIAccessibilityLayoutChangedNotification_1103458e0,
                      *(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100ed9388; end: 100ed94df;  */

/* WARNING: Possible PIC construction at 0x000100ed9444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed9464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed9470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ed9448) */
/* WARNING: Removing unreachable block (ram,0x000100ed9468) */
/* WARNING: Removing unreachable block (ram,0x000100ed9474) */

void FUN_100ed9388(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  func_0x000100edc650();
  FUN_100ed7f8c();
  if (*(long *)(param_1 + 0x10) == 3) {
    lVar5 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 6;
    *(undefined8 *)(lVar5 + 0x10) = 3;
    puVar4 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
    lVar6 = lVar5;
    func_0x00010075bbf0();
    *(long *)(lVar5 + 0x40) = lVar6;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    *(undefined **)(lVar5 + 0x60) = puVar4;
    *(long *)(lVar5 + 0x68) = lVar6;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar5 + 0x50) = uVar2;
    *(undefined **)(lVar5 + 0x88) = puVar4;
    *(long *)(lVar5 + 0x90) = lVar6;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(lVar5 + 0x78) = uVar3;
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 100ed94e0; end: 100ed9507; -[SCNumpadPicker showInvalidDateError] */

void FUN_100ed94e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ed9388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ed9508; end: 100ed9983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100ed9508(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5ef5c();
  puStack_d0 = *(undefined **)(lVar3 + -8);
  lStack_c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)puStack_d0 + 0x40));
  lVar3 = 0;
  puStack_c8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef18();
  lStack_e0 = *(long *)(lVar3 + -8);
  puStack_d8 = (undefined *)lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar16 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ef64();
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar11 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d373d8;
  lStack_a0 = lVar11;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar11 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar12 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_1137ff058;
  lVar12 = lVar12 - extraout_x12_00;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff058,auStack_78,0,0);
  func_0x000100edac8c(unaff_x20 + lVar3,lVar13,0x112d373d8,&UNK_10d9014c0);
  pcVar15 = *(code **)(lVar17 + 0x30);
  lVar3 = lVar13;
  (*pcVar15)(lVar13,1,lVar4);
  if ((int)lVar3 != 1) {
    pcVar14 = *(code **)(lVar17 + 0x20);
    (*pcVar14)(lVar12,lVar13,lVar4);
    lVar3 = _DAT_1137ff060;
    func_0x000107c61428(unaff_x20 + _DAT_1137ff060,auStack_90,0,0);
    func_0x000100edac8c(unaff_x20 + lVar3,lVar11,0x112d373d8,&UNK_10d9014c0);
    lVar3 = lVar11;
    (*pcVar15)(lVar11,1,lVar4);
    if ((int)lVar3 != 1) {
      (*pcVar14)(lStack_a8,lVar11,lVar4);
      puVar8 = puStack_d8;
      lVar3 = lStack_e0;
      (**(code **)(lStack_e0 + 0x68))
                (lVar16,*(undefined4 *)
                         PTR___s10Foundation8CalendarV10IdentifierO9gregorianyA2EmFWC_110350cc8,
                 puStack_d8);
      func_0x000107c5ef1c(lStack_a0,lVar16);
      (**(code **)(lVar3 + 8))(lVar16,puVar8);
      lVar3 = lStack_c0;
      puVar2 = puStack_c8;
      puVar8 = puStack_d0;
      uVar1 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88;
      pcVar14 = *(code **)((long)puStack_d0 + 0x68);
      (*pcVar14)(puStack_c8,uVar1,lStack_c0);
      puVar6 = puVar2;
      lStack_e8 = lVar12;
      func_0x000107c5ef60(puVar2,lVar12);
      pcVar15 = *(code **)((long)puVar8 + 8);
      (*pcVar15)(puVar2,lVar3);
      puVar7 = PTR___sSiN_11034deb0;
      puVar8 = PTR___sSiN_11034deb0;
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puStack_98 = puVar6;
      func_0x000107c6057c();
      puStack_d8 = puVar5;
      puStack_d0 = puVar8;
      (*pcVar14)(puVar2,uVar1,lVar3);
      lVar13 = lStack_a8;
      puVar6 = puVar2;
      func_0x000107c5ef60(puVar2,lStack_a8);
      (*pcVar15)(puVar2,lVar3);
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puStack_98 = puVar6;
      func_0x000107c6057c();
      puVar5 = puVar7;
      puVar10 = puVar9;
      func_0x000100edc584();
      lVar3 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 2;
      puVar8 = PTR___sSSN_11034da80;
      *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
      lVar11 = lVar3;
      func_0x00010075bbf0();
      *(undefined **)(lVar3 + 0x20) = puStack_d0;
      *(undefined **)(lVar3 + 0x28) = puStack_d8;
      *(undefined **)(lVar3 + 0x60) = puVar8;
      *(long *)(lVar3 + 0x68) = lVar11;
      *(long *)(lVar3 + 0x40) = lVar11;
      *(undefined **)(lVar3 + 0x48) = puVar7;
      *(undefined **)(lVar3 + 0x50) = puVar9;
      puVar8 = puVar10;
      func_0x000107c5fb00(puVar5,puVar10,lVar3);
      func_0x000107c6142c(puVar10);
      (**(code **)(lStack_b8 + 8))(lStack_a0,lStack_b0);
      pcVar15 = *(code **)(lVar17 + 8);
      (*pcVar15)(lVar13,lVar4);
      (*pcVar15)(lStack_e8,lVar4);
      goto LAB_100ed9964;
    }
    (**(code **)(lVar17 + 8))(lVar12,lVar4);
    lVar13 = lVar11;
  }
  func_0x000100edac4c(lVar13,0x112d373d8,&UNK_10d9014c0);
  puVar5 = (undefined *)0x0;
  puVar8 = (undefined *)0x0;
LAB_100ed9964:
  auVar18._8_8_ = puVar8;
  auVar18._0_8_ = puVar5;
  return auVar18;
}



/* Entry: 100ed9984; end: 100ed9997; -[SCNumpadPicker hideError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed9984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1137ff068),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 100ed9998; end: 100ed99cb;  */

void FUN_100ed9998(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ed99cc; end: 100ed9a73; -[SCNumpadPicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ed99cc(long param_1)

{
  long lVar1;
  
  func_0x000100edac4c(param_1 + _DAT_1137ff058,0x112d373d8,&UNK_10d9014c0);
  func_0x000100edac4c(param_1 + _DAT_1137ff060,0x112d373d8,&UNK_10d9014c0);
  func_0x000100edac4c(param_1 + _DAT_112d48c88,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48c90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_1137ff068));
  param_1 = param_1 + _DAT_1137ff050;
  lVar1 = 0;
  FUN_100ed4718();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100ed9a74; end: 100ed9acf;  */

void FUN_100ed9a74(void)

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
    FUN_100edba4c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d48cd8;
  plVar5 = (long *)&UNK_10d90f900;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100ed9ad0; end: 100ed9d0b;  */

ulong FUN_100ed9ad0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed9ba0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed9ba4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_100edba4c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_100edba4c(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef17ff0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed9c6c);
  (*pcVar2)();
}



/* Entry: 100ed9d0c; end: 100ed9d27;  */

void FUN_100ed9d0c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100ed9d28();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100ed9d28; end: 100ed9e4b;  */

undefined * FUN_100ed9d28(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed9e4c);
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
    FUN_100ed9a74();
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
    FUN_100edba4c(0);
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



/* Entry: 100ed9e4c; end: 100ed9f53;  */

undefined * FUN_100ed9e4c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed9f54);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100ed9f54; end: 100ed9f9f;  */

void FUN_100ed9f54(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_11034db08)(param_1,uVar2 | uVar1 << 0x10,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100ed9fa0);
  (*pcVar3)();
}



/* Entry: 100ed9fa0; end: 100eda1e7;  */

ulong FUN_100ed9fa0(ulong param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    uVar4 = 0;
    uVar6 = 0x100000000;
  }
  else {
    uVar6 = 0;
    func_0x000100eda154(0xf,param_1,param_2);
    if ((param_2 >> 0x3c & 1) == 0) {
      uVar6 = uVar6 >> 0x10;
      if ((param_2 >> 0x3d & 1) == 0) {
        if ((param_1 >> 0x3c & 1) == 0) {
          func_0x000107c60358(param_1,param_2);
        }
        else {
          param_1 = (param_2 & 0xfffffffffffffff) + 0x20;
        }
        pbVar1 = (byte *)(param_1 + uVar6);
        uVar3 = (uint)*pbVar1;
        uVar4 = (ulong)uVar3;
        if ((char)*pbVar1 < '\0') {
          uVar5 = (uint)LZCOUNT(uVar3 << 0x18 ^ 0xffffffff);
          if (uVar5 < 3) {
            if (uVar5 != 1) {
              uVar4 = (ulong)(pbVar1[1] & 0x3f | (uVar3 & 0x1f) << 6);
            }
          }
          else {
            if (uVar5 == 3) {
              bVar2 = pbVar1[2];
              uVar3 = (uVar3 & 0xf) << 0xc | (pbVar1[1] & 0x3f) << 6;
            }
            else {
              bVar2 = pbVar1[3];
              uVar3 = (uVar3 & 0xf) << 0x12 | (pbVar1[1] & 0x3f) << 0xc | (pbVar1[2] & 0x3f) << 6;
            }
            uVar4 = (ulong)(uVar3 | bVar2 & 0x3f);
          }
        }
      }
      else {
        uStack_40 = param_1;
        uStack_38 = param_2 & 0xffffffffffffff;
        uVar3 = (uint)*(byte *)((long)&uStack_40 + uVar6);
        uVar4 = (ulong)uVar3;
        if ((char)*(byte *)((long)&uStack_40 + uVar6) < '\0') {
          uVar5 = (uint)LZCOUNT(uVar3 << 0x18 ^ 0xffffffff);
          if (uVar5 < 3) {
            if (uVar5 != 1) {
              uVar4 = (ulong)(*(byte *)((long)&uStack_40 + uVar6 + 1) & 0x3f | (uVar3 & 0x1f) << 6);
            }
          }
          else {
            if (uVar5 == 3) {
              bVar2 = *(byte *)((long)&uStack_40 + uVar6 + 2);
              uVar3 = (uVar3 & 0xf) << 0xc | (*(byte *)((long)&uStack_40 + uVar6 + 1) & 0x3f) << 6;
            }
            else {
              bVar2 = *(byte *)((long)&uStack_40 + uVar6 + 3);
              uVar3 = (uVar3 & 0xf) << 0x12 |
                      (*(byte *)((long)&uStack_40 + uVar6 + 1) & 0x3f) << 0xc |
                      (*(byte *)((long)&uStack_40 + uVar6 + 2) & 0x3f) << 6;
            }
            uVar4 = (ulong)(uVar3 | bVar2 & 0x3f);
          }
        }
      }
    }
    else {
      uVar4 = uVar6 & 0xffffffffffff0000;
      func_0x000107c602f8(uVar4,param_1,param_2);
    }
    uVar6 = 0;
  }
  return uVar6 | uVar4 & 0xffffffff;
}



/* Entry: 100eda1e8; end: 100eda253;  */

void FUN_100eda1e8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if ((param_1 & 0xc) == 4L << uVar3) {
    FUN_100e36e7c();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0x10 < uVar1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100eda254);
  (*pcVar2)();
}



/* Entry: 100eda254; end: 100eda353;  */

ulong FUN_100eda254(ulong param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uStack_28;
  ulong uStack_20;
  ulong uStack_18;
  
  if (((param_1 & 0xc000) == 0) && (0xffff < param_1)) {
    uStack_28 = param_1 >> 0x10;
    if ((param_3 >> 0x3c & 1) == 0) {
      if ((param_3 >> 0x3d & 1) == 0) {
        if ((param_2 >> 0x3c & 1) == 0) {
          func_0x000107c60358();
          if (uStack_28 == param_3) goto LAB_100eda2ec;
        }
        else {
          uVar3 = param_2 & 0xffffffffffff;
          param_2 = (param_3 & 0xfffffffffffffff) + 0x20;
          if (uStack_28 == uVar3) goto LAB_100eda2ec;
        }
        if (*(char *)(param_2 + uStack_28) < -0x40) {
          uVar3 = uStack_28;
          do {
            uStack_28 = uVar3 - 1;
            pcVar1 = (char *)((param_2 - 1) + uVar3);
            uVar3 = uStack_28;
          } while (*pcVar1 < -0x40);
        }
      }
      else {
        uStack_20 = param_2;
        uStack_18 = param_3 & 0xffffffffffffff;
        if (uStack_28 != (param_3 >> 0x38 & 0xf)) {
          cVar2 = *(char *)((long)&uStack_20 + uStack_28);
          while (cVar2 < -0x40) {
            cVar2 = *(char *)((long)&uStack_28 + uStack_28 + 7);
            uStack_28 = uStack_28 - 1;
          }
        }
      }
LAB_100eda2ec:
      return uStack_28 << 0x10;
    }
    uVar3 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar3 = param_3 >> 0x38 & 0xf;
    }
    if (uStack_28 != uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss11_StringGutsV18foreignScalarAlignySS5IndexVAEF_11034e4a8)();
      return param_1;
    }
  }
  else {
    param_1 = param_1 & 0xffffffffffff0000;
  }
  return param_1;
}



/* Entry: 100eda354; end: 100eda5bb;  */

undefined * FUN_100eda354(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((param_1 & 0xff) == 0) {
    uVar2 = 0x63616c705f796164;
    func_0x000107c5fadc(0x63616c705f796164,0xef7265646c6f6865);
    uVar8 = 0x69506461706d754e;
    func_0x000107c5fadc(0x69506461706d754e,0xec00000072656b63);
    uVar7 = 0;
    func_0x000107c5fe40(0);
    uVar3 = uVar2;
    param_2 = uVar8;
    func_0x0001000f6108(uVar2,uVar8,uVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100eda5bc);
      (*pcVar1)();
    }
    param_1 = uVar3;
    func_0x000107c5faec(uVar3);
    func_0x000107c61170(uVar3);
  }
  else if (((uint)param_1 & 0xff) == 1) {
    FUN_100edc254();
  }
  else {
    func_0x000100edc320();
  }
  lVar4 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174(uVar8);
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar8 = 0;
  func_0x000100edac0c(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar4 + 0x40) = uVar8;
  *(undefined **)(lVar4 + 0x28) = puVar5;
  lVar6 = lVar4;
  func_0x000100ecbca8(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100edac4c((undefined8 *)(lVar4 + 0x20),0x112d48398,&UNK_10d90f130);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar7 = 0;
  FUN_100eca28c(0);
  uVar8 = 0x112d483a0;
  func_0x000100edacd4(0x112d483a0,FUN_100eca28c,&UNK_10d90f180);
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(lVar6);
  func_0x000107c48af8(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
  return puVar5;
}



/* Entry: 100eda5bc; end: 100edaaab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eda5bc(void)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar19 = 0x112d373d0;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar8 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_88 = uVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = uVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12_00;
  lVar4 = 0;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = _DAT_1137ff050;
  lVar9 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_78,0,0);
  lStack_90 = lVar4;
  FUN_100ed5144(unaff_x20 + lVar4,lVar9);
  FUN_100ed33f8(lVar16);
  func_0x000100ed5188(lVar9);
  (**(code **)(lVar14 + 0x38))(lVar17,1,1,lVar3);
  lVar19 = (long)*(int *)(lVar19 + 0x30);
  func_0x000100edac8c(lVar16,lVar12,0x112d373d8,&UNK_10d9014c0);
  func_0x000100edac8c(lVar17,lVar12 + lVar19,0x112d373d8,&UNK_10d9014c0);
  pcVar20 = *(code **)(lVar14 + 0x30);
  lVar4 = lVar12;
  (*pcVar20)(lVar12,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x000100edac4c(lVar17,0x112d373d8,&UNK_10d9014c0);
    func_0x000100edac4c(lVar16,0x112d373d8,&UNK_10d9014c0);
    lVar19 = lVar12 + lVar19;
    (*pcVar20)(lVar19,1,lVar3);
    if ((int)lVar19 == 1) {
      uVar8 = 0x112d373d8;
      func_0x000100edac4c(lVar12,0x112d373d8,&UNK_10d9014c0);
LAB_100eda978:
      uVar10 = *(ulong *)(unaff_x20 + lStack_90);
      uVar18 = uVar10 & 0xffffffffffffff8;
      if (uVar10 >> 0x3e == 0) {
        uVar11 = *(ulong *)(uVar18 + 0x10);
      }
      else {
        uVar11 = uVar18;
        if (0x7fffffffffffffff < uVar10) {
          uVar11 = uVar10;
        }
        func_0x000107c60480();
      }
      uVar13 = 0;
      do {
        if (uVar11 == uVar13) {
          FUN_100ed8ae8();
          break;
        }
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x100edaa98);
            (*pcVar20)();
          }
          uVar6 = *(ulong *)(uVar10 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
          uVar7 = uVar8;
        }
        else {
          uVar6 = uVar13;
          uVar7 = uVar10;
          FUN_100ed9ad0(uVar13,uVar10);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x100edaa94);
          (*pcVar20)();
        }
        uVar8 = uVar6;
        func_0x000107c5c82c();
        func_0x000107c61180();
        if (uVar8 == 0) {
          uVar15 = 0;
          uVar8 = uVar7;
        }
        else {
          uVar15 = uVar8;
          func_0x000107c5faec();
          func_0x000107c61170(uVar8);
          uVar8 = uVar7;
          func_0x000107c5fb5c(uVar15,uVar7);
          func_0x000107c6142c(uVar7);
        }
        bVar1 = *(byte *)(uVar6 + _DAT_112d48d20);
        func_0x000107c61170(uVar6);
        uVar6 = 2;
        if (1 < bVar1) {
          uVar6 = 4;
        }
        uVar13 = uVar13 + 1;
      } while (uVar15 == uVar6);
      goto LAB_100edaa68;
    }
LAB_100eda890:
    func_0x000100edac4c(lVar12,0x112d373d0,&UNK_10d90f8f0);
  }
  else {
    func_0x000100edac8c(lVar12,uStack_88,0x112d373d8,&UNK_10d9014c0);
    lVar4 = lVar12 + lVar19;
    (*pcVar20)(lVar4,1,lVar3);
    puVar2 = puStack_98;
    if ((int)lVar4 == 1) {
      func_0x000100edac4c(lVar17,0x112d373d8,&UNK_10d9014c0);
      func_0x000100edac4c(lVar16,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar14 + 8))(uStack_88,lVar3);
      goto LAB_100eda890;
    }
    (**(code **)(lVar14 + 0x20))(puStack_98,lVar12 + lVar19,lVar3);
    uVar5 = 0x112d373e0;
    func_0x000100edacd4(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                        PTR___s10Foundation4DateVSQAAMc_110350be0);
    uVar10 = uStack_88;
    uVar18 = uStack_88;
    func_0x000107c5fab8(uStack_88,puVar2,lVar3,uVar5);
    pcVar20 = *(code **)(lVar14 + 8);
    (*pcVar20)(puVar2,lVar3);
    uVar8 = 0x112d373d8;
    func_0x000100edac4c(lVar17,0x112d373d8,&UNK_10d9014c0);
    func_0x000100edac4c(lVar16,0x112d373d8,&UNK_10d9014c0);
    (*pcVar20)(uVar10,lVar3);
    func_0x000100edac4c(lVar12,0x112d373d8,&UNK_10d9014c0);
    if ((uVar18 & 1) != 0) goto LAB_100eda978;
  }
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_1137ff068));
LAB_100edaa68:
  func_0x000100ed59bc();
  return;
}



/* Entry: 100edaaac; end: 100edaab3;  */

void FUN_100edaaac(void)

{
  if (lRam0000000112d48cc0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e617e74);
  return;
}



/* Entry: 100edaab4; end: 100edaaeb;  */

void FUN_100edaab4(undefined8 param_1)

{
  if (lRam0000000112d48cc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e617e74);
  return;
}



/* Entry: 100edaaec; end: 100edab87;  */

void FUN_100edaaec(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBOWV_11034d658 + 0x40;
    lVar1 = 0x13f;
    lStack_48 = lStack_50;
    lStack_40 = lStack_50;
    puStack_30 = puStack_38;
    FUN_100ed4718();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c61630(param_1,0x100,6,&lStack_50,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100edab88; end: 100edabc7;  */

void FUN_100edab88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSsSTsMc_11034e1e0;
  func_0x000107c61520(PTR___sSsSTsMc_11034e1e0,PTR___sSsN_11034e1d8);
  puRam0000000112d48cd0 = puVar1;
  return;
}



/* Entry: 100edabc8; end: 100edad13;  */

undefined8 FUN_100edabc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100ed4718();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100edad14; end: 100edaf37;  */

void FUN_100edad14(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  
  func_0x000107c5ef00();
  uVar1 = param_1;
  func_0x000106b901a8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c5faec();
  puVar2 = param_2;
  func_0x000107c61170(uVar1);
  puVar4 = param_2;
  func_0x000107c61434();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    func_0x000107c5fb84();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(param_2);
      if (*(long *)(puVar6 + 0x10) == 3) {
        return;
      }
      func_0x000107c6142c(puVar6);
      func_0x0001000285a8(0x112d48d10,&UNK_10d90f920);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_initStaticObject_11034f440)();
      return;
    }
    if ((puVar4 == (undefined *)0x64) &&
       (puVar5 = puVar2, puVar2 == (undefined *)0xe100000000000000)) break;
    uVar3 = 0;
    puVar5 = (undefined *)0xe100000000000000;
    func_0x000107c605b8(100,0xe100000000000000,puVar4,puVar2,0);
    if ((uVar3 & 1) != 0) break;
    if ((puVar4 == (undefined *)0x6d) && (puVar2 == (undefined *)0xe100000000000000)) {
LAB_100edae48:
      uVar7 = 1;
      goto LAB_100edae4c;
    }
    uVar3 = 0x6d;
    puVar5 = (undefined *)0xe100000000000000;
    func_0x000107c605b8(0x6d,0xe100000000000000,puVar4,puVar2,0);
    if ((uVar3 & 1) != 0) goto LAB_100edae48;
    if ((puVar4 == (undefined *)0x79) && (puVar2 == (undefined *)0xe100000000000000)) {
      uVar7 = 2;
      goto LAB_100edae4c;
    }
    uVar3 = 0x79;
    puVar5 = (undefined *)0xe100000000000000;
    func_0x000107c605b8(0x79,0xe100000000000000,puVar4,puVar2,0);
    func_0x000107c6142c();
    puVar4 = puVar2;
    puVar2 = puVar5;
    if ((uVar3 & 1) != 0) {
      uVar7 = 2;
LAB_100edae54:
      puVar4 = puVar6;
      func_0x000107c61558();
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)(*(long *)(puVar6 + 0x10) + 1);
        puVar4 = (undefined *)0x0;
        FUN_100edaf38(0,puVar5,1,puVar6);
        puVar6 = puVar4;
      }
      uVar3 = *(ulong *)(puVar6 + 0x10);
      puVar2 = (undefined *)(uVar3 + 1);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        puVar5 = puVar2;
        FUN_100edaf38(puVar4,puVar2,1,puVar6);
        puVar6 = puVar4;
      }
      *(undefined **)(puVar6 + 0x10) = puVar2;
      puVar6[uVar3 + 0x20] = uVar7;
      puVar2 = puVar5;
    }
  }
  uVar7 = 0;
LAB_100edae4c:
  func_0x000107c6142c(puVar2);
  goto LAB_100edae54;
}



/* Entry: 100edaf38; end: 100edb027;  */

undefined * FUN_100edaf38(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100edb028);
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
    puVar3 = (undefined *)0x112d48d10;
    func_0x0001000285a8(0x112d48d10,&UNK_10d90f920);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100edb028; end: 100edb03b;  */

bool FUN_100edb028(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100edb03c; end: 100edb093;  */

void FUN_100edb03c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fa64(auStack_68,*(undefined8 *)(&UNK_10d90f9e8 + (ulong)bVar1 * 8),
                      0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 100edb094; end: 100edb0bf;  */

void FUN_100edb094(undefined8 param_1)

{
  byte *unaff_x20;
  
  func_0x000107c5fa64(param_1,*(undefined8 *)(&UNK_10d90f9e8 + (ulong)*unaff_x20 * 8),
                      0xe100000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe100000000000000);
  return;
}



/* Entry: 100edb0c0; end: 100edb13f;  */

void FUN_100edb0c0(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fa64(auStack_68,*(undefined8 *)(&UNK_10d90f9e8 + (ulong)bVar1 * 8),
                      0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 100edb140; end: 100edb15b;  */

void FUN_100edb140(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&UNK_10d90f9e8 + (ulong)*unaff_x20 * 8);
  param_1[1] = 0xe100000000000000;
  return;
}



/* Entry: 100edb15c; end: 100edb24f;  */

undefined4 FUN_100edb15c(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != 100) || (param_2 != -0x1f00000000000000)) {
    uVar1 = 0;
    func_0x000107c605b8(100,0xe100000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x6d) || (param_2 != -0x1f00000000000000)) {
        uVar1 = 0x6d;
        func_0x000107c605b8(0x6d,0xe100000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 == 0x79) && (param_2 == -0x1f00000000000000)) {
            func_0x000107c6142c(0xe100000000000000);
            return 2;
          }
          uVar1 = 0x79;
          func_0x000107c605b8(0x79,0xe100000000000000,param_1,param_2,0);
          func_0x000107c6142c(param_2);
          if ((uVar1 & 1) != 0) {
            return 2;
          }
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 100edb250; end: 100edb253;  */

void FUN_100edb250(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90f930;
  func_0x000107c61520(&UNK_10d90f930,&UNK_110365a80);
  puRam0000000112d48d18 = puVar1;
  return;
}



/* Entry: 100edb254; end: 100edb293;  */

void FUN_100edb254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90f930;
  func_0x000107c61520(&UNK_10d90f930,&UNK_110365a80);
  puRam0000000112d48d18 = puVar1;
  return;
}



/* Entry: 100edb294; end: 100edb3f7;  */

int FUN_100edb294(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100edb310;
        goto LAB_100edb2f4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100edb2f4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100edb310:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100edb3f8; end: 100edb4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100edb3f8(undefined1 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffd0;
  func_0x000107c61614(unaff_x20 + _DAT_112d48d28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48d30,0);
  lVar1 = unaff_x20 + _DAT_112d48d38;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d48d20) = param_1;
  FUN_100edba4c();
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffd0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c559c0();
  func_0x000107c59c74(puVar2);
  func_0x000107c52518(puVar2);
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 100edb4c8; end: 100edb567; -[_TtC32RegistrationBirthdayNumpadPicker21NumpadPickerTextField initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edb4c8(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112d48d28,0);
  func_0x000107c61614(param_1 + _DAT_112d48d30,0);
  param_1 = param_1 + _DAT_112d48d38;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "RegistrationBirthdayNumpadPicker/NumpadPickerTextField.swift",0x3c,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100edb568);
  (*pcVar1)();
}



/* Entry: 100edb568; end: 100edb647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edb568(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x20;
  
  uVar1 = unaff_x20;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (uVar1 == 0) {
    FUN_100edba4c();
    func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_deleteBackward_11253b4b8);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    func_0x000107c6142c();
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    FUN_100edba4c();
    func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_deleteBackward_11253b4b8);
    if (uVar1 != 0) {
      return;
    }
  }
  lVar3 = unaff_x20 + _DAT_112d48d38;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c615e8();
    lVar3 = unaff_x20 + _DAT_112d48d28;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c3e738();
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 100edb648; end: 100edb66f; -[_TtC32RegistrationBirthdayNumpadPicker21NumpadPickerTextField deleteBackward] */

void FUN_100edb648(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100edb568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100edb670; end: 100edb9a7;  */

void FUN_100edb670(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte **ppbVar8;
  long lVar9;
  byte *unaff_x20;
  long lVar10;
  byte *pbStack_40;
  ulong uStack_38;
  
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (unaff_x20 != (byte *)0x0) {
    pbVar7 = unaff_x20;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x20);
    pbVar5 = (byte *)((ulong)pbVar7 & 0xffffffffffff);
    pbVar6 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
    pbVar3 = pbVar5;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      pbVar3 = pbVar6;
    }
    if (pbVar3 == (byte *)0x0) {
      func_0x000107c6142c(param_2);
    }
    else if (((ulong)param_2 >> 0x3c & 1) == 0) {
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
          pbVar5 = param_2;
          func_0x000107c60358();
        }
        else {
          pbVar7 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar7 == 0x2b) {
          if ((long)pbVar5 < 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100edb9a4);
            (*pcVar4)();
          }
          pbVar5 = pbVar5 + -1;
          if (pbVar5 != (byte *)0x0) {
            lVar10 = 0;
            do {
              pbVar7 = pbVar7 + 1;
              if (((9 < *pbVar7 - 0x30) ||
                  (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar7 - 0x30), lVar10 = lVar9 + uVar1,
                    SCARRY8(lVar9,uVar1))) break;
              pbVar5 = pbVar5 + -1;
            } while (pbVar5 != (byte *)0x0);
          }
        }
        else if (*pbVar7 == 0x2d) {
          if ((long)pbVar5 < 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100edb99c);
            (*pcVar4)();
          }
          pbVar5 = pbVar5 + -1;
          if (pbVar5 != (byte *)0x0) {
            lVar10 = 0;
            while( true ) {
              pbVar7 = pbVar7 + 1;
              if ((9 < *pbVar7 - 0x30) ||
                 (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
              break;
              uVar1 = (ulong)(byte)(*pbVar7 - 0x30);
              lVar10 = lVar9 - uVar1;
              if ((SBORROW8(lVar9,uVar1)) || (pbVar5 = pbVar5 + -1, pbVar5 == (byte *)0x0)) break;
            }
          }
        }
        else if (pbVar5 != (byte *)0x0) {
          lVar10 = 0;
          pbVar3 = pbVar7;
          while (pbVar3 != (byte *)0x0) {
            if (((9 < *pbVar7 - 0x30) ||
                (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar7 - 0x30), lVar10 = lVar9 + uVar1, SCARRY8(lVar9,uVar1))
               ) break;
            pbVar5 = pbVar5 + -1;
            pbVar7 = pbVar7 + 1;
            pbVar3 = pbVar5;
          }
        }
      }
      else {
        pbStack_40 = pbVar7;
        uStack_38 = (ulong)param_2 & 0xffffffffffffff;
        uVar2 = (uint)pbVar7 & 0xff;
        if (uVar2 == 0x2b) {
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100edb9a8);
            (*pcVar4)();
          }
          pbVar6 = pbVar6 + -1;
          if (pbVar6 != (byte *)0x0) {
            lVar10 = 0;
            pbVar7 = (byte *)((ulong)&pbStack_40 | 1);
            do {
              if (((9 < *pbVar7 - 0x30) ||
                  (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar7 - 0x30), lVar10 = lVar9 + uVar1,
                    SCARRY8(lVar9,uVar1))) break;
              pbVar6 = pbVar6 + -1;
              pbVar7 = pbVar7 + 1;
            } while (pbVar6 != (byte *)0x0);
          }
        }
        else if (uVar2 == 0x2d) {
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100edb9a0);
            (*pcVar4)();
          }
          pbVar6 = pbVar6 + -1;
          if (pbVar6 != (byte *)0x0) {
            lVar10 = 0;
            pbVar7 = (byte *)((ulong)&pbStack_40 | 1);
            while( true ) {
              if ((9 < *pbVar7 - 0x30) ||
                 (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
              break;
              uVar1 = (ulong)(byte)(*pbVar7 - 0x30);
              lVar10 = lVar9 - uVar1;
              if ((SBORROW8(lVar9,uVar1)) ||
                 (pbVar6 = pbVar6 + -1, pbVar7 = pbVar7 + 1, pbVar6 == (byte *)0x0)) break;
            }
          }
        }
        else if (pbVar6 != (byte *)0x0) {
          lVar10 = 0;
          ppbVar8 = &pbStack_40;
          while( true ) {
            if ((9 < *(byte *)ppbVar8 - 0x30) ||
               (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
            break;
            uVar1 = (ulong)(byte)(*(byte *)ppbVar8 - 0x30);
            lVar10 = lVar9 + uVar1;
            if ((SCARRY8(lVar9,uVar1)) ||
               (pbVar6 = pbVar6 + -1, ppbVar8 = (byte **)((long)ppbVar8 + 1), pbVar6 == (byte *)0x0)
               ) break;
          }
        }
      }
      func_0x000107c6142c(param_2);
    }
    else {
      func_0x000107c61434(param_2);
      FUN_100edba6c(pbVar7,param_2,10);
      func_0x000107c61430(param_2,2);
    }
  }
  return;
}



/* Entry: 100edb9a8; end: 100edba03; -[_TtC32RegistrationBirthdayNumpadPicker21NumpadPickerTextField initWithFrame:] */

void FUN_100edb9a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RegistrationBirthdayNumpadPicker.NumpadPickerTextField",0x36,"init(frame:)",
                      0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100edb9d4);
  (*pcVar1)();
}



/* Entry: 100edba04; end: 100edba4b; -[_TtC32RegistrationBirthdayNumpadPicker21NumpadPickerTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100edba04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d48d28);
  func_0x000107c61610(param_1 + _DAT_112d48d30);
  param_1 = param_1 + _DAT_112d48d38;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100edba4c; end: 100edba6b;  */

void FUN_100edba4c(void)

{
  func_0x000107c61168(&PTR_PTR_11279e5b0);
  return;
}



/* Entry: 100edba6c; end: 100edbb6b;  */

/* WARNING: Removing unreachable block (ram,0x000100edbb60) */

undefined1  [16] FUN_100edba6c(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_100edbb6c(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_100edbb6c(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 100edbb6c; end: 100edbde7;  */

undefined1  [16] FUN_100edbb6c(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100edbde8);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_100edbdd8;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100edbdd8;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_100edbdbc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100edbdd8;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_100edbdbc:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100edbde4);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_100edbdd8:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100edbdd8;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_100edbdbc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 100edbde8; end: 100edbe37;  */

undefined1  [16]
FUN_100edbde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_100edbe38(0xf,param_1,param_2);
  FUN_100edbe84();
  func_0x000107c6142c(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 100edbe38; end: 100edbe83;  */

void FUN_100edbe38(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_11034db08)(param_1,uVar2 | uVar1 << 0x10,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100edbe84);
  (*pcVar3)();
}



/* Entry: 100edbe84; end: 100edbfc7;  */

/* WARNING: Possible PIC construction at 0x000100edbeec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edbfa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100edbfac) */
/* WARNING: Removing unreachable block (ram,0x000100edbef0) */

void FUN_100edbe84(ulong *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        func_0x000107c60358(param_3,param_4);
      }
    }
    else {
      uStack_60 = param_4 & 0xffffffffffffff;
      uStack_68 = param_3;
    }
  }
  else {
    puVar2 = param_1;
    func_0x000107c601ac(param_1,param_2,param_1,param_2);
    if (puVar2 != (ulong *)0x0) {
      puVar3 = puVar2;
      FUN_100edbfc8();
      puVar4 = &uStack_68;
      FUN_100edc038(puVar4,puVar3 + 4,puVar2,param_1,param_2,param_3,param_4);
      func_0x000107c61434(param_4);
      func_0x000107c6142c(uStack_50);
      if (puVar4 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100edbf84);
        (*pcVar1)();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ_11034d978)();
  return;
}



/* Entry: 100edbfc8; end: 100edc037;  */

undefined * FUN_100edbfc8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Entry: 100edc038; end: 100edc22f;  */

long FUN_100edc038(ulong *param_1,undefined1 *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar3 = param_4;
  if (param_2 != (undefined1 *)0x0) {
    lVar7 = param_3;
    if (param_3 == 0) goto LAB_100edc08c;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100edc230);
      (*pcVar2)();
    }
    uVar12 = param_5 >> 0xe;
    if (param_4 >> 0xe != uVar12) {
      uVar6 = (uint)(param_6 >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar9 = 4L << uVar6;
      uVar1 = param_6 & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      lVar10 = 1;
      do {
        uVar8 = uVar3 & 0xc;
        uVar4 = uVar3;
        if (uVar8 == uVar9) {
          FUN_100e36e7c(uVar3,param_6,param_7);
        }
        if ((uVar4 >> 0xe < param_4 >> 0xe) || (uVar12 <= uVar4 >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100edc228);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            uStack_70 = param_6;
            uStack_68 = param_7 & 0xffffffffffffff;
            uVar11 = *(undefined1 *)((long)&uStack_70 + (uVar4 >> 0x10));
            goto joined_r0x000100edc168;
          }
          uVar5 = (param_7 & 0xfffffffffffffff) + 0x20;
          if ((param_6 >> 0x3c & 1) == 0) {
            uVar5 = param_6;
            func_0x000107c60358(param_6,param_7);
          }
          uVar11 = *(undefined1 *)(uVar5 + (uVar4 >> 0x10));
          if (uVar8 == uVar9) goto LAB_100edc19c;
LAB_100edc16c:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_100edc170;
LAB_100edc1b4:
          if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100edc22c);
            (*pcVar2)();
          }
          func_0x000107c5fb90(uVar3,param_6,param_7);
        }
        else {
          func_0x000107c5fb9c();
          uVar11 = (undefined1)uVar4;
joined_r0x000100edc168:
          if (uVar8 != uVar9) goto LAB_100edc16c;
LAB_100edc19c:
          FUN_100e36e7c(uVar3,param_6,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_100edc1b4;
LAB_100edc170:
          uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
        }
        *param_2 = uVar11;
        lVar7 = param_3;
        if ((param_3 == lVar10) || (lVar7 = lVar10, uVar12 == uVar3 >> 0xe)) goto LAB_100edc08c;
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  lVar7 = 0;
LAB_100edc08c:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = uVar3;
  return lVar7;
}



/* Entry: 100edc230; end: 100edc253;  */

undefined8 FUN_100edc230(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100edc254; end: 100edc71b;  */

undefined1  [16] FUN_100edc254(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef17f70);
  uVar3 = 0x69506461706d754e;
  func_0x000107c5fadc(0x69506461706d754e,0xec00000072656b63);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100edc320);
  (*pcVar1)();
}



/* Entry: 100edc71c; end: 100edc8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edc71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d48d70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48d78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48d88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48d90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d48d98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d48da0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d48da8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d48db0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d48db8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d48dc0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d48dc8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d48dd0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d48dd8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d48de0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d48de8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d48df0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d48df8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d48e00) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d48e08) = param_16;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100edc8cc; end: 100eddbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edc8cc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  long extraout_x8;
  long lVar26;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar30;
  code *pcVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long unaff_x20;
  long lVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  ulong uVar38;
  byte *apbStack_1e0 [3];
  ulong *puStack_1c8;
  long lStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 uStack_d4;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar28 = (long)apbStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = lVar28 - extraout_x12;
  lVar6 = 0;
  func_0x000100ee69c0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  uVar29 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)(uVar29 - extraout_x12_00) - extraout_x8_01;
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar8 = &UNK_110365b78;
  func_0x000107c613fc(&UNK_110365b78,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  pcStack_88 = (code *)0x100ede3fc;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100eddca4;
  puStack_90 = &UNK_110365b90;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  uVar35 = *(undefined8 *)(unaff_x20 + _DAT_112d48d88);
  *(undefined **)(unaff_x20 + _DAT_112d48d88) = puVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar35);
  uVar35 = *(undefined8 *)(unaff_x20 + _DAT_112d48db0);
  func_0x000107c4fd0c(uVar35);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126af728;
  func_0x000107c610f8();
  func_0x000107c482d4();
  func_0x000107c61170(uVar35);
  pbVar10 = *(byte **)(*(long *)(unaff_x20 + _DAT_112d48db8) + _DAT_113083770);
  uVar38 = *(ulong *)(unaff_x20 + _DAT_112d48d98);
  func_0x000107c61174();
  uVar11 = uVar38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar30 = (code *)SoftwareBreakpoint(1,0x100eddbb0);
    (*pcVar30)();
  }
  pbVar12 = (byte *)0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef18110);
  uVar13 = uVar11;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar11);
  func_0x000107c61170();
  func_0x0001000ad07c();
  uStack_d4 = 0;
  if ((*pbVar12 & 1) == 0) {
    uVar11 = uVar38;
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar30 = (code *)SoftwareBreakpoint(1,0x100eddbb4);
      (*pcVar30)();
    }
    uVar35 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010ef18130);
    uVar14 = uVar11;
    func_0x000107c3ebd4();
    uStack_d4 = (undefined1)uVar14;
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar35);
  }
  lVar15 = *(long *)(*(long *)(unaff_x20 + _DAT_112d48dd8) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar15 != 0) {
    lVar16 = lVar15;
    func_0x000107c44424();
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
    lVar15 = _DAT_112daf720;
    lVar36 = *(long *)(unaff_x20 + _DAT_112d48d90);
    func_0x000107c61428(lVar36 + _DAT_112daf720,auStack_c0,0,0);
    lVar15 = lVar36 + lVar15;
    func_0x000107c61618();
    if (lVar15 != 0) {
      uVar35 = *(undefined8 *)(unaff_x20 + _DAT_112d48d80);
      *(long *)(unaff_x20 + _DAT_112d48d80) = lVar16;
      puStack_188 = puVar8;
      func_0x000107c615f0(lVar16);
      func_0x000107c615e8(uVar35);
      func_0x0001009f0578(lVar36 + _DAT_1137ff5a0,lVar27);
      uVar35 = *(undefined8 *)(lVar36 + _DAT_112daf730);
      uVar23 = ((undefined8 *)(lVar36 + _DAT_112daf730))[1];
      uVar33 = *(undefined8 *)(lVar36 + _DAT_112daf738);
      uVar32 = ((undefined8 *)(lVar36 + _DAT_112daf738))[1];
      lVar34 = *(long *)(unaff_x20 + _DAT_112d48da0);
      if (lVar34 == 0) {
        func_0x000107c61434();
        func_0x000107c61434(uVar23);
        lStack_198 = 0;
      }
      else {
        func_0x000107c61434();
        func_0x000107c61434(uVar23);
        func_0x000107c5b024();
        func_0x000107c61180();
        lStack_198 = lVar34;
      }
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d48da8);
      func_0x000107c3da2c();
      func_0x000107c61180();
      puVar8 = &UNK_110365bc8;
      uStack_190 = uVar17;
      func_0x000107c613fc(&UNK_110365bc8,0x18,7);
      *(byte **)(puVar8 + 0x10) = pbVar10;
      func_0x000107c61174();
      uVar11 = uVar38;
      func_0x000107c3fa04();
      func_0x000107c61180();
      puVar22 = puStack_188;
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x100eddbb8);
        (*pcVar30)();
      }
      puVar18 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      apbStack_1e0[0] = pbVar10;
      apbStack_1e0[1] = pbVar12;
      puStack_1a8 = (undefined8 *)(uVar29 - extraout_x12_00);
      func_0x000107c61168();
      func_0x000107c4c09c();
      func_0x000107c61180();
      puStack_1a0 = puVar18;
      if (puVar18 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x100eddbbc);
        (*pcVar30)();
      }
      uVar37 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d48de0) + _DAT_11305b9a0);
      lVar19 = *(long *)(lVar36 + _DAT_1137ff5b0);
      puStack_1c8 = *(ulong **)(unaff_x20 + _DAT_112d48df8);
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d48e00);
      lVar34 = lVar19;
      func_0x000107c61174();
      lStack_1c0 = lVar34;
      func_0x000107c615f0(lVar16);
      func_0x000107c61174();
      func_0x000107c5db2c();
      func_0x000107c61180();
      lVar20 = 0;
      uStack_1b0 = uVar17;
      FUN_100ee63dc();
      func_0x000107c613fc();
      pcStack_1b8 = *(code **)(lVar25 + 0x38);
      (*pcStack_1b8)(lVar20 + _DAT_112d48fd8,1,1,lVar5);
      puVar1 = (undefined8 *)(lVar20 + _DAT_112d48fe0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined8 *)(lVar20 + _DAT_112d48fe8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar20 + _DAT_112d48ff0);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar3 = (undefined8 *)(lVar20 + _DAT_112d48ff8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(lVar20 + _DAT_112d49000);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(lVar20 + _DAT_112d49008);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)(lVar20 + _DAT_112d49010) = 0;
      lVar34 = _DAT_112d49018;
      func_0x000107c61614(lVar20 + _DAT_112d49018,0);
      uVar17 = puVar1[1];
      *puVar1 = uVar35;
      puVar1[1] = uVar23;
      puVar21 = puVar7;
      func_0x000107c61174();
      func_0x000107c61434(uVar23);
      func_0x000107c61174();
      func_0x000107c615f0(lVar15);
      func_0x000107c6142c(uVar17);
      uVar17 = puVar2[1];
      *puVar2 = uVar33;
      puVar2[1] = uVar32;
      func_0x000107c61434();
      func_0x000107c6142c(uVar17);
      func_0x000107c61604(lVar20 + lVar34,lVar15);
      uVar17 = uStack_190;
      puVar18 = puStack_1a0;
      *(undefined1 *)(lVar20 + _DAT_112d49020) = uStack_d4;
      *(long *)(lVar20 + _DAT_112d49028) = lStack_198;
      *(undefined **)(lVar20 + _DAT_112d49030) = puVar21;
      *(undefined **)(lVar20 + _DAT_112d49038) = puVar22;
      *(undefined8 *)(lVar20 + _DAT_112d49040) = uStack_190;
      puVar1 = (undefined8 *)(lVar20 + _DAT_112d49048);
      *puVar1 = 0x100ede420;
      puVar1[1] = puVar8;
      *(undefined **)(lVar20 + _DAT_112d49050) = puStack_1a0;
      *(undefined8 *)(lVar20 + _DAT_112d49058) = uVar37;
      *(long *)(lVar20 + _DAT_112d49060) = lVar16;
      *(long *)(lVar20 + _DAT_112d49068) = lVar19;
      *(char *)(lVar20 + _DAT_112d49070) = (char)uVar13;
      pcVar30 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_1c8) + 0x68);
      lVar34 = lStack_198;
      func_0x000107c61174();
      puStack_188 = (undefined *)lVar34;
      func_0x000107c61174();
      apbStack_1e0[2] = puVar21;
      func_0x000107c615f0(lVar16);
      func_0x000107c61174();
      lStack_198 = uVar37;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      uStack_190 = uVar17;
      func_0x000107c6157c(puVar8);
      func_0x000107c61174();
      uVar17 = 0;
      puStack_1a0 = puVar18;
      (*pcVar30)();
      *(undefined8 *)(lVar20 + _DAT_112d49078) = uVar17;
      *(undefined8 *)(lVar20 + _DAT_112d49080) = uStack_1b0;
      *(undefined1 *)(lVar20 + _DAT_112d49088) = 1;
      *(undefined1 *)(lVar20 + _DAT_112d49090) = 1;
      func_0x000107c61174();
      uVar13 = uVar11;
      func_0x000106b9003c(uVar11);
      func_0x000107c61180();
      func_0x000107c5ee94(lVar26);
      func_0x000107c61170(uVar13);
      func_0x000107c5eea0(lVar28);
      puVar2 = puStack_1a8;
      pcVar30 = pcStack_1b8;
      lVar34 = (long)*(int *)(lVar6 + 0x20);
      (*pcStack_1b8)((long)puStack_1a8 + lVar34,1,1,lVar5);
      lVar20 = (long)*(int *)(lVar6 + 0x2c);
      (*pcVar30)((long)puVar2 + lVar20,1,1,lVar5);
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      func_0x0001000d1dcc((long)puVar2 + lVar34);
      (*pcVar30)((long)puVar2 + lVar34,1,1,lVar5);
      pcVar31 = *(code **)(lVar25 + 0x10);
      (*pcVar31)((long)puVar2 + (long)*(int *)(lVar6 + 0x24),lVar26,lVar5);
      (*pcVar31)((long)puVar2 + (long)*(int *)(lVar6 + 0x28),lVar28,lVar5);
      func_0x0001000d1dcc((long)puVar2 + lVar20);
      (*pcVar30)((long)puVar2 + lVar20,1,1,lVar5);
      *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30)) = 0;
      *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34)) = 0;
      *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38)) = 0;
      *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c)) = 0;
      pcVar30 = *(code **)(lVar25 + 8);
      (*pcVar30)(lVar28,lVar5);
      pbVar10 = apbStack_1e0[2];
      (*pcVar30)(lVar26,lVar5);
      puVar1 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
      *puVar1 = 0;
      puVar1[1] = 0xe000000000000000;
      *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x44)) = 0;
      *puVar2 = uVar35;
      puVar2[1] = uVar23;
      puVar2[4] = uVar33;
      puVar2[5] = uVar32;
      uVar13 = uVar29;
      FUN_100ede428(puVar2);
      func_0x000103dbf4dc();
      func_0x000100ee3904(lVar27);
      pbVar12 = pbVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (pbVar12 != (undefined *)0x0) {
        puVar18 = PTR_PTR_1126af710;
        func_0x000107c610f8(PTR_PTR_1126af710);
        func_0x000107c453e4();
        func_0x000107c57c6c();
        lVar5 = *(long *)(pbVar12 + _DAT_112d492f0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c4be1c();
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c61170(puVar18);
        func_0x000107c61170(pbVar12);
      }
      pbVar12 = pbVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (pbVar12 != (undefined *)0x0) {
        lVar5 = *(long *)(pbVar12 + _DAT_112d492f0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c4bd54();
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c61170(pbVar12);
      }
      if (lVar19 == 0) {
        func_0x000107c615e8(uVar11);
        func_0x000107c61170(uStack_1b0);
        func_0x000107c615e8(lVar16);
        func_0x000107c61170(lStack_198);
        func_0x000107c61170(puStack_1a0);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(uStack_190);
        func_0x000107c61170(puVar22);
        func_0x000107c61170(pbVar10);
        func_0x000107c61170(puStack_188);
        func_0x000107c615e8(lVar15);
        lVar5 = 0;
      }
      else {
        puVar18 = &UNK_110365bf0;
        func_0x000107c613fc(&UNK_110365bf0,0x18,7);
        uVar13 = uVar29;
        func_0x000107c61644(puVar18 + 0x10);
        pcStack_88 = FUN_100ede810;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)&UNK_100b5fdac;
        puStack_90 = &UNK_110365c08;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar18;
        func_0x000107c60bc4(ppuVar9);
        puVar18 = puStack_80;
        lVar6 = lStack_1c0;
        func_0x000107c61174();
        func_0x000107c61574(puVar18);
        lVar5 = lVar6;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c615e8(lVar15);
        func_0x000107c61170(puStack_188);
        func_0x000107c61170(pbVar10);
        func_0x000107c61170(puVar22);
        func_0x000107c61170(uStack_190);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(puStack_1a0);
        func_0x000107c61170(lStack_198);
        func_0x000107c615e8(lVar16);
        func_0x000107c61170(uStack_1b0);
        func_0x000107c615e8(uVar11);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar6);
      }
      func_0x0001000d1dcc(lVar27);
      uVar35 = *(undefined8 *)(uVar29 + _DAT_112d49010);
      *(long *)(uVar29 + _DAT_112d49010) = lVar5;
      func_0x000107c61170(uVar35);
      func_0x000100ede46c(puVar2);
      uVar35 = *(undefined8 *)(unaff_x20 + _DAT_112d48d70);
      *(ulong *)(unaff_x20 + _DAT_112d48d70) = uVar29;
      func_0x000107c6157c(uVar29);
      func_0x000107c61574(uVar35);
      uVar11 = uVar38;
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x100eddbc0);
        (*pcVar30)();
      }
      uVar14 = uVar11;
      FUN_100ede4a8();
      func_0x000107c615e8();
      func_0x000103dbf46c();
      lVar27 = _DAT_1137ff5a8;
      lVar25 = *(long *)(lVar36 + _DAT_1137ff5a8);
      func_0x000107c61174();
      lVar5 = lVar25;
      func_0x000100ede684();
      uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d48de8) + _DAT_113097748);
      uVar32 = *(undefined8 *)(unaff_x20 + _DAT_112d48df0);
      func_0x000107c615f0();
      func_0x000107c4f264();
      func_0x000107c61180();
      lVar28 = *(long *)(*(long *)(lVar36 + lVar27) + _DAT_113093750);
      uVar33 = uVar32;
      FUN_100eddd28();
      lVar26 = 0;
      FUN_100ee1f9c();
      lVar6 = lVar26;
      func_0x000107c610f8();
      lVar27 = _DAT_112d48e78;
      uVar35 = 0x112d48e10;
      func_0x0001000285a8(0x112d48e10,&UNK_10d90fae0);
      func_0x000107c613fc();
      func_0x0001000c2754();
      *(undefined8 *)(lVar6 + lVar27) = uVar35;
      lVar27 = _DAT_112d48e80;
      uVar35 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      *(undefined8 *)(lVar6 + lVar27) = uVar35;
      *(undefined8 *)(lVar6 + _DAT_112d48e88) = 0;
      *(undefined8 *)(lVar6 + _DAT_112d48e90) = 0;
      *(undefined8 *)(lVar6 + _DAT_112d48e98) = 0;
      *(undefined8 *)(lVar6 + _DAT_112d48ea0) = 0;
      *(undefined8 *)(lVar6 + _DAT_112d48ea8) = 0;
      *(undefined8 *)(lVar6 + _DAT_112d48eb0) = 0;
      *(undefined1 *)(lVar6 + _DAT_112d48eb8) = 1;
      *(ulong *)(lVar6 + _DAT_112d48ec0) = uVar11;
      *(undefined1 *)(lVar6 + _DAT_112d48ec8) = uStack_d4;
      puVar4 = (ulong *)(lVar6 + _DAT_112d48ed0);
      *puVar4 = uVar14;
      puVar4[1] = uVar13;
      *(long *)(lVar6 + _DAT_112d48ed8) = lVar5;
      *(undefined8 *)(lVar6 + _DAT_112d48ee0) = uVar32;
      *(byte *)(lVar6 + _DAT_112d48ee8) = (byte)uVar33 & 1;
      *(bool *)(lVar6 + _DAT_112d48ef0) = lVar28 == 1;
      *(undefined1 *)(lVar6 + _DAT_112d48ef8) = *(undefined1 *)(lVar25 + _DAT_113093768);
      uVar33 = *(undefined8 *)(lVar25 + _DAT_113093750);
      uVar17 = *(undefined8 *)(lVar25 + _DAT_113093758);
      lVar27 = ((undefined8 *)(lVar25 + _DAT_113093760))[1];
      uVar35 = 0;
      if (lVar27 != 0) {
        uVar35 = *(undefined8 *)(lVar25 + _DAT_113093760);
      }
      lVar28 = -0x2000000000000000;
      if (lVar27 != 0) {
        lVar28 = lVar27;
      }
      func_0x000107c6157c(uVar11);
      func_0x000107c61174(lVar5);
      func_0x000107c61174(uVar32);
      func_0x000107c61434(lVar27);
      func_0x000107c5fadc(uVar35,lVar28);
      func_0x000107c6142c(lVar28);
      plVar24 = &lStack_d0;
      lStack_d0 = lVar6;
      lStack_c8 = lVar26;
      func_0x000107c61154(plVar24,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar33,uVar17,
                          uVar35,uVar23);
      func_0x000107c61170(uVar35);
      func_0x000107c61170(lVar25);
      func_0x000107c61574(uVar11);
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(uVar23);
      func_0x000107c61170(uVar32);
      uVar35 = *(undefined8 *)((long)plVar24 + _DAT_112d48e78);
      func_0x000107c6157c(uVar35);
      func_0x000103dbf524();
      func_0x000107c61574(uVar35);
      lVar27 = _DAT_112daf728;
      func_0x000107c41864(*(undefined8 *)(lVar36 + _DAT_112daf728));
      uVar35 = *(undefined8 *)(lVar36 + lVar27);
      func_0x000107c61174(plVar24);
      func_0x000107c3e2c0(uVar35);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (uVar38 == 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x100eddbc4);
        (*pcVar30)();
      }
      if (*apbStack_1e0[1] == 1) {
        func_0x000107c615e8();
      }
      else {
        uVar35 = 0xd00000000000001e;
        func_0x000107c5fadc(0xd00000000000001e,0x800000010ef18150);
        uVar11 = uVar38;
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar35);
        func_0x000107c615e8(uVar38);
        if ((uVar11 & 1) != 0) {
          puVar8 = PTR_PTR_1126aead8;
          func_0x000107c610f8();
          func_0x000107c4807c();
          func_0x000107c61170(plVar24);
          uVar35 = *(undefined8 *)(unaff_x20 + _DAT_112d48d78);
          *(undefined **)(unaff_x20 + _DAT_112d48d78) = puVar8;
          func_0x000107c615e8(uVar35);
          uVar35 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d48dc0) + _DAT_113083800);
          func_0x00010372e494(0);
          func_0x000107c610f8();
          func_0x000107c61174(uVar35);
          func_0x00010372e1a8();
          func_0x00010372e17c(0);
          func_0x000107c610f8();
          func_0x000107c61174();
          lVar27 = unaff_x20;
          func_0x00010372dec8();
          func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d48e08));
          func_0x000107c61170(lVar27);
          func_0x000107c61574(uVar29);
          func_0x000107c61170(plVar24);
          func_0x000107c61170(apbStack_1e0[0]);
          func_0x000107c61170(puVar22);
          func_0x000107c615e8(lVar15);
          func_0x000107c615e8(lVar16);
          goto LAB_100eddb80;
        }
      }
      func_0x000107c61574(uVar29);
      func_0x000107c61170(plVar24);
      func_0x000107c61170(plVar24);
      func_0x000107c615e8(lVar15);
      func_0x000107c615e8(lVar16);
      func_0x000107c61170(apbStack_1e0[0]);
      func_0x000107c61170(puVar22);
      goto LAB_100eddb80;
    }
    func_0x000107c615e8(lVar16);
  }
  func_0x000107c61170(pbVar10);
  func_0x000107c61170(puVar8);
LAB_100eddb80:
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 100eddbc4; end: 100eddca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100eddbc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112d48db0);
    func_0x000107c4fd0c();
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d48dd0);
    func_0x000107c44fe4();
    func_0x000107c61180();
    lVar2 = 0;
    FUN_100ee69a0();
    lVar3 = lVar2;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112d492f0) = uVar4;
    *(undefined8 *)(lVar3 + _DAT_112d492f8) = uVar1;
    plVar5 = &lStack_58;
    lStack_58 = lVar3;
    lStack_50 = lVar2;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
  }
  return plVar5;
}



/* Entry: 100eddca4; end: 100eddd27;  */

void FUN_100eddca4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100eddd28; end: 100ede07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100eddd28(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  if (*(long *)(*(long *)(*(long *)(unaff_x20 + _DAT_112d48d90) + _DAT_1137ff5a8) + _DAT_113093750)
      == 1) {
    func_0x000106bfded4();
    if ((param_1 & 1) != 0) {
      return true;
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112d48dc8);
    func_0x000107c4d1c4();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4a75c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar1 != 0) {
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        FUN_100e8b654();
        puVar3 = &UNK_10d90fac8;
        func_0x000107c60204(&UNK_10d90fac8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar1,lVar1);
        func_0x000107c6142c(param_2);
        return puVar3 == (undefined *)0x0;
      }
    }
  }
  return false;
}



/* Entry: 100ede080; end: 100ede0cf; -[_TtC40SCRegistrationDisplayNameBirthdayFeature41RegistrationDisplayNameBirthdayEntryPoint declaredAgeCompletedWith:] */

/* WARNING: Possible PIC construction at 0x000100ede0b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ede0bc) */

void FUN_100ede080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100edde4c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ede0d0; end: 100ede123;  */

void FUN_100ede0d0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100ede124();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100ede124; end: 100ede217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ede124(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d48de0) + _DAT_11305b9a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000107c5fc48();
    pcStack_40 = FUN_100ede218;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110365c70;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c4ffe4(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100ede218; end: 100ede21b;  */

void FUN_100ede218(void)

{
  return;
}



/* Entry: 100ede21c; end: 100ede27b; -[_TtC40SCRegistrationDisplayNameBirthdayFeature41RegistrationDisplayNameBirthdayEntryPoint init] */

void FUN_100ede21c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRegistrationDisplayNameBirthdayFeature.RegistrationDisplayNameBirthdayEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ede248);
  (*pcVar1)();
}



/* Entry: 100ede27c; end: 100ede3f3; -[_TtC40SCRegistrationDisplayNameBirthdayFeature41RegistrationDisplayNameBirthdayEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ede298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ede2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ede2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ede2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ede318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ede338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ede358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ede378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ede35c) */
/* WARNING: Removing unreachable block (ram,0x000100ede33c) */
/* WARNING: Removing unreachable block (ram,0x000100ede31c) */
/* WARNING: Removing unreachable block (ram,0x000100ede2fc) */
/* WARNING: Removing unreachable block (ram,0x000100ede2dc) */
/* WARNING: Removing unreachable block (ram,0x000100ede2bc) */
/* WARNING: Removing unreachable block (ram,0x000100ede29c) */
/* WARNING: Removing unreachable block (ram,0x000100ede37c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ede27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d48d90));
  return;
}



/* Entry: 100ede3f4; end: 100ede427;  */

undefined8 FUN_100ede3f4(void)

{
  return 0;
}



/* Entry: 100ede428; end: 100ede4a7;  */

undefined8 FUN_100ede428(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100ee69c0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ede4a8; end: 100ede80f;  */

undefined1  [16] FUN_100ede4a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef181d0);
  uVar2 = 0x4c4f52544e4f43;
  lVar4 = -0x1900000000000000;
  func_0x000107c5fadc(0x4c4f52544e4f43);
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  lVar5 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar1 = 0x800000010ef18200;
  uVar3 = 0;
  if ((lVar5 == -0x2fffffffffffffe4 && lVar4 == -0x7ffffffef10e7e00) ||
     (func_0x000107c605b8(0xd00000000000001c,0x800000010ef18200,lVar5,lVar4,0), (uVar3 & 1) != 0)) {
    func_0x000107c6142c();
    func_0x00010537c2c4();
LAB_100ede590:
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      goto LAB_100ede668;
    }
  }
  else {
    uVar1 = 0x800000010ef18220;
    if ((lVar5 == -0x2fffffffffffffdf) && (lVar4 == -0x7ffffffef10e7de0)) {
LAB_100ede5f0:
      func_0x000107c6142c();
      func_0x00010537c2dc();
      goto LAB_100ede590;
    }
    uVar3 = 0xd000000000000021;
    func_0x000107c605b8(0xd000000000000021,0x800000010ef18220,lVar5,lVar4,0);
    if ((uVar3 & 1) != 0) goto LAB_100ede5f0;
    uVar1 = 0x800000010ef18250;
    uVar3 = 0;
    if ((lVar5 == -0x2fffffffffffffe6) && (lVar4 == -0x7ffffffef10e7db0)) {
      func_0x000107c6142c();
LAB_100ede654:
      func_0x00010537c2f4();
      goto LAB_100ede590;
    }
    func_0x000107c605b8(0xd00000000000001a,0x800000010ef18250,lVar5,lVar4,0);
    func_0x000107c6142c();
    if ((uVar3 & 1) != 0) goto LAB_100ede654;
  }
  lVar5 = 0;
  uVar1 = 0;
LAB_100ede668:
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = lVar5;
  return auVar6;
}



/* Entry: 100ede810; end: 100ede81f;  */

void FUN_100ede810(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = 
  "init(birthday:firstName:lastName:delegate:signupTransitionLogger:birthdayLogger:userInitialInputLogger:ageVerificationInfoProvider:resetClientId:circumstanceEngine:dateFormatter:performer:localNotificationScheduling:registrationRequest:displayNameValidationEnabled:shouldShowCombinedDisplayNameLabel:inputValidationServiceFactory:usernameSuggestionFetcher:)"
  ;
  func_0x0001000c10c0(
                     "init(birthday:firstName:lastName:delegate:signupTransitionLogger:birthdayLogger:userInitialInputLogger:ageVerificationInfoProvider:resetClientId:circumstanceEngine:dateFormatter:performer:localNotificationScheduling:registrationRequest:displayNameValidationEnabled:shouldShowCombinedDisplayNameLabel:inputValidationServiceFactory:usernameSuggestionFetcher:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_110365d00;
  func_0x000107c613fc(&UNK_110365d00,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648(lVar3);
  func_0x000107c61644(puVar2 + 0x10,lVar3);
  func_0x000107c61574(lVar3);
  puVar4 = &UNK_110365d78;
  func_0x000107c613fc(&UNK_110365d78,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcStack_58 = FUN_100ee6528;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_110365d90;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar2 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 100ede820; end: 100ede83f;  */

void FUN_100ede820(void)

{
  func_0x000107c61168(&PTR_PTR_11279e6d8);
  return;
}



/* Entry: 100ede840; end: 100ede857;  */

void FUN_100ede840(long param_1,long param_2)

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



/* Entry: 100ede858; end: 100edeaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100ede858(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  lVar6 = _DAT_112d48e78;
  uVar2 = 0x112d48e10;
  func_0x0001000285a8(0x112d48e10,&UNK_10d90fae0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar2;
  lVar6 = _DAT_112d48e80;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d48e88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48e90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48e98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48ea0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48ea8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48eb0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d48eb8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d48ec0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112d48ec8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d48ed0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d48ed8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d48ee0) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112d48ee8) = param_9._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112d48ef0) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_112d48ef8) = *(undefined1 *)(param_2 + _DAT_113093768);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113093750);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113093758);
  lVar6 = ((undefined8 *)(param_2 + _DAT_113093760))[1];
  if (lVar6 == 0) {
    uVar5 = 0;
    lVar7 = -0x2000000000000000;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + _DAT_113093760);
    lVar7 = lVar6;
  }
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61434(lVar6);
  func_0x000107c5fadc(uVar5,lVar7);
  func_0x000107c6142c(lVar7);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar2,uVar4,uVar5,
                      param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_8);
  return puVar3;
}



/* Entry: 100edeaf4; end: 100edeb1b; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController initWithCoder:] */

void FUN_100edeaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000100ee2034();
  return;
}



/* Entry: 100edeb1c; end: 100edeb23; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController pageViewName] */

undefined8 FUN_100edeb1c(void)

{
  return 0x54;
}



/* Entry: 100edeb24; end: 100edebff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edeb24(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  FUN_100edec00();
  plVar5 = *(long **)(unaff_x20 + _DAT_112d48ec0);
  puVar1 = &UNK_110365cb0;
  func_0x000107c613fc(&UNK_110365cb0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcVar2 = FUN_100ee0294;
  puVar4 = puVar1;
  (**(code **)(*plVar5 + 0x60))(FUN_100ee0294);
  func_0x000107c61574(puVar1);
  pcVar3 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d48e80),pcVar3,puVar4);
  func_0x000107c615e8(pcVar2);
  func_0x000107c53150();
  return;
}



/* Entry: 100edec00; end: 100edfab7;  */

/* WARNING: Possible PIC construction at 0x000100edec60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edec94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eded78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ededcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ededec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edee50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edee70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edeed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edef3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edef8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edefb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf4a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edf9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edfa10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edfa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edfa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edfa48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edfa58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100edfa70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100edfa5c) */
/* WARNING: Removing unreachable block (ram,0x000100edfa4c) */
/* WARNING: Removing unreachable block (ram,0x000100edfa3c) */
/* WARNING: Removing unreachable block (ram,0x000100edfa2c) */
/* WARNING: Removing unreachable block (ram,0x000100edfa14) */
/* WARNING: Removing unreachable block (ram,0x000100edf9dc) */
/* WARNING: Removing unreachable block (ram,0x000100edf9a4) */
/* WARNING: Removing unreachable block (ram,0x000100edf97c) */
/* WARNING: Removing unreachable block (ram,0x000100edf95c) */
/* WARNING: Removing unreachable block (ram,0x000100edf910) */
/* WARNING: Removing unreachable block (ram,0x000100edf8f0) */
/* WARNING: Removing unreachable block (ram,0x000100edf8a0) */
/* WARNING: Removing unreachable block (ram,0x000100edf880) */
/* WARNING: Removing unreachable block (ram,0x000100edf830) */
/* WARNING: Removing unreachable block (ram,0x000100edfab4) */
/* WARNING: Removing unreachable block (ram,0x000100edf864) */
/* WARNING: Removing unreachable block (ram,0x000100edf808) */
/* WARNING: Removing unreachable block (ram,0x000100edf780) */
/* WARNING: Removing unreachable block (ram,0x000100edf714) */
/* WARNING: Removing unreachable block (ram,0x000100edf6bc) */
/* WARNING: Removing unreachable block (ram,0x000100edf660) */
/* WARNING: Removing unreachable block (ram,0x000100edf5cc) */
/* WARNING: Removing unreachable block (ram,0x000100edf614) */
/* WARNING: Removing unreachable block (ram,0x000100edf5e0) */
/* WARNING: Removing unreachable block (ram,0x000100edf568) */
/* WARNING: Removing unreachable block (ram,0x000100edf4e4) */
/* WARNING: Removing unreachable block (ram,0x000100edf4f4) */
/* WARNING: Removing unreachable block (ram,0x000100edf4a8) */
/* WARNING: Removing unreachable block (ram,0x000100edf510) */
/* WARNING: Removing unreachable block (ram,0x000100edf51c) */
/* WARNING: Removing unreachable block (ram,0x000100edf520) */
/* WARNING: Removing unreachable block (ram,0x000100edf4cc) */
/* WARNING: Removing unreachable block (ram,0x000100edf470) */
/* WARNING: Removing unreachable block (ram,0x000100edf450) */
/* WARNING: Removing unreachable block (ram,0x000100edf424) */
/* WARNING: Removing unreachable block (ram,0x000100edf3fc) */
/* WARNING: Removing unreachable block (ram,0x000100edf3dc) */
/* WARNING: Removing unreachable block (ram,0x000100edf390) */
/* WARNING: Removing unreachable block (ram,0x000100edf370) */
/* WARNING: Removing unreachable block (ram,0x000100edf324) */
/* WARNING: Removing unreachable block (ram,0x000100edf304) */
/* WARNING: Removing unreachable block (ram,0x000100edf2b8) */
/* WARNING: Removing unreachable block (ram,0x000100edf298) */
/* WARNING: Removing unreachable block (ram,0x000100edf1d0) */
/* WARNING: Removing unreachable block (ram,0x000100edf194) */
/* WARNING: Removing unreachable block (ram,0x000100edf174) */
/* WARNING: Removing unreachable block (ram,0x000100edf148) */
/* WARNING: Removing unreachable block (ram,0x000100edf120) */
/* WARNING: Removing unreachable block (ram,0x000100edf100) */
/* WARNING: Removing unreachable block (ram,0x000100edf0d0) */
/* WARNING: Removing unreachable block (ram,0x000100edf0a8) */
/* WARNING: Removing unreachable block (ram,0x000100edf074) */
/* WARNING: Removing unreachable block (ram,0x000100edf028) */
/* WARNING: Removing unreachable block (ram,0x000100edf014) */
/* WARNING: Removing unreachable block (ram,0x000100edefb4) */
/* WARNING: Removing unreachable block (ram,0x000100edfab0) */
/* WARNING: Removing unreachable block (ram,0x000100edefe4) */
/* WARNING: Removing unreachable block (ram,0x000100edef90) */
/* WARNING: Removing unreachable block (ram,0x000100edef40) */
/* WARNING: Removing unreachable block (ram,0x000100edfaac) */
/* WARNING: Removing unreachable block (ram,0x000100edef78) */
/* WARNING: Removing unreachable block (ram,0x000100edeed4) */
/* WARNING: Removing unreachable block (ram,0x000100edee74) */
/* WARNING: Removing unreachable block (ram,0x000100edee54) */
/* WARNING: Removing unreachable block (ram,0x000100ededf0) */
/* WARNING: Removing unreachable block (ram,0x000100edfaa8) */
/* WARNING: Removing unreachable block (ram,0x000100edee28) */
/* WARNING: Removing unreachable block (ram,0x000100ededd0) */
/* WARNING: Removing unreachable block (ram,0x000100eded7c) */
/* WARNING: Removing unreachable block (ram,0x000100edfaa4) */
/* WARNING: Removing unreachable block (ram,0x000100ededb0) */
/* WARNING: Removing unreachable block (ram,0x000100edec98) */
/* WARNING: Removing unreachable block (ram,0x000100edecc0) */
/* WARNING: Removing unreachable block (ram,0x000100edfa64) */
/* WARNING: Removing unreachable block (ram,0x000100edfa6c) */
/* WARNING: Removing unreachable block (ram,0x000100edecdc) */
/* WARNING: Removing unreachable block (ram,0x000100edec64) */
/* WARNING: Removing unreachable block (ram,0x000100edfa74) */

void FUN_100edec00(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c610f8(PTR__OBJC_CLASS___UILayoutGuide_1126af090);
  func_0x000107c453e4();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d72c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100edfaa4);
  (*pcVar1)();
}



/* Entry: 100edfab8; end: 100edfadf; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController viewDidLoad] */

void FUN_100edfab8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100edeb24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100edfae0; end: 100edfbcb; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edfae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  puVar4 = (undefined1 *)((long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_50,puVar1,param_3);
  if (*(char *)(param_1 + _DAT_112d48ee8) == '\x01') {
    *puVar4 = 0;
    func_0x000107c6159c(puVar4,lVar3,2);
    func_0x0001002a64a8(puVar4);
    FUN_100ee029c(puVar4);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100edfbcc; end: 100edfc5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edfbcc(uint param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  if (*(char *)(unaff_x20 + _DAT_112d48eb8) == '\x01') {
    if (*(char *)(unaff_x20 + _DAT_112d48ec8) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + _DAT_112d48e88);
    }
    else {
      lVar1 = *(long *)(unaff_x20 + _DAT_112d48e90);
    }
    if (lVar1 != 0) {
      func_0x000107c3e738();
    }
  }
  return;
}



/* Entry: 100edfc60; end: 100edfc8f; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController viewDidAppear:] */

void FUN_100edfc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_100edfbcc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100edfc90; end: 100edfd9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100edfc90(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d48ea8);
  if (lVar4 != 0) {
    FUN_100ee29e8(0,0x112d48f00,&PTR_PTR_1126af0a0);
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    uVar2 = param_1;
    func_0x000107c60118(param_1,lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    if ((uVar2 & 1) != 0) {
      func_0x000107c6159c(puVar3,lVar1,8);
      func_0x0001002a64a8(puVar3);
      FUN_100ee029c(puVar3);
    }
  }
  return 1;
}



/* Entry: 100edfda0; end: 100edfdf7; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController textFieldShouldBeginEditing:] */

undefined8 FUN_100edfda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100edfc90(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 100edfdf8; end: 100edffa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edfdf8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long *plVar4;
  long extraout_x12;
  long unaff_x20;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar5 = (long *)(&stack0xffffffffffffffb0 + lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar4 = (long *)((long)plVar5 - extraout_x12);
  if (*(char *)(unaff_x20 + _DAT_112d48ec8) != '\x01') {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d48e90);
    lVar6 = param_2;
    if (lVar3 == 0) {
LAB_100edff18:
      lVar8 = 0;
      param_2 = -0x2000000000000000;
    }
    else {
      func_0x000107c5c850();
      func_0x000107c61180();
      lVar6 = param_2;
      if (lVar3 == 0) goto LAB_100edff18;
      lVar8 = lVar3;
      func_0x000107c5faec();
      lVar6 = param_2;
      func_0x000107c61170(lVar3);
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112d48e98);
    if (lVar3 == 0) {
LAB_100edff5c:
      lVar7 = 0;
      lVar6 = 0;
    }
    else {
      func_0x000107c5c850();
      func_0x000107c61180();
      if (lVar3 == 0) goto LAB_100edff5c;
      lVar7 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    *plVar5 = lVar8;
    *(long *)(&stack0xffffffffffffffb8 + lVar2) = param_2;
    *(long *)(&stack0xffffffffffffffc0 + lVar2) = lVar7;
    *(long *)(&stack0xffffffffffffffc8 + lVar2) = lVar6;
    goto LAB_100edff6c;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d48e88);
  if (lVar2 == 0) {
LAB_100edff04:
    lVar6 = 0;
    param_2 = -0x2000000000000000;
  }
  else {
    func_0x000107c5c850();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_100edff04;
    lVar6 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  *plVar4 = lVar6;
  plVar4[1] = param_2;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar5 = plVar4;
LAB_100edff6c:
  func_0x000107c6159c(plVar5,lVar1,0);
  func_0x0001002a64a8(plVar5);
  FUN_100ee029c(plVar5);
  return;
}



/* Entry: 100edffa8; end: 100ee012f; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController textFieldDidChange:] */

/* WARNING: Possible PIC construction at 0x000100ee0028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee002c) */
/* WARNING: Removing unreachable block (ram,0x000100ee0030) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edffa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d48ea8);
  if (lVar1 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    FUN_100edfdf8();
    func_0x000107c61170(param_3);
  }
  else {
    FUN_100ee29e8(0,0x112d48f00,&PTR_PTR_1126af0a0);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar1);
    func_0x000107c60118(param_3,lVar1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ee0130; end: 100ee0187; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController textFieldShouldReturn:] */

undefined8 FUN_100ee0130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100ee006c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 100ee0188; end: 100ee018f; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee0188(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100ee029c(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ee0190; end: 100ee0197; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee0190(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100ee029c(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ee0198; end: 100ee0237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee0198(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100ee029c(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ee0238; end: 100ee0293;  */

void FUN_100ee0238(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100ee02d8(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}


