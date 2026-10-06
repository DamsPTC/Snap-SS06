/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10118edd4; end: 10118f187;  */

void FUN_10118edd4(long param_1,long param_2,long param_3)

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
        if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d61d0)) ||
           (func_0x000107c605b8(0xd00000000000001c,0x800000010ef29e30,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56580();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0)) ||
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56550();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10d61b0)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010ef29e50,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56098();
            }
            else {
              uVar2 = 0xd000000000000023;
              if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef10d6180)) ||
                 (func_0x000107c605b8(0xd000000000000023,0x800000010ef29e80,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5656c();
              }
              else {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e63d0)) &&
                   (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "MemoriesSnapsTabLockedSnapModalCardPlugin/SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint.swift"
                                      ,0x65,2,0x42,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10118f188);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53680();
              }
            }
          }
        }
        goto LAB_10118ee60;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_10118ee60:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10118f188; end: 10118f233; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint setValue:forIvarName:] */

void FUN_10118f188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10118edd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10118f234; end: 10118f30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118f234(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d62cd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62cd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62ce0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62ce8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62cf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62cf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62d00,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d62d08) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10118f30c; end: 10118f32b; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint init] */

void FUN_10118f30c(void)

{
  FUN_10118f234();
  return;
}



/* Entry: 10118f32c; end: 10118f35f;  */

void FUN_10118f32c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10118f360; end: 10118f3f7; -[SCMemoriesSnapsTabLockedSnapModalCardPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118f360(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d62cd0);
  func_0x000107c61610(param_1 + _DAT_112d62cd8);
  func_0x000107c61610(param_1 + _DAT_112d62ce0);
  func_0x000107c61610(param_1 + _DAT_112d62ce8);
  func_0x000107c61610(param_1 + _DAT_112d62cf0);
  func_0x000107c61610(param_1 + _DAT_112d62cf8);
  func_0x000107c61610(param_1 + _DAT_112d62d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62d08));
  return;
}



/* Entry: 10118f3f8; end: 10118f417;  */

void FUN_10118f3f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3bc8);
  return;
}



/* Entry: 10118f418; end: 10118f5bb;  */

void FUN_10118f418(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    puVar1 = PTR_PTR_1126def48;
    func_0x000107c61168(PTR_PTR_1126def48);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c505dc();
    func_0x000107c61180();
    puVar3 = &UNK_11038bca0;
    func_0x000107c613fc(&UNK_11038bca0,0x20,7);
    *(code **)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    pcStack_50 = FUN_10118f608;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x10118f544;
    puStack_58 = &UNK_11038bcb8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c4db80(puVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10118f5bc; end: 10118f607;  */

void FUN_10118f5bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10118f608; end: 10118f62f;  */

void FUN_10118f608(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  if (param_2 != 0) {
    param_1 = 0;
  }
  (**(code **)(unaff_x20 + 0x10))(param_1);
  return;
}



/* Entry: 10118f630; end: 10118f64b;  */

void FUN_10118f630(long param_1,long param_2)

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



/* Entry: 10118f64c; end: 1011900db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10118f64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d62de0) = 0x3c;
  *(undefined8 *)(unaff_x20 + _DAT_112d62de8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d62df0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d62df8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d62e00) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d62e08) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d62e10) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d62e18) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d62e20) = param_8;
  lVar2 = 0;
  FUN_101190a18();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d62e58) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112d62e60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c6157c(param_8);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *(long **)(unaff_x20 + _DAT_112d62e28) = plVar4;
  puVar5 = auStack_80;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61574(param_8);
  return puVar5;
}



/* Entry: 1011900dc; end: 10119022b;  */

void FUN_1011900dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar4 = 0;
  func_0x000107c60714();
  puStack_80 = param_5;
  uStack_78 = uVar4;
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0x65646f4d77656976,0xeb0000000029286c);
  uVar4 = uStack_78;
  puVar3 = puStack_80;
  puVar1 = &UNK_11038bd90;
  func_0x000107c613fc(&UNK_11038bd90,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  uStack_60 = 0x1011909a0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11038bda8;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c5fb28(puVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(puVar3 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 10119022c; end: 1011902f7;  */

void FUN_10119022c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 != 0) {
      func_0x000107c5578c(param_2);
    }
    func_0x000107c3fefc(param_3);
  }
  else {
    FUN_10119032c();
    if (param_2 != 0) {
      if (param_4 != 0) {
        func_0x000107c4f248(param_4);
      }
      func_0x000107c5578c(param_2);
    }
    func_0x000107c3fefc(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1011902f8; end: 10119032b; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin40MemoriesSnapsTabMonetizationBannerPlugin viewModel] */

void FUN_1011902f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010118f844();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10119032c; end: 1011905c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119032c(double param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  
  if (param_2 == 0) {
    FUN_101190698();
    puVar6 = PTR_PTR_1126a6488;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5ad34();
    func_0x000107c3bf98(param_2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905bc);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905a4);
      (*pcVar1)();
    }
    dVar8 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905a8);
      (*pcVar1)();
    }
    func_0x000107c3bf9c(param_2);
    if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905c0);
      (*pcVar1)();
    }
    if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905ac);
      (*pcVar1)();
    }
    dVar9 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905b0);
      (*pcVar1)();
    }
    func_0x000107c5e114();
    if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905c4);
      (*pcVar1)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905b4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011905b8);
      (*pcVar1)();
    }
    FUN_101190698();
    puVar6 = PTR_PTR_1126a6488;
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      puVar6 = PTR_PTR_1126a6488;
      func_0x000107c610f8(PTR_PTR_1126a6488);
      func_0x000107c486a8(0);
      puVar7 = PTR_PTR_1126b2650;
      func_0x000107c610f8(PTR_PTR_1126b2650);
      func_0x000107c480e8();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      goto LAB_101190574;
    }
  }
  if ((param_2 & 1) != 0) {
    PTR_PTR_1126a6488 = puVar6;
    return (undefined *)0x0;
  }
  PTR_PTR_1126a6488 = puVar6;
  func_0x000107c610f8(puVar6);
  func_0x000107c486a8(0);
  puVar7 = PTR_PTR_1126b2650;
  func_0x000107c610f8(PTR_PTR_1126b2650);
  func_0x000107c480e8();
