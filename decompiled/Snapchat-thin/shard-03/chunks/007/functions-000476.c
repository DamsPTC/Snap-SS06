/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bda068; end: 102bda2d3;  */

void FUN_102bda068(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102bdde90(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102bd7228(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bda150);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bda154);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bda14c);
  (*pcVar1)();
}



/* Entry: 102bda2d4; end: 102bda997;  */

void FUN_102bda2d4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  if (param_1 == 0) {
LAB_102bda458:
    (*param_5)(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar4 == 0) goto LAB_102bda458;
  }
  else {
    uVar4 = param_1;
    if (-1 < (long)param_1) {
      uVar4 = param_1 & 0xffffffffffffff8;
    }
    uVar5 = uVar4;
    func_0x000107c60480();
    if (uVar5 == 0) goto LAB_102bda458;
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar4 == 0) goto LAB_102bda3f8;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102bd707c(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bda48c);
    (*pcVar1)();
  }
  uVar5 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar2 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = uVar5;
      FUN_102bdd458(uVar5,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
    }
    uVar3 = param_4;
    func_0x000102bda48c(param_4,uVar2);
    func_0x000107c61170(uVar2);
    uVar2 = *(ulong *)(puVar6 + 0x10);
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
      func_0x000102bd707c(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
    }
    uVar5 = uVar5 + 1;
    *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puVar6 + uVar2 * 8 + 0x20) = uVar3;
  } while (uVar4 != uVar5);
LAB_102bda3f8:
  (*param_5)(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar6);
  return;
}



/* Entry: 102bda998; end: 102bdaac7;  */

void FUN_102bda998(ulong param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    (*param_4)();
  }
  else {
    uVar3 = 0;
    if (param_1 != 0) {
      uVar4 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar2 = *(ulong *)(uVar4 + 0x10);
      }
      else {
        uVar2 = param_1;
        if (-1 < (long)param_1) {
          uVar2 = uVar4;
        }
        func_0x000107c60480();
      }
      if (uVar2 == 0) {
        uVar3 = 0;
      }
      else if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdaac8);
          (*pcVar1)();
        }
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = 0;
        FUN_102bdd458(0,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
      }
    }
    FUN_102bdaac8(param_6,uVar3);
    func_0x000107c61170(uVar3);
    uVar3 = param_6;
    func_0x000107c61174(param_6);
    (*param_4)(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102bdaac8; end: 102bdb05b;  */

undefined * FUN_102bdaac8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR_PTR_1126ac0b8;
  puVar8 = param_2;
  func_0x000107c610f8(PTR_PTR_1126ac0b8);
  func_0x000107c453e4();
  puVar2 = param_1;
  func_0x000107c40564();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar8);
  }
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000108f5983c();
  func_0x000107c61180();
  func_0x000107c59a8c(puVar1);
  func_0x000107c61170(puVar2);
  uVar6 = 0x112d38c88;
  FUN_102bdfc8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = 1;
  func_0x000107c6010c(1);
  func_0x000107c591ec(puVar1);
  func_0x000107c61170(uVar3);
  if (param_2 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar2 = param_2;
    func_0x000107c3e9e8();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar8 = PTR_PTR_1126b28e0;
      func_0x000107c610f8(PTR_PTR_1126b28e0);
      func_0x000107c453e4();
      puVar4 = puVar2;
      func_0x000107c3e978(puVar2);
      func_0x000107c61180();
      func_0x000107c52ae0(puVar8);
      func_0x000107c61170(puVar4);
      puVar4 = puVar2;
      func_0x000107c3ea10(puVar2);
      func_0x000107c61180();
      func_0x000107c58c30(puVar8);
      func_0x000107c61170(puVar4);
      puVar4 = puVar2;
      func_0x000107c3ea1c(puVar2);
      func_0x000107c61180();
      func_0x000107c58e54(puVar8);
      func_0x000107c61170(puVar4);
      puVar4 = puVar2;
      func_0x000107c3e984(puVar2);
      func_0x000107c61180();
      func_0x000107c52b64(puVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c59788(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar8);
    }
    puVar2 = param_2;
    func_0x000107c5db08(param_2);
    func_0x000107c61180();
    func_0x000107c597a4(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = param_2;
    func_0x000107c5d984(param_2);
    func_0x000107c61180();
    func_0x000107c597a0(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = param_2;
    func_0x000107c42120(param_2);
    func_0x000107c61180();
    func_0x000107c5978c(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c59798(puVar1);
LAB_102bdad38:
    func_0x000107c61170(param_2);
    goto LAB_102bdaf8c;
  }
  puVar8 = param_1;
  func_0x000107c4ebf0();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    puVar2 = puVar8;
    func_0x000107c3e978();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x000107c5faec();
      uVar7 = (ulong)puVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar7 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        puVar4 = PTR_PTR_1126b28e0;
        func_0x000107c610f8(PTR_PTR_1126b28e0);
        func_0x000107c453e4();
        func_0x000107c6142c(uVar6);
        func_0x000107c52ae0(puVar4);
        func_0x000107c61170(puVar2);
        puVar2 = puVar8;
        func_0x000107c3ea1c(puVar8);
        func_0x000107c61180();
        func_0x000107c58e54(puVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c59788(puVar1);
        puVar2 = puVar8;
        func_0x000107c5d984(puVar8);
        func_0x000107c61180();
        func_0x000107c597a0(puVar1);
        func_0x000107c61170(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c59798(puVar1);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar4);
        goto LAB_102bdaf8c;
      }
      uVar7 = uVar6;
      func_0x000107c61170(puVar8);
      func_0x000107c6142c(uVar6);
      puVar8 = puVar2;
      uVar6 = uVar7;
    }
    func_0x000107c61170(puVar8);
  }
  param_2 = param_1;
  func_0x000107c4ebf0();
  func_0x000107c61180();
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x000107c4f3c0();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar8 = puVar2;
      func_0x000107c5faec();
      uVar7 = (ulong)puVar8 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar7 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c59798(puVar1);
        func_0x000107c6142c(uVar6);
        func_0x000107c61170(puVar8);
        func_0x000107c5979c(puVar1);
        goto LAB_102bdad38;
      }
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar6);
      param_2 = puVar2;
    }
    func_0x000107c61170(param_2);
  }
  puVar2 = param_1;
  func_0x000107c4ebf0();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
