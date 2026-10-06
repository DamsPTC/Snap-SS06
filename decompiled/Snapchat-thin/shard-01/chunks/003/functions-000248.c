/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f441dc; end: 100f4422f;  */

void FUN_100f441dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f44230; end: 100f44277; -[SCAddPaidPartnershipPageEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d238;
  func_0x000107c61428(param_1 + _DAT_112d4d238,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f44278; end: 100f442db; -[SCAddPaidPartnershipPageEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d238;
  func_0x000107c61428(param_1 + _DAT_112d4d238,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f442dc; end: 100f445df;  */

/* WARNING: Possible PIC construction at 0x000100f44458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f445a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f445b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f44500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f444f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f44504) */
/* WARNING: Removing unreachable block (ram,0x000100f44524) */
/* WARNING: Removing unreachable block (ram,0x000100f44554) */
/* WARNING: Removing unreachable block (ram,0x000100f44544) */
/* WARNING: Removing unreachable block (ram,0x000100f44584) */
/* WARNING: Removing unreachable block (ram,0x000100f44574) */
/* WARNING: Removing unreachable block (ram,0x000100f44564) */
/* WARNING: Removing unreachable block (ram,0x000100f445b4) */
/* WARNING: Removing unreachable block (ram,0x000100f445a4) */
/* WARNING: Removing unreachable block (ram,0x000100f44594) */
/* WARNING: Removing unreachable block (ram,0x000100f4448c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100f4447c) */
/* WARNING: Removing unreachable block (ram,0x000100f4446c) */
/* WARNING: Removing unreachable block (ram,0x000100f4445c) */
/* WARNING: Removing unreachable block (ram,0x000100f444f4) */

void FUN_100f442dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3ff88();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3ffcc();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c3ffe4();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c5e1d0();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c5b398();
            func_0x000107c61180();
            if (lVar7 != 0) {
              func_0x000107c41420();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar8 = 0;
                FUN_100f43b84();
                func_0x000107c613fc();
                *(undefined8 *)(lVar8 + 0x50) = 0;
                *(undefined8 *)(lVar8 + 0x58) = 0;
                *(long *)(lVar8 + 0x10) = lVar1;
                *(long *)(lVar8 + 0x18) = lVar2;
                *(long *)(lVar8 + 0x20) = lVar3;
                *(long *)(lVar8 + 0x28) = lVar4;
                *(long *)(lVar8 + 0x30) = lVar5;
                *(long *)(lVar8 + 0x38) = lVar6;
                *(long *)(lVar8 + 0x40) = lVar7;
                *(long *)(lVar8 + 0x48) = unaff_x20;
                func_0x000107c61174();
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(lVar7);
                func_0x000107c61174(unaff_x20);
                func_0x000100f42c74();
                lVar1 = unaff_x20;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100f445e0; end: 100f44607; -[SCAddPaidPartnershipPageEntryPoint begin] */

void FUN_100f445e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f442dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f44608; end: 100f446b7;  */

/* WARNING: Possible PIC construction at 0x000100f44650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f44654) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44608(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4d240);
  if (lVar1 == 0) {
    func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_end_1125c29d0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(lVar1);
    func_0x000107c5d17c(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100f446b8; end: 100f446eb; -[SCAddPaidPartnershipPageEntryPoint end] */

void FUN_100f446b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f44608();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f446ec; end: 100f44b17;  */

void FUN_100f446ec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53680();
        }
        else {
          uVar2 = 0xd00000000000001f;
          if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef10e4680)) ||
             (func_0x000107c605b8(0xd00000000000001f,0x800000010ef1b980,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c536a4();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10e4660)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010ef1b9a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c536bc();
            }
            else {
              uVar2 = 0x536f725070616e73;
              if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
                 (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5943c();
              }
              else {
                uVar2 = 0;
                if (((param_2 == 0x767265536b636564) && (param_3 == -0x13ffffff8c9a9c97)) ||
                   (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c53e98();
                }
                else {
                  uVar2 = 0xd000000000000017;
                  if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) &&
                     (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "SCAddPaidPartnershipPageImpl/SCAddPaidPartnershipPageEntryPoint.swift"
                                        ,0x45,2,0x4b,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f44b18);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5a68c();
                }
              }
            }
          }
        }
        goto LAB_100f44778;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_100f44778:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f44b18; end: 100f44bc3; -[SCAddPaidPartnershipPageEntryPoint setValue:forIvarName:] */

void FUN_100f44b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f446ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f44bc4; end: 100f44ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44bc4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4d200,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4d208,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4d210,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4d218,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4d220,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4d228,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4d230,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4d238) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4d240) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f44ca8; end: 100f44cc7; -[SCAddPaidPartnershipPageEntryPoint init] */