LAB_101190574:
  func_0x000107c61170(puVar6);
  return puVar7;
}



/* Entry: 1011905c4; end: 101190697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011905c4(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c308f8();
  if ((param_1 & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d62e08);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c41050();
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000106c78cc0();
      func_0x000107c61170(lVar1);
      if ((int)lVar3 == 0) {
        lVar1 = 0;
      }
      else {
        lVar3 = lVar2;
        func_0x000107c41050(lVar2);
        func_0x000107c61180();
        lVar1 = lVar3;
        func_0x000107c4a56c();
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      func_0x000107c61170(lVar2);
    }
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 101190698; end: 10119078f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101190698(double param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  long lVar4;
  double dVar5;
  long alStack_50 [2];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(lVar3);
  func_0x000107c5ee8c();
  dVar5 = param_1;
  (**(code **)(lVar4 + 8))(lVar3,lVar2);
  func_0x000107c4a9b8(*(undefined8 *)(unaff_x20 + _DAT_112d62e18));
  func_0x0001000d224c(alStack_50);
  lVar2 = alStack_50[0];
  func_0x000107c4d0f8();
  func_0x000107c615e8(alStack_50[0]);
  if (SUB168(SEXT816(lVar2) * SEXT816(0x3c),8) == lVar2 * 0x3c >> 0x3f) {
    return param_1 - dVar5 < (double)(lVar2 * 0x3c);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101190790);
  (*pcVar1)();
}



/* Entry: 101190790; end: 101190847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101190790(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong auStack_40 [2];
  
  func_0x0001000d224c(auStack_40);
  uVar3 = auStack_40[0];
  uVar4 = auStack_40[0];
  func_0x000107c4cbe4();
  func_0x000107c615e8(uVar3);
  if (((int)uVar4 == 0) ||
     (uVar3 = *(ulong *)(param_1 + _DAT_11303e910), uVar4 = *(ulong *)(param_1 + _DAT_11303e908),
     uVar4 < uVar3)) {
    bVar1 = false;
  }
  else {
    func_0x0001000d224c(auStack_40);
    uVar2 = auStack_40[0];
    func_0x000107c4cbf0();
    func_0x000107c615e8(auStack_40[0]);
    bVar1 = 0 < (long)uVar2 && uVar4 - uVar3 < uVar2;
  }
  return bVar1;
}



/* Entry: 101190848; end: 1011908a3; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin40MemoriesSnapsTabMonetizationBannerPlugin init] */

void FUN_101190848(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabMonetizationBannerPlugin.MemoriesSnapsTabMonetizationBannerPlugin"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101190874);
  (*pcVar1)();
}