LAB_102bdaf50:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar2;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar8 == (undefined *)0x0) goto LAB_102bdaf50;
  }
  func_0x000107c597a0(puVar1);
  func_0x000107c61170(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59798(puVar1);
LAB_102bdaf8c:
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_1105ade30;
  func_0x000107c613fc(&UNK_1105ade30,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar8 = &UNK_1105ae088;
  func_0x000107c613fc(&UNK_1105ae088,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar2;
  *(undefined **)(puVar8 + 0x18) = param_1;
  uStack_60 = 0x102bdfb9c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105ae0a0;
  puStack_58 = puVar8;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar5);
  return puVar1;
}



/* Entry: 102bdb05c; end: 102bdb873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bdb05c(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar3 = PTR_PTR_1126ac0b8;
  func_0x000107c610f8(PTR_PTR_1126ac0b8);
  func_0x000107c453e4();
  puVar13 = param_1;
  func_0x000107c3f64c();
  puVar12 = param_1;
  func_0x000107c40564();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59e18(puVar3);
  func_0x000107c61170(puVar12);
  puVar12 = param_1;
  func_0x000107c4055c(param_1);
  func_0x000107c61180();
  func_0x000107c59a8c(puVar3);
  func_0x000107c61170(puVar12);
  uVar9 = 0x112d38c88;
  FUN_102bdfc8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = 1;
  func_0x000107c6010c(1);
  func_0x000107c591ec(puVar3);
  func_0x000107c61170(uVar4);
  if (puVar13 == (undefined *)0x2) {
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c59798(puVar3);
    func_0x000107c61170(puVar13);
    puVar13 = param_1;
    func_0x000107c4ebf0();
    func_0x000107c61180();
    if (puVar13 == (undefined *)0x0) {
LAB_102bdb1b4:
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = puVar13;
      func_0x000107c4f3c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      if (puVar12 == (undefined *)0x0) goto LAB_102bdb1b4;
    }
    func_0x000107c5979c(puVar3);
  }
  else {
    puVar12 = param_1;
    func_0x000107c40560();
    func_0x000107c61180();
    if (puVar12 == (undefined *)0x0) goto LAB_102bdb6e4;
    puVar5 = puVar12;
    func_0x000107c40530();
    iVar2 = (int)puVar5;
    puVar5 = puVar12;
    if (iVar2 < 2) {
      if (iVar2 == 0) goto LAB_102bdb6dc;
      if (iVar2 != 1) {
LAB_102bdb84c:
        FUN_102bd760c(0);
        puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,iVar2);
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdb874);
        (*pcVar1)();
      }
      func_0x000107c45034();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_102bdb6dc;
      puVar6 = puVar5;
      func_0x000107c3e214();
      func_0x000107c61180();
      if (puVar6 != (undefined *)0x0) {
        puVar14 = puVar6;
        func_0x000107c5b9c4();
        if ((int)puVar14 == 2) {
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          if (puVar13 == (undefined *)0x11) {
            func_0x000107c46ecc();
            func_0x000107c59798(puVar3);
            func_0x000107c61170(puVar14);
            puVar13 = puVar6;
            func_0x000107c4fe14();
            func_0x000107c61180();
            if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdb84c);
              (*pcVar1)();
            }
            puVar14 = puVar13;
            func_0x000107c5faec();
            func_0x000107c61170(puVar13);
            uVar10 = uVar9;
            FUN_102bde398(puVar14);
            uVar11 = uVar10;
            func_0x000107c6142c(uVar9);
            if (uVar10 == 0) {
              puVar13 = puVar6;
              func_0x000107c4fe14();
              func_0x000107c61180();
              if (puVar13 != (undefined *)0x0) {
                puVar14 = puVar13;
                func_0x000107c5faec();
                func_0x000107c61170(puVar13);
                uVar10 = uVar11;
                goto LAB_102bdb3c8;
              }
              puVar14 = (undefined *)0x0;
            }
            else {
LAB_102bdb3c8:
              func_0x000107c5fadc(puVar14,uVar10);
              func_0x000107c6142c(uVar10);
            }
            func_0x000107c5979c(puVar3);
            func_0x000107c61170(puVar14);
            uVar4 = 1;
          }
          else {
            func_0x000107c46ecc();
            func_0x000107c59798(puVar3);
            func_0x000107c61170(puVar14);
            puVar13 = puVar6;
            func_0x000107c4fe14(puVar6);
            func_0x000107c61180();
            func_0x000107c5979c(puVar3);
            func_0x000107c61170(puVar13);
            uVar4 = 0;
          }
          func_0x000107c6010c(uVar4);
          func_0x000107c55584(puVar3);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(puVar12);
          goto LAB_102bdb64c;
        }
        func_0x000107c61170(puVar5);
        puVar5 = puVar6;
      }
LAB_102bdb6d4:
      func_0x000107c61170(puVar5);
    }
    else if (iVar2 == 2) {
      puVar13 = puVar12;
      func_0x000107c3e950();
      func_0x000107c61180();
      if (puVar13 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c59798(puVar3);
        func_0x000107c61170(puVar5);
        puVar6 = PTR_PTR_1126b28e0;
        func_0x000107c610f8(PTR_PTR_1126b28e0);
        func_0x000107c453e4();
        puVar5 = puVar13;
        func_0x000107c3e544(puVar13);
        func_0x000107c61180();
        func_0x000107c52ae0(puVar6);
        func_0x000107c61170(puVar5);
        puVar5 = puVar13;
        func_0x000107c51d04(puVar13);
        func_0x000107c61180();
        func_0x000107c58e54(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61174(puVar6);
        func_0x000107c59788(puVar3);
        func_0x000107c61170(puVar13);
        puVar5 = puVar6;
LAB_102bdb6cc:
        func_0x000107c61170(puVar6);
        goto LAB_102bdb6d4;
      }
    }
    else if (iVar2 == 3) {
      func_0x000107c3daa8();
      func_0x000107c61180();
      if (puVar5 != (undefined *)0x0) {
        puVar14 = puVar5;
        func_0x000107c40500();
        func_0x000107c61180();
        if (puVar14 == (undefined *)0x0) goto LAB_102bdb6d4;
        puVar13 = puVar14;
        func_0x000107c5faec();
        uVar10 = (ulong)puVar13 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar10 = uVar9 >> 0x38 & 0xf;
        }
        if (uVar10 != 0) {
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar10 = uVar9;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ecc();
          func_0x000107c59798(puVar3);
          func_0x000107c6142c(uVar9);
          func_0x000107c61170(puVar13);
          func_0x000107c5979c(puVar3);
          func_0x000107c61170(puVar14);
          puVar13 = puVar5;
          func_0x000107c4271c();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar6 = puVar13;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar13);
            puVar13 = puVar6;
            func_0x000107c5ee20(puVar6,uVar10);
            func_0x00010006c090(puVar6,uVar10);
          }
          func_0x000107c59794(puVar3);
          func_0x000107c61170(puVar13);
          puVar13 = puVar5;
          func_0x000107c42718();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar6 = puVar13;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar13);
            puVar13 = puVar6;
            func_0x000107c5ee20(puVar6,uVar10);
            func_0x00010006c090(puVar6,uVar10);
          }
          func_0x000107c59790(puVar3);
          puVar6 = puVar5;
          puVar5 = puVar13;
          goto LAB_102bdb6cc;
        }
LAB_102bdb5b0:
        func_0x000107c61170(puVar5);
        func_0x000107c6142c(uVar9);
        puVar6 = puVar12;
        puVar5 = puVar14;
LAB_102bdb64c:
        func_0x000107c61170(puVar6);
        puVar12 = puVar5;
      }
    }
    else {
      if (iVar2 != 4) goto LAB_102bdb84c;
      puVar13 = param_1;
      func_0x000107c3f634();
      func_0x000107c61180();
      puVar5 = puVar13;
      func_0x000107c5b608();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      if (puVar5 != (undefined *)0x0) {
        puVar13 = puVar5;
        func_0x000107c446fc();
        if ((int)puVar13 != 0) {
          puVar13 = puVar5;
          func_0x000107c3dab0();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdb848);
            (*pcVar1)();
          }
          puVar14 = puVar13;
          func_0x000107c40500();
          func_0x000107c61180();
          func_0x000107c61170(puVar13);
          if (puVar14 != (undefined *)0x0) {
            puVar13 = puVar14;
            func_0x000107c5faec();
            uVar10 = (ulong)puVar13 & 0xffffffffffff;
            if ((uVar9 & 0x2000000000000000) != 0) {
              uVar10 = uVar9 >> 0x38 & 0xf;
            }
            if (uVar10 == 0) goto LAB_102bdb5b0;
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c46ecc();
            func_0x000107c59798(puVar3);
            func_0x000107c6142c(uVar9);
            func_0x000107c61170(puVar13);
            func_0x000107c5979c(puVar3);
            puVar6 = puVar5;
            puVar5 = puVar14;
            goto LAB_102bdb6cc;
          }
        }
        goto LAB_102bdb6d4;
      }
    }
  }
LAB_102bdb6dc:
  func_0x000107c61170(puVar12);
LAB_102bdb6e4:
  if (*(char *)(unaff_x20 + _DAT_112efdb28) == '\x01') {
    puVar13 = &UNK_1105ade30;
    func_0x000107c613fc(&UNK_1105ade30,0x18,7);
    func_0x000107c61614(puVar13 + 0x10);
    puVar12 = &UNK_1105ae038;
    func_0x000107c613fc(&UNK_1105ae038,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar13;
    *(undefined **)(puVar12 + 0x18) = param_1;
    uStack_70 = 0x102bdfd98;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105ae050;
    puStack_68 = puVar12;
    func_0x000107c60bc4(&puStack_90);
    puVar13 = puStack_68;
    func_0x000107c61174(param_1);
    ppuVar8 = ppuVar7;
  }
  else {
    puVar13 = &UNK_1105adfe8;
    func_0x000107c613fc(&UNK_1105adfe8,0x20,7);
    *(long *)(puVar13 + 0x10) = unaff_x20;
    *(undefined **)(puVar13 + 0x18) = param_1;
    uStack_70 = 0x102bdfd9c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105ae000;
    puStack_68 = puVar13;
    func_0x000107c60bc4(&puStack_90);
    puVar13 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
  }
  func_0x000107c61574(puVar13);
  func_0x000107c56ea0(puVar3);
  func_0x000107c60bd0(ppuVar8);
  return puVar3;
}



/* Entry: 102bdb874; end: 102bdbc77;  */

void FUN_102bdb874(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x000107c3f634(param_2);
    func_0x000107c61180();
    func_0x000107c3f64c(param_2);
    func_0x000102bdb954(uVar1,param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102bdbc78; end: 102bdbcef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdbc78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112efdac0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4204c();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102bdbcf0; end: 102bdbecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bdbcf0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  ppuVar6 = &puStack_70;
  puVar1 = PTR_PTR_1126ac0d0;
  func_0x000107c610f8(PTR_PTR_1126ac0d0);
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_102bdfc8c(0,0x112efdb68,&PTR_PTR_1126ac0c8);
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c58d94(puVar1);
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126ac0d8;
  func_0x000107c610f8(PTR_PTR_1126ac0d8);
  func_0x000107c453e4();
  if (*(char *)(unaff_x20 + _DAT_112efdb28) == '\x01') {
    puVar5 = &UNK_1105ade30;
    func_0x000107c613fc(&UNK_1105ade30,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_50 = (code *)0x102bdfb74;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105adee8;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    ppuVar6 = ppuVar4;
  }
  else {
    puVar5 = &UNK_1105adea8;
    func_0x000107c613fc(&UNK_1105adea8,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    pcStack_50 = FUN_102bdfb6c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105adec0;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174();
  }
  func_0x000107c61574(puVar5);
  func_0x000107c56ec0(puVar3);
  func_0x000107c60bd0(ppuVar6);
  puVar5 = PTR_PTR_1126ac0c0;
  func_0x000107c610f8(PTR_PTR_1126ac0c0);
  func_0x000107c49520();
  func_0x000107c5a050();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  return puVar5;
}



/* Entry: 102bdbed0; end: 102bdc09b;  */

void FUN_102bdbed0(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
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
    pcVar1 = "handleTapDoneButton()";
    func_0x0001000c10c0("handleTapDoneButton()");
    func_0x000107c61180();
    puVar2 = &UNK_1105ade30;
    func_0x000107c613fc(&UNK_1105ade30,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    uStack_58 = 0x102bdfdac;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105adf10;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 102bdc09c; end: 102bdc873;  */

/* WARNING: Possible PIC construction at 0x000102bdc158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdc4e8) */
/* WARNING: Removing unreachable block (ram,0x000102bdc494) */
/* WARNING: Removing unreachable block (ram,0x000102bdc440) */
/* WARNING: Removing unreachable block (ram,0x000102bdc3ec) */
/* WARNING: Removing unreachable block (ram,0x000102bdc398) */
/* WARNING: Removing unreachable block (ram,0x000102bdc26c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc24c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc1ec) */
/* WARNING: Removing unreachable block (ram,0x000102bdc560) */
/* WARNING: Removing unreachable block (ram,0x000102bdc220) */
/* WARNING: Removing unreachable block (ram,0x000102bdc1cc) */
/* WARNING: Removing unreachable block (ram,0x000102bdc17c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc55c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc1b0) */
/* WARNING: Removing unreachable block (ram,0x000102bdc15c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc530) */
/* WARNING: Removing unreachable block (ram,0x000102bdc538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdc09c(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  if ((param_2 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efdaa8);
    uVar2 = uVar4;
    func_0x000107c40478(uVar4);
    func_0x000107c61180();
    func_0x000107c438ec(uVar4);
    func_0x000107c61180();
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = 0x112d360b8;
    FUN_102bdd8ac(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 0xb;
    *(undefined8 *)(lVar3 + 0x10) = 5;
    func_0x000107c5cbe4(param_1);
    func_0x000107c61180();
    func_0x000107c5cbe4(uVar2);
    func_0x000107c61180();
    func_0x000107c40284(0x4038000000000000,param_1);
    func_0x000107c61180();
  }
  else {
    lVar3 = 0x112d360b8;
    FUN_102bdd8ac(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 7;
    *(undefined8 *)(lVar3 + 0x10) = 3;
    func_0x000107c4acb0(param_1);
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdc55c);
      (*pcVar1)();
    }
    func_0x000107c4acb0();
    func_0x000107c61180();
    param_1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bdc874; end: 102bdce2b;  */

/* WARNING: Possible PIC construction at 0x000102bdc8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdc9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdca2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdca70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcb3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdccac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdcc10) */
/* WARNING: Removing unreachable block (ram,0x000102bdcbb8) */
/* WARNING: Removing unreachable block (ram,0x000102bdcab0) */
/* WARNING: Removing unreachable block (ram,0x000102bdcac8) */
/* WARNING: Removing unreachable block (ram,0x000102bdcacc) */
/* WARNING: Removing unreachable block (ram,0x000102bdcad0) */
/* WARNING: Removing unreachable block (ram,0x000102bdce08) */
/* WARNING: Removing unreachable block (ram,0x000102bdce10) */
/* WARNING: Removing unreachable block (ram,0x000102bdcad8) */
/* WARNING: Removing unreachable block (ram,0x000102bdcae0) */
/* WARNING: Removing unreachable block (ram,0x000102bdcb18) */
/* WARNING: Removing unreachable block (ram,0x000102bdcdc4) */
/* WARNING: Removing unreachable block (ram,0x000102bdcb2c) */
/* WARNING: Removing unreachable block (ram,0x000102bdca74) */
/* WARNING: Removing unreachable block (ram,0x000102bdc9b0) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd6c) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd74) */
/* WARNING: Removing unreachable block (ram,0x000102bdc9c4) */
/* WARNING: Removing unreachable block (ram,0x000102bdc9cc) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd80) */
/* WARNING: Removing unreachable block (ram,0x000102bdca1c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc974) */
/* WARNING: Removing unreachable block (ram,0x000102bdc8dc) */
/* WARNING: Removing unreachable block (ram,0x000102bdc8e0) */
/* WARNING: Removing unreachable block (ram,0x000102bdcc2c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc900) */
/* WARNING: Removing unreachable block (ram,0x000102bdc924) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd40) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd48) */
/* WARNING: Removing unreachable block (ram,0x000102bdc92c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc934) */
/* WARNING: Removing unreachable block (ram,0x000102bdca30) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd54) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd5c) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd68) */
/* WARNING: Removing unreachable block (ram,0x000102bdca38) */
/* WARNING: Removing unreachable block (ram,0x000102bdcb40) */
/* WARNING: Removing unreachable block (ram,0x000102bdcb88) */
/* WARNING: Removing unreachable block (ram,0x000102bdcc50) */
/* WARNING: Removing unreachable block (ram,0x000102bdce28) */
/* WARNING: Removing unreachable block (ram,0x000102bdcc90) */
/* WARNING: Removing unreachable block (ram,0x000102bdcb90) */
/* WARNING: Removing unreachable block (ram,0x000102bdce24) */
/* WARNING: Removing unreachable block (ram,0x000102bdcba4) */
/* WARNING: Removing unreachable block (ram,0x000102bdcb70) */
/* WARNING: Removing unreachable block (ram,0x000102bdca44) */
/* WARNING: Removing unreachable block (ram,0x000102bdce20) */
/* WARNING: Removing unreachable block (ram,0x000102bdca54) */
/* WARNING: Removing unreachable block (ram,0x000102bdc944) */
/* WARNING: Removing unreachable block (ram,0x000102bdce1c) */
/* WARNING: Removing unreachable block (ram,0x000102bdc954) */
/* WARNING: Removing unreachable block (ram,0x000102bdc914) */
/* WARNING: Removing unreachable block (ram,0x000102bdccb0) */
/* WARNING: Removing unreachable block (ram,0x000102bdcd18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdc874(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000102bdc564();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112efdaf8);
  func_0x000107c5dbd4(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102bdce2c; end: 102bdce87; -[SCContextHeroContextMenuViewController initWithNibName:bundle:] */

void FUN_102bdce2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextHeroContextMenuScopeImplementation.ContextHeroContextMenuViewController"
                      ,0x4e,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdce58);
  (*pcVar1)();
}



/* Entry: 102bdce88; end: 102bdcf8f; -[SCContextHeroContextMenuViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bdcea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcf14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcf34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdcf64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdcf38) */
/* WARNING: Removing unreachable block (ram,0x000102bdcf18) */
/* WARNING: Removing unreachable block (ram,0x000102bdcee8) */
/* WARNING: Removing unreachable block (ram,0x000102bdcec8) */
/* WARNING: Removing unreachable block (ram,0x000102bdcea8) */
/* WARNING: Removing unreachable block (ram,0x000102bdcf68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdce88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efdaa8));
  return;
}



/* Entry: 102bdcf90; end: 102bdd00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdcf90(double param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c40468();
  func_0x000107c404a0(param_3);
  if (param_2 < -50.0 - param_1) {
    lVar1 = unaff_x20 + _DAT_112efdac0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4204c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102bdd00c; end: 102bdd05b; -[SCContextHeroContextMenuViewController scrollViewDidScroll:] */

/* WARNING: Possible PIC construction at 0x000102bdd044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdd048) */

void FUN_102bdd00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102bdcf90(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102bdd05c; end: 102bdd05f; -[SCContextHeroContextMenuViewController scrollViewWillBeginDragging:] */

void FUN_102bdd05c(void)

{
  return;
}



/* Entry: 102bdd060; end: 102bdd0af; -[SCContextHeroContextMenuViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Possible PIC construction at 0x000102bdd098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdd09c) */

void FUN_102bdd060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102bdfaac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102bdd0b0; end: 102bdd12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdd0b0(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112efdaa8);
  func_0x000107c4b8b8(param_3,param_4,uVar2);
  func_0x000107c40468(uVar2);
  if (param_2 < param_1) {
    lVar1 = unaff_x20 + _DAT_112efdac0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4204c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102bdd12c; end: 102bdd17b; -[SCContextHeroContextMenuViewController handleTopAreaTap:] */

/* WARNING: Possible PIC construction at 0x000102bdd164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdd168) */

void FUN_102bdd12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102bdd0b0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102bdd17c; end: 102bdd3df;  */

/* WARNING: Possible PIC construction at 0x000102bdd1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdd218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdd284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdd31c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdd288) */
/* WARNING: Removing unreachable block (ram,0x000102bdd294) */
/* WARNING: Removing unreachable block (ram,0x000102bdd21c) */
/* WARNING: Removing unreachable block (ram,0x000102bdd398) */
/* WARNING: Removing unreachable block (ram,0x000102bdd3a0) */
/* WARNING: Removing unreachable block (ram,0x000102bdd224) */
/* WARNING: Removing unreachable block (ram,0x000102bdd3b0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102bdd230) */
/* WARNING: Removing unreachable block (ram,0x000102bdd240) */
/* WARNING: Removing unreachable block (ram,0x000102bdd298) */
/* WARNING: Removing unreachable block (ram,0x000102bdd244) */
/* WARNING: Removing unreachable block (ram,0x000102bdd394) */
/* WARNING: Removing unreachable block (ram,0x000102bdd250) */
/* WARNING: Removing unreachable block (ram,0x000102bdd25c) */
/* WARNING: Removing unreachable block (ram,0x000102bdd390) */
/* WARNING: Removing unreachable block (ram,0x000102bdd268) */
/* WARNING: Removing unreachable block (ram,0x000102bdd2b8) */
/* WARNING: Removing unreachable block (ram,0x000102bdd280) */
/* WARNING: Removing unreachable block (ram,0x000102bdd1ec) */
/* WARNING: Removing unreachable block (ram,0x000102bdd320) */
/* WARNING: Removing unreachable block (ram,0x000102bdd334) */
/* WARNING: Removing unreachable block (ram,0x000102bdd338) */
/* WARNING: Removing unreachable block (ram,0x000102bdd33c) */
/* WARNING: Removing unreachable block (ram,0x000102bdd350) */
/* WARNING: Removing unreachable block (ram,0x000102bdd364) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdd17c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c4b8b8(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_112efdaa8));
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5c3b0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdd3e0);
  (*pcVar1)();
}



/* Entry: 102bdd3e0; end: 102bdd42f; -[SCContextHeroContextMenuViewController handleScrollViewTapForStickToBottom:] */

/* WARNING: Possible PIC construction at 0x000102bdd418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdd41c) */

void FUN_102bdd3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102bdd17c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102bdd430; end: 102bdd457;  */

ulong FUN_102bdd430(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd53c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd540);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c9508;
    func_0x000107c61168(PTR_PTR_1126c9508);
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
    puVar4 = PTR_PTR_1126c9508;
    func_0x000107c61168(PTR_PTR_1126c9508);
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
  FUN_102bdfc8c(0,0x112efd9b8,&PTR_PTR_1126c9508);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd614);
  (*pcVar2)();
}



/* Entry: 102bdd458; end: 102bdd613;  */

ulong FUN_102bdd458(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd53c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd540);
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
  FUN_102bdfc8c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd614);
  (*pcVar2)();
}



/* Entry: 102bdd614; end: 102bdd7af;  */

ulong FUN_102bdd614(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd6e4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd6e8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044cb8c4(0);
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
    func_0x0001044cb8c4(0);
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
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f0fd2b0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bdd7b0);
  (*pcVar2)();
}



/* Entry: 102bdd7b0; end: 102bdd7d3;  */

undefined * FUN_102bdd7b0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0x112efd9b8;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102bdd8ac(0x112efd9b8,&PTR_PTR_1126c9508,0x112efdb80,&UNK_10db2ffd8);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    puVar3 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar3 = puVar2 + -0x20;
    }
    *(long *)(puVar1 + 0x10) = param_1;
    *(ulong *)(puVar1 + 0x18) = ((long)puVar3 >> 3) << 1 | 1;
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 102bdd7d4; end: 102bdd863;  */