void FUN_100f44ca8(void)

{
  FUN_100f44bc4();
  return;
}



/* Entry: 100f44cc8; end: 100f44cfb;  */

void FUN_100f44cc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f44cfc; end: 100f44da3; -[SCAddPaidPartnershipPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44cfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4d200);
  func_0x000107c61610(param_1 + _DAT_112d4d208);
  func_0x000107c61610(param_1 + _DAT_112d4d210);
  func_0x000107c61610(param_1 + _DAT_112d4d218);
  func_0x000107c61610(param_1 + _DAT_112d4d220);
  func_0x000107c61610(param_1 + _DAT_112d4d228);
  func_0x000107c61610(param_1 + _DAT_112d4d230);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4d238));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4d240));
  return;
}



/* Entry: 100f44da4; end: 100f44dc3;  */

void FUN_100f44da4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3838);
  return;
}



/* Entry: 100f44dc4; end: 100f44f37;  */

long FUN_100f44dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  func_0x000107c4c134(param_3);
  func_0x000107c61180();
  puVar1 = &UNK_11036c178;
  func_0x000107c613fc(&UNK_11036c178,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,unaff_x20);
  pcStack_60 = FUN_100f45064;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100f45154;
  puStack_68 = &UNK_11036c190;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  uVar4 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 100f44f38; end: 100f45063;  */

void FUN_100f44f38(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_2 != 0) {
    pcStack_78 = FUN_100f45114;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100b61264;
    puStack_80 = &UNK_11036c1d0;
    ppuVar3 = &puStack_98;
    lStack_70 = param_2;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(lVar2);
    pcStack_78 = FUN_100f45134;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = (undefined *)0x100f45150;
    puStack_80 = &UNK_11036c1f8;
    ppuVar4 = &puStack_98;
    lStack_70 = param_2;
    func_0x000107c60bc4(ppuVar4);
    lVar2 = lStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(lVar2);
    func_0x000107c4c6bc(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100f45064; end: 100f4506b;  */

void FUN_100f45064(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    pcStack_78 = FUN_100f45114;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100b61264;
    puStack_80 = &UNK_11036c1d0;
    ppuVar4 = &puStack_98;
    lStack_70 = lVar3;
    func_0x000107c60bc4(ppuVar4);
    lVar2 = lStack_70;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar2);
    pcStack_78 = FUN_100f45134;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = (undefined *)0x100f45150;
    puStack_80 = &UNK_11036c1f8;
    ppuVar5 = &puStack_98;
    lStack_70 = lVar3;
    func_0x000107c60bc4(ppuVar5);
    lVar2 = lStack_70;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c4c6bc(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 100f4506c; end: 100f450b7;  */

void FUN_100f4506c(long param_1,undefined8 param_2)

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



/* Entry: 100f450b8; end: 100f450d3;  */

void FUN_100f450b8(long param_1,long param_2)

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



/* Entry: 100f450d4; end: 100f45107;  */

void FUN_100f450d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f45108; end: 100f45113;  */

void FUN_100f45108(void)

{
  return;
}



/* Entry: 100f45114; end: 100f45133;  */

void FUN_100f45114(void)

{
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 100f45134; end: 100f45167;  */

void FUN_100f45134(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),PTR_s_exposeScope__1125c4f30,param_1);
  return;
}



/* Entry: 100f45168; end: 100f451ab; -[SCMainCameraDeepLinkEntryPoint end] */

void FUN_100f45168(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f451ac; end: 100f451df;  */

void FUN_100f451ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f451e0; end: 100f45247; -[SCMainCameraDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f451e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4d320);
  func_0x000107c61610(param_1 + _DAT_112d4d328);
  func_0x000107c61610(param_1 + _DAT_112d4d330);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4d338));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4d340));
  return;
}