/* Entry: 1011908a4; end: 10119094b; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin40MemoriesSnapsTabMonetizationBannerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011908c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101190900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011908c4) */
/* WARNING: Removing unreachable block (ram,0x000101190904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011908a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d62de8));
  return;
}



/* Entry: 10119094c; end: 10119096b;  */

void FUN_10119094c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3cb8);
  return;
}



/* Entry: 10119096c; end: 1011909b3;  */

void FUN_10119096c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = *(undefined **)(unaff_x20 + 0x28);
  ppuVar5 = &puStack_80;
  uVar7 = 0;
  func_0x000107c60714();
  puStack_80 = puVar4;
  uStack_78 = uVar7;
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0x65646f4d77656976,0xeb0000000029286c);
  uVar7 = uStack_78;
  puVar6 = puStack_80;
  puVar4 = &UNK_11038bd90;
  func_0x000107c613fc(&UNK_11038bd90,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  uStack_60 = 0x1011909a0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11038bda8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c5fb28(puVar6,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000100162d98(puVar6 + 0x20,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 1011909b4; end: 101190a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011909b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d62e58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d62e60) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101190a18; end: 101190a37;  */

void FUN_101190a18(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3e00);
  return;
}



/* Entry: 101190a38; end: 101190a3b;  */

void FUN_101190a38(void)

{
  return;
}



/* Entry: 101190a3c; end: 101190a43; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin53MemoriesSnapsTabMonetizationBannerPluginActionHandler didTapCTA] */

void FUN_101190a3c(void)

{
  return;
}



/* Entry: 101190a44; end: 101190a4b; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin53MemoriesSnapsTabMonetizationBannerPluginActionHandler didDismiss] */

void FUN_101190a44(void)

{
  return;
}



/* Entry: 101190a4c; end: 101190a4f; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin53MemoriesSnapsTabMonetizationBannerPluginActionHandler didShow] */

void FUN_101190a4c(void)

{
  return;
}



/* Entry: 101190a50; end: 101190aab; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin53MemoriesSnapsTabMonetizationBannerPluginActionHandler init] */

void FUN_101190a50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabMonetizationBannerPlugin.MemoriesSnapsTabMonetizationBannerPluginActionHandler"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101190a7c);
  (*pcVar1)();
}



/* Entry: 101190aac; end: 101190ae3; -[_TtC40MemoriesSnapsTabMonetizationBannerPlugin53MemoriesSnapsTabMonetizationBannerPluginActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101190ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101190acc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d62e58));
  return;
}



/* Entry: 101190ae4; end: 101190eef;  */

void FUN_101190ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 101190ef0; end: 101190f6b;  */

void FUN_101190ef0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101190f6c; end: 101190f8b;  */

void FUN_101190f6c(void)

{
  func_0x000101190b64();
  return;
}



/* Entry: 101190f8c; end: 101190f93;  */

undefined8 FUN_101190f8c(void)

{
  return 0;
}



/* Entry: 101190f94; end: 101190fb3;  */

void FUN_101190f94(void)

{
  func_0x000107c61168(&PTR_PTR_112d62ed0);
  return;
}



/* Entry: 101190fb4; end: 101190fbf; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190fb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62f70;
  func_0x000107c61428(param_1 + _DAT_112d62f70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101190fc0; end: 101190fcb; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62f70;
  func_0x000107c61428(param_1 + _DAT_112d62f70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101190fcc; end: 101190fd7; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190fcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62f78;
  func_0x000107c61428(param_1 + _DAT_112d62f78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101190fd8; end: 101190fe3; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62f78;
  func_0x000107c61428(param_1 + _DAT_112d62f78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101190fe4; end: 101190fef; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190fe4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62f80;
  func_0x000107c61428(param_1 + _DAT_112d62f80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101190ff0; end: 101190ffb; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62f80;
  func_0x000107c61428(param_1 + _DAT_112d62f80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101190ffc; end: 101191007; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint memoriesMonetizationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101190ffc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62f88;
  func_0x000107c61428(param_1 + _DAT_112d62f88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101191008; end: 101191013; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setMemoriesMonetizationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62f88;
  func_0x000107c61428(param_1 + _DAT_112d62f88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101191014; end: 10119101f; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191014(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62f90;
  func_0x000107c61428(param_1 + _DAT_112d62f90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101191020; end: 10119102b; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191020(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62f90;
  func_0x000107c61428(param_1 + _DAT_112d62f90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119102c; end: 101191037; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint plusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119102c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62f98;
  func_0x000107c61428(param_1 + _DAT_112d62f98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101191038; end: 101191043; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62f98;
  func_0x000107c61428(param_1 + _DAT_112d62f98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101191044; end: 10119104f; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint memoriesLegacyLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191044(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62fa0;
  func_0x000107c61428(param_1 + _DAT_112d62fa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101191050; end: 10119105b; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setMemoriesLegacyLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191050(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62fa0;
  func_0x000107c61428(param_1 + _DAT_112d62fa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119105c; end: 101191067; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint memoriesUserDefaultsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119105c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62fa8;
  func_0x000107c61428(param_1 + _DAT_112d62fa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101191068; end: 101191073; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setMemoriesUserDefaultsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191068(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62fa8;
  func_0x000107c61428(param_1 + _DAT_112d62fa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101191074; end: 10119107f; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191074(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62fb0;
  func_0x000107c61428(param_1 + _DAT_112d62fb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101191080; end: 1011910c3;  */

