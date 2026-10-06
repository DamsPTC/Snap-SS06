/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10025a5cc; end: 10025a607;  */

void FUN_10025a5cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10025a608; end: 10025a633;  */

void FUN_10025a608(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10025a634; end: 10025a6af;  */

undefined * FUN_10025a634(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb230 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f887f8,
                        &UNK_10e5e963c,&UNK_10e5e9694,4,&UNK_10b7ecde8,0);
    do {
      if (puRam00000001137fb230 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137fb230;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb230,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb230 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb230;
}



/* Entry: 10025a6b0; end: 10025a6bf;  */

void FUN_10025a6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e81e41c);
  return;
}



/* Entry: 10025a6c0; end: 10025a71b;  */

void FUN_10025a6c0(long param_1)

{
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  puStack_38 = &UNK_10dd38210;
  puStack_28 = &UNK_10dd38228;
  puStack_20 = &UNK_10dd38210;
  puStack_18 = &UNK_10dd38210;
  func_0x000107c61524(param_1,0,5,&puStack_38,param_1 + 0x58);
  return;
}



/* Entry: 10025a71c; end: 10025a897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10025a71c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *unaff_x20;
  code *pcVar10;
  
  puVar4 = &stack0xffffffffffffffb0;
  uVar7 = *unaff_x20;
  uVar8 = *(ulong *)PTR__swift_isaMask_11034f488;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_113092540);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_113092538;
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)((long)unaff_x20 + _DAT_113092548) = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_113092550);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_113092558);
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar3 = *(undefined8 *)((uVar8 & uVar7) + 0x50);
  FUN_10025a6b0(0,uVar3);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  puVar5 = &UNK_1107a39d8;
  func_0x000107c613fc(&UNK_1107a39d8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar4);
  puVar6 = &UNK_1107a3a00;
  func_0x000107c613fc(&UNK_1107a3a00,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar3;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcVar10 = *(code **)(*param_1 + 0x60);
  func_0x000107c61174();
  uVar3 = 0x100a479f8;
  puVar5 = puVar6;
  (*pcVar10)();
  func_0x000107c61574(puVar6);
  func_0x000107c61574(param_1);
  puVar1 = (undefined8 *)(puVar4 + _DAT_113092540);
  uVar9 = *puVar1;
  *puVar1 = uVar3;
  puVar1[1] = puVar5;
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(uVar9);
  return puVar4;
}



/* Entry: 10025a898; end: 10025a8df;  */

void FUN_10025a898(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10025a8e0; end: 10025a907;  */

void FUN_10025a8e0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c499d4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10025a908; end: 10025a98b; -[SCPlugInScopeExposerProxy initWithUnderlyingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10025a908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112703848;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112787ce8;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10025a98c; end: 10025a993;  */

void FUN_10025a98c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10025a994; end: 10025a9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10025a994(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100243cf4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113083f90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10025a9fc; end: 10025fd4f;  */

void FUN_10025a9fc(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010025ca90(extraout_x8,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10025fd50; end: 10025fd57;  */

void FUN_10025fd50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 3000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 4000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1008));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1010));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1018));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1020));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1028));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1030));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1038));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1040));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1048));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1050));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1058));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1060));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1068));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1070));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1078));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1080));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1088));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1090));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1098));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10025fd58; end: 100260e9b;  */

void FUN_10025fd58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 3000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xea8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xeb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xec8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xed8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xee8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xef8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 4000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xfe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xff8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1008));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1010));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1018));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1020));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1028));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1030));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1038));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1040));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1048));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1050));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1058));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1060));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1068));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1070));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1078));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1080));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1088));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1090));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1098));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100260e9c; end: 100260ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100260e9c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100236774();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113073c00) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100260ea4; end: 100260f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100260ea4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100236774();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113073c00) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100260f10; end: 10026111b;  */

/* WARNING: Possible PIC construction at 0x000100261054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100261064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100261074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100261084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100261094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002610a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002610b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002610c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002610d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002610e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002610f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002610e8) */
/* WARNING: Removing unreachable block (ram,0x0001002610d8) */
/* WARNING: Removing unreachable block (ram,0x0001002610c8) */
/* WARNING: Removing unreachable block (ram,0x0001002610b8) */
/* WARNING: Removing unreachable block (ram,0x0001002610a8) */
/* WARNING: Removing unreachable block (ram,0x000100261098) */
/* WARNING: Removing unreachable block (ram,0x000100261088) */
/* WARNING: Removing unreachable block (ram,0x000100261078) */
/* WARNING: Removing unreachable block (ram,0x000100261068) */
/* WARNING: Removing unreachable block (ram,0x000100261058) */
/* WARNING: Removing unreachable block (ram,0x0001002610f8) */

