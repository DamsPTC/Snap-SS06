/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022cafbc; end: 1022cb243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022cafbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112e7c038;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e7c040;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7c048) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e7c020) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e7c028) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7c030) = param_3;
  FUN_1022cca30();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022cb244; end: 1022cb523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022cb244(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar12 = &puStack_90;
  func_0x0001022cb07c();
  if (param_1 != 0) {
    lVar2 = param_1;
    FUN_1022cc358();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1022cb524;
    puStack_68 = (undefined *)0x0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_10117fbac;
    puStack_78 = &UNK_1104f1fb8;
    func_0x000107c60bc4(&puStack_90);
    lVar4 = lVar2;
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c4cd74();
    func_0x000107c61180();
    pcStack_70 = (code *)0x1022cb568;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x1022cdb64;
    puStack_78 = &UNK_1104f1fe0;
    func_0x000107c60bc4(&puStack_90);
    lVar6 = lVar2;
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x000107c61168();
    puVar8 = puVar7;
    FUN_1022cce88();
    func_0x000107c613fc();
    *(undefined8 *)(puVar8 + 0x18) = 5;
    *(undefined8 *)(puVar8 + 0x10) = 2;
    *(long *)(puVar8 + 0x20) = lVar4;
    *(long *)(puVar8 + 0x28) = lVar6;
    func_0x000107c61174(lVar4);
    func_0x000107c61174(lVar6);
    uVar9 = 0x112d5b0a0;
    func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
    puVar10 = puVar8;
    func_0x000107c5fc48(puVar8,uVar9);
    func_0x000107c61574(puVar8);
    pcStack_70 = FUN_1022cb630;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1022cb640;
    puStack_78 = &UNK_1104f2008;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3fe00(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar10);
    puVar8 = &UNK_1104f2040;
    func_0x000107c613fc(&UNK_1104f2040,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    pcStack_70 = (code *)0x1022cd9e0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1008561f0;
    puStack_78 = &UNK_1104f2058;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    puVar8 = puVar7;
    func_0x000107c5c320(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c3e924(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c5bc1c(param_1);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 1022cb524; end: 1022cb5ab;  */

void FUN_1022cb524(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1022cd9e8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1022cb5ac; end: 1022cb62f;  */

void FUN_1022cb5ac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1022cb630; end: 1022cb63f;  */

void FUN_1022cb630(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF_110351018)
            (param_1,PTR___sypN_11034f1a8 + 8);
  return;
}



/* Entry: 1022cb640; end: 1022cb873;  */

void FUN_1022cb640(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5fc54(param_2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1022cb874; end: 1022cbe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022cb874(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_d0;
  ulong uStack_c8;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar15 + 0x10);
  }
  else {
    uVar14 = uVar15;
    if (0x7fffffffffffffff < param_2) {
      uVar14 = param_2;
    }
    func_0x000107c60480();
  }
  uVar9 = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (uVar14 != uVar9) {
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar15 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cba24);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = uVar9;
      FUN_1022ccef0(uVar9,param_2,&PTR_PTR_1126ae6a8,0x112d4d630);
    }
    uVar1 = uVar9 + 1;
    if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cba20);
      (*pcVar2)();
    }
    lVar4 = 1;
    FUN_1022cbe84();
    func_0x000107c61170(uVar3);
    uVar9 = uVar9 + 1;
    if (lVar4 != 0) {
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_1022cd2f4(0,puVar5 + 1,1,puVar7,FUN_1022cd42c,FUN_1022cd54c);
      }
      uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar9 = *(ulong *)(uVar3 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar9) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_1022cd2f4(puVar7,uVar9 + 1,1,puVar6,FUN_1022cd42c,FUN_1022cd54c);
        uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar9 + 1;
      *(long *)(uVar3 + uVar9 * 8 + 0x20) = lVar4;
      uVar9 = uVar1;
    }
  }
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar6 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar6 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c6142c(puVar7);
  }
  else {
    FUN_1022cc268(puVar7);
  }
  func_0x000107c3d128();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar8 = 0;
    FUN_1022cd9e8(0,0x112d530b0,&PTR_PTR_1126d8840);
    uVar15 = param_1;
    func_0x000107c5fc54(param_1,uVar8);
    func_0x000107c61170(param_1);
    if (uVar15 >> 0x3e == 0) {
      uStack_b8 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uStack_b8 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uStack_b8 = uVar15;
      }
      func_0x000107c60480();
    }
    uStack_c8 = uVar15 & 0xffffffffffffff8;
    puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = 0;
    while (uStack_b8 != uVar14) {
      if ((uVar15 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uStack_c8 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cbdc8);
          (*pcVar2)();
        }
        uVar9 = *(ulong *)(uVar15 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar9);
      }
      else {
        uVar9 = uVar14;
        FUN_1022ccef0(uVar14,uVar15,&PTR_PTR_1126d8840,0x112d530b0);
      }
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      uVar3 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cbdc4);
        (*pcVar2)();
      }
      puStack_88 = (undefined *)0x0;
      lStack_80 = 0;
      pcStack_90 = FUN_1022cc354;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100fe4708;
      puStack_98 = &UNK_1104f1f18;
      ppuVar10 = &puStack_b0;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(puStack_88);
      puVar6 = &UNK_1104f1f50;
      func_0x000107c613fc(&UNK_1104f1f50,0x18,7);
      *(long **)(puVar6 + 0x10) = &lStack_80;
      puVar5 = &UNK_1104f1f78;
      func_0x000107c613fc(&UNK_1104f1f78,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_1022cd800;
      *(undefined **)(puVar5 + 0x18) = puVar6;
      pcStack_90 = (code *)0x1022cd82c;
      puStack_b0 = puVar7;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100fe4704;
      puStack_98 = &UNK_1104f1f90;
      ppuVar11 = &puStack_b0;
      puStack_88 = puVar5;
      func_0x000107c60bc4(ppuVar11);
      puVar7 = puStack_88;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c4c5c4(uVar9);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar10);
      if (lStack_80 == 0) {
        lVar4 = 0;
      }
      else {
        lVar12 = lStack_80;
        func_0x000107c61174();
        lVar4 = 0;
        FUN_1022cbe84();
        func_0x000107c61170(lVar12);
      }
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lStack_80);
      uVar9 = 0;
      func_0x000107c61544(0,"",0x7b,0x55,0x25,1);
      func_0x000107c61574(puVar6);
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cbdcc);
        (*pcVar2)();
      }
      puVar7 = puVar5;
      func_0x000107c61544(puVar5,"",0x7b,0x56,0x1a,1);
      func_0x000107c61574(puVar5);
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cbdd0);
        (*pcVar2)();
      }
      uVar14 = uVar14 + 1;
      if (lVar4 != 0) {
        puVar7 = puStack_d0;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puStack_d0 < 0)) ||
           (puVar7 = puStack_d0, ((ulong)puStack_d0 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_d0 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puStack_d0 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_d0) {
              puVar6 = puStack_d0;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_1022cd2f4(0,puVar6 + 1,1,puStack_d0,FUN_1022cd42c,FUN_1022cd54c);
        }
        uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar9 + 0x10);
        puStack_d0 = puVar7;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar14) {
          puStack_d0 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1022cd2f4(puStack_d0,uVar14 + 1,1,puVar7,FUN_1022cd42c,FUN_1022cd54c);
          uVar9 = (ulong)puStack_d0 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar14 + 1;
        *(long *)(uVar9 + uVar14 * 8 + 0x20) = lVar4;
        uVar14 = uVar3;
      }
    }
    func_0x000107c6142c(uVar15);
    if ((ulong)puStack_d0 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puStack_d0 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_d0) {
        puVar7 = puStack_d0;
      }
      func_0x000107c60480();
    }
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c6142c(puStack_d0);
    }
    else {
      FUN_1022cc268(puStack_d0);
    }
  }
  puVar7 = puStack_78;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e7c040);
  uVar8 = 0;
  FUN_1022cd9e8(0,0x112e7c080,&PTR_PTR_1126aa338);
  puVar6 = puVar7;
  func_0x000107c5fc48(puVar7,uVar8);
  func_0x000107c4d664(uVar13);
  func_0x000107c6142c(puVar7);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1022cbe84; end: 1022cc267;  */

