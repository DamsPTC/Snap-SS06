/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c9b8ac; end: 101c9b8ff;  */

void FUN_101c9b8ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9b900; end: 101c9b94f;  */

undefined8 FUN_101c9b900(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9b950; end: 101c9bc37;  */

void FUN_101c9b950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a8e30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f008890);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9bc38);
  (*pcVar1)();
}



/* Entry: 101c9bc38; end: 101c9bc83;  */

void FUN_101c9bc38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9bc84; end: 101c9bcab;  */

void FUN_101c9bc84(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9bcac; end: 101c9bcb3;  */

undefined8 FUN_101c9bcac(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9bcb4; end: 101c9bd87;  */

undefined8 FUN_101c9bcb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x00010074fc44(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101c9bd88; end: 101c9bdbf;  */

void FUN_101c9bd88(long param_1)

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



/* Entry: 101c9bdc0; end: 101c9bdc7;  */

void FUN_101c9bdc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c9bdc8; end: 101c9bdeb;  */

void FUN_101c9bdc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c9bdec; end: 101c9bdf7;  */

void FUN_101c9bdec(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101c9bdf8; end: 101c9be1f;  */

void FUN_101c9bdf8(void)

{
  long unaff_x20;
  
  func_0x000101c9bd20(*(undefined8 *)(unaff_x20 + 0x10),FUN_101c9c174,&DAT_112e11fd0);
  return;
}



/* Entry: 101c9be20; end: 101c9be27;  */

void FUN_101c9be20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c9be28; end: 101c9be4f;  */

void FUN_101c9be28(void)

{
  long unaff_x20;
  
  func_0x000101c9bd20(*(undefined8 *)(unaff_x20 + 0x10),FUN_101c9bfd8,&DAT_112e11fa0);
  return;
}



/* Entry: 101c9be50; end: 101c9be5b;  */

void FUN_101c9be50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c9be5c; end: 101c9bee7; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider35BitmojiCreateAvatarBuilderPresenter presentWithBitmojiCreateFlowScope:] */

/* WARNING: Possible PIC construction at 0x000101c9beac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9beb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9be5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_112e11fa0;
  lVar3 = *(long *)(param_1 + _DAT_112e11fa0);
  func_0x000107c61174(param_3);
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar1),param_2,param_3);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101c9bee8; end: 101c9bf6b; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider35BitmojiCreateAvatarBuilderPresenter dismissIfNeeded] */

/* WARNING: Possible PIC construction at 0x000101c9bf24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9bf40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9bf28) */
/* WARNING: Removing unreachable block (ram,0x000101c9bf44) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9bee8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101c9bf6c; end: 101c9bfc7; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider35BitmojiCreateAvatarBuilderPresenter init] */

void FUN_101c9bf6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiAvatarBuilderPresentingServiceProvider.BitmojiCreateAvatarBuilderPresenter"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9bf98);
  (*pcVar1)();
}



/* Entry: 101c9bfc8; end: 101c9bfd7; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider35BitmojiCreateAvatarBuilderPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9bfc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e11fa0));
  return;
}



/* Entry: 101c9bfd8; end: 101c9bff7;  */

void FUN_101c9bfd8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff930);
  return;
}



/* Entry: 101c9bff8; end: 101c9c083; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider33BitmojiEditAvatarBuilderPresenter presentWithBitmojiEditAvatarBuilderScope:] */

/* WARNING: Possible PIC construction at 0x000101c9c048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9c04c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9bff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_112e11fd0;
  lVar3 = *(long *)(param_1 + _DAT_112e11fd0);
  func_0x000107c61174(param_3);
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar1),param_2,param_3);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101c9c084; end: 101c9c107; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider33BitmojiEditAvatarBuilderPresenter dismissIfNeeded] */

/* WARNING: Possible PIC construction at 0x000101c9c0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9c0dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9c0c4) */
/* WARNING: Removing unreachable block (ram,0x000101c9c0e0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9c084(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101c9c108; end: 101c9c163; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider33BitmojiEditAvatarBuilderPresenter init] */

void FUN_101c9c108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiAvatarBuilderPresentingServiceProvider.BitmojiEditAvatarBuilderPresenter"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9c134);
  (*pcVar1)();
}



/* Entry: 101c9c164; end: 101c9c173; -[_TtC47SCBitmojiAvatarBuilderPresentingServiceProvider33BitmojiEditAvatarBuilderPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9c164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e11fd0));
  return;
}



/* Entry: 101c9c174; end: 101c9c193;  */

void FUN_101c9c174(void)

{
  func_0x000107c61168(&PTR_PTR_1127ffa00);
  return;
}



/* Entry: 101c9c194; end: 101c9c3af;  */

