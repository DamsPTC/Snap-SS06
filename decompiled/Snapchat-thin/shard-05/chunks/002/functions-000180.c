/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c3dd80; end: 103c3dde3;  */

/* WARNING: Possible PIC construction at 0x000103c3dd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c3ddc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c3dda0) */
/* WARNING: Removing unreachable block (ram,0x000103c3ddcc) */

void FUN_103c3dd80(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103c3dde4; end: 103c3de9b;  */

undefined8 * FUN_103c3dde4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  func_0x000107c61174(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  iVar1 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)iVar1) = uVar3;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 103c3de9c; end: 103c3e09f;  */

undefined8 * FUN_103c3de9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  lVar2 = (long)*(int *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)((long)param_1 + lVar2);
  *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)((long)param_2 + lVar2);
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar2 = (long)*(int *)(param_3 + 0x24);
  uVar3 = *(undefined8 *)((long)param_1 + lVar2);
  *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)((long)param_2 + lVar2);
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Entry: 103c3e0a0; end: 103c3e0b7;  */

void FUN_103c3e0a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103c3e0b8; end: 103c3e0ef;  */

void FUN_103c3e0b8(undefined8 param_1)

{
  if (lRam0000000112ffaa10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7bba74);
  return;
}



/* Entry: 103c3e0f0; end: 103c3e36b;  */

void FUN_103c3e0f0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  lVar2 = 0x13f;
  puStack_58 = puVar1;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10dc68eb8;
    puStack_48 = puVar1;
    puStack_38 = puStack_40;
    puStack_30 = puVar1;
    func_0x000107c6153c(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 103c3e36c; end: 103c3e39b;  */

void FUN_103c3e36c(long param_1,long param_2)

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



/* Entry: 103c3e39c; end: 103c3e3f7;  */

void FUN_103c3e39c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103c3e3f8; end: 103c3e4bf;  */

void FUN_103c3e3f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_103c3e504;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103c3e50c;
  puStack_48 = &UNK_1106ede18;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x0001003238bc(0);
  func_0x000107c610f8();
  func_0x000104326cc4(puVar1);
  return;
}



/* Entry: 103c3e4c0; end: 103c3e503;  */

void FUN_103c3e4c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4ac44(uVar1);
  func_0x000107c61180();
  FUN_103c3dc80(0);
  func_0x000107c610f8();
  FUN_103c3aef0(uVar1);
  return;
}



/* Entry: 103c3e504; end: 103c3e50b;  */

void FUN_103c3e504(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4ac44(uVar1);
  func_0x000107c61180();
  FUN_103c3dc80(0);
  func_0x000107c610f8();
  FUN_103c3aef0(uVar1);
  return;
}



/* Entry: 103c3e50c; end: 103c3e543;  */

void FUN_103c3e50c(long param_1)

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



/* Entry: 103c3e544; end: 103c3e567;  */

void FUN_103c3e544(long param_1,long param_2)

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



/* Entry: 103c3e568; end: 103c3e607;  */