/* Entry: 100f45248; end: 100f45267;  */

void FUN_100f45248(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3930);
  return;
}



/* Entry: 100f45268; end: 100f452f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f45268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4d370) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d4d378) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d4d380) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d4d388) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f452f4; end: 100f45533;  */

/* WARNING: Possible PIC construction at 0x000100f45394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f453b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f453d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f45448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f454cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f454f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f45504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f454f8) */
/* WARNING: Removing unreachable block (ram,0x000100f454d0) */
/* WARNING: Removing unreachable block (ram,0x000100f4544c) */
/* WARNING: Removing unreachable block (ram,0x000100f453d8) */
/* WARNING: Removing unreachable block (ram,0x000100f453e8) */
/* WARNING: Removing unreachable block (ram,0x000100f453f8) */
/* WARNING: Removing unreachable block (ram,0x000100f45458) */
/* WARNING: Removing unreachable block (ram,0x000100f45460) */
/* WARNING: Removing unreachable block (ram,0x000100f45414) */
/* WARNING: Removing unreachable block (ram,0x000100f453b8) */
/* WARNING: Removing unreachable block (ram,0x000100f45398) */
/* WARNING: Removing unreachable block (ram,0x000100f45508) */

void FUN_100f452f4(void)

{
  undefined *puVar1;
  
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c3e6c4();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b20d8;
  func_0x000107c610f8(PTR_PTR_1126b20d8);
  func_0x000107c453e4();
  func_0x000107c5e7a0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100f45534; end: 100f45593; -[QuickCaptureCameraEntryPoint init] */

void FUN_100f45534(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCQuickCaptureCameraEntryPoint.QuickCaptureCameraEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f45560);
  (*pcVar1)();
}



/* Entry: 100f45594; end: 100f455eb; -[QuickCaptureCameraEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f455b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f455d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f455b4) */
/* WARNING: Removing unreachable block (ram,0x000100f455d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f45594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4d370));
  return;
}



/* Entry: 100f455ec; end: 100f456c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f455ec(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(*unaff_x20 + _DAT_112d4d370) + _DAT_112ebec68);
  func_0x000107c615f0(uVar1);
  FUN_100f452f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100f456c8; end: 100f456cb; -[QuickCaptureCameraEntryPoint didSendSnap] */

void FUN_100f456c8(void)

{
  return;
}



/* Entry: 100f456cc; end: 100f456cf; -[QuickCaptureCameraEntryPoint didSaveSnap] */

void FUN_100f456cc(void)

{
  return;
}



/* Entry: 100f456d0; end: 100f45763; -[QuickCaptureCameraEntryPoint didCaptureMediaWithSnapDocEditor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f456d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebec70;
  lVar2 = *(long *)(param_1 + _DAT_112d4d370);
  func_0x000107c61428(lVar2 + _DAT_112ebec70,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c4f810(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 100f45764; end: 100f45783;  */

void FUN_100f45764(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3a08);
  return;
}