undefined *
FUN_102bdd7d4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102bdd8ac(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 102bdd864; end: 102bdd8ab;  */

void FUN_102bdd864(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112efdb80;
  plVar5 = (long *)&UNK_10db2ffd8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102bdfc8c(0,0x112efd9b8,&PTR_PTR_1126c9508);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102bdd8ac; end: 102bdd923;  */

void FUN_102bdd8ac(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102bdfc8c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102bdd924; end: 102bdd9b3;  */

void FUN_102bdd924(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_102bddafc(0,uVar1 + 1,1,uVar3,0x112efd9c0,&PTR_PTR_1126ac0b8,0x112efdb88,&UNK_10db2ffe0);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102bdd9b4; end: 102bddafb;  */

ulong FUN_102bdd9b4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bddafc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
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
  FUN_102bdd7d4(uVar2,uVar4,0x112efd9b8,&PTR_PTR_1126c9508,0x112efdb80,&UNK_10db2ffd8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bddaf8);
      (*pcVar1)();
    }
    FUN_102bddc5c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102bddafc; end: 102bddc5b;  */

ulong FUN_102bddafc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bddc5c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
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
  FUN_102bdd7d4(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bddc58);
      (*pcVar1)();
    }
    FUN_102bddd74(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102bddc5c; end: 102bddd73;  */

long FUN_102bddc5c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bddd70);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bddd74);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102bdfc8c(0,0x112efd9b8,&PTR_PTR_1126c9508);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102bdfc8c(0,0x112efd9b8,&PTR_PTR_1126c9508);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102bddd6c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102bddd74; end: 102bdde8f;  */

long FUN_102bddd74(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bdde8c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bdde90);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102bdfc8c(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102bdfc8c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102bdde88);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102bdde90; end: 102bddf5f;  */

void FUN_102bdde90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_102bddafc();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102bddf60; end: 102bde1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bddf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112efdaa8;
  puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112efdab0;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112efdab8;
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112efdac0;
  func_0x000107c61614(unaff_x20 + _DAT_112efdac0,0);
  lVar2 = _DAT_112efdac8;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112efdad0;
  func_0x000107c61614(unaff_x20 + _DAT_112efdad0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112efdad8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112efdae0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efdae8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efdaf0) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112efdaf8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb10) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb18) = param_6;
  func_0x000107c61604(unaff_x20 + lVar2,param_7);
  *(long *)(unaff_x20 + _DAT_112efdb20) = param_8;
  if (param_8 == 0) {
    func_0x000107c615f0(param_6);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c61174();
  }
  else {
    func_0x000107c615f0(param_6);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_8 != 0) {
      if (lRam0000000112efdb30 != -1) {
        func_0x000107c61568(0x112efdb30,FUN_102bd8564);
      }
      func_0x000107c3ebc0();
      uVar3 = (undefined1)param_8;
      func_0x000107c615e8();
      goto LAB_102bde180;
    }
  }
  uVar3 = 0;
