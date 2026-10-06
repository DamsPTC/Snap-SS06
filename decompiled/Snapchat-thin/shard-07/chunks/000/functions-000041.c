/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050c4528; end: 1050c462f;  */

void FUN_1050c4528(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf35b80(uVar2);
  FUN_1050d18bc(param_2,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c4630; end: 1050c47ab;  */

void FUN_1050c4630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0f7fc0(param_3);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1050c47ac; end: 1050c4a2f;  */

void FUN_1050c47ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b4980;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf35ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1050c7264();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010c1ebee0(puVar1);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109189494();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec200(puVar1);
  _objc_release(puVar4);
  func_0x00010c168700(puVar1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1050c4a30;
  puStack_80 = &UNK_1108669a0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar3;
  puStack_70 = puVar1;
  _objc_retain(uVar6);
  uStack_68 = uVar6;
  _objc_retain(puVar1);
  func_0x00010bfab6c0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4988;
  _objc_opt_class(PTR_PTR_1126b4988);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar4;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1050c4ad0;
  puStack_c8 = &UNK_110866a00;
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar7;
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = uVar8;
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uStack_b8 = uVar7;
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = uVar8;
  _objc_retain(uVar7);
  uStack_a8 = uVar7;
  FUN_1050c3638(1,puVar1,puVar5,uVar3,uVar2,uVar6,&puStack_e0);
  _objc_release(uVar6);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  return;
}



/* Entry: 1050c4a30; end: 1050c4cfb;  */

undefined8 FUN_1050c4a30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf35ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1050c70f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_1050d19a8(uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2667e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210d80(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return 0;
}



/* Entry: 1050c4cfc; end: 1050c4f33;  */

void FUN_1050c4cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_140,auStack_100,0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        puVar3 = PTR_PTR_1126b4838;
        func_0x00010bf35d20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c117240(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b62e0(puVar3,param_2,uVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010c067ec0(uVar7);
        func_0x00010c2aa500(puVar3,param_2,uVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf35ce0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_168 = puVar1;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_1050c4f34;
        puStack_150 = &UNK_1108450c8;
        _objc_retain(puVar3);
        puStack_190 = puVar1;
        uStack_188 = 0xc2000000;
        uStack_180 = 0x1050c4f58;
        puStack_178 = &UNK_1108450c8;
        puStack_170 = puVar3;
        puStack_148 = puVar3;
        _objc_retain(puVar3);
        func_0x00010c0bdee0(uVar4,param_2,&puStack_168,&puStack_190);
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        puVar5 = puVar3;
        func_0x00010bf21f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a2d00(uVar4,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puStack_170);
        _objc_release(puStack_148);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c2b08a0(*(undefined8 *)(lVar6 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1050c4f34; end: 1050c4f7b;  */

void FUN_1050c4f34(long param_1,undefined8 param_2)

{
  func_0x00010c2b08a0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1050c4f7c; end: 1050c504f;  */

void FUN_1050c4f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c11de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(param_2);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 1050c5050; end: 1050c513b;  */

void FUN_1050c5050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfe1bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf35ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1050c70f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe1bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf35b80();
  FUN_1050cd0e8(param_2,uVar2,uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe1bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf35b80();
  FUN_1050d18bc(param_2,uVar2,uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050c513c; end: 1050c531f;  */

void FUN_1050c513c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c11de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(param_2);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 1050c5320; end: 1050c541f;  */

void FUN_1050c5320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_1);
  func_0x00010c0f7fc0(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_1);
  return;
}



/* Entry: 1050c5420; end: 1050c558f;  */

void FUN_1050c5420(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1050c5590;
  uStack_50 = 0x1050c55a0;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf35ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bdee0();
  _objc_release(uVar1);
  if (puStack_68[5] == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8500(uVar1);
    _objc_release(uVar2);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1050c5590; end: 1050c55a7;  */

void FUN_1050c5590(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050c55a8; end: 1050c5617;  */

void FUN_1050c55a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050c5618; end: 1050c5677;  */

void FUN_1050c5618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_2);
  FUN_1050ccd8c(param_2,uVar1);
  FUN_1050d1c2c(param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c5678; end: 1050c5683; +[SCCharmsDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1050c5678(void)

{
  return &PTR____CFConstantStringClassReference_110dc52d8;
}



/* Entry: 1050c5684; end: 1050c568b; -[SCCharmsDataCoordinator addDataUpdateListener:] */

void FUN_1050c5684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050c568c; end: 1050c5693; -[SCCharmsDataCoordinator removeDataUpdateListener:] */

void FUN_1050c568c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050c5694; end: 1050c5a5f; -[SCCharmsDataCoordinator initWithSessionRequestManager:snapTokenProvider:docObjectContext:userID:username:friendmojiRegistry:snapchattersDataFetcher:snapchattersDataTracker:groupsDataTracker:usernameToSnapchatterFetcher:chatMessageActionHandler:conversationIdResolver:charmsBlizzardLogger:] */

undefined8 *
FUN_1050c5694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e6048;
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
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b4990;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9980(puVar1[8]);
    func_0x00010bef9980(puVar1[9]);
  }
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



/* Entry: 1050c5a60; end: 1050c5b73; -[SCCharmsDataCoordinator fetchCharmsForOwner:shouldDisplayStreakCounter:completion:] */

void FUN_1050c5a60(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1050c5b74; end: 1050c5bd7;  */

void FUN_1050c5b74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  FUN_1050cd628(uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75be0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050c5bd8; end: 1050c5d17; -[SCCharmsDataCoordinator _populateClientLocalCharms:ownerIdentifier:shouldDisplayStreakCounter:completion:] */

void FUN_1050c5bd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050c5d18; end: 1050c5eb7;  */

void FUN_1050c5d18(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar6 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar6);
    param_4 = auStack_e8;
    lVar4 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar5 = uVar8;
        func_0x00010c247520();
        if (uVar5 < 4) {
          func_0x00010befa120(puVar3);
        }
        else if (uVar5 == 4) {
          FUN_1050bf97c(uVar8,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30),
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),
                        *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x48));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar8);
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      param_4 = auStack_e8;
      lVar4 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    param_3 = 0;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar3);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)(lVar2 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050c5eb8; end: 1050c608f; -[SCCharmsDataCoordinator fetchHiddenCharmsForOwner:completion:] */

void FUN_1050c5eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1050c5f70;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050c6090; end: 1050c6093; -[SCCharmsDataCoordinator didStartSnapchattersUpdateDataRequest:] */

void FUN_1050c6090(void)

{
  return;
}



/* Entry: 1050c6094; end: 1050c6123; -[SCCharmsDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1050c6094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050c6124;
  puStack_20 = &UNK_110866ad0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1050c6204;
  puStack_48 = &UNK_110866b00;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc6c0(param_3,param_2,0,0,&puStack_38,0,&puStack_60,0,0,0,0);
  return;
}



/* Entry: 1050c6124; end: 1050c62e3;  */

void FUN_1050c6124(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b4998;
    _objc_alloc(PTR_PTR_1126b4998);
    puVar4 = PTR_PTR_1126b3ce8;
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9260(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd820(puVar3);
    func_0x00010bfd0a00(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c62e4; end: 1050c6383; -[SCCharmsDataCoordinator didUpdateGroupsDataRequest:groupId:] */

void FUN_1050c62e4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if ((param_3 == 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b4998;
    _objc_alloc(PTR_PTR_1126b4998);
    puVar3 = PTR_PTR_1126b3ce8;
    func_0x00010bf36700(PTR_PTR_1126b3ce8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd820(puVar2,param_2,puVar3);
    func_0x00010bfd0a00(param_1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050c6384; end: 1050c65a7; -[SCCharmsDataCoordinator handleDataRequest:] */

void FUN_1050c6384(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be82a60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3cf0;
  _objc_opt_class(PTR_PTR_1126b3cf0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126b4840;
    _objc_opt_class(PTR_PTR_1126b4840);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR_PTR_1126b4950;
      _objc_opt_class(PTR_PTR_1126b4950);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      if ((uVar3 & 1) == 0) {
        puVar2 = PTR_PTR_1126b4850;
        _objc_opt_class(PTR_PTR_1126b4850);
        uVar3 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar2);
        if ((uVar3 & 1) == 0) {
          puVar2 = PTR_PTR_1126b4800;
          _objc_opt_class(PTR_PTR_1126b4800);
          uVar3 = param_3;
          _objc_opt_isKindOfClass(param_3,puVar2);
          if ((uVar3 & 1) == 0) {
            puVar2 = PTR_PTR_1126b4820;
            _objc_opt_class(PTR_PTR_1126b4820);
            uVar3 = param_3;
            _objc_opt_isKindOfClass(param_3,puVar2);
            if ((uVar3 & 1) == 0) {
              puVar2 = PTR_PTR_1126b4878;
              _objc_opt_class(PTR_PTR_1126b4878);
              uVar3 = param_3;
              _objc_opt_isKindOfClass(param_3,puVar2);
              if ((uVar3 & 1) == 0) {
                puVar2 = PTR_PTR_1126b4998;
                _objc_opt_class(PTR_PTR_1126b4998);
                uVar3 = param_3;
                _objc_opt_isKindOfClass(param_3,puVar2);
                if ((uVar3 & 1) != 0) {
                  FUN_1050c5320(param_3,*(undefined8 *)(param_1 + 0x18),
                                *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                                lVar1);
                }
              }
              else {
                func_0x0001050c138c(param_3,*(undefined8 *)(param_1 + 0x18),
                                    *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x28),
                                    *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),
                                    *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                                    lVar1);
              }
            }
            else {
              FUN_1050c2198(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x70),
                            *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 8),
                            *(undefined8 *)(param_1 + 0x10),lVar1);
            }
          }
          else {
            FUN_1050c513c(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x78),
                          lVar1);
          }
        }
        else {
          FUN_1050c3d2c(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x70),
                        *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),param_1,lVar1);
        }
      }
      else {
        FUN_1050c4f7c(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x78),lVar1)
        ;
      }
    }
    else {
      FUN_1050c2a30(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x70),
                    *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x10),param_1,lVar1);
    }
  }
  else {
    FUN_1050c4630(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x70),
                  *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 8),
                  *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68),lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050c65a8; end: 1050c67a7; -[SCCharmsDataCoordinator _processingCompletionForDataRequest:] */

void FUN_1050c65a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1050c6664;
  puStack_58 = &UNK_11085dbf8;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1050c67a8; end: 1050c687f; -[SCCharmsDataCoordinator .cxx_destruct] */

void FUN_1050c67a8(long param_1)

{
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



/* Entry: 1050c6880; end: 1050c688b; +[SCCharmsViewingDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1050c6880(void)

{
  return &PTR____CFConstantStringClassReference_110dc52f8;
}



/* Entry: 1050c688c; end: 1050c6893; -[SCCharmsViewingDataCoordinator addDataUpdateListener:] */

void FUN_1050c688c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050c6894; end: 1050c689b; -[SCCharmsViewingDataCoordinator removeDataUpdateListener:] */

void FUN_1050c6894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050c689c; end: 1050c69af; -[SCCharmsViewingDataCoordinator initWithCharmsDataCoordinator:] */

undefined1 * FUN_1050c689c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e6050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b4990;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050c69b0; end: 1050c6a7b; -[SCCharmsViewingDataCoordinator viewedCharmIdentifiers] */

void FUN_1050c69b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1050c6a7c;
  uStack_30 = 0x1050c6a8c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1050c6a94;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050c6a7c; end: 1050c6a93;  */

void FUN_1050c6a7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050c6a94; end: 1050c6acf;  */

void FUN_1050c6a94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050c6ad0; end: 1050c6bbb; -[SCCharmsViewingDataCoordinator handleDataRequest:] */

void FUN_1050c6ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1050c6bbc;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1050c6bbc; end: 1050c6bef;  */

void FUN_1050c6bbc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050c6bf0; end: 1050c6cbb; -[SCCharmsViewingDataCoordinator _handleDataRequest:] */

void FUN_1050c6bf0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4800;
  _objc_opt_class(PTR_PTR_1126b4800);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b4820;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    if (uVar3 != 0) {
      func_0x00010be29e60(param_1);
    }
    _objc_release(uVar3);
  }
  else {
    func_0x00010be33220(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050c6cbc; end: 1050c6def; -[SCCharmsViewingDataCoordinator _handleViewCharmsRequest:] */

void FUN_1050c6cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1050c6d60;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1,param_2,&puStack_60);
  func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bdcbbe0(param_1,param_2,param_3);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050c6df0; end: 1050c6fa3; -[SCCharmsViewingDataCoordinator _handleFlushCharmViewingsRequest:] */

void FUN_1050c6df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1050c6a7c;
  uStack_60 = 0x1050c6a8c;
  uStack_58 = 0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1050c6fa4;
  puStack_98 = &UNK_11084b9d0;
  lStack_90 = param_1;
  puStack_78 = puStack_88;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x18));
  lVar1 = puStack_78[5];
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x3032000000;
    pcStack_c8 = FUN_1050c6a7c;
    uStack_c0 = 0x1050c6a8c;
    uStack_b8 = 0;
    func_0x00010c0bde60(param_3);
    if (puStack_d8[5] != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      puVar2 = PTR_PTR_1126b4820;
      func_0x00010bfb3320(PTR_PTR_1126b4820);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0a00(uVar3);
      _objc_release(puVar2);
      func_0x00010bdcbbe0(param_1);
    }
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1050c6fa4; end: 1050c7037;  */

void FUN_1050c6fa4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf51e00();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined **)(*(long *)(param_1 + 0x20) + 8) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050c7038; end: 1050c703b;  */

void FUN_1050c7038(void)

{
  return;
}



/* Entry: 1050c703c; end: 1050c70a3; -[SCCharmsViewingDataCoordinator _announceEventDataWithRequest:] */

void FUN_1050c703c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63720(uVar1,param_2,param_1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050c70a4; end: 1050c70eb; -[SCCharmsViewingDataCoordinator .cxx_destruct] */

void FUN_1050c70a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050c70ec; end: 1050c70f7;  */

undefined ** FUN_1050c70ec(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1050c70f8; end: 1050c71db;  */

void FUN_1050c70f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1050c71dc;
  uStack_30 = 0x1050c71ec;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1050c71f4;
  puStack_60 = &UNK_110864a68;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1050c722c;
  puStack_88 = &UNK_110864a68;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0bdee0(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050c71dc; end: 1050c71f3;  */

void FUN_1050c71dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050c71f4; end: 1050c7263;  */

void FUN_1050c71f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050c7264; end: 1050c7373;  */

void FUN_1050c7264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b49a0;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1050c7374;
  puStack_50 = &UNK_110866ba0;
  _objc_retain();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1050c73c8;
  puStack_78 = &UNK_110866ba0;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  func_0x00010c0bdee0(param_1,param_2,&puStack_68,&puStack_90);
  puVar1 = puStack_70;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_48);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050c7374; end: 1050c73c7;  */

void FUN_1050c7374(long param_1,undefined8 param_2)

{
  func_0x000109189494(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a03c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c73c8; end: 1050c741b;  */

void FUN_1050c73c8(long param_1,undefined8 param_2)

{
  func_0x000109189494(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c741c; end: 1050c7793;  */

void FUN_1050c741c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc5318;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc5318,
                      &PTR____CFConstantStringClassReference_110dc5338,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1050c7794; end: 1050c7883; -[SCProfileCharmsMenuCharmInfo initWithCharmOwner:charmIdentifier:removable:hideCharmPrompt:charmsLogParameters:] */

undefined1 *
FUN_1050c7794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e6058;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050c7884; end: 1050c78a7; -[SCProfileCharmsMenuCharmInfo copyWithZone:] */

undefined8 FUN_1050c7884(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c78a8; end: 1050c7933; -[SCProfileCharmsMenuCharmInfo hash] */

undefined8 * FUN_1050c78a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + 0xc);
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050c79ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050c79f8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1050c79f8;
          }
          goto LAB_1050c79ec;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050c79f8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1050c7934; end: 1050c7a13; -[SCProfileCharmsMenuCharmInfo isEqual:] */

long FUN_1050c7934(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c79ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c79f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1050c79f8;
          }
          goto LAB_1050c79ec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050c79f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c7a14; end: 1050c7a1b; -[SCProfileCharmsMenuCharmInfo charmOwner] */

undefined8 FUN_1050c7a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c7a1c; end: 1050c7a23; -[SCProfileCharmsMenuCharmInfo charmIdentifier] */

undefined4 FUN_1050c7a1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1050c7a24; end: 1050c7a2b; -[SCProfileCharmsMenuCharmInfo removable] */

undefined1 FUN_1050c7a24(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1050c7a2c; end: 1050c7a33; -[SCProfileCharmsMenuCharmInfo hideCharmPrompt] */

undefined8 FUN_1050c7a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050c7a34; end: 1050c7a3b; -[SCProfileCharmsMenuCharmInfo charmsLogParameters] */

undefined8 FUN_1050c7a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050c7a3c; end: 1050c7a77; -[SCProfileCharmsMenuCharmInfo .cxx_destruct] */

void FUN_1050c7a3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c7a78; end: 1050c7b23; -[SCProfileHiddenCharmsMenuInfo initWithCharmsOwner:restoreCharmPromptTemplate:] */

undefined1 *
FUN_1050c7a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6060;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050c7b24; end: 1050c7b47; -[SCProfileHiddenCharmsMenuInfo copyWithZone:] */

undefined8 FUN_1050c7b24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c7b48; end: 1050c7bbb; -[SCProfileHiddenCharmsMenuInfo hash] */

undefined8 * FUN_1050c7b48(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050c7c3c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050c7c48;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1050c7c48;
        }
        goto LAB_1050c7c3c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050c7c48:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050c7bbc; end: 1050c7c63; -[SCProfileHiddenCharmsMenuInfo isEqual:] */

long FUN_1050c7bbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c7c3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c7c48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1050c7c48;
        }
        goto LAB_1050c7c3c;
      }
    }
    lVar3 = 0;
  }
LAB_1050c7c48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c7c64; end: 1050c7c6b; -[SCProfileHiddenCharmsMenuInfo charmsOwner] */

undefined8 FUN_1050c7c64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050c7c6c; end: 1050c7c73; -[SCProfileHiddenCharmsMenuInfo restoreCharmPromptTemplate] */

undefined8 FUN_1050c7c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c7c74; end: 1050c7ca3; -[SCProfileHiddenCharmsMenuInfo .cxx_destruct] */

void FUN_1050c7c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050c7ca4; end: 1050c7d8b; -[SCProfileHiddenCharmsRestoreInfo initWithCharmsOwner:charmIdentifier:restoreCharmPrompt:hiddenCharmsMenuInfo:] */

undefined1 *
FUN_1050c7ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6068;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050c7d8c; end: 1050c7daf; -[SCProfileHiddenCharmsRestoreInfo copyWithZone:] */

undefined8 FUN_1050c7d8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c7db0; end: 1050c7e33; -[SCProfileHiddenCharmsRestoreInfo hash] */

undefined8 * FUN_1050c7db0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_40 = (long)*(int *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050c7edc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050c7ee8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)(puVar3 + 1) == *(int *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1050c7ee8;
          }
          goto LAB_1050c7edc;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050c7ee8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050c7e34; end: 1050c7f03; -[SCProfileHiddenCharmsRestoreInfo isEqual:] */

long FUN_1050c7e34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c7edc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c7ee8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1050c7ee8;
          }
          goto LAB_1050c7edc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050c7ee8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c7f04; end: 1050c7f0b; -[SCProfileHiddenCharmsRestoreInfo charmsOwner] */

undefined8 FUN_1050c7f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c7f0c; end: 1050c7f13; -[SCProfileHiddenCharmsRestoreInfo charmIdentifier] */

undefined4 FUN_1050c7f0c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1050c7f14; end: 1050c7f1b; -[SCProfileHiddenCharmsRestoreInfo restoreCharmPrompt] */

undefined8 FUN_1050c7f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050c7f1c; end: 1050c7f23; -[SCProfileHiddenCharmsRestoreInfo hiddenCharmsMenuInfo] */

undefined8 FUN_1050c7f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050c7f24; end: 1050c7f5f; -[SCProfileHiddenCharmsRestoreInfo .cxx_destruct] */

void FUN_1050c7f24(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c7f60; end: 1050c802f; -[SCProfileCharmsCardTitleViewModel initWithTitle:textColor:largeTitleFontSize:largeTitleLineHeight:largeTitleNumberOfLines:] */

undefined1 *
FUN_1050c7f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e6070;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1050c8030; end: 1050c8053; -[SCProfileCharmsCardTitleViewModel copyWithZone:] */

undefined8 FUN_1050c8030(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c8054; end: 1050c812b; -[SCProfileCharmsCardTitleViewModel hash] */

undefined8 * FUN_1050c8054(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_48 = uVar3;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1050c8248:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050c8254;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
        dVar9 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (bVar1) {
          dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
          dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
            bVar1 = dVar10 < dVar9;
          }
          if ((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
            puVar8 = *(undefined1 **)((long)puVar4 + 0x10);
            if (puVar8 != *(undefined1 **)(param_3 + 0x10)) {
              func_0x00010c071c60();
              goto LAB_1050c8254;
            }
            goto LAB_1050c8248;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1050c8254:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1050c812c; end: 1050c826f; -[SCProfileCharmsCardTitleViewModel isEqual:] */

long FUN_1050c812c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c8248:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c8254;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
          dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if ((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x10);
            if (lVar4 != *(long *)(param_3 + 0x10)) {
              func_0x00010c071c60();
              goto LAB_1050c8254;
            }
            goto LAB_1050c8248;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1050c8254:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1050c8270; end: 1050c8277; -[SCProfileCharmsCardTitleViewModel title] */

undefined8 FUN_1050c8270(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050c8278; end: 1050c827f; -[SCProfileCharmsCardTitleViewModel textColor] */

undefined8 FUN_1050c8278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c8280; end: 1050c8287; -[SCProfileCharmsCardTitleViewModel largeTitleFontSize] */

undefined8 FUN_1050c8280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050c8288; end: 1050c828f; -[SCProfileCharmsCardTitleViewModel largeTitleLineHeight] */

undefined8 FUN_1050c8288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050c8290; end: 1050c8297; -[SCProfileCharmsCardTitleViewModel largeTitleNumberOfLines] */

undefined8 FUN_1050c8290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1050c8298; end: 1050c82c7; -[SCProfileCharmsCardTitleViewModel .cxx_destruct] */

void FUN_1050c8298(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050c82c8; end: 1050c83af; -[SCProfileCharmsCardViewCellContentViewModel initWithLoadingImage:staticImage:isRemoteBitmojiSelfie:bitmojiImage:] */

undefined1 *
FUN_1050c82c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6078;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050c83b0; end: 1050c83d3; -[SCProfileCharmsCardViewCellContentViewModel copyWithZone:] */

undefined8 FUN_1050c83b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c83d4; end: 1050c8457; -[SCProfileCharmsCardViewCellContentViewModel hash] */

undefined8 * FUN_1050c83d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050c8500:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050c850c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1050c850c;
          }
          goto LAB_1050c8500;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050c850c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050c8458; end: 1050c8527; -[SCProfileCharmsCardViewCellContentViewModel isEqual:] */

long FUN_1050c8458(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c8500:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c850c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1050c850c;
          }
          goto LAB_1050c8500;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050c850c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c8528; end: 1050c852f; -[SCProfileCharmsCardViewCellContentViewModel loadingImage] */

undefined8 FUN_1050c8528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c8530; end: 1050c8537; -[SCProfileCharmsCardViewCellContentViewModel staticImage] */

undefined8 FUN_1050c8530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050c8538; end: 1050c853f; -[SCProfileCharmsCardViewCellContentViewModel isRemoteBitmojiSelfie] */

undefined1 FUN_1050c8538(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1050c8540; end: 1050c8547; -[SCProfileCharmsCardViewCellContentViewModel bitmojiImage] */

undefined8 FUN_1050c8540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050c8548; end: 1050c8583; -[SCProfileCharmsCardViewCellContentViewModel .cxx_destruct] */

void FUN_1050c8548(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c8584; end: 1050c86f7; -[SCProfileCharmsCardViewCellViewModel initWithTitleViewModel:contentViewModel:charmDescription:unviewed:supplementaryInfo:charmInfo:charmsLogParameters:] */

undefined1 *
FUN_1050c8584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6080;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