undefined * FUN_1022cbe84(ulong param_1,undefined *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  ulong unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar15 = unaff_x20;
  func_0x000107c4b334();
  func_0x000107c61180();
  puVar8 = param_2;
  if (uVar15 != 0) {
    uVar13 = uVar15;
    func_0x000107c5c964();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    uVar14 = uVar13;
    func_0x000107c5faec();
    puVar8 = param_2;
    func_0x000107c61170(uVar13);
    uVar15 = uVar14 & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      uVar15 = (ulong)param_2 >> 0x38 & 0xf;
    }
    if (uVar15 != 0) goto LAB_1022cbf2c;
    func_0x000107c6142c(param_2);
  }
  if ((param_1 & 1) == 0) {
    return (undefined *)0x0;
  }
  param_2 = (undefined *)0x800000010f081580;
  uVar14 = 0xd000000000000051;
LAB_1022cbf2c:
  uVar15 = unaff_x20;
  func_0x000107c4b06c();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 == 0) {
    func_0x0001022dce28();
    puVar7 = PTR_PTR_1133566d8;
joined_r0x0001022cc058:
    PTR_PTR_1133566d8 = puVar7;
    if (((uVar15 & 1) != 0) &&
       (puVar5 = puVar7, puVar8 = puVar6, func_0x0001022cc974(puVar7,puVar6),
       ((ulong)puVar5 & 1) == 0)) {
      func_0x000107c61174();
      puVar5 = puVar6;
      func_0x000107c61558();
      puVar10 = puVar6;
      if (((ulong)puVar5 & 1) == 0) {
        puVar8 = (undefined *)(*(long *)(puVar6 + 0x10) + 1);
        puVar10 = (undefined *)0x0;
        func_0x0001022cd1bc(0,puVar8,1,puVar6);
      }
      uVar15 = *(ulong *)(puVar10 + 0x10);
      puVar5 = (undefined *)(uVar15 + 1);
      puVar6 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar15) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        puVar8 = puVar5;
        func_0x0001022cd1bc(puVar6,puVar5,1,puVar10);
      }
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined **)(puVar6 + uVar15 * 8 + 0x20) = puVar7;
    }
    uVar15 = unaff_x20;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (uVar15 == 0) {
      uVar13 = 0;
      puVar7 = (undefined *)0xe000000000000000;
      puVar5 = puVar8;
    }
    else {
      uVar13 = uVar15;
      func_0x000107c5faec();
      puVar5 = puVar8;
      func_0x000107c61170(uVar15);
      puVar7 = puVar8;
    }
    if ((param_1 & 1) != 0) {
      puVar5 = puVar7;
      func_0x000107c5fb78(uVar13,puVar7);
      func_0x000107c6142c(puVar7);
      uVar13 = 0x205d445b;
      puVar7 = (undefined *)0xe400000000000000;
    }
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    puVar8 = PTR_PTR_1126aa338;
    func_0x000107c610f8(PTR_PTR_1126aa338);
    func_0x000107c5fadc(uVar13,puVar7);
    func_0x000107c5fadc(uVar14,param_2);
    func_0x000107c6142c(param_2);
    uVar9 = 0;
    FUN_1022cd9cc(0);
    puVar5 = puVar6;
    func_0x000107c5fc48(puVar6,uVar9);
    func_0x000107c4730c(puVar8);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar7);
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(puVar5);
    return puVar8;
  }
  uVar13 = uVar15;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar15);
  uVar15 = 0;
  uVar12 = *(ulong *)(uVar13 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    plVar11 = (long *)(uVar13 + 0x28 + uVar15 * 0x10);
    do {
      if (uVar12 == uVar15) {
        func_0x000107c6142c();
        param_1 = param_1 & 0xffffffff;
        func_0x0001022dce28();
        puVar7 = PTR_PTR_1133566d8;
        uVar15 = uVar13;
        goto joined_r0x0001022cc058;
      }
      if (*(ulong *)(uVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cc228);
        (*pcVar2)();
      }
      uVar15 = uVar15 + 1;
      lVar3 = plVar11[-1];
      puVar7 = (undefined *)*plVar11;
      func_0x000107c61434(puVar7);
      puVar8 = puVar7;
      func_0x000107c5fadc();
      lVar4 = lVar3;
      FUN_1022cc880();
      func_0x000107c6142c(puVar7);
      func_0x000107c61170(lVar3);
      plVar11 = plVar11 + 2;
    } while (lVar4 == 0);
    puVar7 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar8 = (undefined *)(*(long *)(puVar6 + 0x10) + 1);
      puVar5 = (undefined *)0x0;
      func_0x0001022cd1bc(0,puVar8,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar7 = (undefined *)(uVar1 + 1);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      puVar8 = puVar7;
      func_0x0001022cd1bc(puVar6,puVar7,1,puVar5);
    }
    *(undefined **)(puVar6 + 0x10) = puVar7;
    *(long *)(puVar6 + uVar1 * 8 + 0x20) = lVar4;
  } while( true );
}