LAB_102bde180:
  *(undefined1 *)(unaff_x20 + _DAT_112efdb28) = uVar3;
  FUN_102bde1f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 102bde1f0; end: 102bde20f;  */

void FUN_102bde1f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128953e0);
  return;
}



/* Entry: 102bde210; end: 102bde23b;  */

void FUN_102bde210(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1105ae3f8;
    func_0x000107c613fc(&UNK_1105ae3f8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    puVar3 = &UNK_1105ae420;
    func_0x000107c613fc(&UNK_1105ae420,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x102bdfcd8;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    pcStack_68 = FUN_102bdfce0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x102bd8ca8;
    puStack_70 = &UNK_1105ae438;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_60;
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102bde23c; end: 102bde397;  */

undefined8 FUN_102bde23c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102bde398; end: 102bde553;  */

undefined1  [16] FUN_102bde398(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xd000000000000011;
  uVar4 = param_2;
  func_0x000107c5fbb4(0xd000000000000011,0x800000010f0fd240,param_1,param_2);
  lStack_70 = 0;
  puStack_68 = (undefined *)0x0;
  if ((uVar2 & 1) != 0) {
    func_0x000107c61434(param_2,0);
    lVar3 = -0x2fffffffffffffef;
    func_0x000107c5fb5c(0xd000000000000011,0x800000010f0fd240);
    uVar7 = param_2;
    func_0x0001011a7878();
    func_0x000107c6142c(param_2);
    func_0x000107c5fb2c(lVar3,param_1,uVar7,uVar4);
    func_0x000107c6142c(uVar4);
    lStack_70 = lVar3;
    puStack_68 = param_1;
    func_0x000107c5eb78(lVar8);
    func_0x000100e8b654();
    lVar5 = lVar8;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c60200(lVar8,PTR___sSSN_11034da80,uVar4);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c6142c(param_1);
      param_1 = puVar6;
      lVar3 = lVar5;
    }
    lStack_70 = 0;
    puStack_68 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x45);
    func_0x000107c5fb78(0xd000000000000043,0x800000010f0fd260);
    func_0x000107c5fb78(lVar3,param_1);
    func_0x000107c6142c(param_1);
  }
  auVar10._8_8_ = puStack_68;
  auVar10._0_8_ = lStack_70;
  return auVar10;
}



/* Entry: 102bde554; end: 102bdfaab;  */

/* WARNING: Possible PIC construction at 0x000102bde7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdea6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdf608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdfa58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdf614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdfa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdf224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdf2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdfa7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdf258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bdfa14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bdf25c) */
/* WARNING: Removing unreachable block (ram,0x000102bdfa80) */
/* WARNING: Removing unreachable block (ram,0x000102bdf2b0) */
/* WARNING: Removing unreachable block (ram,0x000102bdf228) */
/* WARNING: Removing unreachable block (ram,0x000102bdfa9c) */
/* WARNING: Removing unreachable block (ram,0x000102bdfa5c) */
/* WARNING: Removing unreachable block (ram,0x000102bdf60c) */
/* WARNING: Removing unreachable block (ram,0x000102bdf3e8) */
/* WARNING: Removing unreachable block (ram,0x000102bdf610) */
/* WARNING: Removing unreachable block (ram,0x000102bdf618) */
/* WARNING: Removing unreachable block (ram,0x000102bdea70) */
/* WARNING: Removing unreachable block (ram,0x000102bdea7c) */
/* WARNING: Removing unreachable block (ram,0x000102bdea84) */
/* WARNING: Removing unreachable block (ram,0x000102bdea04) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb5c) */
/* WARNING: Removing unreachable block (ram,0x000102bdeab4) */
/* WARNING: Removing unreachable block (ram,0x000102bdead8) */
/* WARNING: Removing unreachable block (ram,0x000102bdeaf4) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb10) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb3c) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb20) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb38) */
/* WARNING: Removing unreachable block (ram,0x000102bde7c8) */
/* WARNING: Removing unreachable block (ram,0x000102bde7d4) */
/* WARNING: Removing unreachable block (ram,0x000102bde840) */
/* WARNING: Removing unreachable block (ram,0x000102bde870) */
/* WARNING: Removing unreachable block (ram,0x000102bde7dc) */
/* WARNING: Removing unreachable block (ram,0x000102bde7ec) */
/* WARNING: Removing unreachable block (ram,0x000102bde80c) */
/* WARNING: Removing unreachable block (ram,0x000102bde874) */
/* WARNING: Removing unreachable block (ram,0x000102bde894) */
/* WARNING: Removing unreachable block (ram,0x000102bde898) */
/* WARNING: Removing unreachable block (ram,0x000102bde89c) */
/* WARNING: Removing unreachable block (ram,0x000102bde99c) */
/* WARNING: Removing unreachable block (ram,0x000102bde9a4) */
/* WARNING: Removing unreachable block (ram,0x000102bde8a4) */
/* WARNING: Removing unreachable block (ram,0x000102bde8ac) */
/* WARNING: Removing unreachable block (ram,0x000102bde8ec) */
/* WARNING: Removing unreachable block (ram,0x000102bde900) */
/* WARNING: Removing unreachable block (ram,0x000102bde814) */
/* WARNING: Removing unreachable block (ram,0x000102bde834) */
/* WARNING: Removing unreachable block (ram,0x000102bde838) */
/* WARNING: Removing unreachable block (ram,0x000102bde83c) */
/* WARNING: Removing unreachable block (ram,0x000102bde6e0) */
/* WARNING: Removing unreachable block (ram,0x000102bde988) */
/* WARNING: Removing unreachable block (ram,0x000102bde990) */
/* WARNING: Removing unreachable block (ram,0x000102bde6e8) */
/* WARNING: Removing unreachable block (ram,0x000102bde6f0) */
/* WARNING: Removing unreachable block (ram,0x000102bde730) */
/* WARNING: Removing unreachable block (ram,0x000102bde940) */
/* WARNING: Removing unreachable block (ram,0x000102bde97c) */
/* WARNING: Removing unreachable block (ram,0x000102bde744) */
/* WARNING: Removing unreachable block (ram,0x000102bde750) */
/* WARNING: Removing unreachable block (ram,0x000102bde758) */
/* WARNING: Removing unreachable block (ram,0x000102bdfa18) */
/* WARNING: Removing unreachable block (ram,0x000102bdf784) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb7c) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb88) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb90) */
/* WARNING: Removing unreachable block (ram,0x000102bdebe0) */
/* WARNING: Removing unreachable block (ram,0x000102bdeb94) */
/* WARNING: Removing unreachable block (ram,0x000102bdf790) */
/* WARNING: Removing unreachable block (ram,0x000102bdeba0) */
/* WARNING: Removing unreachable block (ram,0x000102bdebac) */
/* WARNING: Removing unreachable block (ram,0x000102bdf78c) */
/* WARNING: Removing unreachable block (ram,0x000102bdebb8) */
/* WARNING: Removing unreachable block (ram,0x000102bdebfc) */
/* WARNING: Removing unreachable block (ram,0x000102bdec10) */
/* WARNING: Removing unreachable block (ram,0x000102bdec2c) */
/* WARNING: Removing unreachable block (ram,0x000102bdec58) */
/* WARNING: Removing unreachable block (ram,0x000102bdec3c) */
/* WARNING: Removing unreachable block (ram,0x000102bdec54) */
/* WARNING: Removing unreachable block (ram,0x000102bdebc8) */
/* WARNING: Removing unreachable block (ram,0x000102bdebdc) */
/* WARNING: Removing unreachable block (ram,0x000102bde9ec) */
/* WARNING: Removing unreachable block (ram,0x000102bdeab8) */
/* WARNING: Removing unreachable block (ram,0x000102bdea1c) */
/* WARNING: Removing unreachable block (ram,0x000102bdf788) */
/* WARNING: Removing unreachable block (ram,0x000102bdea28) */
/* WARNING: Removing unreachable block (ram,0x000102bdea34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bde554(ulong param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  ulong *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  ulong *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  lStack_c8 = param_2;
  func_0x000107c5f7fc();
  lStack_178 = *(long *)(lVar2 + -8);
  lStack_170 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_178 + 0x40));
  lVar12 = (long)&puStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_180 = lVar12;
  func_0x000107c5f824();
  lStack_190 = *(long *)(lVar2 + -8);
  lStack_188 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_190 + 0x40));
  lStack_198 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar21 = &UNK_1105ae178;
  func_0x000107c613fc(&UNK_1105ae178,0x20,7);
  *(undefined8 *)(puVar21 + 0x10) = param_3;
  *(undefined **)(puVar21 + 0x18) = param_4;
  puVar13 = &UNK_1105ae1a0;
  puVar3 = puVar13;
  puStack_168 = puVar21;
  puStack_148 = param_4;
  uStack_140 = param_3;
  func_0x000107c613fc(&UNK_1105ae1a0,0x18,7);
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f0 = (ulong *)(puVar3 + 0x10);
  *puStack_f0 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_c0 = puVar3;
  func_0x000107c613fc(&UNK_1105ae1a0,0x18,7);
  puStack_d0 = (ulong *)(puVar13 + 0x10);
  *puStack_d0 = (ulong)puVar21;
  puStack_d8 = puVar13;
  if (param_1 >> 0x3e == 0) {
    uVar24 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar24 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar24 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar24 != 0) {
    if ((long)uVar24 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdf9a0);
      (*pcVar1)();
    }
    func_0x000107c6157c(uStack_140);
    func_0x000107c61434(puStack_148);
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar4);
    }
    else {
      uVar4 = 0;
      FUN_102bdd458(0,param_1,&PTR_PTR_1126c9508,0x112efd9b8);
    }
    func_0x000107c40564();
    func_0x000107c61180();
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  func_0x000107c6157c(uStack_140);
  puVar13 = puStack_148;
  func_0x000107c61434();
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((long)PTR___swiftEmptyArrayStorage_11034f1c8 < 0) ||
     (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e & 1) != 0)) {
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c60480();
    puVar3 = puVar13;
  }
  else {
    puVar3 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  }
  puVar25 = puStack_d8;
  if (puVar3 == (undefined *)0x0) {
    uVar24 = (ulong)puStack_e8 & 0x4000000000000000;
    if (((long)puStack_e8 < 0) || (uVar24 != 0)) {
      puVar13 = puStack_e8;
      func_0x000107c60480();
    }
    else {
      puVar13 = *(undefined **)(puStack_e8 + 0x10);
    }
    if (puVar13 == (undefined *)0x0) {
      func_0x000107c61574(puVar21);
      func_0x000107c61574(puStack_e8);
      puVar21 = puStack_c0;
      uVar4 = *(undefined8 *)(puStack_c0 + 0x10);
      uVar22 = *(undefined8 *)(puVar25 + 0x10);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar22);
      FUN_102bd8d5c(uVar4,uVar22,uStack_140,puStack_148);
      func_0x000107c61574(puStack_168);
      func_0x000107c61574(puVar21);
      func_0x000107c61574(puVar25);
      goto code_r0x000107c6142c;
    }
    func_0x000107c60f34();
    puStack_b8 = puVar13;
    func_0x000107c61574(puVar21);
    puVar21 = puStack_e8;
  }
  else {
    func_0x000107c60f34();
    uVar24 = 0;
    lStack_120 = *(long *)(lStack_c8 + _DAT_112efdb08);
    lStack_100 = _DAT_112efdb00;
    uStack_e0 = (ulong)puVar21 & 0xc000000000000001;
    uStack_158 = 2;
    uStack_160 = 1;
    puStack_110 = puVar13;
    puStack_108 = puVar3;
    do {
      if (uStack_e0 == 0) {
        if (*(ulong *)(puVar21 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdf7a0);
          (*pcVar1)();
        }
        uVar14 = *(ulong *)(puVar21 + uVar24 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar14 = uVar24;
        FUN_102bdd458(uVar24,puVar21,&PTR_PTR_1126c9508,0x112efd9b8);
      }
      puVar15 = (undefined *)(uVar24 + 1);
      if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdf798);
        (*pcVar1)();
      }
      func_0x000107c60f38(puVar13);
      puVar5 = &UNK_1105ae1c8;
      func_0x000107c613fc(&UNK_1105ae1c8,0x30,7);
      *(ulong *)(puVar5 + 0x10) = uVar14;
      *(undefined **)(puVar5 + 0x18) = puStack_c0;
      *(undefined **)(puVar5 + 0x20) = puVar25;
      *(undefined **)(puVar5 + 0x28) = puVar13;
      func_0x000107c61580(puStack_c0,2);
      uVar4 = 2;
      func_0x000107c61580(puVar25);
      puVar6 = puVar13;
      func_0x000107c61174();
      puStack_b8 = puVar6;
      func_0x000107c61174();
      uVar7 = uVar14;
      func_0x000107c3f64c();
      if (uVar7 == 4) {
        lVar2 = *(long *)(lStack_c8 + lStack_100);
        if (lVar2 == 0) goto LAB_102bdf2e4;
        func_0x000107c61174();
        lVar12 = lVar2;
        func_0x000107c5d8c4();
        func_0x000107c61180();
        lVar10 = lVar2;
        if (lVar12 == 0) {
LAB_102bdf2d4:
          puVar13 = puStack_110;
          func_0x000107c61170(lVar10);
          puVar3 = puStack_108;
          goto LAB_102bdf2e4;
        }
        lVar8 = lVar12;
        func_0x000107c44fdc();
        func_0x000107c61180();
        lVar10 = lVar12;
        if (lVar8 == 0) {
LAB_102bdf2c4:
          func_0x000107c61170(lVar2);
          puVar21 = puStack_f8;
          goto LAB_102bdf2d4;
        }
        lVar10 = lVar8;
        func_0x000108437e88();
        func_0x000107c61180();
        if (lVar10 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar12;
          lVar10 = lVar8;
          goto LAB_102bdf2c4;
        }
        lVar9 = lVar10;
        func_0x000107c5faec();
        func_0x000107c61170(lVar10);
        uVar7 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(uVar7 + 0x18) = uStack_158;
        *(undefined8 *)(uVar7 + 0x10) = uStack_160;
        *(long *)(uVar7 + 0x20) = lVar9;
        *(undefined8 *)(uVar7 + 0x28) = uVar4;
        puVar21 = &UNK_1105ae330;
        uStack_118 = uVar7;
        func_0x000107c613fc(&UNK_1105ae330,0x20,7);
        *(undefined8 *)(puVar21 + 0x10) = 0x102bdfbd4;
        *(undefined **)(puVar21 + 0x18) = puVar5;
        func_0x000107c6157c(puVar5);
        lVar10 = lStack_120;
        func_0x000107c5b4b0();
        func_0x000107c61180();
        if (lVar10 == 0) goto code_r0x000107c6142c;
        lVar9 = lVar10;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        lStack_138 = lVar9;
        if (lVar9 == 0) {
          func_0x000107c61170(uVar14);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(puVar21);
          func_0x000107c61574(puStack_c0);
          puVar25 = puStack_d8;
          func_0x000107c61574(puStack_d8);
          func_0x000107c61170(lVar8);
          func_0x000107c61574(uStack_118);
          func_0x000107c61170(lVar12);
        }
        else {
          uVar7 = uStack_118;
          func_0x000107c5fc48(uStack_118,PTR___sSSN_11034da80);
          lVar10 = 0;
          uStack_130 = uVar7;
          FUN_102bdfc8c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar13 = &UNK_1105ae358;
          lStack_128 = lVar10;
          func_0x000107c613fc(&UNK_1105ae358,0x30,7);
          lVar10 = lStack_c8;
          *(long *)(puVar13 + 0x10) = lStack_c8;
          *(ulong *)(puVar13 + 0x18) = uVar14;
          *(undefined8 *)(puVar13 + 0x20) = 0x102bdfd94;
          *(undefined **)(puVar13 + 0x28) = puVar21;
          pcStack_88 = FUN_102bdfd00;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_100f6151c;
          puStack_90 = &UNK_1105ae370;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar13;
          func_0x000107c60bc4(ppuVar11);
          puStack_1a0 = puStack_80;
          func_0x000107c61174(uVar14);
          func_0x000107c61174(lVar10);
          func_0x000107c6157c(puVar21);
          func_0x000107c61574(puStack_1a0);
          lVar10 = lStack_138;
          func_0x000107c5b4f8(lStack_138);
          func_0x000107c61170(uVar14);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(puVar21);
          func_0x000107c61574(puStack_c0);
          puVar25 = puStack_d8;
          func_0x000107c61574(puStack_d8);
          func_0x000107c61170(lVar8);
          func_0x000107c61574(uStack_118);
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c615e8(lVar10);
          func_0x000107c61170(uStack_130);
          lVar2 = lStack_128;
        }
        func_0x000107c61170(lVar2);
        puVar3 = puStack_108;
        puVar21 = puStack_f8;
        puVar13 = puStack_110;
      }
      else {
        uVar7 = uVar14;
        func_0x000107c43a08();
        func_0x000107c61180();
        if (uVar7 != 0) {
          uVar24 = uVar7;
          func_0x000107c5fc54();
          if (*(long *)(uVar24 + 0x10) != 0) {
            puVar21 = &UNK_1105ae2b8;
            uStack_118 = uVar24;
            func_0x000107c613fc(&UNK_1105ae2b8,0x20,7);
            *(undefined8 *)(puVar21 + 0x10) = 0x102bdfbd4;
            *(undefined **)(puVar21 + 0x18) = puVar5;
            func_0x000107c6157c(puVar5);
            lVar2 = lStack_120;
            func_0x000107c5b4b0();
            func_0x000107c61180();
            if (lVar2 == 0) {
              func_0x000107c61170(uVar7);
            }
            else {
              lVar12 = lVar2;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar2);
              if (lVar12 == 0) {
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar14);
                func_0x000107c61574(puVar5);
                func_0x000107c61574(puStack_c0);
                func_0x000107c61574(puStack_d8);
                func_0x000107c61574(puVar21);
              }
              else {
                lVar2 = 0;
                FUN_102bdfc8c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
                func_0x000107c5ffdc();
                puVar13 = &UNK_1105ae2e0;
                lStack_128 = lVar2;
                func_0x000107c613fc(&UNK_1105ae2e0,0x30,7);
                lVar2 = lStack_c8;
                *(long *)(puVar13 + 0x10) = lStack_c8;
                *(ulong *)(puVar13 + 0x18) = uVar14;
                *(code **)(puVar13 + 0x20) = FUN_102bdfc2c;
                *(undefined **)(puVar13 + 0x28) = puVar21;
                pcStack_88 = FUN_102bdfc4c;
                puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_a0 = 0x42000000;
                puStack_98 = &UNK_100f6151c;
                puStack_90 = &UNK_1105ae2f8;
                puStack_80 = puVar13;
                func_0x000107c60bc4(&puStack_a8);
                puVar13 = puStack_80;
                func_0x000107c61174(uVar14);
                func_0x000107c61174(lVar2);
                func_0x000107c6157c(puVar21);
                func_0x000107c61574(puVar13);
                func_0x000107c5b4f8(lVar12);
                func_0x000107c61170(uVar14);
                func_0x000107c61574(puVar5);
                func_0x000107c61574(puStack_c0);
                func_0x000107c61574(puStack_d8);
                func_0x000107c61574(puVar21);
              }
            }
          }
          goto code_r0x000107c6142c;
        }
LAB_102bdf2e4:
        uVar7 = uVar14;
        func_0x000107c3f64c();
        puVar16 = puStack_f0;
        if ((uVar7 != 0xf) && (uVar7 != 4)) {
          puVar16 = puStack_d0;
        }
        func_0x000107c61428(puVar16,&puStack_a8,0x21,0);
        FUN_102bda068(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000107c614a8(&puStack_a8);
        func_0x000107c60f3c(puStack_b8);
        func_0x000107c61170(uVar14);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar25);
        func_0x000107c61574(puStack_c0);
      }
      uVar24 = uVar24 + 1;
    } while (puVar15 != puVar3);
    func_0x000107c61574(puVar21);
    uVar24 = (ulong)puStack_e8 & 0x4000000000000000;
    puVar21 = puStack_e8;
  }
  puStack_e8 = puVar21;
  if (((long)puVar21 < 0) || (uVar24 != 0)) {
    func_0x000107c60480();
  }
  else {
    puVar21 = *(undefined **)(puVar21 + 0x10);
  }
  if (puVar21 != (undefined *)0x0) {
    uVar24 = 0;
    puStack_f0 = *(ulong **)(lStack_c8 + _DAT_112efdb08);
    uStack_e0 = (ulong)puStack_e8 & 0xc000000000000001;
    do {
      if (uStack_e0 == 0) {
        if (*(ulong *)(puStack_e8 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdf7a4);
          (*pcVar1)();
        }
        uVar14 = *(ulong *)(puStack_e8 + uVar24 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar14 = uVar24;
        FUN_102bdd458(uVar24,puStack_e8,&PTR_PTR_1126c9508,0x112efd9b8);
      }
      puVar3 = puStack_b8;
      puVar13 = (undefined *)(uVar24 + 1);
      if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdf79c);
        (*pcVar1)();
      }
      func_0x000107c60f38(puStack_b8);
      puVar15 = &UNK_1105ae1f0;
      func_0x000107c613fc(&UNK_1105ae1f0,0x20,7);
      *(undefined **)(puVar15 + 0x10) = puVar25;
      *(undefined **)(puVar15 + 0x18) = puVar3;
      func_0x000107c61580(puVar25,2);
      func_0x000107c61174(puVar3);
      uVar7 = uVar14;
      func_0x000107c43a08();
      func_0x000107c61180();
      if (uVar7 != 0) {
        uVar24 = uVar7;
        func_0x000107c5fc54();
        if (*(long *)(uVar24 + 0x10) != 0) {
          puVar16 = puStack_f0;
          func_0x000107c5b4b0();
          func_0x000107c61180();
          if (puVar16 == (ulong *)0x0) {
            func_0x000107c61170(uVar7);
            func_0x000107c61574(puStack_d8);
          }
          else {
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(puVar16);
          }
        }
        goto code_r0x000107c6142c;
      }
      uVar7 = uVar14;
      FUN_102bdaac8(uVar14,0);
      puVar16 = puStack_d0;
      func_0x000107c61428(puStack_d0,&puStack_a8,0x21,0);
      uVar23 = *puVar16;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar18 = uVar23;
      func_0x000107c61550();
      *puVar16 = uVar23;
      if ((((int)uVar18 == 0) || ((long)uVar23 < 0)) || (uVar18 = uVar23, (uVar23 >> 0x3e & 1) != 0)
         ) {
        if (uVar23 >> 0x3e == 0) {
          uVar17 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar17 = uVar23 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar23) {
            uVar17 = uVar23;
          }
          func_0x000107c60480(uVar17);
        }
        uVar18 = 0;
        FUN_102bddafc(0,uVar17 + 1,1,uVar23,0x112efd9c0,&PTR_PTR_1126ac0b8,0x112efdb88,
                      &UNK_10db2ffe0);
        *puStack_d0 = uVar18;
      }
      uVar20 = uVar18 & 0xffffffffffffff8;
      uVar23 = *(ulong *)(uVar20 + 0x10);
      uVar17 = uVar18;
      if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar23) {
        uVar17 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
        FUN_102bddafc(uVar17,uVar23 + 1,1,uVar18,0x112efd9c0,&PTR_PTR_1126ac0b8,0x112efdb88,
                      &UNK_10db2ffe0);
        uVar20 = uVar17 & 0xffffffffffffff8;
      }
      puVar25 = puStack_d8;
      *(ulong *)(uVar20 + 0x10) = uVar23 + 1;
      *(ulong *)(uVar20 + uVar23 * 8 + 0x20) = uVar7;
      *(ulong *)(puStack_d8 + 0x10) = uVar17;
      func_0x000107c614a8(&puStack_a8);
      func_0x000107c60f3c(puVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar14);
      func_0x000107c61574(puVar15);
      func_0x000107c61574(puVar25);
      uVar24 = uVar24 + 1;
    } while (puVar13 != puVar21);
  }
  func_0x000107c61574(puStack_e8);
  uVar19 = 0;
  FUN_102bdfc8c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar21 = &UNK_1105ae218;
  func_0x000107c613fc(&UNK_1105ae218,0x30,7);
  puVar3 = puStack_c0;
  puVar13 = puStack_168;
  *(code **)(puVar21 + 0x10) = FUN_102bdfbcc;
  *(undefined **)(puVar21 + 0x18) = puStack_168;
  *(undefined **)(puVar21 + 0x20) = puStack_c0;
  *(undefined **)(puVar21 + 0x28) = puVar25;
  pcStack_88 = (code *)0x102bdfc14;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1105ae230;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar21;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar25);
  puVar21 = puVar13;
  func_0x000107c6157c(puVar13);
  lVar2 = lStack_198;
  func_0x000107c5f808(lStack_198);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar4 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar22 = uVar4;
  func_0x0001001c7f30();
  lVar10 = lStack_170;
  lVar12 = lStack_180;
  func_0x000107c60264(lStack_180,&puStack_b0,uVar4,uVar22,lStack_170,puVar21);
  puVar21 = puStack_b8;
  func_0x000107c5ffb8(lVar2,lVar12,uVar19,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(uVar19);
  (**(code **)(lStack_178 + 8))(lVar12,lVar10);
  (**(code **)(lStack_190 + 8))(lVar2,lStack_188);
  puVar21 = puStack_80;
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar25);
  func_0x000107c61574(puVar21);
  return;
}



/* Entry: 102bdfaac; end: 102bdfb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdfaac(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  
  func_0x000107c40468();
  uVar1 = param_3;
  func_0x000107c4e324(param_3);
  func_0x000107c61180();
  func_0x000107c5dc98();
  dVar3 = param_2;
  func_0x000107c61170(uVar1);
  if ((500.0 < param_2) && (func_0x000107c404a0(param_3), dVar3 < -30.0 - param_1)) {
    lVar2 = unaff_x20 + _DAT_112efdac0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4204c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 102bdfb6c; end: 102bdfb83;  */

void FUN_102bdfb6c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_60;
  pcVar1 = "handleTapDoneButton()";
  func_0x0001000c10c0("handleTapDoneButton()");
  func_0x000107c61180();
  puVar2 = &UNK_1105ade30;
  func_0x000107c613fc(&UNK_1105ade30,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar4);
  uStack_40 = 0x102bdfda8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105adf38;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102bdfb84; end: 102bdfbcb;  */

void FUN_102bdfb84(void)

{
  FUN_102bdbc78();
  return;
}



/* Entry: 102bdfbcc; end: 102bdfbdf;  */

void FUN_102bdfbcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = "processHeroContextCards(_:)";
  func_0x0001000c10c0("processHeroContextCards(_:)");
  func_0x000107c61180();
  puVar3 = &UNK_1105ade30;
  func_0x000107c613fc(&UNK_1105ade30,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_1105ae3a8;
  func_0x000107c613fc(&UNK_1105ae3a8,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  pcStack_68 = FUN_102bdfccc;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_1105ae3c0;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_60;
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 102bdfbe0; end: 102bdfc0b;  */

void FUN_102bdfbe0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bdfc0c; end: 102bdfc2b;  */

void FUN_102bdfc0c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0x21,0);
    func_0x000107c61174();
    FUN_102bdd924();
    uVar5 = *(ulong *)(lVar2 + 0x10);
    uVar6 = uVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar6 + 0x10);
    uVar4 = uVar5;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_102bddafc(uVar4,uVar1 + 1,1,uVar5,0x112efd9c0,&PTR_PTR_1126ac0b8,0x112efdb88,
                    &UNK_10db2ffe0);
      uVar6 = uVar4 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
    *(long *)(uVar6 + uVar1 * 8 + 0x20) = param_1;
    *(ulong *)(lVar2 + 0x10) = uVar4;
    func_0x000107c614a8(auStack_58);
  }
  func_0x000107c60f3c(uVar3);
  return;
}