void FUN_100260f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_11070fe28;
  func_0x000107c613fc(&UNK_11070fe28,0xc0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  uVar2 = 0x113009ea0;
  FUN_1000285a8(0x113009ea0,&UNK_10dc92480);
  func_0x000107c613fc();
  puVar3 = &UNK_103db0a5c;
  FUN_1000841f8(&UNK_103db0a5c,puVar1,uVar2);
  FUN_100084214(&UNK_10dc92450,0x2e,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10026111c; end: 10026111f;  */

void FUN_10026111c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100261120; end: 10026116b;  */

void FUN_100261120(void)

{
  long unaff_x20;
  
  FUN_100260f10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 10026116c; end: 10026116f;  */

void FUN_10026116c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100261170; end: 10026123b;  */

void FUN_100261170(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10026123c; end: 100261243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026123c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d7b1c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e01960) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100261244; end: 1002612af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100261244(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d7b1c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e01960) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1002612b0; end: 1002612b7;  */

void FUN_1002612b0(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db0600,&UNK_10d959f38);
  func_0x000107c613fc();
  puVar1 = &UNK_1015268a8;
  FUN_1000841f8();
  FUN_100084214("SCBootstrapResponseProcessorPluginRegistryServiceProvider",0x39,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1002612b8; end: 100261333;  */

void FUN_1002612b8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db0600,&UNK_10d959f38);
  func_0x000107c613fc();
  puVar1 = &UNK_1015268a8;
  FUN_1000841f8(&UNK_1015268a8,param_2);
  FUN_100084214("SCBootstrapResponseProcessorPluginRegistryServiceProvider",0x39,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100261334; end: 10026133b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100261334(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001f4770();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e01810) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10026133c; end: 1002613a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026133c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001f4770();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e01810) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1002613a8; end: 1002613af;  */

void FUN_1002613a8(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_1000285a8(0x112db0620,&UNK_10d959f58);
  func_0x000107c613fc();
  pcVar1 = FUN_1009993e0;
  FUN_1000841f8();
  FUN_100084214("SCLogoutCleanupHandlerPluginRegistryServiceProvider",0x33,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1002613b0; end: 10026142b;  */

void FUN_1002613b0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  FUN_1000285a8(0x112db0620,&UNK_10d959f58);
  func_0x000107c613fc();
  pcVar1 = FUN_1009993e0;
  FUN_1000841f8(FUN_1009993e0,param_2);
  FUN_100084214("SCLogoutCleanupHandlerPluginRegistryServiceProvider",0x33,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10026142c; end: 100261793; -[SCUserSessionSubScopesRouter initWithSystemScope:userSessionScope:activeUserSessionScopeServices:activeUserSessionScopeExposer:postRegistrationScopeExposer:postRegistrationScopeServices:termsOfUseScopeExposer:bootstrapResponseProcessorScopeExposer:bootstrapResponseProcessorPluginSaberService:logoutCleanupHandlersScopeExposer:logoutCleanupHandlerPluginSaberService:uiContainer:watchdogFactory:] */

undefined8 *
FUN_10026142c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_70 = PTR_PTR_1126e9d50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_14);
    uVar2 = puVar1[1];
    puVar1[1] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 2,param_3);
    func_0x000107c611a0(puVar1 + 3,param_4);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100261794; end: 10026180f;  */

void FUN_100261794(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100261810; end: 100261a77; -[SCUserSessionWorkflow initWithSystemScope:userSession:userSessionContext:workflowConfig:termsOfUseService:featureSettingServices:configManagerServices:router:workflowDelegate:userSessionLogger:watchdogFactory:] */

undefined8 *
FUN_100261810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126e9d58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 1);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100261a78; end: 100261b03;  */

void FUN_100261a78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100261b04; end: 100261b27; -[SCUserSessionWorkflow beginWorkflow] */

void FUN_100261b04(long param_1)

{
  func_0x000107c3c0e8();
                    /* WARNING: Could not recover jumptable at 0x00010c109a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_prepareLogoutHandler_1126200c0);
  return;
}



/* Entry: 100261b28; end: 100261cbf; -[SCUserSessionWorkflow _performFastLoginBackgroundSyncOrAdvanceWorkflow] */

void FUN_100261b28(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (lRam00000001136bfae0 != -1) {
    FUN_10002a2fc(0x1136bfae0,&PTR___NSConcreteGlobalBlock_1108ab930);
  }
  if ((bRam00000001136bfad8 & 1) != 0) {
    if (lRam00000001136bfae8 != -1) {
      FUN_10002a2fc(0x1136bfae8,&PTR___NSConcreteGlobalBlock_1108ab950);
    }
    if (cRam00000001136bfad9 == '\x01') {
      func_0x000107c61144(auStack_38,param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      func_0x000107c400ac(uVar1);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_40,auStack_38);
      func_0x000107c3e5d4(uVar1);
      func_0x000107c61170(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c5e3f8(uVar1);
      func_0x000107c61180();
      puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
      func_0x000107c610fc(PTR__OBJC_CLASS___UIViewController_1126af898);
      func_0x000107c57f18(uVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61120(auStack_40);
      func_0x000107c61120(auStack_38);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be80770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processBootstrapResponseOrAdvan_11257db78);
  return;
}



/* Entry: 100261cc0; end: 100261d1f;  */

/* WARNING: Possible PIC construction at 0x000100261d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100261d10) */

void FUN_100261cc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c3e148();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40404();
  uRam00000001136bfad8 = SUB81(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100261d20; end: 100261dff; -[SCUserSessionWorkflow _processBootstrapResponseOrAdvanceWorkflow] */

void FUN_100261d20(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c4bfa8(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x000107c49e14();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x000107c49e24();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd39b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__beginPostRegistrationOrAdvanceW_112552808);
      return;
    }
  }
  func_0x000107c61144(auStack_28,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4f294(uVar3);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100261e00; end: 100261f0b; -[SCUserSessionLogger logUserSessionStart:] */

void FUN_100261e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126bd538;
  func_0x000107c61174(param_3);
  func_0x000107c61160();
  lVar3 = param_1;
  func_0x000107c3b17c(param_1,param_2,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c538bc(puVar2,param_2,lVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c53494(puVar2,param_2,puVar4);
  func_0x000107c61170(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  func_0x000107c4e524();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100261f0c; end: 100262007; -[SCUserSessionLogger _contextToType:] */

undefined8 FUN_100261f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x000107c4c6fc(param_3);
  uVar1 = puStack_38[3];
  func_0x000107c60bcc(&uStack_40,8);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100262008; end: 1002620b3; -[SCUserSessionContext matchResumed:fromLogIn:fromRegistration:] */

/* WARNING: Possible PIC construction at 0x000100262094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100262098) */

void FUN_100262008(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar4 = *(code **)(param_5 + 0x10);
    param_4 = param_5;
  }
  else {
    if (lVar3 != 1) {
      if (lVar3 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
      }
      goto LAB_100262090;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_4 + 0x10);
  }
  (*pcVar4)(param_4,uVar1,uVar2);
LAB_100262090:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1002620b4; end: 1002620c3;  */

void FUN_1002620b4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1002620c4; end: 100262143; -[SCAUserSessionScopeStart setContext:] */

/* WARNING: Possible PIC construction at 0x00010026212c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100262130) */

void FUN_1002620c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100262144(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,2,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100262144; end: 10026216b;  */

undefined * FUN_100262144(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d822d8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10026216c; end: 1002621a3;  */

void FUN_10026216c(long param_1)

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



/* Entry: 1002621a4; end: 1002621ab;  */

undefined8 FUN_1002621a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c44424(uStack_28,param_2,3);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1002621ac; end: 1002621ff;  */

undefined8 FUN_1002621ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c44424(uStack_28,param_2,3);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 100262200; end: 10026222f; -[SCQueuePerformerProvider globalPerformerWithQoS:] */

void FUN_100262200(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  if (param_3 - 1U < 4) {
    uVar1 = *(undefined4 *)(&UNK_10e554090 + (param_3 - 1U) * 4);
  }
  else {
    uVar1 = 0x21;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfcd0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae790,PTR_s_globalQueuePerformer_contextStat_1125d0de0,uVar1,0);
  return;
}



/* Entry: 100262230; end: 100262283; +[SCQueuePerformer _utilityPerformer] */

void FUN_100262230(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe030 != -1) {
    FUN_10002a2fc(0x1137fe030,&PTR___NSConcreteGlobalBlock_110d98ae8);
  }
  uVar1 = uRam00000001137fe028;
  func_0x000107c61174(uRam00000001137fe028);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100262284; end: 1002622b7;  */

void FUN_100262284(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c46b68();
  uVar1 = puRam00000001137fe028;
  puRam00000001137fe028 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1002622b8; end: 1002622bf;  */

void FUN_1002622b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1002622c0; end: 1002622cf; -[SCUserSessionContext isFromLogIn] */

bool FUN_1002622c0(long param_1)

{
  return *(long *)(param_1 + 8) == 1;
}



/* Entry: 1002622d0; end: 1002622df; -[SCUserSessionContext isFromRegistration] */

bool FUN_1002622d0(long param_1)

{
  return *(long *)(param_1 + 8) == 2;
}



/* Entry: 1002622e0; end: 10026231b;  */

void FUN_1002622e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10026231c; end: 1002623c7; -[SCUserSessionWorkflow _beginPostRegistrationOrAdvanceWorkflow] */

void FUN_10026231c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c5d66c();
  func_0x000107c61170(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000107c49e24();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf18810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_beginPostRegistrationWithDelegat_1125a3ba8,
               param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebb630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showTermsOfUseOrAdvanceWorkflow_11258c730);
  return;
}



/* Entry: 1002623c8; end: 1002626c3; -[SCTermsOfUseServiceProvider _createTermsOfUseService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002623c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126d1520;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275abc8;
    func_0x000107c61148(lVar9);
  }
  lVar2 = lVar9;
  func_0x000107c5da68(lVar9);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11275abcc;
    func_0x000107c61148(lVar10);
  }
  lVar3 = lVar10;
  func_0x000107c5dac4(lVar10);
  func_0x000107c61180();
  lVar4 = param_1;
  FUN_1002629f0(param_1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c493d0(puVar1,param_2,lVar2,lVar3,lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar9);
  puVar6 = PTR_PTR_1126d1528;
  func_0x000107c610f4();
  lVar9 = param_1 + _DAT_11275abb4;
  func_0x000107c61148(lVar9);
  lVar2 = lVar9;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c45db0(puVar6,param_2,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar9);
  lVar9 = param_1 + _DAT_11275abb8;
  func_0x000107c61148();
  lVar2 = lVar9;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar10 = lVar2;
  FUN_100262c34();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar9);
  puVar7 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c470d0();
  puVar8 = PTR_PTR_1126d1530;
  func_0x000107c610f4(PTR_PTR_1126d1530);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11275abac);
  lVar9 = param_1 + _DAT_11275abbc;
  func_0x000107c61148(lVar9);
  lVar3 = lVar9;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_11275abc0;
  func_0x000107c61148(lVar2);
  lVar4 = lVar2;
  func_0x000107c444a4();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11275abc4;
  func_0x000107c61148();
  lVar5 = param_1;
  func_0x000107c4aaec();
  func_0x000107c61180();
  func_0x000107c48334(puVar8,param_2,uVar11,lVar3,param_3,lVar4,puVar1,puVar6,lVar5,(char)lVar10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1002626c4; end: 1002626d3; -[_TtC18SCUserSessionScope18SCUserSessionScope userSessionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002626c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091ae0));
  return;
}



/* Entry: 1002626d4; end: 1002629df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002626d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c4acfc(lStack_68);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  FUN_100083b20(&lStack_70);
  lVar2 = lStack_70;
  lVar1 = *(long *)(lStack_70 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  uVar7 = param_3;
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    uVar7 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar3 = PTR_PTR_1126d0308;
  func_0x000107c610f8(PTR_PTR_1126d0308);
  func_0x000107c453e4();
  FUN_100083b20(&uStack_78);
  puVar4 = PTR_PTR_1126a76d0;
  func_0x000107c610f8();
  func_0x000107c47540();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  FUN_100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar5 = *(long *)(lStack_68 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  puVar3 = PTR_PTR_1126d0320;
  func_0x000107c61168(PTR_PTR_1126d0320);
  FUN_100083b20(&lStack_68);
  lVar5 = lStack_68;
  func_0x000107c5a36c(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61168(PTR_PTR_1126d0370);
  func_0x000107c558d4();
  puVar3 = PTR_PTR_1126d0378;
  func_0x000107c61168(PTR_PTR_1126d0378);
  puVar6 = puVar3;
  func_0x0001000ad7c4();
  func_0x000107c57f40(puVar3);
  func_0x000107c61170(puVar6);
  puVar3 = PTR_PTR_1126d02e8;
  func_0x000107c61168(PTR_PTR_1126d02e8);
  puVar6 = puVar3;
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_11307e0c0);
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c5767c(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  FUN_100083b20(&lStack_68);
  FUN_100083b20(&lStack_70);
  uVar7 = *(undefined8 *)(lStack_70 + _DAT_113091ad8);
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lStack_70);
  func_0x000107c5a3f0(lStack_68);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(lStack_68);
  *param_1 = puVar4;
  return;
}



/* Entry: 1002629e0; end: 1002629ef; -[_TtC18SCBlizzardServices22SCUserBlizzardServices userTrackedLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002629e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083868));
  return;
}



/* Entry: 1002629f0; end: 100262a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002629f0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11275abc0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100262a50; end: 100262b37; -[SCTermsOfUseLoggerImpl initWithUserSessionContext:userTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_100262a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f5b38;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d14f8;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100262b38; end: 100262bab; -[SCGrapheneServerDrivenTermsOfUseMetric2 init] */

undefined1 * FUN_100262b38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5b60;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100262bac; end: 100262bcb;  */

void FUN_100262bac(void)

{
  func_0x000107c61168(&PTR_PTR_1128e78a8);
  return;
}



/* Entry: 100262bcc; end: 100262c33; -[ServerDrivenTOSCOFConfigProvider initWithCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100262bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112f8e558) = 1;
  *(undefined8 *)(param_1 + _DAT_112f8e560) = param_3;
  lVar2 = param_1;
  FUN_100262bac();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100262c34; end: 100262c47;  */

void FUN_100262c34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e78e38,0,0);
  return;
}



/* Entry: 100262c48; end: 100262c4f; -[SCFeatureSettingsServices featureSettingsService] */

undefined8 FUN_100262c48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100262c50; end: 100262c57; -[SCUserInfoServices latestAcceptedTOSVersionProvider] */

undefined8 FUN_100262c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 100262c58; end: 100262e37; -[SCServerDrivenTermsOfUseService initWithRepository:featureSettingsService:grpcService:grapheneRegistry:logger:tosConfigProvider:latestAcceptedTOSVersionProvider:deferAcceptedVersionSync:complianceCheckCountPerformer:] */

undefined8 *
FUN_100262c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126f5b48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 9) = param_10;
    func_0x000107c61174(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    uVar2 = puVar1[10];
    puVar1[10] = 0;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = 0;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100262e38; end: 100262e3b; -[SCServerDrivenTermsOfUseService updateTermsOfUseWithUserSessionContext:] */

void FUN_100262e38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedfaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateServerDrivenTermsOfUseWit_112595860);
  return;
}



/* Entry: 100262e3c; end: 100262f37; -[SCServerDrivenTermsOfUseService _updateServerDrivenTermsOfUseWithUserSessionContext:] */

void FUN_100262e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x100262ed8;
  puStack_20 = &UNK_110841f20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_106c00fbc;
  puStack_48 = &UNK_110885010;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_106c0110c;
  puStack_70 = &UNK_110885040;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x000107c4c6fc(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 100262f38; end: 100262f3f;  */

void FUN_100262f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100262f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 100262f40; end: 100262fa7;  */

void FUN_100262f40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4e4f4();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed24b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateAcceptedTermsOfUseVersion_1125922d0,
               uVar2);
    return;
  }
  return;
}



/* Entry: 100262fa8; end: 100262fe7;  */

void FUN_100262fa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3ca5c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100262fe8; end: 10026329f;  */

void FUN_100262fe8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  uVar1 = uStack_68;
  FUN_100083b20(&uStack_68);
  uVar2 = uStack_68;
  FUN_100083b20(&uStack_68);
  uVar3 = uStack_68;
  FUN_100083b20(&uStack_68);
  uVar4 = uStack_68;
  FUN_100083b20(&uStack_68);
  uVar5 = uStack_68;
  FUN_100083b20(&uStack_68);
  uVar6 = uStack_68;
  puVar7 = PTR_PTR_1126d0308;
  func_0x000107c610f8(PTR_PTR_1126d0308);
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126d0378;
  func_0x000107c61168();
  func_0x000107c61174(puVar7);
  puVar9 = puVar7;
  func_0x0001000ad7c4();
  func_0x000107c615f0(uVar3);
  uVar10 = uVar4;
  func_0x000107c615f0();
  func_0x0001000ad7c4();
  uVar11 = uVar10;
  func_0x0001000ad7c4();
  uVar12 = uVar11;
  func_0x0001000ad7c4();
  uVar13 = uVar12;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_68);
  func_0x000107c42ac8(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c615e8(uStack_68);
  puVar9 = PTR_PTR_1126d0338;
  func_0x000107c610f8(PTR_PTR_1126d0338);
  func_0x000107c474f8();
  func_0x000107c61168(PTR_PTR_1126d0320);
  func_0x000107c59824();
  func_0x000107c54f3c(uVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c560d4(uVar1);
  func_0x000107c560d4(uVar2);
  puVar14 = PTR_PTR_1126a6fc8;
  func_0x000107c610f8();
  func_0x000107c474f8();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar6);
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(puVar8);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar9);
  *param_1 = puVar14;
  return;
}



/* Entry: 1002632a0; end: 10026330f;  */

void FUN_1002632a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126a6fe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a6ff0;
  func_0x000107c610f8(PTR_PTR_1126a6ff0);
  func_0x000107c48924();
  func_0x000107c61168(PTR_PTR_1126d0640);
  func_0x000107c497cc();
  func_0x000107c61170(puVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 100263310; end: 10026339f; -[SCNoDepSpectrumImpl init] */

undefined1 * FUN_100263310(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4af0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 10000;
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1002633a0; end: 100263413; -[SCSpectrumNativeLogger initWithSpectrumLogger:] */

undefined1 * FUN_1002633a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4b00;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100263414; end: 1002634d7; +[SCNSpectrumNativeSpectrumEventLoggerInstaller installSpectrumLogger:] */

void FUN_100263414(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_1002634d8(&uStack_40,param_3);
  }
  FUN_1002636bc();
  func_0x0001002636c4(&uStack_40);
  func_0x00010026370c(&uStack_40);
  FUN_1002636bc();
  return;
}



/* Entry: 1002634d8; end: 10026358f;  */

void FUN_1002634d8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110960428;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_100263590);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_100263690(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100263590; end: 10026368f;  */

void FUN_100263590(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110960468;
  puVar4[3] = &PTR_DAT_1109604e0;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_1109604b8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_100263690(&uStack_50);
  return;
}



/* Entry: 100263690; end: 1002636bb;  */

long FUN_100263690(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1002636bc; end: 1002636d3;  */

void FUN_1002636bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1002636d4; end: 10026378f;  */

void FUN_1002636d4(long param_1,undefined8 param_2)

{
  func_0x000107c60d88(param_1 + 0x10);
  func_0x000100263734(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x10);
  return;
}



/* Entry: 100263790; end: 100263797;  */

void FUN_100263790(void)

{
  return;
}



/* Entry: 100263798; end: 10026394b; -[SCTermsOfUseServiceProvider _termsOfUseRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100263798(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d1538;
  func_0x000107c610f4(PTR_PTR_1126d1538);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11275abd0;
    func_0x000107c61148(lVar5);
  }
  lVar2 = lVar5;
  func_0x000107c4ec80(lVar5);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c5ba34(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c61180();
  FUN_1002629f0(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c47fec(puVar1,param_2,lVar2,puVar3,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10026394c; end: 1002639b3; -[SCUserSessionWorkflow _showTermsOfUseOrAdvanceWorkflow] */

void FUN_10026394c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5acac();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf18c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_beginTermsOfUseWorkflowWithDeleg_1125a3ca8,
               param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf17ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_beginActiveUserSessionWorkflow_1125a3850);
  return;
}



/* Entry: 1002639b4; end: 100263b73; -[SCServerDrivenTermsOfUseService shouldPromptTermsOfUseOnSurface:] */

undefined8 FUN_1002639b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar1 = param_1;
  func_0x000107c3bbec();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3bf20(param_1,param_2,lVar1,param_3);
  if ((int)lVar2 == 0) {
    uVar8 = 0;
    goto LAB_100263b54;
  }
  lVar2 = param_1;
  func_0x000107c3bfc4(param_1,param_2,lVar1);
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar10 = lVar2;
    func_0x000107c5cc90(lVar2);
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c3af90(param_1,param_2,lVar10);
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    lVar10 = param_1;
    func_0x000107c3bbbc(param_1,param_2,lVar3);
    lVar4 = lVar2;
    func_0x000107c3ff34();
    lVar6 = lVar2;
    lVar7 = lVar2;
    if ((int)lVar4 == 2) {
      lVar4 = lVar2;
      func_0x000107c5dd14(lVar2);
      lVar5 = param_1;
      func_0x000107c3b940(param_1,param_2,lVar4);
      if ((int)lVar5 == 0) goto LAB_100263ab4;
      func_0x000107c3ff34(lVar2);
      func_0x000107c5dd14(lVar2);
      uVar8 = 0;
      uVar9 = 1;
LAB_100263b3c:
      func_0x000107c3cbb8(param_1,param_2,lVar6,uVar8,uVar9,lVar10,lVar7);
      uVar8 = 0;
    }
    else {
LAB_100263ab4:
      if ((int)lVar10 == 0) {
        func_0x000107c3ff34(lVar2);
        func_0x000107c5dd14(lVar2);
        uVar8 = 2;
        uVar9 = 0;
        lVar10 = 0;
        goto LAB_100263b3c;
      }
      func_0x000107c52f1c(param_1,param_2,lVar3);
      func_0x000107c53cac(param_1,param_2,lVar2);
      lVar10 = lVar2;
      func_0x000107c3ff34(lVar2);
      lVar4 = lVar2;
      func_0x000107c5dd14(lVar2);
      uVar8 = 1;
      func_0x000107c3cbb8(param_1,param_2,lVar10,1,0,1,lVar4);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar2);
LAB_100263b54:
  func_0x000107c61170(lVar1);
  return uVar8;
}



/* Entry: 100263b74; end: 100263ccf; -[SCServerDrivenTermsOfUseService _latestActiveTOSVersionData] */

undefined1 * FUN_100263b74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  long lVar11;
  long lVar12;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d1540;
  func_0x000107c4cd90();
  func_0x000107c61180();
  func_0x000107c5a4e0();
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x000107c5cc94();
  func_0x000107c61180();
  puVar9 = auStack_d8;
  uVar10 = 0x10;
  lVar3 = lVar2;
  func_0x000107c4080c();
  if (lVar3 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          func_0x000107c61128(lVar2);
        }
        unaff_x22 = *(undefined **)(lStack_118 + lVar12 * 8);
        puVar4 = unaff_x22;
        func_0x000107c3d0ec();
        if ((int)puVar4 != 0) {
          puVar4 = unaff_x22;
          func_0x000107c5dd14();
          puVar5 = puVar1;
          func_0x000107c5dd14();
          if ((int)puVar5 < (int)puVar4) {
            func_0x000107c61174(unaff_x22);
            func_0x000107c61170(puVar1);
            puVar1 = unaff_x22;
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      puVar9 = auStack_d8;
      uVar10 = 0x10;
      lVar3 = lVar2;
      puVar8 = &uStack_120;
      func_0x000107c4080c();
      unaff_x21 = 0;
    } while (lVar3 != 0);
  }
  lVar3 = lVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  plVar6 = &lStack_160;
  pcStack_128 = FUN_100263cd0;
  puStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar2;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(uVar10);
  puStack_158 = PTR_PTR_1126f5b50;
  lStack_160 = lVar3;
  func_0x000107c61154(&lStack_160,PTR_s_init_1125d9248);
  if (plVar6 != (long *)0x0) {
    func_0x000107c61174(puVar8);
    uVar7 = *(undefined8 *)((long)plVar6 + 8);
    *(undefined8 **)((long)plVar6 + 8) = puVar8;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(puVar9);
    uVar7 = *(undefined8 *)((long)plVar6 + 0x10);
    *(undefined1 **)((long)plVar6 + 0x10) = puVar9;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(uVar10);
    uVar7 = *(undefined8 *)((long)plVar6 + 0x18);
    *(undefined8 *)((long)plVar6 + 0x18) = uVar10;
    func_0x000107c61170(uVar7);
  }
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  return (undefined1 *)plVar6;
}



/* Entry: 100263cd0; end: 100263d9b; -[SCTermsOfUsePreferencesDefaultsRepository initWithPreferences:userDefaults:grapheneRegistry:] */

undefined1 *
FUN_100263cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f5b50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100263d9c; end: 100263e17; +[SCActivationPbTosMetadata descriptor] */

undefined * FUN_100263d9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baffd0,
                        &PTR____CFConstantStringClassReference_110eea1f8,
                        &PTR_s_snapchat_activation_cof_11328bfd8,&PTR_s_version_11328c010,6,0x20,
                        0x1c);
    func_0x000107c5a894();
    puRam000000011372db30 = puVar1;
  }
  return puRam000000011372db30;
}



/* Entry: 100263e18; end: 100263e57; -[SCTermsOfUsePreferencesDefaultsRepository pendingUpdatingServerDrivenTermsOfUseVersion] */

undefined8 FUN_100263e18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4e4f4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100263e58; end: 100263ecb; -[SCBlizzardGeoSignalGrapheneMetrics initWithGraphene:] */

undefined1 * FUN_100263e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4ba8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100263ecc; end: 100263ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100263ecc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long alStack_d0 [4];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  puStack_90 = param_1;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = ((long)puVar12 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_01;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) == 0) {
    func_0x000107c6142c(puVar2);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100264310);
    (*pcVar10)();
  }
  uVar15 = 0xef7365636e657265;
  lVar16 = 0x6665725072657375;
  puVar3 = puVar2 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  lStack_a8 = lVar11;
  (**(code **)(lVar11 + 0x10))(lVar14,puVar3,lVar1);
  func_0x000107c6142c(puVar2);
  lStack_78 = 0;
  puStack_70 = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x19);
  puVar2 = puStack_70;
  FUN_100083b20(&lStack_80);
  lVar4 = *(long *)(lStack_80 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  lVar11 = lVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar11;
  func_0x000107c5faec();
  func_0x000107c6142c(puVar2);
  func_0x000107c61170(lVar11);
  lStack_78 = lVar4;
  puStack_70 = puVar3;
  func_0x000107c5fb78(0xd000000000000017,0x800000010efb07a0);
  puVar2 = puStack_70;
  func_0x000107c5ed9c(lVar13,lStack_78,puStack_70);
  func_0x000107c6142c(puVar2);
  FUN_100083b20(&lStack_78);
  lVar11 = lStack_78;
  lVar4 = lVar16;
  uVar7 = uVar15;
  func_0x000107c5fadc(0x6665725072657375,0xef7365636e657265);
  lStack_80 = 0;
  lVar5 = lVar11;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar11);
  func_0x000107c61170(lVar4);
  lVar11 = lStack_80;
  if (lVar5 == 0) {
    lVar4 = lStack_80;
    func_0x000107c61174(lStack_80);
    func_0x000107c5ed30(lVar11);
    func_0x000107c61170(lVar4);
    func_0x000107c61654();
    func_0x000107c614ac(lVar11);
  }
  else {
    lVar16 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61174(lVar11);
    func_0x000107c61170(lVar5);
    uVar15 = uVar7;
  }
  lVar11 = lStack_98;
  func_0x000107c5ed80(lStack_98,lVar16,uVar15);
  func_0x000107c6142c(uVar15);
  uVar6 = 0x636f642e66657270;
  uVar8 = 0xef737463656a626f;
  func_0x000107c5ed9c(puVar12,0x636f642e66657270,0xef737463656a626f);
  func_0x000107c5edc4();
  uVar7 = uVar6;
  uVar15 = uVar8;
  func_0x000107c5edc4();
  uVar9 = uVar8;
  FUN_1002b81b8(uVar6,uVar8,uVar7,uVar15);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar15);
  puVar2 = PTR_PTR_1126e0368;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000107c4ec84();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  pcVar10 = *(code **)(lStack_a8 + 8);
  (*pcVar10)(puVar12,lVar1);
  (*pcVar10)(lVar11,lVar1);
  (*pcVar10)(lVar13,lVar1);
  lVar11 = lVar14;
  (*pcVar10)(lVar14,lVar1);
  *puStack_90 = puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar11;
  }
  func_0x000107c60e78();
  *(code **)(lVar14 + -0x20) = pcVar10;
  *(undefined **)(lVar14 + -0x18) = puVar2;
  *(undefined1 **)(lVar14 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar14 + -8) = FUN_100264314;
  puVar2 = PTR_PTR_1126d03e8;
  func_0x000107c61160(PTR_PTR_1126d03e8);
  func_0x000107c48a1c(lVar11);
  func_0x000107c61170(puVar2);
  return lVar11;
}