/* Entry: 1022cc268; end: 1022cc353;  */

void FUN_1022cc268(ulong param_1)

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
    FUN_1022cd0fc(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1022cd84c(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cc350);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cc354);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cc34c);
  (*pcVar1)();
}



/* Entry: 1022cc354; end: 1022cc357;  */

void FUN_1022cc354(void)

{
  return;
}



/* Entry: 1022cc358; end: 1022cc6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022cc358(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x0001022dcda8();
  if ((param_1 & 1) == 0) {
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    FUN_1022cd9e8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c4a8a4(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
  }
  else {
    FUN_1022dcd48();
    uStack_88 = 0x2c;
    uStack_80 = 0xe100000000000000;
    pcStack_d0 = (code *)&uStack_88;
    lVar5 = 0x7fffffffffffffff;
    func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1022cd788,&puStack_e0,param_1,param_2);
    lVar15 = *(long *)(lVar5 + 0x10);
    if (lVar15 == 0) {
      func_0x000107c6142c(lVar5);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,lVar15,0);
      puVar7 = PTR___sSSN_11034da80;
      puVar14 = (undefined8 *)(lVar5 + 0x38);
      do {
        puVar4 = puStack_98;
        puVar8 = (undefined *)puVar14[-3];
        uVar12 = puVar14[-2];
        uVar1 = puVar14[-1];
        uVar3 = *puVar14;
        func_0x000107c61434(uVar3);
        func_0x000107c5fb2c(puVar8,uVar12,uVar1,uVar3);
        uStack_88 = 0x20;
        uStack_80 = 0xe100000000000000;
        uStack_a8 = 0;
        uStack_a0 = 0xe000000000000000;
        puStack_e0 = puVar8;
        uStack_d8 = uVar12;
        func_0x000100e8b654();
        puVar6 = &uStack_88;
        puVar13 = &uStack_a8;
        func_0x000107c601fc(puVar6,puVar13,0,0,0,1,puVar7,puVar7,puVar7,puVar8,puVar8,puVar8);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar3);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        puStack_98 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        }
        puVar8 = puStack_98;
        puVar14 = puVar14 + 4;
        *(ulong *)(puStack_98 + 0x10) = uVar2 + 1;
        *(undefined8 **)(puStack_98 + uVar2 * 0x10 + 0x20) = puVar6;
        *(undefined8 **)(puStack_98 + uVar2 * 0x10 + 0x28) = puVar13;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      func_0x000107c6142c(lVar5);
    }
    puVar7 = PTR_PTR_1126ae568;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar15 = *(long *)(unaff_x20 + _DAT_112e7c030);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar15 == 0) {
      func_0x000107c6142c(puVar8);
    }
    else {
      puVar9 = puVar8;
      func_0x000107c5fc48(puVar8,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar8);
      puVar8 = &UNK_1104f1eb0;
      func_0x000107c613fc(&UNK_1104f1eb0,0x18,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_c0 = FUN_1022cd7dc;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0x42000000;
      pcStack_d0 = FUN_1022cc73c;
      puStack_c8 = &UNK_1104f1ec8;
      ppuVar10 = &puStack_e0;
      puStack_b8 = puVar8;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_b8;
      func_0x000107c61174(puVar7);
      func_0x000107c61574(puVar8);
      pcStack_c0 = FUN_1022cc7a8;
      puStack_b8 = (undefined *)0x0;
      puStack_e0 = puVar4;
      uStack_d8 = 0x42000000;
      pcStack_d0 = (code *)&UNK_1012519d0;
      puStack_c8 = &UNK_1104f1ef0;
      ppuVar11 = &puStack_e0;
      func_0x000107c60bc4();
      func_0x000107c4315c(lVar15);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c615e8(lVar15);
      func_0x000107c61170(puVar9);
    }
  }
  return puVar7;
}



/* Entry: 1022cc6dc; end: 1022cc73b;  */

void FUN_1022cc6dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1022cd9e8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c4d664(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1022cc73c; end: 1022cc7a7;  */

void FUN_1022cc73c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1022cd9e8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022cc7a8; end: 1022cc7ab;  */

void FUN_1022cc7a8(void)

{
  return;
}



/* Entry: 1022cc7ac; end: 1022cc807; -[_TtC32SCGenAIDreamsScopeImplementation22GenAIAISnapsInteractor init] */

void FUN_1022cc7ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIDreamsScopeImplementation.GenAIAISnapsInteractor",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cc7d8);
  (*pcVar1)();
}



/* Entry: 1022cc808; end: 1022cc87f; -[_TtC32SCGenAIDreamsScopeImplementation22GenAIAISnapsInteractor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022cc808(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7c020));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7c028));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7c030));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7c038));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7c040));
  if (*(long *)(param_1 + _DAT_112e7c048) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1022cc880; end: 1022cca2f;  */

ulong FUN_1022cc880(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong unaff_x20;
  long *plVar8;
  ulong uVar9;
  
  func_0x000107c2bcd4();
  func_0x000107c61180();
  lVar3 = param_1;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  lVar7 = *(long *)(lVar3 + 0x10);
  plVar8 = (long *)(lVar3 + 0x28);
  uVar9 = 0xffffffffffffffff;
  while( true ) {
    if (uVar9 - lVar7 == -1) {
      unaff_x20 = 0;
      goto LAB_1022cc94c;
    }
    uVar9 = uVar9 + 1;
    if (*(ulong *)(lVar3 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cc974);
      (*pcVar2)();
    }
    uVar1 = plVar8[-1];
    puVar6 = (undefined *)*plVar8;
    uVar4 = unaff_x20;
    func_0x000107c5faec();
    if (uVar4 == uVar1 && puVar5 == puVar6) break;
    plVar8 = plVar8 + 2;
    puVar6 = puVar5;
    func_0x000107c605b8();
    func_0x000107c6142c(puVar5);
    puVar5 = puVar6;
    if ((uVar4 & 1) != 0) {
LAB_1022cc944:
      func_0x000107c61174();
LAB_1022cc94c:
      func_0x000107c6142c(lVar3);
      return unaff_x20;
    }
  }
  func_0x000107c6142c(puVar5);
  goto LAB_1022cc944;
}