void FUN_101c9c194(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001002802cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_101c9dbc0(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x000101c9d874();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_101c9d904();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 101c9c3b0; end: 101c9c3c3;  */

void FUN_101c9c3b0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001002802cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_101c9dbc0(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x000101c9d874();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_101c9d904();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 101c9c3c4; end: 101c9c56f;  */

long FUN_101c9c3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  FUN_101c9dbc0();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101c9d874();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101c9d904();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return unaff_x20;
}



/* Entry: 101c9c570; end: 101c9c5e3;  */

void FUN_101c9c570(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101c9c5e4; end: 101c9c637;  */

void FUN_101c9c5e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9c638; end: 101c9c683;  */

void FUN_101c9c638(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9c684; end: 101c9c6d7;  */

void FUN_101c9c684(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9c6d8; end: 101c9c7fb;  */

long FUN_101c9c6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000100984db4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100984e34();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100984e70();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 101c9c7fc; end: 101c9c83f;  */

void FUN_101c9c7fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c9c840; end: 101c9c883;  */

undefined1  [16] FUN_101c9c840(void)

{
  return ZEXT816(0x110465220);
}



/* Entry: 101c9c884; end: 101c9c8d7;  */

void FUN_101c9c884(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9c8d8; end: 101c9c98f;  */

long FUN_101c9c8d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010078d27c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010078d308();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010078d318();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101c9c990; end: 101c9c9c3;  */

void FUN_101c9c990(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c9c9c4; end: 101c9ca07;  */

undefined1  [16] FUN_101c9c9c4(void)

{
  return ZEXT816(0x1104652e8);
}



/* Entry: 101c9ca08; end: 101c9ca5b;  */

void FUN_101c9ca08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9ca5c; end: 101c9cb13;  */

long FUN_101c9ca5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010078265c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100782974();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010078299c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101c9cb14; end: 101c9cb47;  */

void FUN_101c9cb14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c9cb48; end: 101c9cb8b;  */

undefined1  [16] FUN_101c9cb48(void)

{
  return ZEXT816(0x1104653b0);
}



/* Entry: 101c9cb8c; end: 101c9cbdf;  */

void FUN_101c9cb8c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9cbe0; end: 101c9cec7;  */

long FUN_101c9cbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a8e40;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101c9cec8; end: 101c9cf13;  */

void FUN_101c9cec8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c9cf14; end: 101c9cf63;  */

undefined8 FUN_101c9cf14(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9cf64; end: 101c9cfa7;  */

undefined1  [16] FUN_101c9cf64(void)

{
  return ZEXT816(0x110465478);
}



/* Entry: 101c9cfa8; end: 101c9cfcf;  */

void FUN_101c9cfa8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9cfd0; end: 101c9cfd7;  */

undefined8 FUN_101c9cfd0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9cfd8; end: 101c9d3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c9cfd8(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112e124f0) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x0001048d9980(0xd000000000000038,0x800000010f008a20);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c9d3c4);
    (*pcVar2)();
  }
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e124d8);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e124e0);
  func_0x000107c42e5c();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104655b0;
  func_0x000107c613fc(&UNK_1104655b0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar14;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101c9d778;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x101c9d7c0;
  puStack_88 = &UNK_1104655c8;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_78;
  func_0x000107c615f0(uVar14);
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e124e8);
  func_0x000107c3da9c();
  func_0x000107c61180();
  uVar14 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f008a60);
  lVar9 = lVar3;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  lVar10 = *(long *)(*(long *)(unaff_x20 + _DAT_112e124f8) + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar11 = *(long *)(*(long *)(unaff_x20 + _DAT_112e12500) + _DAT_113083800);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      puVar12 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar6 = &UNK_110465600;
      func_0x000107c613fc(&UNK_110465600,0x20,7);
      *(long *)(puVar6 + 0x10) = lVar10;
      *(long *)(puVar6 + 0x18) = lVar11;
      pcStack_80 = (code *)0x101c9d79c;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      uStack_90 = 0x101c9d7c4;
      puStack_88 = &UNK_110465618;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_78;
      func_0x000107c615f0(lVar10);
      func_0x000107c615f0(lVar11);
      func_0x000107c61574(puVar6);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      puVar13 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar6 = &UNK_110465650;
      func_0x000107c613fc(&UNK_110465650,0x30,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar8;
      *(long *)(puVar6 + 0x18) = lVar9;
      *(undefined **)(puVar6 + 0x20) = puVar5;
      *(undefined **)(puVar6 + 0x28) = puVar12;
      pcStack_80 = (code *)0x101c9d7a4;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      uStack_90 = 0x101c9d7c8;
      puStack_88 = &UNK_110465668;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_78;
      func_0x000107c61174(uVar8);
      func_0x000107c615f0(lVar9);
      func_0x000107c61174(puVar5);
      func_0x000107c61174(puVar12);
      func_0x000107c61574(puVar6);
      func_0x000107c3e4fc(puVar13);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      uVar14 = 0;
      func_0x0001039a9e54(0);
      func_0x000107c610f8();
      func_0x0001039a9ca8(puVar5,puVar13,puVar12,uVar14);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(lVar11);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(uVar4);
      return puVar5;
    }
    func_0x0001048d9980(0xd000000000000038,0x800000010f008ad0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c9d400);
    (*pcVar2)();
  }
  func_0x0001048d9980(0xd000000000000036,0x800000010f008a90);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c9d3e0);
  (*pcVar2)();
}



/* Entry: 101c9d400; end: 101c9d4fb;  */

long FUN_101c9d400(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000101ca0f8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0xd000000000000024;
  *(undefined8 *)(lVar1 + 0x18) = 0x800000010f008b10;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  return lVar1;
}



/* Entry: 101c9d4fc; end: 101c9d5bb;  */

long FUN_101c9d4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000101ca14ec(0);
  func_0x000107c613fc();
  uVar1 = param_4;
  FUN_101ca134c();
  lVar2 = 0;
  func_0x000101c9fcbc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x60) = 0;
  func_0x000107c61614(lVar2 + 0x68,0);
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  return lVar2;
}



/* Entry: 101c9d5bc; end: 101c9d5f3;  */

void FUN_101c9d5bc(long param_1)

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



/* Entry: 101c9d5f4; end: 101c9d627; -[_TtC31SCAIReplyGeneratingServicesImpl28AIReplyGeneratingFactoryImpl aiReplyGeneratingServices] */

void FUN_101c9d5f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c9cfd8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c9d628; end: 101c9d687; -[_TtC31SCAIReplyGeneratingServicesImpl28AIReplyGeneratingFactoryImpl init] */

void FUN_101c9d628(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAIReplyGeneratingServicesImpl.AIReplyGeneratingFactoryImpl",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9d654);
  (*pcVar1)();
}



/* Entry: 101c9d688; end: 101c9d6ff; -[_TtC31SCAIReplyGeneratingServicesImpl28AIReplyGeneratingFactoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c9d6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9d6d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9d6b8) */
/* WARNING: Removing unreachable block (ram,0x000101c9d6d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9d688(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e124d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e124e0));
  return;
}



/* Entry: 101c9d700; end: 101c9d71f;  */