/* Entry: 102bdfc2c; end: 102bdfc4b;  */

void FUN_102bdfc2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102bdfc4c; end: 102bdfc57;  */

void FUN_102bdfc4c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  if (param_1 == 0) {
LAB_102bda458:
    (*pcVar2)(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar5 == 0) goto LAB_102bda458;
  }
  else {
    uVar5 = param_1;
    if (-1 < (long)param_1) {
      uVar5 = param_1 & 0xffffffffffffff8;
    }
    uVar6 = uVar5;
    func_0x000107c60480(uVar5,param_2,*(undefined8 *)(unaff_x20 + 0x10));
    if (uVar6 == 0) goto LAB_102bda458;
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar5 == 0) goto LAB_102bda3f8;
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102bd707c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102bda48c);
    (*pcVar2)();
  }
  uVar6 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = uVar6;
      FUN_102bdd458(uVar6,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
    }
    uVar4 = uVar1;
    func_0x000102bda48c(uVar1,uVar3);
    func_0x000107c61170(uVar3);
    uVar3 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
      func_0x000102bd707c(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
    }
    uVar6 = uVar6 + 1;
    *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar7 + uVar3 * 8 + 0x20) = uVar4;
  } while (uVar5 != uVar6);
LAB_102bda3f8:
  (*pcVar2)(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
  return;
}