/* Entry: 1022cca30; end: 1022cca4f;  */

void FUN_1022cca30(void)

{
  func_0x000107c61168(&PTR_PTR_112833c50);
  return;
}



/* Entry: 1022cca50; end: 1022cca6b;  */

void FUN_1022cca50(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104f1e90;
  if (lRam0000000112e7c078 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e7c078 = param_1;
  }
  return;
}



/* Entry: 1022cca6c; end: 1022ccc1f;  */

void FUN_1022cca6c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1022ccc20; end: 1022ccc33;  */

bool FUN_1022ccc20(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1022ccc34; end: 1022ccc77;  */

void FUN_1022ccc34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1022ccc78; end: 1022ccc9f;  */

void FUN_1022ccc78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1022ccca0; end: 1022cccbb;  */

void FUN_1022ccca0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1022cccbc; end: 1022ccd27;  */

void FUN_1022cccbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112e7c0e8;
  FUN_1022cdac8(0x112e7c0e8,&UNK_10da86cb4);
  uVar2 = 0x112e7c0f0;
  FUN_1022cdac8(0x112e7c0f0,&UNK_10da86c5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1022ccd28; end: 1022ccd9f;  */

undefined8 FUN_1022ccd28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 1022ccda0; end: 1022cce87;  */

undefined1 * FUN_1022ccda0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1022cce88; end: 1022cceef;  */

/* WARNING: Possible PIC construction at 0x0001022cceb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022ccebc) */
/* WARNING: Removing unreachable block (ram,0x0001022ccec0) */

void FUN_1022cce88(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x1022ccebc;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1022ccef0; end: 1022cd0ab;  */

ulong FUN_1022ccef0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022ccfd4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022ccfd8);
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
  FUN_1022cd9e8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cd0ac);
  (*pcVar2)();
}



/* Entry: 1022cd0ac; end: 1022cd0fb;  */

ulong FUN_1022cd0ac(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022ccfd4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022ccfd8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c3bf0;
    func_0x000107c61168(PTR_PTR_1126c3bf0);
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
    puVar4 = PTR_PTR_1126c3bf0;
    func_0x000107c61168(PTR_PTR_1126c3bf0);
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
  FUN_1022cd9e8(0,0x112e7c0b0,&PTR_PTR_1126c3bf0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022cd0ac);
  (*pcVar2)();
}



/* Entry: 1022cd0fc; end: 1022cd2df;  */

void FUN_1022cd0fc(long param_1)

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
  FUN_1022cd2f4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1022cd2e0; end: 1022cd2f3;  */

ulong FUN_1022cd2e0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd42c);
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
  (*(code *)0x1022cd4cc)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd428);
      (*pcVar1)();
    }
    FUN_1022cd664(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1022cd2f4; end: 1022cd42b;  */

ulong FUN_1022cd2f4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd42c);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd428);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1022cd42c; end: 1022cd54b;  */

undefined * FUN_1022cd42c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e7c080;
    func_0x0001022cce10(0x112e7c080,&PTR_PTR_1126aa338,0x112e7c088,&UNK_10da86b90);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1022cd54c; end: 1022cd663;  */

long FUN_1022cd54c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022cd660);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022cd664);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1022cd9e8(0,0x112e7c080,&PTR_PTR_1126aa338);
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
      FUN_1022cd9e8(0,0x112e7c080,&PTR_PTR_1126aa338);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022cd65c);
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



/* Entry: 1022cd664; end: 1022cd787;  */

long FUN_1022cd664(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022cd784);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022cd788);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d5b0a0;
        func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d5b0a0;
      func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022cd780);
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



/* Entry: 1022cd788; end: 1022cd7db;  */

uint FUN_1022cd788(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1022cd7dc; end: 1022cd7ff;  */

void FUN_1022cd7dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_1022cd9e8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1022cd800; end: 1022cd84b;  */

void FUN_1022cd800(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1022cd84c; end: 1022cd9cb;  */

ulong FUN_1022cd84c(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd9cc);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd9c0);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1022cd9e8(0,0x112e7c080,&PTR_PTR_1126aa338);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd9c4);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cd9c8);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1022ccef0(uVar7,param_3,&PTR_PTR_1126aa338,0x112e7c080);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1022cd9cc; end: 1022cd9e7;  */

void FUN_1022cd9cc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104f20b0;
  if (lRam0000000112e7c0c8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e7c0c8 = param_1;
  }
  return;
}



/* Entry: 1022cd9e8; end: 1022cda27;  */

void FUN_1022cd9e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1022cda28; end: 1022cda3b;  */

void FUN_1022cda28(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104f2090;
  if (lRam0000000112e7c0c0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e7c0c0 = param_1;
  }
  return;
}



/* Entry: 1022cda3c; end: 1022cda7f;  */

void FUN_1022cda3c(long param_1,long *param_2,long param_3)

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



/* Entry: 1022cda80; end: 1022cdac7;  */

void FUN_1022cda80(void)

{
  FUN_1022cdac8(0x112e7c0d0,&UNK_10da86c24);
  return;
}



/* Entry: 1022cdac8; end: 1022cdb07;  */