void FUN_101191080(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011910c4; end: 1011910cf; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011910c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62fb0;
  func_0x000107c61428(param_1 + _DAT_112d62fb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011910d0; end: 101191123;  */

void FUN_1011910d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101191124; end: 10119149f;  */

/* WARNING: Possible PIC construction at 0x0001011912d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011912e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011912f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011913e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011913f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011913c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011913d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011913a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101191384) */
/* WARNING: Removing unreachable block (ram,0x0001011913a4) */
/* WARNING: Removing unreachable block (ram,0x0001011913d4) */
/* WARNING: Removing unreachable block (ram,0x0001011913c4) */
/* WARNING: Removing unreachable block (ram,0x000101191404) */
/* WARNING: Removing unreachable block (ram,0x0001011913f4) */
/* WARNING: Removing unreachable block (ram,0x0001011913e4) */
/* WARNING: Removing unreachable block (ram,0x000101191434) */
/* WARNING: Removing unreachable block (ram,0x000101191424) */
/* WARNING: Removing unreachable block (ram,0x000101191414) */
/* WARNING: Removing unreachable block (ram,0x000101191474) */
/* WARNING: Removing unreachable block (ram,0x000101191464) */
/* WARNING: Removing unreachable block (ram,0x000101191454) */
/* WARNING: Removing unreachable block (ram,0x000101191314) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101191304) */
/* WARNING: Removing unreachable block (ram,0x0001011912f4) */
/* WARNING: Removing unreachable block (ram,0x0001011912e4) */
/* WARNING: Removing unreachable block (ram,0x0001011912d4) */
/* WARNING: Removing unreachable block (ram,0x000101191374) */

void FUN_101191124(void)

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
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c42eb0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4cb8c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4cbf4();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5d900();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c4ea90();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c4cbb0();
            func_0x000107c61180();
            if (lVar7 != 0) {
              lVar8 = unaff_x20;
              func_0x000107c4cce4();
              func_0x000107c61180();
              if (lVar8 != 0) {
                func_0x000107c40014();
                func_0x000107c61180();
                if (unaff_x20 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = 0;
                  FUN_101190f94();
                  func_0x000107c613fc();
                  *(long *)(lVar9 + 0x10) = lVar1;
                  *(long *)(lVar9 + 0x18) = lVar2;
                  *(long *)(lVar9 + 0x20) = lVar3;
                  *(long *)(lVar9 + 0x28) = lVar4;
                  *(long *)(lVar9 + 0x30) = lVar5;
                  *(long *)(lVar9 + 0x38) = lVar6;
                  *(long *)(lVar9 + 0x40) = lVar7;
                  *(long *)(lVar9 + 0x48) = lVar8;
                  *(long *)(lVar9 + 0x50) = unaff_x20;
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174(lVar3);
                  func_0x000107c61174(lVar4);
                  func_0x000107c61174(lVar5);
                  func_0x000107c61174(lVar6);
                  func_0x000107c61174(lVar7);
                  func_0x000107c61174(lVar8);
                  func_0x000107c61174(unaff_x20);
                  func_0x000101190b64();
                  lVar1 = unaff_x20;
                }
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



/* Entry: 1011914a0; end: 1011914c7; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint begin] */

void FUN_1011914a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101191124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011914c8; end: 10119150b; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint end] */

void FUN_1011914c8(undefined8 param_1)

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



/* Entry: 10119150c; end: 101191993;  */

void FUN_10119150c(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000017;
    if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ef230)) ||
       (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5491c();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56550();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10d61d0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001c,0x800000010ef29e30,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
               (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a2fc();
            }
            else {
              uVar2 = 0;
              if (((param_2 == 0x7672655373756c70) && (param_3 == -0x13ffffff8c9a9c97)) ||
                 (func_0x000107c605b8(0x7672655373756c70,0xec00000073656369,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57584();
              }
              else {
                if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10e18f0)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd00000000000001c,0x800000010ef1e710,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10d7190)) {
                      uVar2 = 0;
                      func_0x000107c605b8(0xd00000000000001c,0x800000010ef28e70,param_2,param_3,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = 0;
                        if (((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0))
                           && (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,
                                                   param_3,0), (uVar2 & 1) == 0)) {
                          func_0x000107c602fc(0x15);
                          func_0x000107c6142c(0xe000000000000000);
                          func_0x000107c5fb78(param_2,param_3);
                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                              0x800000010ef0fc20,
                                              "MemoriesSnapsTabMonetizationBannerPlugin/SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint.swift"
                                              ,99,2,0x4c,0);
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x101191994);
                          (*pcVar1)();
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c536e0();
                        goto LAB_101191598;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c565f0();
                    goto LAB_101191598;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c56568();
              }
            }
            goto LAB_101191598;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56580();
      }
    }
  }