void FUN_103c3e568(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c3e608; end: 103c3e6e3;  */

void FUN_103c3e608(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x103c3e6ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103c3e50c;
  puStack_58 = &UNK_1106ede40;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x0001003238bc(0);
  func_0x000107c610f8();
  func_0x000104326cc4(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 103c3e6e4; end: 103c3e6ef;  */

void FUN_103c3e6e4(long param_1,long param_2)

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



/* Entry: 103c3e6f0; end: 103c3e793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c3e6f0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [8];
  undefined1 auStack_50 [16];
  
  puVar4 = auStack_60;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x0001003b4264();
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ffab50) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_50;
  func_0x000107c61154(puVar3,puVar1);
  *(undefined1 **)(unaff_x20 + _DAT_112ffab58) = puVar3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar4;
}



/* Entry: 103c3e794; end: 103c3e83b; -[_TtC32PlatformUIExperimentsServiceImpl32PlatformUIExperimentsServiceImpl initWithAppStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c3e794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_60;
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar3 = lVar2;
  func_0x0001003b4264();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ffab50) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c615f4(param_3,2);
  plVar5 = &lStack_50;
  func_0x000107c61154(plVar5,puVar1);
  *(long **)(param_1 + _DAT_112ffab58) = plVar5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_3);
  return (undefined1 *)plVar6;
}



/* Entry: 103c3e83c; end: 103c3e84f;  */

void FUN_103c3e83c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c3e850; end: 103c3e85f; -[_TtC32PlatformUIExperimentsServiceImpl32PlatformUIExperimentsServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3e850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ffab58));
  return;
}



/* Entry: 103c3e860; end: 103c3e867; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_103c3e860(void)

{
  undefined8 in_x3;
  
  return in_x3;
}



/* Entry: 103c3e868; end: 103c3e86f; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_103c3e868(void)

{
  undefined8 in_x3;
  
  return in_x3;
}



/* Entry: 103c3e870; end: 103c3e873; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_103c3e870(void)

{
  return;
}



/* Entry: 103c3e874; end: 103c3e87b; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_103c3e874(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(in_x3);
  return;
}



/* Entry: 103c3e87c; end: 103c3e8bf; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_103c3e87c(void)

{
  undefined *puVar1;
  undefined *in_x3;
  
  puVar1 = in_x3;
  if (in_x3 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126af7d0;
    func_0x000107c610f8(PTR_PTR_1126af7d0);
    func_0x000107c453e4();
  }
  func_0x000107c61174(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103c3e8c0; end: 103c3e91b; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_103c3e8c0(void)

{
  undefined *puVar1;
  undefined *in_x3;
  undefined *puVar2;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (in_x3 != (undefined *)0x0) {
    func_0x000107c5fc54(in_x3,PTR___sSSN_11034da80);
    puVar2 = in_x3;
  }
  puVar1 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103c3e91c; end: 103c3e923; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper manualExposureValueForConfigKeySync:featureProvidedSignals:] */

void FUN_103c3e91c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103c3e924; end: 103c3e957;  */

void FUN_103c3e924(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c3e958; end: 103c3e96b; -[_TtC32PlatformUIExperimentsServiceImplP33_53A4F59DB8683A758C5663165CA1265F29AppStartConfigProviderWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3e958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ffab50));
  return;
}



/* Entry: 103c3e96c; end: 103c3e9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c3e96c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112ffabb8) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103c3e9dc; end: 103c3e9eb; -[_TtC28PlatformUIExperimentsService28PlatformUIExperimentsService experiments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3e9dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffabb8));
  return;
}



/* Entry: 103c3e9ec; end: 103c3ea1f;  */

void FUN_103c3e9ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c3ea20; end: 103c3ea2f;  */

undefined1  [16] FUN_103c3ea20(void)

{
  return ZEXT816(0x1106edfb0);
}



/* Entry: 103c3ea30; end: 103c3ea3f; -[_TtC28PlatformUIExperimentsService28PlatformUIExperimentsService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3ea30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffabb8));
  return;
}



/* Entry: 103c3ea40; end: 103c3eaab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3ea40(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103c3ee34();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ffabf0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103c3eaac; end: 103c3eb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3eaac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ffabf0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c3eb18; end: 103c3eb77; -[_TtC44SimpleWebBrowserScopedFactoryServiceProvider30SimpleWebBrowserScopedServices init] */

void FUN_103c3eb18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SimpleWebBrowserScopedFactoryServiceProvider.SimpleWebBrowserScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3eb44);
  (*pcVar1)();
}



/* Entry: 103c3eb78; end: 103c3eb87; -[_TtC44SimpleWebBrowserScopedFactoryServiceProvider30SimpleWebBrowserScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3eb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ffabf0));
  return;
}



/* Entry: 103c3eb88; end: 103c3ebf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3eb88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106ee188;
  func_0x000107c613fc(&UNK_1106ee188,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  FUN_103dc513c(FUN_103c3eecc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c3ebf4; end: 103c3ec8f;  */

void FUN_103c3ebf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106ee098;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106ee098;
  return;
}



/* Entry: 103c3ec90; end: 103c3ecc7;  */