void FUN_1022cdac8(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1022cd9cc(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1022cdb08; end: 1022cdb2b;  */

void FUN_1022cdb08(void)

{
  FUN_1022cdac8(0x112e7c0e0,&UNK_10da86c8c);
  return;
}



/* Entry: 1022cdb2c; end: 1022cdb67;  */

void FUN_1022cdb2c(long param_1,long param_2)

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



/* Entry: 1022cdb68; end: 1022cdb6f; -[_TtC32SCGenAIDreamsScopeImplementation42GenAIDreamsComposerContainerViewController pageViewName] */

undefined8 FUN_1022cdb68(void)

{
  return 0x58;
}



/* Entry: 1022cdb70; end: 1022cdbb3; -[_TtC32SCGenAIDreamsScopeImplementation42GenAIDreamsComposerContainerViewController initWithValdiView:] */

void FUN_1022cdb70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 1022cdbb4; end: 1022cdc6b; -[_TtC32SCGenAIDreamsScopeImplementation42GenAIDreamsComposerContainerViewController initWithNibName:bundle:] */

undefined1 * FUN_1022cdbb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 1022cdc6c; end: 1022cdce7; -[_TtC32SCGenAIDreamsScopeImplementation42GenAIDreamsComposerContainerViewController initWithCoder:] */

undefined1 * FUN_1022cdc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1022cdce8; end: 1022cdd3b;  */

void FUN_1022cdce8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022cdd3c; end: 1022cdf07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022cdd3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e7c120) = 0;
  lVar1 = _DAT_112e7c138;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7c140) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7c130) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7c128) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar3,puVar2);
  uVar6 = *(undefined8 *)(*(long *)(puVar3 + _DAT_112e7c130) + _DAT_113074d00);
  puVar2 = &UNK_1104f2188;
  func_0x000107c613fc(&UNK_1104f2188,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar3);
  pcStack_70 = FUN_1022ce064;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_1104f21a0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar2);
  uVar5 = uVar6;
  func_0x000107c5c320(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  return puVar3;
}



/* Entry: 1022cdf08; end: 1022cdf7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022cdf08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e7c140);
    *(undefined8 *)(param_2 + _DAT_112e7c140) = param_1;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1022cdf7c; end: 1022cdfdb; -[_TtC32SCGenAIDreamsScopeImplementation34GenAIDreamsFullscreenActionHandler init] */

void FUN_1022cdf7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIDreamsScopeImplementation.GenAIDreamsFullscreenActionHandler",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022cdfa8);
  (*pcVar1)();
}



/* Entry: 1022cdfdc; end: 1022ce043; -[_TtC32SCGenAIDreamsScopeImplementation34GenAIDreamsFullscreenActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022cdff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ce018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022cdffc) */
/* WARNING: Removing unreachable block (ram,0x0001022ce01c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022cdfdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7c120));
  return;
}



/* Entry: 1022ce044; end: 1022ce063;  */

void FUN_1022ce044(void)

{
  func_0x000107c61168(&PTR_PTR_112833e28);
  return;
}



/* Entry: 1022ce064; end: 1022ce087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ce064(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e7c140);
    *(undefined8 *)(lVar1 + _DAT_112e7c140) = param_1;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1022ce088; end: 1022ce09f; -[_TtC32SCGenAIDreamsScopeImplementation34GenAIDreamsNewGenerationDataSource didDismissMemoriesOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ce088(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e7c170);
  *(undefined8 *)(param_1 + _DAT_112e7c170) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1022ce0a0; end: 1022ce0a3; -[_TtC32SCGenAIDreamsScopeImplementation34GenAIDreamsNewGenerationDataSource launcher:willOpenItemWithSnapId:] */

void FUN_1022ce0a0(void)

{
  return;
}



/* Entry: 1022ce0a4; end: 1022ce0eb; -[_TtC32SCGenAIDreamsScopeImplementation34GenAIDreamsNewGenerationDataSource init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ce0a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e7c170) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022ce0ec; end: 1022ce11f;  */

void FUN_1022ce0ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022ce120; end: 1022ce12f; -[_TtC32SCGenAIDreamsScopeImplementation34GenAIDreamsNewGenerationDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ce120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e7c170));
  return;
}



/* Entry: 1022ce130; end: 1022ce14f;  */

void FUN_1022ce130(void)

{
  func_0x000107c61168(&PTR_PTR_112833f08);
  return;
}



/* Entry: 1022ce150; end: 1022ce2b7;  */

/* WARNING: Possible PIC construction at 0x0001022ce1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ce1bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022ce1ac) */

void FUN_1022ce150(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x0001022dcc40();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c4d664(uVar3,param_2,puVar2);
  }
  else {
    puVar2 = *(undefined **)(unaff_x20 + 0x38);
    func_0x000107c42eac();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ce204);
      (*pcVar1)();
    }
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1022ce2b8; end: 1022ce30b;  */

void FUN_1022ce2b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022ce30c; end: 1022ce49f;  */

void FUN_1022ce30c(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  *(ulong *)(unaff_x20 + 0x38) = param_1;
  func_0x000107c61174();
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar3 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    FUN_1022dcbc0();
    *(byte *)(unaff_x20 + 0x20) = (byte)param_1 & 1;
    if ((param_1 & 1) == 0) {
      if (uVar3 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = uVar3;
        func_0x000107c42334();
      }
    }
    else {
      func_0x0001022dcc00();
    }
    *(ulong *)(unaff_x20 + 0x28) = param_1;
    func_0x0001022dcc84();
    *(byte *)(unaff_x20 + 0x21) = (byte)param_1 & 1;
    if ((param_1 & 1) == 0) {
      if (uVar3 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = uVar3;
        func_0x000107c4232c();
      }
    }
    else {
      func_0x0001022dccc4();
    }
    *(ulong *)(unaff_x20 + 0x30) = param_1;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar4);
    func_0x000107c46ed0(puVar2,param_2,uVar5);
    func_0x000107c4d664(uVar4,param_2,puVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar4);
    func_0x000107c46ed0(puVar2,param_2,uVar5);
    func_0x000107c4d664(uVar4,param_2,puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ce4a0);
  (*pcVar1)();
}



