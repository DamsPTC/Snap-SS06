/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10664a8f0; end: 10664a8fb; -[SCImpalaStoryPlayer setDelegate:] */

void FUN_10664a8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x158,param_3);
  return;
}



/* Entry: 10664a8fc; end: 10664a903; -[SCImpalaStoryPlayer disablePublisherProfilePresentation] */

undefined1 FUN_10664a8fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x130);
}



/* Entry: 10664a904; end: 10664a90b; -[SCImpalaStoryPlayer setDisablePublisherProfilePresentation:] */

void FUN_10664a904(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x130) = param_3;
  return;
}



/* Entry: 10664a90c; end: 10664a913; -[SCImpalaStoryPlayer disableBusinessProfilePresentation] */

undefined1 FUN_10664a90c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x131);
}



/* Entry: 10664a914; end: 10664a91b; -[SCImpalaStoryPlayer setDisableBusinessProfilePresentation:] */

void FUN_10664a914(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x131) = param_3;
  return;
}



/* Entry: 10664a91c; end: 10664a923; -[SCImpalaStoryPlayer dataModelProcessor] */

undefined8 FUN_10664a91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10664a924; end: 10664a92b; -[SCImpalaStoryPlayer setDataModelProcessor:] */

void FUN_10664a924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10664a92c; end: 10664ab1f; -[SCImpalaStoryPlayer .cxx_destruct] */

void FUN_10664a92c(long param_1)

{
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_destroyWeak(param_1 + 0x158);
  _objc_destroyWeak(param_1 + 0x150);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10664ab20; end: 10664ac83;  */

void FUN_10664ab20(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      lVar1 = param_2;
      func_0x00010bf51e00(param_2);
      func_0x00010befa120(uVar3);
      _objc_release(lVar1);
      lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 8);
      if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
        func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
        goto LAB_10664ac68;
      }
      *(undefined1 *)(lVar1 + 0x18) = 1;
      func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10664ac84;
      puStack_60 = &UNK_1109317a0;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = *(long *)(param_1 + 0x28);
      _objc_retain(uVar3);
      uStack_48 = *(undefined8 *)(param_1 + 0x38);
      uStack_50 = *(undefined8 *)(param_1 + 0x30);
      uStack_38 = *(undefined8 *)(param_1 + 0x48);
      uStack_40 = *(undefined8 *)(param_1 + 0x40);
      uStack_58 = uVar3;
      (**(code **)(lVar1 + 0x10))(lVar1,&puStack_78);
      uVar3 = uStack_58;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      _objc_retain(uVar3);
      func_0x00010c280b40(uVar2);
      (**(code **)(param_2 + 0x10))(param_2,uVar3,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
LAB_10664ac68:
  _objc_release(param_2);
  return;
}



/* Entry: 10664ac84; end: 10664ae7b;  */

void FUN_10664ac84(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar8 + 0x28);
    *(long *)(lVar8 + 0x28) = param_2;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf51e00();
    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    _objc_release(uVar7);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bf51e00();
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
    _objc_retain(lVar3);
    lVar8 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = *(long *)(lVar9 * 8);
        _objc_retainBlock();
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        (**(code **)(lVar4 + 0x10))();
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar5 + 0x20));
  __Block_object_assign(param_2 + 0x28,*(undefined8 *)(lVar5 + 0x28),7);
  __Block_object_assign(param_2 + 0x30,*(undefined8 *)(lVar5 + 0x30),8);
  __Block_object_assign(param_2 + 0x38,*(undefined8 *)(lVar5 + 0x38),8);
  __Block_object_assign(param_2 + 0x40,*(undefined8 *)(lVar5 + 0x40),8);
  __Block_object_assign(param_2 + 0x48,*(undefined8 *)(lVar5 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_2 + 0x50,*(undefined8 *)(lVar5 + 0x50),8);
  return;
}



/* Entry: 10664ae7c; end: 10664aeff;  */

void FUN_10664ae7c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 10664af00; end: 10664af8f;  */

ulong FUN_10664af00(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  
  _objc_retain(param_4);
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar3 = param_1;
  _objc_release(param_3);
  uVar1 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2709c0(uVar1);
  _objc_release(uVar1);
  uVar2 = (ulong)(dVar3 < param_1);
  if (param_1 < dVar3) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 10664af90; end: 10664b0ff;  */

void FUN_10664af90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined2 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x58);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10664b100;
  puStack_88 = &UNK_110931870;
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar2);
  uStack_38 = *(undefined2 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar3;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  _objc_copyWeak(auStack_40,param_1 + 0x60);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_a0);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10664b100; end: 10664b2c7;  */

void FUN_10664b100(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 auStack_50 [8];
  undefined2 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_48 = *(undefined2 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar9);
  _objc_copyWeak(auStack_50,param_1 + 0x60);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10664b2c8; end: 10664d6af;  */

/* WARNING: Possible PIC construction at 0x00010664ba3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010664cd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010664b3b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010664cd88) */
/* WARNING: Removing unreachable block (ram,0x00010664ba40) */
/* WARNING: Removing unreachable block (ram,0x00010664b3b8) */
/* WARNING: Removing unreachable block (ram,0x00010664b46c) */
/* WARNING: Removing unreachable block (ram,0x00010664b47c) */
/* WARNING: Removing unreachable block (ram,0x00010664b480) */
/* WARNING: Removing unreachable block (ram,0x00010664b490) */
/* WARNING: Removing unreachable block (ram,0x00010664b498) */
/* WARNING: Removing unreachable block (ram,0x00010664b4c8) */
/* WARNING: Removing unreachable block (ram,0x00010664b550) */
/* WARNING: Removing unreachable block (ram,0x00010664b4f0) */
/* WARNING: Removing unreachable block (ram,0x00010664b51c) */
/* WARNING: Removing unreachable block (ram,0x00010664b538) */
/* WARNING: Removing unreachable block (ram,0x00010664b564) */

void FUN_10664b2c8(undefined *param_1,undefined *param_2,uint param_3,uint param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *unaff_x25;
  undefined *unaff_x28;
  undefined8 uVar21;
  undefined1 auStack_918 [8];
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined *puStack_8f8;
  undefined *puStack_8f0;
  undefined *puStack_8e8;
  undefined1 ***pppuStack_8e0;
  code *pcStack_8d8;
  undefined *puStack_8c8;
  undefined *puStack_8c0;
  long lStack_8b8;
  undefined *puStack_8b0;
  undefined *puStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined8 uStack_890;
  long lStack_888;
  long *plStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  long lStack_848;
  long *plStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_710;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined *puStack_6f0;
  undefined *puStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined1 **ppuStack_6b0;
  undefined8 uStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined1 uStack_670;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined **ppuStack_638;
  uint uStack_62c;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined4 uStack_60c;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  uint uStack_5ac;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  long lStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  undefined *puStack_540;
  long lStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  uint uStack_51c;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_2c8;
  undefined *puStack_248;
  long lStack_1c8;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = *(undefined **)(param_1 + 0x68);
  if (puVar11 == (undefined *)0x0) {
    puVar11 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar11 = *(undefined **)(param_1 + 0x28);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = (uint)(byte)param_1[0x78];
      param_4 = (uint)(byte)param_1[0x79];
      param_2 = *(undefined **)(param_1 + 0x30);
      param_5 = *(undefined **)(param_1 + 0x38);
      param_6 = *(undefined **)(param_1 + 0x40);
      param_7 = *(undefined8 *)(param_1 + 0x48);
      param_8 = *(undefined **)(param_1 + 0x50);
      puStack_150 = *(undefined **)(param_1 + 0x58);
      puStack_148 = *(undefined **)(param_1 + 0x60);
      uVar21 = 0x10664b3b8;
      goto SUB_10664b5e8;
    }
    param_5 = (undefined *)0xc8;
    puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e05458);
    _objc_retainAutoreleasedReturnValue();
    param_2 = (undefined *)0x0;
    param_3 = 0;
    puVar9 = puVar20;
    (**(code **)(puVar11 + 0x10))();
    param_4 = (uint)puVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar20);
      return;
    }
  }
  uVar21 = 0x10664b5e8;
  ___stack_chk_fail();
SUB_10664b5e8:
  puVar20 = puStack_148;
  puVar19 = puStack_150;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  uStack_62c = param_3;
  uStack_51c = param_4;
  puStack_160 = &stack0xfffffffffffffff0;
  uStack_158 = uVar21;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_548 = param_7;
  _objc_retain(param_7);
  puStack_540 = param_8;
  _objc_retain(param_8);
  puStack_550 = puVar19;
  _objc_retain(puVar19);
  puStack_640 = puVar20;
  _objc_retain(puVar20);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar11);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  plStack_4d0 = (long *)0x0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  puStack_568 = puVar9;
  _objc_retain(puVar11);
  puVar9 = puVar11;
  puStack_618 = puVar11;
  func_0x00010bf52a60();
  puStack_558 = puVar9;
  if (puVar9 != (undefined *)0x0) {
    lStack_538 = 0;
    lStack_560 = *plStack_4d0;
    ppuStack_638 = &PTR____CFConstantStringClassReference_110e58038;
    puStack_628 = param_6;
    puStack_620 = param_5;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_4d0 != lStack_560) {
          _objc_enumerationMutation(puStack_618);
        }
        puVar10 = *(undefined **)(lStack_4d8 + (long)puVar9 * 8);
        puVar11 = puVar10;
        puStack_530 = puVar9;
        func_0x00010c11b2a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar11 == (undefined *)0x0) {
          puVar11 = puVar10;
          func_0x00010c25a3c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar11 != (undefined *)0x0) {
            func_0x00010c25a3c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            _objc_retain(param_2);
            param_8 = PTR_PTR_1126c62e8;
            puVar11 = puVar10;
            func_0x00010bf936e0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puStack_3d0 = (undefined *)0x0;
            func_0x00010c0f40e0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puStack_3d0;
            _objc_retain(puStack_3d0);
            _objc_release(puVar11);
            puVar11 = (undefined *)0x0;
            puStack_570 = puVar13;
            puVar9 = puStack_530;
            puVar19 = puVar10;
            if ((puVar13 == (undefined *)0x0) && (param_8 != (undefined *)0x0)) {
              puVar11 = puVar10;
              puStack_578 = param_8;
              func_0x00010bf24f80();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar11;
              func_0x00010bf933e0();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar9;
              func_0x00010c08fa60();
              _objc_release(puVar9);
              _objc_release(puVar11);
              puVar11 = PTR_PTR_1126b1a58;
              if (puVar19 == (undefined *)0x0) {
                puStack_500 = (undefined *)0x0;
LAB_10664c018:
                puVar11 = puVar10;
                func_0x00010bf24f80();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar11;
                func_0x00010bf93400();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puVar9;
                func_0x00010c08fa60();
                _objc_release(puVar9);
                _objc_release(puVar11);
                puVar11 = PTR_PTR_1126cc540;
                if (puVar19 == (undefined *)0x0) {
                  puStack_508 = (undefined *)0x0;
LAB_10664c0d0:
                  puVar20 = puStack_578;
                  puVar11 = PTR_PTR_1126c6d90;
                  puVar9 = puStack_578;
                  func_0x00010bfe5ea0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar19 = puVar9;
                  func_0x00010c08fa60();
                  if (puVar19 == (undefined *)0x0) {
                    func_0x00010c2586a0();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    unaff_x25 = puVar20;
                    func_0x00010bfe5ea0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2586a0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                  }
                  _objc_release(puVar9);
                  puStack_510 = puVar10;
                  if (puStack_500 != (undefined *)0x0) {
                    uStack_3f8 = 0;
                    uStack_400 = 0;
                    uStack_3e8 = 0;
                    uStack_3f0 = 0;
                    lStack_418 = 0;
                    uStack_420 = 0;
                    uStack_408 = 0;
                    plStack_410 = (long *)0x0;
                    puStack_580 = puVar11;
                    func_0x00010c258040();
                    _objc_retainAutoreleasedReturnValue();
                    puStack_528 = puVar11;
                    func_0x00010bf52a60();
                    puStack_4f8 = puVar11;
                    if (puVar11 != (undefined *)0x0) {
                      puStack_518 = (undefined *)*plStack_410;
                      do {
                        puVar20 = (undefined *)0x0;
                        do {
                          if ((undefined *)*plStack_410 != puStack_518) {
                            _objc_enumerationMutation(puStack_528);
                          }
                          puVar11 = puStack_500;
                          uVar14 = *(ulong *)(lStack_418 + (long)puVar20 * 8);
                          puVar9 = puStack_500;
                          func_0x00010bfe44e0(puStack_500);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1df740(uVar14);
                          _objc_release(puVar9);
                          func_0x00010c1744a0(uVar14);
                          func_0x00010c174600(uVar14);
                          puVar9 = puVar11;
                          func_0x00010bfe4500(puVar11);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c174580(uVar14);
                          _objc_release(puVar9);
                          func_0x00010c078f80(puVar11);
                          func_0x00010c1b2f20(uVar14);
                          _objc_retain(puVar11);
                          func_0x00010c078f80(puVar11);
                          func_0x00010c0691a0(puVar11);
                          _objc_release(puVar11);
                          func_0x00010c1d0b20(uVar14);
                          puVar11 = PTR_PTR_1126c6d98;
                          uVar3 = uVar14;
                          func_0x00010bf25280(uVar14);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bfea2a0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = uVar14;
                          func_0x00010bf25280();
                          _objc_retainAutoreleasedReturnValue();
                          uVar5 = uVar4;
                          func_0x00010c238f00();
                          puStack_4f0 = puVar20;
                          if ((uVar5 & 1) == 0) {
                            func_0x00010c238820(param_2);
                          }
                          unaff_x28 = puVar11;
                          func_0x00010c2b8ea0();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf014a0(param_2);
                          unaff_x25 = unaff_x28;
                          func_0x00010c2a8180();
                          _objc_retainAutoreleasedReturnValue();
                          puVar20 = unaff_x25;
                          func_0x00010c2b6240();
                          _objc_retainAutoreleasedReturnValue();
                          puVar9 = puVar20;
                          func_0x00010bf21f60();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c174660(uVar14);
                          _objc_release(puVar9);
                          _objc_release(puVar20);
                          _objc_release(unaff_x25);
                          _objc_release(unaff_x28);
                          _objc_release(uVar4);
                          _objc_release(puVar11);
                          _objc_release(uVar3);
                          puVar11 = param_2;
                          func_0x00010c0d0280();
                          _objc_retainAutoreleasedReturnValue();
                          puVar20 = puVar11;
                          func_0x00010bf93460();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar11);
                          uStack_438 = 0;
                          uStack_440 = 0;
                          uStack_428 = 0;
                          uStack_430 = 0;
                          lStack_458 = 0;
                          uStack_460 = 0;
                          uStack_448 = 0;
                          puStack_450 = (undefined8 *)0x0;
                          _objc_retain(puVar20);
                          puVar11 = puVar20;
                          func_0x00010bf52a60();
                          if (puVar11 != (undefined *)0x0) {
                            unaff_x28 = (undefined *)*puStack_450;
                            do {
                              puVar9 = (undefined *)0x0;
                              do {
                                if ((undefined *)*puStack_450 != unaff_x28) {
                                  _objc_enumerationMutation(puVar20);
                                }
                                puVar10 = *(undefined **)(lStack_458 + (long)puVar9 * 8);
                                puVar19 = puVar10;
                                func_0x00010c241220();
                                _objc_retainAutoreleasedReturnValue();
                                uVar3 = uVar14;
                                func_0x00010c0c5180(uVar14);
                                _objc_retainAutoreleasedReturnValue();
                                unaff_x25 = puVar19;
                                func_0x00010c0720c0();
                                _objc_release(uVar3);
                                _objc_release(puVar19);
                                if ((int)unaff_x25 != 0) {
                                  puVar19 = puVar10;
                                  func_0x00010bf93440(puVar10);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c182260(uVar14);
                                  _objc_release(puVar19);
                                  puVar19 = param_2;
                                  func_0x00010c0d0280(param_2);
                                  _objc_retainAutoreleasedReturnValue();
                                  puVar13 = puVar19;
                                  func_0x00010c243400();
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c182240(uVar14);
                                  _objc_release(puVar13);
                                  _objc_release(puVar19);
                                  func_0x00010bf4dac0(puVar10);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c182280(uVar14);
                                  _objc_release(puVar10);
                                }
                                puVar9 = puVar9 + 1;
                              } while (puVar11 != puVar9);
                              puVar11 = puVar20;
                              func_0x00010bf52a60();
                            } while (puVar11 != (undefined *)0x0);
                          }
                          _objc_release(puVar20);
                          _objc_release(puVar20);
                          puVar10 = puStack_510;
                          puVar20 = puStack_4f0 + 1;
                        } while (puVar20 != puStack_4f8);
                        puVar11 = puStack_528;
                        func_0x00010bf52a60();
                        puStack_4f8 = puVar11;
                      } while (puVar11 != (undefined *)0x0);
                    }
                    _objc_release(puStack_528);
                    puVar11 = puStack_580;
                    param_5 = puStack_620;
                    param_6 = puStack_628;
                  }
                  puVar9 = param_2;
                  func_0x00010c0f0840();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar9 == (undefined *)0x0) goto LAB_10664c8ec;
                  uStack_478 = 0;
                  uStack_480 = 0;
                  uStack_468 = 0;
                  uStack_470 = 0;
                  lStack_498 = 0;
                  uStack_4a0 = 0;
                  uStack_488 = 0;
                  plStack_490 = (long *)0x0;
                  puVar9 = puVar11;
                  func_0x00010c258040();
                  _objc_retainAutoreleasedReturnValue();
                  puVar19 = puVar9;
                  func_0x00010bf52a60();
                  unaff_x28 = puVar11;
                  if (puVar19 != (undefined *)0x0) {
                    lVar12 = *plStack_490;
                    do {
                      unaff_x25 = (undefined *)0x0;
                      do {
                        if (*plStack_490 != lVar12) {
                          _objc_enumerationMutation(puVar9);
                        }
                        uVar21 = *(undefined8 *)(lStack_498 + (long)unaff_x25 * 8);
                        puVar20 = param_2;
                        func_0x00010c0f0840();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c174640(uVar21);
                        _objc_release(puVar20);
                        unaff_x25 = unaff_x25 + 1;
                      } while (puVar19 != unaff_x25);
                      puVar19 = puVar9;
                      func_0x00010bf52a60();
                      puVar10 = puStack_510;
                    } while (puVar19 != (undefined *)0x0);
                  }
                }
                else {
                  puVar19 = puVar10;
                  func_0x00010bf24f80(puVar10);
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar19;
                  func_0x00010bf93400();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_3e0 = (undefined *)0x0;
                  func_0x00010c0f40e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puStack_3e0;
                  puStack_508 = puVar11;
                  _objc_retain(puStack_3e0);
                  _objc_release(puVar13);
                  _objc_release(puVar19);
                  if (puVar9 == (undefined *)0x0) goto LAB_10664c0d0;
                  puVar11 = (undefined *)0x0;
                }
                _objc_release(puVar9);
              }
              else {
                puVar19 = puVar10;
                func_0x00010bf24f80(puVar10);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar19;
                func_0x00010bf933e0();
                _objc_retainAutoreleasedReturnValue();
                puStack_3d8 = (undefined *)0x0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puStack_3d8;
                puStack_500 = puVar11;
                _objc_retain(puStack_3d8);
                _objc_release(puVar13);
                _objc_release(puVar19);
                puStack_508 = puVar9;
                if (puVar9 == (undefined *)0x0) goto LAB_10664c018;
                puVar11 = (undefined *)0x0;
              }
LAB_10664c8ec:
              puVar9 = puStack_530;
              _objc_release(puStack_508);
              _objc_release(puStack_500);
              param_8 = puStack_578;
              puVar19 = puVar10;
            }
            _objc_release(param_8);
            _objc_release(puStack_570);
            _objc_release(param_2);
            _objc_release(puVar19);
            _objc_release(puVar19);
            puVar10 = puVar11;
            goto LAB_10664c92c;
          }
          puVar11 = puVar10;
          func_0x00010c259880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar9 = PTR_PTR_1126c6d90;
          if (puVar11 != (undefined *)0x0) {
            func_0x00010c259880();
            _objc_retainAutoreleasedReturnValue();
            param_8 = puVar10;
            func_0x00010bf936c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c258660();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_8);
            _objc_release(puVar10);
            uVar21 = 0x10664ba40;
            puVar8 = param_2;
            puVar11 = puVar9;
            puStack_6f8 = param_6;
            goto SUB_10664d304;
          }
          puVar11 = puVar10;
          func_0x00010bfa3780();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar11 != (undefined *)0x0) {
            puVar11 = param_2;
            func_0x00010bf4de00();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar11;
            func_0x00010c0720c0();
            _objc_release(puVar11);
            if ((int)puVar20 != 0) {
              puVar11 = puVar10;
              func_0x00010bfa3780();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar11;
              func_0x00010bf93680();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar20;
              func_0x00010bf529e0();
              _objc_release(puVar20);
              _objc_release(puVar11);
              if (puVar9 != (undefined *)0x0) {
                puVar11 = puVar10;
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar11;
                func_0x00010bfa3760();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar20;
                func_0x00010bfa36c0();
                _objc_retainAutoreleasedReturnValue();
                puStack_4f0 = puVar9;
                _objc_release(puVar20);
                _objc_release(puVar11);
                puVar11 = param_2;
                func_0x00010c0b8220();
                _objc_retainAutoreleasedReturnValue();
                param_8 = puVar11;
                func_0x00010c0b7f20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                puVar11 = param_8;
                func_0x00010c26e500();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = param_8;
                puStack_4f8 = puVar11;
                func_0x00010bf5b980();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = PTR_PTR_1126cc518;
                puStack_500 = puVar20;
                _objc_alloc();
                puVar11 = param_8;
                func_0x00010c067780();
                _objc_retainAutoreleasedReturnValue();
                if (puVar11 == (undefined *)0x0) {
                  puStack_508 = (undefined *)0xffffffffffffffff;
                }
                else {
                  puVar20 = param_8;
                  func_0x00010c067780();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_660 = puVar20;
                  func_0x00010c0b4ca0();
                  puStack_508 = puVar20;
                }
                puVar20 = param_8;
                func_0x00010c0677a0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar20 == (undefined *)0x0) {
                  puStack_510 = (undefined *)0xffffffffffffffff;
                }
                else {
                  puVar9 = param_8;
                  func_0x00010c0677a0();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_658 = puVar9;
                  func_0x00010c0b4ca0();
                  puStack_510 = puVar9;
                }
                puVar9 = param_8;
                func_0x00010c0676e0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar9 == (undefined *)0x0) {
                  puStack_518 = (undefined *)0xffffffffffffffff;
                }
                else {
                  puVar13 = param_8;
                  func_0x00010c0676e0();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_648 = puVar13;
                  func_0x00010c0b4ca0();
                  puStack_518 = puVar13;
                }
                puVar13 = param_8;
                func_0x00010c067720();
                _objc_retainAutoreleasedReturnValue();
                if (puVar13 != (undefined *)0x0) {
                  puVar6 = param_8;
                  func_0x00010c067720();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_650 = puVar6;
                  func_0x00010c0b4ca0();
                }
                puVar6 = param_8;
                func_0x00010c067700();
                _objc_retainAutoreleasedReturnValue();
                if (puVar6 == (undefined *)0x0) {
                  func_0x00010c062320();
                }
                else {
                  puVar7 = param_8;
                  func_0x00010c067700(param_8);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_528 = puVar9;
                  func_0x00010bf885a0();
                  func_0x00010c062320();
                  puVar9 = puStack_528;
                  _objc_release(puVar7);
                }
                _objc_release(puVar6);
                param_6 = puStack_628;
                if (puVar13 != (undefined *)0x0) {
                  _objc_release(puStack_650);
                }
                _objc_release(puVar13);
                if (puVar9 != (undefined *)0x0) {
                  _objc_release(puStack_648);
                }
                _objc_release(puVar9);
                if (puVar20 != (undefined *)0x0) {
                  _objc_release(puStack_658);
                }
                _objc_release(puVar20);
                if (puVar11 != (undefined *)0x0) {
                  _objc_release(puStack_660);
                }
                _objc_release(puVar11);
                puVar13 = PTR_PTR_1126cc520;
                _objc_alloc();
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar10;
                func_0x00010bf93680();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = puStack_4f0;
                puVar11 = puStack_4f8;
                unaff_x28 = puStack_500;
                func_0x00010c00fbe0();
                _objc_release(puVar20);
                _objc_release(puVar10);
                _objc_release(puVar19);
                _objc_release(unaff_x28);
                _objc_release(puVar11);
                _objc_release(param_8);
                _objc_release(unaff_x25);
                puVar9 = puStack_530;
                puVar10 = puVar13;
                param_5 = puStack_620;
                goto LAB_10664c92c;
              }
            }
            puVar11 = puVar10;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar11;
            func_0x00010bf935c0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar20 == (undefined *)0x0) {
              _objc_release(puVar11);
            }
            else {
              puVar9 = puVar10;
              func_0x00010bfa3780();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar9;
              func_0x00010bf93680();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar19;
              func_0x00010bf529e0();
              _objc_release(puVar19);
              _objc_release(puVar9);
              _objc_release(puVar20);
              _objc_release(puVar11);
              if (puVar13 == (undefined *)0x0) {
                puVar11 = puVar10;
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar11;
                func_0x00010bfa3760();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puVar9;
                func_0x00010c0774e0();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar19;
                func_0x00010bf1f3c0();
                _objc_release(puVar19);
                _objc_release(puVar9);
                _objc_release(puVar11);
                puVar13 = PTR_PTR_1126cc1e8;
                unaff_x25 = (undefined *)0x0;
                if ((int)puVar20 == 0) {
                  func_0x00010bfa3780();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010bf935c0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bdc3a20();
                  _objc_retainAutoreleasedReturnValue();
                  param_8 = puVar11;
                  goto LAB_10664be90;
                }
                func_0x00010bfa3780(puVar10);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010bf935c0();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(param_2);
                _objc_retain(puStack_640);
                puStack_248 = (undefined *)0x0;
                param_8 = PTR_PTR_1126b0ef0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = (undefined *)0x0;
                if ((puStack_248 == (undefined *)0x0) && (param_8 != (undefined *)0x0)) {
                  puVar20 = param_2;
                  func_0x00010bf4de00(param_2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010baf2e4c();
                  func_0x00010c10a000(puStack_640);
                  _objc_release(puVar20);
                  puVar19 = param_2;
                  func_0x00010c0b8220();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = param_2;
                  func_0x00010c0d0280();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = param_8;
                  func_0x00010bf31ee0();
                  if ((int)puVar9 == 0x30) {
                    unaff_x28 = param_8;
                    puVar8 = puVar19;
                    func_0x000108f0c778(param_8,puVar19,puVar20);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else if ((int)puVar9 == 4) {
                    unaff_x25 = param_8;
                    func_0x00010c11ab00();
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = (undefined *)0x0;
                    unaff_x28 = unaff_x25;
                    func_0x000108f08890();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                  }
                  else {
                    unaff_x28 = (undefined *)0x0;
                  }
                  _objc_release(puVar20);
                  _objc_release(puVar19);
                }
                _objc_release(param_8);
                _objc_release(puStack_640);
                _objc_release(param_2);
                _objc_release(puVar11);
                _objc_release(puVar10);
                puVar9 = puStack_530;
                puVar10 = unaff_x28;
                goto LAB_10664c92c;
              }
            }
            puVar11 = puVar10;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar11;
            func_0x00010bfa3760();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            puVar11 = puVar10;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar11;
            func_0x00010bf93500();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar20;
            func_0x00010c08fa60();
            _objc_release(puVar20);
            _objc_release(puVar11);
            puVar20 = PTR_PTR_1126b4bb0;
            if (puVar9 == (undefined *)0x0) {
              puStack_4f8 = (undefined *)0x0;
              puStack_4f0 = (undefined *)0x0;
              param_5 = (undefined *)0x0;
              puVar11 = (undefined *)0x0;
            }
            else {
              puVar11 = puVar10;
              func_0x00010bfa3780(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar11;
              func_0x00010bf93500();
              _objc_retainAutoreleasedReturnValue();
              lStack_4e8 = 0;
              func_0x00010c0f40e0();
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lStack_4e8;
              _objc_release(puVar9);
              _objc_release(puVar11);
              if ((lVar12 == 0) && (puVar11 = puVar20, func_0x00010bfd5f00(), (int)puVar11 != 0)) {
                puVar13 = puVar20;
                func_0x00010bf5b080();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar13;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puVar13;
                func_0x00010c294420();
                _objc_retainAutoreleasedReturnValue();
                param_5 = puVar13;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar13;
                func_0x00010bfd5f20();
                if ((int)puVar11 == 0) {
                  puVar11 = (undefined *)0x0;
                }
                else {
                  puVar11 = puVar13;
                  func_0x00010bf5b3e0();
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(puVar13);
              }
              else {
                puVar9 = (undefined *)0x0;
                puVar19 = (undefined *)0x0;
                param_5 = (undefined *)0x0;
                puVar11 = (undefined *)0x0;
              }
              puStack_4f8 = puVar19;
              puStack_4f0 = puVar9;
              _objc_release(puVar20);
            }
            puStack_510 = PTR_PTR_1126c6d90;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            puStack_500 = puVar10;
            func_0x00010bf93680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = puVar8;
            puStack_518 = puVar10;
            func_0x00010bfa36c0();
            _objc_retainAutoreleasedReturnValue();
            param_8 = puVar8;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar8;
            func_0x00010c260dc0();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar8;
            func_0x00010c0b46a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar8;
            func_0x00010c2520a0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puStack_4f8;
            puStack_6a0 = puStack_4f0;
            puStack_698 = puStack_4f8;
            puVar9 = puStack_510;
            puStack_690 = param_5;
            puStack_688 = puVar11;
            puStack_508 = puVar8;
            func_0x00010c258680();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(param_8);
            _objc_release(unaff_x28);
            _objc_release(puStack_518);
            _objc_release(puStack_500);
            uVar21 = 0x10664cd88;
            puVar8 = param_2;
            puStack_6f8 = puVar9;
            goto SUB_10664d304;
          }
          puVar11 = puVar10;
          func_0x00010c0d5a20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar11 != (undefined *)0x0) {
            puVar11 = puVar10;
            func_0x00010c0d5a20();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_PTR_1126cc4c8;
            _objc_opt_class();
            param_8 = puVar11;
            _objc_opt_isKindOfClass();
            _objc_release(puVar11);
            puVar11 = puVar10;
            func_0x00010c0d5a20();
            _objc_retainAutoreleasedReturnValue();
            if (((ulong)param_8 & 1) == 0) {
              puVar8 = PTR_PTR_1126cc528;
              _objc_opt_class();
              param_8 = puVar11;
              _objc_opt_isKindOfClass();
              _objc_release(puVar11);
              puVar11 = puVar10;
              func_0x00010c0d5a20();
              _objc_retainAutoreleasedReturnValue();
              if (((ulong)param_8 & 1) == 0) {
                puVar8 = PTR_PTR_1126b6400;
                _objc_opt_class();
                param_8 = puVar11;
                _objc_opt_isKindOfClass();
                _objc_release(puVar11);
                puVar11 = puVar10;
                func_0x00010c0d5a20();
                _objc_retainAutoreleasedReturnValue();
                if (((ulong)param_8 & 1) == 0) {
                  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  _objc_opt_class();
                  param_8 = puVar11;
                  _objc_opt_isKindOfClass();
                  _objc_release(puVar11);
                  puVar9 = puStack_530;
                  if (((ulong)param_8 & 1) == 0) goto LAB_10664c944;
                  func_0x00010c0d5a20();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010bf529e0();
                  if (puVar11 != (undefined *)0x0) {
                    puVar11 = puVar10;
                    func_0x00010bfb1920();
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR_PTR_1126cc4e0;
                    _objc_opt_class();
                    param_8 = puVar11;
                    _objc_opt_isKindOfClass();
                    _objc_release(puVar11);
                    if (((ulong)param_8 & 1) != 0) {
                      _objc_retain(puVar10);
                      puVar13 = puVar10;
                      goto LAB_10664be98;
                    }
                  }
                  puVar13 = (undefined *)0x0;
                }
                else {
                  puVar13 = puVar11;
                  func_0x00010bf81fc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar11;
                }
              }
              else {
                puVar13 = puVar11;
                func_0x00010bfb8c20();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar11;
              }
            }
            else {
              puVar13 = puVar11;
              func_0x00010c242520();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar11;
            }
            goto LAB_10664be98;
          }
          puVar13 = puVar10;
          func_0x00010c24b8c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar11 = (undefined *)0x0;
          puVar9 = puStack_530;
          if (puVar13 != (undefined *)0x0) {
            puVar11 = puVar10;
            func_0x00010c24b8c0();
            _objc_retainAutoreleasedReturnValue();
            param_8 = puVar11;
            func_0x00010c0774e0();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = param_8;
            func_0x00010bf1f3c0();
            _objc_release(param_8);
            _objc_release(puVar11);
            func_0x00010c24b8c0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puStack_530;
            if ((int)puVar19 == 0) goto LAB_10664c92c;
            puVar11 = puVar10;
            func_0x00010bf935c0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            _objc_retain(param_2);
            _objc_retain(puStack_640);
            puStack_248 = (undefined *)0x0;
            puVar9 = PTR_PTR_1126b0ef0;
            func_0x00010c0f40e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = (undefined *)0x0;
            if ((puStack_248 == (undefined *)0x0) && (puVar9 != (undefined *)0x0)) {
              param_8 = param_2;
              func_0x00010bf4de00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010baf2e4c();
              func_0x00010c10a000(puStack_640);
              _objc_release(param_8);
              puVar10 = puVar9;
              func_0x00010bf31ee0();
              if ((int)puVar10 == 0x26) {
                puVar10 = puVar9;
                func_0x00010c23cdc0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar10 != (undefined *)0x0) {
                  puVar19 = param_2;
                  func_0x00010c0b8220();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = puVar9;
                  func_0x00010c259cc0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x25 = puVar10;
                  puVar8 = puVar20;
                  func_0x000108f0bc64(puVar10,puVar20,puVar19);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar20);
                  _objc_release(puVar19);
                  _objc_release(puVar10);
                  param_8 = puVar10;
                  goto LAB_10664d1c0;
                }
              }
              unaff_x25 = (undefined *)0x0;
            }
LAB_10664d1c0:
            _objc_release(puVar9);
            _objc_release(puStack_640);
            _objc_release(param_2);
            _objc_release(puVar11);
            puVar9 = puStack_530;
            puVar10 = unaff_x25;
            goto LAB_10664c92c;
          }
        }
        else {
          func_0x00010c11b2a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_retain(param_5);
          _objc_retain(param_6);
          _objc_retain(uStack_548);
          _objc_retain(puStack_540);
          _objc_retain(puStack_550);
          puVar20 = PTR_PTR_1126cc530;
          puVar19 = puVar10;
          func_0x00010bf936c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_248 = (undefined *)0x0;
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          param_8 = puStack_248;
          _objc_retain(puStack_248);
          _objc_release(puVar19);
          puVar13 = (undefined *)0x0;
          if ((param_8 == (undefined *)0x0) && (puVar20 != (undefined *)0x0)) {
            puVar11 = puVar10;
            func_0x00010bf93760();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar11;
            func_0x00010c08fa60();
            _objc_release(puVar11);
            puVar11 = PTR_PTR_1126cc370;
            if (puVar9 == (undefined *)0x0) {
              puStack_518 = (undefined *)0x0;
              puStack_510 = (undefined *)0x0;
            }
            else {
              puVar9 = puVar10;
              func_0x00010bf93760(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puStack_2c8 = (undefined *)0x0;
              func_0x00010c0f40e0();
              _objc_retainAutoreleasedReturnValue();
              puStack_510 = puStack_2c8;
              puStack_518 = puVar11;
              _objc_retain();
              _objc_release(puVar9);
            }
            puVar11 = puVar20;
            func_0x000106669ee8();
            uStack_5ac = (uint)puVar11;
            puVar11 = PTR_PTR_1126cc538;
            _objc_alloc();
            puVar9 = puVar10;
            puStack_5a8 = puVar11;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_528 = puVar9;
            func_0x00010bf25140();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            puStack_4f0 = puVar9;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_570 = puVar11;
            func_0x00010c11b1e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_578 = puVar11;
            func_0x00010c0b4ca0();
            puVar9 = puVar10;
            puStack_5c0 = puVar11;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_580 = puVar9;
            func_0x00010bfe4640();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            puStack_4f8 = puVar9;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_590 = puVar11;
            func_0x00010c11b3a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar10;
            puStack_500 = puVar11;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_598 = puVar9;
            func_0x00010c11b180();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            puStack_508 = puVar9;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_5a0 = puVar11;
            func_0x00010c11b080();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar10;
            puStack_5e0 = puVar11;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_5b8 = puVar9;
            func_0x00010c0b46a0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            puStack_5f0 = puVar9;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_5c8 = puVar11;
            func_0x00010bf68980();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar10;
            puStack_600 = puVar11;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_5d0 = puVar9;
            func_0x00010c2828e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_5d8 = puVar9;
            func_0x00010bf1f3c0();
            uStack_60c = SUB84(puVar9,0);
            puVar8 = puVar10;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_5e8 = puVar8;
            func_0x00010c06d880();
            _objc_retainAutoreleasedReturnValue();
            puStack_5f8 = puVar8;
            func_0x00010bf1f3c0();
            puVar13 = puVar10;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puStack_608 = puVar13;
            puStack_588 = puVar20;
            func_0x00010c0ed840();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar13;
            func_0x00010c0b4ca0();
            puVar7 = puVar10;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar7;
            func_0x00010c0ed860();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar10;
            func_0x00010c11b280();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar19;
            func_0x00010c0ed820();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puStack_5e0;
            puVar20 = puStack_5f0;
            puVar11 = puStack_600;
            uStack_5ac = uStack_5ac ^ 1;
            uStack_670 = (undefined1)uStack_5ac;
            puStack_690 = (undefined *)
                          CONCAT71(CONCAT61(puStack_690._2_6_,(char)puVar8),(char)uStack_60c);
            puStack_6a0 = puStack_5f0;
            puStack_698 = puStack_600;
            puStack_688 = puVar6;
            puStack_680 = puVar1;
            puStack_678 = puVar2;
            func_0x00010bff9e00();
            _objc_release(puVar2);
            _objc_release(puVar19);
            _objc_release(puVar1);
            _objc_release(puVar7);
            _objc_release(puVar13);
            _objc_release(puStack_608);
            _objc_release(puStack_5f8);
            _objc_release(puStack_5e8);
            _objc_release(puStack_5d8);
            _objc_release(puStack_5d0);
            _objc_release(puVar11);
            _objc_release(puStack_5c8);
            _objc_release(puVar20);
            _objc_release(puStack_5b8);
            _objc_release(puVar9);
            _objc_release(puStack_5a0);
            _objc_release(puStack_508);
            _objc_release(puStack_598);
            _objc_release(puStack_500);
            _objc_release(puStack_590);
            _objc_release(puStack_4f8);
            _objc_release(puStack_580);
            _objc_release(puStack_578);
            _objc_release(puStack_570);
            _objc_release(puStack_4f0);
            _objc_release(puStack_528);
            unaff_x25 = puStack_518;
            puVar20 = puStack_588;
            unaff_x28 = puStack_5a8;
            param_5 = puStack_620;
            param_6 = puStack_628;
            if ((uStack_5ac & 1) == 0) {
              puVar13 = puStack_588;
              puVar8 = puStack_5a8;
              FUN_10666bb8c(puStack_588,puStack_5a8,puStack_518,uStack_62c,puStack_620,puStack_628,
                            uStack_548,puStack_550);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar11 = puStack_588;
              FUN_10666d1dc(puStack_588);
              puVar9 = puVar20;
              func_0x00010666d9ac(puVar20);
              puVar19 = puVar10;
              func_0x00010c262d60();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = puStack_518;
              unaff_x28 = puStack_5a8;
              puVar13 = puVar20;
              puVar8 = puStack_5a8;
              func_0x00010666a1ac(puVar20,puStack_5a8,puStack_518,uStack_62c,puVar11,puVar9,puVar19,
                                  puStack_540);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
              param_5 = puStack_620;
              param_6 = puStack_628;
            }
            _objc_release(unaff_x28);
            _objc_release(unaff_x25);
            param_8 = puStack_510;
          }
          _objc_release(puVar20);
          _objc_release(param_8);
          _objc_release(puStack_550);
          _objc_release(puStack_540);
          _objc_release(uStack_548);
          _objc_release(param_6);
          _objc_release(param_5);
          puVar11 = puVar10;
LAB_10664be90:
          _objc_release(puVar11);
LAB_10664be98:
          _objc_release(puVar10);
          puVar9 = puStack_530;
          puVar10 = puVar13;
LAB_10664c92c:
          puVar11 = puVar10;
          if (puVar10 != (undefined *)0x0) {
            func_0x00010befa120(puStack_568);
            _objc_release(puVar10);
          }
        }
LAB_10664c944:
        lStack_538 = lStack_538 + 1;
        puVar9 = puVar9 + 1;
      } while (puVar9 != puStack_558);
      puVar9 = puStack_618;
      func_0x00010bf52a60();
      puStack_558 = puVar9;
    } while (puVar9 != (undefined *)0x0);
  }
  puVar10 = puStack_618;
  _objc_release(puStack_618);
  _objc_release(puStack_640);
  _objc_release(puStack_550);
  _objc_release(puStack_540);
  _objc_release(uStack_548);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  puVar9 = puVar10;
  _objc_release();
  puVar13 = puStack_568;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    uVar21 = 0x10664d304;
    ___stack_chk_fail();
    puStack_6f8 = param_6;
SUB_10664d304:
    lStack_710 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar8;
    puStack_700 = unaff_x28;
    puStack_6f0 = param_5;
    puStack_6e8 = unaff_x25;
    puStack_6e0 = puVar20;
    puStack_6d8 = puVar19;
    puStack_6d0 = param_8;
    puStack_6c8 = puVar11;
    puStack_6c0 = param_2;
    puStack_6b8 = puVar10;
    ppuStack_6b0 = &puStack_160;
    uStack_6a8 = uVar21;
    _objc_retain();
    _objc_retain(puVar8);
    lStack_848 = 0;
    uStack_850 = 0;
    uStack_838 = 0;
    plStack_840 = (long *)0x0;
    uStack_828 = 0;
    uStack_830 = 0;
    uStack_818 = 0;
    uStack_820 = 0;
    puVar20 = puVar9;
    puStack_8c8 = puVar9;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puStack_8c0 = puVar20;
    func_0x00010bf52a60();
    puStack_8b0 = puVar20;
    if (puVar20 != (undefined *)0x0) {
      lStack_8b8 = *plStack_840;
      puStack_898 = puVar8;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_840 != lStack_8b8) {
            _objc_enumerationMutation(puStack_8c0);
          }
          puVar19 = *(undefined **)(lStack_848 + (long)puVar9 * 8);
          puVar20 = puVar8;
          puStack_8a8 = puVar9;
          func_0x00010c0f0840();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar20 != (undefined *)0x0) {
            puVar20 = puVar8;
            func_0x00010c0f0840(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c174640(puVar19);
            _objc_release(puVar20);
          }
          puVar20 = puVar8;
          func_0x00010c07f400(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          func_0x00010c1b4a40(puVar19);
          _objc_release(puVar20);
          func_0x00010c0d0280();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar8;
          func_0x00010bf93460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          uStack_868 = 0;
          uStack_870 = 0;
          uStack_858 = 0;
          uStack_860 = 0;
          lStack_888 = 0;
          uStack_890 = 0;
          uStack_878 = 0;
          plStack_880 = (long *)0x0;
          _objc_retain(puVar20);
          puStack_8a0 = puVar20;
          func_0x00010bf52a60();
          if (puVar20 != (undefined *)0x0) {
            lVar12 = *plStack_880;
            do {
              puVar9 = (undefined *)0x0;
              do {
                if (*plStack_880 != lVar12) {
                  _objc_enumerationMutation(puStack_8a0);
                }
                puVar13 = *(undefined **)(lStack_888 + (long)puVar9 * 8);
                puVar8 = puVar13;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar19;
                func_0x00010c0c5180(puVar19);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar8;
                func_0x00010c0720c0();
                if ((int)puVar11 == 0) {
                  puVar7 = puVar13;
                  func_0x00010c241220();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar19;
                  func_0x00010bf3cf60();
                  _objc_retainAutoreleasedReturnValue();
                  param_8 = puVar7;
                  func_0x00010c0720c0();
                  _objc_release(puVar11);
                  _objc_release(puVar7);
                  _objc_release(puVar10);
                  _objc_release(puVar8);
                  if ((int)param_8 != 0) goto LAB_10664d564;
                }
                else {
                  _objc_release(puVar10);
                  _objc_release(puVar8);
LAB_10664d564:
                  puVar11 = puVar13;
                  func_0x00010bf93440(puVar13);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c182260(puVar19);
                  _objc_release(puVar11);
                  puVar8 = puStack_898;
                  func_0x00010c0d0280();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar8;
                  func_0x00010c243400();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c182240(puVar19);
                  _objc_release(puVar11);
                  _objc_release(puVar8);
                  func_0x00010bf4dac0(puVar13);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c182280(puVar19);
                  _objc_release(puVar13);
                }
                puVar9 = puVar9 + 1;
              } while (puVar20 != puVar9);
              puVar20 = puStack_8a0;
              func_0x00010bf52a60();
            } while (puVar20 != (undefined *)0x0);
          }
          puVar20 = puStack_8a0;
          _objc_release(puStack_8a0);
          _objc_release(puVar20);
          puVar8 = puStack_898;
          puVar9 = puStack_8a8 + 1;
        } while (puVar9 != puStack_8b0);
        puVar20 = puStack_8c0;
        func_0x00010bf52a60();
        puStack_8b0 = puVar20;
      } while (puVar20 != (undefined *)0x0);
    }
    _objc_release(puStack_8c0);
    puVar20 = puVar8;
    _objc_release();
    puVar13 = puStack_8c8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_710) {
      ___stack_chk_fail();
      pcStack_8d8 = FUN_10664d6b0;
      puVar19 = puVar6;
      puStack_900 = param_8;
      puStack_8f8 = puVar11;
      puStack_8f0 = puVar8;
      puStack_8e8 = puVar9;
      pppuStack_8e0 = &ppuStack_6b0;
      _objc_retain(puVar6);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uStack_908 = puVar20[0x58];
      uVar15 = *(undefined8 *)(puVar20 + 0x20);
      _objc_retain(uVar15);
      uVar16 = *(undefined8 *)(puVar20 + 0x28);
      _objc_retain(uVar16);
      uVar17 = *(undefined8 *)(puVar20 + 0x30);
      _objc_retain(uVar17);
      uVar18 = *(undefined8 *)(puVar20 + 0x38);
      _objc_retain(uVar18);
      _objc_retain(puVar6);
      uStack_910 = *(undefined8 *)(puVar20 + 0x50);
      _objc_copyWeak(auStack_918,puVar20 + 0x48);
      uVar21 = *(undefined8 *)(puVar20 + 0x40);
      _objc_retain(uVar21);
      func_0x00010c0f7fc0(puVar19);
      _objc_release(puVar19);
      _objc_release(uVar21);
      _objc_destroyWeak(auStack_918);
      _objc_release(puVar6);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10664d6b0; end: 10664d807;  */

void FUN_10664d6b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = *(undefined1 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  _objc_retain(param_2);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10664d808; end: 10664da47;  */

undefined8 **** FUN_10664d808(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  undefined **ppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***in_x4;
  undefined8 ***in_x5;
  undefined8 ***in_x6;
  undefined8 ***in_x7;
  undefined8 ***unaff_x22;
  undefined8 unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined8 **unaff_x26;
  undefined8 **unaff_x27;
  undefined **unaff_x28;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 **ppuStack_170;
  undefined8 ***pppuStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    ppppuVar5 = *(undefined8 *****)(param_1 + 0x20);
    FUN_106651388();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_128 = (undefined8 ***)0x0;
    ppuStack_130 = (undefined8 ***)0x0;
    uStack_118 = 0;
    ppuStack_120 = (undefined8 ***)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    pppuVar10 = *(undefined8 ****)(param_1 + 0x20);
    _objc_retain(pppuVar10);
    in_x4 = (undefined8 ***)0x10;
    ppuStack_138 = pppuVar10;
    func_0x00010bf52a60();
    if (pppuVar10 != (undefined8 ***)0x0) {
      unaff_x22 = (undefined8 ***)0x0;
      unaff_x27 = (undefined8 **)*ppuStack_120;
      unaff_x28 = &PTR_PTR_1126cc000;
      unaff_x24 = &PTR____CFConstantStringClassReference_110e52f18;
      do {
        pppuVar11 = (undefined8 ***)0x0;
        do {
          if ((undefined8 **)*ppuStack_120 != unaff_x27) {
            _objc_enumerationMutation(ppuStack_138);
          }
          unaff_x25 = PTR_PTR_1126cc1e8;
          unaff_x26 = (undefined8 **)ppuStack_128[(long)pppuVar11];
          func_0x00010bf935c0();
          _objc_retainAutoreleasedReturnValue();
          in_x6 = *(undefined8 ****)(param_1 + 0x28);
          in_x5 = unaff_x22;
          func_0x00010bdc3a20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          if (unaff_x25 == (undefined *)0x0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110dad2d8;
          }
          else {
            func_0x00010befa120(ppppuVar6);
            ppuVar9 = &PTR____CFConstantStringClassReference_110dab0d8;
          }
          func_0x000108f37f40(*(undefined8 *)(param_1 + 0x30),ppuVar9,
                              &PTR____CFConstantStringClassReference_110e52f18,1);
          unaff_x22 = (undefined8 ***)((long)unaff_x22 + 1);
          _objc_release(unaff_x25);
          pppuVar11 = (undefined8 ***)((long)pppuVar11 + 1);
        } while (pppuVar10 != pppuVar11);
        in_x4 = (undefined8 ***)0x10;
        pppuVar10 = (undefined8 ***)ppuStack_138;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (pppuVar10 != (undefined8 ***)0x0);
    }
    _objc_release(ppuStack_138);
    ppppuVar5 = ppppuVar6;
    func_0x00010bf51e00();
    func_0x00010c066720(*(undefined8 *)(param_1 + 0x38));
    _objc_release(ppppuVar6);
  }
  pppuVar11 = (undefined8 ***)0x0;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
            (*(long *)(param_1 + 0x48),ppppuVar5,*(undefined8 *)(param_1 + 0x58));
  lVar7 = param_1 + 0x50;
  _objc_loadWeakRetained();
  pppuVar10 = *(undefined8 ****)(param_1 + 0x40);
  func_0x00010c283ba0();
  _objc_release(lVar7);
  ppppuVar6 = ppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppuVar6;
  }
  ___stack_chk_fail();
  ppuVar4 = ppuStack_120;
  ppuVar3 = ppuStack_128;
  ppuVar2 = ppuStack_130;
  ppuVar1 = ppuStack_138;
  pcStack_148 = FUN_10664da48;
  ppuStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  ppuStack_170 = unaff_x22;
  pppuStack_168 = ppppuVar5;
  lStack_160 = lVar7;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar10);
  _objc_retain(pppuVar11);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(ppuStack_140);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar4);
  puStack_1a8 = PTR_PTR_1126f2338;
  ppppuVar5 = &pppuStack_1b0;
  pppuStack_1b0 = ppppuVar6;
  _objc_msgSendSuper2(ppppuVar5,PTR_s_init_1125d9248);
  if (ppppuVar5 != (undefined8 ****)0x0) {
    _objc_retain(pppuVar10);
    pppuVar8 = ppppuVar5[1];
    ppppuVar5[1] = pppuVar10;
    _objc_release(pppuVar8);
    _objc_retain(pppuVar11);
    pppuVar8 = ppppuVar5[2];
    ppppuVar5[2] = pppuVar11;
    _objc_release(pppuVar8);
    _objc_retain(in_x4);
    pppuVar8 = ppppuVar5[3];
    ppppuVar5[3] = in_x4;
    _objc_release(pppuVar8);
    _objc_retain(in_x5);
    pppuVar8 = ppppuVar5[4];
    ppppuVar5[4] = in_x5;
    _objc_release(pppuVar8);
    _objc_retain(in_x6);
    pppuVar8 = ppppuVar5[5];
    ppppuVar5[5] = in_x6;
    _objc_release(pppuVar8);
    _objc_retain(in_x7);
    pppuVar8 = ppppuVar5[6];
    ppppuVar5[6] = in_x7;
    _objc_release(pppuVar8);
    _objc_retain(ppuStack_140);
    pppuVar8 = ppppuVar5[7];
    ppppuVar5[7] = (undefined8 ***)ppuStack_140;
    _objc_release(pppuVar8);
    _objc_retain(ppuVar1);
    pppuVar8 = ppppuVar5[8];
    ppppuVar5[8] = (undefined8 ***)ppuVar1;
    _objc_release(pppuVar8);
    _objc_retain(ppuVar2);
    pppuVar8 = ppppuVar5[9];
    ppppuVar5[9] = (undefined8 ***)ppuVar2;
    _objc_release(pppuVar8);
    _objc_retain(ppuVar3);
    pppuVar8 = ppppuVar5[10];
    ppppuVar5[10] = (undefined8 ***)ppuVar3;
    _objc_release(pppuVar8);
    _objc_retain(ppuVar4);
    pppuVar8 = ppppuVar5[0xb];
    ppppuVar5[0xb] = (undefined8 ***)ppuVar4;
    _objc_release(pppuVar8);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuStack_140);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(pppuVar11);
  _objc_release(pppuVar10);
  return ppppuVar5;
}



/* Entry: 10664da48; end: 10664dcc7; -[SCImpalaStoryPlayerCreator initWithUserSession:navigationServices:circumstanceEngine:storyPlayerPresenterCreator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:creatorSettingsDataFetcher:readReceiptCoordinator:publicStoryDataProvider:adConfigProvider:discoverFeedEventsController:] */

undefined8 *
FUN_10664da48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f2338;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10664dcc8; end: 10664dd1b; -[SCImpalaStoryPlayerCreator createImpalaStoryPlayerPlaying] */

void FUN_10664dcc8(void)

{
  _objc_alloc(PTR_PTR_1126cc1e8);
  func_0x00010c05df20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10664dd1c; end: 10664ddb7; -[SCImpalaStoryPlayerCreator .cxx_destruct] */

void FUN_10664dd1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10664ddb8; end: 10664df7b;  */

void FUN_10664ddb8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar5 == (undefined *)0x0) {
      ppuVar6 = (undefined **)PTR_PTR_1126b6410;
      _objc_alloc();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      func_0x00010c020580(0);
      goto LAB_10664df30;
    }
  }
  puVar2 = PTR_PTR_1126b6400;
  _objc_alloc();
  func_0x00010c036b60();
  puVar3 = PTR_PTR_1126b6408;
  _objc_opt_new();
  func_0x00010c16f460();
  func_0x00010c1cb360(puVar3);
  ppuVar6 = (undefined **)PTR_PTR_1126b6410;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c020580(0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_10664df30:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_68 = FUN_10664df7c;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar11 = uVar10;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(uVar10);
    _objc_retain(puVar1);
    puVar3 = param_1;
    func_0x00010bfd7060();
    if (((ulong)puVar3 & 1) == 0) {
      ppuVar6 = (undefined **)PTR_PTR_1126b6410;
      _objc_alloc(PTR_PTR_1126b6410);
      func_0x00010c020580(0);
    }
    else {
      puVar2 = param_1;
      func_0x00010bfa3740(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x000108f52130();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar3 = PTR_PTR_1126b4bb0;
      puVar2 = param_1;
      func_0x00010bfa36a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_retain(puVar3);
      puVar2 = puVar3;
      func_0x00010bf53960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c08fa60();
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar2);
      puVar2 = puVar3;
      if (puVar8 == (undefined *)0x0) {
        puVar5 = puVar3;
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c291e80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c08fa60();
        _objc_release(puVar7);
        _objc_release(puVar5);
        func_0x00010bf5b080(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        if (puVar8 == (undefined *)0x0) {
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c291e80();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010bf53960();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      _objc_release(puVar2);
      _objc_release(puVar3);
      puVar7 = PTR_PTR_1126cc2a8;
      _objc_alloc(PTR_PTR_1126cc2a8);
      func_0x00010c012360();
      puVar2 = puVar3;
      func_0x00010bf5b080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20f6c0(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bf5b080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0b00(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar2);
      func_0x00010c209d20(puVar7);
      puVar8 = PTR_PTR_1126cc2b0;
      _objc_alloc(PTR_PTR_1126cc2b0);
      puVar2 = param_1;
      func_0x00010c2456a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0123a0(puVar8);
      _objc_release(puVar2);
      puVar9 = PTR_PTR_1126b6408;
      _objc_opt_new();
      func_0x00010c16f460();
      func_0x00010c19afa0(puVar9);
      ppuVar6 = (undefined **)PTR_PTR_1126b6410;
      _objc_alloc(PTR_PTR_1126b6410);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar9;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = param_1;
      func_0x00010c020580(0,ppuVar6);
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar3);
      param_1 = puStack_d8;
      _objc_release(puVar4);
    }
    _objc_release(puVar1);
    _objc_release(uVar10);
    puVar3 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      ppuVar6 = &puStack_140;
      pcStack_e8 = FUN_10664e38c;
      puStack_110 = puVar2;
      puStack_108 = puVar1;
      uStack_100 = uVar10;
      puStack_f8 = param_1;
      ppuStack_f0 = &puStack_70;
      _objc_retain();
      _objc_retain(uVar11);
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_10664e438;
      puStack_128 = &UNK_110931978;
      puStack_120 = puVar3;
      uStack_118 = uVar11;
      _objc_retain(uVar11);
      _objc_retain(puVar3);
      _objc_retainBlock(&puStack_140);
      _objc_release(uStack_118);
      _objc_release(puStack_120);
      _objc_release(uVar11);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 10664df7c; end: 10664e38b;  */

void FUN_10664df7c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *unaff_x22;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  ulong uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfd7060();
  if ((uVar1 & 1) == 0) {
    ppuVar8 = (undefined **)PTR_PTR_1126b6410;
    _objc_alloc(PTR_PTR_1126b6410);
    func_0x00010c020580(0);
  }
  else {
    uVar1 = param_1;
    func_0x00010bfa3740(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f52130();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b4bb0;
    uVar1 = param_1;
    func_0x00010bfa36a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_retain(puVar3);
    puVar4 = puVar3;
    func_0x00010bf53960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    if (puVar7 == (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08fa60();
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010bf5b080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      if (puVar7 == (undefined *)0x0) {
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c291e80();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bf53960();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126cc2a8;
    _objc_alloc(PTR_PTR_1126cc2a8);
    func_0x00010c012360();
    puVar6 = puVar3;
    func_0x00010bf5b080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c291e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf5b080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0b00(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c209d20(puVar4);
    puVar6 = PTR_PTR_1126cc2b0;
    _objc_alloc(PTR_PTR_1126cc2b0);
    uVar1 = param_1;
    func_0x00010c2456a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0123a0(puVar6);
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126b6408;
    _objc_opt_new();
    func_0x00010c16f460();
    func_0x00010c19afa0(puVar7);
    ppuVar8 = (undefined **)PTR_PTR_1126b6410;
    _objc_alloc(PTR_PTR_1126b6410);
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = param_1;
    func_0x00010c020580(0,ppuVar8);
    _objc_release(unaff_x22);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    param_1 = uStack_78;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  uVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar8 = &puStack_e0;
    pcStack_88 = FUN_10664e38c;
    puStack_b0 = unaff_x22;
    uStack_a8 = param_3;
    uStack_a0 = param_2;
    uStack_98 = param_1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(uVar9);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10664e438;
    puStack_c8 = &UNK_110931978;
    uStack_c0 = uVar1;
    uStack_b8 = uVar9;
    _objc_retain(uVar9);
    _objc_retain(uVar1);
    _objc_retainBlock(&puStack_e0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uVar9);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 10664e38c; end: 10664e437;  */

void FUN_10664e38c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain();
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10664e438;
  puStack_48 = &UNK_110931978;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10664e438; end: 10664e6ff;  */

void FUN_10664e438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = param_2;
  _objc_retain();
  _dispatch_group_create();
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10664e700;
  uStack_80 = 0x10664e710;
  uStack_78 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10664e700;
  uStack_b0 = 0x10664e710;
  uStack_a8 = 0;
  puStack_c8 = &uStack_d0;
  puStack_98 = &uStack_a0;
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10664e718;
  puStack_f0 = &UNK_110931918;
  puStack_e0 = &uStack_a0;
  puStack_d8 = &uStack_d0;
  _objc_retain(uVar2);
  uStack_e8 = uVar2;
  func_0x00010c2a14c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_10664e700;
  uStack_118 = 0x10664e710;
  uStack_110 = 0;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_10664e700;
  uStack_148 = 0x10664e710;
  uStack_140 = 0;
  puStack_160 = &uStack_168;
  puStack_130 = &uStack_138;
  _dispatch_group_enter(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259c00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x10664e7b0;
  puStack_188 = &UNK_110931948;
  puStack_178 = &uStack_138;
  puStack_170 = &uStack_168;
  _objc_retain(uVar2);
  uStack_180 = uVar2;
  func_0x00010c2a14c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar1;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_10664e848;
  puStack_1d8 = &UNK_110899a58;
  puStack_1c0 = &uStack_a0;
  puStack_1b8 = &uStack_138;
  puStack_1b0 = &uStack_168;
  puStack_1a8 = &uStack_d0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_1c8 = param_2;
  _objc_retain(uVar3);
  uStack_1d0 = uVar3;
  _objc_retain(param_2);
  func_0x000100bc0718(uVar2,uVar4,&puStack_1f0);
  _objc_release(uVar4);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_180);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release(uStack_e8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_2);
  _objc_release(uVar2);
  return;
}



/* Entry: 10664e700; end: 10664e717;  */

void FUN_10664e700(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10664e718; end: 10664e847;  */

void FUN_10664e718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10664e848; end: 10664eeab;  */

void FUN_10664e848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    if (puVar1 != (undefined *)0x0) goto LAB_10664e89c;
    lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(lVar14);
    _objc_retain(uVar15);
    _objc_retain(uVar16);
    lVar13 = lVar14;
    func_0x00010bf8d2e0();
    if (lVar13 == 0) {
      puVar10 = PTR_PTR_1126b6410;
      _objc_alloc();
      func_0x00010c020580(0);
    }
    else {
      puVar1 = PTR_PTR_1126cc548;
      _objc_alloc();
      uVar2 = uVar15;
      func_0x00010bf63640(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00fb40();
      _objc_release(uVar2);
      puVar17 = PTR_PTR_1126cc550;
      _objc_alloc();
      lVar13 = lVar14;
      func_0x00010bf63640(lVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00fc00();
      _objc_release(lVar13);
      puVar3 = PTR_PTR_1126b6408;
      _objc_opt_new();
      func_0x00010c16f460();
      func_0x00010c20d480(puVar3);
      puVar10 = PTR_PTR_1126b6410;
      _objc_alloc();
      param_4 = 1;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020580(0);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar17);
      _objc_release(puVar1);
    }
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    lVar13 = *(long *)(param_1 + 0x28);
    pcVar12 = *(code **)(lVar13 + 0x10);
    puVar1 = puVar10;
  }
  else {
LAB_10664e89c:
    lVar13 = *(long *)(param_1 + 0x28);
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = *(code **)(lVar13 + 0x10);
    puVar10 = (undefined *)0x0;
  }
  (*pcVar12)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar10);
  _objc_retain(param_4);
  puVar1 = puVar10;
  func_0x00010c259120(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  func_0x00010c154260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c153ec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  func_0x00010848095c(lVar13,0,0,param_4,0,puVar17,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar17);
  if (lVar11 != 0) {
    puVar17 = puVar10;
    func_0x00010bf421c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar17;
    func_0x00010c23ae00();
    _objc_release(puVar17);
    if ((int)puVar3 != 0) {
      puVar17 = puVar10;
      func_0x00010bf421c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23ae00();
      _objc_release(puVar17);
      lVar14 = lVar11;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar14;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      lVar14 = lVar11;
      func_0x00010c25b720();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      if ((lVar6 != 0) && (lVar14 == 0xd)) {
        lVar14 = lVar13;
        func_0x00010c23cdc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07dce0();
        _objc_release(lVar14);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar17 = puVar10;
      func_0x00010bf421c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar17;
      func_0x00010bf41f00();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
LAB_10664edb4:
        _objc_release(puVar17);
      }
      else {
        puVar7 = puVar10;
        func_0x00010bf421c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf41f00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf41ee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar17);
        if (puVar9 != (undefined *)0x0) {
          puVar17 = puVar10;
          func_0x00010bf421c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar17;
          func_0x00010bf41f00();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          func_0x00010c0f3b40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          _objc_release(puVar17);
          if (puVar7 != (undefined *)0x0) {
            puVar17 = puVar10;
            func_0x00010bf421c0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar17;
            func_0x00010bf41f00();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            func_0x00010c0f3b40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(puVar7);
            _objc_release(puVar4);
            _objc_release(puVar17);
          }
          puVar17 = puVar10;
          func_0x00010bf421c0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar17;
          func_0x00010bf41f00();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          func_0x00010bf41ee0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar7);
          _objc_release(puVar4);
          goto LAB_10664edb4;
        }
      }
      puVar4 = puVar3;
      func_0x00010bf51e00();
      puVar7 = PTR_PTR_1126b6018;
      _objc_alloc(PTR_PTR_1126b6018);
      func_0x00010c00a1a0();
      puVar17 = PTR_PTR_1126cc558;
      _objc_alloc(PTR_PTR_1126cc558);
      func_0x00010c001000();
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar5);
      goto LAB_10664ee68;
    }
  }
  puVar17 = (undefined *)0x0;
LAB_10664ee68:
  _objc_release(lVar11);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10664eeac; end: 10664ef0b;  */

bool FUN_10664eeac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c259120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 4;
}



/* Entry: 10664ef0c; end: 10664f0b7; -[SCImpalaStoryPlayerPlaylistFetcher initWithDataModelProvider:dataProvider:readReceiptCoordinator:publicStoryDataProvider:playbackOptions:discoverFeedDataMutator:circumstanceEngine:playableViewModelGenerator:] */

undefined1 *
FUN_10664ef0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f2340;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10664f0b8; end: 10664f11b; -[SCImpalaStoryPlayerPlaylistFetcher _resolveWithDataModels:startingIndex:error:] */

void FUN_10664f0b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x20) = param_4;
    if (*(long *)(param_1 + 0x18) == 0) {
      return;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setLoadingState__112586f30,uVar1);
  return;
}



/* Entry: 10664f11c; end: 10664f163; -[SCImpalaStoryPlayerPlaylistFetcher _setLoadingState:] */

void FUN_10664f11c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x10) = param_3;
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10664f164; end: 10664f227; -[SCImpalaStoryPlayerPlaylistFetcher fetchPlaylist] */

void FUN_10664f164(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (1 < *(long *)(param_1 + 0x10) - 1U) {
    func_0x00010bea5620(param_1,param_2,1);
    _objc_initWeak(auStack_28,param_1);
    lVar1 = *(long *)(param_1 + 8);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10664f228;
    puStack_38 = &UNK_1109319d8;
    _objc_copyWeak(auStack_30,auStack_28);
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10664f228; end: 10664f5af;  */

void FUN_10664f228(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar7 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    if (param_4 == 0) {
      uVar1 = *(undefined8 *)(lVar7 + 0x28);
      uVar4 = *(undefined8 *)(lVar7 + 0x30);
      uVar14 = *(undefined8 *)(lVar7 + 0x38);
      uVar2 = *(undefined8 *)(lVar7 + 0x48);
      uVar5 = *(undefined8 *)(lVar7 + 0x50);
      uVar3 = *(undefined8 *)(lVar7 + 0x58);
      uVar6 = *(undefined8 *)(lVar7 + 0x60);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_d8 = FUN_10664f5b0;
      puStack_d0 = &UNK_110860160;
      uStack_e0 = 0xc2000000;
      _objc_copyWeak(auStack_c0,param_1 + 0x20);
      uStack_b8 = param_3;
      _objc_retain(param_2);
      lStack_c8 = param_2;
      _objc_retain(param_2);
      _objc_retain(uVar1);
      _objc_retain(uVar4);
      _objc_retain(uVar14);
      _objc_retain(uVar2);
      _objc_retain(uVar5);
      _objc_retain(uVar3);
      _objc_retain(uVar6);
      _objc_retain(&puStack_e8);
      lVar8 = param_2;
      func_0x00010bf529e0();
      if (lVar8 != 0) {
        lVar8 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126cc560;
        _objc_opt_class(PTR_PTR_1126cc560);
        lVar10 = lVar8;
        _objc_opt_isKindOfClass(lVar8,puVar9);
        _objc_release(lVar8);
        lVar11 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126c2098;
        _objc_opt_class(PTR_PTR_1126c2098);
        lVar12 = lVar11;
        _objc_opt_isKindOfClass(lVar11,puVar9);
        lVar13 = lVar11;
        _objc_release(lVar11);
        if (((uint)lVar10 & (uint)(lVar8 != 0)) == 1) {
          lVar13 = param_2;
          FUN_106650718(param_2,param_3,uVar1,uVar2,uVar5,uVar3);
          _objc_retainAutoreleasedReturnValue();
          (*pcStack_d8)(&puStack_e8,lVar13);
        }
        else if (((uint)lVar12 & (uint)(lVar11 != 0)) == 1) {
          lVar13 = param_2;
          func_0x000106651038(param_2,uVar4,uVar6);
          _objc_retainAutoreleasedReturnValue();
          (*pcStack_d8)(&puStack_e8,lVar13);
        }
        else {
          _dispatch_group_create();
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0xc2000000;
          pcStack_a0 = FUN_106651844;
          puStack_98 = &UNK_11084a9e8;
          _objc_retain(param_2);
          lStack_90 = param_2;
          _objc_retain(uVar14);
          uStack_88 = uVar14;
          _objc_retain(&puStack_e8);
          ppuStack_80 = &puStack_e8;
          func_0x000104c62d88(lVar13,PTR___dispatch_main_q_11034be20,&puStack_b0);
          _objc_release(ppuStack_80);
          _objc_release(uStack_88);
          _objc_release(lStack_90);
        }
        _objc_release(lVar13);
      }
      _objc_release(&puStack_e8);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar14);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(param_2);
      _objc_release(lStack_c8);
      _objc_destroyWeak(auStack_c0);
    }
    else {
      func_0x00010be94ec0(lVar7);
    }
  }
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10664f5b0; end: 10664f6fb;  */

void FUN_10664f5b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  if (param_2 == 0) {
    func_0x00010bf63ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (lVar2 == 0) {
      _objc_retain(uVar3);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be94ec0();
      _objc_release(uVar3);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10664f6fc;
      puStack_50 = &UNK_1109319a8;
      _objc_retain(lVar2);
      lStack_48 = lVar2;
      func_0x000100504554(uVar3,&puStack_68);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be94ec0();
      _objc_release(param_1);
      _objc_release(uVar3);
      param_1 = lStack_48;
    }
    _objc_release(param_1);
  }
  else {
    func_0x00010be94ec0(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10664f6fc; end: 10664f707;  */

void FUN_10664f6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010664f704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10664f708; end: 10664f76f; -[SCImpalaStoryPlayerPlaylistFetcher currentLoadingProperties] */

void FUN_10664f708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2340;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d280(puVar1,param_2,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10664f770; end: 10664f797; -[SCImpalaStoryPlayerPlaylistFetcher resolvedDataModels] */

void FUN_10664f770(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10664f798; end: 10664f7fb; -[SCImpalaStoryPlayerPlaylistFetcher firstDisplayGroupDataModel] */

void FUN_10664f798(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (uVar1 < uVar3) {
      uVar1 = *(ulong *)(param_1 + 0x18);
      uVar3 = *(ulong *)(param_1 + 0x20);
      uVar4 = uVar1;
      func_0x00010bf529e0();
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      func_0x00010c0dfd40(uVar1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10664f7fc; end: 10664f803; -[SCImpalaStoryPlayerPlaylistFetcher loadingState] */

undefined8 FUN_10664f7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10664f804; end: 10664fb6b;  */

/* WARNING: Possible PIC construction at 0x000106650178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010665017c) */

void FUN_10664f804(undefined *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **unaff_x19;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined **unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined **unaff_x21;
  undefined **ppuVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined **unaff_x22;
  undefined **ppuVar17;
  undefined **unaff_x23;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **unaff_x24;
  undefined **ppuVar22;
  undefined **unaff_x25;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  code *unaff_x30;
  double dVar28;
  double unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = param_2;
    _objc_retain();
    *(undefined ***)((long)register0x00000008 + -0x240) = param_2;
    _objc_retain(param_2);
    *(undefined8 *)((long)register0x00000008 + -0x248) = param_3;
    _objc_retain(param_3);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined8 *)((long)register0x00000008 + -400) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
    _objc_retain(param_1);
    *(undefined **)((long)register0x00000008 + -0x228) = param_1;
    func_0x00010bf52a60();
    ppuVar23 = unaff_x25;
    ppuVar25 = unaff_x27;
    ppuVar21 = unaff_x28;
    if (param_1 != (undefined *)0x0) {
      lVar12 = **(long **)((long)register0x00000008 + -0x1a0);
      *(long *)((long)register0x00000008 + -0x238) = lVar12;
      do {
        puVar9 = (undefined *)0x0;
        *(undefined **)((long)register0x00000008 + -0x230) = param_1;
        do {
          if (**(long **)((long)register0x00000008 + -0x1a0) != lVar12) {
            _objc_enumerationMutation(*(undefined8 *)((long)register0x00000008 + -0x228));
          }
          ppuVar8 = (undefined **)PTR_PTR_1126c6d90;
          ppuVar23 = *(undefined ***)
                      (*(long *)((long)register0x00000008 + -0x1a8) + (long)puVar9 * 8);
          _objc_retain(ppuVar23);
          _objc_opt_class();
          ppuVar14 = ppuVar23;
          _objc_opt_isKindOfClass();
          ppuVar22 = ppuVar23;
          if (((ulong)ppuVar14 & 1) == 0) {
            ppuVar22 = (undefined **)0x0;
          }
          _objc_retain(ppuVar22);
          _objc_release(ppuVar23);
          if (ppuVar22 != (undefined **)0x0) {
            unaff_x26 = ppuVar23;
            func_0x00010c258040();
            _objc_retainAutoreleasedReturnValue();
            ppuVar25 = unaff_x26;
            func_0x00010bf529e0();
            _objc_release(unaff_x26);
            if (ppuVar25 != (undefined **)0x0) {
              *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
              func_0x00010c258040();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = ppuVar23;
              func_0x00010bf52a60();
              if (ppuVar14 != (undefined **)0x0) {
                lVar12 = **(long **)((long)register0x00000008 + -0x1e0);
                do {
                  ppuVar18 = (undefined **)0x0;
                  do {
                    if (**(long **)((long)register0x00000008 + -0x1e0) != lVar12) {
                      _objc_enumerationMutation(ppuVar23);
                    }
                    ppuVar25 = *(undefined ***)
                                (*(long *)((long)register0x00000008 + -0x1e8) + (long)ppuVar18 * 8);
                    ppuVar21 = ppuVar25;
                    func_0x00010be36bc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar19 = ppuVar21;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar21);
                    if (ppuVar19 != (undefined **)0x0) {
                      ppuVar19 = ppuVar25;
                      func_0x00010be36bc0(ppuVar25);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(ppuVar3);
                      _objc_release(ppuVar19);
                    }
                    ppuVar18 = (undefined **)((long)ppuVar18 + 1);
                  } while (ppuVar14 != ppuVar18);
                  ppuVar14 = ppuVar23;
                  func_0x00010bf52a60();
                  unaff_x26 = (undefined **)0x0;
                } while (ppuVar14 != (undefined **)0x0);
              }
              _objc_release(ppuVar23);
              lVar12 = *(long *)((long)register0x00000008 + -0x238);
              param_1 = *(undefined **)((long)register0x00000008 + -0x230);
            }
          }
          _objc_release(ppuVar22);
          puVar9 = puVar9 + 1;
        } while (puVar9 != param_1);
        param_1 = *(undefined **)((long)register0x00000008 + -0x228);
        func_0x00010bf52a60();
      } while (param_1 != (undefined *)0x0);
    }
    lVar10 = *(long *)((long)register0x00000008 + -0x228);
    _objc_release(lVar10);
    ppuVar14 = *(undefined ***)((long)register0x00000008 + -0x240);
    ppuVar18 = ppuVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)register0x00000008 + -0x220) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)register0x00000008 + -0x218) = 0xc2000000;
    *(code **)((long)register0x00000008 + -0x210) = FUN_10664fb6c;
    *(undefined **)((long)register0x00000008 + -0x208) = &UNK_1108846a8;
    ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x248);
    *(undefined ***)((long)register0x00000008 + -0x200) = ppuVar3;
    *(undefined ***)((long)register0x00000008 + -0x1f8) = ppuVar22;
    _objc_retain(ppuVar22);
    _objc_retain(ppuVar3);
    func_0x00010c121840(ppuVar18);
    _objc_release(ppuVar19);
    _objc_release(ppuVar18);
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x1f8));
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x200));
    _objc_release(ppuVar22);
    _objc_release(ppuVar3);
    _objc_release(ppuVar14);
    lVar12 = lVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
      return;
    }
    ___stack_chk_fail();
    unaff_x27 = (undefined **)((long)register0x00000008 + -0x370);
    *(undefined ***)((long)register0x00000008 + -0x2a0) = ppuVar21;
    *(undefined ***)((long)register0x00000008 + -0x298) = ppuVar25;
    *(undefined ***)((long)register0x00000008 + -0x290) = ppuVar22;
    *(undefined ***)((long)register0x00000008 + -0x288) = ppuVar19;
    *(undefined ***)((long)register0x00000008 + -0x280) = ppuVar3;
    *(undefined ***)((long)register0x00000008 + -0x278) = ppuVar14;
    *(undefined ***)((long)register0x00000008 + -0x270) = ppuVar18;
    *(long *)((long)register0x00000008 + -0x268) = lVar10;
    *(undefined1 **)((long)register0x00000008 + -0x260) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -600) = FUN_10664fb6c;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = ppuVar8;
    _objc_retain(ppuVar8);
    dVar28 = 0.0;
    *(undefined8 *)((long)register0x00000008 + -0x368) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x370) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x360) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x350) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
    unaff_x25 = (undefined **)((long)register0x00000008 + -0x328);
    ppuVar18 = (undefined **)0x10;
    ppuVar17 = ppuVar8;
    func_0x00010bf52a60();
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar19 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x360);
      do {
        ppuVar22 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x360) != ppuVar19) {
            _objc_enumerationMutation(ppuVar8);
          }
          ppuVar3 = *(undefined ***)(lVar12 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c222e60();
          _objc_release(ppuVar3);
          ppuVar22 = (undefined **)((long)ppuVar22 + 1);
        } while (ppuVar17 != ppuVar22);
        unaff_x25 = (undefined **)((long)register0x00000008 + -0x328);
        ppuVar18 = (undefined **)0x10;
        ppuVar17 = ppuVar8;
        unaff_x27 = (undefined **)((long)register0x00000008 + -0x370);
        func_0x00010bf52a60();
        ppuVar14 = (undefined **)0x0;
      } while (ppuVar17 != (undefined **)0x0);
    }
    if (*(long *)(lVar12 + 0x28) != 0) {
      ppuVar7 = (undefined **)0x0;
      (**(code **)(*(long *)(lVar12 + 0x28) + 0x10))();
    }
    unaff_x28 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x2a8)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x3e0) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x3d8) = unaff_d8;
    *(undefined ***)((long)register0x00000008 + -0x3d0) = ppuVar21;
    *(undefined ***)((long)register0x00000008 + -0x3c8) = ppuVar25;
    *(undefined ***)((long)register0x00000008 + -0x3c0) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x3b8) = ppuVar23;
    *(undefined ***)((long)register0x00000008 + -0x3b0) = ppuVar22;
    *(undefined ***)((long)register0x00000008 + -0x3a8) = ppuVar19;
    *(undefined ***)((long)register0x00000008 + -0x3a0) = ppuVar3;
    *(undefined ***)((long)register0x00000008 + -0x398) = ppuVar14;
    *(long *)((long)register0x00000008 + -0x390) = lVar12;
    *(undefined ***)((long)register0x00000008 + -0x388) = ppuVar8;
    *(undefined1 **)((long)register0x00000008 + -0x380) =
         (undefined1 *)((long)register0x00000008 + -0x260);
    *(code **)((long)register0x00000008 + -0x378) = FUN_10664fc9c;
    puVar27 = (undefined1 *)((long)register0x00000008 + -0x380);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x570);
    *(undefined8 *)((long)register0x00000008 + -0x3f0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = unaff_x27;
    _objc_retain(unaff_x27);
    ppuVar25 = unaff_x27;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252020(unaff_x27);
    ppuVar21 = ppuVar25;
    func_0x00010bf529e0();
    if (ppuVar21 == (undefined **)0x0) {
      unaff_x23 = (undefined **)0x0;
      ppuVar21 = param_6;
LAB_1066506c4:
      _objc_release(ppuVar25);
      unaff_x24 = unaff_x27;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x3f0))
      {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
        return;
      }
      ___stack_chk_fail();
      *(undefined ***)((long)register0x00000008 + -0x5d0) = unaff_x28;
      *(undefined ***)((long)register0x00000008 + -0x5c8) = unaff_x27;
      *(undefined ***)((long)register0x00000008 + -0x5c0) = unaff_x26;
      *(undefined ***)((long)register0x00000008 + -0x5b8) = ppuVar23;
      *(undefined ***)((long)register0x00000008 + -0x5b0) = ppuVar22;
      *(undefined ***)((long)register0x00000008 + -0x5a8) = ppuVar19;
      *(undefined ***)((long)register0x00000008 + -0x5a0) = ppuVar3;
      *(undefined ***)((long)register0x00000008 + -0x598) = ppuVar14;
      *(undefined ***)((long)register0x00000008 + -0x590) = ppuVar25;
      *(undefined ***)((long)register0x00000008 + -0x588) = unaff_x23;
      *(undefined1 **)((long)register0x00000008 + -0x580) = puVar27;
      *(code **)((long)register0x00000008 + -0x578) = FUN_106650718;
      puVar27 = (undefined1 *)((long)register0x00000008 + -0x580);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x890);
      *(undefined8 *)((long)register0x00000008 + -0x5e0) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      unaff_x20 = ppuVar7;
      param_6 = ppuVar21;
      _objc_retain();
      *(undefined ***)((long)register0x00000008 + -0x858) = ppuVar8;
      _objc_retain(ppuVar8);
      _objc_retain(unaff_x25);
      _objc_retain(ppuVar18);
      *(undefined ***)((long)register0x00000008 + -0x850) = ppuVar21;
      _objc_retain(ppuVar21);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      *(undefined **)((long)register0x00000008 + -0x848) = puVar9;
      ppuVar8 = unaff_x25;
      func_0x00010c259120();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x868) = ppuVar8;
      *(undefined8 *)((long)register0x00000008 + -0x7e8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7f0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7d8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7e0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7c8) = 0;
      *(undefined8 *)((long)register0x00000008 + -2000) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7c0) = 0;
      _objc_retain(unaff_x24);
      unaff_x21 = (undefined **)((long)register0x00000008 + -0x7f0);
      ppuVar25 = unaff_x24;
      func_0x00010bf52a60();
      ppuVar8 = &PTR_PTR_1126cc000;
      if (ppuVar25 != (undefined **)0x0) {
        lVar12 = **(long **)((long)register0x00000008 + -0x7e0);
        do {
          ppuVar3 = (undefined **)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x7e0) != lVar12) {
              _objc_enumerationMutation(unaff_x24);
            }
            unaff_x20 = (undefined **)PTR_PTR_1126cc560;
            uVar16 = *(ulong *)(*(long *)((long)register0x00000008 + -0x7e8) + (long)ppuVar3 * 8);
            _objc_retain(uVar16);
            _objc_opt_class();
            uVar6 = uVar16;
            _objc_opt_isKindOfClass();
            uVar1 = uVar16;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar16);
            if (uVar1 != 0) {
              func_0x00010bf935c0(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x848));
              _objc_release(uVar16);
            }
            _objc_release(uVar1);
            ppuVar3 = (undefined **)((long)ppuVar3 + 1);
          } while (ppuVar25 != ppuVar3);
          unaff_x21 = (undefined **)((long)register0x00000008 + -0x7f0);
          ppuVar25 = unaff_x24;
          func_0x00010bf52a60();
          ppuVar3 = (undefined **)0x0;
        } while (ppuVar25 != (undefined **)0x0);
      }
      _objc_release(unaff_x24);
      ppuVar25 = unaff_x24;
      func_0x00010bf529e0();
      if (ppuVar7 < ppuVar25) {
        ppuVar21 = unaff_x24;
        unaff_x21 = ppuVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = (undefined **)PTR_PTR_1126cc560;
        _objc_opt_class();
        ppuVar23 = ppuVar21;
        _objc_opt_isKindOfClass();
        ppuVar25 = ppuVar21;
        if (((ulong)ppuVar23 & 1) == 0) {
          ppuVar25 = (undefined **)0x0;
        }
        _objc_retain(ppuVar25);
        _objc_release(ppuVar21);
        ppuVar23 = ppuVar25;
        func_0x00010c0fdbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar9 = PTR_PTR_1126c55c0;
        unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
        if (ppuVar23 != (undefined **)0x0) {
          ppuVar3 = ppuVar25;
          func_0x00010c0fdbe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x21 = ppuVar3;
          func_0x00010c1dcc60(puVar9);
          _objc_release(ppuVar3);
        }
        ppuVar22 = unaff_x27;
        func_0x00010bf529e0();
        ppuVar23 = (undefined **)PTR_PTR_1126b0ef0;
        if (ppuVar22 == (undefined **)0x1) {
          ppuVar3 = unaff_x27;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x7f8) = 0;
          unaff_x21 = ppuVar3;
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = *(undefined ***)((long)register0x00000008 + -0x7f8);
          _objc_release(ppuVar3);
          if (ppuVar8 == (undefined **)0x0) {
            ppuVar3 = unaff_x25;
            func_0x00010bf4de00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010baf2e4c();
            unaff_x21 = ppuVar23;
            func_0x00010c10a000(*(undefined8 *)((long)register0x00000008 + -0x858));
            _objc_release(ppuVar3);
          }
          _objc_release(ppuVar23);
        }
        ppuVar23 = unaff_x27;
        func_0x00010bf529e0();
        if (ppuVar23 == (undefined **)0x0) {
          _objc_retain(unaff_x24);
          unaff_x23 = unaff_x24;
        }
        else {
          *(undefined ***)((long)register0x00000008 + -0x888) = ppuVar25;
          *(undefined ***)((long)register0x00000008 + -0x880) = unaff_x25;
          _objc_retain(unaff_x27);
          *(undefined ***)((long)register0x00000008 + -0x870) = ppuVar18;
          _objc_retain(ppuVar18);
          _objc_retain(ppuVar21);
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x850));
          puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined **)((long)register0x00000008 + -0x860) = puVar9;
          *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
          _objc_retain(unaff_x27);
          ppuVar8 = unaff_x27;
          func_0x00010bf52a60();
          if (ppuVar8 != (undefined **)0x0) {
            ppuVar25 = (undefined **)0x0;
            lVar12 = **(long **)((long)register0x00000008 + -0x790);
            do {
              ppuVar21 = (undefined **)0x0;
              do {
                ppuVar3 = ppuVar25;
                if (**(long **)((long)register0x00000008 + -0x790) != lVar12) {
                  _objc_enumerationMutation(unaff_x27);
                }
                *(undefined ***)((long)register0x00000008 + -0x7a8) = ppuVar3;
                ppuVar23 = (undefined **)PTR_PTR_1126b0ef0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar25 = *(undefined ***)((long)register0x00000008 + -0x7a8);
                _objc_retain(ppuVar25);
                _objc_release(ppuVar3);
                if (((ppuVar25 == (undefined **)0x0) && (ppuVar23 != (undefined **)0x0)) &&
                   (ppuVar22 = ppuVar23, func_0x00010bf31ee0(), (int)ppuVar22 == 0x26)) {
                  ppuVar14 = *(undefined ***)((long)register0x00000008 + -0x868);
                  ppuVar22 = ppuVar14;
                  func_0x00010c154260();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c153ec0(ppuVar14);
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x20 = (undefined **)0x0;
                  ppuVar3 = ppuVar23;
                  param_6 = ppuVar22;
                  func_0x00010848095c(ppuVar23,0,0,
                                      *(undefined8 *)((long)register0x00000008 + -0x850),0,ppuVar22,
                                      ppuVar14);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar14);
                  _objc_release(ppuVar22);
                  if (ppuVar3 != (undefined **)0x0) {
                    func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x860));
                  }
                  _objc_release(ppuVar3);
                  unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
                }
                _objc_release(ppuVar23);
                ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              } while (ppuVar8 != ppuVar21);
              ppuVar8 = unaff_x27;
              func_0x00010bf52a60();
            } while (ppuVar8 != (undefined **)0x0);
            _objc_release(ppuVar25);
            ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
          }
          *(undefined ***)((long)register0x00000008 + -0x878) = unaff_x24;
          _objc_release(unaff_x27);
          ppuVar8 = *(undefined ***)((long)register0x00000008 + -0x870);
          ppuVar25 = ppuVar8;
          func_0x00010c269d40(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x860);
          func_0x00010c28a480();
          _objc_release(ppuVar25);
          _objc_release(uVar13);
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x850);
          _objc_release(uVar13);
          _objc_release(ppuVar21);
          _objc_release(ppuVar8);
          _objc_release(unaff_x27);
          ppuVar7 = (undefined **)PTR_PTR_1126cc568;
          func_0x00010c0f4600();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x858));
          _objc_retain(uVar13);
          *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
          ppuVar25 = ppuVar7;
          func_0x00010bf52a60();
          *(undefined ***)((long)register0x00000008 + -0x860) = ppuVar7;
          if (ppuVar25 != (undefined **)0x0) {
            lVar12 = **(long **)((long)register0x00000008 + -0x790);
            do {
              ppuVar21 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x790) != lVar12) {
                  _objc_enumerationMutation(*(undefined8 *)((long)register0x00000008 + -0x860));
                }
                ppuVar7 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -0x798) + (long)ppuVar21 * 8);
                ppuVar23 = ppuVar7;
                func_0x00010bf454e0(ppuVar7);
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = ppuVar7;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar22 = ppuVar7;
                func_0x00010bf82560(ppuVar7);
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = ppuVar7;
                func_0x00010c245680();
                _objc_retainAutoreleasedReturnValue();
                ppuVar18 = ppuVar7;
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar7;
                func_0x00010c26fe00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c07dce0(ppuVar7);
                ppuVar19 = ppuVar14;
                unaff_x20 = ppuVar18;
                func_0x000107a8673c(ppuVar14,ppuVar18,ppuVar8,ppuVar7,
                                    *(undefined8 *)((long)register0x00000008 + -0x850));
                _objc_retainAutoreleasedReturnValue();
                param_6 = ppuVar19;
                func_0x00010c066de0(*(undefined8 *)((long)register0x00000008 + -0x858));
                _objc_release(ppuVar19);
                _objc_release(ppuVar8);
                _objc_release(ppuVar18);
                _objc_release(ppuVar14);
                _objc_release(ppuVar22);
                _objc_release(ppuVar3);
                _objc_release(ppuVar23);
                ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              } while (ppuVar25 != ppuVar21);
              ppuVar7 = *(undefined ***)((long)register0x00000008 + -0x860);
              ppuVar25 = ppuVar7;
              func_0x00010bf52a60();
            } while (ppuVar25 != (undefined **)0x0);
          }
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x850));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x858));
          ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined8 *)((long)register0x00000008 + -0x838) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x840) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x828) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x830) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x818) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x820) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x808) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x810) = 0;
          _objc_retain(ppuVar7);
          unaff_x21 = (undefined **)((long)register0x00000008 + -0x840);
          ppuVar25 = ppuVar7;
          func_0x00010bf52a60();
          if (ppuVar25 != (undefined **)0x0) {
            ppuVar3 = (undefined **)0x0;
            lVar12 = **(long **)((long)register0x00000008 + -0x830);
            do {
              ppuVar21 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x830) != lVar12) {
                  _objc_enumerationMutation(ppuVar7);
                }
                ppuVar8 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -0x838) + (long)ppuVar21 * 8);
                puVar9 = PTR_PTR_1126b4d28;
                _objc_alloc(PTR_PTR_1126b4d28);
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                param_6 = (undefined **)0x1;
                func_0x00010c04dcc0(puVar9);
                _objc_release(ppuVar8);
                func_0x00010befa120(ppuVar23);
                ppuVar3 = (undefined **)((long)ppuVar3 + 1);
                _objc_release(puVar9);
                ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              } while (ppuVar25 != ppuVar21);
              unaff_x21 = (undefined **)((long)register0x00000008 + -0x840);
              ppuVar25 = ppuVar7;
              func_0x00010bf52a60();
            } while (ppuVar25 != (undefined **)0x0);
          }
          _objc_release(ppuVar7);
          ppuVar25 = ppuVar23;
          func_0x00010bf529e0();
          unaff_x24 = *(undefined ***)((long)register0x00000008 + -0x878);
          if (ppuVar25 == (undefined **)0x0) {
            unaff_x23 = (undefined **)0x0;
          }
          else {
            _objc_retain(ppuVar23);
            unaff_x23 = ppuVar23;
          }
          unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
          ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
          ppuVar25 = *(undefined ***)((long)register0x00000008 + -0x888);
          _objc_release(ppuVar23);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x860));
          unaff_x25 = *(undefined ***)((long)register0x00000008 + -0x880);
          ppuVar18 = *(undefined ***)((long)register0x00000008 + -0x870);
        }
      }
      else {
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
        ppuVar3 = ppuVar21;
        func_0x00010c0f1e60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
        if (ppuVar3 == (undefined **)0x0) {
          unaff_x21 = (undefined **)0xffffffffffffffff;
          ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar25 = ppuVar21;
          func_0x00010c0f1e60();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar3);
        ppuVar23 = ppuVar21;
        func_0x00010c25b720();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar23 == (undefined **)0x0) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e58058;
        }
        else {
          ppuVar3 = ppuVar21;
          func_0x00010c25b720();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar23);
        _objc_release(ppuVar3);
        unaff_x23 = (undefined **)0x0;
      }
      _objc_release(ppuVar25);
      _objc_release(ppuVar21);
      _objc_release(unaff_x27);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x850));
      _objc_release(ppuVar18);
      _objc_release(unaff_x25);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x858));
      unaff_x19 = unaff_x24;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x5e0))
      goto _objc_autoreleaseReturnValue;
      uVar13 = 0x106651038;
      ___stack_chk_fail();
      ppuVar14 = unaff_x23;
      unaff_x26 = ppuVar7;
      unaff_x28 = ppuVar18;
    }
    else {
      ppuVar3 = unaff_x27;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar8;
      func_0x00010c24b8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar8);
      _objc_release(ppuVar3);
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar14 = (undefined **)(long)dVar28;
        _objc_retain(ppuVar25);
        ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(ppuVar25);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4a0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x488) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x490) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x478) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x480) = 0;
        _objc_retain(ppuVar25);
        ppuVar3 = ppuVar25;
        func_0x00010bf52a60();
        ppuVar24 = ppuVar23;
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar24 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0);
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0) != ppuVar24) {
                _objc_enumerationMutation(ppuVar25);
              }
              ppuVar17 = *(undefined ***)
                          (*(long *)((long)register0x00000008 + -0x4a8) + (long)unaff_x26 * 8);
              ppuVar19 = ppuVar17;
              func_0x00010c24b8c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar19 != (undefined **)0x0) {
                func_0x00010c24b8c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(ppuVar22);
                _objc_release(ppuVar17);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (ppuVar3 != unaff_x26);
            ppuVar3 = ppuVar25;
            func_0x00010bf52a60();
          } while (ppuVar3 != (undefined **)0x0);
        }
        _objc_release(ppuVar25);
        _objc_release(ppuVar25);
        ppuVar8 = (undefined **)unaff_x28[5];
        unaff_x25 = (undefined **)unaff_x28[9];
        ppuVar18 = (undefined **)unaff_x28[10];
        param_6 = (undefined **)unaff_x28[0xb];
        unaff_x23 = ppuVar22;
        ppuVar7 = ppuVar14;
        FUN_106650718();
        _objc_retainAutoreleasedReturnValue();
        ppuVar26 = unaff_x27;
LAB_1066506bc:
        _objc_release(ppuVar22);
        ppuVar21 = param_6;
        ppuVar3 = ppuVar17;
        ppuVar23 = ppuVar24;
        unaff_x27 = ppuVar26;
        goto LAB_1066506c4;
      }
      ppuVar8 = unaff_x27;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar14;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x550) = unaff_x28;
      *(undefined ***)((long)register0x00000008 + -0x548) = unaff_x27;
      if (ppuVar3 == (undefined **)0x0) {
        _objc_release(ppuVar14);
        _objc_release(ppuVar8);
LAB_10665019c:
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(unaff_x27);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4a0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x488) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x490) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x478) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x480) = 0;
        _objc_retain(unaff_x27);
        unaff_x25 = (undefined **)((long)register0x00000008 + -0x470);
        ppuVar18 = (undefined **)0x10;
        ppuVar8 = unaff_x27;
        func_0x00010bf52a60();
        *(undefined ***)((long)register0x00000008 + -0x4f0) = ppuVar8;
        unaff_x23 = ppuVar3;
        if (ppuVar8 != (undefined **)0x0) {
          lVar12 = **(long **)((long)register0x00000008 + -0x4a0);
          *(undefined ***)((long)register0x00000008 + -0x538) = ppuVar3;
          *(undefined ***)((long)register0x00000008 + -0x530) = unaff_x27;
          *(long *)((long)register0x00000008 + -0x540) = lVar12;
          do {
            unaff_x28 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x4a0) != lVar12) {
                _objc_enumerationMutation(unaff_x27);
              }
              unaff_x26 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -0x4a8) + (long)unaff_x28 * 8);
              ppuVar8 = unaff_x26;
              func_0x00010c259880();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              ppuVar24 = (undefined **)PTR_PTR_1126c6d90;
              if (ppuVar8 == (undefined **)0x0) {
                ppuVar8 = unaff_x26;
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar8 != (undefined **)0x0) {
                  ppuVar8 = unaff_x26;
                  func_0x00010bfa3780();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar24 = ppuVar8;
                  func_0x00010bfa3760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar8);
                  ppuVar8 = ppuVar24;
                  func_0x00010bfa36c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar8 != (undefined **)0x0) {
                    ppuVar3 = unaff_x26;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar8 = ppuVar3;
                    func_0x00010bf93500();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = ppuVar8;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar8);
                    _objc_release(ppuVar3);
                    puVar9 = PTR_PTR_1126b4bb0;
                    if (ppuVar21 == (undefined **)0x0) {
                      *(undefined8 *)((long)register0x00000008 + -0x500) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x4f8) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x510) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x508) = 0;
                    }
                    else {
                      ppuVar3 = unaff_x26;
                      func_0x00010bfa3780(unaff_x26);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar8 = ppuVar3;
                      func_0x00010bf93500();
                      _objc_retainAutoreleasedReturnValue();
                      *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0;
                      func_0x00010c0f40e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar12 = *(long *)((long)register0x00000008 + -0x4b8);
                      _objc_release(ppuVar8);
                      _objc_release(ppuVar3);
                      if ((lVar12 == 0) &&
                         (puVar11 = puVar9, func_0x00010bfd5f00(), (int)puVar11 != 0)) {
                        puVar4 = puVar9;
                        func_0x00010bf5b080();
                        _objc_retainAutoreleasedReturnValue();
                        puVar11 = puVar4;
                        func_0x00010c2923e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar15 = puVar4;
                        func_0x00010c294420();
                        _objc_retainAutoreleasedReturnValue();
                        puVar20 = puVar4;
                        func_0x00010bf85d80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar4;
                        func_0x00010bfd5f20();
                        if ((int)puVar5 == 0) {
                          puVar5 = (undefined *)0x0;
                        }
                        else {
                          puVar5 = puVar4;
                          func_0x00010bf5b3e0();
                          _objc_retainAutoreleasedReturnValue();
                        }
                        _objc_release(puVar4);
                      }
                      else {
                        puVar11 = (undefined *)0x0;
                        puVar15 = (undefined *)0x0;
                        puVar20 = (undefined *)0x0;
                        puVar5 = (undefined *)0x0;
                      }
                      *(undefined **)((long)register0x00000008 + -0x510) = puVar5;
                      *(undefined **)((long)register0x00000008 + -0x508) = puVar20;
                      *(undefined **)((long)register0x00000008 + -0x500) = puVar15;
                      *(undefined **)((long)register0x00000008 + -0x4f8) = puVar11;
                      _objc_release(puVar9);
                    }
                    *(undefined **)((long)register0x00000008 + -0x520) = PTR_PTR_1126c6d90;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x518) = unaff_x26;
                    func_0x00010bf93680();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x528) = unaff_x26;
                    ppuVar3 = ppuVar24;
                    func_0x00010bfa36c0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar17 = ppuVar24;
                    func_0x00010c2711a0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar14 = ppuVar24;
                    func_0x00010c260dc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar8 = ppuVar24;
                    func_0x00010c0b46a0(ppuVar24);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = ppuVar24;
                    func_0x00010c2520a0(ppuVar24);
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = *(undefined ***)((long)register0x00000008 + -0x510);
                    *(undefined8 *)((long)register0x00000008 + -0x560) =
                         *(undefined8 *)((long)register0x00000008 + -0x508);
                    *(undefined ***)((long)register0x00000008 + -0x558) = unaff_x26;
                    *(undefined8 *)((long)register0x00000008 + -0x570) =
                         *(undefined8 *)((long)register0x00000008 + -0x4f8);
                    *(undefined8 *)((long)register0x00000008 + -0x568) =
                         *(undefined8 *)((long)register0x00000008 + -0x500);
                    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x520);
                    unaff_x25 = ppuVar3;
                    ppuVar18 = ppuVar17;
                    param_6 = ppuVar14;
                    func_0x00010c258680(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar21);
                    _objc_release(ppuVar8);
                    _objc_release(ppuVar14);
                    _objc_release(ppuVar17);
                    _objc_release(ppuVar3);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x528));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x518));
                    ppuVar3 = *(undefined ***)((long)register0x00000008 + -0x538);
                    func_0x00010befa120(ppuVar3);
                    _objc_release(uVar13);
                    _objc_release(unaff_x26);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x508));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x500));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4f8));
                    unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x530);
                    lVar12 = *(long *)((long)register0x00000008 + -0x540);
                  }
                  goto LAB_1066502c0;
                }
              }
              else {
                ppuVar14 = unaff_x26;
                func_0x00010c259880();
                _objc_retainAutoreleasedReturnValue();
                ppuVar17 = ppuVar14;
                func_0x00010bf936c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c258660();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar17);
                _objc_release(ppuVar14);
                if (ppuVar24 == (undefined **)0x0) {
                  _objc_release(unaff_x27);
                  unaff_x23 = (undefined **)0x0;
                  goto LAB_10665062c;
                }
                func_0x00010befa120(ppuVar3);
LAB_1066502c0:
                _objc_release(ppuVar24);
                ppuVar23 = ppuVar24;
              }
              unaff_x28 = (undefined **)((long)unaff_x28 + 1);
            } while (*(undefined ***)((long)register0x00000008 + -0x4f0) != unaff_x28);
            unaff_x25 = (undefined **)((long)register0x00000008 + -0x470);
            ppuVar18 = (undefined **)0x10;
            ppuVar8 = unaff_x27;
            func_0x00010bf52a60();
            *(undefined ***)((long)register0x00000008 + -0x4f0) = ppuVar8;
            unaff_x23 = ppuVar3;
          } while (ppuVar8 != (undefined **)0x0);
        }
        _objc_release(unaff_x27);
        _objc_retain(unaff_x23);
        ppuVar24 = ppuVar23;
        ppuVar3 = unaff_x23;
LAB_10665062c:
        _objc_release(ppuVar3);
        _objc_release(unaff_x27);
        ppuVar3 = unaff_x27;
        _objc_release(unaff_x27);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x4e8) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x4e0) = 0xc2000000;
        *(code **)((long)register0x00000008 + -0x4d8) = FUN_106651374;
        *(undefined **)((long)register0x00000008 + -0x4d0) = &UNK_110841f80;
        _objc_retain(unaff_x23);
        *(undefined ***)((long)register0x00000008 + -0x4c8) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x4c0) =
             *(undefined8 *)((long)register0x00000008 + -0x550);
        ppuVar8 = (undefined **)((long)register0x00000008 + -0x4e8);
        func_0x00010c0f7fc0(ppuVar3);
        _objc_release(ppuVar3);
        _objc_retain(unaff_x23);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4c8));
        ppuVar26 = *(undefined ***)((long)register0x00000008 + -0x548);
        ppuVar19 = unaff_x27;
        ppuVar22 = unaff_x23;
        goto LAB_1066506bc;
      }
      ppuVar21 = unaff_x27;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar21;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar23;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf935c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x25);
      _objc_release(ppuVar23);
      _objc_release(ppuVar21);
      _objc_release(ppuVar3);
      _objc_release(ppuVar14);
      _objc_release(ppuVar8);
      ppuVar17 = ppuVar3;
      ppuVar23 = unaff_x25;
      if (unaff_x26 == (undefined **)0x0) goto LAB_10665019c;
      puVar9 = unaff_x28[0xb];
      _objc_retain(ppuVar25);
      *(undefined **)((long)register0x00000008 + -0x4f0) = puVar9;
      _objc_retain(puVar9);
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar25);
      unaff_x19 = ppuVar8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4a0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x488) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x490) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x478) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x480) = 0;
      _objc_retain(ppuVar25);
      ppuVar23 = ppuVar25;
      func_0x00010bf52a60();
      if (ppuVar23 != (undefined **)0x0) {
        unaff_x27 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0);
        unaff_x28 = &PTR_PTR_1126b0000;
        do {
          ppuVar3 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0) != unaff_x27) {
              _objc_enumerationMutation(ppuVar25);
            }
            ppuVar18 = *(undefined ***)
                        (*(long *)((long)register0x00000008 + -0x4a8) + (long)ppuVar3 * 8);
            ppuVar14 = ppuVar18;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            ppuVar22 = ppuVar14;
            func_0x00010bf935c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(ppuVar14);
            ppuVar21 = (undefined **)PTR_PTR_1126b0ef0;
            ppuVar8 = ppuVar18;
            unaff_x25 = (undefined **)0x0;
            if (ppuVar22 != (undefined **)0x0) {
              func_0x00010bfa3780();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = ppuVar18;
              func_0x00010bf935c0();
              _objc_retainAutoreleasedReturnValue();
              *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0;
              func_0x00010c0f40e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = *(undefined ***)((long)register0x00000008 + -0x4b8);
              _objc_release(unaff_x26);
              _objc_release(ppuVar18);
              if ((ppuVar14 == (undefined **)0x0) && (ppuVar21 != (undefined **)0x0)) {
                ppuVar14 = (undefined **)PTR_PTR_1126b0ef8;
                _objc_alloc();
                *(undefined8 *)((long)register0x00000008 + -0x568) = 0;
                *(undefined1 *)((long)register0x00000008 + -0x570) = 0;
                func_0x00010c03ef40();
                *(undefined8 *)((long)register0x00000008 + -0x570) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x568) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x560) =
                     *(undefined8 *)((long)register0x00000008 + -0x4f0);
                *(undefined8 *)((long)register0x00000008 + -0x558) = 0;
                param_6 = (undefined **)0x0;
                ppuVar18 = ppuVar21;
                func_0x000108482f84(ppuVar21,ppuVar14,0,0,0,0,0,0);
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar18 != (undefined **)0x0) {
                  func_0x00010befa120(unaff_x19);
                }
                _objc_release(ppuVar18);
                _objc_release(ppuVar14);
              }
              _objc_release(ppuVar21);
              ppuVar8 = ppuVar21;
              unaff_x25 = ppuVar18;
            }
            ppuVar3 = (undefined **)((long)ppuVar3 + 1);
          } while (ppuVar23 != ppuVar3);
          ppuVar23 = ppuVar25;
          func_0x00010bf52a60();
          ppuVar21 = (undefined **)0x0;
        } while (ppuVar23 != (undefined **)0x0);
      }
      _objc_release(ppuVar25);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4f0));
      _objc_release(ppuVar25);
      unaff_x20 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x550) + 0x30);
      unaff_x21 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x550) + 0x60);
      uVar13 = 0x10665017c;
      unaff_x24 = unaff_x19;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x170);
    *(undefined ***)(puVar2 + -0x60) = unaff_x28;
    *(undefined ***)(puVar2 + -0x58) = unaff_x27;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = unaff_x25;
    *(undefined ***)(puVar2 + -0x40) = unaff_x24;
    *(undefined ***)(puVar2 + -0x38) = ppuVar21;
    *(undefined ***)(puVar2 + -0x30) = ppuVar3;
    *(undefined ***)(puVar2 + -0x28) = ppuVar14;
    *(undefined ***)(puVar2 + -0x20) = ppuVar25;
    *(undefined ***)(puVar2 + -0x18) = ppuVar8;
    *(undefined1 **)(puVar2 + -0x10) = puVar27;
    *(undefined8 *)(puVar2 + -8) = uVar13;
    unaff_x29 = puVar2 + -0x10;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(unaff_x20);
    _objc_retain(unaff_x21);
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    *(undefined8 *)(puVar2 + -0x128) = 0;
    *(undefined8 *)(puVar2 + -0x130) = 0;
    *(undefined8 *)(puVar2 + -0x118) = 0;
    *(undefined8 *)(puVar2 + -0x120) = 0;
    *(undefined8 *)(puVar2 + -0x108) = 0;
    *(undefined8 *)(puVar2 + -0x110) = 0;
    *(undefined8 *)(puVar2 + -0xf8) = 0;
    *(undefined8 *)(puVar2 + -0x100) = 0;
    _objc_retain(unaff_x19);
    ppuVar3 = unaff_x19;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      unaff_x27 = (undefined **)**(undefined8 **)(puVar2 + -0x120);
      unaff_x28 = &PTR_PTR_1126c2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar2 + -0x120) != unaff_x27) {
            _objc_enumerationMutation(unaff_x19);
          }
          puVar9 = PTR_PTR_1126c2098;
          unaff_x24 = *(undefined ***)(*(long *)(puVar2 + -0x128) + (long)unaff_x26 * 8);
          _objc_retain(unaff_x24);
          _objc_opt_class(puVar9);
          ppuVar8 = unaff_x24;
          _objc_opt_isKindOfClass(unaff_x24,puVar9);
          unaff_x25 = unaff_x24;
          if (((ulong)ppuVar8 & 1) == 0) {
            unaff_x25 = (undefined **)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(unaff_x24);
          if (unaff_x25 != (undefined **)0x0) {
            func_0x00010befa120(unaff_x22);
          }
          _objc_release(unaff_x25);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar3 != unaff_x26);
        ppuVar3 = unaff_x19;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(unaff_x19);
    ppuVar3 = unaff_x22;
    func_0x00010bf529e0();
    if (ppuVar3 == (undefined **)0x0) {
      _objc_retain(unaff_x19);
      unaff_x23 = unaff_x19;
    }
    else {
      func_0x00010c066720(unaff_x20);
      if (unaff_x21 == (undefined **)0x0) {
        unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        ppuVar3 = unaff_x22;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar3;
        func_0x00010c25b720();
        ppuVar25 = ppuVar3;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar8 == (undefined **)0xd) {
          ppuVar8 = ppuVar25;
          func_0x00010bf52680();
          unaff_x28 = ppuVar25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar25;
          func_0x00010c298be0();
          *(undefined ***)(puVar2 + -0x168) = unaff_x28;
          *(undefined ***)(puVar2 + -0x160) = ppuVar21;
          *(undefined ***)(puVar2 + -0x170) = ppuVar8;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          unaff_x27 = (undefined **)0x6;
        }
        else {
          unaff_x26 = ppuVar25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = (undefined **)0x1;
        }
        _objc_release(ppuVar25);
        unaff_x25 = (undefined **)PTR_PTR_1126b4d28;
        _objc_alloc();
        param_6 = (undefined **)0x1;
        func_0x00010c04dcc0();
        func_0x00010befa120(unaff_x23);
        _objc_release(unaff_x25);
        _objc_release(unaff_x26);
        unaff_x24 = ppuVar3;
      }
      else {
        *(undefined **)(puVar2 + -0x158) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(puVar2 + -0x150) = 0xc2000000;
        *(code **)(puVar2 + -0x148) = FUN_106651998;
        *(undefined **)(puVar2 + -0x140) = &UNK_110931a08;
        _objc_retain(unaff_x21);
        *(undefined ***)(puVar2 + -0x138) = unaff_x21;
        unaff_x23 = unaff_x22;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = *(undefined ***)(puVar2 + -0x138);
      }
      _objc_release(ppuVar3);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    ppuVar3 = unaff_x19;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70))
    goto _objc_autoreleaseReturnValue;
    unaff_x30 = FUN_106651374;
    ___stack_chk_fail();
    param_1 = ppuVar3[4];
    param_2 = *(undefined ***)(ppuVar3[5] + 0x38);
    param_3 = 0;
    unaff_d8 = dVar28;
  } while( true );
}



/* Entry: 10664fb6c; end: 10664fc9b;  */

/* WARNING: Possible PIC construction at 0x000106650178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010665017c) */

void FUN_10664fb6c(long param_1,undefined **param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **in_x5;
  undefined *puVar13;
  long unaff_x19;
  undefined **unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **unaff_x21;
  undefined *puVar17;
  ulong uVar18;
  undefined **unaff_x22;
  undefined **ppuVar19;
  undefined **unaff_x23;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar26;
  code *unaff_x30;
  double dVar27;
  double unaff_d8;
  undefined8 unaff_d9;
  
  do {
    ppuVar21 = (undefined **)((long)register0x00000008 + -0x120);
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = param_2;
    _objc_retain(param_2);
    dVar27 = 0.0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    ppuVar25 = (undefined **)((long)register0x00000008 + -0xd8);
    ppuVar12 = (undefined **)0x10;
    ppuVar24 = param_2;
    func_0x00010bf52a60();
    if (ppuVar24 != (undefined **)0x0) {
      unaff_x23 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x110);
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x110) != unaff_x23) {
            _objc_enumerationMutation(param_2);
          }
          unaff_x22 = *(undefined ***)(param_1 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c222e60();
          _objc_release(unaff_x22);
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar24 != unaff_x24);
        ppuVar25 = (undefined **)((long)register0x00000008 + -0xd8);
        ppuVar12 = (undefined **)0x10;
        ppuVar24 = param_2;
        ppuVar21 = (undefined **)((long)register0x00000008 + -0x120);
        func_0x00010bf52a60();
        unaff_x21 = (undefined **)0x0;
      } while (ppuVar24 != (undefined **)0x0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      ppuVar8 = (undefined **)0x0;
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    ppuVar24 = param_2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -400) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x188) = unaff_d8;
    *(undefined ***)((long)register0x00000008 + -0x180) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x178) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x170) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x168) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x160) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x158) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x150) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x148) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x140) = param_1;
    *(undefined ***)((long)register0x00000008 + -0x138) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x128) = FUN_10664fc9c;
    puVar26 = (undefined1 *)((long)register0x00000008 + -0x130);
    puVar2 = (undefined1 *)((long)register0x00000008 + -800);
    *(undefined8 *)((long)register0x00000008 + -0x1a0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar21;
    _objc_retain(ppuVar21);
    ppuVar16 = ppuVar21;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252020(ppuVar21);
    ppuVar23 = ppuVar16;
    func_0x00010bf529e0();
    if (ppuVar23 == (undefined **)0x0) {
      ppuVar23 = (undefined **)0x0;
      ppuVar11 = in_x5;
LAB_1066506c4:
      _objc_release(ppuVar16);
      ppuVar19 = ppuVar21;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x1a0))
      goto _objc_autoreleaseReturnValue;
      ___stack_chk_fail();
      *(undefined ***)((long)register0x00000008 + -0x380) = ppuVar24;
      *(undefined ***)((long)register0x00000008 + -0x378) = ppuVar21;
      *(undefined ***)((long)register0x00000008 + -0x370) = unaff_x26;
      *(undefined ***)((long)register0x00000008 + -0x368) = unaff_x25;
      *(undefined ***)((long)register0x00000008 + -0x360) = unaff_x24;
      *(undefined ***)((long)register0x00000008 + -0x358) = unaff_x23;
      *(undefined ***)((long)register0x00000008 + -0x350) = unaff_x22;
      *(undefined ***)((long)register0x00000008 + -0x348) = unaff_x21;
      *(undefined ***)((long)register0x00000008 + -0x340) = ppuVar16;
      *(undefined ***)((long)register0x00000008 + -0x338) = ppuVar23;
      *(undefined1 **)((long)register0x00000008 + -0x330) = puVar26;
      *(code **)((long)register0x00000008 + -0x328) = FUN_106650718;
      puVar26 = (undefined1 *)((long)register0x00000008 + -0x330);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x640);
      *(undefined8 *)((long)register0x00000008 + -0x390) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar9 = ppuVar8;
      in_x5 = ppuVar11;
      _objc_retain();
      *(undefined ***)((long)register0x00000008 + -0x608) = ppuVar10;
      _objc_retain(ppuVar10);
      _objc_retain(ppuVar25);
      _objc_retain(ppuVar12);
      *(undefined ***)((long)register0x00000008 + -0x600) = ppuVar11;
      _objc_retain(ppuVar11);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      *(undefined **)((long)register0x00000008 + -0x5f8) = puVar3;
      ppuVar24 = ppuVar25;
      func_0x00010c259120();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x618) = ppuVar24;
      *(undefined8 *)((long)register0x00000008 + -0x598) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x5a0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x588) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x590) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x578) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x580) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x568) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x570) = 0;
      _objc_retain(ppuVar19);
      ppuVar11 = (undefined **)((long)register0x00000008 + -0x5a0);
      ppuVar24 = ppuVar19;
      func_0x00010bf52a60();
      ppuVar22 = &PTR_PTR_1126cc000;
      if (ppuVar24 != (undefined **)0x0) {
        lVar14 = **(long **)((long)register0x00000008 + -0x590);
        do {
          ppuVar21 = (undefined **)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x590) != lVar14) {
              _objc_enumerationMutation(ppuVar19);
            }
            ppuVar9 = (undefined **)PTR_PTR_1126cc560;
            uVar18 = *(ulong *)(*(long *)((long)register0x00000008 + -0x598) + (long)ppuVar21 * 8);
            _objc_retain(uVar18);
            _objc_opt_class();
            uVar6 = uVar18;
            _objc_opt_isKindOfClass();
            uVar1 = uVar18;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar18);
            if (uVar1 != 0) {
              func_0x00010bf935c0(uVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x5f8));
              _objc_release(uVar18);
            }
            _objc_release(uVar1);
            ppuVar21 = (undefined **)((long)ppuVar21 + 1);
          } while (ppuVar24 != ppuVar21);
          ppuVar11 = (undefined **)((long)register0x00000008 + -0x5a0);
          ppuVar24 = ppuVar19;
          func_0x00010bf52a60();
          unaff_x22 = (undefined **)0x0;
        } while (ppuVar24 != (undefined **)0x0);
      }
      _objc_release(ppuVar19);
      ppuVar24 = ppuVar19;
      func_0x00010bf529e0();
      if (ppuVar8 < ppuVar24) {
        ppuVar24 = ppuVar19;
        ppuVar11 = ppuVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = (undefined **)PTR_PTR_1126cc560;
        _objc_opt_class();
        ppuVar21 = ppuVar24;
        _objc_opt_isKindOfClass();
        ppuVar16 = ppuVar24;
        if (((ulong)ppuVar21 & 1) == 0) {
          ppuVar16 = (undefined **)0x0;
        }
        _objc_retain(ppuVar16);
        _objc_release(ppuVar24);
        ppuVar24 = ppuVar16;
        func_0x00010c0fdbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = PTR_PTR_1126c55c0;
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x5f8);
        ppuVar10 = *(undefined ***)((long)register0x00000008 + -0x618);
        if (ppuVar24 != (undefined **)0x0) {
          unaff_x22 = ppuVar16;
          func_0x00010c0fdbe0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = unaff_x22;
          func_0x00010c1dcc60(puVar3);
          _objc_release(unaff_x22);
        }
        ppuVar23 = ppuVar21;
        func_0x00010bf529e0();
        ppuVar24 = (undefined **)PTR_PTR_1126b0ef0;
        if (ppuVar23 == (undefined **)0x1) {
          unaff_x22 = ppuVar21;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x5a8) = 0;
          ppuVar11 = unaff_x22;
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x5a8);
          _objc_release(unaff_x22);
          if (ppuVar22 == (undefined **)0x0) {
            unaff_x22 = ppuVar25;
            func_0x00010bf4de00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010baf2e4c();
            ppuVar11 = ppuVar24;
            func_0x00010c10a000(*(undefined8 *)((long)register0x00000008 + -0x608));
            _objc_release(unaff_x22);
          }
          _objc_release(ppuVar24);
        }
        ppuVar24 = ppuVar21;
        func_0x00010bf529e0();
        if (ppuVar24 == (undefined **)0x0) {
          _objc_retain(ppuVar19);
          ppuVar23 = ppuVar19;
        }
        else {
          *(undefined ***)((long)register0x00000008 + -0x638) = ppuVar16;
          *(undefined ***)((long)register0x00000008 + -0x630) = ppuVar25;
          _objc_retain(ppuVar21);
          *(undefined ***)((long)register0x00000008 + -0x620) = ppuVar12;
          _objc_retain(ppuVar12);
          _objc_retain(ppuVar10);
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x600));
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined **)((long)register0x00000008 + -0x610) = puVar3;
          *(undefined8 *)((long)register0x00000008 + -0x548) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x550) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x540) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x518) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x520) = 0;
          _objc_retain(ppuVar21);
          ppuVar25 = ppuVar21;
          func_0x00010bf52a60();
          if (ppuVar25 != (undefined **)0x0) {
            ppuVar12 = (undefined **)0x0;
            lVar14 = **(long **)((long)register0x00000008 + -0x540);
            do {
              ppuVar8 = (undefined **)0x0;
              do {
                unaff_x22 = ppuVar12;
                if (**(long **)((long)register0x00000008 + -0x540) != lVar14) {
                  _objc_enumerationMutation(ppuVar21);
                }
                *(undefined ***)((long)register0x00000008 + -0x558) = unaff_x22;
                ppuVar24 = (undefined **)PTR_PTR_1126b0ef0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = *(undefined ***)((long)register0x00000008 + -0x558);
                _objc_retain(ppuVar12);
                _objc_release(unaff_x22);
                if (((ppuVar12 == (undefined **)0x0) && (ppuVar24 != (undefined **)0x0)) &&
                   (ppuVar10 = ppuVar24, func_0x00010bf31ee0(), (int)ppuVar10 == 0x26)) {
                  ppuVar10 = *(undefined ***)((long)register0x00000008 + -0x618);
                  ppuVar21 = ppuVar10;
                  func_0x00010c154260();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c153ec0(ppuVar10);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = (undefined **)0x0;
                  unaff_x22 = ppuVar24;
                  in_x5 = ppuVar21;
                  func_0x00010848095c(ppuVar24,0,0,
                                      *(undefined8 *)((long)register0x00000008 + -0x600),0,ppuVar21,
                                      ppuVar10);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar10);
                  _objc_release(ppuVar21);
                  if (unaff_x22 != (undefined **)0x0) {
                    func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x610));
                  }
                  _objc_release(unaff_x22);
                  ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x5f8);
                }
                _objc_release(ppuVar24);
                ppuVar8 = (undefined **)((long)ppuVar8 + 1);
              } while (ppuVar25 != ppuVar8);
              ppuVar25 = ppuVar21;
              func_0x00010bf52a60();
            } while (ppuVar25 != (undefined **)0x0);
            _objc_release(ppuVar12);
            ppuVar10 = *(undefined ***)((long)register0x00000008 + -0x618);
          }
          *(undefined ***)((long)register0x00000008 + -0x628) = ppuVar19;
          _objc_release(ppuVar21);
          ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x620);
          ppuVar25 = ppuVar22;
          func_0x00010c269d40(ppuVar22);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = *(undefined8 *)((long)register0x00000008 + -0x610);
          func_0x00010c28a480();
          _objc_release(ppuVar25);
          _objc_release(uVar15);
          uVar15 = *(undefined8 *)((long)register0x00000008 + -0x600);
          _objc_release(uVar15);
          _objc_release(ppuVar10);
          _objc_release(ppuVar22);
          _objc_release(ppuVar21);
          ppuVar8 = (undefined **)PTR_PTR_1126cc568;
          func_0x00010c0f4600();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x608));
          _objc_retain(uVar15);
          *(undefined8 *)((long)register0x00000008 + -0x548) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x550) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x540) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x518) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x520) = 0;
          ppuVar25 = ppuVar8;
          func_0x00010bf52a60();
          *(undefined ***)((long)register0x00000008 + -0x610) = ppuVar8;
          if (ppuVar25 != (undefined **)0x0) {
            lVar14 = **(long **)((long)register0x00000008 + -0x540);
            do {
              ppuVar12 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x540) != lVar14) {
                  _objc_enumerationMutation(*(undefined8 *)((long)register0x00000008 + -0x610));
                }
                ppuVar23 = *(undefined ***)
                            (*(long *)((long)register0x00000008 + -0x548) + (long)ppuVar12 * 8);
                ppuVar8 = ppuVar23;
                func_0x00010bf454e0(ppuVar23);
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = ppuVar23;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar24 = ppuVar23;
                func_0x00010bf82560(ppuVar23);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar23;
                func_0x00010c245680();
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = ppuVar23;
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar22 = ppuVar23;
                func_0x00010c26fe00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c07dce0(ppuVar23);
                ppuVar16 = ppuVar21;
                ppuVar9 = ppuVar10;
                func_0x000107a8673c(ppuVar21,ppuVar10,ppuVar22,ppuVar23,
                                    *(undefined8 *)((long)register0x00000008 + -0x600));
                _objc_retainAutoreleasedReturnValue();
                in_x5 = ppuVar16;
                func_0x00010c066de0(*(undefined8 *)((long)register0x00000008 + -0x608));
                _objc_release(ppuVar16);
                _objc_release(ppuVar22);
                _objc_release(ppuVar10);
                _objc_release(ppuVar21);
                _objc_release(ppuVar24);
                _objc_release(unaff_x22);
                _objc_release(ppuVar8);
                ppuVar12 = (undefined **)((long)ppuVar12 + 1);
              } while (ppuVar25 != ppuVar12);
              ppuVar8 = *(undefined ***)((long)register0x00000008 + -0x610);
              ppuVar25 = ppuVar8;
              func_0x00010bf52a60();
            } while (ppuVar25 != (undefined **)0x0);
          }
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x600));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x608));
          ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined8 *)((long)register0x00000008 + -0x5e8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x5f0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x5d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x5e0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x5c8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x5d0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x5b8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x5c0) = 0;
          _objc_retain(ppuVar8);
          ppuVar11 = (undefined **)((long)register0x00000008 + -0x5f0);
          ppuVar12 = ppuVar8;
          func_0x00010bf52a60();
          if (ppuVar12 != (undefined **)0x0) {
            unaff_x22 = (undefined **)0x0;
            lVar14 = **(long **)((long)register0x00000008 + -0x5e0);
            do {
              ppuVar24 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x5e0) != lVar14) {
                  _objc_enumerationMutation(ppuVar8);
                }
                ppuVar22 = *(undefined ***)
                            (*(long *)((long)register0x00000008 + -0x5e8) + (long)ppuVar24 * 8);
                puVar3 = PTR_PTR_1126b4d28;
                _objc_alloc(PTR_PTR_1126b4d28);
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                in_x5 = (undefined **)0x1;
                func_0x00010c04dcc0(puVar3);
                _objc_release(ppuVar22);
                func_0x00010befa120(ppuVar25);
                unaff_x22 = (undefined **)((long)unaff_x22 + 1);
                _objc_release(puVar3);
                ppuVar24 = (undefined **)((long)ppuVar24 + 1);
              } while (ppuVar12 != ppuVar24);
              ppuVar11 = (undefined **)((long)register0x00000008 + -0x5f0);
              ppuVar12 = ppuVar8;
              func_0x00010bf52a60();
            } while (ppuVar12 != (undefined **)0x0);
          }
          _objc_release(ppuVar8);
          ppuVar12 = ppuVar25;
          func_0x00010bf529e0();
          ppuVar19 = *(undefined ***)((long)register0x00000008 + -0x628);
          if (ppuVar12 == (undefined **)0x0) {
            ppuVar23 = (undefined **)0x0;
          }
          else {
            _objc_retain(ppuVar25);
            ppuVar23 = ppuVar25;
          }
          ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x5f8);
          ppuVar10 = *(undefined ***)((long)register0x00000008 + -0x618);
          ppuVar16 = *(undefined ***)((long)register0x00000008 + -0x638);
          _objc_release(ppuVar25);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x610));
          ppuVar25 = *(undefined ***)((long)register0x00000008 + -0x630);
          ppuVar12 = *(undefined ***)((long)register0x00000008 + -0x620);
        }
      }
      else {
        ppuVar10 = *(undefined ***)((long)register0x00000008 + -0x618);
        ppuVar24 = ppuVar10;
        func_0x00010c0f1e60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x5f8);
        if (ppuVar24 == (undefined **)0x0) {
          ppuVar11 = (undefined **)0xffffffffffffffff;
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar16 = ppuVar10;
          func_0x00010c0f1e60();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar24);
        ppuVar24 = ppuVar10;
        func_0x00010c25b720();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar24 == (undefined **)0x0) {
          unaff_x22 = &PTR____CFConstantStringClassReference_110e58058;
        }
        else {
          unaff_x22 = ppuVar10;
          func_0x00010c25b720();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar24);
        _objc_release(unaff_x22);
        ppuVar23 = (undefined **)0x0;
      }
      _objc_release(ppuVar16);
      _objc_release(ppuVar10);
      _objc_release(ppuVar21);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x600));
      _objc_release(ppuVar12);
      _objc_release(ppuVar25);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x608));
      ppuVar7 = ppuVar19;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x390))
      goto _objc_autoreleaseReturnValue;
      uVar15 = 0x106651038;
      ___stack_chk_fail();
      unaff_x21 = ppuVar23;
      unaff_x26 = ppuVar8;
      ppuVar24 = ppuVar12;
    }
    else {
      ppuVar25 = ppuVar21;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar25;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar12;
      func_0x00010c24b8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar12);
      _objc_release(ppuVar25);
      if (ppuVar19 != (undefined **)0x0) {
        unaff_x21 = (undefined **)(long)dVar27;
        _objc_retain(ppuVar16);
        unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(ppuVar16);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -600) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
        _objc_retain(ppuVar16);
        ppuVar25 = ppuVar16;
        func_0x00010bf52a60();
        ppuVar22 = unaff_x25;
        if (ppuVar25 != (undefined **)0x0) {
          ppuVar22 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x250);
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x250) != ppuVar22) {
                _objc_enumerationMutation(ppuVar16);
              }
              ppuVar19 = *(undefined ***)
                          (*(long *)((long)register0x00000008 + -600) + (long)unaff_x26 * 8);
              unaff_x23 = ppuVar19;
              func_0x00010c24b8c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (unaff_x23 != (undefined **)0x0) {
                func_0x00010c24b8c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(unaff_x24);
                _objc_release(ppuVar19);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (ppuVar25 != unaff_x26);
            ppuVar25 = ppuVar16;
            func_0x00010bf52a60();
          } while (ppuVar25 != (undefined **)0x0);
        }
        _objc_release(ppuVar16);
        _objc_release(ppuVar16);
        ppuVar10 = (undefined **)ppuVar24[5];
        ppuVar25 = (undefined **)ppuVar24[9];
        ppuVar12 = (undefined **)ppuVar24[10];
        in_x5 = (undefined **)ppuVar24[0xb];
        ppuVar23 = unaff_x24;
        ppuVar8 = unaff_x21;
        FUN_106650718();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar21;
LAB_1066506bc:
        _objc_release(unaff_x24);
        ppuVar11 = in_x5;
        unaff_x22 = ppuVar19;
        unaff_x25 = ppuVar22;
        ppuVar21 = ppuVar9;
        goto LAB_1066506c4;
      }
      ppuVar12 = ppuVar21;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = ppuVar12;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x21;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x300) = ppuVar24;
      *(undefined ***)((long)register0x00000008 + -0x2f8) = ppuVar21;
      if (unaff_x22 == (undefined **)0x0) {
        _objc_release(unaff_x21);
        _objc_release(ppuVar12);
LAB_10665019c:
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(ppuVar21);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -600) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
        _objc_retain(ppuVar21);
        ppuVar25 = (undefined **)((long)register0x00000008 + -0x220);
        ppuVar12 = (undefined **)0x10;
        ppuVar11 = ppuVar21;
        func_0x00010bf52a60();
        *(undefined ***)((long)register0x00000008 + -0x2a0) = ppuVar11;
        ppuVar23 = ppuVar10;
        if (ppuVar11 != (undefined **)0x0) {
          lVar14 = **(long **)((long)register0x00000008 + -0x250);
          *(undefined ***)((long)register0x00000008 + -0x2e8) = ppuVar10;
          *(undefined ***)((long)register0x00000008 + -0x2e0) = ppuVar21;
          *(long *)((long)register0x00000008 + -0x2f0) = lVar14;
          do {
            ppuVar24 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x250) != lVar14) {
                _objc_enumerationMutation(ppuVar21);
              }
              unaff_x26 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -600) + (long)ppuVar24 * 8);
              ppuVar23 = unaff_x26;
              func_0x00010c259880();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              ppuVar22 = (undefined **)PTR_PTR_1126c6d90;
              if (ppuVar23 == (undefined **)0x0) {
                ppuVar23 = unaff_x26;
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar23 != (undefined **)0x0) {
                  ppuVar23 = unaff_x26;
                  func_0x00010bfa3780();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar22 = ppuVar23;
                  func_0x00010bfa3760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar23);
                  ppuVar23 = ppuVar22;
                  func_0x00010bfa36c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar23 != (undefined **)0x0) {
                    ppuVar25 = unaff_x26;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar12 = ppuVar25;
                    func_0x00010bf93500();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = ppuVar12;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar12);
                    _objc_release(ppuVar25);
                    puVar3 = PTR_PTR_1126b4bb0;
                    if (ppuVar21 == (undefined **)0x0) {
                      *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
                    }
                    else {
                      ppuVar25 = unaff_x26;
                      func_0x00010bfa3780(unaff_x26);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar12 = ppuVar25;
                      func_0x00010bf93500();
                      _objc_retainAutoreleasedReturnValue();
                      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
                      func_0x00010c0f40e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar14 = *(long *)((long)register0x00000008 + -0x268);
                      _objc_release(ppuVar12);
                      _objc_release(ppuVar25);
                      if ((lVar14 == 0) &&
                         (puVar13 = puVar3, func_0x00010bfd5f00(), (int)puVar13 != 0)) {
                        puVar4 = puVar3;
                        func_0x00010bf5b080();
                        _objc_retainAutoreleasedReturnValue();
                        puVar13 = puVar4;
                        func_0x00010c2923e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar17 = puVar4;
                        func_0x00010c294420();
                        _objc_retainAutoreleasedReturnValue();
                        puVar20 = puVar4;
                        func_0x00010bf85d80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar4;
                        func_0x00010bfd5f20();
                        if ((int)puVar5 == 0) {
                          puVar5 = (undefined *)0x0;
                        }
                        else {
                          puVar5 = puVar4;
                          func_0x00010bf5b3e0();
                          _objc_retainAutoreleasedReturnValue();
                        }
                        _objc_release(puVar4);
                      }
                      else {
                        puVar13 = (undefined *)0x0;
                        puVar17 = (undefined *)0x0;
                        puVar20 = (undefined *)0x0;
                        puVar5 = (undefined *)0x0;
                      }
                      *(undefined **)((long)register0x00000008 + -0x2c0) = puVar5;
                      *(undefined **)((long)register0x00000008 + -0x2b8) = puVar20;
                      *(undefined **)((long)register0x00000008 + -0x2b0) = puVar17;
                      *(undefined **)((long)register0x00000008 + -0x2a8) = puVar13;
                      _objc_release(puVar3);
                    }
                    *(undefined **)((long)register0x00000008 + -0x2d0) = PTR_PTR_1126c6d90;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x2c8) = unaff_x26;
                    func_0x00010bf93680();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x2d8) = unaff_x26;
                    ppuVar21 = ppuVar22;
                    func_0x00010bfa36c0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar19 = ppuVar22;
                    func_0x00010c2711a0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x21 = ppuVar22;
                    func_0x00010c260dc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar10 = ppuVar22;
                    func_0x00010c0b46a0(ppuVar22);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar23 = ppuVar22;
                    func_0x00010c2520a0(ppuVar22);
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = *(undefined ***)((long)register0x00000008 + -0x2c0);
                    *(undefined8 *)((long)register0x00000008 + -0x310) =
                         *(undefined8 *)((long)register0x00000008 + -0x2b8);
                    *(undefined ***)((long)register0x00000008 + -0x308) = unaff_x26;
                    *(undefined8 *)((long)register0x00000008 + -800) =
                         *(undefined8 *)((long)register0x00000008 + -0x2a8);
                    *(undefined8 *)((long)register0x00000008 + -0x318) =
                         *(undefined8 *)((long)register0x00000008 + -0x2b0);
                    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x2d0);
                    ppuVar25 = ppuVar21;
                    ppuVar12 = ppuVar19;
                    in_x5 = unaff_x21;
                    func_0x00010c258680(uVar15);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar23);
                    _objc_release(ppuVar10);
                    _objc_release(unaff_x21);
                    _objc_release(ppuVar19);
                    _objc_release(ppuVar21);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2d8));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2c8));
                    ppuVar10 = *(undefined ***)((long)register0x00000008 + -0x2e8);
                    func_0x00010befa120(ppuVar10);
                    _objc_release(uVar15);
                    _objc_release(unaff_x26);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2b8));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2b0));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2a8));
                    ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x2e0);
                    lVar14 = *(long *)((long)register0x00000008 + -0x2f0);
                  }
                  goto LAB_1066502c0;
                }
              }
              else {
                unaff_x21 = unaff_x26;
                func_0x00010c259880();
                _objc_retainAutoreleasedReturnValue();
                ppuVar19 = unaff_x21;
                func_0x00010bf936c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c258660();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar19);
                _objc_release(unaff_x21);
                if (ppuVar22 == (undefined **)0x0) {
                  _objc_release(ppuVar21);
                  ppuVar23 = (undefined **)0x0;
                  goto LAB_10665062c;
                }
                func_0x00010befa120(ppuVar10);
LAB_1066502c0:
                _objc_release(ppuVar22);
                unaff_x25 = ppuVar22;
              }
              ppuVar24 = (undefined **)((long)ppuVar24 + 1);
            } while (*(undefined ***)((long)register0x00000008 + -0x2a0) != ppuVar24);
            ppuVar25 = (undefined **)((long)register0x00000008 + -0x220);
            ppuVar12 = (undefined **)0x10;
            ppuVar11 = ppuVar21;
            func_0x00010bf52a60();
            *(undefined ***)((long)register0x00000008 + -0x2a0) = ppuVar11;
            ppuVar23 = ppuVar10;
          } while (ppuVar11 != (undefined **)0x0);
        }
        _objc_release(ppuVar21);
        _objc_retain(ppuVar23);
        ppuVar22 = unaff_x25;
        ppuVar10 = ppuVar23;
LAB_10665062c:
        _objc_release(ppuVar10);
        _objc_release(ppuVar21);
        ppuVar11 = ppuVar21;
        _objc_release(ppuVar21);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x298) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x290) = 0xc2000000;
        *(code **)((long)register0x00000008 + -0x288) = FUN_106651374;
        *(undefined **)((long)register0x00000008 + -0x280) = &UNK_110841f80;
        _objc_retain(ppuVar23);
        *(undefined ***)((long)register0x00000008 + -0x278) = ppuVar23;
        *(undefined8 *)((long)register0x00000008 + -0x270) =
             *(undefined8 *)((long)register0x00000008 + -0x300);
        ppuVar10 = (undefined **)((long)register0x00000008 + -0x298);
        func_0x00010c0f7fc0(ppuVar11);
        _objc_release(ppuVar11);
        _objc_retain(ppuVar23);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x278));
        ppuVar9 = *(undefined ***)((long)register0x00000008 + -0x2f8);
        unaff_x23 = ppuVar21;
        unaff_x24 = ppuVar23;
        goto LAB_1066506bc;
      }
      ppuVar10 = ppuVar21;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar25 = ppuVar23;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = ppuVar25;
      func_0x00010bf935c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar25);
      _objc_release(ppuVar23);
      _objc_release(ppuVar10);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
      _objc_release(ppuVar12);
      ppuVar19 = unaff_x22;
      unaff_x25 = ppuVar25;
      if (unaff_x26 == (undefined **)0x0) goto LAB_10665019c;
      puVar3 = ppuVar24[0xb];
      _objc_retain(ppuVar16);
      *(undefined **)((long)register0x00000008 + -0x2a0) = puVar3;
      _objc_retain(puVar3);
      ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar16);
      ppuVar7 = ppuVar22;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)register0x00000008 + -600) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
      _objc_retain(ppuVar16);
      ppuVar12 = ppuVar16;
      func_0x00010bf52a60();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar21 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x250);
        ppuVar24 = &PTR_PTR_1126b0000;
        do {
          unaff_x22 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x250) != ppuVar21) {
              _objc_enumerationMutation(ppuVar16);
            }
            ppuVar23 = *(undefined ***)
                        (*(long *)((long)register0x00000008 + -600) + (long)unaff_x22 * 8);
            unaff_x21 = ppuVar23;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = unaff_x21;
            func_0x00010bf935c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(unaff_x21);
            ppuVar8 = (undefined **)PTR_PTR_1126b0ef0;
            ppuVar22 = ppuVar23;
            ppuVar25 = (undefined **)0x0;
            if (ppuVar10 != (undefined **)0x0) {
              func_0x00010bfa3780();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = ppuVar23;
              func_0x00010bf935c0();
              _objc_retainAutoreleasedReturnValue();
              *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
              func_0x00010c0f40e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x268);
              _objc_release(unaff_x26);
              _objc_release(ppuVar23);
              if ((unaff_x21 == (undefined **)0x0) && (ppuVar8 != (undefined **)0x0)) {
                unaff_x21 = (undefined **)PTR_PTR_1126b0ef8;
                _objc_alloc();
                *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
                *(undefined1 *)((long)register0x00000008 + -800) = 0;
                func_0x00010c03ef40();
                *(undefined8 *)((long)register0x00000008 + -800) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x310) =
                     *(undefined8 *)((long)register0x00000008 + -0x2a0);
                *(undefined8 *)((long)register0x00000008 + -0x308) = 0;
                in_x5 = (undefined **)0x0;
                ppuVar23 = ppuVar8;
                func_0x000108482f84(ppuVar8,unaff_x21,0,0,0,0,0,0);
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar23 != (undefined **)0x0) {
                  func_0x00010befa120(ppuVar7);
                }
                _objc_release(ppuVar23);
                _objc_release(unaff_x21);
              }
              _objc_release(ppuVar8);
              ppuVar22 = ppuVar8;
              ppuVar25 = ppuVar23;
            }
            unaff_x22 = (undefined **)((long)unaff_x22 + 1);
          } while (ppuVar12 != unaff_x22);
          ppuVar12 = ppuVar16;
          func_0x00010bf52a60();
          ppuVar10 = (undefined **)0x0;
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar16);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2a0));
      _objc_release(ppuVar16);
      ppuVar9 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x300) + 0x30);
      ppuVar11 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x300) + 0x60);
      uVar15 = 0x10665017c;
      ppuVar19 = ppuVar7;
    }
    *(undefined ***)(puVar2 + -0x60) = ppuVar24;
    *(undefined ***)(puVar2 + -0x58) = ppuVar21;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = ppuVar25;
    *(undefined ***)(puVar2 + -0x40) = ppuVar19;
    *(undefined ***)(puVar2 + -0x38) = ppuVar10;
    *(undefined ***)(puVar2 + -0x30) = unaff_x22;
    *(undefined ***)(puVar2 + -0x28) = unaff_x21;
    *(undefined ***)(puVar2 + -0x20) = ppuVar16;
    *(undefined ***)(puVar2 + -0x18) = ppuVar22;
    *(undefined1 **)(puVar2 + -0x10) = puVar26;
    *(undefined8 *)(puVar2 + -8) = uVar15;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar11);
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    *(undefined8 *)(puVar2 + -0x128) = 0;
    *(undefined8 *)(puVar2 + -0x130) = 0;
    *(undefined8 *)(puVar2 + -0x118) = 0;
    *(undefined8 *)(puVar2 + -0x120) = 0;
    *(undefined8 *)(puVar2 + -0x108) = 0;
    *(undefined8 *)(puVar2 + -0x110) = 0;
    *(undefined8 *)(puVar2 + -0xf8) = 0;
    *(undefined8 *)(puVar2 + -0x100) = 0;
    _objc_retain(ppuVar7);
    ppuVar8 = ppuVar7;
    func_0x00010bf52a60();
    unaff_x27 = ppuVar21;
    unaff_x28 = ppuVar24;
    if (ppuVar8 != (undefined **)0x0) {
      unaff_x27 = (undefined **)**(undefined8 **)(puVar2 + -0x120);
      unaff_x28 = &PTR_PTR_1126c2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar2 + -0x120) != unaff_x27) {
            _objc_enumerationMutation(ppuVar7);
          }
          puVar3 = PTR_PTR_1126c2098;
          ppuVar19 = *(undefined ***)(*(long *)(puVar2 + -0x128) + (long)unaff_x26 * 8);
          _objc_retain(ppuVar19);
          _objc_opt_class(puVar3);
          ppuVar24 = ppuVar19;
          _objc_opt_isKindOfClass(ppuVar19,puVar3);
          ppuVar25 = ppuVar19;
          if (((ulong)ppuVar24 & 1) == 0) {
            ppuVar25 = (undefined **)0x0;
          }
          _objc_retain(ppuVar25);
          _objc_release(ppuVar19);
          if (ppuVar25 != (undefined **)0x0) {
            func_0x00010befa120(ppuVar12);
          }
          _objc_release(ppuVar25);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar8 != unaff_x26);
        ppuVar8 = ppuVar7;
        func_0x00010bf52a60();
      } while (ppuVar8 != (undefined **)0x0);
    }
    _objc_release(ppuVar7);
    ppuVar8 = ppuVar12;
    func_0x00010bf529e0();
    if (ppuVar8 == (undefined **)0x0) {
      _objc_retain(ppuVar7);
      ppuVar23 = ppuVar7;
      unaff_x25 = ppuVar25;
    }
    else {
      func_0x00010c066720(ppuVar9);
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        ppuVar8 = ppuVar12;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar25 = ppuVar8;
        func_0x00010c25b720();
        ppuVar24 = ppuVar8;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar25 == (undefined **)0xd) {
          ppuVar25 = ppuVar24;
          func_0x00010bf52680();
          unaff_x28 = ppuVar24;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar24;
          func_0x00010c298be0();
          *(undefined ***)(puVar2 + -0x168) = unaff_x28;
          *(undefined ***)(puVar2 + -0x160) = ppuVar21;
          *(undefined ***)(puVar2 + -0x170) = ppuVar25;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          unaff_x27 = (undefined **)0x6;
        }
        else {
          unaff_x26 = ppuVar24;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = (undefined **)0x1;
        }
        _objc_release(ppuVar24);
        ppuVar25 = (undefined **)PTR_PTR_1126b4d28;
        _objc_alloc();
        in_x5 = (undefined **)0x1;
        func_0x00010c04dcc0();
        func_0x00010befa120(ppuVar23);
        _objc_release(ppuVar25);
        _objc_release(unaff_x26);
        ppuVar19 = ppuVar8;
      }
      else {
        *(undefined **)(puVar2 + -0x158) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(puVar2 + -0x150) = 0xc2000000;
        *(code **)(puVar2 + -0x148) = FUN_106651998;
        *(undefined **)(puVar2 + -0x140) = &UNK_110931a08;
        _objc_retain(ppuVar11);
        *(undefined ***)(puVar2 + -0x138) = ppuVar11;
        ppuVar23 = ppuVar12;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = *(undefined ***)(puVar2 + -0x138);
      }
      _objc_release(ppuVar8);
      unaff_x25 = ppuVar25;
    }
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
    ppuVar25 = ppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70)) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar23);
      return;
    }
    ___stack_chk_fail();
    puVar3 = ppuVar25[4];
    ppuVar25 = *(undefined ***)(ppuVar25[5] + 0x38);
    *(undefined ***)(puVar2 + -0x1d0) = unaff_x28;
    *(undefined ***)(puVar2 + -0x1c8) = unaff_x27;
    *(undefined ***)(puVar2 + -0x1c0) = unaff_x26;
    *(undefined ***)(puVar2 + -0x1b8) = unaff_x25;
    *(undefined ***)(puVar2 + -0x1b0) = ppuVar19;
    *(undefined ***)(puVar2 + -0x1a8) = ppuVar23;
    *(undefined ***)(puVar2 + -0x1a0) = ppuVar12;
    *(undefined ***)(puVar2 + -0x198) = ppuVar11;
    *(undefined ***)(puVar2 + -400) = ppuVar9;
    *(undefined ***)(puVar2 + -0x188) = ppuVar7;
    *(undefined1 **)(puVar2 + -0x180) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x178) = FUN_106651374;
    unaff_x29 = puVar2 + -0x180;
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x3c0);
    *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_2 = ppuVar25;
    _objc_retain();
    *(undefined ***)(puVar2 + -0x3b0) = ppuVar25;
    _objc_retain(ppuVar25);
    *(undefined8 *)(puVar2 + -0x3b8) = 0;
    _objc_retain(0);
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar2 + -0x318) = 0;
    *(undefined8 *)(puVar2 + -800) = 0;
    *(undefined8 *)(puVar2 + -0x308) = 0;
    *(undefined8 *)(puVar2 + -0x310) = 0;
    *(undefined8 *)(puVar2 + -0x2f8) = 0;
    *(undefined8 *)(puVar2 + -0x300) = 0;
    *(undefined8 *)(puVar2 + -0x2e8) = 0;
    *(undefined8 *)(puVar2 + -0x2f0) = 0;
    _objc_retain(puVar3);
    *(undefined **)(puVar2 + -0x398) = puVar3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar14 = **(long **)(puVar2 + -0x310);
      *(long *)(puVar2 + -0x3a8) = lVar14;
      do {
        puVar13 = (undefined *)0x0;
        *(undefined **)(puVar2 + -0x3a0) = puVar3;
        do {
          if (**(long **)(puVar2 + -0x310) != lVar14) {
            _objc_enumerationMutation(*(undefined8 *)(puVar2 + -0x398));
          }
          param_2 = (undefined **)PTR_PTR_1126c6d90;
          unaff_x25 = *(undefined ***)(*(long *)(puVar2 + -0x318) + (long)puVar13 * 8);
          _objc_retain(unaff_x25);
          _objc_opt_class();
          ppuVar12 = unaff_x25;
          _objc_opt_isKindOfClass();
          ppuVar25 = unaff_x25;
          if (((ulong)ppuVar12 & 1) == 0) {
            ppuVar25 = (undefined **)0x0;
          }
          _objc_retain(ppuVar25);
          _objc_release(unaff_x25);
          if (ppuVar25 != (undefined **)0x0) {
            unaff_x26 = unaff_x25;
            func_0x00010c258040();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010bf529e0();
            _objc_release(unaff_x26);
            if (unaff_x27 != (undefined **)0x0) {
              *(undefined8 *)(puVar2 + -0x338) = 0;
              *(undefined8 *)(puVar2 + -0x340) = 0;
              *(undefined8 *)(puVar2 + -0x328) = 0;
              *(undefined8 *)(puVar2 + -0x330) = 0;
              *(undefined8 *)(puVar2 + -0x358) = 0;
              *(undefined8 *)(puVar2 + -0x360) = 0;
              *(undefined8 *)(puVar2 + -0x348) = 0;
              *(undefined8 *)(puVar2 + -0x350) = 0;
              func_0x00010c258040();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = unaff_x25;
              func_0x00010bf52a60();
              if (ppuVar12 != (undefined **)0x0) {
                lVar14 = **(long **)(puVar2 + -0x350);
                do {
                  ppuVar8 = (undefined **)0x0;
                  do {
                    if (**(long **)(puVar2 + -0x350) != lVar14) {
                      _objc_enumerationMutation(unaff_x25);
                    }
                    unaff_x27 = *(undefined ***)(*(long *)(puVar2 + -0x358) + (long)ppuVar8 * 8);
                    unaff_x28 = unaff_x27;
                    func_0x00010be36bc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar24 = unaff_x28;
                    func_0x00010c08fa60();
                    _objc_release(unaff_x28);
                    if (ppuVar24 != (undefined **)0x0) {
                      ppuVar24 = unaff_x27;
                      func_0x00010be36bc0(unaff_x27);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(unaff_x22);
                      _objc_release(ppuVar24);
                    }
                    ppuVar8 = (undefined **)((long)ppuVar8 + 1);
                  } while (ppuVar12 != ppuVar8);
                  ppuVar12 = unaff_x25;
                  func_0x00010bf52a60();
                  unaff_x26 = (undefined **)0x0;
                } while (ppuVar12 != (undefined **)0x0);
              }
              _objc_release(unaff_x25);
              lVar14 = *(long *)(puVar2 + -0x3a8);
              puVar3 = *(undefined **)(puVar2 + -0x3a0);
            }
          }
          _objc_release(ppuVar25);
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar3);
        puVar3 = *(undefined **)(puVar2 + -0x398);
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    unaff_x19 = *(long *)(puVar2 + -0x398);
    _objc_release(unaff_x19);
    unaff_x21 = *(undefined ***)(puVar2 + -0x3b0);
    unaff_x20 = unaff_x21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)(puVar2 + -0x390) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar2 + -0x388) = 0xc2000000;
    *(code **)(puVar2 + -0x380) = FUN_10664fb6c;
    *(undefined **)(puVar2 + -0x378) = &UNK_1108846a8;
    unaff_x24 = *(undefined ***)(puVar2 + -0x3b8);
    *(undefined ***)(puVar2 + -0x370) = unaff_x22;
    *(undefined ***)(puVar2 + -0x368) = unaff_x24;
    _objc_retain(unaff_x24);
    _objc_retain(unaff_x22);
    func_0x00010c121840(unaff_x20);
    _objc_release(unaff_x23);
    _objc_release(unaff_x20);
    _objc_release(*(undefined8 *)(puVar2 + -0x368));
    _objc_release(*(undefined8 *)(puVar2 + -0x370));
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    param_1 = unaff_x19;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x1e0)) {
      return;
    }
    unaff_x30 = FUN_10664fb6c;
    ___stack_chk_fail();
    unaff_d8 = dVar27;
  } while( true );
}



/* Entry: 10664fc9c; end: 106650717; -[SCImpalaStoryPlayerPlaylistFetcher fetchIncomingSCCPlayerItems:] */

/* WARNING: Possible PIC construction at 0x000106650178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010665017c) */

void FUN_10664fc9c(double param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined **unaff_x21;
  undefined *puVar13;
  ulong uVar14;
  undefined **unaff_x22;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **unaff_x23;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **unaff_x26;
  undefined **ppuVar22;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  code *unaff_x30;
  double dVar24;
  double unaff_d8;
  undefined8 unaff_d9;
  
  do {
    dVar24 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x200);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar9 = param_4;
    _objc_retain(param_4);
    ppuVar22 = param_4;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252020(param_4);
    ppuVar19 = ppuVar22;
    func_0x00010bf529e0();
    if (ppuVar19 == (undefined **)0x0) {
      ppuVar19 = (undefined **)0x0;
      ppuVar18 = param_7;
LAB_1066506c4:
      _objc_release(ppuVar22);
      ppuVar15 = param_4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80))
      goto _objc_autoreleaseReturnValue;
      ___stack_chk_fail();
      *(undefined ***)((long)register0x00000008 + -0x260) = param_2;
      *(undefined ***)((long)register0x00000008 + -600) = param_4;
      *(undefined ***)((long)register0x00000008 + -0x250) = unaff_x26;
      *(undefined ***)((long)register0x00000008 + -0x248) = unaff_x25;
      *(undefined ***)((long)register0x00000008 + -0x240) = unaff_x24;
      *(undefined ***)((long)register0x00000008 + -0x238) = unaff_x23;
      *(undefined ***)((long)register0x00000008 + -0x230) = unaff_x22;
      *(undefined ***)((long)register0x00000008 + -0x228) = unaff_x21;
      *(undefined ***)((long)register0x00000008 + -0x220) = ppuVar22;
      *(undefined ***)((long)register0x00000008 + -0x218) = ppuVar19;
      *(undefined1 **)((long)register0x00000008 + -0x210) = puVar23;
      *(code **)((long)register0x00000008 + -0x208) = FUN_106650718;
      puVar23 = (undefined1 *)((long)register0x00000008 + -0x210);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x520);
      *(undefined8 *)((long)register0x00000008 + -0x270) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar8 = param_3;
      param_7 = ppuVar18;
      _objc_retain();
      *(undefined ***)((long)register0x00000008 + -0x4e8) = ppuVar9;
      _objc_retain(ppuVar9);
      _objc_retain(param_5);
      _objc_retain(param_6);
      *(undefined ***)((long)register0x00000008 + -0x4e0) = ppuVar18;
      _objc_retain(ppuVar18);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      *(undefined **)((long)register0x00000008 + -0x4d8) = puVar3;
      ppuVar9 = param_5;
      func_0x00010c259120();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x4f8) = ppuVar9;
      *(undefined8 *)((long)register0x00000008 + -0x478) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x480) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x468) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x470) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x458) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x460) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x448) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x450) = 0;
      _objc_retain(ppuVar15);
      ppuVar9 = (undefined **)((long)register0x00000008 + -0x480);
      ppuVar22 = ppuVar15;
      func_0x00010bf52a60();
      ppuVar20 = &PTR_PTR_1126cc000;
      if (ppuVar22 != (undefined **)0x0) {
        lVar11 = **(long **)((long)register0x00000008 + -0x470);
        do {
          ppuVar9 = (undefined **)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x470) != lVar11) {
              _objc_enumerationMutation(ppuVar15);
            }
            ppuVar8 = (undefined **)PTR_PTR_1126cc560;
            uVar14 = *(ulong *)(*(long *)((long)register0x00000008 + -0x478) + (long)ppuVar9 * 8);
            _objc_retain(uVar14);
            _objc_opt_class();
            uVar6 = uVar14;
            _objc_opt_isKindOfClass();
            uVar1 = uVar14;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar14);
            if (uVar1 != 0) {
              func_0x00010bf935c0(uVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x4d8));
              _objc_release(uVar14);
            }
            _objc_release(uVar1);
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar22 != ppuVar9);
          ppuVar9 = (undefined **)((long)register0x00000008 + -0x480);
          ppuVar22 = ppuVar15;
          func_0x00010bf52a60();
          unaff_x22 = (undefined **)0x0;
        } while (ppuVar22 != (undefined **)0x0);
      }
      _objc_release(ppuVar15);
      ppuVar22 = ppuVar15;
      func_0x00010bf529e0();
      if (param_3 < ppuVar22) {
        ppuVar19 = ppuVar15;
        ppuVar9 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = (undefined **)PTR_PTR_1126cc560;
        _objc_opt_class();
        ppuVar18 = ppuVar19;
        _objc_opt_isKindOfClass();
        ppuVar22 = ppuVar19;
        if (((ulong)ppuVar18 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar19);
        ppuVar19 = ppuVar22;
        func_0x00010c0fdbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = PTR_PTR_1126c55c0;
        param_4 = *(undefined ***)((long)register0x00000008 + -0x4d8);
        ppuVar18 = *(undefined ***)((long)register0x00000008 + -0x4f8);
        if (ppuVar19 != (undefined **)0x0) {
          unaff_x22 = ppuVar22;
          func_0x00010c0fdbe0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = unaff_x22;
          func_0x00010c1dcc60(puVar3);
          _objc_release(unaff_x22);
        }
        ppuVar16 = param_4;
        func_0x00010bf529e0();
        ppuVar19 = (undefined **)PTR_PTR_1126b0ef0;
        if (ppuVar16 == (undefined **)0x1) {
          unaff_x22 = param_4;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x488) = 0;
          ppuVar9 = unaff_x22;
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = *(undefined ***)((long)register0x00000008 + -0x488);
          _objc_release(unaff_x22);
          if (ppuVar20 == (undefined **)0x0) {
            unaff_x22 = param_5;
            func_0x00010bf4de00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010baf2e4c();
            ppuVar9 = ppuVar19;
            func_0x00010c10a000(*(undefined8 *)((long)register0x00000008 + -0x4e8));
            _objc_release(unaff_x22);
          }
          _objc_release(ppuVar19);
        }
        ppuVar19 = param_4;
        func_0x00010bf529e0();
        if (ppuVar19 == (undefined **)0x0) {
          _objc_retain(ppuVar15);
          ppuVar19 = ppuVar15;
        }
        else {
          *(undefined ***)((long)register0x00000008 + -0x518) = ppuVar22;
          *(undefined ***)((long)register0x00000008 + -0x510) = param_5;
          _objc_retain(param_4);
          *(undefined ***)((long)register0x00000008 + -0x500) = param_6;
          _objc_retain(param_6);
          _objc_retain(ppuVar18);
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x4e0));
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined **)((long)register0x00000008 + -0x4f0) = puVar3;
          *(undefined8 *)((long)register0x00000008 + -0x428) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x430) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x418) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x420) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x408) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x410) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x3f8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x400) = 0;
          _objc_retain(param_4);
          ppuVar9 = param_4;
          func_0x00010bf52a60();
          if (ppuVar9 != (undefined **)0x0) {
            ppuVar22 = (undefined **)0x0;
            lVar11 = **(long **)((long)register0x00000008 + -0x420);
            do {
              ppuVar19 = (undefined **)0x0;
              do {
                unaff_x22 = ppuVar22;
                if (**(long **)((long)register0x00000008 + -0x420) != lVar11) {
                  _objc_enumerationMutation(param_4);
                }
                *(undefined ***)((long)register0x00000008 + -0x438) = unaff_x22;
                ppuVar18 = (undefined **)PTR_PTR_1126b0ef0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x438);
                _objc_retain(ppuVar22);
                _objc_release(unaff_x22);
                if (((ppuVar22 == (undefined **)0x0) && (ppuVar18 != (undefined **)0x0)) &&
                   (ppuVar20 = ppuVar18, func_0x00010bf31ee0(), (int)ppuVar20 == 0x26)) {
                  ppuVar16 = *(undefined ***)((long)register0x00000008 + -0x4f8);
                  ppuVar20 = ppuVar16;
                  func_0x00010c154260();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c153ec0(ppuVar16);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar8 = (undefined **)0x0;
                  unaff_x22 = ppuVar18;
                  param_7 = ppuVar20;
                  func_0x00010848095c(ppuVar18,0,0,
                                      *(undefined8 *)((long)register0x00000008 + -0x4e0),0,ppuVar20,
                                      ppuVar16);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar16);
                  _objc_release(ppuVar20);
                  if (unaff_x22 != (undefined **)0x0) {
                    func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x4f0));
                  }
                  _objc_release(unaff_x22);
                  param_4 = *(undefined ***)((long)register0x00000008 + -0x4d8);
                }
                _objc_release(ppuVar18);
                ppuVar19 = (undefined **)((long)ppuVar19 + 1);
              } while (ppuVar9 != ppuVar19);
              ppuVar9 = param_4;
              func_0x00010bf52a60();
            } while (ppuVar9 != (undefined **)0x0);
            _objc_release(ppuVar22);
            ppuVar18 = *(undefined ***)((long)register0x00000008 + -0x4f8);
          }
          *(undefined ***)((long)register0x00000008 + -0x508) = ppuVar15;
          _objc_release(param_4);
          ppuVar20 = *(undefined ***)((long)register0x00000008 + -0x500);
          ppuVar9 = ppuVar20;
          func_0x00010c269d40(ppuVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x4f0);
          func_0x00010c28a480();
          _objc_release(ppuVar9);
          _objc_release(uVar12);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x4e0);
          _objc_release(uVar12);
          _objc_release(ppuVar18);
          _objc_release(ppuVar20);
          _objc_release(param_4);
          param_3 = (undefined **)PTR_PTR_1126cc568;
          func_0x00010c0f4600();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x4e8));
          _objc_retain(uVar12);
          *(undefined8 *)((long)register0x00000008 + -0x428) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x430) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x418) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x420) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x408) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x410) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x3f8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x400) = 0;
          ppuVar9 = param_3;
          func_0x00010bf52a60();
          *(undefined ***)((long)register0x00000008 + -0x4f0) = param_3;
          if (ppuVar9 != (undefined **)0x0) {
            lVar11 = **(long **)((long)register0x00000008 + -0x420);
            do {
              ppuVar22 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x420) != lVar11) {
                  _objc_enumerationMutation(*(undefined8 *)((long)register0x00000008 + -0x4f0));
                }
                ppuVar21 = *(undefined ***)
                            (*(long *)((long)register0x00000008 + -0x428) + (long)ppuVar22 * 8);
                ppuVar19 = ppuVar21;
                func_0x00010bf454e0(ppuVar21);
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = ppuVar21;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar18 = ppuVar21;
                func_0x00010bf82560(ppuVar21);
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = ppuVar21;
                func_0x00010c245680();
                _objc_retainAutoreleasedReturnValue();
                ppuVar16 = ppuVar21;
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar20 = ppuVar21;
                func_0x00010c26fe00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c07dce0(ppuVar21);
                ppuVar7 = ppuVar15;
                ppuVar8 = ppuVar16;
                func_0x000107a8673c(ppuVar15,ppuVar16,ppuVar20,ppuVar21,
                                    *(undefined8 *)((long)register0x00000008 + -0x4e0));
                _objc_retainAutoreleasedReturnValue();
                param_7 = ppuVar7;
                func_0x00010c066de0(*(undefined8 *)((long)register0x00000008 + -0x4e8));
                _objc_release(ppuVar7);
                _objc_release(ppuVar20);
                _objc_release(ppuVar16);
                _objc_release(ppuVar15);
                _objc_release(ppuVar18);
                _objc_release(unaff_x22);
                _objc_release(ppuVar19);
                ppuVar22 = (undefined **)((long)ppuVar22 + 1);
              } while (ppuVar9 != ppuVar22);
              param_3 = *(undefined ***)((long)register0x00000008 + -0x4f0);
              ppuVar9 = param_3;
              func_0x00010bf52a60();
            } while (ppuVar9 != (undefined **)0x0);
          }
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4e0));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4e8));
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined8 *)((long)register0x00000008 + -0x4c8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x4d0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x4c0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x4a0) = 0;
          _objc_retain(param_3);
          ppuVar9 = (undefined **)((long)register0x00000008 + -0x4d0);
          ppuVar22 = param_3;
          func_0x00010bf52a60();
          if (ppuVar22 != (undefined **)0x0) {
            unaff_x22 = (undefined **)0x0;
            lVar11 = **(long **)((long)register0x00000008 + -0x4c0);
            do {
              ppuVar9 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x4c0) != lVar11) {
                  _objc_enumerationMutation(param_3);
                }
                ppuVar20 = *(undefined ***)
                            (*(long *)((long)register0x00000008 + -0x4c8) + (long)ppuVar9 * 8);
                puVar3 = PTR_PTR_1126b4d28;
                _objc_alloc(PTR_PTR_1126b4d28);
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                param_7 = (undefined **)0x1;
                func_0x00010c04dcc0(puVar3);
                _objc_release(ppuVar20);
                func_0x00010befa120(ppuVar16);
                unaff_x22 = (undefined **)((long)unaff_x22 + 1);
                _objc_release(puVar3);
                ppuVar9 = (undefined **)((long)ppuVar9 + 1);
              } while (ppuVar22 != ppuVar9);
              ppuVar9 = (undefined **)((long)register0x00000008 + -0x4d0);
              ppuVar22 = param_3;
              func_0x00010bf52a60();
            } while (ppuVar22 != (undefined **)0x0);
          }
          _objc_release(param_3);
          ppuVar22 = ppuVar16;
          func_0x00010bf529e0();
          ppuVar15 = *(undefined ***)((long)register0x00000008 + -0x508);
          if (ppuVar22 == (undefined **)0x0) {
            ppuVar19 = (undefined **)0x0;
          }
          else {
            _objc_retain(ppuVar16);
            ppuVar19 = ppuVar16;
          }
          param_4 = *(undefined ***)((long)register0x00000008 + -0x4d8);
          ppuVar18 = *(undefined ***)((long)register0x00000008 + -0x4f8);
          ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x518);
          _objc_release(ppuVar16);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4f0));
          param_5 = *(undefined ***)((long)register0x00000008 + -0x510);
          param_6 = *(undefined ***)((long)register0x00000008 + -0x500);
        }
      }
      else {
        ppuVar18 = *(undefined ***)((long)register0x00000008 + -0x4f8);
        ppuVar19 = ppuVar18;
        func_0x00010c0f1e60();
        _objc_retainAutoreleasedReturnValue();
        param_4 = *(undefined ***)((long)register0x00000008 + -0x4d8);
        if (ppuVar19 == (undefined **)0x0) {
          ppuVar9 = (undefined **)0xffffffffffffffff;
          ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar22 = ppuVar18;
          func_0x00010c0f1e60();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar19);
        ppuVar19 = ppuVar18;
        func_0x00010c25b720();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar19 == (undefined **)0x0) {
          unaff_x22 = &PTR____CFConstantStringClassReference_110e58058;
        }
        else {
          unaff_x22 = ppuVar18;
          func_0x00010c25b720();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar19);
        _objc_release(unaff_x22);
        ppuVar19 = (undefined **)0x0;
      }
      _objc_release(ppuVar22);
      _objc_release(ppuVar18);
      _objc_release(param_4);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4e0));
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4e8));
      ppuVar16 = ppuVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x270))
      goto _objc_autoreleaseReturnValue;
      uVar12 = 0x106651038;
      ___stack_chk_fail();
      unaff_x21 = ppuVar19;
      unaff_x26 = param_3;
      param_2 = param_6;
    }
    else {
      ppuVar9 = param_4;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar19;
      func_0x00010c24b8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar19);
      _objc_release(ppuVar9);
      if (ppuVar15 != (undefined **)0x0) {
        unaff_x21 = (undefined **)(long)dVar24;
        _objc_retain(ppuVar22);
        unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(ppuVar22);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        _objc_retain(ppuVar22);
        ppuVar9 = ppuVar22;
        func_0x00010bf52a60();
        ppuVar20 = unaff_x25;
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar20 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x130);
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x130) != ppuVar20) {
                _objc_enumerationMutation(ppuVar22);
              }
              ppuVar15 = *(undefined ***)
                          (*(long *)((long)register0x00000008 + -0x138) + (long)unaff_x26 * 8);
              unaff_x23 = ppuVar15;
              func_0x00010c24b8c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (unaff_x23 != (undefined **)0x0) {
                func_0x00010c24b8c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(unaff_x24);
                _objc_release(ppuVar15);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (ppuVar9 != unaff_x26);
            ppuVar9 = ppuVar22;
            func_0x00010bf52a60();
          } while (ppuVar9 != (undefined **)0x0);
        }
        _objc_release(ppuVar22);
        _objc_release(ppuVar22);
        ppuVar9 = (undefined **)param_2[5];
        param_5 = (undefined **)param_2[9];
        param_6 = (undefined **)param_2[10];
        param_7 = (undefined **)param_2[0xb];
        ppuVar19 = unaff_x24;
        param_3 = unaff_x21;
        FUN_106650718();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = param_4;
LAB_1066506bc:
        _objc_release(unaff_x24);
        ppuVar18 = param_7;
        unaff_x22 = ppuVar15;
        unaff_x25 = ppuVar20;
        param_4 = ppuVar8;
        goto LAB_1066506c4;
      }
      ppuVar9 = param_4;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = ppuVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x21;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x1e0) = param_2;
      *(undefined ***)((long)register0x00000008 + -0x1d8) = param_4;
      if (unaff_x22 == (undefined **)0x0) {
        _objc_release(unaff_x21);
        _objc_release(ppuVar9);
LAB_10665019c:
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(param_4);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        _objc_retain(param_4);
        param_5 = (undefined **)((long)register0x00000008 + -0x100);
        param_6 = (undefined **)0x10;
        ppuVar18 = param_4;
        func_0x00010bf52a60();
        *(undefined ***)((long)register0x00000008 + -0x180) = ppuVar18;
        ppuVar19 = ppuVar9;
        if (ppuVar18 != (undefined **)0x0) {
          lVar11 = **(long **)((long)register0x00000008 + -0x130);
          *(undefined ***)((long)register0x00000008 + -0x1c8) = ppuVar9;
          *(undefined ***)((long)register0x00000008 + -0x1c0) = param_4;
          *(long *)((long)register0x00000008 + -0x1d0) = lVar11;
          do {
            param_2 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x130) != lVar11) {
                _objc_enumerationMutation(param_4);
              }
              unaff_x26 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -0x138) + (long)param_2 * 8);
              ppuVar19 = unaff_x26;
              func_0x00010c259880();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              ppuVar20 = (undefined **)PTR_PTR_1126c6d90;
              if (ppuVar19 == (undefined **)0x0) {
                ppuVar19 = unaff_x26;
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar19 != (undefined **)0x0) {
                  ppuVar19 = unaff_x26;
                  func_0x00010bfa3780();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar20 = ppuVar19;
                  func_0x00010bfa3760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar19);
                  ppuVar19 = ppuVar20;
                  func_0x00010bfa36c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar19 != (undefined **)0x0) {
                    ppuVar9 = unaff_x26;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar19 = ppuVar9;
                    func_0x00010bf93500();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar18 = ppuVar19;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar19);
                    _objc_release(ppuVar9);
                    puVar3 = PTR_PTR_1126b4bb0;
                    if (ppuVar18 == (undefined **)0x0) {
                      *(undefined8 *)((long)register0x00000008 + -400) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
                    }
                    else {
                      ppuVar9 = unaff_x26;
                      func_0x00010bfa3780(unaff_x26);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar19 = ppuVar9;
                      func_0x00010bf93500();
                      _objc_retainAutoreleasedReturnValue();
                      *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
                      func_0x00010c0f40e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar11 = *(long *)((long)register0x00000008 + -0x148);
                      _objc_release(ppuVar19);
                      _objc_release(ppuVar9);
                      if ((lVar11 == 0) &&
                         (puVar10 = puVar3, func_0x00010bfd5f00(), (int)puVar10 != 0)) {
                        puVar4 = puVar3;
                        func_0x00010bf5b080();
                        _objc_retainAutoreleasedReturnValue();
                        puVar10 = puVar4;
                        func_0x00010c2923e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar13 = puVar4;
                        func_0x00010c294420();
                        _objc_retainAutoreleasedReturnValue();
                        puVar17 = puVar4;
                        func_0x00010bf85d80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar4;
                        func_0x00010bfd5f20();
                        if ((int)puVar5 == 0) {
                          puVar5 = (undefined *)0x0;
                        }
                        else {
                          puVar5 = puVar4;
                          func_0x00010bf5b3e0();
                          _objc_retainAutoreleasedReturnValue();
                        }
                        _objc_release(puVar4);
                      }
                      else {
                        puVar10 = (undefined *)0x0;
                        puVar13 = (undefined *)0x0;
                        puVar17 = (undefined *)0x0;
                        puVar5 = (undefined *)0x0;
                      }
                      *(undefined **)((long)register0x00000008 + -0x1a0) = puVar5;
                      *(undefined **)((long)register0x00000008 + -0x198) = puVar17;
                      *(undefined **)((long)register0x00000008 + -400) = puVar13;
                      *(undefined **)((long)register0x00000008 + -0x188) = puVar10;
                      _objc_release(puVar3);
                    }
                    *(undefined **)((long)register0x00000008 + -0x1b0) = PTR_PTR_1126c6d90;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x1a8) = unaff_x26;
                    func_0x00010bf93680();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x1b8) = unaff_x26;
                    ppuVar9 = ppuVar20;
                    func_0x00010bfa36c0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar15 = ppuVar20;
                    func_0x00010c2711a0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x21 = ppuVar20;
                    func_0x00010c260dc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar19 = ppuVar20;
                    func_0x00010c0b46a0(ppuVar20);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar18 = ppuVar20;
                    func_0x00010c2520a0(ppuVar20);
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = *(undefined ***)((long)register0x00000008 + -0x1a0);
                    *(undefined8 *)((long)register0x00000008 + -0x1f0) =
                         *(undefined8 *)((long)register0x00000008 + -0x198);
                    *(undefined ***)((long)register0x00000008 + -0x1e8) = unaff_x26;
                    *(undefined8 *)((long)register0x00000008 + -0x200) =
                         *(undefined8 *)((long)register0x00000008 + -0x188);
                    *(undefined8 *)((long)register0x00000008 + -0x1f8) =
                         *(undefined8 *)((long)register0x00000008 + -400);
                    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
                    param_5 = ppuVar9;
                    param_6 = ppuVar15;
                    param_7 = unaff_x21;
                    func_0x00010c258680(uVar12);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar18);
                    _objc_release(ppuVar19);
                    _objc_release(unaff_x21);
                    _objc_release(ppuVar15);
                    _objc_release(ppuVar9);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x1b8));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x1a8));
                    ppuVar9 = *(undefined ***)((long)register0x00000008 + -0x1c8);
                    func_0x00010befa120(ppuVar9);
                    _objc_release(uVar12);
                    _objc_release(unaff_x26);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x198));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -400));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x188));
                    param_4 = *(undefined ***)((long)register0x00000008 + -0x1c0);
                    lVar11 = *(long *)((long)register0x00000008 + -0x1d0);
                  }
                  goto LAB_1066502c0;
                }
              }
              else {
                unaff_x21 = unaff_x26;
                func_0x00010c259880();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = unaff_x21;
                func_0x00010bf936c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c258660();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar15);
                _objc_release(unaff_x21);
                if (ppuVar20 == (undefined **)0x0) {
                  _objc_release(param_4);
                  ppuVar19 = (undefined **)0x0;
                  goto LAB_10665062c;
                }
                func_0x00010befa120(ppuVar9);
LAB_1066502c0:
                _objc_release(ppuVar20);
                unaff_x25 = ppuVar20;
              }
              param_2 = (undefined **)((long)param_2 + 1);
            } while (*(undefined ***)((long)register0x00000008 + -0x180) != param_2);
            param_5 = (undefined **)((long)register0x00000008 + -0x100);
            param_6 = (undefined **)0x10;
            ppuVar18 = param_4;
            func_0x00010bf52a60();
            *(undefined ***)((long)register0x00000008 + -0x180) = ppuVar18;
            ppuVar19 = ppuVar9;
          } while (ppuVar18 != (undefined **)0x0);
        }
        _objc_release(param_4);
        _objc_retain(ppuVar19);
        ppuVar20 = unaff_x25;
        ppuVar9 = ppuVar19;
LAB_10665062c:
        _objc_release(ppuVar9);
        _objc_release(param_4);
        ppuVar18 = param_4;
        _objc_release(param_4);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x178) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0xc2000000;
        *(code **)((long)register0x00000008 + -0x168) = FUN_106651374;
        *(undefined **)((long)register0x00000008 + -0x160) = &UNK_110841f80;
        _objc_retain(ppuVar19);
        *(undefined ***)((long)register0x00000008 + -0x158) = ppuVar19;
        *(undefined8 *)((long)register0x00000008 + -0x150) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        ppuVar9 = (undefined **)((long)register0x00000008 + -0x178);
        func_0x00010c0f7fc0(ppuVar18);
        _objc_release(ppuVar18);
        _objc_retain(ppuVar19);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x158));
        ppuVar8 = *(undefined ***)((long)register0x00000008 + -0x1d8);
        unaff_x23 = param_4;
        unaff_x24 = ppuVar19;
        goto LAB_1066506bc;
      }
      ppuVar18 = param_4;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar18;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      param_5 = ppuVar19;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = param_5;
      func_0x00010bf935c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(param_5);
      _objc_release(ppuVar19);
      _objc_release(ppuVar18);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
      _objc_release(ppuVar9);
      ppuVar15 = unaff_x22;
      unaff_x25 = param_5;
      if (unaff_x26 == (undefined **)0x0) goto LAB_10665019c;
      puVar3 = param_2[0xb];
      _objc_retain(ppuVar22);
      *(undefined **)((long)register0x00000008 + -0x180) = puVar3;
      _objc_retain(puVar3);
      ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar22);
      ppuVar16 = ppuVar20;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      _objc_retain(ppuVar22);
      ppuVar9 = ppuVar22;
      func_0x00010bf52a60();
      if (ppuVar9 != (undefined **)0x0) {
        param_4 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x130);
        param_2 = &PTR_PTR_1126b0000;
        do {
          unaff_x22 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x130) != param_4) {
              _objc_enumerationMutation(ppuVar22);
            }
            ppuVar15 = *(undefined ***)
                        (*(long *)((long)register0x00000008 + -0x138) + (long)unaff_x22 * 8);
            unaff_x21 = ppuVar15;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = unaff_x21;
            func_0x00010bf935c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(unaff_x21);
            ppuVar19 = (undefined **)PTR_PTR_1126b0ef0;
            ppuVar20 = ppuVar15;
            param_5 = (undefined **)0x0;
            if (ppuVar18 != (undefined **)0x0) {
              func_0x00010bfa3780();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = ppuVar15;
              func_0x00010bf935c0();
              _objc_retainAutoreleasedReturnValue();
              *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
              func_0x00010c0f40e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x148);
              _objc_release(unaff_x26);
              _objc_release(ppuVar15);
              if ((unaff_x21 == (undefined **)0x0) && (ppuVar19 != (undefined **)0x0)) {
                unaff_x21 = (undefined **)PTR_PTR_1126b0ef8;
                _objc_alloc();
                *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
                *(undefined1 *)((long)register0x00000008 + -0x200) = 0;
                func_0x00010c03ef40();
                *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x1f0) =
                     *(undefined8 *)((long)register0x00000008 + -0x180);
                *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
                param_7 = (undefined **)0x0;
                ppuVar15 = ppuVar19;
                func_0x000108482f84(ppuVar19,unaff_x21,0,0,0,0,0,0);
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar15 != (undefined **)0x0) {
                  func_0x00010befa120(ppuVar16);
                }
                _objc_release(ppuVar15);
                _objc_release(unaff_x21);
              }
              _objc_release(ppuVar19);
              ppuVar20 = ppuVar19;
              param_5 = ppuVar15;
            }
            unaff_x22 = (undefined **)((long)unaff_x22 + 1);
          } while (ppuVar9 != unaff_x22);
          ppuVar9 = ppuVar22;
          func_0x00010bf52a60();
          ppuVar18 = (undefined **)0x0;
        } while (ppuVar9 != (undefined **)0x0);
      }
      _objc_release(ppuVar22);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x180));
      _objc_release(ppuVar22);
      ppuVar8 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x1e0) + 0x30);
      ppuVar9 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x1e0) + 0x60);
      uVar12 = 0x10665017c;
      ppuVar15 = ppuVar16;
    }
    *(undefined ***)(puVar2 + -0x60) = param_2;
    *(undefined ***)(puVar2 + -0x58) = param_4;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = param_5;
    *(undefined ***)(puVar2 + -0x40) = ppuVar15;
    *(undefined ***)(puVar2 + -0x38) = ppuVar18;
    *(undefined ***)(puVar2 + -0x30) = unaff_x22;
    *(undefined ***)(puVar2 + -0x28) = unaff_x21;
    *(undefined ***)(puVar2 + -0x20) = ppuVar22;
    *(undefined ***)(puVar2 + -0x18) = ppuVar20;
    *(undefined1 **)(puVar2 + -0x10) = puVar23;
    *(undefined8 *)(puVar2 + -8) = uVar12;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar9);
    ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    *(undefined8 *)(puVar2 + -0x128) = 0;
    *(undefined8 *)(puVar2 + -0x130) = 0;
    *(undefined8 *)(puVar2 + -0x118) = 0;
    *(undefined8 *)(puVar2 + -0x120) = 0;
    *(undefined8 *)(puVar2 + -0x108) = 0;
    *(undefined8 *)(puVar2 + -0x110) = 0;
    *(undefined8 *)(puVar2 + -0xf8) = 0;
    *(undefined8 *)(puVar2 + -0x100) = 0;
    _objc_retain(ppuVar16);
    ppuVar19 = ppuVar16;
    func_0x00010bf52a60();
    unaff_x27 = param_4;
    unaff_x28 = param_2;
    if (ppuVar19 != (undefined **)0x0) {
      unaff_x27 = (undefined **)**(undefined8 **)(puVar2 + -0x120);
      unaff_x28 = &PTR_PTR_1126c2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar2 + -0x120) != unaff_x27) {
            _objc_enumerationMutation(ppuVar16);
          }
          puVar3 = PTR_PTR_1126c2098;
          ppuVar15 = *(undefined ***)(*(long *)(puVar2 + -0x128) + (long)unaff_x26 * 8);
          _objc_retain(ppuVar15);
          _objc_opt_class(puVar3);
          ppuVar18 = ppuVar15;
          _objc_opt_isKindOfClass(ppuVar15,puVar3);
          param_5 = ppuVar15;
          if (((ulong)ppuVar18 & 1) == 0) {
            param_5 = (undefined **)0x0;
          }
          _objc_retain(param_5);
          _objc_release(ppuVar15);
          if (param_5 != (undefined **)0x0) {
            func_0x00010befa120(ppuVar22);
          }
          _objc_release(param_5);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar19 != unaff_x26);
        ppuVar19 = ppuVar16;
        func_0x00010bf52a60();
      } while (ppuVar19 != (undefined **)0x0);
    }
    _objc_release(ppuVar16);
    ppuVar19 = ppuVar22;
    func_0x00010bf529e0();
    if (ppuVar19 == (undefined **)0x0) {
      _objc_retain(ppuVar16);
      ppuVar19 = ppuVar16;
      unaff_x25 = param_5;
    }
    else {
      func_0x00010c066720(ppuVar8);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        ppuVar18 = ppuVar22;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar18;
        func_0x00010c25b720();
        ppuVar20 = ppuVar18;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar15 == (undefined **)0xd) {
          ppuVar15 = ppuVar20;
          func_0x00010bf52680();
          unaff_x28 = ppuVar20;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar20;
          func_0x00010c298be0();
          *(undefined ***)(puVar2 + -0x168) = unaff_x28;
          *(undefined ***)(puVar2 + -0x160) = ppuVar7;
          *(undefined ***)(puVar2 + -0x170) = ppuVar15;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          unaff_x27 = (undefined **)0x6;
        }
        else {
          unaff_x26 = ppuVar20;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = (undefined **)0x1;
        }
        _objc_release(ppuVar20);
        param_5 = (undefined **)PTR_PTR_1126b4d28;
        _objc_alloc();
        param_7 = (undefined **)0x1;
        func_0x00010c04dcc0();
        func_0x00010befa120(ppuVar19);
        _objc_release(param_5);
        _objc_release(unaff_x26);
        ppuVar15 = ppuVar18;
      }
      else {
        *(undefined **)(puVar2 + -0x158) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(puVar2 + -0x150) = 0xc2000000;
        *(code **)(puVar2 + -0x148) = FUN_106651998;
        *(undefined **)(puVar2 + -0x140) = &UNK_110931a08;
        _objc_retain(ppuVar9);
        *(undefined ***)(puVar2 + -0x138) = ppuVar9;
        ppuVar19 = ppuVar22;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = *(undefined ***)(puVar2 + -0x138);
      }
      _objc_release(ppuVar18);
      unaff_x25 = param_5;
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    ppuVar18 = ppuVar16;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70)) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar19);
      return;
    }
    ___stack_chk_fail();
    puVar3 = ppuVar18[4];
    ppuVar18 = *(undefined ***)(ppuVar18[5] + 0x38);
    *(undefined ***)(puVar2 + -0x1d0) = unaff_x28;
    *(undefined ***)(puVar2 + -0x1c8) = unaff_x27;
    *(undefined ***)(puVar2 + -0x1c0) = unaff_x26;
    *(undefined ***)(puVar2 + -0x1b8) = unaff_x25;
    *(undefined ***)(puVar2 + -0x1b0) = ppuVar15;
    *(undefined ***)(puVar2 + -0x1a8) = ppuVar19;
    *(undefined ***)(puVar2 + -0x1a0) = ppuVar22;
    *(undefined ***)(puVar2 + -0x198) = ppuVar9;
    *(undefined ***)(puVar2 + -400) = ppuVar8;
    *(undefined ***)(puVar2 + -0x188) = ppuVar16;
    *(undefined1 **)(puVar2 + -0x180) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x178) = FUN_106651374;
    *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = ppuVar18;
    _objc_retain();
    *(undefined ***)(puVar2 + -0x3b0) = ppuVar18;
    _objc_retain(ppuVar18);
    *(undefined8 *)(puVar2 + -0x3b8) = 0;
    _objc_retain(0);
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar2 + -0x318) = 0;
    *(undefined8 *)(puVar2 + -800) = 0;
    *(undefined8 *)(puVar2 + -0x308) = 0;
    *(undefined8 *)(puVar2 + -0x310) = 0;
    *(undefined8 *)(puVar2 + -0x2f8) = 0;
    *(undefined8 *)(puVar2 + -0x300) = 0;
    *(undefined8 *)(puVar2 + -0x2e8) = 0;
    *(undefined8 *)(puVar2 + -0x2f0) = 0;
    _objc_retain(puVar3);
    *(undefined **)(puVar2 + -0x398) = puVar3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar11 = **(long **)(puVar2 + -0x310);
      *(long *)(puVar2 + -0x3a8) = lVar11;
      do {
        puVar10 = (undefined *)0x0;
        *(undefined **)(puVar2 + -0x3a0) = puVar3;
        do {
          if (**(long **)(puVar2 + -0x310) != lVar11) {
            _objc_enumerationMutation(*(undefined8 *)(puVar2 + -0x398));
          }
          unaff_x19 = (undefined **)PTR_PTR_1126c6d90;
          unaff_x25 = *(undefined ***)(*(long *)(puVar2 + -0x318) + (long)puVar10 * 8);
          _objc_retain(unaff_x25);
          _objc_opt_class();
          ppuVar22 = unaff_x25;
          _objc_opt_isKindOfClass();
          ppuVar9 = unaff_x25;
          if (((ulong)ppuVar22 & 1) == 0) {
            ppuVar9 = (undefined **)0x0;
          }
          _objc_retain(ppuVar9);
          _objc_release(unaff_x25);
          if (ppuVar9 != (undefined **)0x0) {
            unaff_x26 = unaff_x25;
            func_0x00010c258040();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010bf529e0();
            _objc_release(unaff_x26);
            if (unaff_x27 != (undefined **)0x0) {
              *(undefined8 *)(puVar2 + -0x338) = 0;
              *(undefined8 *)(puVar2 + -0x340) = 0;
              *(undefined8 *)(puVar2 + -0x328) = 0;
              *(undefined8 *)(puVar2 + -0x330) = 0;
              *(undefined8 *)(puVar2 + -0x358) = 0;
              *(undefined8 *)(puVar2 + -0x360) = 0;
              *(undefined8 *)(puVar2 + -0x348) = 0;
              *(undefined8 *)(puVar2 + -0x350) = 0;
              func_0x00010c258040();
              _objc_retainAutoreleasedReturnValue();
              ppuVar22 = unaff_x25;
              func_0x00010bf52a60();
              if (ppuVar22 != (undefined **)0x0) {
                lVar11 = **(long **)(puVar2 + -0x350);
                do {
                  ppuVar19 = (undefined **)0x0;
                  do {
                    if (**(long **)(puVar2 + -0x350) != lVar11) {
                      _objc_enumerationMutation(unaff_x25);
                    }
                    unaff_x27 = *(undefined ***)(*(long *)(puVar2 + -0x358) + (long)ppuVar19 * 8);
                    unaff_x28 = unaff_x27;
                    func_0x00010be36bc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar18 = unaff_x28;
                    func_0x00010c08fa60();
                    _objc_release(unaff_x28);
                    if (ppuVar18 != (undefined **)0x0) {
                      ppuVar18 = unaff_x27;
                      func_0x00010be36bc0(unaff_x27);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(unaff_x22);
                      _objc_release(ppuVar18);
                    }
                    ppuVar19 = (undefined **)((long)ppuVar19 + 1);
                  } while (ppuVar22 != ppuVar19);
                  ppuVar22 = unaff_x25;
                  func_0x00010bf52a60();
                  unaff_x26 = (undefined **)0x0;
                } while (ppuVar22 != (undefined **)0x0);
              }
              _objc_release(unaff_x25);
              lVar11 = *(long *)(puVar2 + -0x3a8);
              puVar3 = *(undefined **)(puVar2 + -0x3a0);
            }
          }
          _objc_release(ppuVar9);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar3);
        puVar3 = *(undefined **)(puVar2 + -0x398);
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    lVar11 = *(long *)(puVar2 + -0x398);
    _objc_release(lVar11);
    unaff_x21 = *(undefined ***)(puVar2 + -0x3b0);
    ppuVar9 = unaff_x21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)(puVar2 + -0x390) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar2 + -0x388) = 0xc2000000;
    *(code **)(puVar2 + -0x380) = FUN_10664fb6c;
    *(undefined **)(puVar2 + -0x378) = &UNK_1108846a8;
    unaff_x24 = *(undefined ***)(puVar2 + -0x3b8);
    *(undefined ***)(puVar2 + -0x370) = unaff_x22;
    *(undefined ***)(puVar2 + -0x368) = unaff_x24;
    _objc_retain(unaff_x24);
    _objc_retain(unaff_x22);
    func_0x00010c121840(ppuVar9);
    _objc_release(unaff_x23);
    _objc_release(ppuVar9);
    _objc_release(*(undefined8 *)(puVar2 + -0x368));
    _objc_release(*(undefined8 *)(puVar2 + -0x370));
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    unaff_x20 = lVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x1e0)) {
      return;
    }
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x4e0);
    param_4 = (undefined **)(puVar2 + -0x4e0);
    *(undefined ***)(puVar2 + -0x410) = unaff_x28;
    *(undefined ***)(puVar2 + -0x408) = unaff_x27;
    *(undefined ***)(puVar2 + -0x400) = unaff_x24;
    *(undefined ***)(puVar2 + -0x3f8) = unaff_x23;
    *(undefined ***)(puVar2 + -0x3f0) = unaff_x22;
    *(undefined ***)(puVar2 + -1000) = unaff_x21;
    *(undefined ***)(puVar2 + -0x3e0) = ppuVar9;
    *(long *)(puVar2 + -0x3d8) = lVar11;
    *(undefined1 **)(puVar2 + -0x3d0) = puVar2 + -0x180;
    *(code **)(puVar2 + -0x3c8) = FUN_10664fb6c;
    unaff_x29 = puVar2 + -0x3d0;
    *(undefined8 *)(puVar2 + -0x418) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_3 = unaff_x19;
    _objc_retain(unaff_x19);
    param_1 = 0.0;
    *(undefined8 *)(puVar2 + -0x4d8) = 0;
    *(undefined8 *)(puVar2 + -0x4e0) = 0;
    *(undefined8 *)(puVar2 + -0x4c8) = 0;
    *(undefined8 *)(puVar2 + -0x4d0) = 0;
    *(undefined8 *)(puVar2 + -0x4b8) = 0;
    *(undefined8 *)(puVar2 + -0x4c0) = 0;
    *(undefined8 *)(puVar2 + -0x4a8) = 0;
    *(undefined8 *)(puVar2 + -0x4b0) = 0;
    param_5 = (undefined **)(puVar2 + -0x498);
    param_6 = (undefined **)0x10;
    ppuVar9 = unaff_x19;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      unaff_x23 = (undefined **)**(undefined8 **)(puVar2 + -0x4d0);
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar2 + -0x4d0) != unaff_x23) {
            _objc_enumerationMutation(unaff_x19);
          }
          unaff_x22 = *(undefined ***)(unaff_x20 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c222e60();
          _objc_release(unaff_x22);
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar9 != unaff_x24);
        param_5 = (undefined **)(puVar2 + -0x498);
        param_6 = (undefined **)0x10;
        ppuVar9 = unaff_x19;
        param_4 = (undefined **)(puVar2 + -0x4e0);
        func_0x00010bf52a60();
        unaff_x21 = (undefined **)0x0;
      } while (ppuVar9 != (undefined **)0x0);
    }
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      param_3 = (undefined **)0x0;
      (**(code **)(*(long *)(unaff_x20 + 0x28) + 0x10))();
    }
    param_2 = unaff_x19;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x418)) {
      return;
    }
    unaff_x30 = FUN_10664fc9c;
    ___stack_chk_fail();
    unaff_d8 = dVar24;
  } while( true );
}



/* Entry: 106650718; end: 106651373;  */

/* WARNING: Possible PIC construction at 0x000106650178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010665017c) */

void FUN_106650718(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined **unaff_x19;
  undefined **ppuVar13;
  undefined **unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined **unaff_x21;
  ulong uVar17;
  undefined **unaff_x22;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **unaff_x23;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar23;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar24;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double unaff_d8;
  double dVar25;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = param_2;
    ppuVar9 = param_6;
    _objc_retain();
    *(undefined ***)((long)register0x00000008 + -0x2e8) = param_3;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    *(undefined ***)((long)register0x00000008 + -0x2e0) = param_6;
    _objc_retain(param_6);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    *(undefined **)((long)register0x00000008 + -0x2d8) = puVar3;
    ppuVar21 = param_4;
    func_0x00010c259120();
    _objc_retainAutoreleasedReturnValue();
    *(undefined ***)((long)register0x00000008 + -0x2f8) = ppuVar21;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
    *(undefined8 *)((long)register0x00000008 + -600) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
    _objc_retain(param_1);
    ppuVar21 = (undefined **)((long)register0x00000008 + -0x280);
    ppuVar22 = param_1;
    func_0x00010bf52a60();
    ppuVar13 = &PTR_PTR_1126cc000;
    if (ppuVar22 != (undefined **)0x0) {
      lVar14 = **(long **)((long)register0x00000008 + -0x270);
      do {
        ppuVar21 = (undefined **)0x0;
        do {
          if (**(long **)((long)register0x00000008 + -0x270) != lVar14) {
            _objc_enumerationMutation(param_1);
          }
          ppuVar10 = (undefined **)PTR_PTR_1126cc560;
          uVar17 = *(ulong *)(*(long *)((long)register0x00000008 + -0x278) + (long)ppuVar21 * 8);
          _objc_retain(uVar17);
          _objc_opt_class();
          uVar6 = uVar17;
          _objc_opt_isKindOfClass();
          uVar1 = uVar17;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar17);
          if (uVar1 != 0) {
            func_0x00010bf935c0(uVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x2d8));
            _objc_release(uVar17);
          }
          _objc_release(uVar1);
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        } while (ppuVar22 != ppuVar21);
        ppuVar21 = (undefined **)((long)register0x00000008 + -0x280);
        ppuVar22 = param_1;
        func_0x00010bf52a60();
        unaff_x22 = (undefined **)0x0;
      } while (ppuVar22 != (undefined **)0x0);
    }
    _objc_release(param_1);
    ppuVar22 = param_1;
    func_0x00010bf529e0();
    unaff_x26 = param_2;
    unaff_x25 = param_4;
    unaff_x28 = param_5;
    if (param_2 < ppuVar22) {
      ppuVar22 = param_1;
      ppuVar21 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = (undefined **)PTR_PTR_1126cc560;
      _objc_opt_class();
      ppuVar19 = ppuVar22;
      _objc_opt_isKindOfClass();
      unaff_x20 = ppuVar22;
      if (((ulong)ppuVar19 & 1) == 0) {
        unaff_x20 = (undefined **)0x0;
      }
      _objc_retain(unaff_x20);
      _objc_release(ppuVar22);
      ppuVar24 = unaff_x20;
      func_0x00010c0fdbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR_PTR_1126c55c0;
      unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x2d8);
      ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x2f8);
      param_6 = ppuVar9;
      ppuVar19 = unaff_x22;
      if (ppuVar24 != (undefined **)0x0) {
        ppuVar19 = unaff_x20;
        func_0x00010c0fdbe0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar19;
        func_0x00010c1dcc60(puVar3);
        _objc_release(ppuVar19);
        param_6 = ppuVar9;
      }
      ppuVar24 = unaff_x27;
      func_0x00010bf529e0();
      ppuVar9 = (undefined **)PTR_PTR_1126b0ef0;
      if (ppuVar24 == (undefined **)0x1) {
        ppuVar19 = unaff_x27;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
        ppuVar21 = ppuVar19;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = *(undefined ***)((long)register0x00000008 + -0x288);
        _objc_release(ppuVar19);
        if (ppuVar13 == (undefined **)0x0) {
          ppuVar19 = param_4;
          func_0x00010bf4de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010baf2e4c();
          ppuVar21 = ppuVar9;
          func_0x00010c10a000(*(undefined8 *)((long)register0x00000008 + -0x2e8));
          _objc_release(ppuVar19);
        }
        _objc_release(ppuVar9);
      }
      ppuVar9 = unaff_x27;
      func_0x00010bf529e0();
      if (ppuVar9 == (undefined **)0x0) {
        _objc_retain(param_1);
        unaff_x19 = param_1;
      }
      else {
        *(undefined ***)((long)register0x00000008 + -0x318) = unaff_x20;
        *(undefined ***)((long)register0x00000008 + -0x310) = param_4;
        _objc_retain(unaff_x27);
        *(undefined ***)((long)register0x00000008 + -0x300) = param_5;
        _objc_retain(param_5);
        _objc_retain(ppuVar22);
        _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x2e0));
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        *(undefined **)((long)register0x00000008 + -0x2f0) = puVar3;
        *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
        _objc_retain(unaff_x27);
        ppuVar21 = unaff_x27;
        func_0x00010bf52a60();
        if (ppuVar21 != (undefined **)0x0) {
          ppuVar13 = (undefined **)0x0;
          lVar14 = **(long **)((long)register0x00000008 + -0x220);
          do {
            ppuVar22 = (undefined **)0x0;
            do {
              ppuVar19 = ppuVar13;
              if (**(long **)((long)register0x00000008 + -0x220) != lVar14) {
                _objc_enumerationMutation(unaff_x27);
              }
              *(undefined ***)((long)register0x00000008 + -0x238) = ppuVar19;
              ppuVar9 = (undefined **)PTR_PTR_1126b0ef0;
              func_0x00010c0f40e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = *(undefined ***)((long)register0x00000008 + -0x238);
              _objc_retain(ppuVar13);
              _objc_release(ppuVar19);
              if (((ppuVar13 == (undefined **)0x0) && (ppuVar9 != (undefined **)0x0)) &&
                 (ppuVar24 = ppuVar9, func_0x00010bf31ee0(), (int)ppuVar24 == 0x26)) {
                ppuVar18 = *(undefined ***)((long)register0x00000008 + -0x2f8);
                ppuVar24 = ppuVar18;
                func_0x00010c154260();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c153ec0(ppuVar18);
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = (undefined **)0x0;
                ppuVar19 = ppuVar9;
                param_6 = ppuVar24;
                func_0x00010848095c(ppuVar9,0,0,*(undefined8 *)((long)register0x00000008 + -0x2e0),0
                                    ,ppuVar24,ppuVar18);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar18);
                _objc_release(ppuVar24);
                if (ppuVar19 != (undefined **)0x0) {
                  func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x2f0));
                }
                _objc_release(ppuVar19);
                unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x2d8);
              }
              _objc_release(ppuVar9);
              ppuVar22 = (undefined **)((long)ppuVar22 + 1);
            } while (ppuVar21 != ppuVar22);
            ppuVar21 = unaff_x27;
            func_0x00010bf52a60();
          } while (ppuVar21 != (undefined **)0x0);
          _objc_release(ppuVar13);
          ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x2f8);
        }
        *(undefined ***)((long)register0x00000008 + -0x308) = param_1;
        _objc_release(unaff_x27);
        ppuVar13 = *(undefined ***)((long)register0x00000008 + -0x300);
        ppuVar21 = ppuVar13;
        func_0x00010c269d40(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x2f0);
        func_0x00010c28a480();
        _objc_release(ppuVar21);
        _objc_release(uVar15);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x2e0);
        _objc_release(uVar15);
        _objc_release(ppuVar22);
        _objc_release(ppuVar13);
        _objc_release(unaff_x27);
        unaff_x26 = (undefined **)PTR_PTR_1126cc568;
        func_0x00010c0f4600();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x2e8));
        _objc_retain(uVar15);
        *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
        ppuVar21 = unaff_x26;
        func_0x00010bf52a60();
        *(undefined ***)((long)register0x00000008 + -0x2f0) = unaff_x26;
        if (ppuVar21 != (undefined **)0x0) {
          lVar14 = **(long **)((long)register0x00000008 + -0x220);
          do {
            ppuVar22 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x220) != lVar14) {
                _objc_enumerationMutation(*(undefined8 *)((long)register0x00000008 + -0x2f0));
              }
              ppuVar23 = *(undefined ***)
                          (*(long *)((long)register0x00000008 + -0x228) + (long)ppuVar22 * 8);
              ppuVar9 = ppuVar23;
              func_0x00010bf454e0(ppuVar23);
              _objc_retainAutoreleasedReturnValue();
              ppuVar19 = ppuVar23;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar24 = ppuVar23;
              func_0x00010bf82560(ppuVar23);
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar23;
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar23;
              func_0x00010bf454e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar23;
              func_0x00010c26fe00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c07dce0(ppuVar23);
              ppuVar8 = ppuVar18;
              ppuVar10 = ppuVar7;
              func_0x000107a8673c(ppuVar18,ppuVar7,ppuVar13,ppuVar23,
                                  *(undefined8 *)((long)register0x00000008 + -0x2e0));
              _objc_retainAutoreleasedReturnValue();
              param_6 = ppuVar8;
              func_0x00010c066de0(*(undefined8 *)((long)register0x00000008 + -0x2e8));
              _objc_release(ppuVar8);
              _objc_release(ppuVar13);
              _objc_release(ppuVar7);
              _objc_release(ppuVar18);
              _objc_release(ppuVar24);
              _objc_release(ppuVar19);
              _objc_release(ppuVar9);
              ppuVar22 = (undefined **)((long)ppuVar22 + 1);
            } while (ppuVar21 != ppuVar22);
            unaff_x26 = *(undefined ***)((long)register0x00000008 + -0x2f0);
            ppuVar21 = unaff_x26;
            func_0x00010bf52a60();
          } while (ppuVar21 != (undefined **)0x0);
        }
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2e0));
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2e8));
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
        _objc_retain(unaff_x26);
        ppuVar21 = (undefined **)((long)register0x00000008 + -0x2d0);
        ppuVar22 = unaff_x26;
        func_0x00010bf52a60();
        if (ppuVar22 != (undefined **)0x0) {
          ppuVar19 = (undefined **)0x0;
          lVar14 = **(long **)((long)register0x00000008 + -0x2c0);
          do {
            ppuVar21 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x2c0) != lVar14) {
                _objc_enumerationMutation(unaff_x26);
              }
              ppuVar13 = *(undefined ***)
                          (*(long *)((long)register0x00000008 + -0x2c8) + (long)ppuVar21 * 8);
              puVar3 = PTR_PTR_1126b4d28;
              _objc_alloc(PTR_PTR_1126b4d28);
              func_0x00010bf454e0();
              _objc_retainAutoreleasedReturnValue();
              param_6 = (undefined **)0x1;
              func_0x00010c04dcc0(puVar3);
              _objc_release(ppuVar13);
              func_0x00010befa120(ppuVar9);
              ppuVar19 = (undefined **)((long)ppuVar19 + 1);
              _objc_release(puVar3);
              ppuVar21 = (undefined **)((long)ppuVar21 + 1);
            } while (ppuVar22 != ppuVar21);
            ppuVar21 = (undefined **)((long)register0x00000008 + -0x2d0);
            ppuVar22 = unaff_x26;
            func_0x00010bf52a60();
          } while (ppuVar22 != (undefined **)0x0);
        }
        _objc_release(unaff_x26);
        ppuVar22 = ppuVar9;
        func_0x00010bf529e0();
        param_1 = *(undefined ***)((long)register0x00000008 + -0x308);
        if (ppuVar22 == (undefined **)0x0) {
          unaff_x19 = (undefined **)0x0;
        }
        else {
          _objc_retain(ppuVar9);
          unaff_x19 = ppuVar9;
        }
        unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x2d8);
        ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x2f8);
        unaff_x20 = *(undefined ***)((long)register0x00000008 + -0x318);
        _objc_release(ppuVar9);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2f0));
        unaff_x25 = *(undefined ***)((long)register0x00000008 + -0x310);
        unaff_x28 = *(undefined ***)((long)register0x00000008 + -0x300);
      }
    }
    else {
      ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x2f8);
      ppuVar19 = ppuVar22;
      func_0x00010c0f1e60();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x2d8);
      if (ppuVar19 == (undefined **)0x0) {
        ppuVar21 = (undefined **)0xffffffffffffffff;
        unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        param_6 = ppuVar9;
      }
      else {
        unaff_x20 = ppuVar22;
        func_0x00010c0f1e60();
        _objc_retainAutoreleasedReturnValue();
        param_6 = ppuVar9;
      }
      _objc_release(ppuVar19);
      ppuVar9 = ppuVar22;
      func_0x00010c25b720();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar19 = &PTR____CFConstantStringClassReference_110e58058;
      }
      else {
        ppuVar19 = ppuVar22;
        func_0x00010c25b720();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar9);
      _objc_release(ppuVar19);
      unaff_x19 = (undefined **)0x0;
    }
    _objc_release(unaff_x20);
    _objc_release(ppuVar22);
    _objc_release(unaff_x27);
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2e0));
    _objc_release(unaff_x28);
    _objc_release(unaff_x25);
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2e8));
    ppuVar9 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
    break;
    uVar15 = 0x106651038;
    ___stack_chk_fail();
    puVar2 = (undefined1 *)((long)register0x00000008 + -800);
    unaff_x21 = unaff_x19;
    dVar25 = unaff_d8;
SUB_106651038:
    *(undefined ***)(puVar2 + -0x60) = unaff_x28;
    *(undefined ***)(puVar2 + -0x58) = unaff_x27;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = unaff_x25;
    *(undefined ***)(puVar2 + -0x40) = param_1;
    *(undefined ***)(puVar2 + -0x38) = ppuVar22;
    *(undefined ***)(puVar2 + -0x30) = ppuVar19;
    *(undefined ***)(puVar2 + -0x28) = unaff_x21;
    *(undefined ***)(puVar2 + -0x20) = unaff_x20;
    *(undefined ***)(puVar2 + -0x18) = ppuVar13;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = uVar15;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(ppuVar10);
    _objc_retain(ppuVar21);
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    *(undefined8 *)(puVar2 + -0x128) = 0;
    *(undefined8 *)(puVar2 + -0x130) = 0;
    *(undefined8 *)(puVar2 + -0x118) = 0;
    *(undefined8 *)(puVar2 + -0x120) = 0;
    *(undefined8 *)(puVar2 + -0x108) = 0;
    *(undefined8 *)(puVar2 + -0x110) = 0;
    *(undefined8 *)(puVar2 + -0xf8) = 0;
    *(undefined8 *)(puVar2 + -0x100) = 0;
    _objc_retain(ppuVar9);
    ppuVar22 = ppuVar9;
    func_0x00010bf52a60();
    ppuVar24 = unaff_x27;
    ppuVar19 = unaff_x28;
    if (ppuVar22 != (undefined **)0x0) {
      ppuVar24 = (undefined **)**(undefined8 **)(puVar2 + -0x120);
      ppuVar19 = &PTR_PTR_1126c2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar2 + -0x120) != ppuVar24) {
            _objc_enumerationMutation(ppuVar9);
          }
          puVar3 = PTR_PTR_1126c2098;
          param_1 = *(undefined ***)(*(long *)(puVar2 + -0x128) + (long)unaff_x26 * 8);
          _objc_retain(param_1);
          _objc_opt_class(puVar3);
          ppuVar18 = param_1;
          _objc_opt_isKindOfClass(param_1,puVar3);
          unaff_x25 = param_1;
          if (((ulong)ppuVar18 & 1) == 0) {
            unaff_x25 = (undefined **)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(param_1);
          if (unaff_x25 != (undefined **)0x0) {
            func_0x00010befa120(ppuVar13);
          }
          _objc_release(unaff_x25);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar22 != unaff_x26);
        ppuVar22 = ppuVar9;
        func_0x00010bf52a60();
      } while (ppuVar22 != (undefined **)0x0);
    }
    _objc_release(ppuVar9);
    ppuVar22 = ppuVar13;
    func_0x00010bf529e0();
    if (ppuVar22 == (undefined **)0x0) {
      _objc_retain(ppuVar9);
      unaff_x19 = ppuVar9;
    }
    else {
      func_0x00010c066720(ppuVar10);
      if (ppuVar21 == (undefined **)0x0) {
        unaff_x19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        ppuVar22 = ppuVar13;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = ppuVar22;
        func_0x00010c25b720();
        ppuVar18 = ppuVar22;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar24 == (undefined **)0xd) {
          ppuVar24 = ppuVar18;
          func_0x00010bf52680();
          ppuVar19 = ppuVar18;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar18;
          func_0x00010c298be0();
          *(undefined ***)(puVar2 + -0x168) = ppuVar19;
          *(undefined ***)(puVar2 + -0x160) = ppuVar7;
          *(undefined ***)(puVar2 + -0x170) = ppuVar24;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar19);
          ppuVar24 = (undefined **)0x6;
        }
        else {
          unaff_x26 = ppuVar18;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar24 = (undefined **)0x1;
        }
        _objc_release(ppuVar18);
        unaff_x25 = (undefined **)PTR_PTR_1126b4d28;
        _objc_alloc();
        param_6 = (undefined **)0x1;
        func_0x00010c04dcc0();
        func_0x00010befa120(unaff_x19);
        _objc_release(unaff_x25);
        _objc_release(unaff_x26);
        param_1 = ppuVar22;
      }
      else {
        *(undefined **)(puVar2 + -0x158) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(puVar2 + -0x150) = 0xc2000000;
        *(code **)(puVar2 + -0x148) = FUN_106651998;
        *(undefined **)(puVar2 + -0x140) = &UNK_110931a08;
        _objc_retain(ppuVar21);
        *(undefined ***)(puVar2 + -0x138) = ppuVar21;
        unaff_x19 = ppuVar13;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = *(undefined ***)(puVar2 + -0x138);
      }
      _objc_release(ppuVar22);
    }
    _objc_release(ppuVar13);
    _objc_release(ppuVar21);
    _objc_release(ppuVar10);
    ppuVar22 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70)) break;
    ___stack_chk_fail();
    puVar3 = ppuVar22[4];
    ppuVar22 = *(undefined ***)(ppuVar22[5] + 0x38);
    *(undefined ***)(puVar2 + -0x1d0) = ppuVar19;
    *(undefined ***)(puVar2 + -0x1c8) = ppuVar24;
    *(undefined ***)(puVar2 + -0x1c0) = unaff_x26;
    *(undefined ***)(puVar2 + -0x1b8) = unaff_x25;
    *(undefined ***)(puVar2 + -0x1b0) = param_1;
    *(undefined ***)(puVar2 + -0x1a8) = unaff_x19;
    *(undefined ***)(puVar2 + -0x1a0) = ppuVar13;
    *(undefined ***)(puVar2 + -0x198) = ppuVar21;
    *(undefined ***)(puVar2 + -400) = ppuVar10;
    *(undefined ***)(puVar2 + -0x188) = ppuVar9;
    *(undefined1 **)(puVar2 + -0x180) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x178) = FUN_106651374;
    *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar21 = ppuVar22;
    _objc_retain();
    *(undefined ***)(puVar2 + -0x3b0) = ppuVar22;
    _objc_retain(ppuVar22);
    *(undefined8 *)(puVar2 + -0x3b8) = 0;
    _objc_retain(0);
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar2 + -0x318) = 0;
    *(undefined8 *)(puVar2 + -800) = 0;
    *(undefined8 *)(puVar2 + -0x308) = 0;
    *(undefined8 *)(puVar2 + -0x310) = 0;
    *(undefined8 *)(puVar2 + -0x2f8) = 0;
    *(undefined8 *)(puVar2 + -0x300) = 0;
    *(undefined8 *)(puVar2 + -0x2e8) = 0;
    *(undefined8 *)(puVar2 + -0x2f0) = 0;
    _objc_retain(puVar3);
    *(undefined **)(puVar2 + -0x398) = puVar3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar14 = **(long **)(puVar2 + -0x310);
      *(long *)(puVar2 + -0x3a8) = lVar14;
      do {
        puVar11 = (undefined *)0x0;
        *(undefined **)(puVar2 + -0x3a0) = puVar3;
        do {
          if (**(long **)(puVar2 + -0x310) != lVar14) {
            _objc_enumerationMutation(*(undefined8 *)(puVar2 + -0x398));
          }
          ppuVar21 = (undefined **)PTR_PTR_1126c6d90;
          unaff_x25 = *(undefined ***)(*(long *)(puVar2 + -0x318) + (long)puVar11 * 8);
          _objc_retain(unaff_x25);
          _objc_opt_class();
          ppuVar10 = unaff_x25;
          _objc_opt_isKindOfClass();
          ppuVar13 = unaff_x25;
          if (((ulong)ppuVar10 & 1) == 0) {
            ppuVar13 = (undefined **)0x0;
          }
          _objc_retain(ppuVar13);
          _objc_release(unaff_x25);
          if (ppuVar13 != (undefined **)0x0) {
            unaff_x26 = unaff_x25;
            func_0x00010c258040();
            _objc_retainAutoreleasedReturnValue();
            ppuVar24 = unaff_x26;
            func_0x00010bf529e0();
            _objc_release(unaff_x26);
            if (ppuVar24 != (undefined **)0x0) {
              *(undefined8 *)(puVar2 + -0x338) = 0;
              *(undefined8 *)(puVar2 + -0x340) = 0;
              *(undefined8 *)(puVar2 + -0x328) = 0;
              *(undefined8 *)(puVar2 + -0x330) = 0;
              *(undefined8 *)(puVar2 + -0x358) = 0;
              *(undefined8 *)(puVar2 + -0x360) = 0;
              *(undefined8 *)(puVar2 + -0x348) = 0;
              *(undefined8 *)(puVar2 + -0x350) = 0;
              func_0x00010c258040();
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = unaff_x25;
              func_0x00010bf52a60();
              if (ppuVar10 != (undefined **)0x0) {
                lVar14 = **(long **)(puVar2 + -0x350);
                do {
                  ppuVar22 = (undefined **)0x0;
                  do {
                    if (**(long **)(puVar2 + -0x350) != lVar14) {
                      _objc_enumerationMutation(unaff_x25);
                    }
                    ppuVar24 = *(undefined ***)(*(long *)(puVar2 + -0x358) + (long)ppuVar22 * 8);
                    ppuVar19 = ppuVar24;
                    func_0x00010be36bc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar9 = ppuVar19;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar19);
                    if (ppuVar9 != (undefined **)0x0) {
                      ppuVar9 = ppuVar24;
                      func_0x00010be36bc0(ppuVar24);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(unaff_x22);
                      _objc_release(ppuVar9);
                    }
                    ppuVar22 = (undefined **)((long)ppuVar22 + 1);
                  } while (ppuVar10 != ppuVar22);
                  ppuVar10 = unaff_x25;
                  func_0x00010bf52a60();
                  unaff_x26 = (undefined **)0x0;
                } while (ppuVar10 != (undefined **)0x0);
              }
              _objc_release(unaff_x25);
              lVar14 = *(long *)(puVar2 + -0x3a8);
              puVar3 = *(undefined **)(puVar2 + -0x3a0);
            }
          }
          _objc_release(ppuVar13);
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar3);
        puVar3 = *(undefined **)(puVar2 + -0x398);
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    lVar12 = *(long *)(puVar2 + -0x398);
    _objc_release(lVar12);
    unaff_x21 = *(undefined ***)(puVar2 + -0x3b0);
    ppuVar13 = unaff_x21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)(puVar2 + -0x390) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar2 + -0x388) = 0xc2000000;
    *(code **)(puVar2 + -0x380) = FUN_10664fb6c;
    *(undefined **)(puVar2 + -0x378) = &UNK_1108846a8;
    unaff_x24 = *(undefined ***)(puVar2 + -0x3b8);
    *(undefined ***)(puVar2 + -0x370) = unaff_x22;
    *(undefined ***)(puVar2 + -0x368) = unaff_x24;
    _objc_retain(unaff_x24);
    _objc_retain(unaff_x22);
    func_0x00010c121840(ppuVar13);
    _objc_release(unaff_x23);
    _objc_release(ppuVar13);
    _objc_release(*(undefined8 *)(puVar2 + -0x368));
    _objc_release(*(undefined8 *)(puVar2 + -0x370));
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    lVar14 = lVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x1e0)) {
      return;
    }
    ___stack_chk_fail();
    unaff_x27 = (undefined **)(puVar2 + -0x4e0);
    *(undefined ***)(puVar2 + -0x410) = ppuVar19;
    *(undefined ***)(puVar2 + -0x408) = ppuVar24;
    *(undefined ***)(puVar2 + -0x400) = unaff_x24;
    *(undefined ***)(puVar2 + -0x3f8) = unaff_x23;
    *(undefined ***)(puVar2 + -0x3f0) = unaff_x22;
    *(undefined ***)(puVar2 + -1000) = unaff_x21;
    *(undefined ***)(puVar2 + -0x3e0) = ppuVar13;
    *(long *)(puVar2 + -0x3d8) = lVar12;
    *(undefined1 **)(puVar2 + -0x3d0) = puVar2 + -0x180;
    *(code **)(puVar2 + -0x3c8) = FUN_10664fb6c;
    *(undefined8 *)(puVar2 + -0x418) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_2 = ppuVar21;
    _objc_retain(ppuVar21);
    unaff_d8 = 0.0;
    *(undefined8 *)(puVar2 + -0x4d8) = 0;
    *(undefined8 *)(puVar2 + -0x4e0) = 0;
    *(undefined8 *)(puVar2 + -0x4c8) = 0;
    *(undefined8 *)(puVar2 + -0x4d0) = 0;
    *(undefined8 *)(puVar2 + -0x4b8) = 0;
    *(undefined8 *)(puVar2 + -0x4c0) = 0;
    *(undefined8 *)(puVar2 + -0x4a8) = 0;
    *(undefined8 *)(puVar2 + -0x4b0) = 0;
    param_4 = (undefined **)(puVar2 + -0x498);
    param_5 = (undefined **)0x10;
    ppuVar13 = ppuVar21;
    func_0x00010bf52a60();
    if (ppuVar13 != (undefined **)0x0) {
      unaff_x23 = (undefined **)**(undefined8 **)(puVar2 + -0x4d0);
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar2 + -0x4d0) != unaff_x23) {
            _objc_enumerationMutation(ppuVar21);
          }
          unaff_x22 = *(undefined ***)(lVar14 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c222e60();
          _objc_release(unaff_x22);
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar13 != unaff_x24);
        param_4 = (undefined **)(puVar2 + -0x498);
        param_5 = (undefined **)0x10;
        ppuVar13 = ppuVar21;
        unaff_x27 = (undefined **)(puVar2 + -0x4e0);
        func_0x00010bf52a60();
        unaff_x21 = (undefined **)0x0;
      } while (ppuVar13 != (undefined **)0x0);
    }
    if (*(long *)(lVar14 + 0x28) != 0) {
      param_2 = (undefined **)0x0;
      (**(code **)(*(long *)(lVar14 + 0x28) + 0x10))();
    }
    unaff_x28 = ppuVar21;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x418)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)(puVar2 + -0x550) = unaff_d9;
    *(double *)(puVar2 + -0x548) = dVar25;
    *(undefined ***)(puVar2 + -0x540) = ppuVar19;
    *(undefined ***)(puVar2 + -0x538) = ppuVar24;
    *(undefined ***)(puVar2 + -0x530) = unaff_x26;
    *(undefined ***)(puVar2 + -0x528) = unaff_x25;
    *(undefined ***)(puVar2 + -0x520) = unaff_x24;
    *(undefined ***)(puVar2 + -0x518) = unaff_x23;
    *(undefined ***)(puVar2 + -0x510) = unaff_x22;
    *(undefined ***)(puVar2 + -0x508) = unaff_x21;
    *(long *)(puVar2 + -0x500) = lVar14;
    *(undefined ***)(puVar2 + -0x4f8) = ppuVar21;
    *(undefined1 **)(puVar2 + -0x4f0) = puVar2 + -0x3d0;
    *(code **)(puVar2 + -0x4e8) = FUN_10664fc9c;
    unaff_x29 = puVar2 + -0x4f0;
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x6e0);
    *(undefined8 *)(puVar2 + -0x560) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_3 = unaff_x27;
    _objc_retain(unaff_x27);
    unaff_x20 = unaff_x27;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252020(unaff_x27);
    ppuVar21 = unaff_x20;
    func_0x00010bf529e0();
    if (ppuVar21 == (undefined **)0x0) {
      unaff_x19 = (undefined **)0x0;
    }
    else {
      ppuVar21 = unaff_x27;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar21;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = ppuVar13;
      func_0x00010c24b8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar13);
      _objc_release(ppuVar21);
      if (unaff_x22 == (undefined **)0x0) {
        ppuVar21 = unaff_x27;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = ppuVar21;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = unaff_x21;
        func_0x00010bfa3780();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)(puVar2 + -0x6c0) = unaff_x28;
        *(undefined ***)(puVar2 + -0x6b8) = unaff_x27;
        if (ppuVar19 == (undefined **)0x0) {
          _objc_release(unaff_x21);
          _objc_release(ppuVar21);
        }
        else {
          ppuVar22 = unaff_x27;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar22;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar13;
          func_0x00010bfa3780();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf935c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(unaff_x25);
          _objc_release(ppuVar13);
          _objc_release(ppuVar22);
          _objc_release(ppuVar19);
          _objc_release(unaff_x21);
          _objc_release(ppuVar21);
          unaff_x22 = ppuVar19;
          if (unaff_x26 != (undefined **)0x0) goto code_r0x00010664ff58;
        }
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(unaff_x27);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)(puVar2 + -0x618) = 0;
        *(undefined8 *)(puVar2 + -0x620) = 0;
        *(undefined8 *)(puVar2 + -0x608) = 0;
        *(undefined8 *)(puVar2 + -0x610) = 0;
        *(undefined8 *)(puVar2 + -0x5f8) = 0;
        *(undefined8 *)(puVar2 + -0x600) = 0;
        *(undefined8 *)(puVar2 + -0x5e8) = 0;
        *(undefined8 *)(puVar2 + -0x5f0) = 0;
        _objc_retain(unaff_x27);
        param_4 = (undefined **)(puVar2 + -0x5e0);
        param_5 = (undefined **)0x10;
        ppuVar13 = unaff_x27;
        func_0x00010bf52a60();
        *(undefined ***)(puVar2 + -0x660) = ppuVar13;
        unaff_x19 = ppuVar21;
        if (ppuVar13 != (undefined **)0x0) {
          lVar14 = **(long **)(puVar2 + -0x610);
          *(undefined ***)(puVar2 + -0x6a8) = ppuVar21;
          *(undefined ***)(puVar2 + -0x6a0) = unaff_x27;
          *(long *)(puVar2 + -0x6b0) = lVar14;
          do {
            unaff_x28 = (undefined **)0x0;
            do {
              if (**(long **)(puVar2 + -0x610) != lVar14) {
                _objc_enumerationMutation(unaff_x27);
              }
              unaff_x26 = *(undefined ***)(*(long *)(puVar2 + -0x618) + (long)unaff_x28 * 8);
              ppuVar10 = unaff_x26;
              func_0x00010c259880();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              ppuVar13 = (undefined **)PTR_PTR_1126c6d90;
              if (ppuVar10 == (undefined **)0x0) {
                ppuVar13 = unaff_x26;
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar13 != (undefined **)0x0) {
                  ppuVar10 = unaff_x26;
                  func_0x00010bfa3780();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = ppuVar10;
                  func_0x00010bfa3760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar10);
                  ppuVar10 = ppuVar13;
                  func_0x00010bfa36c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar10 != (undefined **)0x0) {
                    ppuVar21 = unaff_x26;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar10 = ppuVar21;
                    func_0x00010bf93500();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar22 = ppuVar10;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar10);
                    _objc_release(ppuVar21);
                    puVar3 = PTR_PTR_1126b4bb0;
                    if (ppuVar22 == (undefined **)0x0) {
                      *(undefined8 *)(puVar2 + -0x670) = 0;
                      *(undefined8 *)(puVar2 + -0x668) = 0;
                      *(undefined8 *)(puVar2 + -0x680) = 0;
                      *(undefined8 *)(puVar2 + -0x678) = 0;
                    }
                    else {
                      ppuVar21 = unaff_x26;
                      func_0x00010bfa3780(unaff_x26);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar10 = ppuVar21;
                      func_0x00010bf93500();
                      _objc_retainAutoreleasedReturnValue();
                      *(undefined8 *)(puVar2 + -0x628) = 0;
                      func_0x00010c0f40e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar14 = *(long *)(puVar2 + -0x628);
                      _objc_release(ppuVar10);
                      _objc_release(ppuVar21);
                      if ((lVar14 == 0) &&
                         (puVar11 = puVar3, func_0x00010bfd5f00(), (int)puVar11 != 0)) {
                        puVar4 = puVar3;
                        func_0x00010bf5b080();
                        _objc_retainAutoreleasedReturnValue();
                        puVar11 = puVar4;
                        func_0x00010c2923e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar16 = puVar4;
                        func_0x00010c294420();
                        _objc_retainAutoreleasedReturnValue();
                        puVar20 = puVar4;
                        func_0x00010bf85d80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar4;
                        func_0x00010bfd5f20();
                        if ((int)puVar5 == 0) {
                          puVar5 = (undefined *)0x0;
                        }
                        else {
                          puVar5 = puVar4;
                          func_0x00010bf5b3e0();
                          _objc_retainAutoreleasedReturnValue();
                        }
                        _objc_release(puVar4);
                      }
                      else {
                        puVar11 = (undefined *)0x0;
                        puVar16 = (undefined *)0x0;
                        puVar20 = (undefined *)0x0;
                        puVar5 = (undefined *)0x0;
                      }
                      *(undefined **)(puVar2 + -0x680) = puVar5;
                      *(undefined **)(puVar2 + -0x678) = puVar20;
                      *(undefined **)(puVar2 + -0x670) = puVar16;
                      *(undefined **)(puVar2 + -0x668) = puVar11;
                      _objc_release(puVar3);
                    }
                    *(undefined **)(puVar2 + -0x690) = PTR_PTR_1126c6d90;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)(puVar2 + -0x688) = unaff_x26;
                    func_0x00010bf93680();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)(puVar2 + -0x698) = unaff_x26;
                    ppuVar21 = ppuVar13;
                    func_0x00010bfa36c0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x22 = ppuVar13;
                    func_0x00010c2711a0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x21 = ppuVar13;
                    func_0x00010c260dc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar10 = ppuVar13;
                    func_0x00010c0b46a0(ppuVar13);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar22 = ppuVar13;
                    func_0x00010c2520a0(ppuVar13);
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = *(undefined ***)(puVar2 + -0x680);
                    *(undefined8 *)(puVar2 + -0x6d0) = *(undefined8 *)(puVar2 + -0x678);
                    *(undefined ***)(puVar2 + -0x6c8) = unaff_x26;
                    *(undefined8 *)(puVar2 + -0x6e0) = *(undefined8 *)(puVar2 + -0x668);
                    *(undefined8 *)(puVar2 + -0x6d8) = *(undefined8 *)(puVar2 + -0x670);
                    uVar15 = *(undefined8 *)(puVar2 + -0x690);
                    param_4 = ppuVar21;
                    param_5 = unaff_x22;
                    param_6 = unaff_x21;
                    func_0x00010c258680(uVar15);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar22);
                    _objc_release(ppuVar10);
                    _objc_release(unaff_x21);
                    _objc_release(unaff_x22);
                    _objc_release(ppuVar21);
                    _objc_release(*(undefined8 *)(puVar2 + -0x698));
                    _objc_release(*(undefined8 *)(puVar2 + -0x688));
                    ppuVar21 = *(undefined ***)(puVar2 + -0x6a8);
                    func_0x00010befa120(ppuVar21);
                    _objc_release(uVar15);
                    _objc_release(unaff_x26);
                    _objc_release(*(undefined8 *)(puVar2 + -0x678));
                    _objc_release(*(undefined8 *)(puVar2 + -0x670));
                    _objc_release(*(undefined8 *)(puVar2 + -0x668));
                    unaff_x27 = *(undefined ***)(puVar2 + -0x6a0);
                    lVar14 = *(long *)(puVar2 + -0x6b0);
                  }
                  goto LAB_1066502c0;
                }
              }
              else {
                unaff_x21 = unaff_x26;
                func_0x00010c259880();
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = unaff_x21;
                func_0x00010bf936c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c258660();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x22);
                _objc_release(unaff_x21);
                if (ppuVar13 == (undefined **)0x0) {
                  _objc_release(unaff_x27);
                  unaff_x19 = (undefined **)0x0;
                  goto LAB_10665062c;
                }
                func_0x00010befa120(ppuVar21);
LAB_1066502c0:
                _objc_release(ppuVar13);
                unaff_x25 = ppuVar13;
              }
              unaff_x28 = (undefined **)((long)unaff_x28 + 1);
            } while (*(undefined ***)(puVar2 + -0x660) != unaff_x28);
            param_4 = (undefined **)(puVar2 + -0x5e0);
            param_5 = (undefined **)0x10;
            ppuVar13 = unaff_x27;
            func_0x00010bf52a60();
            *(undefined ***)(puVar2 + -0x660) = ppuVar13;
            unaff_x19 = ppuVar21;
          } while (ppuVar13 != (undefined **)0x0);
        }
        _objc_release(unaff_x27);
        _objc_retain(unaff_x19);
        ppuVar13 = unaff_x25;
        ppuVar21 = unaff_x19;
LAB_10665062c:
        _objc_release(ppuVar21);
        _objc_release(unaff_x27);
        ppuVar21 = unaff_x27;
        _objc_release(unaff_x27);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(puVar2 + -0x658) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(puVar2 + -0x650) = 0xc2000000;
        *(code **)(puVar2 + -0x648) = FUN_106651374;
        *(undefined **)(puVar2 + -0x640) = &UNK_110841f80;
        _objc_retain(unaff_x19);
        *(undefined ***)(puVar2 + -0x638) = unaff_x19;
        *(undefined8 *)(puVar2 + -0x630) = *(undefined8 *)(puVar2 + -0x6c0);
        param_3 = (undefined **)(puVar2 + -0x658);
        func_0x00010c0f7fc0(ppuVar21);
        _objc_release(ppuVar21);
        _objc_retain(unaff_x19);
        _objc_release(*(undefined8 *)(puVar2 + -0x638));
        ppuVar21 = *(undefined ***)(puVar2 + -0x6b8);
        unaff_x23 = unaff_x27;
        unaff_x24 = unaff_x19;
      }
      else {
        unaff_x21 = (undefined **)(long)unaff_d8;
        _objc_retain(unaff_x20);
        unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(unaff_x20);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)(puVar2 + -0x618) = 0;
        *(undefined8 *)(puVar2 + -0x620) = 0;
        *(undefined8 *)(puVar2 + -0x608) = 0;
        *(undefined8 *)(puVar2 + -0x610) = 0;
        *(undefined8 *)(puVar2 + -0x5f8) = 0;
        *(undefined8 *)(puVar2 + -0x600) = 0;
        *(undefined8 *)(puVar2 + -0x5e8) = 0;
        *(undefined8 *)(puVar2 + -0x5f0) = 0;
        _objc_retain(unaff_x20);
        ppuVar21 = unaff_x20;
        func_0x00010bf52a60();
        ppuVar13 = unaff_x25;
        if (ppuVar21 != (undefined **)0x0) {
          ppuVar13 = (undefined **)**(undefined8 **)(puVar2 + -0x610);
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)(puVar2 + -0x610) != ppuVar13) {
                _objc_enumerationMutation(unaff_x20);
              }
              unaff_x22 = *(undefined ***)(*(long *)(puVar2 + -0x618) + (long)unaff_x26 * 8);
              unaff_x23 = unaff_x22;
              func_0x00010c24b8c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (unaff_x23 != (undefined **)0x0) {
                func_0x00010c24b8c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(unaff_x24);
                _objc_release(unaff_x22);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (ppuVar21 != unaff_x26);
            ppuVar21 = unaff_x20;
            func_0x00010bf52a60();
          } while (ppuVar21 != (undefined **)0x0);
        }
        _objc_release(unaff_x20);
        _objc_release(unaff_x20);
        param_3 = (undefined **)unaff_x28[5];
        param_4 = (undefined **)unaff_x28[9];
        param_5 = (undefined **)unaff_x28[10];
        param_6 = (undefined **)unaff_x28[0xb];
        unaff_x19 = unaff_x24;
        param_2 = unaff_x21;
        FUN_106650718();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = unaff_x27;
      }
      _objc_release(unaff_x24);
      unaff_x25 = ppuVar13;
      unaff_x27 = ppuVar21;
    }
    _objc_release(unaff_x20);
    param_1 = unaff_x27;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x560)) break;
    unaff_x30 = FUN_106650718;
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
code_r0x00010664ff58:
  puVar3 = unaff_x28[0xb];
  _objc_retain(unaff_x20);
  *(undefined **)(puVar2 + -0x660) = puVar3;
  _objc_retain(puVar3);
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(unaff_x20);
  ppuVar9 = ppuVar13;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(puVar2 + -0x618) = 0;
  *(undefined8 *)(puVar2 + -0x620) = 0;
  *(undefined8 *)(puVar2 + -0x608) = 0;
  *(undefined8 *)(puVar2 + -0x610) = 0;
  *(undefined8 *)(puVar2 + -0x5f8) = 0;
  *(undefined8 *)(puVar2 + -0x600) = 0;
  *(undefined8 *)(puVar2 + -0x5e8) = 0;
  *(undefined8 *)(puVar2 + -0x5f0) = 0;
  _objc_retain(unaff_x20);
  ppuVar21 = unaff_x20;
  func_0x00010bf52a60();
  if (ppuVar21 != (undefined **)0x0) {
    unaff_x27 = (undefined **)**(undefined8 **)(puVar2 + -0x610);
    unaff_x28 = &PTR_PTR_1126b0000;
    do {
      ppuVar19 = (undefined **)0x0;
      do {
        if ((undefined **)**(undefined8 **)(puVar2 + -0x610) != unaff_x27) {
          _objc_enumerationMutation(unaff_x20);
        }
        ppuVar24 = *(undefined ***)(*(long *)(puVar2 + -0x618) + (long)ppuVar19 * 8);
        unaff_x21 = ppuVar24;
        func_0x00010bfa3780();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = unaff_x21;
        func_0x00010bf935c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x21);
        ppuVar10 = (undefined **)PTR_PTR_1126b0ef0;
        ppuVar13 = ppuVar24;
        unaff_x25 = (undefined **)0x0;
        if (ppuVar22 != (undefined **)0x0) {
          func_0x00010bfa3780();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = ppuVar24;
          func_0x00010bf935c0();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar2 + -0x628) = 0;
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x21 = *(undefined ***)(puVar2 + -0x628);
          _objc_release(unaff_x26);
          _objc_release(ppuVar24);
          if ((unaff_x21 == (undefined **)0x0) && (ppuVar10 != (undefined **)0x0)) {
            unaff_x21 = (undefined **)PTR_PTR_1126b0ef8;
            _objc_alloc();
            *(undefined8 *)(puVar2 + -0x6d8) = 0;
            puVar2[-0x6e0] = 0;
            func_0x00010c03ef40();
            *(undefined8 *)(puVar2 + -0x6e0) = 0;
            *(undefined8 *)(puVar2 + -0x6d8) = 0;
            *(undefined8 *)(puVar2 + -0x6d0) = *(undefined8 *)(puVar2 + -0x660);
            *(undefined8 *)(puVar2 + -0x6c8) = 0;
            param_6 = (undefined **)0x0;
            ppuVar24 = ppuVar10;
            func_0x000108482f84(ppuVar10,unaff_x21,0,0,0,0,0,0);
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar24 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar9);
            }
            _objc_release(ppuVar24);
            _objc_release(unaff_x21);
          }
          _objc_release(ppuVar10);
          ppuVar13 = ppuVar10;
          unaff_x25 = ppuVar24;
        }
        ppuVar19 = (undefined **)((long)ppuVar19 + 1);
      } while (ppuVar21 != ppuVar19);
      ppuVar21 = unaff_x20;
      func_0x00010bf52a60();
      ppuVar22 = (undefined **)0x0;
    } while (ppuVar21 != (undefined **)0x0);
  }
  _objc_release(unaff_x20);
  _objc_release(*(undefined8 *)(puVar2 + -0x660));
  _objc_release(unaff_x20);
  ppuVar10 = *(undefined ***)(*(long *)(puVar2 + -0x6c0) + 0x30);
  ppuVar21 = *(undefined ***)(*(long *)(puVar2 + -0x6c0) + 0x60);
  uVar15 = 0x10665017c;
  puVar2 = puVar2 + -0x6e0;
  param_1 = ppuVar9;
  dVar25 = unaff_d8;
  goto SUB_106651038;
}



/* Entry: 106651374; end: 106651387;  */

/* WARNING: Possible PIC construction at 0x000106650178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010665017c) */

void FUN_106651374(undefined **param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **in_x5;
  undefined *puVar10;
  long lVar11;
  undefined **unaff_x19;
  long lVar12;
  undefined8 uVar13;
  undefined **unaff_x20;
  undefined **ppuVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined **unaff_x21;
  undefined **ppuVar17;
  undefined **unaff_x22;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **unaff_x23;
  undefined **ppuVar22;
  undefined **unaff_x24;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *puVar27;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar28;
  double unaff_d8;
  undefined8 unaff_d9;
  
  do {
    puVar3 = param_1[4];
    ppuVar8 = *(undefined ***)(param_1[5] + 0x38);
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar9 = ppuVar8;
    _objc_retain();
    *(undefined ***)((long)register0x00000008 + -0x240) = ppuVar8;
    _objc_retain(ppuVar8);
    *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
    _objc_retain(0);
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined8 *)((long)register0x00000008 + -400) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
    _objc_retain(puVar3);
    *(undefined **)((long)register0x00000008 + -0x228) = puVar3;
    func_0x00010bf52a60();
    ppuVar23 = unaff_x25;
    ppuVar25 = unaff_x27;
    ppuVar21 = unaff_x28;
    if (puVar3 != (undefined *)0x0) {
      lVar12 = **(long **)((long)register0x00000008 + -0x1a0);
      *(long *)((long)register0x00000008 + -0x238) = lVar12;
      do {
        puVar10 = (undefined *)0x0;
        *(undefined **)((long)register0x00000008 + -0x230) = puVar3;
        do {
          if (**(long **)((long)register0x00000008 + -0x1a0) != lVar12) {
            _objc_enumerationMutation(*(undefined8 *)((long)register0x00000008 + -0x228));
          }
          ppuVar9 = (undefined **)PTR_PTR_1126c6d90;
          ppuVar23 = *(undefined ***)
                      (*(long *)((long)register0x00000008 + -0x1a8) + (long)puVar10 * 8);
          _objc_retain(ppuVar23);
          _objc_opt_class();
          ppuVar14 = ppuVar23;
          _objc_opt_isKindOfClass();
          ppuVar22 = ppuVar23;
          if (((ulong)ppuVar14 & 1) == 0) {
            ppuVar22 = (undefined **)0x0;
          }
          _objc_retain(ppuVar22);
          _objc_release(ppuVar23);
          if (ppuVar22 != (undefined **)0x0) {
            unaff_x26 = ppuVar23;
            func_0x00010c258040();
            _objc_retainAutoreleasedReturnValue();
            ppuVar25 = unaff_x26;
            func_0x00010bf529e0();
            _objc_release(unaff_x26);
            if (ppuVar25 != (undefined **)0x0) {
              *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
              func_0x00010c258040();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = ppuVar23;
              func_0x00010bf52a60();
              if (ppuVar14 != (undefined **)0x0) {
                lVar12 = **(long **)((long)register0x00000008 + -0x1e0);
                do {
                  ppuVar18 = (undefined **)0x0;
                  do {
                    if (**(long **)((long)register0x00000008 + -0x1e0) != lVar12) {
                      _objc_enumerationMutation(ppuVar23);
                    }
                    ppuVar25 = *(undefined ***)
                                (*(long *)((long)register0x00000008 + -0x1e8) + (long)ppuVar18 * 8);
                    ppuVar21 = ppuVar25;
                    func_0x00010be36bc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar19 = ppuVar21;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar21);
                    if (ppuVar19 != (undefined **)0x0) {
                      ppuVar19 = ppuVar25;
                      func_0x00010be36bc0(ppuVar25);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(ppuVar8);
                      _objc_release(ppuVar19);
                    }
                    ppuVar18 = (undefined **)((long)ppuVar18 + 1);
                  } while (ppuVar14 != ppuVar18);
                  ppuVar14 = ppuVar23;
                  func_0x00010bf52a60();
                  unaff_x26 = (undefined **)0x0;
                } while (ppuVar14 != (undefined **)0x0);
              }
              _objc_release(ppuVar23);
              lVar12 = *(long *)((long)register0x00000008 + -0x238);
              puVar3 = *(undefined **)((long)register0x00000008 + -0x230);
            }
          }
          _objc_release(ppuVar22);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar3);
        puVar3 = *(undefined **)((long)register0x00000008 + -0x228);
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    lVar11 = *(long *)((long)register0x00000008 + -0x228);
    _objc_release(lVar11);
    ppuVar14 = *(undefined ***)((long)register0x00000008 + -0x240);
    ppuVar18 = ppuVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar8;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)register0x00000008 + -0x220) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)register0x00000008 + -0x218) = 0xc2000000;
    *(code **)((long)register0x00000008 + -0x210) = FUN_10664fb6c;
    *(undefined **)((long)register0x00000008 + -0x208) = &UNK_1108846a8;
    ppuVar22 = *(undefined ***)((long)register0x00000008 + -0x248);
    *(undefined ***)((long)register0x00000008 + -0x200) = ppuVar8;
    *(undefined ***)((long)register0x00000008 + -0x1f8) = ppuVar22;
    _objc_retain(ppuVar22);
    _objc_retain(ppuVar8);
    func_0x00010c121840(ppuVar18);
    _objc_release(ppuVar19);
    _objc_release(ppuVar18);
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x1f8));
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x200));
    _objc_release(ppuVar22);
    _objc_release(ppuVar8);
    _objc_release(ppuVar14);
    lVar12 = lVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
      return;
    }
    ___stack_chk_fail();
    unaff_x27 = (undefined **)((long)register0x00000008 + -0x370);
    *(undefined ***)((long)register0x00000008 + -0x2a0) = ppuVar21;
    *(undefined ***)((long)register0x00000008 + -0x298) = ppuVar25;
    *(undefined ***)((long)register0x00000008 + -0x290) = ppuVar22;
    *(undefined ***)((long)register0x00000008 + -0x288) = ppuVar19;
    *(undefined ***)((long)register0x00000008 + -0x280) = ppuVar8;
    *(undefined ***)((long)register0x00000008 + -0x278) = ppuVar14;
    *(undefined ***)((long)register0x00000008 + -0x270) = ppuVar18;
    *(long *)((long)register0x00000008 + -0x268) = lVar11;
    *(undefined1 **)((long)register0x00000008 + -0x260) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -600) = FUN_10664fb6c;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = ppuVar9;
    _objc_retain(ppuVar9);
    dVar28 = 0.0;
    *(undefined8 *)((long)register0x00000008 + -0x368) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x370) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x360) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x350) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
    unaff_x25 = (undefined **)((long)register0x00000008 + -0x328);
    ppuVar18 = (undefined **)0x10;
    ppuVar17 = ppuVar9;
    func_0x00010bf52a60();
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar19 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x360);
      do {
        ppuVar22 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x360) != ppuVar19) {
            _objc_enumerationMutation(ppuVar9);
          }
          ppuVar8 = *(undefined ***)(lVar12 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c222e60();
          _objc_release(ppuVar8);
          ppuVar22 = (undefined **)((long)ppuVar22 + 1);
        } while (ppuVar17 != ppuVar22);
        unaff_x25 = (undefined **)((long)register0x00000008 + -0x328);
        ppuVar18 = (undefined **)0x10;
        ppuVar17 = ppuVar9;
        unaff_x27 = (undefined **)((long)register0x00000008 + -0x370);
        func_0x00010bf52a60();
        ppuVar14 = (undefined **)0x0;
      } while (ppuVar17 != (undefined **)0x0);
    }
    if (*(long *)(lVar12 + 0x28) != 0) {
      ppuVar7 = (undefined **)0x0;
      (**(code **)(*(long *)(lVar12 + 0x28) + 0x10))();
    }
    unaff_x28 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x2a8)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x3e0) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x3d8) = unaff_d8;
    *(undefined ***)((long)register0x00000008 + -0x3d0) = ppuVar21;
    *(undefined ***)((long)register0x00000008 + -0x3c8) = ppuVar25;
    *(undefined ***)((long)register0x00000008 + -0x3c0) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x3b8) = ppuVar23;
    *(undefined ***)((long)register0x00000008 + -0x3b0) = ppuVar22;
    *(undefined ***)((long)register0x00000008 + -0x3a8) = ppuVar19;
    *(undefined ***)((long)register0x00000008 + -0x3a0) = ppuVar8;
    *(undefined ***)((long)register0x00000008 + -0x398) = ppuVar14;
    *(long *)((long)register0x00000008 + -0x390) = lVar12;
    *(undefined ***)((long)register0x00000008 + -0x388) = ppuVar9;
    *(undefined1 **)((long)register0x00000008 + -0x380) =
         (undefined1 *)((long)register0x00000008 + -0x260);
    *(code **)((long)register0x00000008 + -0x378) = FUN_10664fc9c;
    puVar27 = (undefined1 *)((long)register0x00000008 + -0x380);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x570);
    *(undefined8 *)((long)register0x00000008 + -0x3f0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar9 = unaff_x27;
    _objc_retain(unaff_x27);
    ppuVar25 = unaff_x27;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252020(unaff_x27);
    ppuVar21 = ppuVar25;
    func_0x00010bf529e0();
    if (ppuVar21 == (undefined **)0x0) {
      unaff_x23 = (undefined **)0x0;
      ppuVar21 = in_x5;
LAB_1066506c4:
      _objc_release(ppuVar25);
      unaff_x24 = unaff_x27;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x3f0))
      {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
        return;
      }
      ___stack_chk_fail();
      *(undefined ***)((long)register0x00000008 + -0x5d0) = unaff_x28;
      *(undefined ***)((long)register0x00000008 + -0x5c8) = unaff_x27;
      *(undefined ***)((long)register0x00000008 + -0x5c0) = unaff_x26;
      *(undefined ***)((long)register0x00000008 + -0x5b8) = ppuVar23;
      *(undefined ***)((long)register0x00000008 + -0x5b0) = ppuVar22;
      *(undefined ***)((long)register0x00000008 + -0x5a8) = ppuVar19;
      *(undefined ***)((long)register0x00000008 + -0x5a0) = ppuVar8;
      *(undefined ***)((long)register0x00000008 + -0x598) = ppuVar14;
      *(undefined ***)((long)register0x00000008 + -0x590) = ppuVar25;
      *(undefined ***)((long)register0x00000008 + -0x588) = unaff_x23;
      *(undefined1 **)((long)register0x00000008 + -0x580) = puVar27;
      *(code **)((long)register0x00000008 + -0x578) = FUN_106650718;
      puVar27 = (undefined1 *)((long)register0x00000008 + -0x580);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x890);
      *(undefined8 *)((long)register0x00000008 + -0x5e0) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      unaff_x20 = ppuVar7;
      in_x5 = ppuVar21;
      _objc_retain();
      *(undefined ***)((long)register0x00000008 + -0x858) = ppuVar9;
      _objc_retain(ppuVar9);
      _objc_retain(unaff_x25);
      _objc_retain(ppuVar18);
      *(undefined ***)((long)register0x00000008 + -0x850) = ppuVar21;
      _objc_retain(ppuVar21);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      *(undefined **)((long)register0x00000008 + -0x848) = puVar3;
      ppuVar9 = unaff_x25;
      func_0x00010c259120();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x868) = ppuVar9;
      *(undefined8 *)((long)register0x00000008 + -0x7e8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7f0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7d8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7e0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7c8) = 0;
      *(undefined8 *)((long)register0x00000008 + -2000) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x7c0) = 0;
      _objc_retain(unaff_x24);
      unaff_x21 = (undefined **)((long)register0x00000008 + -0x7f0);
      ppuVar25 = unaff_x24;
      func_0x00010bf52a60();
      ppuVar9 = &PTR_PTR_1126cc000;
      if (ppuVar25 != (undefined **)0x0) {
        lVar12 = **(long **)((long)register0x00000008 + -0x7e0);
        do {
          ppuVar8 = (undefined **)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x7e0) != lVar12) {
              _objc_enumerationMutation(unaff_x24);
            }
            unaff_x20 = (undefined **)PTR_PTR_1126cc560;
            uVar16 = *(ulong *)(*(long *)((long)register0x00000008 + -0x7e8) + (long)ppuVar8 * 8);
            _objc_retain(uVar16);
            _objc_opt_class();
            uVar6 = uVar16;
            _objc_opt_isKindOfClass();
            uVar1 = uVar16;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar16);
            if (uVar1 != 0) {
              func_0x00010bf935c0(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x848));
              _objc_release(uVar16);
            }
            _objc_release(uVar1);
            ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          } while (ppuVar25 != ppuVar8);
          unaff_x21 = (undefined **)((long)register0x00000008 + -0x7f0);
          ppuVar25 = unaff_x24;
          func_0x00010bf52a60();
          ppuVar8 = (undefined **)0x0;
        } while (ppuVar25 != (undefined **)0x0);
      }
      _objc_release(unaff_x24);
      ppuVar25 = unaff_x24;
      func_0x00010bf529e0();
      if (ppuVar7 < ppuVar25) {
        ppuVar21 = unaff_x24;
        unaff_x21 = ppuVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = (undefined **)PTR_PTR_1126cc560;
        _objc_opt_class();
        ppuVar23 = ppuVar21;
        _objc_opt_isKindOfClass();
        ppuVar25 = ppuVar21;
        if (((ulong)ppuVar23 & 1) == 0) {
          ppuVar25 = (undefined **)0x0;
        }
        _objc_retain(ppuVar25);
        _objc_release(ppuVar21);
        ppuVar23 = ppuVar25;
        func_0x00010c0fdbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = PTR_PTR_1126c55c0;
        unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
        if (ppuVar23 != (undefined **)0x0) {
          ppuVar8 = ppuVar25;
          func_0x00010c0fdbe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x21 = ppuVar8;
          func_0x00010c1dcc60(puVar3);
          _objc_release(ppuVar8);
        }
        ppuVar22 = unaff_x27;
        func_0x00010bf529e0();
        ppuVar23 = (undefined **)PTR_PTR_1126b0ef0;
        if (ppuVar22 == (undefined **)0x1) {
          ppuVar8 = unaff_x27;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x7f8) = 0;
          unaff_x21 = ppuVar8;
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = *(undefined ***)((long)register0x00000008 + -0x7f8);
          _objc_release(ppuVar8);
          if (ppuVar9 == (undefined **)0x0) {
            ppuVar8 = unaff_x25;
            func_0x00010bf4de00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010baf2e4c();
            unaff_x21 = ppuVar23;
            func_0x00010c10a000(*(undefined8 *)((long)register0x00000008 + -0x858));
            _objc_release(ppuVar8);
          }
          _objc_release(ppuVar23);
        }
        ppuVar23 = unaff_x27;
        func_0x00010bf529e0();
        if (ppuVar23 == (undefined **)0x0) {
          _objc_retain(unaff_x24);
          unaff_x23 = unaff_x24;
        }
        else {
          *(undefined ***)((long)register0x00000008 + -0x888) = ppuVar25;
          *(undefined ***)((long)register0x00000008 + -0x880) = unaff_x25;
          _objc_retain(unaff_x27);
          *(undefined ***)((long)register0x00000008 + -0x870) = ppuVar18;
          _objc_retain(ppuVar18);
          _objc_retain(ppuVar21);
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x850));
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined **)((long)register0x00000008 + -0x860) = puVar3;
          *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
          _objc_retain(unaff_x27);
          ppuVar9 = unaff_x27;
          func_0x00010bf52a60();
          if (ppuVar9 != (undefined **)0x0) {
            ppuVar25 = (undefined **)0x0;
            lVar12 = **(long **)((long)register0x00000008 + -0x790);
            do {
              ppuVar21 = (undefined **)0x0;
              do {
                ppuVar8 = ppuVar25;
                if (**(long **)((long)register0x00000008 + -0x790) != lVar12) {
                  _objc_enumerationMutation(unaff_x27);
                }
                *(undefined ***)((long)register0x00000008 + -0x7a8) = ppuVar8;
                ppuVar23 = (undefined **)PTR_PTR_1126b0ef0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar25 = *(undefined ***)((long)register0x00000008 + -0x7a8);
                _objc_retain(ppuVar25);
                _objc_release(ppuVar8);
                if (((ppuVar25 == (undefined **)0x0) && (ppuVar23 != (undefined **)0x0)) &&
                   (ppuVar22 = ppuVar23, func_0x00010bf31ee0(), (int)ppuVar22 == 0x26)) {
                  ppuVar14 = *(undefined ***)((long)register0x00000008 + -0x868);
                  ppuVar22 = ppuVar14;
                  func_0x00010c154260();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c153ec0(ppuVar14);
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x20 = (undefined **)0x0;
                  ppuVar8 = ppuVar23;
                  in_x5 = ppuVar22;
                  func_0x00010848095c(ppuVar23,0,0,
                                      *(undefined8 *)((long)register0x00000008 + -0x850),0,ppuVar22,
                                      ppuVar14);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar14);
                  _objc_release(ppuVar22);
                  if (ppuVar8 != (undefined **)0x0) {
                    func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x860));
                  }
                  _objc_release(ppuVar8);
                  unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
                }
                _objc_release(ppuVar23);
                ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              } while (ppuVar9 != ppuVar21);
              ppuVar9 = unaff_x27;
              func_0x00010bf52a60();
            } while (ppuVar9 != (undefined **)0x0);
            _objc_release(ppuVar25);
            ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
          }
          *(undefined ***)((long)register0x00000008 + -0x878) = unaff_x24;
          _objc_release(unaff_x27);
          ppuVar9 = *(undefined ***)((long)register0x00000008 + -0x870);
          ppuVar25 = ppuVar9;
          func_0x00010c269d40(ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x860);
          func_0x00010c28a480();
          _objc_release(ppuVar25);
          _objc_release(uVar13);
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x850);
          _objc_release(uVar13);
          _objc_release(ppuVar21);
          _objc_release(ppuVar9);
          _objc_release(unaff_x27);
          ppuVar7 = (undefined **)PTR_PTR_1126cc568;
          func_0x00010c0f4600();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(*(undefined8 *)((long)register0x00000008 + -0x858));
          _objc_retain(uVar13);
          *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
          ppuVar25 = ppuVar7;
          func_0x00010bf52a60();
          *(undefined ***)((long)register0x00000008 + -0x860) = ppuVar7;
          if (ppuVar25 != (undefined **)0x0) {
            lVar12 = **(long **)((long)register0x00000008 + -0x790);
            do {
              ppuVar21 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x790) != lVar12) {
                  _objc_enumerationMutation(*(undefined8 *)((long)register0x00000008 + -0x860));
                }
                ppuVar7 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -0x798) + (long)ppuVar21 * 8);
                ppuVar23 = ppuVar7;
                func_0x00010bf454e0(ppuVar7);
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar7;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar22 = ppuVar7;
                func_0x00010bf82560(ppuVar7);
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = ppuVar7;
                func_0x00010c245680();
                _objc_retainAutoreleasedReturnValue();
                ppuVar18 = ppuVar7;
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar9 = ppuVar7;
                func_0x00010c26fe00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c07dce0(ppuVar7);
                ppuVar19 = ppuVar14;
                unaff_x20 = ppuVar18;
                func_0x000107a8673c(ppuVar14,ppuVar18,ppuVar9,ppuVar7,
                                    *(undefined8 *)((long)register0x00000008 + -0x850));
                _objc_retainAutoreleasedReturnValue();
                in_x5 = ppuVar19;
                func_0x00010c066de0(*(undefined8 *)((long)register0x00000008 + -0x858));
                _objc_release(ppuVar19);
                _objc_release(ppuVar9);
                _objc_release(ppuVar18);
                _objc_release(ppuVar14);
                _objc_release(ppuVar22);
                _objc_release(ppuVar8);
                _objc_release(ppuVar23);
                ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              } while (ppuVar25 != ppuVar21);
              ppuVar7 = *(undefined ***)((long)register0x00000008 + -0x860);
              ppuVar25 = ppuVar7;
              func_0x00010bf52a60();
            } while (ppuVar25 != (undefined **)0x0);
          }
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x850));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x858));
          ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init();
          *(undefined8 *)((long)register0x00000008 + -0x838) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x840) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x828) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x830) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x818) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x820) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x808) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x810) = 0;
          _objc_retain(ppuVar7);
          unaff_x21 = (undefined **)((long)register0x00000008 + -0x840);
          ppuVar25 = ppuVar7;
          func_0x00010bf52a60();
          if (ppuVar25 != (undefined **)0x0) {
            ppuVar8 = (undefined **)0x0;
            lVar12 = **(long **)((long)register0x00000008 + -0x830);
            do {
              ppuVar21 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x830) != lVar12) {
                  _objc_enumerationMutation(ppuVar7);
                }
                ppuVar9 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -0x838) + (long)ppuVar21 * 8);
                puVar3 = PTR_PTR_1126b4d28;
                _objc_alloc(PTR_PTR_1126b4d28);
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                in_x5 = (undefined **)0x1;
                func_0x00010c04dcc0(puVar3);
                _objc_release(ppuVar9);
                func_0x00010befa120(ppuVar23);
                ppuVar8 = (undefined **)((long)ppuVar8 + 1);
                _objc_release(puVar3);
                ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              } while (ppuVar25 != ppuVar21);
              unaff_x21 = (undefined **)((long)register0x00000008 + -0x840);
              ppuVar25 = ppuVar7;
              func_0x00010bf52a60();
            } while (ppuVar25 != (undefined **)0x0);
          }
          _objc_release(ppuVar7);
          ppuVar25 = ppuVar23;
          func_0x00010bf529e0();
          unaff_x24 = *(undefined ***)((long)register0x00000008 + -0x878);
          if (ppuVar25 == (undefined **)0x0) {
            unaff_x23 = (undefined **)0x0;
          }
          else {
            _objc_retain(ppuVar23);
            unaff_x23 = ppuVar23;
          }
          unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
          ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
          ppuVar25 = *(undefined ***)((long)register0x00000008 + -0x888);
          _objc_release(ppuVar23);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x860));
          unaff_x25 = *(undefined ***)((long)register0x00000008 + -0x880);
          ppuVar18 = *(undefined ***)((long)register0x00000008 + -0x870);
        }
      }
      else {
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x868);
        ppuVar8 = ppuVar21;
        func_0x00010c0f1e60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x848);
        if (ppuVar8 == (undefined **)0x0) {
          unaff_x21 = (undefined **)0xffffffffffffffff;
          ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar25 = ppuVar21;
          func_0x00010c0f1e60();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar8);
        ppuVar23 = ppuVar21;
        func_0x00010c25b720();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar23 == (undefined **)0x0) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110e58058;
        }
        else {
          ppuVar8 = ppuVar21;
          func_0x00010c25b720();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar23);
        _objc_release(ppuVar8);
        unaff_x23 = (undefined **)0x0;
      }
      _objc_release(ppuVar25);
      _objc_release(ppuVar21);
      _objc_release(unaff_x27);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x850));
      _objc_release(ppuVar18);
      _objc_release(unaff_x25);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x858));
      unaff_x19 = unaff_x24;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x5e0))
      goto _objc_autoreleaseReturnValue;
      uVar13 = 0x106651038;
      ___stack_chk_fail();
      ppuVar14 = unaff_x23;
      unaff_x26 = ppuVar7;
      unaff_x28 = ppuVar18;
    }
    else {
      ppuVar8 = unaff_x27;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar9;
      func_0x00010c24b8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar14 = (undefined **)(long)dVar28;
        _objc_retain(ppuVar25);
        ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(ppuVar25);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4a0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x488) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x490) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x478) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x480) = 0;
        _objc_retain(ppuVar25);
        ppuVar8 = ppuVar25;
        func_0x00010bf52a60();
        ppuVar24 = ppuVar23;
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar24 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0);
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0) != ppuVar24) {
                _objc_enumerationMutation(ppuVar25);
              }
              ppuVar17 = *(undefined ***)
                          (*(long *)((long)register0x00000008 + -0x4a8) + (long)unaff_x26 * 8);
              ppuVar19 = ppuVar17;
              func_0x00010c24b8c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar19 != (undefined **)0x0) {
                func_0x00010c24b8c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(ppuVar22);
                _objc_release(ppuVar17);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (ppuVar8 != unaff_x26);
            ppuVar8 = ppuVar25;
            func_0x00010bf52a60();
          } while (ppuVar8 != (undefined **)0x0);
        }
        _objc_release(ppuVar25);
        _objc_release(ppuVar25);
        ppuVar9 = (undefined **)unaff_x28[5];
        unaff_x25 = (undefined **)unaff_x28[9];
        ppuVar18 = (undefined **)unaff_x28[10];
        in_x5 = (undefined **)unaff_x28[0xb];
        unaff_x23 = ppuVar22;
        ppuVar7 = ppuVar14;
        FUN_106650718();
        _objc_retainAutoreleasedReturnValue();
        ppuVar26 = unaff_x27;
LAB_1066506bc:
        _objc_release(ppuVar22);
        ppuVar21 = in_x5;
        ppuVar8 = ppuVar17;
        ppuVar23 = ppuVar24;
        unaff_x27 = ppuVar26;
        goto LAB_1066506c4;
      }
      ppuVar9 = unaff_x27;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar14;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x550) = unaff_x28;
      *(undefined ***)((long)register0x00000008 + -0x548) = unaff_x27;
      if (ppuVar8 == (undefined **)0x0) {
        _objc_release(ppuVar14);
        _objc_release(ppuVar9);
LAB_10665019c:
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(unaff_x27);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4a0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x488) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x490) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x478) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x480) = 0;
        _objc_retain(unaff_x27);
        unaff_x25 = (undefined **)((long)register0x00000008 + -0x470);
        ppuVar18 = (undefined **)0x10;
        ppuVar9 = unaff_x27;
        func_0x00010bf52a60();
        *(undefined ***)((long)register0x00000008 + -0x4f0) = ppuVar9;
        unaff_x23 = ppuVar8;
        if (ppuVar9 != (undefined **)0x0) {
          lVar12 = **(long **)((long)register0x00000008 + -0x4a0);
          *(undefined ***)((long)register0x00000008 + -0x538) = ppuVar8;
          *(undefined ***)((long)register0x00000008 + -0x530) = unaff_x27;
          *(long *)((long)register0x00000008 + -0x540) = lVar12;
          do {
            unaff_x28 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x4a0) != lVar12) {
                _objc_enumerationMutation(unaff_x27);
              }
              unaff_x26 = *(undefined ***)
                           (*(long *)((long)register0x00000008 + -0x4a8) + (long)unaff_x28 * 8);
              ppuVar9 = unaff_x26;
              func_0x00010c259880();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              ppuVar24 = (undefined **)PTR_PTR_1126c6d90;
              if (ppuVar9 == (undefined **)0x0) {
                ppuVar9 = unaff_x26;
                func_0x00010bfa3780();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar9 != (undefined **)0x0) {
                  ppuVar9 = unaff_x26;
                  func_0x00010bfa3780();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar24 = ppuVar9;
                  func_0x00010bfa3760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar9);
                  ppuVar9 = ppuVar24;
                  func_0x00010bfa36c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar9 != (undefined **)0x0) {
                    ppuVar8 = unaff_x26;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar9 = ppuVar8;
                    func_0x00010bf93500();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = ppuVar9;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar9);
                    _objc_release(ppuVar8);
                    puVar3 = PTR_PTR_1126b4bb0;
                    if (ppuVar21 == (undefined **)0x0) {
                      *(undefined8 *)((long)register0x00000008 + -0x500) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x4f8) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x510) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x508) = 0;
                    }
                    else {
                      ppuVar8 = unaff_x26;
                      func_0x00010bfa3780(unaff_x26);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar9 = ppuVar8;
                      func_0x00010bf93500();
                      _objc_retainAutoreleasedReturnValue();
                      *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0;
                      func_0x00010c0f40e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar12 = *(long *)((long)register0x00000008 + -0x4b8);
                      _objc_release(ppuVar9);
                      _objc_release(ppuVar8);
                      if ((lVar12 == 0) &&
                         (puVar10 = puVar3, func_0x00010bfd5f00(), (int)puVar10 != 0)) {
                        puVar4 = puVar3;
                        func_0x00010bf5b080();
                        _objc_retainAutoreleasedReturnValue();
                        puVar10 = puVar4;
                        func_0x00010c2923e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar15 = puVar4;
                        func_0x00010c294420();
                        _objc_retainAutoreleasedReturnValue();
                        puVar20 = puVar4;
                        func_0x00010bf85d80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar4;
                        func_0x00010bfd5f20();
                        if ((int)puVar5 == 0) {
                          puVar5 = (undefined *)0x0;
                        }
                        else {
                          puVar5 = puVar4;
                          func_0x00010bf5b3e0();
                          _objc_retainAutoreleasedReturnValue();
                        }
                        _objc_release(puVar4);
                      }
                      else {
                        puVar10 = (undefined *)0x0;
                        puVar15 = (undefined *)0x0;
                        puVar20 = (undefined *)0x0;
                        puVar5 = (undefined *)0x0;
                      }
                      *(undefined **)((long)register0x00000008 + -0x510) = puVar5;
                      *(undefined **)((long)register0x00000008 + -0x508) = puVar20;
                      *(undefined **)((long)register0x00000008 + -0x500) = puVar15;
                      *(undefined **)((long)register0x00000008 + -0x4f8) = puVar10;
                      _objc_release(puVar3);
                    }
                    *(undefined **)((long)register0x00000008 + -0x520) = PTR_PTR_1126c6d90;
                    func_0x00010bfa3780();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x518) = unaff_x26;
                    func_0x00010bf93680();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined ***)((long)register0x00000008 + -0x528) = unaff_x26;
                    ppuVar8 = ppuVar24;
                    func_0x00010bfa36c0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar17 = ppuVar24;
                    func_0x00010c2711a0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar14 = ppuVar24;
                    func_0x00010c260dc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar9 = ppuVar24;
                    func_0x00010c0b46a0(ppuVar24);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = ppuVar24;
                    func_0x00010c2520a0(ppuVar24);
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = *(undefined ***)((long)register0x00000008 + -0x510);
                    *(undefined8 *)((long)register0x00000008 + -0x560) =
                         *(undefined8 *)((long)register0x00000008 + -0x508);
                    *(undefined ***)((long)register0x00000008 + -0x558) = unaff_x26;
                    *(undefined8 *)((long)register0x00000008 + -0x570) =
                         *(undefined8 *)((long)register0x00000008 + -0x4f8);
                    *(undefined8 *)((long)register0x00000008 + -0x568) =
                         *(undefined8 *)((long)register0x00000008 + -0x500);
                    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x520);
                    unaff_x25 = ppuVar8;
                    ppuVar18 = ppuVar17;
                    in_x5 = ppuVar14;
                    func_0x00010c258680(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar21);
                    _objc_release(ppuVar9);
                    _objc_release(ppuVar14);
                    _objc_release(ppuVar17);
                    _objc_release(ppuVar8);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x528));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x518));
                    ppuVar8 = *(undefined ***)((long)register0x00000008 + -0x538);
                    func_0x00010befa120(ppuVar8);
                    _objc_release(uVar13);
                    _objc_release(unaff_x26);
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x508));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x500));
                    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4f8));
                    unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x530);
                    lVar12 = *(long *)((long)register0x00000008 + -0x540);
                  }
                  goto LAB_1066502c0;
                }
              }
              else {
                ppuVar14 = unaff_x26;
                func_0x00010c259880();
                _objc_retainAutoreleasedReturnValue();
                ppuVar17 = ppuVar14;
                func_0x00010bf936c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c258660();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar17);
                _objc_release(ppuVar14);
                if (ppuVar24 == (undefined **)0x0) {
                  _objc_release(unaff_x27);
                  unaff_x23 = (undefined **)0x0;
                  goto LAB_10665062c;
                }
                func_0x00010befa120(ppuVar8);
LAB_1066502c0:
                _objc_release(ppuVar24);
                ppuVar23 = ppuVar24;
              }
              unaff_x28 = (undefined **)((long)unaff_x28 + 1);
            } while (*(undefined ***)((long)register0x00000008 + -0x4f0) != unaff_x28);
            unaff_x25 = (undefined **)((long)register0x00000008 + -0x470);
            ppuVar18 = (undefined **)0x10;
            ppuVar9 = unaff_x27;
            func_0x00010bf52a60();
            *(undefined ***)((long)register0x00000008 + -0x4f0) = ppuVar9;
            unaff_x23 = ppuVar8;
          } while (ppuVar9 != (undefined **)0x0);
        }
        _objc_release(unaff_x27);
        _objc_retain(unaff_x23);
        ppuVar24 = ppuVar23;
        ppuVar8 = unaff_x23;
LAB_10665062c:
        _objc_release(ppuVar8);
        _objc_release(unaff_x27);
        ppuVar8 = unaff_x27;
        _objc_release(unaff_x27);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x4e8) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x4e0) = 0xc2000000;
        *(code **)((long)register0x00000008 + -0x4d8) = FUN_106651374;
        *(undefined **)((long)register0x00000008 + -0x4d0) = &UNK_110841f80;
        _objc_retain(unaff_x23);
        *(undefined ***)((long)register0x00000008 + -0x4c8) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x4c0) =
             *(undefined8 *)((long)register0x00000008 + -0x550);
        ppuVar9 = (undefined **)((long)register0x00000008 + -0x4e8);
        func_0x00010c0f7fc0(ppuVar8);
        _objc_release(ppuVar8);
        _objc_retain(unaff_x23);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4c8));
        ppuVar26 = *(undefined ***)((long)register0x00000008 + -0x548);
        ppuVar19 = unaff_x27;
        ppuVar22 = unaff_x23;
        goto LAB_1066506bc;
      }
      ppuVar21 = unaff_x27;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar21;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar23;
      func_0x00010bfa3780();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf935c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x25);
      _objc_release(ppuVar23);
      _objc_release(ppuVar21);
      _objc_release(ppuVar8);
      _objc_release(ppuVar14);
      _objc_release(ppuVar9);
      ppuVar17 = ppuVar8;
      ppuVar23 = unaff_x25;
      if (unaff_x26 == (undefined **)0x0) goto LAB_10665019c;
      puVar3 = unaff_x28[0xb];
      _objc_retain(ppuVar25);
      *(undefined **)((long)register0x00000008 + -0x4f0) = puVar3;
      _objc_retain(puVar3);
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar25);
      unaff_x19 = ppuVar9;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x498) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4a0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x488) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x490) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x478) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x480) = 0;
      _objc_retain(ppuVar25);
      ppuVar23 = ppuVar25;
      func_0x00010bf52a60();
      if (ppuVar23 != (undefined **)0x0) {
        unaff_x27 = (undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0);
        unaff_x28 = &PTR_PTR_1126b0000;
        do {
          ppuVar8 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)register0x00000008 + -0x4a0) != unaff_x27) {
              _objc_enumerationMutation(ppuVar25);
            }
            ppuVar18 = *(undefined ***)
                        (*(long *)((long)register0x00000008 + -0x4a8) + (long)ppuVar8 * 8);
            ppuVar14 = ppuVar18;
            func_0x00010bfa3780();
            _objc_retainAutoreleasedReturnValue();
            ppuVar22 = ppuVar14;
            func_0x00010bf935c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(ppuVar14);
            ppuVar21 = (undefined **)PTR_PTR_1126b0ef0;
            ppuVar9 = ppuVar18;
            unaff_x25 = (undefined **)0x0;
            if (ppuVar22 != (undefined **)0x0) {
              func_0x00010bfa3780();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = ppuVar18;
              func_0x00010bf935c0();
              _objc_retainAutoreleasedReturnValue();
              *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0;
              func_0x00010c0f40e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = *(undefined ***)((long)register0x00000008 + -0x4b8);
              _objc_release(unaff_x26);
              _objc_release(ppuVar18);
              if ((ppuVar14 == (undefined **)0x0) && (ppuVar21 != (undefined **)0x0)) {
                ppuVar14 = (undefined **)PTR_PTR_1126b0ef8;
                _objc_alloc();
                *(undefined8 *)((long)register0x00000008 + -0x568) = 0;
                *(undefined1 *)((long)register0x00000008 + -0x570) = 0;
                func_0x00010c03ef40();
                *(undefined8 *)((long)register0x00000008 + -0x570) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x568) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x560) =
                     *(undefined8 *)((long)register0x00000008 + -0x4f0);
                *(undefined8 *)((long)register0x00000008 + -0x558) = 0;
                in_x5 = (undefined **)0x0;
                ppuVar18 = ppuVar21;
                func_0x000108482f84(ppuVar21,ppuVar14,0,0,0,0,0,0);
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar18 != (undefined **)0x0) {
                  func_0x00010befa120(unaff_x19);
                }
                _objc_release(ppuVar18);
                _objc_release(ppuVar14);
              }
              _objc_release(ppuVar21);
              ppuVar9 = ppuVar21;
              unaff_x25 = ppuVar18;
            }
            ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          } while (ppuVar23 != ppuVar8);
          ppuVar23 = ppuVar25;
          func_0x00010bf52a60();
          ppuVar21 = (undefined **)0x0;
        } while (ppuVar23 != (undefined **)0x0);
      }
      _objc_release(ppuVar25);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x4f0));
      _objc_release(ppuVar25);
      unaff_x20 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x550) + 0x30);
      unaff_x21 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x550) + 0x60);
      uVar13 = 0x10665017c;
      unaff_x24 = unaff_x19;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x170);
    *(undefined ***)(puVar2 + -0x60) = unaff_x28;
    *(undefined ***)(puVar2 + -0x58) = unaff_x27;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = unaff_x25;
    *(undefined ***)(puVar2 + -0x40) = unaff_x24;
    *(undefined ***)(puVar2 + -0x38) = ppuVar21;
    *(undefined ***)(puVar2 + -0x30) = ppuVar8;
    *(undefined ***)(puVar2 + -0x28) = ppuVar14;
    *(undefined ***)(puVar2 + -0x20) = ppuVar25;
    *(undefined ***)(puVar2 + -0x18) = ppuVar9;
    *(undefined1 **)(puVar2 + -0x10) = puVar27;
    *(undefined8 *)(puVar2 + -8) = uVar13;
    unaff_x29 = puVar2 + -0x10;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(unaff_x20);
    _objc_retain(unaff_x21);
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    *(undefined8 *)(puVar2 + -0x128) = 0;
    *(undefined8 *)(puVar2 + -0x130) = 0;
    *(undefined8 *)(puVar2 + -0x118) = 0;
    *(undefined8 *)(puVar2 + -0x120) = 0;
    *(undefined8 *)(puVar2 + -0x108) = 0;
    *(undefined8 *)(puVar2 + -0x110) = 0;
    *(undefined8 *)(puVar2 + -0xf8) = 0;
    *(undefined8 *)(puVar2 + -0x100) = 0;
    _objc_retain(unaff_x19);
    ppuVar8 = unaff_x19;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      unaff_x27 = (undefined **)**(undefined8 **)(puVar2 + -0x120);
      unaff_x28 = &PTR_PTR_1126c2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar2 + -0x120) != unaff_x27) {
            _objc_enumerationMutation(unaff_x19);
          }
          puVar3 = PTR_PTR_1126c2098;
          unaff_x24 = *(undefined ***)(*(long *)(puVar2 + -0x128) + (long)unaff_x26 * 8);
          _objc_retain(unaff_x24);
          _objc_opt_class(puVar3);
          ppuVar9 = unaff_x24;
          _objc_opt_isKindOfClass(unaff_x24,puVar3);
          unaff_x25 = unaff_x24;
          if (((ulong)ppuVar9 & 1) == 0) {
            unaff_x25 = (undefined **)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(unaff_x24);
          if (unaff_x25 != (undefined **)0x0) {
            func_0x00010befa120(unaff_x22);
          }
          _objc_release(unaff_x25);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar8 != unaff_x26);
        ppuVar8 = unaff_x19;
        func_0x00010bf52a60();
      } while (ppuVar8 != (undefined **)0x0);
    }
    _objc_release(unaff_x19);
    ppuVar8 = unaff_x22;
    func_0x00010bf529e0();
    if (ppuVar8 == (undefined **)0x0) {
      _objc_retain(unaff_x19);
      unaff_x23 = unaff_x19;
    }
    else {
      func_0x00010c066720(unaff_x20);
      if (unaff_x21 == (undefined **)0x0) {
        unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        ppuVar8 = unaff_x22;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c25b720();
        ppuVar25 = ppuVar8;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar9 == (undefined **)0xd) {
          ppuVar9 = ppuVar25;
          func_0x00010bf52680();
          unaff_x28 = ppuVar25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar25;
          func_0x00010c298be0();
          *(undefined ***)(puVar2 + -0x168) = unaff_x28;
          *(undefined ***)(puVar2 + -0x160) = ppuVar21;
          *(undefined ***)(puVar2 + -0x170) = ppuVar9;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          unaff_x27 = (undefined **)0x6;
        }
        else {
          unaff_x26 = ppuVar25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = (undefined **)0x1;
        }
        _objc_release(ppuVar25);
        unaff_x25 = (undefined **)PTR_PTR_1126b4d28;
        _objc_alloc();
        in_x5 = (undefined **)0x1;
        func_0x00010c04dcc0();
        func_0x00010befa120(unaff_x23);
        _objc_release(unaff_x25);
        _objc_release(unaff_x26);
        unaff_x24 = ppuVar8;
      }
      else {
        *(undefined **)(puVar2 + -0x158) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(puVar2 + -0x150) = 0xc2000000;
        *(code **)(puVar2 + -0x148) = FUN_106651998;
        *(undefined **)(puVar2 + -0x140) = &UNK_110931a08;
        _objc_retain(unaff_x21);
        *(undefined ***)(puVar2 + -0x138) = unaff_x21;
        unaff_x23 = unaff_x22;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = *(undefined ***)(puVar2 + -0x138);
      }
      _objc_release(ppuVar8);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    param_1 = unaff_x19;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70))
    goto _objc_autoreleaseReturnValue;
    unaff_x30 = FUN_106651374;
    ___stack_chk_fail();
    unaff_d8 = dVar28;
  } while( true );
}



/* Entry: 106651388; end: 10665176b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_106651388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_168;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long alStack_138 [3];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar11 = param_1;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0(puVar1,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  alStack_138[2] = 0;
  alStack_138[1] = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  lStack_168 = param_1;
  func_0x00010bf52a60(param_1,param_2,alStack_138 + 1,auStack_f0,0x10);
  if (lStack_168 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        lVar12 = *(long *)(alStack_138[2] + lVar13 * 8);
        lVar2 = lVar12;
        func_0x00010bfa3760();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfa36c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          lVar3 = lVar12;
          func_0x00010bf93500();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c08fa60();
          _objc_release(lVar3);
          puVar5 = PTR_PTR_1126b4bb0;
          if (lVar4 == 0) {
            puStack_150 = (undefined *)0x0;
            puStack_148 = (undefined *)0x0;
            puVar10 = (undefined *)0x0;
            puStack_140 = (undefined *)0x0;
          }
          else {
            lVar4 = lVar12;
            func_0x00010bf93500(lVar12);
            _objc_retainAutoreleasedReturnValue();
            alStack_138[0] = 0;
            func_0x00010c0f40e0(puVar5,param_2,lVar4,alStack_138);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = alStack_138[0];
            _objc_release(lVar4);
            if ((lVar3 == 0) && (puVar10 = puVar5, func_0x00010bfd5f00(), (int)puVar10 != 0)) {
              puVar6 = puVar5;
              func_0x00010bf5b080();
              _objc_retainAutoreleasedReturnValue();
              puStack_140 = puVar6;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              puStack_148 = puVar6;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              puStack_150 = puVar6;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar6;
              func_0x00010bfd5f20();
              if ((int)puVar10 == 0) {
                puVar10 = (undefined *)0x0;
              }
              else {
                puVar10 = puVar6;
                func_0x00010bf5b3e0();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(puVar6);
            }
            else {
              puStack_150 = (undefined *)0x0;
              puVar10 = (undefined *)0x0;
              puStack_148 = (undefined *)0x0;
              puStack_140 = (undefined *)0x0;
            }
            _objc_release(puVar5);
          }
          puVar5 = PTR_PTR_1126c6d90;
          func_0x00010bf93680();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bfa36c0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          func_0x00010c2711a0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar2;
          func_0x00010c260dc0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar2;
          func_0x00010c0b46a0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c2520a0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c258680(puVar5,param_2,lVar12,lVar3,lVar4,lVar7,lVar8,lVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar12);
          func_0x00010befa120(puVar1,param_2,puVar5);
          _objc_release(puVar5);
          _objc_release(puVar10);
          _objc_release(puStack_150);
          _objc_release(puStack_148);
          _objc_release(puStack_140);
        }
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
      } while (lStack_168 != lVar13);
      lStack_168 = param_1;
      func_0x00010bf52a60(param_1,param_2,alStack_138 + 1,auStack_f0,0x10);
    } while (lStack_168 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_1 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10665176c; end: 106651783; -[SCImpalaStoryPlayerPlaylistFetcher delegate] */

void FUN_10665176c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106651784; end: 10665178f; -[SCImpalaStoryPlayerPlaylistFetcher setDelegate:] */

void FUN_106651784(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 106651790; end: 106651797; -[SCImpalaStoryPlayerPlaylistFetcher dataModelProcessor] */

undefined8 FUN_106651790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106651798; end: 10665179f; -[SCImpalaStoryPlayerPlaylistFetcher setDataModelProcessor:] */

void FUN_106651798(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066517a0; end: 106651843; -[SCImpalaStoryPlayerPlaylistFetcher .cxx_destruct] */

void FUN_1066517a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106651844; end: 10665197b;  */

void FUN_106651844(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1066518c4;
  puStack_40 = &UNK_110859310;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  FUN_10664f804(uVar1,uVar2,&puStack_58);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10665197c; end: 106651997;  */

void FUN_10665197c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106651990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 106651998; end: 106651ad3;  */

void FUN_106651998(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar7 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c0ea200(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010799a5f0(uVar3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  lVar4 = param_2;
  func_0x00010c25b720();
  _objc_release(param_2);
  ppuVar1 = &PTR_PTR_1126bdd30;
  if (lVar4 != 0xb) {
    ppuVar1 = &PTR_PTR_1126b4d28;
  }
  ppuVar2 = &PTR_PTR_1126bdd28;
  if (lVar4 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar8 = *ppuVar2;
  _objc_retain(uVar6);
  _objc_opt_class(puVar8);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar8);
  uVar3 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106651ad4; end: 10665308f; -[SCImpalaStoryPlayerPresenter initWithAdPluginProvider:bitmojiImageFetcher:cameraAttachmentOperaPageResolver:circumstanceEngine:contextExperimentService:commerceOperaAttachmentPluginProvider:commerceOperaScreenshopPluginProvider:contentDelivery:contextOperaPluginProvider:creatorSettingsDataFetcher:creatorSettingsDataMutator:creatorSettingsDataTracker:deeplinkSendToScopeExposer:premiumStoryShareSender:premiumStoryConversationResolver:discoverBlizzardLogger:discoverFeedDataFetcher:discoverFeedEventsLogger:discoverFeedInteractionHistoryManager:discoverFeedNotificationPromptHandler:discoverPublisherPagePropertiesManager:ephemeralMediaFactory:grapheneRegistry:impalaOperaLayerViewControllerProviderCreator:impalaPublicProfilePresentationHandler:legacyStoriesTooltipsService:notificationPool:offPlatformLinkGenerationService:onDemandResourceDownloader:remoteStoriesDataProvider:legacySendToScopeLauncher:sendToScopeLauncher:sendToScopeServices:snapchattersSynchronousDataFetcher:snapDocConfigurer:snapDocOperaParser:storiesCachedReadReceiptViewStateProvider:storiesGrapheneMetricsEmitter:storiesMediaCoordinator:storiesSnapReadReceiptCoordinator:longformMediaPrefetcher:userAccountCreationDate:streamingURLProvider:featureSettingsService:currentUsername:conversationDestinationParser:storiesBlizzardLogger:customStoriesDataFetcher:storyShareSender:photoPermissionCoordinator:backgroundTaskWrapper:imageDownloader:imageFetchingService:activeVideoPaths:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:lazySnapDocMediaResolver:lazyNotificationsPermissionRequester:notificationOSSettingsRetriever:lazyNetworkConnectivityMonitor:lazyUserTrackedLogger:lazyDiscoverFeedDataMutator:discoverFeedNotificationOptInRequestManager:safetyReportScopeExposer:contentObjectResolver:externalLinkSendingService:adConfigProvider:safeBrowsingAPI:operaSessionScopeExposer:operaSessionScopeServices:saveFriendStoryOperaPluginProvider:discoverOperaPluginCreator:snapProShareMessageSender:subscriptionWorkflowStarter:bloopsStorySharingServices:snapchattersDataFetcher:impalaLegacyServices:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:bloopsReportScopeExposer:boostCoordinator:composerServices:offPlatformShareServices:storiesExperimentServices:temporaryFileWriter:snapDocEditorFactory:genAIOnboardingServices:profilesProvider:spotlightDataFetcher:previewSnapSenderFactory:contentBlocker:playableViewModelGenerator:contentProductPlaybackExposer:contentProductPlaybackScopeServices:pageLauncherServices:galleryStorySaver:spotlightShareSender:spotlightPlatformAnalyticsCreator:standardExternalContentShareScopeExposer:previewFilterDataProviderFactory:musicContentRestrictionServices:shareNotificationService:userBlizzardLogger:crashServices:snapchatterObservableRepository:storiesUsageLogger:remixOperaPluginProvider:unlockableViewTracker:snapchatterUserInfoProvider:playbackMediaResolver:playbackAssetRepositoryFactory:storiesCachedSummaryInfoProvider:creatorsSubscriptionStoreDelegate:] */

undefined8 *
FUN_106651ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002f0);
  _objc_retain(in_stack_000002f8);
  _objc_retain(in_stack_00000300);
  _objc_retain(in_stack_00000308);
  _objc_retain(in_stack_00000310);
  _objc_retain(in_stack_00000318);
  _objc_retain(in_stack_00000320);
  _objc_retain(in_stack_00000328);
  _objc_retain(in_stack_00000330);
  _objc_retain(in_stack_00000338);
  _objc_retain(in_stack_00000340);
  _objc_retain(in_stack_00000348);
  _objc_retain(in_stack_00000350);
  _objc_retain(in_stack_00000358);
  _objc_retain(in_stack_00000360);
  puStack_70 = PTR_PTR_1126f2348;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x45];
    puVar1[0x45] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = param_67;
    _objc_release(uVar2);
    _objc_retain(param_68);
    uVar2 = puVar1[0x50];
    puVar1[0x50] = param_68;
    _objc_release(uVar2);
    _objc_retain(param_69);
    uVar2 = puVar1[0x51];
    puVar1[0x51] = param_69;
    _objc_release(uVar2);
    _objc_retain(param_70);
    uVar2 = puVar1[0x52];
    puVar1[0x52] = param_70;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f0);
    uVar2 = puVar1[0x53];
    puVar1[0x53] = in_stack_000001f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f8);
    uVar2 = puVar1[0x56];
    puVar1[0x56] = in_stack_000001f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000200);
    uVar2 = puVar1[0x57];
    puVar1[0x57] = in_stack_00000200;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000208);
    uVar2 = puVar1[0x54];
    puVar1[0x54] = in_stack_00000208;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000210);
    uVar2 = puVar1[0x55];
    puVar1[0x55] = in_stack_00000210;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000218);
    uVar2 = puVar1[0x5b];
    puVar1[0x5b] = in_stack_00000218;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000220);
    uVar2 = puVar1[0x5c];
    puVar1[0x5c] = in_stack_00000220;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000228);
    uVar2 = puVar1[0x5d];
    puVar1[0x5d] = in_stack_00000228;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000230);
    uVar2 = puVar1[0x5e];
    puVar1[0x5e] = in_stack_00000230;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000258);
    uVar2 = puVar1[0x5f];
    puVar1[0x5f] = in_stack_00000258;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000260);
    uVar2 = puVar1[0x60];
    puVar1[0x60] = in_stack_00000260;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000238);
    uVar2 = puVar1[0x61];
    puVar1[0x61] = in_stack_00000238;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000240);
    uVar2 = puVar1[0x62];
    puVar1[0x62] = in_stack_00000240;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000268);
    uVar2 = puVar1[99];
    puVar1[99] = in_stack_00000268;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000270);
    uVar2 = puVar1[100];
    puVar1[100] = in_stack_00000270;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000278);
    uVar2 = puVar1[0x65];
    puVar1[0x65] = in_stack_00000278;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000248);
    uVar2 = puVar1[0x66];
    puVar1[0x66] = in_stack_00000248;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000250);
    uVar2 = puVar1[0x67];
    puVar1[0x67] = in_stack_00000250;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000280);
    uVar2 = puVar1[0x68];
    puVar1[0x68] = in_stack_00000280;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000288);
    uVar2 = puVar1[0x69];
    puVar1[0x69] = in_stack_00000288;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000290);
    uVar2 = puVar1[0x6a];
    puVar1[0x6a] = in_stack_00000290;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000298);
    uVar2 = puVar1[0x6b];
    puVar1[0x6b] = in_stack_00000298;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a0);
    uVar2 = puVar1[0x6c];
    puVar1[0x6c] = in_stack_000002a0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a8);
    uVar2 = puVar1[0x6d];
    puVar1[0x6d] = in_stack_000002a8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b0);
    uVar2 = puVar1[0x6e];
    puVar1[0x6e] = in_stack_000002b0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b8);
    uVar2 = puVar1[0x6f];
    puVar1[0x6f] = in_stack_000002b8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002c0);
    uVar2 = puVar1[0x70];
    puVar1[0x70] = in_stack_000002c0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002c8);
    uVar2 = puVar1[0x71];
    puVar1[0x71] = in_stack_000002c8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002d8);
    uVar2 = puVar1[0x72];
    puVar1[0x72] = in_stack_000002d8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x73,in_stack_000002d0);
    _objc_retain(in_stack_000002e0);
    uVar2 = puVar1[0x74];
    puVar1[0x74] = in_stack_000002e0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002e8);
    uVar2 = puVar1[0x75];
    puVar1[0x75] = in_stack_000002e8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002f0);
    uVar2 = puVar1[0x76];
    puVar1[0x76] = in_stack_000002f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002f8);
    uVar2 = puVar1[0x77];
    puVar1[0x77] = in_stack_000002f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000300);
    uVar2 = puVar1[0x78];
    puVar1[0x78] = in_stack_00000300;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000308);
    uVar2 = puVar1[0x7a];
    puVar1[0x7a] = in_stack_00000308;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000310);
    uVar2 = puVar1[0x7b];
    puVar1[0x7b] = in_stack_00000310;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000318);
    uVar2 = puVar1[0x7d];
    puVar1[0x7d] = in_stack_00000318;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000320);
    uVar2 = puVar1[0x7f];
    puVar1[0x7f] = in_stack_00000320;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000328);
    uVar2 = puVar1[0x7c];
    puVar1[0x7c] = in_stack_00000328;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000330);
    uVar2 = puVar1[0x80];
    puVar1[0x80] = in_stack_00000330;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000338);
    uVar2 = puVar1[0x81];
    puVar1[0x81] = in_stack_00000338;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000340);
    uVar2 = puVar1[0x82];
    puVar1[0x82] = in_stack_00000340;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000348);
    uVar2 = puVar1[0x83];
    puVar1[0x83] = in_stack_00000348;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000350);
    uVar2 = puVar1[0x84];
    puVar1[0x84] = in_stack_00000350;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000358);
    uVar2 = puVar1[0x85];
    puVar1[0x85] = in_stack_00000358;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000360);
    uVar2 = puVar1[0x86];
    puVar1[0x86] = in_stack_00000360;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = puVar1[0x7e];
    puVar1[0x7e] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000360);
  _objc_release(in_stack_00000358);
  _objc_release(in_stack_00000350);
  _objc_release(in_stack_00000348);
  _objc_release(in_stack_00000340);
  _objc_release(in_stack_00000338);
  _objc_release(in_stack_00000330);
  _objc_release(in_stack_00000328);
  _objc_release(in_stack_00000320);
  _objc_release(in_stack_00000318);
  _objc_release(in_stack_00000310);
  _objc_release(in_stack_00000308);
  _objc_release(in_stack_00000300);
  _objc_release(in_stack_000002f8);
  _objc_release(in_stack_000002f0);
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106653090; end: 1066531b7; -[SCImpalaStoryPlayerPresenter dealloc] */

void FUN_106653090(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x2b0);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x2c0);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + 8,0);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1066531b8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar4;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  puStack_68 = PTR_PTR_1126f2348;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1066531b8; end: 1066531f7;  */

void FUN_1066531b8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c072560();
    if (iVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 1066531f8; end: 106654967; -[SCImpalaStoryPlayerPresenter presentContentPlaybackScopeWithDataModels:playlistStartingIndex:presentingViewController:useCircleTransition:feedPageSection:baseViews:startingBaseViewIndex:contentViewSource:playbackOptions:playbackCompletion:completion:publicStoryDataProvider:] */

void FUN_1066531f8(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,long param_6,undefined1 param_7,long param_8,ulong param_9,
                  ulong param_10,undefined *param_11,long param_12,undefined8 param_13,long param_14
                  ,undefined8 param_15)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  double dVar22;
  ulong uStack_168;
  undefined *puStack_150;
  undefined *puStack_120;
  undefined *puStack_100;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_120 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  _objc_retain(param_12);
  uVar5 = *(undefined8 *)(param_2 + 0x3c8);
  *(long *)(param_2 + 0x3c8) = param_12;
  _objc_release(uVar5);
  puVar20 = param_4;
  func_0x00010bf529e0();
  puStack_100 = puVar4;
  if (puVar20 == (undefined *)0x0) {
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f38170(*(undefined8 *)(param_2 + 0x3f0),param_11,1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (param_14 != 0) {
      (**(code **)(param_14 + 0x10))(param_14,puVar20);
    }
    _objc_release(puVar20);
    _objc_release(puVar4);
    goto LAB_106654628;
  }
  lVar6 = param_12;
  func_0x00010bf4de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0720c0();
  if ((int)lVar7 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar19 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126cc520;
    _objc_opt_class(PTR_PTR_1126cc520);
    puVar20 = puVar19;
    _objc_opt_isKindOfClass(puVar19,puVar8);
    _objc_release(puVar19);
  }
  _objc_release(lVar6);
  puVar8 = PTR_PTR_1126ae720;
  _objc_retain(param_4);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_4;
  if (((ulong)puVar20 & 1) != 0) {
    if (((long)param_5 < 0) || (puVar9 = param_4, func_0x00010bf529e0(), puVar9 <= param_5)) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain();
    puVar9 = PTR_PTR_1126cc520;
    _objc_opt_class(PTR_PTR_1126cc520);
    puVar10 = puVar19;
    _objc_opt_isKindOfClass(puVar19,puVar9);
    puVar9 = puVar19;
    if (((ulong)puVar10 & 1) == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    puVar10 = puVar9;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined *)0x0) {
      puStack_150 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar10);
      puStack_150 = puVar10;
    }
    _objc_release(puVar10);
    _objc_retain(param_4);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar19);
    puStack_100 = param_4;
    goto LAB_106653be4;
  }
  puStack_150 = param_2;
  if ((*(long *)(param_2 + 0x98) != 0) && (*(long *)(param_2 + 0x378) != 0)) {
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1f3c0();
    _objc_release(puVar9);
    if ((int)puVar10 != 0) {
      puVar9 = param_4;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_120);
      puStack_100 = puVar9;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      puVar10 = puStack_100;
      func_0x00010c0dfd40(puStack_100);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee9a00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puStack_100;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar10);
      puStack_120 = puVar9;
      goto LAB_106653be4;
    }
  }
  puVar9 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c2098;
  _objc_opt_class(PTR_PTR_1126c2098);
  puVar11 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar10);
  _objc_release(puVar9);
  if (((ulong)puVar11 & 1) == 0) {
    puVar9 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    puVar11 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar10);
    if (((ulong)puVar11 & 1) == 0) {
      puVar10 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b4d28;
      _objc_opt_class(PTR_PTR_1126b4d28);
      puVar21 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar11);
      if (((ulong)puVar21 & 1) != 0) {
        _objc_release(puVar10);
        goto LAB_1066538e8;
      }
      puVar11 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126bdd30;
      _objc_opt_class(PTR_PTR_1126bdd30);
      puVar12 = puVar11;
      _objc_opt_isKindOfClass(puVar11,puVar21);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      if (((ulong)puVar12 & 1) != 0) goto LAB_1066538f0;
      puVar9 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b1338;
      _objc_opt_class(PTR_PTR_1126b1338);
      puVar11 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar10);
      _objc_release(puVar9);
      puVar9 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (((ulong)puVar11 & 1) == 0) {
        puVar10 = PTR_PTR_1126c6d90;
        _objc_opt_class(PTR_PTR_1126c6d90);
        puVar11 = puVar9;
        _objc_opt_isKindOfClass(puVar9,puVar10);
        _objc_release(puVar9);
        if (((ulong)puVar11 & 1) != 0) {
          puVar9 = param_4;
          func_0x00010bf529e0();
          if ((long)param_5 < (long)puVar9) {
            puVar9 = param_4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puStack_150 = puVar9;
            func_0x00010c259cc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(param_4);
            _objc_release(puVar4);
            puVar4 = puVar9;
            func_0x00010bf38d40();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 != (undefined *)0x0) {
              puVar10 = puVar9;
              func_0x00010bf38d40(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25b720();
              _objc_release(puVar10);
            }
            _objc_release(puVar4);
            _objc_release(puVar9);
            puStack_100 = param_4;
            goto LAB_106653be4;
          }
          func_0x00010bf529e0(param_4);
          func_0x00010bde3780(param_2);
        }
        param_11 = (undefined *)0x0;
        goto LAB_106654614;
      }
      puVar10 = puVar9;
      func_0x00010c259cc0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010bfb1920(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec5020();
      _objc_release(puVar19);
      puVar19 = PTR_PTR_1126b4d28;
      _objc_alloc();
      func_0x00010c04dcc0();
      func_0x00010bee9a00();
      _objc_retainAutoreleasedReturnValue();
      puStack_100 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_retain(puVar19);
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    else {
LAB_1066538e8:
      _objc_release(puVar9);
LAB_1066538f0:
      puVar9 = param_4;
      func_0x00010bf529e0();
      if ((long)puVar9 <= (long)param_5) {
        func_0x00010bf529e0(param_4);
        func_0x00010bde3780(param_2);
        param_11 = (undefined *)0x0;
        goto LAB_106654614;
      }
      puVar9 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee9a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_release(puVar4);
      puVar4 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec5000(param_2);
      _objc_release(puVar4);
      puStack_100 = param_4;
    }
LAB_106653be4:
    puVar4 = param_2;
    func_0x00010bdd5900();
    uVar5 = param_13;
    _objc_retainBlock();
    uVar17 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = uVar5;
    _objc_release(uVar17);
    param_2[0x2c8] = param_7;
    if (param_12 == 0) {
      *(undefined8 *)(param_2 + 0x38) = 0;
    }
    else {
      lVar6 = param_12;
      func_0x00010c259120(param_12);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c115a40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      param_1 = param_1 / 1000.0;
      *(double *)(param_2 + 0x38) = param_1;
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    *(undefined **)(param_2 + 0x40) = param_11;
    _CACurrentMediaTime();
    uVar13 = param_9;
    func_0x00010bf529e0();
    if (param_10 < uVar13) {
      uStack_168 = param_9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_2 + 0x28,uStack_168);
      _objc_storeWeak(param_2 + 0x30,uStack_168);
    }
    else {
      uStack_168 = 0;
    }
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(ulong *)(param_2 + 0x20) = param_9;
    _objc_release(uVar5);
    uVar14 = *(undefined8 *)(param_2 + 0x328);
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c22f8;
    func_0x00010c153700(PTR_PTR_1126c22f8);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar5;
    func_0x00010bf1f320();
    _objc_release(puVar9);
    _objc_release(uVar5);
    _objc_release(uVar14);
    func_0x00010be0ed60();
    uVar18 = (uint)uVar17;
    if (uVar18 != 0) {
      lVar6 = param_12;
      func_0x00010c259120();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c154080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      if (lVar7 != 0) {
        lVar6 = param_12;
        func_0x00010c259120(param_12);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c154080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        func_0x00010bea3ec0();
        _objc_release(lVar7);
        _objc_release(lVar6);
      }
    }
    puVar9 = PTR_PTR_1126b4d30;
    _objc_alloc();
    func_0x00010be6f8e0(param_2);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c04bca0();
    uVar5 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(uVar5);
    if (param_12 != 0) {
      lVar6 = param_12;
      func_0x00010c07f400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(lVar6);
    }
    if (param_6 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      if (param_14 != 0) {
        (**(code **)(param_14 + 0x10))(param_14,puVar10);
      }
    }
    else {
      puVar10 = PTR_PTR_1126b4d40;
      _objc_alloc();
      func_0x00010bff7200();
      if (((param_2[0x70] & 1) == 0) && (puVar4 != (undefined *)0x7)) {
        if ((param_8 != 0) && (param_11 == (undefined *)0x3e || param_11 == (undefined *)0x6f)) {
LAB_106653ff4:
          puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
LAB_106654004:
          func_0x00010be0ed40(param_2);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar21);
          _objc_release(puVar11);
          goto LAB_106654080;
        }
        if (param_8 != 0) {
LAB_106654058:
          puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
LAB_106654068:
          func_0x00010c1d0640(puVar21);
          goto LAB_106654080;
        }
        uVar1 = 0;
        if (param_12 != 0) {
          uVar1 = uVar18;
        }
        if ((uVar1 & 1) != 0) goto LAB_106654090;
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar11;
        func_0x00010c0d3c80();
        _objc_release(puVar11);
        if ((param_8 != 0) && (param_11 == (undefined *)0x3e || param_11 == (undefined *)0x6f)) {
          if (puVar21 == (undefined *)0x0) goto LAB_106653ff4;
          goto LAB_106654004;
        }
        if (param_8 != 0) {
          if (puVar21 == (undefined *)0x0) goto LAB_106654058;
          goto LAB_106654068;
        }
LAB_106654080:
        uVar1 = 0;
        if (param_12 != 0) {
          uVar1 = uVar18;
        }
        if ((uVar1 & 1) != 0) {
          if (puVar21 == (undefined *)0x0) {
LAB_106654090:
            puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          }
          lVar6 = param_12;
          func_0x00010c259120();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c154260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          if (lVar7 != 0) {
            lVar6 = param_12;
            func_0x00010c259120(param_12);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c154260();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar21);
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
          lVar6 = param_12;
          func_0x00010c259120();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c153ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          if (lVar7 != 0) {
            lVar6 = param_12;
            func_0x00010c259120(param_12);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c153ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar21);
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
          lVar6 = param_12;
          func_0x00010c259120();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c1532c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          if (lVar7 != 0) {
            lVar6 = param_12;
            func_0x00010c259120(param_12);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c1532c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar21);
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
          lVar6 = param_12;
          func_0x00010c259120();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c154060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar7 != 0) {
            lVar6 = param_12;
            func_0x00010c259120();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c154060();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010c14de00(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar21);
            _objc_release(puVar11);
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
        }
      }
      lVar6 = param_12;
      func_0x00010c0b8220();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
LAB_106654430:
        if (((ulong)puVar20 & 1) == 0) {
LAB_106654458:
          puVar20 = PTR_PTR_1126b4d38;
          puVar11 = puVar21;
          func_0x00010bf51e00(puVar21);
          lVar6 = param_12;
          func_0x00010c0b8220(param_12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11a700(puVar20);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(puVar11);
        }
        else {
LAB_106654438:
          if (-1 < (long)param_5) {
            func_0x00010bf529e0();
          }
          puVar20 = PTR_PTR_1126b4d38;
          func_0x00010c0bc360(PTR_PTR_1126b4d38);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar11 = param_2 + 0x68;
        _objc_loadWeakRetained();
        if (puVar11 == (undefined *)0x0) {
          _objc_release();
          _objc_release(lVar6);
          goto LAB_106654430;
        }
        puVar12 = param_2 + 0x68;
        _objc_loadWeakRetained();
        puVar15 = puVar12;
        func_0x00010c235420();
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(lVar6);
        if (((ulong)puVar20 & 1) != 0) goto LAB_106654438;
        if ((int)puVar15 == 0) goto LAB_106654458;
        lVar6 = param_12;
        func_0x00010c07f400();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf1f3c0();
        _objc_release(lVar6);
        puVar20 = PTR_PTR_1126b4d38;
        if ((int)lVar7 == 0) {
          puVar20 = param_2 + 0x68;
          _objc_loadWeakRetained(puVar20);
          func_0x00010c10a420();
          _objc_release(puVar20);
          puVar20 = PTR_PTR_1126b4d38;
          puVar12 = param_4;
          func_0x00010bfb1920(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_2 + 0x68;
          _objc_loadWeakRetained();
          if (param_12 == 0) {
            func_0x00010c0d4860(puVar20);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            lVar6 = param_12;
            func_0x00010c0f0840();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = param_12;
            func_0x00010c0b8220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d4860(puVar20);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
          _objc_release(puVar11);
          _objc_release(puVar12);
        }
        else {
          puVar12 = param_4;
          func_0x00010bfb1920(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_2 + 0x68;
          _objc_loadWeakRetained();
          if (param_12 == 0) {
            func_0x00010c0d4860(puVar20);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            lVar6 = param_12;
            func_0x00010c0f0840();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = param_12;
            func_0x00010c0b8220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d4860(puVar20);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
          _objc_release(puVar11);
          _objc_release(puVar12);
        }
      }
      puVar11 = PTR_PTR_1126b4d48;
      _objc_alloc(PTR_PTR_1126b4d48);
      dVar22 = param_1;
      func_0x00010bff0a00(param_1);
      uVar5 = *(undefined8 *)(param_2 + 0x388);
      func_0x00010bf22a20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_2 + 0x168);
      func_0x00010c269d40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      func_0x000108534a80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ab9c0((double)(long)((dVar22 - param_1) * 1000.0),uVar17);
      _objc_release(puVar4);
      _objc_release(uVar17);
      lVar6 = param_14;
      _objc_retainBlock();
      uVar17 = *(undefined8 *)(param_2 + 0x48);
      *(long *)(param_2 + 0x48) = lVar6;
      _objc_release(uVar17);
      func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x380));
      _objc_release(uVar5);
      _objc_release(puVar11);
      _objc_release(puVar20);
      _objc_release(puVar21);
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uStack_168);
    _objc_release(puStack_150);
    param_11 = puVar19;
  }
  else {
    if ((*(long *)(param_2 + 0x378) != 0) && (func_0x00010bf529e0(), param_5 < puVar19)) {
      puVar9 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126c2098;
      _objc_opt_class(PTR_PTR_1126c2098);
      puVar10 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar19);
      puVar19 = puVar9;
      if (((ulong)puVar10 & 1) == 0) {
        puVar19 = (undefined *)0x0;
      }
      _objc_retain(puVar19);
      _objc_release(puVar9);
      if (puVar19 != (undefined *)0x0) {
        puVar19 = puVar9;
        func_0x00010c0ea200(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x000108481fac(puVar9,puVar19,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar19);
        puVar12 = *(undefined **)(param_2 + 0x378);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar12;
        func_0x00010c0fed80();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar10;
        func_0x00010c0ea200(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar9;
        func_0x00010c1561c0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar19;
        func_0x00010799a5f0(puVar19,puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar19);
        _objc_release(puVar12);
        puVar19 = puVar10;
        func_0x00010c25b720();
        ppuVar2 = &PTR_PTR_1126bdd30;
        if (puVar19 != (undefined *)0xb) {
          ppuVar2 = &PTR_PTR_1126b4d28;
        }
        ppuVar3 = &PTR_PTR_1126bdd28;
        if (puVar19 != (undefined *)0x2) {
          ppuVar3 = ppuVar2;
        }
        puVar19 = *ppuVar3;
        _objc_retain(puVar21);
        _objc_opt_class(puVar19);
        puVar9 = puVar21;
        _objc_opt_isKindOfClass(puVar21,puVar19);
        puVar19 = puVar21;
        if (((ulong)puVar9 & 1) == 0) {
          puVar19 = (undefined *)0x0;
        }
        _objc_retain(puVar19);
        _objc_release(puVar21);
        func_0x00010bee9a00();
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_retain(puVar19);
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(puStack_120);
        func_0x00010c25b720(puVar10);
        _objc_release(puVar21);
        _objc_release(puVar10);
        puStack_120 = puVar4;
        goto LAB_106653be4;
      }
    }
    if (param_14 != 0) {
      (**(code **)(param_14 + 0x10))(param_14,0);
    }
    param_11 = (undefined *)0x0;
  }
LAB_106654614:
  _objc_release(puVar8);
  _objc_release(param_4);
LAB_106654628:
  _objc_release(param_11);
  _objc_release(puStack_100);
  _objc_release(puStack_120);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c0bc7a0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar5);
    return;
  }
  return;
}



/* Entry: 106654968; end: 106654993;  */

void FUN_106654968(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc7a0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110931a38);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar1);
  return;
}



/* Entry: 106654994; end: 1066549e3;  */

uint FUN_106654994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2098;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 1066549e4; end: 106654a87;  */

void FUN_1066549e4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2098;
  _objc_opt_class(PTR_PTR_1126c2098);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar3 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar3 = param_2;
    func_0x00010c0ea200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x000108481fac(param_2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106654a88; end: 106654bc7;  */

void FUN_106654a88(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x378);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c0ea200(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010799a5f0(uVar3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  lVar4 = param_2;
  func_0x00010c25b720();
  _objc_release(param_2);
  ppuVar1 = &PTR_PTR_1126bdd30;
  if (lVar4 != 0xb) {
    ppuVar1 = &PTR_PTR_1126b4d28;
  }
  ppuVar2 = &PTR_PTR_1126bdd28;
  if (lVar4 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar8 = *ppuVar2;
  _objc_retain(uVar6);
  _objc_opt_class(puVar8);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar8);
  uVar3 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106654bc8; end: 106656f6b; -[SCImpalaStoryPlayerPresenter presentWithPlaylistFetcher:presentingViewController:useCircleTransition:feedPageSection:baseViews:startingBaseViewIndex:userSession:navigationServices:contentViewSource:playbackOptions:viewingType:showPayToPromoteButton:showInsights:playbackCompletion:completion:] */

ulong FUN_106654bc8(double param_1,undefined *param_2,undefined *param_3,ulong param_4,long param_5,
                   undefined1 param_6,long param_7,undefined *param_8,undefined *param_9,
                   undefined *param_10,undefined8 param_11,long param_12,undefined *param_13,
                   undefined8 param_14,undefined4 param_15,undefined4 param_16,undefined8 param_17,
                   long param_18)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined *puVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined *puVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined *puVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  double dVar82;
  undefined *puStack_1e8;
  undefined *puStack_138;
  
  lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puVar79 = param_2;
  func_0x00010be985c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar79 != (undefined *)0x0) goto LAB_106656ecc;
  if ((param_5 == 0) || (param_10 == (undefined *)0x0)) {
    puVar79 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    if (param_18 != 0) {
      param_3 = puVar79;
      (**(code **)(param_18 + 0x10))(param_18);
    }
    _objc_release(puVar79);
    goto LAB_106656ecc;
  }
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  dVar82 = param_1;
  if (param_13 == (undefined *)0x0) {
    puVar79 = (undefined *)0x0;
  }
  else {
    puVar79 = param_13;
    func_0x00010c259120();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(puVar79);
  }
  uVar7 = param_17;
  _objc_retainBlock();
  uVar42 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = uVar7;
  _objc_release(uVar42);
  puVar71 = param_2;
  func_0x00010bdd5900();
  if (puVar79 == (undefined *)0x0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  else {
    puVar6 = puVar79;
    func_0x00010c115a40(puVar79);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(double *)(param_2 + 0x38) = dVar82 / 1000.0;
    _objc_release(puVar6);
  }
  lVar43 = (long)(param_1 * 1000.0);
  *(long *)(param_2 + 0x40) = param_12;
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(uVar7);
  func_0x00010c269d40(*(undefined8 *)(param_2 + 0x98));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar79 != (undefined *)0x0) {
    puVar6 = puVar79;
    func_0x00010bfa40c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c067fc0();
    _objc_release(puVar6);
    if (puVar8 == (undefined *)0x44) {
      func_0x00010c269d40(*(undefined8 *)(param_2 + 0x98));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 0x328);
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c22f8;
  func_0x00010c153700(PTR_PTR_1126c22f8);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar7;
  func_0x00010bf1f320();
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar9);
  puStack_138 = param_2;
  func_0x00010be0ed60();
  uVar5 = (uint)uVar42;
  if (uVar5 != 0) {
    puVar6 = param_13;
    func_0x00010c259120();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c154080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar8 != (undefined *)0x0) {
      puVar6 = param_13;
      func_0x00010c259120(param_13);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c154080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      puStack_138 = param_2;
      func_0x00010bea3ec0();
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
  }
  puVar6 = PTR_PTR_1126cc570;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ec00();
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126cc578;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c800();
  _objc_release(uVar7);
  puVar10 = PTR_PTR_1126cc580;
  _objc_alloc();
  func_0x00010c01c7a0();
  puVar11 = PTR_PTR_1126cc588;
  _objc_alloc();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x248);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar13;
  func_0x00010bfe9f20();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_2 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_2 + 0x328);
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_2 + 0x430);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e9a0();
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar42);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(puVar12);
  lVar20 = *(long *)(param_2 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c297a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  lVar22 = *(long *)(param_2 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar22;
  func_0x00010c297aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  puVar23 = PTR_PTR_1126cc590;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ec40();
  _objc_release(uVar7);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar12;
  func_0x00010c0d3c80();
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126cc598;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar12;
  _objc_release(uVar7);
  func_0x00010befa120(puVar24);
  uVar25 = *(ulong *)(param_2 + 0x290);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf8f100();
  _objc_release(uVar25);
  if ((uVar26 & 1) == 0) {
    lVar27 = *(long *)(param_2 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar27;
    func_0x00010bf54660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar22 != 0) {
      func_0x00010befa120(puVar24);
    }
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar27;
    func_0x00010bf546e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    if (lVar28 != 0) {
      func_0x00010befa120(puVar24);
    }
    _objc_release(lVar28);
    _objc_release(lVar22);
    _objc_release(lVar27);
  }
  if (lVar21 != 0) {
    func_0x00010befa120(puVar24);
  }
  if (lVar20 != 0) {
    func_0x00010befa120(puVar24);
  }
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar24);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126cc5a0;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_13 == (undefined *)0x0) {
    func_0x00010c05d940();
  }
  else {
    puVar29 = param_13;
    func_0x00010c0b8220();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar29;
    func_0x00010c1252a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d940();
    _objc_release(puVar30);
    _objc_release(puVar29);
  }
  _objc_release(uVar7);
  puVar29 = PTR_PTR_1126cc5a8;
  _objc_alloc();
  if (param_13 == (undefined *)0x0) {
    func_0x00010bff05a0();
  }
  else {
    puVar30 = param_13;
    func_0x00010c0b8220(param_13);
    _objc_retainAutoreleasedReturnValue();
    puVar67 = puVar30;
    func_0x00010c1252a0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = param_13;
    func_0x00010c0b8220(param_13);
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar31;
    func_0x00010c0e74e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff05a0();
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar67);
    _objc_release(puVar30);
  }
  func_0x00010c201c00(puVar29);
  func_0x00010befa120(puVar24);
  bVar2 = param_2[0x70];
  uVar7 = *(undefined8 *)(param_2 + 600);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_2 + 0x420);
  _objc_retain();
  uVar9 = *(undefined8 *)(param_2 + 0x260);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x228);
  _objc_retain();
  uVar14 = *(undefined8 *)(param_2 + 0x400);
  _objc_retain();
  uVar15 = *(undefined8 *)(param_2 + 0x408);
  _objc_retain();
  uVar16 = *(undefined8 *)(param_2 + 0xe8);
  _objc_retain();
  uVar17 = *(undefined8 *)(param_2 + 0x410);
  _objc_retain();
  uVar18 = *(undefined8 *)(param_2 + 0x418);
  _objc_retain();
  puVar30 = param_2 + 0x60;
  _objc_loadWeakRetained();
  if ((puVar30 == (undefined *)0x0) || (cVar3 = param_2[0x70], _objc_release(), cVar3 != '\x01')) {
    puVar30 = param_2 + 0x2d0;
    _objc_loadWeakRetained();
    _objc_release();
    if (puVar30 == (undefined *)0x0) {
      puStack_1e8 = *(undefined **)(param_2 + 0x140);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_1e8 = param_2 + 0x2d0;
      _objc_loadWeakRetained();
      uVar33 = *(undefined8 *)(param_2 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar33;
      func_0x000108f48250();
      _objc_release(uVar33);
      if ((int)uVar19 != 0) {
        puVar30 = param_2 + 0x2d0;
        _objc_loadWeakRetained(puVar30);
        func_0x00010c222640();
        _objc_release(puVar30);
      }
    }
    uVar19 = *(undefined8 *)(param_2 + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = *(undefined8 *)(param_2 + 0x178);
    uVar45 = *(undefined8 *)(param_2 + 0x308);
    uVar46 = *(undefined8 *)(param_2 + 0x148);
    uVar47 = *(undefined8 *)(param_2 + 0x288);
    uVar48 = *(undefined8 *)(param_2 + 0x278);
    uVar49 = *(undefined8 *)(param_2 + 0x2a0);
    uVar50 = *(undefined8 *)(param_2 + 0x2e0);
    uVar51 = *(undefined8 *)(param_2 + 0x2f8);
    uVar52 = *(undefined8 *)(param_2 + 0x250);
    uVar53 = *(undefined8 *)(param_2 + 800);
    uVar33 = *(undefined8 *)(param_2 + 0x328);
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar54 = *(undefined8 *)(param_2 + 0x358);
    uVar68 = *(undefined8 *)(param_2 + 0x360);
    uVar59 = *(undefined8 *)(param_2 + 0x3a8);
    uVar58 = *(undefined8 *)(param_2 + 0x3a0);
    uVar57 = *(undefined8 *)(param_2 + 0xf8);
    uVar56 = *(undefined8 *)(param_2 + 0xf0);
    uVar80 = *(undefined8 *)(param_2 + 0x3c0);
    uVar74 = *(undefined8 *)(param_2 + 0x3d0);
    uVar70 = *(undefined8 *)(param_2 + 1000);
    uVar76 = *(undefined8 *)(param_2 + 0x3e0);
    uVar34 = *(undefined8 *)(param_2 + 0x3d8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar72 = *(undefined8 *)(param_2 + 0x188);
    uVar78 = *(undefined8 *)(param_2 + 0x128);
    uVar55 = *(undefined8 *)(param_2 + 0xf0);
    uVar36 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = param_10;
    func_0x000107204770(param_10,puStack_1e8,uVar19,0,param_11,lVar43,3,puVar71,param_14,0,4,0,
                        uVar44,0,uVar45,uVar46,uVar47,uVar48,uVar49,uVar50,uVar51,0,0,uVar52,uVar53,
                        uVar33,0xffffffffffffffff,uVar54,uVar68,puStack_138,param_2,uVar58,uVar59,
                        uVar56,uVar57,uVar80,0,uVar74,uVar70,uVar76,uVar34,0,0,uVar35,uVar72,uVar78,
                        uVar7,uVar42,uVar9,uVar13,uVar55,uVar36,uVar14,uVar15,uVar16,uVar17,
                        *(undefined8 *)(param_2 + 0x130),uVar18,*(undefined8 *)(param_2 + 0x3f8),0,0
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar19);
    func_0x00010befa120(puVar24);
    if (((*(long *)(param_2 + 0x98) != 0) && (puVar71 == (undefined *)0x17)) &&
       (param_2[0x70] == '\x01')) {
      puVar67 = PTR_PTR_1126cc5b0;
      _objc_alloc(PTR_PTR_1126cc5b0);
      uVar35 = *(undefined8 *)(param_2 + 0x328);
      func_0x00010c258480();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar35;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar19;
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      uVar36 = *(undefined8 *)(param_2 + 0x328);
      func_0x00010c258480();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = uVar36;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar44 = *(undefined8 *)(param_2 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff71e0(puVar67);
      _objc_release(uVar44);
      _objc_release(uVar34);
      _objc_release(uVar36);
      _objc_release(uVar33);
      _objc_release(uVar19);
      _objc_release(uVar35);
      func_0x00010befa120(puVar24);
      _objc_release(puVar67);
    }
  }
  else {
    puVar30 = param_2 + 0x60;
    _objc_loadWeakRetained();
    uVar19 = *(undefined8 *)(param_2 + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = *(undefined8 *)(param_2 + 0x178);
    uVar45 = *(undefined8 *)(param_2 + 0x308);
    uVar46 = *(undefined8 *)(param_2 + 0x148);
    uVar47 = *(undefined8 *)(param_2 + 0x288);
    uVar48 = *(undefined8 *)(param_2 + 0x278);
    uVar49 = *(undefined8 *)(param_2 + 0x2a0);
    uVar50 = *(undefined8 *)(param_2 + 0x2f8);
    uVar51 = *(undefined8 *)(param_2 + 0x250);
    uVar52 = *(undefined8 *)(param_2 + 800);
    uVar33 = *(undefined8 *)(param_2 + 0x328);
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar53 = *(undefined8 *)(param_2 + 0x358);
    uVar54 = *(undefined8 *)(param_2 + 0x360);
    uVar58 = *(undefined8 *)(param_2 + 0x3a8);
    uVar57 = *(undefined8 *)(param_2 + 0x3a0);
    uVar56 = *(undefined8 *)(param_2 + 0xf8);
    uVar55 = *(undefined8 *)(param_2 + 0xf0);
    uVar68 = *(undefined8 *)(param_2 + 0x3c0);
    uVar70 = *(undefined8 *)(param_2 + 0x3d0);
    uVar72 = *(undefined8 *)(param_2 + 1000);
    uVar74 = *(undefined8 *)(param_2 + 0x3e0);
    uVar34 = *(undefined8 *)(param_2 + 0x3d8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar78 = *(undefined8 *)(param_2 + 0x188);
    uVar76 = *(undefined8 *)(param_2 + 0x128);
    uVar80 = *(undefined8 *)(param_2 + 0xf0);
    uVar36 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = param_10;
    func_0x000107204770(param_10,puVar30,uVar19,0,param_11,lVar43,3,puVar71,param_14,0,4,0,uVar44,0,
                        uVar45,uVar46,uVar47,uVar48,uVar49,0,uVar50,0,0,uVar51,uVar52,uVar33,
                        0xffffffffffffffff,uVar53,uVar54,puStack_138,param_2,uVar57,uVar58,uVar55,
                        uVar56,uVar68,0,uVar70,uVar72,uVar74,uVar34,0,0,uVar35,uVar78,uVar76,uVar7,
                        uVar42,uVar9,uVar13,uVar80,uVar36,uVar14,uVar15,uVar16,uVar17,
                        *(undefined8 *)(param_2 + 0x130),uVar18,*(undefined8 *)(param_2 + 0x3f8),0,0
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar19);
    _objc_release(puVar30);
    func_0x00010befa120(puVar24);
    puVar30 = PTR_PTR_1126cc5b0;
    _objc_alloc(PTR_PTR_1126cc5b0);
    uVar35 = *(undefined8 *)(param_2 + 0x328);
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar35;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar19;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_2 + 0x328);
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar36;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff71e0(puVar30);
    _objc_release(uVar44);
    _objc_release(uVar34);
    _objc_release(uVar36);
    _objc_release(uVar33);
    _objc_release(uVar19);
    _objc_release(uVar35);
    func_0x00010befa120(puVar24);
  }
  _objc_release(puVar30);
  _objc_release(puStack_1e8);
  uVar35 = *(undefined8 *)(param_2 + 0x278);
  uVar36 = *(undefined8 *)(param_2 + 0x288);
  uVar44 = *(undefined8 *)(param_2 + 0x2d8);
  uVar46 = *(undefined8 *)(param_2 + 0x300);
  uVar47 = *(undefined8 *)(param_2 + 0x250);
  uVar53 = *(undefined8 *)(param_2 + 0x340);
  uVar19 = *(undefined8 *)(param_2 + 0x170);
  uVar33 = *(undefined8 *)(param_2 + 0x178);
  uVar48 = *(undefined8 *)(param_2 + 0x130);
  uVar49 = *(undefined8 *)(param_2 + 0x3a0);
  uVar50 = *(undefined8 *)(param_2 + 0x148);
  uVar51 = *(undefined8 *)(param_2 + 0x3c0);
  uVar52 = *(undefined8 *)(param_2 + 0x188);
  uVar54 = *(undefined8 *)(param_2 + 0x3f8);
  uVar34 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = param_10;
  func_0x00010720435c(param_10,0,param_11,0,0,lVar43,3,puVar71,param_14,0,4,0,0,0x7fffffffffffffff,
                      CONCAT62((uint6)((ulong)uVar45 >> 0x10) & 0xffffffffff00,1),7,uVar34,puVar79,
                      uVar35,uVar36,uVar44,uVar46,uVar33,uVar47,uVar53,uVar19,uVar48,uVar49,uVar50,
                      uVar51,uVar52,uVar54,*(undefined8 *)(param_2 + 0x228),
                      *(undefined8 *)(param_2 + 0x428),*(undefined8 *)(param_2 + 0xf0),
                      *(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(param_2 + 0x3e0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar34);
  func_0x00010befa120(puVar24);
  uVar48 = *(undefined8 *)(param_2 + 0x178);
  uVar49 = *(undefined8 *)(param_2 + 0x160);
  uVar50 = *(undefined8 *)(param_2 + 0x128);
  puVar67 = PTR_PTR_1126cc5b8;
  _objc_alloc();
  uVar36 = *(undefined8 *)(param_2 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d280();
  puVar31 = PTR_PTR_1126cc5c0;
  _objc_alloc();
  func_0x00010c039a40();
  puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_2 + 0x180);
  uVar52 = *(undefined8 *)(param_2 + 0x150);
  uVar53 = *(undefined8 *)(param_2 + 0x240);
  uVar54 = *(undefined8 *)(param_2 + 0x108);
  uVar68 = *(undefined8 *)(param_2 + 0x248);
  uVar70 = *(undefined8 *)(param_2 + 0x250);
  uVar45 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar72 = *(undefined8 *)(param_2 + 600);
  uVar74 = *(undefined8 *)(param_2 + 0x228);
  uVar76 = *(undefined8 *)(param_2 + 200);
  uVar78 = *(undefined8 *)(param_2 + 0x88);
  uVar19 = *(undefined8 *)(param_2 + 0xe8);
  uVar34 = *(undefined8 *)(param_2 + 0xf0);
  uVar44 = *(undefined8 *)(param_2 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar80 = *(undefined8 *)(param_2 + 0x238);
  uVar55 = *(undefined8 *)(param_2 + 0x188);
  uVar33 = *(undefined8 *)(param_2 + 0xd0);
  uVar35 = *(undefined8 *)(param_2 + 0xd8);
  uVar56 = *(undefined8 *)(param_2 + 0xf8);
  uVar62 = *(undefined8 *)(param_2 + 0x1b0);
  uVar57 = *(undefined8 *)(param_2 + 0x268);
  uVar58 = *(undefined8 *)(param_2 + 0x270);
  uVar46 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = *(undefined8 *)(param_2 + 0x130);
  uVar59 = *(undefined8 *)(param_2 + 0x218);
  uVar64 = *(undefined8 *)(param_2 + 0x220);
  uVar60 = *(undefined8 *)(param_2 + 0x278);
  uVar65 = *(undefined8 *)(param_2 + 0x288);
  uVar61 = *(undefined8 *)(param_2 + 0x260);
  uVar73 = *(undefined8 *)(param_2 + 0x298);
  uVar69 = *(undefined8 *)(param_2 + 0x300);
  uVar77 = *(undefined8 *)(param_2 + 800);
  uVar75 = *(undefined8 *)(param_2 + 0x328);
  uVar81 = *(undefined8 *)(param_2 + 0x348);
  uVar66 = *(undefined8 *)(param_2 + 0x368);
  uVar47 = *(undefined8 *)(param_2 + 0x430);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126b1350;
  _objc_alloc();
  func_0x00010bfeee60();
  puVar38 = param_10;
  param_3 = puVar71;
  func_0x000106903db4(param_10,puVar71,7,uVar48,uVar49,uVar50,puVar67,puVar31,puVar32,uVar51,uVar52,
                      uVar53,uVar54,uVar68,uVar70,uVar45,uVar72,uVar74,uVar76,uVar19,uVar78,uVar34,
                      uVar44,uVar80,uVar55,uVar33,uVar35,uVar56,uVar62,uVar57,uVar58,uVar46,uVar63,
                      uVar59,uVar64,uVar60,uVar65,uVar61,uVar73,uVar69,0,uVar77,0,uVar75,uVar81,
                      uVar66,param_2,puStack_138,uVar47,puVar37);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar37);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar44);
  _objc_release(uVar45);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar67);
  _objc_release(uVar36);
  func_0x00010befa120(puVar24);
  if ((bVar2 & 1) == 0 && puVar71 != (undefined *)0x7) {
    if ((param_7 != 0) && (param_12 == 0x3e)) {
LAB_1066564f0:
      puVar67 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      goto LAB_106656500;
    }
    if (param_7 != 0) {
LAB_106656568:
      puVar67 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      goto LAB_106656578;
    }
    if (param_12 == 0x1e) goto LAB_1066565c8;
    uVar1 = 0;
    if (param_13 != (undefined *)0x0) {
      uVar1 = uVar5;
    }
    if ((uVar1 & 1) == 0) {
      puVar67 = (undefined *)0x0;
      goto LAB_106656950;
    }
LAB_1066566f8:
    puVar67 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
LAB_106656708:
    _objc_retain(puVar67);
    _objc_release(puVar67);
    puVar31 = param_13;
    func_0x00010c259120();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar31;
    func_0x00010c154260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar31);
    if (puVar32 != (undefined *)0x0) {
      puVar31 = param_13;
      func_0x00010c259120(param_13);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar31;
      func_0x00010c154260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar67);
      _objc_release(puVar32);
      _objc_release(puVar31);
    }
    puVar31 = param_13;
    func_0x00010c259120();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar31;
    func_0x00010c153ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar31);
    if (puVar32 != (undefined *)0x0) {
      puVar31 = param_13;
      func_0x00010c259120(param_13);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar31;
      func_0x00010c153ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar67);
      _objc_release(puVar32);
      _objc_release(puVar31);
    }
    puVar31 = param_13;
    func_0x00010c259120();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar31;
    func_0x00010c1532c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar31);
    if (puVar32 != (undefined *)0x0) {
      puVar31 = param_13;
      func_0x00010c259120(param_13);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar31;
      func_0x00010c1532c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar67);
      _objc_release(puVar32);
      _objc_release(puVar31);
    }
    puVar31 = param_13;
    func_0x00010c259120();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar31;
    func_0x00010c154060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar31);
    puVar31 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar32 != (undefined *)0x0) {
      puVar32 = param_13;
      func_0x00010c259120();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar32;
      func_0x00010c154060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c14de00(puVar31);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar67);
      _objc_release(puVar31);
      _objc_release(puVar37);
      _objc_release(puVar32);
    }
  }
  else {
    puVar31 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar67 = puVar31;
    func_0x00010c0d3c80();
    _objc_release(puVar31);
    if ((param_7 == 0) || (param_12 != 0x3e)) {
      if (param_7 != 0) {
        if (puVar67 == (undefined *)0x0) goto LAB_106656568;
LAB_106656578:
        _objc_retain(puVar67);
        _objc_release(puVar67);
        func_0x00010c1d0640(puVar67);
      }
      if (param_12 != 0x1e) goto LAB_1066566e4;
      if (puVar67 == (undefined *)0x0) {
LAB_1066565c8:
        puVar67 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
      }
      _objc_retain(puVar67);
      _objc_release(puVar67);
      if (param_13 != (undefined *)0x0) {
        puVar31 = param_13;
        func_0x00010c259120();
        _objc_retainAutoreleasedReturnValue();
        puVar32 = puVar31;
        func_0x00010c154260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar31);
        if (puVar32 != (undefined *)0x0) {
          puVar31 = param_13;
          func_0x00010c259120(param_13);
          _objc_retainAutoreleasedReturnValue();
          puVar32 = puVar31;
          func_0x00010c154260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar67);
          _objc_release(puVar32);
          _objc_release(puVar31);
        }
        puVar31 = param_13;
        func_0x00010c259120();
        _objc_retainAutoreleasedReturnValue();
        puVar32 = puVar31;
        func_0x00010c153ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar31);
        if (puVar32 == (undefined *)0x0) goto LAB_1066566e4;
        puVar31 = param_13;
        func_0x00010c259120(param_13);
        _objc_retainAutoreleasedReturnValue();
        puVar32 = puVar31;
        func_0x00010c153ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar67);
        _objc_release(puVar32);
        goto LAB_106656540;
      }
    }
    else {
      if (puVar67 == (undefined *)0x0) goto LAB_1066564f0;
LAB_106656500:
      func_0x00010be0ed40(param_2);
      puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar67);
LAB_106656540:
      _objc_release(puVar31);
LAB_1066566e4:
      uVar1 = 0;
      if (param_13 != (undefined *)0x0) {
        uVar1 = uVar5;
      }
      if ((uVar1 & 1) != 0) {
        if (puVar67 == (undefined *)0x0) goto LAB_1066566f8;
        goto LAB_106656708;
      }
    }
  }
LAB_106656950:
  lVar22 = *(long *)(param_2 + 0x2a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar67;
  func_0x00010bf51e00(puVar67);
  func_0x00010be5aba0(param_2);
  lVar43 = lVar22;
  func_0x00010bf81f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar31);
  _objc_release(lVar22);
  if (lVar43 != 0) {
    func_0x00010befa120(puVar24);
  }
  lVar27 = *(long *)(param_2 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar27;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  if (lVar22 != 0) {
    func_0x00010befa120(puVar24);
  }
  if (*(long *)(param_2 + 0x370) != 0) {
    puVar31 = PTR_PTR_1126cc5c8;
    _objc_alloc(PTR_PTR_1126cc5c8);
    func_0x00010c002d60();
    func_0x00010c18b5e0();
    func_0x00010befa120(puVar24);
    _objc_release(puVar31);
  }
  if ((puVar71 == (undefined *)0x59) || (puVar71 == (undefined *)0x7)) {
    puVar31 = PTR_PTR_1126cc5d0;
    _objc_alloc(PTR_PTR_1126cc5d0);
    puVar71 = param_2 + 0x398;
    _objc_loadWeakRetained(puVar71);
    func_0x00010c0330e0(puVar31);
    _objc_release(puVar71);
    func_0x00010befa120(puVar24);
    _objc_release(puVar31);
  }
  puVar71 = param_8;
  func_0x00010bf529e0();
  if (param_9 < puVar71) {
    puVar71 = param_8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_2 + 0x28,puVar71);
    param_3 = puVar71;
    _objc_storeWeak(param_2 + 0x30);
  }
  else {
    puVar71 = (undefined *)0x0;
  }
  _objc_retain(param_8);
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  *(undefined **)(param_2 + 0x20) = param_8;
  _objc_release(uVar19);
  lVar27 = param_18;
  _objc_retainBlock();
  uVar19 = *(undefined8 *)(param_2 + 0x48);
  *(long *)(param_2 + 0x48) = lVar27;
  _objc_release(uVar19);
  param_2[0x2c8] = param_6;
  puVar31 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
  if (*(long *)(param_2 + 0x2c0) != 0) {
    iVar4 = (int)*(undefined8 *)(param_2 + 0x2b0);
    func_0x00010c072560();
    if (iVar4 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_2 + 0x2b0));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  uVar19 = *(undefined8 *)(param_2 + 0x2b8);
  puVar32 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  puVar37 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar32);
  puVar39 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  func_0x00010c0372c0();
  func_0x00010bf23920();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_2 + 0x2c0) = uVar19;
  _objc_release(uVar33);
  _objc_release(puVar39);
  _objc_release(puVar32);
  _objc_release(puVar37);
  uVar33 = *(undefined8 *)(param_2 + 0x290);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar33;
  func_0x00010bf8f100();
  _objc_release(uVar33);
  if ((int)uVar19 != 0) {
    puVar37 = puVar24;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    puVar39 = PTR_PTR_1126cc5d8;
    _objc_alloc(PTR_PTR_1126cc5d8);
    puVar40 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR_PTR_1126ae720;
    if (puVar37 == (undefined *)0x0) {
      func_0x00010c04e040(puVar39);
      _objc_release(puVar40);
      func_0x00010c20c580(*(undefined8 *)(param_2 + 0x2c0));
    }
    else {
      _objc_retain(puVar37);
      func_0x00010bf11fe0(puVar32);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e040(puVar39);
      _objc_release(puVar32);
      _objc_release(puVar40);
      func_0x00010c20c580(*(undefined8 *)(param_2 + 0x2c0));
      _objc_release(puVar39);
      puVar39 = puVar37;
    }
    _objc_release(puVar39);
    _objc_release(puVar37);
  }
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x2b0));
  _objc_release(puVar31);
  _objc_release(puVar71);
  _objc_release(lVar22);
  _objc_release(lVar43);
  _objc_release(puVar67);
  _objc_release(puVar38);
  _objc_release(puVar30);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar42);
  _objc_release(uVar7);
  _objc_release(puVar29);
  _objc_release(puVar12);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(lVar20);
  _objc_release(lVar21);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar79);
LAB_106656ecc:
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar41) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar79 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5580);
  uVar5 = 0;
  if (param_3 != (undefined *)0x0) {
    uVar5 = (uint)puVar79;
  }
  _objc_release(param_3);
  return (ulong)uVar5;
}



/* Entry: 106656f6c; end: 106656fdb;  */

undefined4 FUN_106656f6c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5580);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (undefined4)lVar2;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106656fdc; end: 10665702f; -[SCImpalaStoryPlayerPresenter dismissWithAnimation:] */

void FUN_106656fdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)uVar1 != 0) {
    func_0x00010be985c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106657030; end: 1066570bb; -[SCImpalaStoryPlayerPresenter updateBaseViews:startingBaseViewIndex:] */

void FUN_106657030(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283ba0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066570bc; end: 10665715b; -[SCImpalaStoryPlayerPresenter setupPlaylist:singleSnapDataProvider:managedSingleSnapDataProvider:isSpotlightPlayback:publicStoryDataProvider:] */

void FUN_1066570bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x58,param_3);
  _objc_storeWeak(param_1 + 0x60,param_4);
  _objc_release(param_4);
  _objc_storeWeak(param_1 + 0x68,param_5);
  _objc_release(param_5);
  *(undefined1 *)(param_1 + 0x70) = param_6;
  _objc_storeWeak(param_1 + 0x2d0,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10665715c; end: 106657163; -[SCImpalaStoryPlayerPresenter isPresenting] */

undefined1 FUN_10665715c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 106657164; end: 106657337; -[SCImpalaStoryPlayerPresenter _broadcastViewLocationForSCAContentViewSource:storyType:playbackOptions:] */

undefined8 FUN_106657164(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    uVar5 = 0x39;
  }
  else {
    lVar3 = param_5;
    func_0x00010c290400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    uVar5 = 7;
    if (((uint)(param_4 == 3) & (uint)lVar4) == 0) {
      uVar5 = 0x39;
    }
  }
  if (param_3 < 0x3d) {
    if (param_3 == 0x16) {
      uVar6 = 0x48;
      goto LAB_106657210;
    }
    if (param_3 == 0x1e) goto LAB_1066572a0;
    if (param_3 == 0x22) goto LAB_106657298;
LAB_10665724c:
    uVar6 = 0x38;
    goto LAB_106657210;
  }
  uVar6 = 0x31;
  switch(param_3) {
  case 0x3d:
    break;
  case 0x3e:
    bVar1 = *(char *)(param_1 + 0x70) == '\0';
    uVar5 = 0x39;
    uVar6 = 0x56;
    goto code_r0x000106657320;
  case 0x3f:
    uVar6 = 0x32;
    break;
  default:
    goto LAB_10665724c;
  case 0x41:
    uVar6 = 0x35;
    break;
  case 0x4a:
    goto LAB_106657298;
  case 0x4b:
  case 0x66:
    if (param_4 == 3) {
      uVar6 = 0x39;
      break;
    }
    goto LAB_106657298;
  case 0x52:
    uVar6 = 0x4f;
    break;
  case 0x56:
  case 0x71:
  case 0x72:
    uVar5 = 0x67;
    if (param_4 != 0xe) {
      uVar5 = 7;
    }
    uVar6 = 0x59;
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      uVar6 = uVar5;
    }
    break;
  case 0x68:
    uVar6 = 0x55;
    break;
  case 0x6c:
LAB_1066572a0:
    uVar6 = 0x17;
    break;
  case 0x6d:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x3c8);
    FUN_10664eeac();
    bVar1 = iVar2 == 0;
    uVar5 = 0x39;
    uVar6 = 0x67;
    goto code_r0x000106657320;
  case 0x6e:
    iVar2 = (int)*(undefined8 *)(param_1 + 0x3c8);
    FUN_10664eeac();
    bVar1 = iVar2 == 0;
    uVar5 = 0x56;
    uVar6 = 0x59;
code_r0x000106657320:
    if (bVar1) {
      uVar6 = uVar5;
    }
    break;
  case 0x6f:
  case 0x70:
    uVar6 = uVar5;
    break;
  case 0x73:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x8a:
  case 0x8f:
    uVar6 = 0x59;
    break;
  case 0x74:
  case 0x8e:
    uVar6 = 0x67;
    break;
  case 0x75:
    uVar6 = 7;
    break;
  case 0x88:
    uVar6 = 0x6a;
    break;
  case 0x89:
    uVar6 = 0x69;
    break;
  case 0x8b:
    uVar6 = 0x6b;
  }
LAB_106657210:
  _objc_release(param_5);
  return uVar6;
LAB_106657298:
  uVar6 = 0x15;
  goto LAB_106657210;
}



/* Entry: 106657338; end: 106657433; -[SCImpalaStoryPlayerPresenter _feedPageSectionForSCAContentViewSource:] */

long FUN_106657338(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x25;
  if (param_3 < 0x41) {
    if (param_3 < 0x3d) {
      if (param_3 == 0x16) {
        return 0x37;
      }
      if (param_3 == 0x1e) {
        return 0x3d;
      }
      if (param_3 == 0x22) {
        return 0x3b;
      }
    }
    else if (param_3 - 0x3dU < 3) {
      return lVar1;
    }
  }
  else if (param_3 < 0x56) {
    if (param_3 == 0x41) {
      return lVar1;
    }
    if (param_3 == 0x4a) {
      return 0x34;
    }
    if (param_3 == 0x52) {
      return 0x38;
    }
  }
  else if (param_3 < 0x8e) {
    if (param_3 == 0x56) {
      return lVar1;
    }
    if (param_3 == 0x6c) {
      return 0x48;
    }
  }
  else {
    if (param_3 == 0x8e) {
      return lVar1;
    }
    if (param_3 == 0x8f) {
      return 0x49;
    }
  }
  func_0x00010baf2e2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010baf8a64();
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106657434; end: 1066575bb; -[SCImpalaStoryPlayerPresenter _pageTypeForSCAContentViewSource:] */

undefined8 FUN_106657434(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_3 < 0x66) {
    if (param_3 < 0x41) {
      if (0x3c < param_3) {
        if (param_3 != 0x3d) {
          if (param_3 == 0x3e) {
            return 9;
          }
          if (param_3 != 0x3f) {
            return 0xffffffffffffffff;
          }
        }
LAB_106657524:
        uVar2 = *(undefined8 *)(param_1 + 0x98);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x000108f493e8();
        _objc_release(uVar2);
        if ((int)uVar3 == 0) {
          return 9;
        }
        return 0xd;
      }
      if (param_3 == 0x16) {
        return 0x5d;
      }
      if (param_3 == 0x1e) {
        return 0x10;
      }
    }
    else if (param_3 < 0x4b) {
      if (param_3 == 0x41) goto LAB_106657524;
      if (param_3 == 0x4a) {
        return 0xbd;
      }
    }
    else {
      if (param_3 == 0x4b) {
        return 0x5c;
      }
      if (param_3 == 0x52) {
        return 0x93;
      }
      if (param_3 == 0x56) {
        return 9;
      }
    }
  }
  else {
    uVar4 = param_3 - 0x6d;
    if (uVar4 < 0x23) {
      if ((1L << (uVar4 & 0x3f) & 0x6100001f0U) != 0) {
        return 0xe;
      }
      if ((1L << (uVar4 & 0x3f) & 7U) != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x3c8);
        FUN_10664eeac();
        if (iVar1 != 0) {
          return 0xe;
        }
        return 0xd;
      }
      if ((1L << (uVar4 & 0x3f) & 0x8000008U) != 0) {
        return 0xd;
      }
    }
    if (param_3 == 0x66) {
      return 0x5c;
    }
    if (param_3 == 0x6c) {
      return 0x10;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 1066575bc; end: 106657757; -[SCImpalaStoryPlayerPresenter _viewModelStoryIdFromDataModel:] */

void FUN_1066575bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_PTR_1126bdd30;
  uVar2 = param_3;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126b4d28;
    _objc_opt_class(PTR_PTR_1126b4d28);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    puVar1 = PTR_PTR_1126b4d28;
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      _objc_opt_isKindOfClass(param_3,puVar1);
      puVar1 = PTR_PTR_1126bdd28;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        goto LAB_106657734;
      }
      _objc_retain(param_3);
      _objc_opt_class(puVar1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      uVar3 = param_3;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_3);
      uVar2 = uVar3;
      func_0x00010bf454e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x000108f51f98(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      _objc_opt_class(puVar1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_3);
      uVar3 = uVar2;
      func_0x00010c259cc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar3 = uVar2;
    func_0x00010bf45500(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_106657734:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106657758; end: 106657853; -[SCImpalaStoryPlayerPresenter _storyTypeFromDataModel:] */

undefined8 FUN_106657758(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126b4d28;
      _objc_opt_class(PTR_PTR_1126b4d28);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      puVar1 = PTR_PTR_1126b4d28;
      if ((uVar2 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        _objc_retain(param_3);
        _objc_opt_class(puVar1);
        uVar3 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar1);
        uVar2 = param_3;
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(param_3);
        uVar3 = uVar2;
        func_0x00010c27dd80();
        _objc_release(uVar2);
        uVar4 = 0xd;
        if (uVar3 == 8) {
          uVar4 = 0xe;
        }
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 0xb;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106657854; end: 1066579ab; -[SCImpalaStoryPlayerPresenter _storyTypeFromDataModelFromSCSnapPlaybackInfo:] */

undefined8 FUN_106657854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c25b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = uVar1;
  func_0x00010bf0e700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar2);
  uVar2 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1066579ac; end: 1066579bf;  */

void FUN_1066579ac(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 1066579c0; end: 1066579f7;  */

void FUN_1066579c0(long param_1,int param_2)

{
  func_0x00010c07f5e0();
  if (param_2 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xd;
  }
  return;
}



/* Entry: 1066579f8; end: 106657a0b;  */

void FUN_1066579f8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xe;
  return;
}



/* Entry: 106657a0c; end: 106657a4f; -[SCImpalaStoryPlayerPresenter _completeWithErrorIfNeeded:] */

void FUN_106657a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106657a50; end: 106657b3f; -[SCImpalaStoryPlayerPresenter _completeWithPlaylistIndexOutOfBoundsError:dataModelsCount:contentViewSource:completion:] */

void FUN_106657a50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  long in_x5;
  
  _objc_retain(in_x5);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f382e4(*(undefined8 *)(param_1 + 0x3f0),in_x4,1);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  if (in_x5 != 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 106657b40; end: 106657bbb; -[SCImpalaStoryPlayerPresenter updateBaseView:] */

void FUN_106657b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = param_1;
    func_0x00010be985c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283ba0();
    _objc_release(lVar1);
    _objc_storeWeak(param_1 + 0x30,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106657bbc; end: 106657c0b; -[SCImpalaStoryPlayerPresenter updatePlaylistWithPlayableDataModels:] */

void FUN_106657bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be985c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2889e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106657c0c; end: 106657c57; -[SCImpalaStoryPlayerPresenter refreshCurrentPlaylistGroupWithCompletion:] */

void FUN_106657c0c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1251e0(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,uVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106657c58; end: 106657cdb; -[SCImpalaStoryPlayerPresenter updatePlaylistWithDiscoverFeedStories:] */

void FUN_106657c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106657cdc;
  puStack_30 = &UNK_110931a08;
  uStack_28 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288a20(param_1,param_2,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 106657cdc; end: 106657e57;  */

void FUN_106657cdc(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c0ea200(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x000108481fac(param_2,lVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar3);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x378);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c0ea200(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010799a5f0(uVar6,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar3 = lVar4;
  func_0x00010c25b720();
  ppuVar1 = &PTR_PTR_1126bdd30;
  if (lVar3 != 0xb) {
    ppuVar1 = &PTR_PTR_1126b4d28;
  }
  ppuVar2 = &PTR_PTR_1126bdd28;
  if (lVar3 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar9 = *ppuVar2;
  _objc_retain(uVar8);
  _objc_opt_class(puVar9);
  uVar5 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar9);
  uVar6 = uVar8;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106657e58; end: 106657f53; -[SCImpalaStoryPlayerPresenter operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_106657e58(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x3f0);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010baf2e2c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f35b1c(param_1 - *(double *)(param_2 + 0x38),uVar3,uVar2);
  _objc_release(uVar2);
  if ((*(byte *)(param_2 + 0x2c8) & 1) == 0) {
    uVar2 = param_4;
    func_0x00010c27a6a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b4e0();
    _objc_release(uVar2);
  }
  _objc_storeWeak(param_2 + 8,param_4);
  *(undefined1 *)(param_2 + 0x19) = 1;
  param_2 = param_2 + 0x58;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010c25a840(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106657f54; end: 1066580af; -[SCImpalaStoryPlayerPresenter operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_106657f54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c283ba0(param_1);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010010fab4();
  lVar3 = lVar2;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(lVar2);
  lVar4 = lVar1;
  func_0x00010c131920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  if (lVar4 != 0) {
    lVar2 = lVar1;
  }
  func_0x00010c131920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x398;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c0f14e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    func_0x00010bf3aea0(lVar1);
    func_0x00010bf3aea0(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066580b0; end: 10665810b; -[SCImpalaStoryPlayerPresenter operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1066580b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c283ba0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c25a820(lVar1,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10665810c; end: 10665810f; -[SCImpalaStoryPlayerPresenter operaPresenterDidCancelDismissing:] */

void FUN_10665810c(void)

{
  return;
}



/* Entry: 106658110; end: 106658113; -[SCImpalaStoryPlayerPresenter operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_106658110(void)

{
  return;
}



/* Entry: 106658114; end: 10665816f; -[SCImpalaStoryPlayerPresenter operaPresenterDidFailToPresent:] */

void FUN_106658114(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e05458,
                      &PTR____CFConstantStringClassReference_110e58178,200);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde36e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106658170; end: 106658267; -[SCImpalaStoryPlayerPresenter operaPresenterDidFinishDismissing:] */

void FUN_106658170(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  func_0x00010bde36e0(param_1,param_2,0);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c25a7e0(lVar1,param_2,param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3240();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb31a0();
  _objc_release(uVar2);
  lVar3 = param_1 + 0x2d0;
  _objc_loadWeakRetained();
  if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x98), lVar4 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000108f48250();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar5 == 0) goto LAB_106658250;
    lVar3 = param_1 + 0x2d0;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c222640();
  }
  _objc_release(lVar3);
LAB_106658250:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106658268; end: 106658313; -[SCImpalaStoryPlayerPresenter operaPresenterDidTearDown:] */

void FUN_106658268(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010bde36e0(param_1,param_2,0);
  _objc_storeWeak(param_1 + 8,0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + 0x28,0);
  _objc_storeWeak(param_1 + 0x30,0);
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x2c0) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x2b0);
    func_0x00010c072560();
    if (iVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x2b0));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x2c0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    _objc_release(uVar2);
  }
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c25a800(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106658314; end: 106658723; -[SCImpalaStoryPlayerPresenter operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_106658314(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_1066586b0;
  uVar10 = param_3;
  func_0x00010c101480(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bfecde0();
  _objc_release(uVar10);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_106658724;
  uStack_78 = 0x106658734;
  uStack_70 = 0;
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126c6d90;
  _objc_opt_class(PTR_PTR_1126c6d90);
  uVar5 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar4 = param_4;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_4);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126b4d28;
  _objc_opt_class(PTR_PTR_1126b4d28);
  uVar6 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar5 = param_4;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_4);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar7 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar6 = param_4;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(param_4);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar8 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar7 = param_4;
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(param_4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar1 == 0) {
    if (uVar4 == 0 && uVar5 == 0) {
      if (uVar7 == 0 && uVar6 == 0) goto LAB_1066585c4;
      uVar8 = param_1;
      func_0x00010bee9a00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar8 = param_4;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar10 = puStack_90[5];
    puStack_90[5] = uVar8;
    _objc_release(uVar10);
  }
  else {
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10665873c;
    puStack_a8 = &UNK_1109214e8;
    puStack_f0 = &uStack_98;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1066587a0;
    puStack_d0 = &UNK_110920c78;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1066587e4;
    puStack_f8 = &UNK_1109215c8;
    puStack_c8 = puStack_f0;
    puStack_a0 = puStack_f0;
    func_0x00010c0bdf40(param_4);
  }
LAB_1066585c4:
  if (puStack_90[5] != 0) {
    _objc_initWeak(auStack_118,param_1);
    lVar9 = *(long *)(param_1 + 0x50);
    uVar10 = puStack_90[5];
    puStack_140 = puVar3;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_1066588ac;
    puStack_128 = &UNK_110849710;
    _objc_copyWeak(auStack_120,auStack_118);
    (**(code **)(lVar9 + 0x10))(lVar9,uVar2,uVar10,&puStack_140);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_118);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
LAB_1066586b0:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106658724; end: 10665873b;  */

void FUN_106658724(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10665873c; end: 106658793;  */

void FUN_10665873c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106658794; end: 10665879f;  */

void FUN_106658794(void)

{
  return;
}



/* Entry: 1066587a0; end: 1066587df;  */

void FUN_1066587a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066587e0; end: 1066587e3;  */

void FUN_1066587e0(void)

{
  return;
}



/* Entry: 1066587e4; end: 1066588a7;  */

void FUN_1066587e4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = param_2;
  func_0x00010c08fa60();
  lVar4 = param_2;
  if (lVar3 == 0) {
    _objc_retain(param_2);
  }
  else {
    lVar3 = param_2;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      lVar4 = lVar1;
    }
    _objc_retain(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066588a8; end: 1066588ab;  */

void FUN_1066588a8(void)

{
  return;
}



/* Entry: 1066588ac; end: 1066588f3;  */

void FUN_1066588ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