/* Entry: 100263ed4; end: 100264313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100263ed4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long alStack_d0 [4];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  uStack_a0 = param_3;
  puStack_90 = param_1;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = ((long)puVar12 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_01;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) == 0) {
    func_0x000107c6142c(puVar2);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100264310);
    (*pcVar10)();
  }
  uVar15 = 0xef7365636e657265;
  lVar16 = 0x6665725072657375;
  puVar3 = puVar2 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  lStack_a8 = lVar11;
  (**(code **)(lVar11 + 0x10))(lVar14,puVar3,lVar1);
  func_0x000107c6142c(puVar2);
  lStack_78 = 0;
  puStack_70 = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x19);
  puVar2 = puStack_70;
  FUN_100083b20(&lStack_80);
  lVar4 = *(long *)(lStack_80 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  lVar11 = lVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar11;
  func_0x000107c5faec();
  func_0x000107c6142c(puVar2);
  func_0x000107c61170(lVar11);
  lStack_78 = lVar4;
  puStack_70 = puVar3;
  func_0x000107c5fb78(0xd000000000000017,0x800000010efb07a0);
  puVar2 = puStack_70;
  func_0x000107c5ed9c(lVar13,lStack_78,puStack_70);
  func_0x000107c6142c(puVar2);
  FUN_100083b20(&lStack_78);
  lVar11 = lStack_78;
  lVar4 = lVar16;
  uVar7 = uVar15;
  func_0x000107c5fadc(0x6665725072657375,0xef7365636e657265);
  lStack_80 = 0;
  lVar5 = lVar11;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar11);
  func_0x000107c61170(lVar4);
  lVar11 = lStack_80;
  if (lVar5 == 0) {
    lVar4 = lStack_80;
    func_0x000107c61174(lStack_80);
    func_0x000107c5ed30(lVar11);
    func_0x000107c61170(lVar4);
    func_0x000107c61654();
    func_0x000107c614ac(lVar11);
  }
  else {
    lVar16 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61174(lVar11);
    func_0x000107c61170(lVar5);
    uVar15 = uVar7;
  }
  lVar11 = lStack_98;
  func_0x000107c5ed80(lStack_98,lVar16,uVar15);
  func_0x000107c6142c(uVar15);
  uVar6 = 0x636f642e66657270;
  uVar8 = 0xef737463656a626f;
  func_0x000107c5ed9c(puVar12,0x636f642e66657270,0xef737463656a626f);
  func_0x000107c5edc4();
  uVar7 = uVar6;
  uVar15 = uVar8;
  func_0x000107c5edc4();
  uVar9 = uVar8;
  FUN_1002b81b8(uVar6,uVar8,uVar7,uVar15);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar15);
  puVar2 = PTR_PTR_1126e0368;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000107c4ec84();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  pcVar10 = *(code **)(lStack_a8 + 8);
  (*pcVar10)(puVar12,lVar1);
  (*pcVar10)(lVar11,lVar1);
  (*pcVar10)(lVar13,lVar1);
  lVar11 = lVar14;
  (*pcVar10)(lVar14,lVar1);
  *puStack_90 = puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar11;
  }
  func_0x000107c60e78();
  *(code **)(lVar14 + -0x20) = pcVar10;
  *(undefined **)(lVar14 + -0x18) = puVar2;
  *(undefined1 **)(lVar14 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar14 + -8) = FUN_100264314;
  puVar2 = PTR_PTR_1126d03e8;
  func_0x000107c61160(PTR_PTR_1126d03e8);
  func_0x000107c48a1c(lVar11);
  func_0x000107c61170(puVar2);
  return lVar11;
}



/* Entry: 100264314; end: 10026435b; -[SCBlizzardGeoSignalPrefs init] */