/* Entry: 1022ce4a0; end: 1022cffc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022ce4a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,long param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  long param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long unaff_x20;
  undefined8 uVar24;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(long *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_29;
  *(undefined8 *)(unaff_x20 + 0x48) = param_12;
  *(undefined8 *)(unaff_x20 + 0x50) = param_13;
  *(undefined8 *)(unaff_x20 + 0x58) = param_30;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = param_4;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar5 = param_5;
  func_0x000107c44588();
  func_0x000107c61180();
  lVar6 = param_6;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x0001000285a8(0x112d4bbf0,&UNK_10d9125f0);
    auStack_70[0] = param_2;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar7 = param_9;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar8 = auStack_70;
    func_0x0001000838ec();
    uVar9 = param_19;
    func_0x000107c4cfbc();
    func_0x000107c61180();
    uVar23 = *(undefined8 *)(param_20 + _DAT_112fd9a58);
    uVar24 = *(undefined8 *)(param_25 + _DAT_112ff60c0);
    lVar10 = 0;
    FUN_1022db3d8();
    lVar11 = lVar10;
    func_0x000107c610f8();
    lVar21 = lVar11 + _DAT_112e7c4e8;
    *(undefined8 *)(lVar21 + 8) = 0;
    func_0x000107c61614(lVar21,0);
    lVar21 = _DAT_112e7c528;
    puVar12 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar24);
    func_0x000107c61174();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    lVar21 = _DAT_112e7c530;
    puVar12 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    lVar21 = _DAT_112e7c540;
    puVar12 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    lVar21 = _DAT_112e7c550;
    puVar12 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    *(undefined8 *)(lVar11 + _DAT_112e7c558) = 0;
    lVar21 = _DAT_112e7c560;
    puVar12 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    lVar21 = _DAT_112e7c568;
    puVar12 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    lVar21 = _DAT_112e7c570;
    puVar12 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    *(undefined8 *)(lVar11 + _DAT_112e7c578) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c580) = 0;
    lVar21 = _DAT_112e7c588;
    uVar13 = 0;
    FUN_1022ce130();
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(lVar11 + lVar21) = uVar13;
    lVar21 = _DAT_112e7c590;
    uVar14 = 0;
    FUN_1022dc3e0();
    uVar13 = uVar14;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(lVar11 + lVar21) = uVar13;
    lVar21 = _DAT_112e7c598;
    uVar15 = 0;
    FUN_1022d12a0();
    uVar13 = uVar15;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(lVar11 + lVar21) = uVar13;
    lVar21 = _DAT_112e7c5a0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(lVar11 + lVar21) = uVar14;
    lVar21 = _DAT_112e7c5a8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(lVar11 + lVar21) = uVar15;
    *(undefined8 *)(lVar11 + _DAT_112e7c5b0) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c5b8) = 0;
    lVar21 = _DAT_112e7c5c0;
    puVar12 = PTR_PTR_1126ae568;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar21) = puVar12;
    lVar21 = _DAT_112e7c5c8;
    *(undefined8 *)(lVar11 + _DAT_112e7c5c8) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c5e0) = 0;
    lVar19 = _DAT_112e7c5e8;
    *(undefined8 *)(lVar11 + _DAT_112e7c5e8) = 0;
    lVar2 = _DAT_112e7c5f0;
    puVar12 = PTR_PTR_1126ae568;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar2) = puVar12;
    lVar2 = _DAT_112e7c5f8;
    *(undefined8 *)(lVar11 + _DAT_112e7c5f8) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c620) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c628) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c630) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c650) = 0;
    lVar16 = _DAT_112e7c670;
    puVar12 = PTR_PTR_1126ae568;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + lVar16) = puVar12;
    puVar1 = (undefined8 *)(lVar11 + _DAT_112e7c690);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar11 + _DAT_112e7c6a0) = 0;
    *(undefined8 *)(lVar11 + _DAT_112e7c6a8) = 0;
    *(long *)(lVar11 + _DAT_112e7c4f0) = param_1;
    *(undefined8 *)(lVar11 + _DAT_112e7c4f8) = uVar4;
    *(undefined8 *)(lVar11 + _DAT_112e7c500) = uVar5;
    *(long *)(lVar11 + _DAT_112e7c508) = lVar6;
    *(undefined8 *)(lVar11 + _DAT_112e7c510) = param_11;
    *(undefined8 *)(lVar11 + _DAT_112e7c518) = param_7;
    *(undefined8 *)(lVar11 + _DAT_112e7c520) = param_8;
    *(undefined8 *)(lVar11 + _DAT_112e7c538) = param_9;
    uVar13 = *(undefined8 *)(param_1 + _DAT_113074cd0);
    *(undefined8 *)(lVar11 + _DAT_112e7c548) = uVar13;
    *(undefined8 *)(lVar11 + _DAT_112e7c5d0) = param_12;
    *(undefined8 *)(lVar11 + _DAT_112e7c600) = param_15;
    *(undefined8 *)(lVar11 + _DAT_112e7c5d8) = param_13;
    func_0x0001022ce2ec();
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(lVar6);
    func_0x000107c61174(uVar13);
    uVar13 = param_17;
    FUN_1022ce30c();
    func_0x000107c61170(param_17);
    *(undefined8 *)(lVar11 + _DAT_112e7c608) = uVar13;
    lVar16 = lVar6;
    func_0x000108c2be60();
    if ((int)lVar16 != 0) {
      FUN_1022ce044(0);
      func_0x000107c610f8();
      func_0x000107c61174(param_1);
      uVar13 = param_14;
      func_0x000107c61174();
      FUN_1022cdd3c();
      uVar14 = *(undefined8 *)(lVar11 + lVar2);
      *(undefined8 *)(lVar11 + lVar2) = uVar13;
      func_0x000107c61170(uVar14);
    }
    uVar13 = *(undefined8 *)(lVar11 + lVar19);
    *(undefined8 *)(lVar11 + lVar19) = param_16;
    func_0x000107c61174();
    func_0x000107c61170(uVar13);
    uVar13 = *(undefined8 *)(param_10 + _DAT_113083898);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(lVar11 + lVar21);
    *(undefined8 *)(lVar11 + lVar21) = uVar13;
    func_0x000107c615e8(uVar14);
    *(undefined8 *)(lVar11 + _DAT_112e7c638) = param_31;
    *(undefined8 *)(lVar11 + _DAT_112e7c640) = param_28;
    *(undefined8 *)(lVar11 + _DAT_112e7c648) = param_32;
    *(undefined8 *)(lVar11 + _DAT_112e7c610) = param_18;
    *(undefined8 **)(lVar11 + _DAT_112e7c658) = puVar8;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar8);
    func_0x000107c61174();
    uVar13 = param_12;
    func_0x000107c43d48(param_12);
    func_0x000107c61180();
    uVar14 = param_24;
    func_0x000107c4b268(param_24);
    func_0x000107c61180();
    uVar17 = 0;
    FUN_1022cca30(0);
    func_0x000107c610f8();
    uVar15 = uVar9;
    FUN_1022cafbc(uVar9,uVar13,uVar14,uVar17);
    *(undefined8 *)(lVar11 + _DAT_112e7c660) = uVar15;
    *(undefined8 *)(lVar11 + _DAT_112e7c668) = uVar23;
    *(undefined8 *)(lVar11 + _DAT_112e7c618) = param_21;
    *(undefined8 *)(lVar11 + _DAT_112e7c678) = param_22;
    *(undefined8 *)(lVar11 + _DAT_112e7c680) = param_23;
    *(undefined8 *)(lVar11 + _DAT_112e7c688) = uVar24;
    *(undefined8 *)(lVar11 + _DAT_112e7c698) = param_26;
    puVar12 = PTR_s_init_1125d9248;
    lStack_80 = lVar11;
    lStack_78 = lVar10;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    plVar18 = &lStack_80;
    func_0x000107c61154(plVar18,puVar12);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(param_10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_11);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_32);
    func_0x000107c61170(param_18);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    lVar19 = 0;
    FUN_1022d0d40();
    lVar21 = lVar19;
    func_0x000107c610f8();
    lVar6 = lVar21 + _DAT_112e7c3f8;
    *(undefined8 *)(lVar6 + 8) = 0;
    func_0x000107c61614(lVar6,0);
    *(undefined8 *)(lVar21 + _DAT_112e7c430) = 0;
    *(undefined8 *)(lVar21 + _DAT_112e7c438) = 0;
    *(undefined8 *)(lVar21 + _DAT_112e7c440) = 0;
    *(long *)(lVar21 + _DAT_112e7c400) = param_1;
    *(undefined8 *)(lVar21 + _DAT_112e7c408) = param_27;
    *(undefined8 *)(lVar21 + _DAT_112e7c410) = param_29;
    *(undefined8 *)(lVar21 + _DAT_112e7c420) = param_30;
    *(undefined8 *)(lVar21 + _DAT_112e7c428) = param_33;
    *(long **)(lVar21 + _DAT_112e7c418) = plVar18;
    puVar12 = PTR_s_init_1125d9248;
    lStack_90 = lVar21;
    lStack_88 = lVar19;
    func_0x000107c61174();
    func_0x000107c61174(param_29);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    plVar20 = &lStack_90;
    func_0x000107c61154(plVar20,puVar12);
    *(undefined8 *)(unaff_x20 + 0x40) = param_33;
    *(undefined ***)((long)plVar18 + _DAT_112e7c4e8 + 8) = &PTR_DAT_1104f21e8;
    func_0x000107c61604((long)plVar18 + _DAT_112e7c4e8,plVar20);
    lVar21 = 0;
    FUN_1022d10c8();
    lVar6 = lVar21;
    func_0x000107c610f8();
    *(long *)(lVar6 + _DAT_112e7c470) = param_1;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112e7c478);
    *puVar1 = plVar20;
    puVar1[1] = &PTR_DAT_1104f21e8;
    *(long **)(lVar6 + _DAT_112e7c480) = plVar18;
    puVar12 = PTR_s_init_1125d9248;
    lStack_a0 = lVar6;
    lStack_98 = lVar21;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61174(plVar18);
    func_0x000107c61174();
    plVar22 = &lStack_a0;
    func_0x000107c61154(plVar22,puVar12);
    func_0x000107c61170(plVar20);
    func_0x000107c61170(plVar18);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_32);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_33);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_19);
    *(long **)(unaff_x20 + 0x60) = plVar22;
    *(undefined ***)((long)plVar20 + _DAT_112e7c3f8 + 8) = &PTR_DAT_1104f22a8;
    func_0x000107c61604((long)plVar20 + _DAT_112e7c3f8,plVar22);
    func_0x000107c61170(plVar20);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1022cf238);
  (*pcVar3)();
}



/* Entry: 1022cffc8; end: 1022d000f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022cffc8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x60);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_1022d01b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1022d0010; end: 1022d00bb;  */