/* Entry: 102bdfc58; end: 102bdfc8b;  */

void FUN_102bdfc58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bdfc8c; end: 102bdfccb;  */

void FUN_102bdfc8c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102bdfccc; end: 102bdfcdf;  */

void FUN_102bdfccc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (uVar3 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar5 = uVar3;
      }
      func_0x000107c60480(uVar5);
    }
    FUN_102bdc874(uVar2,uVar1,uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102bdfce0; end: 102bdfcff;  */

void FUN_102bdfce0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102bdfd00; end: 102bdfdaf;  */

void FUN_102bdfd00(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  if (param_1 == 0) {
LAB_102bda458:
    (*pcVar2)(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar5 == 0) goto LAB_102bda458;
  }
  else {
    uVar5 = param_1;
    if (-1 < (long)param_1) {
      uVar5 = param_1 & 0xffffffffffffff8;
    }
    uVar6 = uVar5;
    func_0x000107c60480(uVar5,param_2,*(undefined8 *)(unaff_x20 + 0x10));
    if (uVar6 == 0) goto LAB_102bda458;
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar5 == 0) goto LAB_102bda3f8;
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102bd707c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102bda48c);
    (*pcVar2)();
  }
  uVar6 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = uVar6;
      FUN_102bdd458(uVar6,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
    }
    uVar4 = uVar1;
    func_0x000102bda48c(uVar1,uVar3);
    func_0x000107c61170(uVar3);
    uVar3 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
      func_0x000102bd707c(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
    }
    uVar6 = uVar6 + 1;
    *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar7 + uVar3 * 8 + 0x20) = uVar4;
  } while (uVar5 != uVar6);