void FUN_101c9d700(void)

{
  func_0x000107c61168(&PTR_PTR_1127ffad0);
  return;
}



/* Entry: 101c9d720; end: 101c9d733;  */

void FUN_101c9d720(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110465590;
  if (lRam0000000112e12530 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e12530 = param_1;
  }
  return;
}



/* Entry: 101c9d734; end: 101c9d777;  */

void FUN_101c9d734(long param_1,long *param_2,long param_3)

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



/* Entry: 101c9d778; end: 101c9d7cb;  */

long FUN_101c9d778(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000101ca0f8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0xd000000000000024;
  *(undefined8 *)(lVar3 + 0x18) = 0x800000010f008b10;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  *(undefined8 *)(lVar3 + 0x30) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar2);
  return lVar3;
}



/* Entry: 101c9d7cc; end: 101c9d903;  */

long FUN_101c9d7cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x18) = param_3;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
    *(undefined8 *)(unaff_x20 + 0x28) = param_5;
    *(undefined8 *)(unaff_x20 + 0x30) = param_6;
    *(undefined8 *)(unaff_x20 + 0x38) = param_7;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9d874);
  (*pcVar1)();
}



/* Entry: 101c9d904; end: 101c9dabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c9d904(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar11 = &puStack_90;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar6 = 0;
  FUN_101c9d700();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112e124d8) = uVar12;
  *(undefined8 *)(lVar7 + _DAT_112e124e0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e124e8) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112e124f0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112e124f8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e12500) = uVar5;
  puVar10 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c615f0(uVar12);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar5);
  plVar8 = &lStack_60;
  func_0x000107c61154(plVar8,puVar10);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar10 = &UNK_1104656a0;
  func_0x000107c613fc(&UNK_1104656a0,0x18,7);
  *(long **)(puVar10 + 0x10) = plVar8;
  pcStack_70 = FUN_101c9dabc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101c9dac4;
  puStack_78 = &UNK_1104656b8;
  puStack_68 = puVar10;
  func_0x000107c60bc4(&puStack_90);
  puVar10 = puStack_68;
  func_0x000107c61174(plVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  uVar12 = 0;
  func_0x000100293d00(0);
  func_0x000107c610f8();
  func_0x0001039a9af0(puVar9,uVar12);
  func_0x000107c61170(plVar8);
  return puVar9;
}



/* Entry: 101c9dabc; end: 101c9dac3;  */

void FUN_101c9dabc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c9dac4; end: 101c9dafb;  */

void FUN_101c9dac4(long param_1)

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



/* Entry: 101c9dafc; end: 101c9db17;  */

void FUN_101c9dafc(long param_1,long param_2)

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



/* Entry: 101c9db18; end: 101c9db53;  */

/* WARNING: Possible PIC construction at 0x000101c9db2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9db3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9db30) */
/* WARNING: Removing unreachable block (ram,0x000101c9db40) */