undefined8 FUN_1022d0010(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 1022d00bc; end: 1022d0107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d00bc(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_1022d01b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1022d0108; end: 1022d014b;  */

undefined8 FUN_1022d0108(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x60);
  *(undefined8 *)(*unaff_x20 + 0x60) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 1022d014c; end: 1022d01b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022d014c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e7c440;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e7c440);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1022d01b8; end: 1022d04a7;  */

/* WARNING: Possible PIC construction at 0x0001022d0260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d02f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d039c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d03c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d03f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d03fc) */
/* WARNING: Removing unreachable block (ram,0x0001022d03c8) */
/* WARNING: Removing unreachable block (ram,0x0001022d03a0) */
/* WARNING: Removing unreachable block (ram,0x0001022d034c) */
/* WARNING: Removing unreachable block (ram,0x0001022d02f8) */
/* WARNING: Removing unreachable block (ram,0x0001022d0264) */
/* WARNING: Removing unreachable block (ram,0x0001022d0448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d01b8(void)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1104f2288;
  func_0x000107c613fc(&UNK_1104f2288,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_1022d0fd0;
  FUN_1022d12c0(FUN_1022d0fd0,puVar1);
  func_0x000107c61578(puVar1,2);
  if (pcVar2 != (code *)0x0) {
    func_0x000107c61174(pcVar2);
    func_0x000107c5a050();
    FUN_1022d014c();
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 1022d04a8; end: 1022d05e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d04a8(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112e7c3f8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001022d0530();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1022d05e8; end: 1022d096f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d05e8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8();
  func_0x000107c47ac0();
  puVar3 = puVar2;
  func_0x000107c4f044();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c53fcc();
    func_0x000107c61170(puVar3);
  }
  puVar3 = PTR_PTR_1126aead0;
  func_0x000107c610f8(PTR_PTR_1126aead0);
  func_0x000107c47998();
  func_0x000103f30268(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar3);
  puVar4 = puVar3;
  func_0x000103f300c8();
  lVar1 = _DAT_11302f2a0;
  func_0x000107c61428(puVar4 + _DAT_11302f2a0,auStack_58,1,0);
  func_0x000107c61604(puVar4 + lVar1);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112e7c420));
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c400) + _DAT_113074ca8);
  func_0x000107c615f0(uVar5);
  func_0x000107c3e2c0();
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7c430);
  *(undefined **)(unaff_x20 + _DAT_112e7c430) = puVar2;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1022d0970; end: 1022d09d7;  */

void FUN_1022d0970(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1022d09d8; end: 1022d09db; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation generativeAIOnboardingScopeWillCompleteWithCancelled:] */

void FUN_1022d09d8(void)

{
  return;
}



/* Entry: 1022d09dc; end: 1022d0a27; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation generativeAIOnboardingScopeDidCompleteWithCancelled:genAIIdentity:] */

/* WARNING: Possible PIC construction at 0x0001022d0a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0a14) */

void FUN_1022d09dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1022d0ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1022d0a28; end: 1022d0a37; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation generativeAIOnboardingScopeGetSettingsExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e7c428));
  return;
}