undefined8 FUN_100264314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d03e8;
  func_0x000107c61160(PTR_PTR_1126d03e8);
  func_0x000107c48a1c(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10026435c; end: 1002643cf; -[SCBlizzardGeoSignalPrefs initWithStore:] */

undefined1 * FUN_10026435c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4bb8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002643d0; end: 100264503; -[SCBlizzardGeoSignalManager initWithPrefs:metrics:timeProvider:] */

undefined1 *
FUN_1002643d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f4bb0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    uVar2 = param_3;
    func_0x000107c4f998();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c4f9a8();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c4ba4c(*(undefined8 *)((long)puVar1 + 0x10));
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100264504; end: 100264563; -[SCBlizzardGeoSignalPrefs readGps] */

void FUN_100264504(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d03c8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4198c(uVar1,param_2,&PTR____CFConstantStringClassReference_110e6dd18);
  func_0x000107c61180();
  func_0x000107c5afd8(puVar2,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100264564; end: 1002645d3; -[SCBlizzardGeoSignalUserDefaultsStore dictionaryForKey:] */

void FUN_100264564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61174(param_3);
  func_0x000107c5ba34(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4198c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1002645d4; end: 100264713; +[SCBlizzardCachedGeoSignal signalFromDictionary:] */

void FUN_1002645d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar1;
  func_0x000107c6115c(uVar1,puVar5);
  if ((uVar4 & 1) != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    func_0x000107c6115c(uVar2,puVar5);
    if ((uVar4 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar4 = uVar3;
      func_0x000107c6115c(uVar3,puVar5);
      if ((uVar4 & 1) != 0) {
        puVar5 = PTR_PTR_1126d03c8;
        func_0x000107c610f4(PTR_PTR_1126d03c8);
        func_0x000107c49820(uVar2);
        func_0x000107c4c0a8(uVar3);
        func_0x000107c4843c(puVar5);
        goto LAB_1002646e4;
      }
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1002646e4:
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100264714; end: 100264773; -[SCBlizzardGeoSignalPrefs readMcc] */

void FUN_100264714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d03d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4198c(uVar1,param_2,&PTR____CFConstantStringClassReference_110e6dd38);
  func_0x000107c61180();
  func_0x000107c5afd8(puVar2,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