LAB_101191598:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101191994; end: 101191a3f; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint setValue:forIvarName:] */

void FUN_101191994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10119150c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101191a40; end: 101191b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191a40(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d62f70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62f78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62f80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62f88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62f90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62f98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62fa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62fa8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62fb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d62fb8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101191b40; end: 101191b5f; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint init] */

void FUN_101191b40(void)

{
  FUN_101191a40();
  return;
}



/* Entry: 101191b60; end: 101191b93;  */

void FUN_101191b60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101191b94; end: 101191c4b; -[SCMemoriesSnapsTabMonetizationBannerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191b94(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d62f70);
  func_0x000107c61610(param_1 + _DAT_112d62f78);
  func_0x000107c61610(param_1 + _DAT_112d62f80);
  func_0x000107c61610(param_1 + _DAT_112d62f88);
  func_0x000107c61610(param_1 + _DAT_112d62f90);
  func_0x000107c61610(param_1 + _DAT_112d62f98);
  func_0x000107c61610(param_1 + _DAT_112d62fa0);
  func_0x000107c61610(param_1 + _DAT_112d62fa8);
  func_0x000107c61610(param_1 + _DAT_112d62fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62fb8));
  return;
}



/* Entry: 101191c4c; end: 101191c6b;  */

void FUN_101191c4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3ee0);
  return;
}



/* Entry: 101191c6c; end: 101191d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d62fe8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d62ff0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d62ff8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d63000) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d63008);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101191d18; end: 101191e7b;  */

/* WARNING: Possible PIC construction at 0x000101191d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101191d80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101191d54) */
/* WARNING: Removing unreachable block (ram,0x000101191e54) */
/* WARNING: Removing unreachable block (ram,0x000101191d58) */
/* WARNING: Removing unreachable block (ram,0x000101191d84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191d18(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112d62fe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101191e7c; end: 101191fd7;  */