/* Entry: 100f45784; end: 100f4578f; -[SCQuickCaptureCameraEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f45784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d3b8;
  func_0x000107c61428(param_1 + _DAT_112d4d3b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f45790; end: 100f4579b; -[SCQuickCaptureCameraEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f45790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d3b8;
  func_0x000107c61428(param_1 + _DAT_112d4d3b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4579c; end: 100f457a7; -[SCQuickCaptureCameraEntryPoint cameraImmediateLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4579c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d3c0;
  func_0x000107c61428(param_1 + _DAT_112d4d3c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f457a8; end: 100f457b3; -[SCQuickCaptureCameraEntryPoint setCameraImmediateLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f457a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d3c0;
  func_0x000107c61428(param_1 + _DAT_112d4d3c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f457b4; end: 100f457bf; -[SCQuickCaptureCameraEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f457b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d3c8;
  func_0x000107c61428(param_1 + _DAT_112d4d3c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f457c0; end: 100f457cb; -[SCQuickCaptureCameraEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f457c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d3c8;
  func_0x000107c61428(param_1 + _DAT_112d4d3c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f457cc; end: 100f457d7; -[SCQuickCaptureCameraEntryPoint caasCameraScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f457cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d3d0;
  func_0x000107c61428(param_1 + _DAT_112d4d3d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f457d8; end: 100f4581b;  */

void FUN_100f457d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4581c; end: 100f45827; -[SCQuickCaptureCameraEntryPoint setCaasCameraScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4581c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d3d0;
  func_0x000107c61428(param_1 + _DAT_112d4d3d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f45828; end: 100f4587b;  */

void FUN_100f45828(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f4587c; end: 100f45a27;  */

/* WARNING: Possible PIC construction at 0x000100f459ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f459bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f459d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f459b0) */
/* WARNING: Removing unreachable block (ram,0x000100f459c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4587c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f100();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3eed8();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c3df78();
        func_0x000107c61180();
        lVar5 = 0;
        FUN_100f45764();
        lVar6 = lVar5;
        func_0x000107c610f8();
        *(long *)(lVar6 + _DAT_112d4d370) = lVar2;
        *(long *)(lVar6 + _DAT_112d4d378) = lVar3;
        *(long *)(lVar6 + _DAT_112d4d380) = unaff_x20;
        *(long *)(lVar6 + _DAT_112d4d388) = lVar4;
        puVar1 = PTR_s_init_1125d9248;
        lStack_60 = lVar6;
        lStack_58 = lVar5;
        func_0x000107c61174(lVar4);
        func_0x000107c61154(&lStack_60,puVar1);
        func_0x000107c615f0(*(undefined8 *)
                             (*(long *)((long)plVar7 + _DAT_112d4d370) + _DAT_112ebec68));
        FUN_100f452f4();
        lVar2 = lVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100f45a28; end: 100f45a4f; -[SCQuickCaptureCameraEntryPoint begin] */

void FUN_100f45a28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f4587c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f45a50; end: 100f45b23;  */

/* WARNING: Possible PIC construction at 0x000100f45aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f45ad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f45ab0) */
/* WARNING: Removing unreachable block (ram,0x000100f45ac8) */
/* WARNING: Removing unreachable block (ram,0x000100f45ad8) */
/* WARNING: Removing unreachable block (ram,0x000100f45ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f45a50(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4d3d8);
  if (lVar1 == 0) {
    func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_end_1125c29d0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d4d378);
    func_0x000107c61174(lVar1);
    func_0x000107c3eedc(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100f45b24; end: 100f45b57; -[SCQuickCaptureCameraEntryPoint end] */

void FUN_100f45b24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f45a50();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f45b58; end: 100f45dc7;  */

void FUN_100f45b58(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10e4510)) {
      uVar2 = 0xd00000000000001d;
      func_0x000107c605b8(0xd00000000000001d,0x800000010ef1baf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000025;
        if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef10f0340)) ||
           (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52844();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10e44f0)) &&
             (func_0x000107c605b8(0xd00000000000001e,0x800000010ef1bb10,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCQuickCaptureCameraEntryPoint/SCQuickCaptureCameraEntryPoint.swift"
                                ,0x43,2,0x34,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f45dc8);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52f00();
        }
        goto LAB_100f45be4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53028();
  }
LAB_100f45be4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f45dc8; end: 100f45e73; -[SCQuickCaptureCameraEntryPoint setValue:forIvarName:] */