void FUN_101c9db18(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101c9db54; end: 101c9dbbf;  */

void FUN_101c9db54(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c9dbc0; end: 101c9dc4b;  */

void FUN_101c9dbc0(undefined8 param_1)

{
  if (lRam0000000112e12560 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e680780);
  return;
}



/* Entry: 101c9dc4c; end: 101c9dc6f;  */

void FUN_101c9dc4c(undefined8 *param_1,undefined8 param_2)

{
  FUN_101c9d904();
  *param_1 = param_2;
  return;
}



/* Entry: 101c9dc70; end: 101c9dc87; -[_TtC31SCAIReplyGeneratingServicesImpl16AIReplyGenerator delegate] */

void FUN_101c9dc70(long param_1)

{
  func_0x000107c61618(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c9dc88; end: 101c9dc93; -[_TtC31SCAIReplyGeneratingServicesImpl16AIReplyGenerator setDelegate:] */

void FUN_101c9dc88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 101c9dc94; end: 101c9e837;  */

/* WARNING: Possible PIC construction at 0x000101c9de3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9ded0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9df54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9df74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9e270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9e208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9dfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9e0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9e100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c9e214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9e104) */
/* WARNING: Removing unreachable block (ram,0x000101c9e0ec) */
/* WARNING: Removing unreachable block (ram,0x000101c9dfe4) */
/* WARNING: Removing unreachable block (ram,0x000101c9e210) */
/* WARNING: Removing unreachable block (ram,0x000101c9dff8) */
/* WARNING: Removing unreachable block (ram,0x000101c9e20c) */
/* WARNING: Removing unreachable block (ram,0x000101c9df58) */
/* WARNING: Removing unreachable block (ram,0x000101c9e2d0) */
/* WARNING: Removing unreachable block (ram,0x000101c9df5c) */
/* WARNING: Removing unreachable block (ram,0x000101c9ded4) */
/* WARNING: Removing unreachable block (ram,0x000101c9e2b8) */
/* WARNING: Removing unreachable block (ram,0x000101c9e2c0) */
/* WARNING: Removing unreachable block (ram,0x000101c9dedc) */
/* WARNING: Removing unreachable block (ram,0x000101c9dee4) */
/* WARNING: Removing unreachable block (ram,0x000101c9e108) */
/* WARNING: Removing unreachable block (ram,0x000101c9e11c) */
/* WARNING: Removing unreachable block (ram,0x000101c9e130) */
/* WARNING: Removing unreachable block (ram,0x000101c9def4) */
/* WARNING: Removing unreachable block (ram,0x000101c9e22c) */
/* WARNING: Removing unreachable block (ram,0x000101c9e274) */
/* WARNING: Removing unreachable block (ram,0x000101c9e238) */
/* WARNING: Removing unreachable block (ram,0x000101c9df00) */
/* WARNING: Removing unreachable block (ram,0x000101c9df78) */
/* WARNING: Removing unreachable block (ram,0x000101c9e298) */
/* WARNING: Removing unreachable block (ram,0x000101c9df28) */
/* WARNING: Removing unreachable block (ram,0x000101c9de40) */
/* WARNING: Removing unreachable block (ram,0x000101c9e218) */
/* WARNING: Removing unreachable block (ram,0x000101c9e21c) */

void FUN_101c9dc94(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar8 = *unaff_x20;
  if (unaff_x20[5] == 0) {
    if (unaff_x20[6] == 0) {
      lVar9 = unaff_x20[9];
      if ((lVar9 == 0) ||
         ((uVar5 = unaff_x20[8], uVar5 != param_1 || lVar9 != param_2 &&
          (func_0x000107c605b8(uVar5,lVar9,param_1,param_2,0), (uVar5 & 1) == 0)))) {
        unaff_x20[8] = param_1;
        unaff_x20[9] = param_2;
        func_0x000107c61434(param_2);
        func_0x000107c6142c(lVar9);
        lVar9 = unaff_x20[10];
        unaff_x20[10] = 0;
      }
      else {
        lVar9 = unaff_x20[4];
        uVar8 = *(undefined8 *)(lVar9 + 0x30);
        *(ulong *)(lVar9 + 0x28) = param_1;
        *(long *)(lVar9 + 0x30) = param_2;
        func_0x000107c6142c(uVar8);
        uVar8 = *(undefined8 *)(lVar9 + 0x20);
        *(undefined8 *)(lVar9 + 0x18) = param_3;
        *(undefined8 *)(lVar9 + 0x20) = param_4;
        func_0x000107c61434(param_2);
        func_0x000107c6142c(uVar8);
        lVar9 = unaff_x20[10];
        if (lVar9 == 0) {
          puVar4 = unaff_x20 + 0xd;
          func_0x000107c61618();
          func_0x000107c61434(param_4);
          if (puVar4 != (undefined8 *)0x0) {
            func_0x000107c3da7c(puVar4);
            func_0x000107c615e8(puVar4);
          }
          lVar7 = unaff_x20[10];
          lVar9 = lVar7;
          func_0x000107c61174(lVar7);
          FUN_101c9f31c(lVar7,param_5,param_6);
        }
        else {
          func_0x000107c61434(param_4);
          func_0x000107c61174(lVar9);
          func_0x000107c3f564();
          func_0x000107c61180();
          uVar8 = 0;
          FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
          func_0x000107c5fc54(lVar9,uVar8);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar9);
      return;
    }
    puVar4 = unaff_x20 + 0xd;
    func_0x000107c61618();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000107c3da7c();
      func_0x000107c615e8(puVar4);
    }
    *(byte *)(unaff_x20 + 0xc) = (*(byte *)(unaff_x20 + 0xc) ^ 0xff) & 1;
  }
  else {
    uVar6 = unaff_x20[7];
    puVar1 = &UNK_110465708;
    func_0x000107c613fc(&UNK_110465708,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar2 = &UNK_1104658c0;
    func_0x000107c613fc(&UNK_1104658c0,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(undefined8 *)(puVar2 + 0x20) = uVar8;
    uStack_70 = 0x101ca0800;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104658d8;
    ppuVar3 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 101c9e838; end: 101c9e8bf;  */

void FUN_101c9e838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101c9e95c(param_2,param_3,param_4,param_5);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101c9e8c0; end: 101c9e95b;  */

/* WARNING: Possible PIC construction at 0x000101c9e934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9e938) */

void FUN_101c9e8c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101c9e95c; end: 101c9eb1b;  */

void FUN_101c9e95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  lVar7 = unaff_x20[10];
  if (lVar7 != 0) {
    uVar8 = *unaff_x20;
    lVar1 = lVar7;
    func_0x000107c61174();
    func_0x000107c61174();
    FUN_101c9f31c(lVar7,param_3,param_4);
    func_0x000107c61170(lVar1);
    lVar2 = unaff_x20[2];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar1);
      lVar6 = 0;
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
      puVar3 = &UNK_110465708;
      func_0x000107c613fc(&UNK_110465708,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_1104657d0;
      func_0x000107c613fc(&UNK_1104657d0,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar1;
      *(undefined8 *)(puVar4 + 0x20) = uVar8;
      pcStack_70 = FUN_101ca0564;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_101c9e8c0;
      puStack_78 = &UNK_1104657e8;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c61174(lVar1);
      func_0x000107c61574(puVar3);
      lVar6 = lVar2;
      func_0x000107c43d8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_1);
    }
    uVar8 = unaff_x20[6];
    unaff_x20[6] = lVar6;
    func_0x000107c615e8(uVar8);
  }
  return;
}



/* Entry: 101c9eb1c; end: 101c9f0df;  */

void FUN_101c9eb1c(long param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_4 + 0x10,puVar7,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)(param_4 + 0x20);
  func_0x000107c6157c(uVar11);
  FUN_101ca1100(param_3);
  func_0x000107c61574(uVar11);
  if (param_2 == 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      uVar2 = param_5;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar11 = 0;
      FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
      uVar9 = uVar2;
      func_0x000107c5fc54(uVar2,uVar11);
      func_0x000107c61170(uVar2);
      lVar8 = param_1;
      func_0x000107c3f564(param_1);
      func_0x000107c61180();
      lVar6 = lVar8;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar8);
      FUN_101c9fdb4(lVar6);
      puVar3 = PTR_PTR_1126bd9a0;
      func_0x000107c610f8();
      uVar2 = uVar9;
      func_0x000107c5fc48(uVar9,uVar11);
      func_0x000107c6142c(uVar9);
      func_0x000107c45ce4();
      func_0x000107c61170(uVar2);
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar2 = param_5;
      func_0x000107c5fc54();
      func_0x000107c61170(param_5);
      if (uVar2 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar9 = uVar2;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar2);
      puVar10 = *(undefined **)(param_4 + 0x50);
      *(undefined **)(param_4 + 0x50) = puVar3;
      *(ulong *)(param_4 + 0x58) = uVar9;
      func_0x000107c61174(puVar3);
      func_0x000107c61170();
      FUN_101c9f0e0();
      if (puVar10 == (undefined *)0x0) {
        if ((*(byte *)(param_4 + 0x60) & 1) != 0) {
          lVar8 = param_4 + 0x68;
          func_0x000107c61618();
          if (lVar8 != 0) {
            lVar6 = lVar8;
            FUN_101ca1c50();
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar11);
            uVar11 = 0xd00000000000002c;
            func_0x000107c5fadc(0xd00000000000002c,0x800000010f008b90);
            func_0x000107c3da74(lVar8);
            func_0x000107c615e8(lVar8);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(uVar11);
          }
          lVar8 = *(long *)(param_4 + 0x20);
          *(undefined8 *)(lVar8 + 0x38) = 2;
          *(undefined1 *)(lVar8 + 0x40) = 0;
          *(undefined8 *)(lVar8 + 0x48) = 0x3f0;
          *(undefined1 *)(lVar8 + 0x50) = 0;
          func_0x000107c6157c(lVar8);
          FUN_101ca1384();
          func_0x000107c61574(lVar8);
        }
        func_0x000107c61170(param_1);
      }
      else {
        if ((*(byte *)(param_4 + 0x60) & 1) != 0) {
          lVar8 = *(long *)(param_4 + 0x20);
          *(undefined8 *)(lVar8 + 0x38) = 0;
          *(undefined1 *)(lVar8 + 0x40) = 0;
          lVar8 = param_4 + 0x68;
          func_0x000107c61618();
          if (lVar8 != 0) {
            puVar4 = puVar10;
            func_0x000107c4ce20();
            func_0x000107c61180();
            puVar5 = puVar4;
            func_0x000107c3f53c();
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f0e0);
              (*pcVar1)();
            }
            func_0x000107c3da78(lVar8);
            func_0x000107c615e8(lVar8);
            func_0x000107c61170(puVar5);
          }
        }
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar3);
        puVar3 = puVar10;
      }
      func_0x000107c61170(puVar3);
      goto LAB_101c9f090;
    }
    if ((*(byte *)(param_4 + 0x60) & 1) == 0) goto LAB_101c9f090;
    lVar8 = param_4 + 0x68;
    func_0x000107c61618();
    if (lVar8 != 0) {
      lVar6 = lVar8;
      FUN_101ca1c50();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
      uVar11 = 0x6572207974706d45;
      func_0x000107c5fadc(0x6572207974706d45,0xec000000746c7573);
      func_0x000107c3da74(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar11);
    }
    lVar8 = *(long *)(param_4 + 0x20);
    *(undefined8 *)(lVar8 + 0x38) = 2;
    *(undefined1 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0x3f0;
    *(undefined1 *)(lVar8 + 0x50) = 0;
    func_0x000107c6157c(lVar8);
    FUN_101ca1384();
LAB_101c9efcc:
    func_0x000107c61574(lVar8);
  }
  else {
    func_0x000107c614b0(param_2);
    lVar8 = param_2;
    func_0x000107c5ed2c();
    lVar6 = lVar8;
    func_0x000107c3fcb0();
    func_0x000107c61170(lVar8);
    if (lVar6 != 0x3ee) {
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(0xe000000000000000);
      lVar8 = param_2;
      func_0x000107c5ed2c(param_2);
      lVar6 = lVar8;
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      lVar8 = lVar6;
      func_0x000107c5faec(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c5fb78(lVar8,puVar7);
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x203a65646f63202c,0xe800000000000000);
      lVar8 = param_2;
      func_0x000107c5ed2c();
      func_0x000107c3fcb0();
      func_0x000107c61170(lVar8);
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      puVar10 = puVar3;
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      if (*(char *)(param_4 + 0x60) == '\x01') {
        uVar11 = 0x203a726f727265;
        lVar8 = param_4 + 0x68;
        func_0x000107c61618();
        if (lVar8 != 0) {
          lVar6 = lVar8;
          FUN_101ca1c50();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar10);
          func_0x000107c5fadc(0x203a726f727265,0xe700000000000000);
          func_0x000107c3da74(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(uVar11);
        }
        lVar8 = *(long *)(param_4 + 0x20);
        func_0x000107c6157c(lVar8);
        func_0x000101ca1174(param_2);
        func_0x000107c6142c(0xe700000000000000);
        func_0x000107c614ac(param_2);
        goto LAB_101c9efcc;
      }
      func_0x000107c6142c(0xe700000000000000);
    }
    func_0x000107c614ac(param_2);
  }
LAB_101c9f090:
  uVar11 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_4 + 0x30) = 0;
  func_0x000107c615e8(uVar11);
  *(undefined1 *)(param_4 + 0x60) = 0;
  func_0x000107c61574(param_4);
  return;
}