/* Entry: 1022d0a38; end: 1022d0b17;  */

/* WARNING: Possible PIC construction at 0x0001022d0a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0abc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0a6c) */
/* WARNING: Removing unreachable block (ram,0x0001022d0ac0) */
/* WARNING: Removing unreachable block (ram,0x0001022d0adc) */
/* WARNING: Removing unreachable block (ram,0x0001022d0ac4) */
/* WARNING: Removing unreachable block (ram,0x0001022d0ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0a38(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c410);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c43d50(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c418) + _DAT_112e7c518));
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022d0b18; end: 1022d0b3f; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation dreamsOnboardingScopeDidSuccessfullyComplete] */

void FUN_1022d0b18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022d0a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022d0b40; end: 1022d0bc3; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation dreamsOnboardingScopeDidCancel] */

/* WARNING: Possible PIC construction at 0x0001022d0b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0b80) */
/* WARNING: Removing unreachable block (ram,0x0001022d0b9c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0b40(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022d0bc4; end: 1022d0c2f; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation dreamsOnboardingScopeDidCompleteWithOpenSettingsRequest] */

/* WARNING: Possible PIC construction at 0x0001022d0c00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0c04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0bc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e7c410);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_1022d05e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022d0c30; end: 1022d0c37; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation dreamsOnboardingScopeGetSettingsScopeExposer] */

void FUN_1022d0c30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1022d0c38; end: 1022d0c97; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation init] */

void FUN_1022d0c38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIDreamsScopeImplementation.GenAIDreamsScopeRouterImplementation",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d0c64);
  (*pcVar1)();
}



/* Entry: 1022d0c98; end: 1022d0d3f; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022d0cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0d08) */
/* WARNING: Removing unreachable block (ram,0x0001022d0ce8) */
/* WARNING: Removing unreachable block (ram,0x0001022d0cc8) */
/* WARNING: Removing unreachable block (ram,0x0001022d0d28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0c98(long param_1)

{
  FUN_1022d0fac(param_1 + _DAT_112e7c3f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7c400));
  return;
}



/* Entry: 1022d0d40; end: 1022d0d5f;  */

void FUN_1022d0d40(void)

{
  func_0x000107c61168(&PTR_PTR_112833fc0);
  return;
}



/* Entry: 1022d0d60; end: 1022d0e57;  */

/* WARNING: Possible PIC construction at 0x0001022d0de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d08b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0908) */
/* WARNING: Removing unreachable block (ram,0x0001022d090c) */
/* WARNING: Removing unreachable block (ram,0x0001022d0924) */
/* WARNING: Removing unreachable block (ram,0x0001022d0934) */
/* WARNING: Removing unreachable block (ram,0x0001022d093c) */
/* WARNING: Removing unreachable block (ram,0x0001022d08b4) */
/* WARNING: Removing unreachable block (ram,0x0001022d0944) */
/* WARNING: Removing unreachable block (ram,0x0001022d08c8) */
/* WARNING: Removing unreachable block (ram,0x0001022d0868) */
/* WARNING: Removing unreachable block (ram,0x0001022d0884) */
/* WARNING: Removing unreachable block (ram,0x0001022d086c) */
/* WARNING: Removing unreachable block (ram,0x0001022d0888) */
/* WARNING: Removing unreachable block (ram,0x0001022d0774) */
/* WARNING: Removing unreachable block (ram,0x0001022d0dfc) */
/* WARNING: Removing unreachable block (ram,0x0001022d0e00) */
/* WARNING: Removing unreachable block (ram,0x0001022d0dec) */
/* WARNING: Removing unreachable block (ram,0x0001022d0958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0d60(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c4f078();
  func_0x000107c61180();
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c430);
  if (param_1 == 0) {
    if (lVar1 != 0) {
      return;
    }
    func_0x000107c61174(0);
    lVar1 = *(long *)(unaff_x20 + _DAT_112e7c420);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c43d50(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c418) + _DAT_112e7c518));
      func_0x000107c61180();
      func_0x000107c5c734();
      func_0x000107c61180();
    }
  }
  else if (lVar1 == 0) {
    func_0x000107c61174(0);
  }
  else {
    FUN_1022d0fd8(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c61174(lVar1);
    func_0x000107c61174(param_1);
    func_0x000107c60118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022d0e58; end: 1022d0ea7; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation presentationControllerDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001022d0e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0e94) */

void FUN_1022d0e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1022d0d60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1022d0ea8; end: 1022d0ecb;  */

void FUN_1022d0ea8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1022d0ecc; end: 1022d0fab;  */

/* WARNING: Possible PIC construction at 0x0001022d0efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d0f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d0f00) */
/* WARNING: Removing unreachable block (ram,0x0001022d0f54) */
/* WARNING: Removing unreachable block (ram,0x0001022d0f70) */
/* WARNING: Removing unreachable block (ram,0x0001022d0f58) */
/* WARNING: Removing unreachable block (ram,0x0001022d0f74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0ecc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c428);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c43d50(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c418) + _DAT_112e7c518));
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022d0fac; end: 1022d0fcf;  */

undefined8 FUN_1022d0fac(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1022d0fd0; end: 1022d0fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d0fd0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112e7c3f8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001022d0530();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1022d0fd8; end: 1022d1017;  */

void FUN_1022d0fd8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1022d1018; end: 1022d101b; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation navigationWrappedUIContainerPresentationDidDismiss] */

void FUN_1022d1018(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001022d0738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022d101c; end: 1022d101f; -[_TtC32SCGenAIDreamsScopeImplementation36GenAIDreamsScopeRouterImplementation selfieOnboardingSettingsScopeWantsToDismiss] */

void FUN_1022d101c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001022d0738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022d1020; end: 1022d107f; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsScopeWorkflow init] */

void FUN_1022d1020(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIDreamsScopeImplementation.GenAIDreamsScopeWorkflow",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d104c);
  (*pcVar1)();
}



/* Entry: 1022d1080; end: 1022d10c7; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsScopeWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022d109c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d10a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d1080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7c470));
  return;
}