void FUN_100f45dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f45b58(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f45e74; end: 100f45f0f; -[SCQuickCaptureCameraEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f45e74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4d3b8,0);
  func_0x000107c61614(param_1 + _DAT_112d4d3c0,0);
  func_0x000107c61614(param_1 + _DAT_112d4d3c8,0);
  func_0x000107c61614(param_1 + _DAT_112d4d3d0,0);
  *(undefined8 *)(param_1 + _DAT_112d4d3d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f45f10; end: 100f45f43;  */

void FUN_100f45f10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f45f44; end: 100f45fab; -[SCQuickCaptureCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f45f44(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4d3b8);
  func_0x000107c61610(param_1 + _DAT_112d4d3c0);
  func_0x000107c61610(param_1 + _DAT_112d4d3c8);
  func_0x000107c61610(param_1 + _DAT_112d4d3d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4d3d8));
  return;
}



/* Entry: 100f45fac; end: 100f45fcb;  */

void FUN_100f45fac(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3ae0);
  return;
}



/* Entry: 100f45fcc; end: 100f45fdf;  */

bool FUN_100f45fcc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f45fe0; end: 100f461db;  */

void FUN_100f45fe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f461dc; end: 100f462a7;  */

void FUN_100f461dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 100f462a8; end: 100f462e7;  */

void FUN_100f462a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d4d408;
  func_0x0001000285a8(0x112d4d408,&UNK_10d913ba0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100f462e8; end: 100f463a3; +[SCCameraPostModeExperiment importFirstFlowEnabledWithCircumstanceEngine:] */

undefined8 FUN_100f462e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112d4d410,auStack_48,0,0);
  if (cRam0000000112d4d410 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112d4d410 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010ef1bb80);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 100f463a4; end: 100f463df; -[SCCameraPostModeExperiment init] */

void FUN_100f463a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_100f46478();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f463e0; end: 100f4640f;  */

void FUN_100f463e0(void)

{
  FUN_100f46478();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f46410; end: 100f46413; -[SCCameraPostModeExperiment .cxx_destruct] */

void FUN_100f46410(void)

{
  return;
}



/* Entry: 100f46414; end: 100f46477;  */

ulong FUN_100f46414(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 100f46478; end: 100f46497;  */

void FUN_100f46478(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3bb8);
  return;
}



/* Entry: 100f46498; end: 100f4649b;  */

void FUN_100f46498(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4d450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913bb0;
  func_0x000107c61520(&UNK_10d913bb0,&UNK_11036c4a8);
  puRam0000000112d4d450 = puVar1;
  return;
}



/* Entry: 100f4649c; end: 100f464db;  */

void FUN_100f4649c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4d450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913bb0;
  func_0x000107c61520(&UNK_10d913bb0,&UNK_11036c4a8);
  puRam0000000112d4d450 = puVar1;
  return;
}



/* Entry: 100f464dc; end: 100f46507;  */

void FUN_100f464dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100f46508();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000100f46548();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100f46508; end: 100f46587;  */

void FUN_100f46508(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4d458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913c78;
  func_0x000107c61520(&UNK_10d913c78,&UNK_11036c4a8);
  puRam0000000112d4d458 = puVar1;
  return;
}



/* Entry: 100f46588; end: 100f4658b;  */