/* Entry: 101c9f0e0; end: 101c9f31b;  */

ulong FUN_101c9f0e0(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x50);
  uVar6 = 0;
  if (uVar2 != 0) {
    func_0x000107c61174();
    uVar6 = uVar2;
    func_0x000107c3f564();
    func_0x000107c61180();
    uVar3 = 0;
    FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
    uVar5 = uVar6;
    func_0x000107c5fc54(uVar6,uVar3);
    func_0x000107c61170(uVar6);
    if (uVar5 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar6 = uVar5;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar5);
    if (uVar6 == 0) {
      func_0x000107c61170(uVar2);
      uVar6 = 0;
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x58);
      uVar6 = uVar2;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar5 = uVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar6);
      if (uVar5 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar6 = uVar5;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar5);
      if ((long)uVar6 <= lVar7) {
        *(undefined8 *)(unaff_x20 + 0x58) = 0;
      }
      uVar6 = uVar2;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar5 = uVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar6);
      uVar6 = *(ulong *)(unaff_x20 + 0x58);
      if ((uVar5 & 0xc000000000000001) == 0) {
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f2f0);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f31c);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        FUN_101ca0230(uVar6,uVar5);
      }
      func_0x000107c6142c(uVar5);
      lVar7 = *(long *)(unaff_x20 + 0x58);
      uVar5 = uVar2;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar4 = uVar5;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar5);
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
      func_0x000107c6142c(uVar4);
      func_0x000107c61170(uVar2);
      if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f318);
        (*pcVar1)();
      }
      if (lVar7 < (long)(uVar5 - 1)) {
        lVar7 = *(long *)(unaff_x20 + 0x58) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x58),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f280);
          (*pcVar1)();
        }
      }
      else {
        lVar7 = 0;
      }
      *(long *)(unaff_x20 + 0x58) = lVar7;
    }
  }
  return uVar6;
}