LAB_102bda3f8:
  (*pcVar2)(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
  return;
}



/* Entry: 102bdfdb0; end: 102bdfdbf; -[SCContextHeroContextCardDataServices heroContextCardDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdfdb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112efdb90));
  return;
}



/* Entry: 102bdfdc0; end: 102bdfe57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdfdc0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efdb90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bdfe58; end: 102bdfeaf; -[SCContextHeroContextCardDataServices initWithHeroContextCardDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdfe58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112efdb90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102bdfeb0; end: 102bdff0f; -[SCContextHeroContextCardDataServices init] */

void FUN_102bdfeb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextHeroContextCardDataServices.SCContextHeroContextCardDataServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bdfedc);
  (*pcVar1)();
}



/* Entry: 102bdff10; end: 102bdff1f; -[SCContextHeroContextCardDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bdff10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efdb90));
  return;
}



/* Entry: 102bdff20; end: 102bdff3f;  */

void FUN_102bdff20(void)

{
  func_0x000107c61168(&PTR_PTR_112895648);
  return;
}



/* Entry: 102bdff40; end: 102bdff8f;  */

void FUN_102bdff40(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000032;
  func_0x000100442ccc(0xd000000000000032,0x800000010f0fd4c0,0);
  uRam0000000113804ec8 = uVar1;
  return;
}



/* Entry: 102bdff90; end: 102bdffab; +[SCHeroContextCardConfigKeys spotlightTrendingHeroContextDebugViewEnabled] */

void FUN_102bdff90(void)