void FUN_100f46588(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4d468 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4d470;
  func_0x00010002969c(0x112d4d470,&UNK_10d913c70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d4d468 = puVar2;
  return;
}



/* Entry: 100f4658c; end: 100f465db;  */

void FUN_100f4658c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4d468 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4d470;
  func_0x00010002969c(0x112d4d470,&UNK_10d913c70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d4d468 = puVar2;
  return;
}



/* Entry: 100f465dc; end: 100f4674f;  */

undefined1  [16] FUN_100f465dc(void)

{
  return ZEXT816(0x11036c418);
}



/* Entry: 100f46750; end: 100f467a3;  */

undefined8 FUN_100f46750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_100f467a4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 100f467a4; end: 100f46923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f467a4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar5 = *(long *)(param_2 + _DAT_11306db40);
  if (lVar5 == 0) {
    func_0x000107c61170(param_2);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_1130352b8);
    func_0x000107c615f0(uVar6);
    func_0x000107c61174();
    uVar7 = param_3;
    func_0x000107c4ac68();
    func_0x000107c61180();
    lVar2 = 0;
    FUN_100f47424();
    lVar3 = lVar2;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112d4d6d8) = uVar6;
    *(undefined8 *)(lVar3 + _DAT_112d4d6e0) = uVar7;
    *(long *)(lVar3 + _DAT_112d4d6e8) = lVar5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar3;
    lStack_58 = lVar2;
    func_0x000107c61174(lVar5);
    func_0x000107c61154(&lStack_60,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long **)(unaff_x20 + 0x10) = plVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1130352a8);
    func_0x000107c61174(plVar4);
    func_0x000107c61174(uVar7);
    func_0x000107c4fba8();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(plVar4);
    param_1 = param_2;
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100f46924; end: 100f46947;  */

void FUN_100f46924(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f46948; end: 100f4694b;  */

void FUN_100f46948(void)

{
  return;
}



/* Entry: 100f4694c; end: 100f4698f;  */

undefined8 FUN_100f4694c(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  *(undefined8 *)(*unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 100f46990; end: 100f46bfb;  */

/* WARNING: Possible PIC construction at 0x000100f46a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f46af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f46bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f46af4) */
/* WARNING: Removing unreachable block (ram,0x000100f46a0c) */
/* WARNING: Removing unreachable block (ram,0x000100f46a10) */
/* WARNING: Removing unreachable block (ram,0x000100f46be0) */
/* WARNING: Removing unreachable block (ram,0x000100f46a30) */
/* WARNING: Removing unreachable block (ram,0x000100f46bb8) */
/* WARNING: Removing unreachable block (ram,0x000100f46be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f46990(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112d4d600) & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d4d5e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d4d5e0);
      func_0x000107c4f5c0(uVar2);
      func_0x000107c61180();
      func_0x000107c4d1e4();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 100f46bfc; end: 100f46c6b;  */

void FUN_100f46bfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 100f46c6c; end: 100f46d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f46c6c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + _DAT_112d4d600) & 1) != 0) {
    func_0x000107c61170(param_2);
    return;
  }
  *(undefined1 *)(param_2 + _DAT_112d4d600) = 1;
  lVar1 = lVar3;
  func_0x000107c4a4d8();
  if ((int)lVar1 != 0) {
    func_0x000107c5d2f0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      goto LAB_100f46d14;
    }
  }
  uVar2 = param_3;
  func_0x000107c614f0(param_3);
  FUN_100f46eb0(param_3,param_2,uVar2);
LAB_100f46d14:
  uVar2 = *(undefined8 *)(param_2 + _DAT_112d4d5f8);
  func_0x000107c6157c(uVar2);
  FUN_100c82230();
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 100f46d50; end: 100f46d77; -[_TtC32SCMusicLensUnlockActivatorPlugin31MusicLensUnlockActivatorFeature activate] */

void FUN_100f46d50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f46990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f46d78; end: 100f46d7b; -[_TtC32SCMusicLensUnlockActivatorPlugin31MusicLensUnlockActivatorFeature configureWithView:] */

void FUN_100f46d78(void)

{
  return;
}



/* Entry: 100f46d7c; end: 100f46d7f; -[_TtC32SCMusicLensUnlockActivatorPlugin31MusicLensUnlockActivatorFeature resetMetrics] */

void FUN_100f46d7c(void)

{
  return;
}



/* Entry: 100f46d80; end: 100f46dd7; -[_TtC32SCMusicLensUnlockActivatorPlugin31MusicLensUnlockActivatorFeature usageMetrics] */

void FUN_100f46d80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100f46dd8; end: 100f46e37; -[_TtC32SCMusicLensUnlockActivatorPlugin31MusicLensUnlockActivatorFeature init] */

void FUN_100f46dd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicLensUnlockActivatorPlugin.MusicLensUnlockActivatorFeature",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f46e04);
  (*pcVar1)();
}