/* Entry: 101c9f31c; end: 101c9f85b;  */

undefined * FUN_101c9f31c(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uStack_88;
  
  uVar6 = param_1;
  uVar5 = param_2;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar9 = uVar5;
  uVar2 = uVar6;
  if (uVar6 == 0) {
    func_0x000107c5faec();
    uVar9 = uVar5;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c5faec();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar10 = 3;
  }
  else {
    lVar10 = lVar3;
    func_0x000107c3e6f0();
    func_0x000107c615e8(lVar3);
  }
  if (param_1 == 0) {
    lVar10 = 1;
  }
  uVar4 = 0;
  FUN_101ca0704(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c60110(lVar10,uVar4);
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
    goto LAB_101c9f638;
  }
  uVar5 = param_1;
  func_0x000107c3f564();
  func_0x000107c61180();
  uStack_88 = 0;
  FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
  uVar14 = uVar5;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar5);
  if (uVar14 >> 0x3e == 0) {
    if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_101c9f4c8;
LAB_101c9f44c:
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f738);
        (*pcVar1)();
      }
      uVar6 = *(ulong *)(uVar14 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar6 = 0;
      uStack_88 = uVar14;
      FUN_101ca0230();
    }
    func_0x000107c6142c(uVar14);
    uVar5 = uVar6;
    func_0x000107c43e28();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    uVar6 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
  }
  else {
    uVar5 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar5 = uVar14;
    }
    func_0x000107c60480();
    if (uVar5 != 0) goto LAB_101c9f44c;
LAB_101c9f4c8:
    func_0x000107c6142c(uVar14);
    func_0x000107c61434(uVar9);
    uStack_88 = uVar9;
  }
  func_0x000107c3f564();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if (uVar5 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar14 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar14 = uVar5;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (uVar14 == 0) {
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar9);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = uStack_88;
  }
  else {
    FUN_101ca03f4(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f734);
      (*pcVar1)();
    }
    uVar12 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar5 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar12;
        FUN_101ca0230(uVar12,uVar5);
      }
      uVar8 = uVar7;
      func_0x000107c4ce20();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      uVar7 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar7) {
        FUN_101ca03f4(1 < *(ulong *)(puVar11 + 0x18),uVar7 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar7 + 1;
      *(ulong *)(puVar11 + uVar7 * 8 + 0x20) = uVar8;
    } while (uVar14 != uVar12);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar9);
    uVar9 = uStack_88;
  }
LAB_101c9f638:
  func_0x000107c5fadc(uVar6,uVar9);
  func_0x000107c6142c(uVar9);
  if (puVar11 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar4 = 0;
    FUN_101ca0704(0,0x112e12800,&PTR_PTR_1126a8e50);
    puVar13 = puVar11;
    func_0x000107c5fc48(puVar11,uVar4);
    func_0x000107c6142c(puVar11);
  }
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
  }
  puVar11 = PTR_PTR_1126a8e48;
  func_0x000107c610f8(PTR_PTR_1126a8e48);
  func_0x000107c45968();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(param_2);
  return puVar11;
}



/* Entry: 101c9f85c; end: 101c9f8fb;  */

void FUN_101c9f85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101c9dc94(param_2,param_3,param_4,param_5,param_6,param_7);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101c9f8fc; end: 101c9f9b3; -[_TtC31SCAIReplyGeneratingServicesImpl16AIReplyGenerator startRepliesGenerationFor:contextSessionId:guidedText:] */

/* WARNING: Possible PIC construction at 0x000101c9f98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c9f990) */