{
  if (lRam00000001134e12f0 != -1) {
    func_0x000107c61568(0x1134e12f0,FUN_102bdff40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804ec8);
  return;
}



/* Entry: 102bdffac; end: 102bdfffb;  */

void FUN_102bdffac(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000029;
  func_0x000100442ccc(0xd000000000000029,0x800000010f0fd490,0);
  uRam0000000113804ed0 = uVar1;
  return;
}



/* Entry: 102bdfffc; end: 102be0017; +[SCHeroContextCardConfigKeys trendSourceDebugViewEnabled] */

void FUN_102bdfffc(void)

{
  if (lRam00000001134e12f8 != -1) {
    func_0x000107c61568(0x1134e12f8,FUN_102bdffac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804ed0);
  return;
}



/* Entry: 102be0018; end: 102be0067;  */

void FUN_102be0018(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000003b;
  func_0x000100442ccc(0xd00000000000003b,0x800000010f0fd450,0);
  uRam0000000113804ed8 = uVar1;
  return;
}



/* Entry: 102be0068; end: 102be0083; +[SCHeroContextCardConfigKeys spotlightHeroContextSingleCommentLabelChevronEnabled] */

void FUN_102be0068(void)

{
  if (lRam00000001134e1300 != -1) {
    func_0x000107c61568(0x1134e1300,FUN_102be0018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804ed8);
  return;
}



/* Entry: 102be0084; end: 102be00d3;  */

void FUN_102be0084(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000039;
  func_0x000100442ccc(0xd000000000000039,0x800000010f0fd410,0);
  uRam0000000113804ee0 = uVar1;
  return;
}



/* Entry: 102be00d4; end: 102be00ef; +[SCHeroContextCardConfigKeys spotlightTrendingHeroContextLabelLightStyleEnabled] */

void FUN_102be00d4(void)

{
  if (lRam00000001134e1308 != -1) {
    func_0x000107c61568(0x1134e1308,FUN_102be0084);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804ee0);
  return;
}



/* Entry: 102be00f0; end: 102be013f;  */

void FUN_102be00f0(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000032;
  func_0x000100442ccc(0xd000000000000032,0x800000010f0fd3d0,0);
  uRam0000000113804ee8 = uVar1;
  return;
}



/* Entry: 102be0140; end: 102be015b; +[SCHeroContextCardConfigKeys spotlightPrioritizeFriendRepostedLabelEnabled] */

void FUN_102be0140(void)

{
  if (lRam00000001134e1310 != -1) {
    func_0x000107c61568(0x1134e1310,FUN_102be00f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804ee8);
  return;
}



/* Entry: 102be015c; end: 102be01ab;  */

void FUN_102be015c(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002c;
  func_0x000100442ccc(0xd00000000000002c,0x800000010f0fd3a0,0);
  uRam0000000113804ef0 = uVar1;
  return;
}



/* Entry: 102be01ac; end: 102be01c7; +[SCHeroContextCardConfigKeys spotlightSuggestedSearchHeroCardEnabled] */

void FUN_102be01ac(void)

{
  if (lRam00000001134e1318 != -1) {
    func_0x000107c61568(0x1134e1318,FUN_102be015c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804ef0);
  return;
}



/* Entry: 102be01c8; end: 102be020b;  */

void FUN_102be01c8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 102be020c; end: 102be0247; -[SCHeroContextCardConfigKeys init] */

void FUN_102be020c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102be0248; end: 102be027b;  */

void FUN_102be0248(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102be027c; end: 102be027f; -[SCHeroContextCardConfigKeys .cxx_destruct] */

void FUN_102be027c(void)

{
  return;
}



/* Entry: 102be0280; end: 102be029f;  */

void FUN_102be0280(void)

{
  func_0x000107c61168(&PTR_PTR_112895708);
  return;
}



/* Entry: 102be02a0; end: 102be032f; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture excludedEdgesInPercentage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102be02a0(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112efdbe8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 102be0330; end: 102be03ff; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture setExcludedEdgesInPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be0330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112efdbe8);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 102be0400; end: 102be043f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102be0400(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112efdbe8;
  func_0x000107c61428(unaff_x20 + _DAT_112efdbe8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102be127c;
  return auVar2;
}



/* Entry: 102be0440; end: 102be04c3; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture gestureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102be0440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efdbf0;
  func_0x000107c61428(param_1 + _DAT_112efdbf0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102be04c4; end: 102be055f; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture setGestureEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be04c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efdbf0;
  func_0x000107c61428(param_1 + _DAT_112efdbf0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102be0560; end: 102be059f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102be0560(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112efdbf0;
  func_0x000107c61428(unaff_x20 + _DAT_112efdbf0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102be05a0;
  return auVar2;
}



/* Entry: 102be05a0; end: 102be05a3;  */

void FUN_102be05a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102be05a4; end: 102be062b; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture lastTouchLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102be05a4(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_112efdbf8);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 102be062c; end: 102be067f; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture setLastTouchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be062c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112efdbf8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Entry: 102be0680; end: 102be099b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102be0680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [8];
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  
  puVar5 = auStack_a0;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efdbe8);
  uVar7 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  *puVar1 = uVar7;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  *(undefined1 *)(unaff_x20 + _DAT_112efdbf0) = 1;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112efdbf8);
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar7 = param_6;
  func_0x000107c614f0();
  puVar3 = PTR_PTR_1126c2bb8;
  auStack_90[0] = param_6;
  uStack_78 = uVar7;
  func_0x000107c610f8();
  func_0x000107c615f0(param_6);
  puVar4 = auStack_90;
  func_0x000107c605b0(puVar4,uVar7);
  func_0x000100183ab8(auStack_90);
  func_0x000107c48c2c();
  func_0x000107c615e8(puVar4);
  *(undefined **)(unaff_x20 + _DAT_112efdc00) = puVar3;
  func_0x000107c61428(puVar1,auStack_90,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x000107c61154(auStack_a0,PTR_s_init_1125d9248);
  lVar2 = _DAT_112efdc00;
  puVar6 = puVar5;
  func_0x000107c61174();
  func_0x000107c3d6fc(param_5);
  func_0x000107c53fcc(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return puVar6;
}



/* Entry: 102be099c; end: 102be0a1f; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture initWithExcludedEdgesInPercentage:view:target:action:] */

void FUN_102be099c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000102be0814(param_1,param_2,param_3,param_4,param_7,param_8,param_9);
  return;
}



/* Entry: 102be0a20; end: 102be0b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102be0a20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112efdc00);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
    param_1 = 0.0;
  }
  else {
    func_0x000107c3ec60();
    func_0x000107c609b0();
    lVar1 = unaff_x20 + _DAT_112efdbe8;
    func_0x000107c61428(lVar1,auStack_78,0,0);
    dVar3 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar4 = *(double *)(lVar1 + 8);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c61170(lVar2);
    param_1 = param_1 + dVar3 * dVar4;
  }
  return param_1;
}



/* Entry: 102be0b58; end: 102be0bb3; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture getRecognitionRect] */

undefined8 FUN_102be0b58(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102be0a20();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 102be0bb4; end: 102be0c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be0bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112efdbf0;
  func_0x000107c61428(unaff_x20 + _DAT_112efdbf0,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112efdc00);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efdbf8);
      func_0x000107c61428(puVar1,auStack_70,1,0);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      FUN_102be0a20();
      func_0x000107c609a4();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102be0c80; end: 102be0ccb; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture isTouchLocationWithinTouchArea:] */

uint FUN_102be0c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_102be0bb4(param_1,param_2);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102be0ccc; end: 102be0cfb;  */

void FUN_102be0ccc(void)

{
  FUN_102be1010();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102be0cfc; end: 102be0d0b; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be0cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efdc00));
  return;
}



/* Entry: 102be0d0c; end: 102be0e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be0d0c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c3dbbc();
  func_0x000107c61180();
  if (param_4 != 0) {
    uVar2 = 0;
    func_0x000102be1030(0);
    uVar3 = uVar2;
    func_0x000101107df4();
    lVar5 = param_4;
    func_0x000107c5fe10(param_4,uVar2,uVar3);
    func_0x000107c61170(param_4);
    lVar4 = lVar5;
    FUN_102be0e84();
    func_0x000107c6142c(lVar5);
    if (lVar4 != 0) {
      func_0x000107c5de64();
      func_0x000107c61180();
      if (param_3 != 0) {
        func_0x000107c4b8b8(lVar4);
        lVar5 = _DAT_112efdbf0;
        func_0x000107c61428(unaff_x20 + _DAT_112efdbf0,auStack_68,0,0);
        if (*(char *)(unaff_x20 + lVar5) == '\x01') {
          lVar5 = *(long *)(unaff_x20 + _DAT_112efdc00);
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar5 != 0) {
            puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efdbf8);
            func_0x000107c61428(puVar1,auStack_80,1,0);
            *puVar1 = param_1;
            puVar1[1] = param_2;
            FUN_102be0a20();
            func_0x000107c609a4();
            func_0x000107c61170(lVar5);
            func_0x000107c61170(param_3);
            func_0x000107c61170(lVar4);
            return;
          }
        }
        func_0x000107c61170(param_3);
      }
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 102be0e84; end: 102be0f97;  */

ulong FUN_102be0e84(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_1 & 0xc000000000000001) == 0) {
    uVar3 = param_1 + 0x38;
    func_0x000107c60268(uVar3,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    uVar5 = 0;
    param_2 = (ulong)*(uint *)(param_1 + 0x24);
    if (uVar3 != 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) goto LAB_102be0f54;
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    uVar3 = uVar1;
    func_0x000107c60284();
    uVar4 = param_2;
    func_0x000107c602b4(uVar1);
    uVar2 = uVar3;
    func_0x000107c60290(uVar3,param_2,uVar1,uVar4);
    uVar5 = 1;
    FUN_102be1074(uVar1,uVar4,1);
    if ((uVar2 & 1) == 0) {
LAB_102be0f54:
      uVar1 = uVar3;
      FUN_102be1088(uVar3,param_2,uVar5,param_1);
      FUN_102be1074(uVar3,param_2,uVar5);
      return uVar1;
    }
  }
  FUN_102be1074(uVar3,param_2,uVar5);
  return 0;
}



/* Entry: 102be0f98; end: 102be100f; -[_TtC28SCDoubleTapWithInsetsGesture28SCDoubleTapWithInsetsGesture gestureRecognizer:shouldReceiveEvent:] */

uint FUN_102be0f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102be0d0c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102be1010; end: 102be1073;  */

void FUN_102be1010(void)

{
  func_0x000107c61168(&PTR_PTR_1128957b8);
  return;
}



/* Entry: 102be1074; end: 102be1087;  */

void FUN_102be1074(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102be1088; end: 102be127b;  */

/* WARNING: Possible PIC construction at 0x000102be11c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102be11c8) */
/* WARNING: Removing unreachable block (ram,0x000102be1240) */
/* WARNING: Removing unreachable block (ram,0x000102be11e8) */

undefined8 FUN_102be1088(ulong param_1,undefined8 param_2,char param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_3 == '\x01') {
      uVar3 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar3 = param_4;
      }
      func_0x000107c602a4(param_1,param_2,uVar3);
      uVar2 = 0;
      uStack_60 = param_1;
      func_0x000102be1030(0);
      func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102be127c);
    (*pcVar1)();
  }
  if (param_3 == '\x01') {
    uVar2 = 0;
    func_0x000102be1030(0);
    uVar3 = param_1;
    func_0x000107c60294(param_1,param_2);
    if ((int)uVar3 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be1270);
      (*pcVar1)();
    }
    func_0x000107c60298(param_1,param_2);
    uStack_60 = param_1;
    func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
    uVar3 = *(ulong *)(param_4 + 0x28);
    func_0x000107c60114();
    uVar3 = uVar3 & (-1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
    if ((*(ulong *)(param_4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
      func_0x000107c61170(uStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be120c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar3 * 8);
  }
  else {
    if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be1274);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) ==
        0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be1278);
      (*pcVar1)();
    }
    if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be1240);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return uVar2;
}



/* Entry: 102be127c; end: 102be128f;  */

void FUN_102be127c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}