undefined1  [16] FUN_101191e7c(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_11038bee8;
  func_0x000107c613fc(&UNK_11038bee8,0x11,7);
  puVar1[0x10] = 0;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11038be98;
  func_0x000107c613fc(&UNK_11038be98,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar3 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar4 = &UNK_11038bf10;
  func_0x000107c613fc(&UNK_11038bf10,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  *(undefined8 *)(puVar4 + 0x30) = param_4;
  pcVar6 = *(code **)(*param_2 + 0x70);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(puVar1);
  pcVar5 = FUN_101193bec;
  puVar3 = puVar4;
  (*pcVar6)(FUN_101193bec,puVar4,0x101193bfc,param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(param_1);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = pcVar5;
  return auVar7;
}



/* Entry: 101191fd8; end: 101191fe3;  */

undefined1  [16] FUN_101191fd8(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_68 [24];
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11038bee8;
  func_0x000107c613fc(&UNK_11038bee8,0x11,7);
  puVar2[0x10] = 0;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = &UNK_11038be98;
  func_0x000107c613fc(&UNK_11038be98,0x18,7);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618(lVar5);
  func_0x000107c61614(puVar4 + 0x10,lVar5);
  func_0x000107c61170(lVar5);
  puVar6 = &UNK_11038bf10;
  func_0x000107c613fc(&UNK_11038bf10,0x38,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  *(undefined **)(puVar6 + 0x20) = puVar2;
  *(undefined8 *)(puVar6 + 0x28) = param_1;
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  pcVar9 = *(code **)(*plVar1 + 0x70);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(puVar3);
  func_0x000107c6157c(puVar2);
  pcVar7 = FUN_101193bec;
  puVar4 = puVar6;
  (*pcVar9)(FUN_101193bec,puVar6,0x101193bfc,param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(param_1);
  auVar10._8_8_ = puVar4;
  auVar10._0_8_ = pcVar7;
  return auVar10;
}



/* Entry: 101191fe4; end: 101192203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101191fe4(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_f0 [24];
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar7 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_11038bf38;
    func_0x000107c613fc(&UNK_11038bf38,0x18,7);
    plVar8 = (long *)(puVar2 + 0x10);
    *plVar8 = 0;
    uStack_88 = 0x101193c00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101192cc0;
    puStack_90 = &UNK_11038bf50;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_80;
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar1);
    func_0x000107c4c6bc(uVar7);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61428(plVar8,&puStack_a8,0,0);
    lVar9 = *plVar8;
    lVar4 = lVar9;
    func_0x000107c61174(lVar9);
    func_0x000107c61574(puVar2);
    func_0x000107c4b940(param_3);
    if ((lVar9 == 0) &&
       (func_0x000107c61428(param_4 + 0x10,auStack_f0,0,0), *(char *)(param_4 + 0x10) != '\x01')) {
      func_0x000107c5d278(param_3);
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c61428(param_4 + 0x10,auStack_c0,1,0);
      *(bool *)(param_4 + 0x10) = lVar9 != 0;
      func_0x000107c5d278();
      FUN_101192700();
      lVar5 = param_3;
      FUN_10119265c();
      lVar6 = lVar5;
      func_0x000107c610f8();
      *(long *)(lVar6 + _DAT_112d63020) = lVar9;
      *(long *)(lVar6 + _DAT_112d63028) = param_3;
      puVar2 = PTR_s_init_1125d9248;
      lStack_d0 = lVar6;
      lStack_c8 = lVar5;
      func_0x000107c61174(lVar4);
      plVar8 = &lStack_d0;
      func_0x000107c61154(plVar8,puVar2);
      plStack_d8 = plVar8;
      func_0x000100087f6c(&plStack_d8);
      func_0x000107c61170(plVar8);
      func_0x000107c61170(lVar4);
      lVar4 = param_2;
    }
    func_0x000107c61170(lVar4);
    return;
  }
  return;
}



/* Entry: 101192204; end: 101192237; -[MemoriesSnapsTabQuotaStatusBarPlugin viewModel] */

void FUN_101192204(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101191d18();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101192238; end: 10119243f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101192238(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  FUN_10119265c();
  func_0x000107c61480(param_1,lVar4);
  if (param_1 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d62ff8);
    func_0x00010119267c();
    lVar4 = param_1;
    func_0x000107c610f8();
    *(undefined1 *)(lVar4 + _DAT_112d63010) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d63018) = uVar7;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar4;
    lStack_68 = param_1;
    func_0x000107c61174(uVar7);
    plVar8 = &lStack_70;
    func_0x000107c61154(plVar8,puVar2);
    func_0x000107c53e08();
    lVar4 = _DAT_112d63010;
    func_0x000107c61428((long)plVar8 + _DAT_112d63010,auStack_88,1,0);
    bVar1 = *(byte *)((long)plVar8 + lVar4);
    *(byte *)((long)plVar8 + lVar4) = param_2 & 1;
    if ((param_2 & 1) != bVar1) {
      plVar5 = plVar8;
      func_0x000107c3fd68();
      func_0x000107c61180();
      if (plVar5 != (long *)0x0) {
        plVar9 = plVar5;
        func_0x000107c5dfd4();
        func_0x000107c61180();
        func_0x000107c615e8(plVar5);
        uVar7 = 0;
        FUN_101193bac(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        plVar5 = plVar9;
        func_0x000107c5fc54(plVar9,uVar7);
        func_0x000107c61170(plVar9);
        if ((ulong)plVar5 >> 0x3e == 0) {
          plVar9 = *(long **)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar9 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar5) {
            plVar9 = plVar5;
          }
          func_0x000107c60480();
        }
        if (plVar9 != (long *)0x0) {
          uVar10 = 0;
          do {
            if (((ulong)plVar5 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1011923ec);
                (*pcVar3)();
              }
              uVar6 = plVar5[uVar10 + 4];
              func_0x000107c61174(uVar6);
            }
            else {
              uVar6 = uVar10;
              FUN_10118dc90(uVar10,plVar5);
            }
            if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1011923e0);
              (*pcVar3)();
            }
            plVar11 = (long *)(uVar10 + 1);
            func_0x000107e8846c();
            func_0x000107c61170(uVar6);
            uVar10 = uVar10 + 1;
          } while (plVar11 != plVar9);
        }
        func_0x000107c6142c(plVar5);
      }
      func_0x000107c5d3dc(plVar8);
    }
  }
  return plVar8;
}



/* Entry: 101192440; end: 1011924cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101192440(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  puVar2 = auStack_30;
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d63010) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d63018) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_30,puVar1);
  func_0x000107c61180();
  func_0x000107c53e08();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1011924d0; end: 10119265b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011924d0(byte param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112d63010;
  func_0x000107c61428(unaff_x20 + _DAT_112d63010,auStack_78,1,0);
  bVar1 = *(byte *)(unaff_x20 + lVar2);
  *(byte *)(unaff_x20 + lVar2) = param_1;
  if ((param_1 & 1) != bVar1) {
    func_0x000107c3fd68();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      uVar7 = unaff_x20;
      func_0x000107c5dfd4();
      func_0x000107c61180();
      func_0x000107c615e8(unaff_x20);
      uVar4 = 0;
      FUN_101193bac(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
      uVar5 = uVar7;
      func_0x000107c5fc54(uVar7,uVar4);
      func_0x000107c61170(uVar7);
      if (uVar5 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar7 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10119260c);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar5 + uVar8 * 8 + 0x20);
            func_0x000107c61174(uVar6);
          }
          else {
            uVar6 = uVar8;
            FUN_10118dc90(uVar8,uVar5);
          }
          if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101192608);
            (*pcVar3)();
          }
          uVar9 = uVar8 + 1;
          func_0x000107e8846c();
          func_0x000107c61170(uVar6);
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar7);
      }
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c5d3dc();
  }
  return;
}



/* Entry: 10119265c; end: 10119269b;  */

void FUN_10119265c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b40c0);
  return;
}