void FUN_101c9f8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec(param_5);
  }
  func_0x000107c6157c(param_1);
  func_0x000101c9f738(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c9f9b4; end: 101c9fa8f;  */

void FUN_101c9f9b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar5 = *unaff_x20;
  uVar4 = unaff_x20[7];
  puVar1 = &UNK_110465708;
  func_0x000107c613fc(&UNK_110465708,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110465730;
  func_0x000107c613fc(&UNK_110465730,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  pcStack_50 = FUN_101c9fcdc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110465748;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101c9fa90; end: 101c9fbcb;  */

void FUN_101c9fa90(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (param_1 < 2) {
      if (param_1 == 0) {
        if (*(long *)(param_2 + 0x28) != 0) {
          func_0x000107c3f474();
        }
        lVar2 = *(long *)(param_2 + 0x30);
      }
      else {
        if (param_1 != 1) {
LAB_101c9fba8:
          lStack_40 = param_1;
          func_0x000107c60614(&UNK_1106b73e0,&lStack_40,&UNK_1106b73e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9fbcc);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_2 + 0x28);
      }
      lVar3 = param_2;
      if (lVar2 != 0) {
        func_0x000107c615f0(lVar2);
        func_0x000107c3f474();
        func_0x000107c615e8(lVar2);
      }
    }
    else {
      if (param_1 == 2) {
        if (*(long *)(param_2 + 0x28) != 0) {
          func_0x000107c3f474();
        }
        if (*(long *)(param_2 + 0x30) != 0) {
          func_0x000107c3f474();
        }
        lVar3 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(lVar3 + 0x60) = 2;
      }
      else {
        if (param_1 != 3) goto LAB_101c9fba8;
        if (*(long *)(param_2 + 0x28) != 0) {
          func_0x000107c3f474();
        }
        if (*(long *)(param_2 + 0x30) != 0) {
          func_0x000107c3f474();
        }
        lVar3 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(lVar3 + 0x60) = 0;
      }
      *(undefined1 *)(lVar3 + 0x68) = 0;
      func_0x000107c6157c(lVar3);
      FUN_101ca1384();
      func_0x000107c61574(param_2);
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 101c9fbcc; end: 101c9fbfb; -[_TtC31SCAIReplyGeneratingServicesImpl16AIReplyGenerator stopGenerationWithWtih:] */

void FUN_101c9fbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101c9f9b4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101c9fbfc; end: 101c9fc3f; -[_TtC31SCAIReplyGeneratingServicesImpl16AIReplyGenerator clearCachedResults] */

void FUN_101c9fbfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x000107c6157c();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101c9fc40; end: 101c9fcdb;  */

void FUN_101c9fc40(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  FUN_101ca07a8(unaff_x20 + 0x68);
  return;
}



/* Entry: 101c9fcdc; end: 101c9fd3b;  */

void FUN_101c9fcdc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x60) = 0;
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        if (*(long *)(lVar2 + 0x28) != 0) {
          func_0x000107c3f474();
        }
        lVar3 = *(long *)(lVar2 + 0x30);
      }
      else {
        if (lVar4 != 1) {
LAB_101c9fba8:
          lStack_40 = lVar4;
          func_0x000107c60614(&UNK_1106b73e0,&lStack_40,&UNK_1106b73e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9fbcc);
          (*pcVar1)();
        }
        lVar3 = *(long *)(lVar2 + 0x28);
      }
      lVar4 = lVar2;
      if (lVar3 != 0) {
        func_0x000107c615f0(lVar3);
        func_0x000107c3f474();
        func_0x000107c615e8(lVar3);
      }
    }
    else {
      if (lVar4 == 2) {
        if (*(long *)(lVar2 + 0x28) != 0) {
          func_0x000107c3f474();
        }
        if (*(long *)(lVar2 + 0x30) != 0) {
          func_0x000107c3f474();
        }
        lVar4 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar4 + 0x60) = 2;
      }
      else {
        if (lVar4 != 3) goto LAB_101c9fba8;
        if (*(long *)(lVar2 + 0x28) != 0) {
          func_0x000107c3f474();
        }
        if (*(long *)(lVar2 + 0x30) != 0) {
          func_0x000107c3f474();
        }
        lVar4 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar4 + 0x60) = 0;
      }
      *(undefined1 *)(lVar4 + 0x68) = 0;
      func_0x000107c6157c(lVar4);
      FUN_101ca1384();
      func_0x000107c61574(lVar2);
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 101c9fd3c; end: 101c9fdb3;  */

void FUN_101c9fd3c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101ca0704(0,param_1,param_2);
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



/* Entry: 101c9fdb4; end: 101ca0077;  */

void FUN_101c9fdb4(ulong param_1)

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
    func_0x000101c9fea0(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_101ca0570(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9fe9c);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9fea0);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9fe98);
  (*pcVar1)();
}



/* Entry: 101ca0078; end: 101ca0117;  */

undefined * FUN_101ca0078(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e12808;
    FUN_101c9fd3c(0x112e12808,&PTR_PTR_1126bd998,0x112e12818,&UNK_10da9e920);
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



/* Entry: 101ca0118; end: 101ca022f;  */

long FUN_101ca0118(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca022c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca0230);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
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
      FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca0228);
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



/* Entry: 101ca0230; end: 101ca03f3;  */

ulong FUN_101ca0230(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca0314);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca0318);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bd998;
    func_0x000107c61168(PTR_PTR_1126bd998);
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
    puVar4 = PTR_PTR_1126bd998;
    func_0x000107c61168(PTR_PTR_1126bd998);
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
  FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca03f4);
  (*pcVar2)();
}



/* Entry: 101ca03f4; end: 101ca040f;  */

void FUN_101ca03f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101ca0410();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101ca0410; end: 101ca0563;  */