/* Entry: 100f46e38; end: 100f46e8f; -[_TtC32SCMusicLensUnlockActivatorPlugin31MusicLensUnlockActivatorFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f46e38(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4d5e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4d5e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4d5f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4d5f8));
  return;
}



/* Entry: 100f46e90; end: 100f46eaf;  */

void FUN_100f46e90(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3c68);
  return;
}



/* Entry: 100f46eb0; end: 100f46f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f46eb0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x000107c54fec(param_1,param_2,1);
  dVar2 = (double)NEON_ucvtf((ulong)*(uint *)(*(long *)(param_2 + _DAT_112d4d5f0) + _DAT_113072050))
  ;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(dVar2 / 1000.0);
  func_0x000107c401b4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100f46f6c; end: 100f46f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f46f6c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *param_1;
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(lVar1 + _DAT_112d4d600) & 1) != 0) {
    func_0x000107c61170(lVar1);
    return;
  }
  *(undefined1 *)(lVar1 + _DAT_112d4d600) = 1;
  lVar2 = lVar5;
  func_0x000107c4a4d8();
  if ((int)lVar2 != 0) {
    func_0x000107c5d2f0();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c61170();
      goto LAB_100f46d14;
    }
  }
  uVar3 = uVar4;
  func_0x000107c614f0(uVar4);
  FUN_100f46eb0(uVar4,lVar1,uVar3);
LAB_100f46d14:
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112d4d5f8);
  func_0x000107c6157c(uVar4);
  FUN_100c82230();
  func_0x000107c61170(lVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 100f46f74; end: 100f46fc7;  */

undefined8 FUN_100f46f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_100f46fc8(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 100f46fc8; end: 100f4714b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f46fc8(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar2 = *(long *)(param_2 + _DAT_113071fc8);
  func_0x000107c4d278();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_2);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_1130352b8);
    func_0x000107c615f0(uVar6);
    uVar7 = param_3;
    func_0x000107c4ac68();
    func_0x000107c61180();
    lVar3 = 0;
    FUN_100f47424();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112d4d6d8) = uVar6;
    *(undefined8 *)(lVar4 + _DAT_112d4d6e0) = uVar7;
    *(long *)(lVar4 + _DAT_112d4d6e8) = lVar2;
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61174(lVar2);
    func_0x000107c61154(&lStack_60,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long **)(unaff_x20 + 0x10) = plVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1130352a8);
    func_0x000107c61174(plVar5);
    func_0x000107c61174(uVar7);
    func_0x000107c4fba8();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(plVar5);
    func_0x000107c61170(plVar5);
    param_1 = param_2;
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100f4714c; end: 100f4716f;  */

void FUN_100f4714c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f47170; end: 100f47173;  */

void FUN_100f47170(void)

{
  return;
}



/* Entry: 100f47174; end: 100f471b7;  */

undefined8 FUN_100f47174(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  *(undefined8 *)(*unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 100f471b8; end: 100f471bf; -[_TtC32SCMusicLensUnlockActivatorPlugin30MusicLensUnlockActivatorPlugin cameraFeatureCategory] */

void FUN_100f471b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 100f471c0; end: 100f471c7; -[_TtC32SCMusicLensUnlockActivatorPlugin30MusicLensUnlockActivatorPlugin pluginResolutionOrder] */

undefined8 FUN_100f471c0(void)

{
  return 3;
}



/* Entry: 100f471c8; end: 100f471cb; -[_TtC32SCMusicLensUnlockActivatorPlugin30MusicLensUnlockActivatorPlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_100f471c8(void)

{
  return;
}



/* Entry: 100f471cc; end: 100f472b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f471cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0;
  FUN_100f46e90();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112d4d5f8;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x0001005f60d4();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  *(undefined1 *)(lVar3 + _DAT_112d4d600) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d4d5e0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112d4d5e8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112d4d5f0) = param_3;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f472b4; end: 100f472eb;  */

void FUN_100f472b4(long param_1)

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