void FUN_103c3ec90(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103c3ecc8; end: 103c3eccf;  */

undefined8 FUN_103c3ecc8(void)

{
  return 0x1b;
}



/* Entry: 103c3ecd0; end: 103c3ee03;  */

void FUN_103c3ecd0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ee1b0;
  func_0x000107c613fc(&UNK_1106ee1b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103c3eea4;
  func_0x00010058fa64(FUN_103c3eea4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103c3ee04; end: 103c3ee33;  */

undefined ** FUN_103c3ee04(void)

{
  return &PTR_DAT_112ffbe98;
}



/* Entry: 103c3ee34; end: 103c3ee53;  */

void FUN_103c3ee34(void)

{
  func_0x000107c61168(&PTR_PTR_1129483e8);
  return;
}



/* Entry: 103c3ee54; end: 103c3eea3;  */

undefined1  [16] FUN_103c3ee54(void)

{
  return ZEXT816(0x1106ee0e8);
}



/* Entry: 103c3eea4; end: 103c3eecb;  */

void FUN_103c3eea4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103c3eecc; end: 103c3eecf;  */

void FUN_103c3eecc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c3eed0; end: 103c3ef4b;  */

void FUN_103c3eed0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ffac60,&UNK_10dc69260);
  func_0x000107c613fc();
  pcVar1 = FUN_103c3f260;
  func_0x0001000841fc(FUN_103c3f260,param_2);
  func_0x000100084214(&UNK_10dc69230,0x2c,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103c3ef4c; end: 103c3ef63;  */

void FUN_103c3ef4c(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ffac60,&UNK_10dc69260);
  func_0x000107c613fc();
  pcVar1 = FUN_103c3f260;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dc69230,0x2c,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103c3ef64; end: 103c3f25f;  */

void FUN_103c3ef64(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ffac68,&UNK_10dc69268);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_103c3ec90;
  func_0x0001000823a8(FUN_103c3ec90,0);
  func_0x000100082720("SimpleWebBrowserScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ffac70,&UNK_10dc69280);
  puVar3 = &UNK_1106ee210;
  func_0x000107c613fc(&UNK_1106ee210,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x103c3f268;
  func_0x0001000823a8(0x103c3f268,puVar3);
  pcVar4 = "SimpleWebBrowserEntryPointWrapperServiceProvider";
  func_0x000100082720("SimpleWebBrowserEntryPointWrapperServiceProvider",0x30,2);
  FUN_103c3fe50();
  func_0x000100082720("SimpleWebBrowserScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ffac78,&UNK_10dc69270);
  puVar3 = &UNK_1106ee238;
  func_0x000107c613fc(&UNK_1106ee238,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar4;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar2);
  uVar5 = 0x103c3f270;
  func_0x0001000823a8(0x103c3f270,puVar3);
  func_0x000100082720("SimpleWebBrowserScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ffabf8,&UNK_10dc69030);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x103c3f27c;
  func_0x0001000823a8(0x103c3f27c,uVar5);
  func_0x000100082720("SimpleWebBrowserScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ffabe8,&UNK_10dc69020);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103c3f284;
  func_0x0001000823a8(0x103c3f284,uVar6);
  func_0x000100082720("SimpleWebBrowserScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1106ee260;
  func_0x000107c613fc(&UNK_1106ee260,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  pcVar8 = FUN_103c3f2b8;
  func_0x0001000823a8(FUN_103c3f2b8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SimpleWebBrowserScopeEntryPointProvider",0x27,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 103c3f260; end: 103c3f28b;  */

void FUN_103c3f260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ffac68,&UNK_10dc69268);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_103c3ec90;
  func_0x0001000823a8(FUN_103c3ec90,0);
  func_0x000100082720("SimpleWebBrowserScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ffac70,&UNK_10dc69280);
  puVar3 = &UNK_1106ee210;
  func_0x000107c613fc(&UNK_1106ee210,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x103c3f268;
  func_0x0001000823a8(0x103c3f268,puVar3);
  pcVar4 = "SimpleWebBrowserEntryPointWrapperServiceProvider";
  func_0x000100082720("SimpleWebBrowserEntryPointWrapperServiceProvider",0x30,2);
  FUN_103c3fe50();
  func_0x000100082720("SimpleWebBrowserScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ffac78,&UNK_10dc69270);
  puVar3 = &UNK_1106ee238;
  func_0x000107c613fc(&UNK_1106ee238,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar4;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar2);
  uVar5 = 0x103c3f270;
  func_0x0001000823a8(0x103c3f270,puVar3);
  func_0x000100082720("SimpleWebBrowserScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ffabf8,&UNK_10dc69030);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x103c3f27c;
  func_0x0001000823a8(0x103c3f27c,uVar5);
  func_0x000100082720("SimpleWebBrowserScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ffabe8,&UNK_10dc69020);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103c3f284;
  func_0x0001000823a8(0x103c3f284,uVar6);
  func_0x000100082720("SimpleWebBrowserScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1106ee260;
  func_0x000107c613fc(&UNK_1106ee260,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  pcVar8 = FUN_103c3f2b8;
  func_0x0001000823a8(FUN_103c3f2b8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SimpleWebBrowserScopeEntryPointProvider",0x27,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 103c3f28c; end: 103c3f2b7;  */

void FUN_103c3f28c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c3f2b8; end: 103c3f2bf;  */

void FUN_103c3f2b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106ee098;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106ee098;
  return;
}



/* Entry: 103c3f2c0; end: 103c3f39f;  */

void FUN_103c3f2c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_103c3f538();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_103c41468(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103c40de8(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar1);
  FUN_103c40df4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103c3f3a0; end: 103c3f44f;  */

long FUN_103c3f3a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_103c41468(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103c40de8(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_103c40df4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 103c3f450; end: 103c3f47b;  */

void FUN_103c3f450(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c3f47c; end: 103c3f483;  */

undefined8 FUN_103c3f47c(void)

{
  return 0x1b;
}



/* Entry: 103c3f484; end: 103c3f507;  */

void FUN_103c3f484(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103c3f578,param_2,FUN_103c3f57c,param_2,0x103c3f5a4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103c3f508; end: 103c3f537;  */

undefined ** FUN_103c3f508(void)

{
  return &PTR_DAT_112ffbe98;
}



/* Entry: 103c3f538; end: 103c3f557;  */

void FUN_103c3f538(void)

{
  func_0x000107c61168(&PTR_PTR_112fface8);
  return;
}



/* Entry: 103c3f558; end: 103c3f57b;  */

undefined1  [16] FUN_103c3f558(void)

{
  return ZEXT816(0x1106ee2b8);
}



/* Entry: 103c3f57c; end: 103c3f5cf;  */

void FUN_103c3f57c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103c3f5d0; end: 103c3f60b;  */

void FUN_103c3f5d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_103c3f60c();
  func_0x0001000a7f38("SimpleWebBrowserScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103c3f60c; end: 103c3f7f7;  */

void FUN_103c3f60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106ef520;
  ppuVar4 = &PTR_DAT_112ffbe98;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ffad50;
  func_0x0001000285a8(0x112ffad50,&UNK_10dc693b8);
  func_0x0001000a6ee8(&UNK_1106ee2b8,"SimpleWebBrowserEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_103c3f86c,param_1,uVar2,&UNK_1106ee2b8,&PTR_DAT_112ffac80);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1106ee308;
  func_0x000107c613fc(&UNK_1106ee308,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106ee4c0,"SimpleWebBrowserScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_103c3f874,puVar3,uVar2,&UNK_1106ee4c0,&PTR_DAT_112ffade0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106ee330;
  func_0x000107c613fc(&UNK_1106ee330,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106ee128,"SimpleWebBrowserScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_103c3f95c,puVar3,uVar2,&UNK_1106ee128,&PTR_DAT_112ffac00);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ffad58;
  func_0x0001000285a8(0x112ffad58,&UNK_10dc693c0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 103c3f7f8; end: 103c3f86b;  */

void FUN_103c3f7f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103c3f998;
  func_0x0001000823a8(0x103c3f998,param_3);
  func_0x000100082720("SimpleWebBrowserEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c3f86c; end: 103c3f873;  */

void FUN_103c3f86c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103c3f998;
  func_0x0001000823a8();
  func_0x000100082720("SimpleWebBrowserEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c3f874; end: 103c3f8b3;  */

void FUN_103c3f874(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103c3ff34(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SimpleWebBrowserScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c3f8b4; end: 103c3f95b;  */

void FUN_103c3f8b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ee358;
  func_0x000107c613fc(&UNK_1106ee358,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103c3f990;
  func_0x0001000823a8(FUN_103c3f990,puVar1);
  func_0x000100082720("SimpleWebBrowserScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103c3f95c; end: 103c3f963;  */

void FUN_103c3f95c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106ee358;
  func_0x000107c613fc(&UNK_1106ee358,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103c3f990;
  func_0x0001000823a8(FUN_103c3f990,puVar3);
  func_0x000100082720("SimpleWebBrowserScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103c3f964; end: 103c3f98f;  */

void FUN_103c3f964(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c3f990; end: 103c3f99f;  */

void FUN_103c3f990(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ee1b0;
  func_0x000107c613fc(&UNK_1106ee1b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103c3eea4;
  func_0x00010058fa64(FUN_103c3eea4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103c3f9a0; end: 103c3fa27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c3f9a0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103c3fd60();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ffad60) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ffad68) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3fa28);
  (*pcVar1)();
}



/* Entry: 103c3fa28; end: 103c3fa87; -[_TtC32SimpleWebBrowserScopeGraphBridge47SimpleWebBrowserScopeGraphBridgeSaberEntryPoint init] */

void FUN_103c3fa28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SimpleWebBrowserScopeGraphBridge.SimpleWebBrowserScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3fa54);
  (*pcVar1)();
}



/* Entry: 103c3fa88; end: 103c3fabf; -[_TtC32SimpleWebBrowserScopeGraphBridge47SimpleWebBrowserScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c3faa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c3faa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3fa88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffad60));
  return;
}



/* Entry: 103c3fac0; end: 103c3fae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3fac0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ffad68),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ffad60));
  return;
}



/* Entry: 103c3fae8; end: 103c3fb07;  */

void FUN_103c3fae8(void)

{
  func_0x000107c61168(&PTR_PTR_1129484a8);
  return;
}



/* Entry: 103c3fb08; end: 103c3fb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c3fb08(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ffad98) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ffada0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c3fb90);
  (*pcVar2)();
}



/* Entry: 103c3fb90; end: 103c3fc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c3fb90(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffad98);
  *(undefined **)(unaff_x20 + _DAT_112ffad98) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffada0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ffada0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106ee420;
  func_0x000107c613fc(&UNK_1106ee420,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103c3fc7c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103c3fc78; end: 103c3fc83;  */

void FUN_103c3fc78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103c3fc84; end: 103c3fce3; -[_TtC32SimpleWebBrowserScopeGraphBridge45SimpleWebBrowserScopedServicesSaberEntryPoint init] */

void FUN_103c3fc84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SimpleWebBrowserScopeGraphBridge.SimpleWebBrowserScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3fcb0);
  (*pcVar1)();
}



/* Entry: 103c3fce4; end: 103c3fd1b; -[_TtC32SimpleWebBrowserScopeGraphBridge45SimpleWebBrowserScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c3fce4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ffada0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffad98));
  return;
}



/* Entry: 103c3fd1c; end: 103c3fd1f;  */

void FUN_103c3fd1c(void)

{
  return;
}



/* Entry: 103c3fd20; end: 103c3fd3f;  */

void FUN_103c3fd20(void)

{
  FUN_103c3fb90();
  return;
}



/* Entry: 103c3fd40; end: 103c3fd5f;  */

void FUN_103c3fd40(void)

{
  func_0x000107c61168(&PTR_PTR_112948570);
  return;
}



/* Entry: 103c3fd60; end: 103c3fe2f;  */

undefined8 FUN_103c3fd60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ffadd0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_103c3fe30();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103c3fe30; end: 103c3fe4f;  */

void FUN_103c3fe30(void)

{
  func_0x000107c61168(&PTR_PTR_112948638);
  return;
}



/* Entry: 103c3fe50; end: 103c3febb;  */

void FUN_103c3fe50(void)

{
  func_0x0001000285a8(0x112ffadd8,&UNK_10dc69488);
  func_0x0001000823a8(0x103c3fe90,0);
  return;
}



/* Entry: 103c3febc; end: 103c3fef7; -[_TtC32SimpleWebBrowserScopeGraphBridge40SimpleWebBrowserScopeGraphBridgeServices init] */

void FUN_103c3febc(undefined8 param_1)

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



/* Entry: 103c3fef8; end: 103c3ff2b;  */

void FUN_103c3fef8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c3ff2c; end: 103c3ff33;  */

undefined8 FUN_103c3ff2c(void)

{
  return 0x1b;
}



/* Entry: 103c3ff34; end: 103c400ab;  */

void FUN_103c3ff34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ee468;
  func_0x000107c613fc(&UNK_1106ee468,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103c400ac,puVar1);
  return;
}



/* Entry: 103c400ac; end: 103c400b3;  */

void FUN_103c400ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ffadd0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ffadd0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106ee500;
  func_0x000107c613fc(&UNK_1106ee500,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103c40160;
  func_0x00010058fa64(0x103c40160,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103c400b4; end: 103c4010f;  */

void FUN_103c400b4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ffadd0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ffadd0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103c40110; end: 103c40167;  */

undefined ** FUN_103c40110(void)

{
  return &PTR_DAT_112ffbe98;
}



/* Entry: 103c40168; end: 103c401af; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40168(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffae30;
  func_0x000107c61428(param_1 + _DAT_112ffae30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c401b0; end: 103c40207; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c401b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffae30;
  func_0x000107c61428(param_1 + _DAT_112ffae30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103c40208; end: 103c4024f; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint simpleWebBrowserScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40208(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffae38;
  func_0x000107c61428(param_1 + _DAT_112ffae38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103c40250; end: 103c402b3; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint setSimpleWebBrowserScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffae38;
  func_0x000107c61428(param_1 + _DAT_112ffae38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103c402b4; end: 103c403e7;  */

/* WARNING: Possible PIC construction at 0x000103c4036c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c40388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c403a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c40370) */
/* WARNING: Removing unreachable block (ram,0x000103c4038c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c402b4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5b044();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_103c3fae8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_103c3fd60();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c403e8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ffad60) = lVar5;
    *(long *)(lVar4 + _DAT_112ffad68) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