undefined * FUN_101ca0410(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca0564);
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
    puVar3 = (undefined *)0x112e12800;
    FUN_101c9fd3c(0x112e12800,&PTR_PTR_1126a8e50,0x112e12810,&UNK_10d9edfe8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101ca0704(0,0x112e12800,&PTR_PTR_1126a8e50);
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



/* Entry: 101ca0564; end: 101ca056f;  */

void FUN_101ca0564(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(ulong *)(unaff_x20 + 0x18);
  puVar9 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar9,0,0,uVar11,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  uVar13 = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c6157c(uVar13);
  FUN_101ca1100(param_3);
  func_0x000107c61574(uVar13);
  if (param_2 == 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      uVar3 = uVar11;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar13 = 0;
      FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
      uVar4 = uVar3;
      func_0x000107c5fc54(uVar3,uVar13);
      func_0x000107c61170(uVar3);
      lVar10 = param_1;
      func_0x000107c3f564(param_1);
      func_0x000107c61180();
      lVar8 = lVar10;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar10);
      FUN_101c9fdb4(lVar8);
      puVar5 = PTR_PTR_1126bd9a0;
      func_0x000107c610f8();
      uVar3 = uVar4;
      func_0x000107c5fc48(uVar4,uVar13);
      func_0x000107c6142c(uVar4);
      func_0x000107c45ce4();
      func_0x000107c61170(uVar3);
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar3 = uVar11;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar11);
      if (uVar3 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar11 = uVar3;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar3);
      puVar12 = *(undefined **)(lVar2 + 0x50);
      *(undefined **)(lVar2 + 0x50) = puVar5;
      *(ulong *)(lVar2 + 0x58) = uVar11;
      func_0x000107c61174(puVar5);
      func_0x000107c61170();
      FUN_101c9f0e0();
      if (puVar12 == (undefined *)0x0) {
        if ((*(byte *)(lVar2 + 0x60) & 1) != 0) {
          lVar10 = lVar2 + 0x68;
          func_0x000107c61618();
          if (lVar10 != 0) {
            lVar8 = lVar10;
            FUN_101ca1c50();
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar13);
            uVar13 = 0xd00000000000002c;
            func_0x000107c5fadc(0xd00000000000002c,0x800000010f008b90);
            func_0x000107c3da74(lVar10);
            func_0x000107c615e8(lVar10);
            func_0x000107c61170(lVar8);
            func_0x000107c61170(uVar13);
          }
          lVar10 = *(long *)(lVar2 + 0x20);
          *(undefined8 *)(lVar10 + 0x38) = 2;
          *(undefined1 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x48) = 0x3f0;
          *(undefined1 *)(lVar10 + 0x50) = 0;
          func_0x000107c6157c(lVar10);
          FUN_101ca1384();
          func_0x000107c61574(lVar10);
        }
        func_0x000107c61170(param_1);
      }
      else {
        if ((*(byte *)(lVar2 + 0x60) & 1) != 0) {
          lVar10 = *(long *)(lVar2 + 0x20);
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined1 *)(lVar10 + 0x40) = 0;
          lVar10 = lVar2 + 0x68;
          func_0x000107c61618();
          if (lVar10 != 0) {
            puVar6 = puVar12;
            func_0x000107c4ce20();
            func_0x000107c61180();
            puVar7 = puVar6;
            func_0x000107c3f53c();
            func_0x000107c61180();
            func_0x000107c61170(puVar6);
            if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9f0e0);
              (*pcVar1)();
            }
            func_0x000107c3da78(lVar10);
            func_0x000107c615e8(lVar10);
            func_0x000107c61170(puVar7);
          }
        }
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar5);
        puVar5 = puVar12;
      }
      func_0x000107c61170(puVar5);
      goto LAB_101c9f090;
    }
    if ((*(byte *)(lVar2 + 0x60) & 1) == 0) goto LAB_101c9f090;
    lVar10 = lVar2 + 0x68;
    func_0x000107c61618();
    if (lVar10 != 0) {
      lVar8 = lVar10;
      FUN_101ca1c50();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar9);
      uVar13 = 0x6572207974706d45;
      func_0x000107c5fadc(0x6572207974706d45,0xec000000746c7573);
      func_0x000107c3da74(lVar10);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar13);
    }
    lVar10 = *(long *)(lVar2 + 0x20);
    *(undefined8 *)(lVar10 + 0x38) = 2;
    *(undefined1 *)(lVar10 + 0x40) = 0;
    *(undefined8 *)(lVar10 + 0x48) = 0x3f0;
    *(undefined1 *)(lVar10 + 0x50) = 0;
    func_0x000107c6157c(lVar10);
    FUN_101ca1384();
LAB_101c9efcc:
    func_0x000107c61574(lVar10);
  }
  else {
    func_0x000107c614b0(param_2);
    lVar10 = param_2;
    func_0x000107c5ed2c();
    lVar8 = lVar10;
    func_0x000107c3fcb0();
    func_0x000107c61170(lVar10);
    if (lVar8 != 0x3ee) {
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(0xe000000000000000);
      lVar10 = param_2;
      func_0x000107c5ed2c(param_2);
      lVar8 = lVar10;
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      lVar10 = lVar8;
      func_0x000107c5faec(lVar8);
      func_0x000107c61170(lVar8);
      func_0x000107c5fb78(lVar10,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c5fb78(0x203a65646f63202c,0xe800000000000000);
      lVar10 = param_2;
      func_0x000107c5ed2c();
      func_0x000107c3fcb0();
      func_0x000107c61170(lVar10);
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      puVar12 = puVar5;
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      if (*(char *)(lVar2 + 0x60) == '\x01') {
        uVar13 = 0x203a726f727265;
        lVar10 = lVar2 + 0x68;
        func_0x000107c61618();
        if (lVar10 != 0) {
          lVar8 = lVar10;
          FUN_101ca1c50();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar12);
          func_0x000107c5fadc(0x203a726f727265,0xe700000000000000);
          func_0x000107c3da74(lVar10);
          func_0x000107c615e8(lVar10);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(uVar13);
        }
        lVar10 = *(long *)(lVar2 + 0x20);
        func_0x000107c6157c(lVar10);
        func_0x000101ca1174(param_2);
        func_0x000107c6142c(0xe700000000000000);
        func_0x000107c614ac(param_2);
        goto LAB_101c9efcc;
      }
      func_0x000107c6142c(0xe700000000000000);
    }
    func_0x000107c614ac(param_2);
  }
LAB_101c9f090:
  uVar13 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = 0;
  func_0x000107c615e8(uVar13);
  *(undefined1 *)(lVar2 + 0x60) = 0;
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 101ca0570; end: 101ca06d7;  */

ulong FUN_101ca0570(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca06d8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca06cc);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101ca0704(0,0x112e12808,&PTR_PTR_1126bd998);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca06d0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca06d4);
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
          FUN_101ca0230(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101ca06d8; end: 101ca0703;  */

void FUN_101ca06d8(void)

{
  func_0x000101c9e2d4();
  return;
}



/* Entry: 101ca0704; end: 101ca0783;  */

void FUN_101ca0704(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101ca0784; end: 101ca0787;  */

void FUN_101ca0784(void)

{
  long unaff_x20;
  
  FUN_101c9e838(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101ca0788; end: 101ca07a7;  */

void FUN_101ca0788(void)

{
  long unaff_x20;
  
  FUN_101c9e838(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}