/* Entry: 10119269c; end: 1011926ff; -[MemoriesSnapsTabQuotaStatusBarPlugin sectionControllerForViewModel:selectMode:] */

void FUN_10119269c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101192238(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101192700; end: 10119289b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101192700(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar3 = PTR_PTR_1126a64a0;
  func_0x000107c610f8(PTR_PTR_1126a64a0);
  func_0x000107c453e4();
  lVar4 = *(long *)(unaff_x20 + _DAT_112d62ff0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c598d8(puVar3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d63008);
    puVar5 = &UNK_11038bf88;
    func_0x000107c613fc(&UNK_11038bf88,0x20,7);
    uVar8 = puVar1[1];
    uVar9 = *puVar1;
    *(undefined8 *)(puVar5 + 0x18) = puVar1[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x101193c24;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11038bfa0;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c56ed0(puVar3);
    func_0x000107c60bd0(ppuVar6);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d63000);
    puVar5 = &UNK_11038bfd8;
    func_0x000107c613fc(&UNK_11038bfd8,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar8;
    uStack_70 = 0x101193c2c;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11038bff0;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c61174(uVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c56ecc(puVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lVar4);
  }
  return puVar3;
}



/* Entry: 10119289c; end: 10119295b;  */

/* WARNING: Possible PIC construction at 0x000101192940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101192944) */

void FUN_10119289c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_11038c078;
  func_0x000107c613fc(&UNK_11038c078,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &UNK_11038c0a0;
  func_0x000107c613fc(&UNK_11038c0a0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d928e48;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(param_2);
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d928e58,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10119295c; end: 1011929c7;  */

void FUN_10119295c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011929c8,uVar1,uVar2);
  return;
}



/* Entry: 1011929c8; end: 1011929ff;  */

void FUN_1011929c8(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0001011929fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101192a00; end: 101192a3b;  */

void FUN_101192a00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101192a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101192a3c; end: 101192aff;  */

/* WARNING: Possible PIC construction at 0x000101192ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101192ae8) */

void FUN_101192a3c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11038c028;
  func_0x000107c613fc(&UNK_11038c028,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11038c050;
  func_0x000107c613fc(&UNK_11038c050,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d928e20;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d928e30,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101192b00; end: 101192b6b;  */

void FUN_101192b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101192b6c,uVar1,uVar2);
  return;
}



/* Entry: 101192b6c; end: 101192bcb;  */

void FUN_101192b6c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ab18();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101192bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 101192bcc; end: 101192c0f;  */

void FUN_101192bcc(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101192c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101192c10; end: 101192c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101192c10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d63020) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d63028) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101192c74; end: 101192cbf;  */

void FUN_101192c74(undefined8 param_1,long param_2)

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



/* Entry: 101192cc0; end: 101192d0b;  */

void FUN_101192cc0(long param_1,undefined8 param_2)

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



/* Entry: 101192d0c; end: 101192d37; -[MemoriesSnapsTabQuotaStatusBarPlugin init] */

void FUN_101192d0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabQuotaStatusBarPlugin.MemoriesSnapsTabQuotaStatusBarPluginImpl"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101192d38);
  (*pcVar1)();
}



/* Entry: 101192d38; end: 101192df3; -[MemoriesSnapsTabQuotaStatusBarPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101192d38(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d62fe8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d62ff0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d62ff8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63000));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63008 + 8));
  return;
}



/* Entry: 101192df4; end: 101192e03; -[MemoriesSnapsTabQuotaStatusBarViewModel storageQuotaState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101192df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d63020));
  return;
}



/* Entry: 101192e04; end: 101192e13; -[MemoriesSnapsTabQuotaStatusBarViewModel componentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101192e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d63028));
  return;
}



/* Entry: 101192e14; end: 101192e8b; -[MemoriesSnapsTabQuotaStatusBarViewModel initWithStorageQuotaState:componentContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101192e14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d63020) = param_3;
  *(undefined8 *)(param_1 + _DAT_112d63028) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 101192e8c; end: 101192ecb; -[MemoriesSnapsTabQuotaStatusBarViewModel diffIdentifier] */

void FUN_101192e8c(void)

{
  if (lRam0000000112d63030 != -1) {
    func_0x000107c61568(0x112d63030,0x101192da4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000112d63038);
  return;
}



/* Entry: 101192ecc; end: 101192faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101192ecc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  uVar3 = 0;
  if (param_1 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c614f0();
    lVar1 = param_1;
    func_0x000107c61480(param_1,lVar5);
    if (lVar1 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d63020);
      lVar5 = *(long *)(lVar1 + _DAT_112d63020);
      if (lVar4 == 0) {
        if (lVar5 == 0) goto LAB_101192fa8;
      }
      else {
        if (lVar4 == lVar5) {
LAB_101192fa8:
          uVar3 = 1;
          goto LAB_101192f90;
        }
        if (lVar5 != 0) {
          uVar2 = 0;
          func_0x000103fbf074();
          alStack_50[0] = lVar5;
          uStack_38 = uVar2;
          func_0x000107c61174(lVar5);
          func_0x000107c61174();
          func_0x000107c615f0(param_1);
          func_0x000107c61174(lVar4);
          func_0x000103fbe99c(alStack_50);
          func_0x000107c615e8(param_1);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar4);
          func_0x00010006e7f4(alStack_50);
          goto LAB_101192f90;
        }
      }
    }
  }
  uVar3 = 0;
LAB_101192f90:
  return uVar3 & 1;
}



/* Entry: 101192fb0; end: 10119300b; -[MemoriesSnapsTabQuotaStatusBarViewModel isEqualToDiffableObject:] */

uint FUN_101192fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101192ecc(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10119300c; end: 101193037; -[MemoriesSnapsTabQuotaStatusBarViewModel init] */

void FUN_10119300c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabQuotaStatusBarPlugin.MemoriesSnapsTabQuotaStatusBarViewModel"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101193038);
  (*pcVar1)();
}



/* Entry: 101193038; end: 10119306f; -[MemoriesSnapsTabQuotaStatusBarViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101193054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101193058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d63020));
  return;
}



/* Entry: 101193070; end: 1011930b3; -[MemoriesSnapsTabQuotaStatusBarSectionController selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101193070(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63010;
  func_0x000107c61428(param_1 + _DAT_112d63010,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}


