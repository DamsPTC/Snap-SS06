/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bfc0a4; end: 108bfc1ff;  */

void FUN_108bfc0a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb8c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0fdba0(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fdc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c159fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c156360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be80440(uVar6,lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfc200; end: 108bfc77b; -[SCFriendingUpdateFriendCoordinator _processAddFriendWithAFriend:localSnapchatter:addSource:placement:placementInfo:fideliusFriendMetadata:error:completionQueue:completionHandler:startTime:selectedShortcutId:sectionName:] */

void FUN_108bfc200(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,long param_11,long param_12,undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  undefined1 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  dVar12 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _CACurrentMediaTime();
  dVar12 = (dVar12 - param_1) * 1000.0;
  if (param_10 == 0) {
    func_0x00010c0a0b00(*(undefined8 *)(param_2 + 0x48));
  }
  uVar2 = param_6;
  FUN_10901fb98();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  FUN_10901fab4();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x000109020168();
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar10);
  if ((param_4 == 0) || (param_10 != 0)) {
    uVar11 = *(undefined8 *)(param_2 + 0x50);
    lVar6 = param_10;
    func_0x00010c09e560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    if (lVar6 == 0) {
      lVar7 = param_10;
      func_0x00010bf660a0(param_10);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar8 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0ac0(dVar12,dVar12,uVar11);
    _objc_release(lVar8);
    if (lVar6 == 0) {
      _objc_release(lVar7);
    }
    _objc_release(lVar6);
    func_0x00010c0a0a80(*(undefined8 *)(param_2 + 0x48));
    if ((param_11 == 0) || (param_12 == 0)) goto LAB_108bfc6d8;
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_108bfc8f8;
    puStack_190 = &UNK_11084aaa8;
    _objc_retain(param_12);
    lStack_180 = param_12;
    _objc_retain(param_10);
    lStack_188 = param_10;
    func_0x000107c27d8c(param_11,&puStack_1a8);
    _objc_release(lStack_188);
    lVar6 = lStack_180;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    FUN_10901fb98(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_7;
    FUN_10901fab4(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0bc0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    lVar6 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      _objc_initWeak(auStack_b8,param_2);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_108bfc790;
      puStack_d8 = &UNK_110864a08;
      _objc_retain(param_4);
      lStack_d0 = param_4;
      _objc_retain(uVar10);
      uStack_c8 = uVar10;
      _objc_retain(param_9);
      puStack_178 = puVar1;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_108bfc7f4;
      puStack_160 = &UNK_110ab7fa0;
      uStack_c0 = param_9;
      _objc_copyWeak(auStack_120,auStack_b8);
      _objc_retain(param_12);
      lStack_128 = param_12;
      _objc_retain(param_4);
      lStack_158 = param_4;
      uStack_118 = param_6;
      uStack_110 = param_7;
      _objc_retain(uVar2);
      uStack_150 = uVar2;
      _objc_retain(uVar3);
      uStack_148 = uVar3;
      _objc_retain(param_8);
      uStack_140 = param_8;
      dStack_108 = dVar12;
      dStack_100 = param_1;
      _objc_retain(param_13);
      uStack_138 = param_13;
      _objc_retain(param_14);
      uStack_130 = param_14;
      uStack_f8 = (char)uVar11;
      func_0x00010c0f8500(uVar9);
      _objc_release(uStack_130);
      _objc_release(uStack_138);
      _objc_release(uStack_140);
      _objc_release(uStack_148);
      _objc_release(uStack_150);
      _objc_release(lStack_158);
      _objc_release(lStack_128);
      _objc_destroyWeak(auStack_120);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(lStack_d0);
      _objc_destroyWeak(auStack_b8);
      goto LAB_108bfc6d8;
    }
    func_0x00010c0a0b80(*(undefined8 *)(param_2 + 0x48));
    if ((param_11 == 0) || (param_12 == 0)) goto LAB_108bfc6d8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108bfc77c;
    puStack_98 = &UNK_110849530;
    _objc_retain(param_12);
    lStack_90 = param_12;
    func_0x000107c27d8c(param_11,&puStack_b0);
    lVar6 = lStack_90;
  }
  _objc_release(lVar6);
LAB_108bfc6d8:
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfc77c; end: 108bfc78f;  */

void FUN_108bfc77c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bfc78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108bfc790; end: 108bfc7f3;  */

void FUN_108bfc790(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  FUN_108c10100(param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1090216c8(*(undefined8 *)(param_1 + 0x28));
  FUN_108c1d130(param_2,uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010af53be8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bfc7f4; end: 108bfc8f7;  */

void FUN_108bfc7f4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_2 + 0x50);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,0);
  }
  if (lVar1 != 0) {
    func_0x00010bea1b20(lVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    _CACurrentMediaTime();
    func_0x00010be50020(uVar4,(param_1 - *(double *)(param_2 + 0x78)) * 1000.0,lVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfc8f8; end: 108bfc90b;  */

void FUN_108bfc8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bfc908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bfc90c; end: 108bfc947; -[SCFriendingUpdateFriendCoordinator _processAddFriendWithAFriend:localSnapchatter:addSource:placement:fideliusFriendMetadata:error:completionQueue:completionHandler:startTime:selectedShortcutId:sectionName:] */

void FUN_108bfc90c(void)

{
  func_0x00010be80440();
  return;
}



/* Entry: 108bfc948; end: 108bfcda3; -[SCFriendingUpdateFriendCoordinator _multiAddFriendsWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bfc948(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  uVar2 = param_4;
  func_0x00010bf0a880();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bef87a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf529e0();
  _objc_release(uVar9);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_80;
  _objc_initWeak(puVar4,param_2);
  _dispatch_group_create();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 1;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_108bfcda4;
  uStack_b0 = 0x108bfcdb4;
  uStack_a8 = 0;
  if (uVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar1 = uVar10;
      if (0x31 < uVar10) {
        uVar1 = 0x32;
      }
      uVar5 = uVar2;
      func_0x00010bef87a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar7 = *(undefined8 *)(param_2 + 0x48);
      uVar6 = uVar2;
      func_0x00010c0fdba0(uVar2);
      FUN_10901fab4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0a40(uVar7);
      _objc_release(uVar6);
      _dispatch_group_enter(puVar4);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c0fdba0(uVar2);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c11de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_108bfcdbc;
      puStack_120 = &UNK_110ab7fd0;
      _objc_copyWeak(auStack_e0,auStack_80);
      _objc_retain(uVar9);
      uStack_118 = uVar9;
      _objc_retain(uVar2);
      uStack_110 = uVar2;
      uStack_d8 = param_1;
      _objc_retain(uVar3);
      puStack_f0 = &uStack_a0;
      puStack_e8 = &uStack_d0;
      uStack_108 = uVar3;
      _objc_retain(puVar4);
      puStack_100 = puVar4;
      _objc_retain(param_4);
      uStack_f8 = param_4;
      func_0x00010bef9e80(uVar8);
      _objc_release(uVar7);
      uVar10 = uVar10 - uVar1;
      _objc_release(uStack_f8);
      _objc_release(puStack_100);
      _objc_release(uStack_108);
      _objc_release(uStack_110);
      _objc_release(uStack_118);
      _objc_destroyWeak(auStack_e0);
      uVar6 = uVar9;
    } while (uVar10 != 0);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_108bfcf74;
  puStack_160 = &UNK_110ab8000;
  _objc_copyWeak(auStack_148,auStack_80);
  puStack_158 = &uStack_a0;
  puStack_150 = &uStack_d0;
  uStack_140 = param_1;
  func_0x000107c27d98(puVar4,uVar7,&puStack_178);
  _objc_release(uVar7);
  if ((param_5 != 0) && (param_6 != 0)) {
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_108bfcfbc;
    puStack_190 = &UNK_1108647e8;
    _objc_retain(param_6);
    puStack_180 = &uStack_a0;
    lStack_188 = param_6;
    func_0x000107c27d98(puVar4,param_5,&puStack_1a8);
    _objc_release(lStack_188);
  }
  _objc_destroyWeak(auStack_148);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfcda4; end: 108bfcdbb;  */

void FUN_108bfcda4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108bfcdbc; end: 108bfceff;  */

void FUN_108bfcdbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fdba0(uVar3);
  FUN_10901fab4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c160(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010be81800(uVar4,lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108bfcf00; end: 108bfcf73;  */

void FUN_108bfcf00(long param_1,byte param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(byte *)(lVar2 + 0x18) = param_2 & *(byte *)(lVar2 + 0x18);
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bfcf74; end: 108bfcfbb;  */

void FUN_108bfcf74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50000(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfcfbc; end: 108bfcfd7;  */

void FUN_108bfcfbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bfcfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),0);
  return;
}



/* Entry: 108bfcfd8; end: 108bfd4cf; -[SCFriendingUpdateFriendCoordinator _processMultiAddWithFriends:addFriendDataRequests:placementString:fideliusFriendMetadatas:isRegistration:startTime:error:completionQueue:completionHandler:] */

void FUN_108bfcfd8(double param_1,undefined **param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined **param_9,
                  long param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [8];
  double dStack_1b0;
  double dStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  
  ppuVar8 = &puStack_160;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar2 = param_2[8];
  func_0x00010c269d40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa760();
  _objc_release(puVar2);
  _CACurrentMediaTime();
  dVar16 = (dVar16 - param_1) * 1000.0;
  if (param_9 == (undefined **)0x0) {
    func_0x00010c0a09c0(param_2[9]);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_158 = 0;
  puStack_160 = (undefined *)0x0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_150;
    ppuVar8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      lVar10 = 0;
      do {
        if (*plStack_150 != lVar12) {
          _objc_enumerationMutation(param_5);
        }
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar11 = *(undefined8 *)(lStack_158 + lVar10 * 8);
        func_0x00010befb8c0(uVar11);
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar4);
        _objc_release(uVar11);
        _objc_release(puVar15);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_5;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_5);
  puVar15 = param_2[7];
  _objc_retain(puVar15);
  ppuVar7 = param_2;
  _objc_initWeak(&puStack_168);
  if ((param_9 == (undefined **)0x0) &&
     (lVar3 = param_4, func_0x00010bf529e0(), puVar1 = PTR___NSConcreteStackBlock_11034bd00,
     lVar3 != 0)) {
    puVar14 = param_2[4];
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_108bfd4d0;
    puStack_188 = &UNK_110864a08;
    _objc_retain(param_4);
    lStack_180 = param_4;
    _objc_retain(puVar15);
    puStack_178 = puVar15;
    _objc_retain(param_7);
    puStack_1f8 = puVar1;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_108bfd694;
    puStack_1e0 = &UNK_110ab8030;
    uStack_170 = param_7;
    _objc_retain(param_11);
    lStack_1c0 = param_11;
    ppuVar8 = &puStack_1f8;
    ppuVar7 = &puStack_168;
    _objc_copyWeak(auStack_1b8);
    _objc_retain(param_4);
    lStack_1d8 = param_4;
    _objc_retain(puVar2);
    puStack_1d0 = puVar2;
    _objc_retain(param_6);
    uStack_1c8 = param_6;
    dStack_1b0 = dVar16;
    dStack_1a8 = param_1;
    func_0x00010c0f8500(puVar14);
    _objc_release(uStack_1c8);
    _objc_release(puStack_1d0);
    _objc_release(lStack_1d8);
    _objc_destroyWeak(auStack_1b8);
    _objc_release(lStack_1c0);
    _objc_release(uStack_170);
    _objc_release(puStack_178);
    lVar3 = lStack_180;
  }
  else {
    ppuVar5 = param_9;
    func_0x00010c09e560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar6 = param_9;
      func_0x00010bf660a0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be4ffc0(dVar16,dVar16,param_2);
    if (ppuVar5 == (undefined **)0x0) {
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar5);
    if ((param_10 == 0) || (param_11 == 0)) goto LAB_108bfd410;
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_108bfd750;
    puStack_210 = &UNK_11084aaa8;
    _objc_retain(param_11);
    lStack_200 = param_11;
    _objc_retain(param_9);
    ppuVar7 = &puStack_228;
    ppuStack_208 = param_9;
    func_0x000107c27d8c(param_10);
    _objc_release(ppuStack_208);
    lVar3 = lStack_200;
    ppuVar8 = param_9;
  }
  _objc_release(lVar3);
LAB_108bfd410:
  _objc_destroyWeak(&puStack_168);
  _objc_release(puVar15);
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar8 + 8);
  _objc_destroyWeak(&puStack_168);
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar7;
  _objc_retain(ppuVar7);
  lVar9 = *(long *)(param_4 + 0x20);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar9);
      }
      ppuVar8 = *(undefined ***)(lVar13 * 8);
      FUN_108c10100(ppuVar7,ppuVar8);
      FUN_1090216c8(*(undefined8 *)(param_4 + 0x28));
      FUN_108c1d130(ppuVar7);
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  dVar16 = 0.0;
  lVar9 = *(long *)(param_4 + 0x30);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar9);
      }
      ppuVar8 = *(undefined ***)(lVar13 * 8);
      func_0x00010af53be8(ppuVar7);
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = ppuVar7[7];
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar2,ppuVar8,0);
  }
  ppuVar8 = ppuVar7 + 8;
  _objc_loadWeakRetained(ppuVar8);
  puVar2 = ppuVar7[9];
  _CACurrentMediaTime();
  func_0x00010be4ffe0(puVar2,(dVar16 - (double)ppuVar7[10]) * 1000.0,ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 108bfd4d0; end: 108bfd693;  */

void FUN_108bfd4d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar5 = *(long *)(lVar6 * 8);
      FUN_108c10100(param_2,lVar5);
      FUN_1090216c8(*(undefined8 *)(param_1 + 0x28));
      FUN_108c1d130(param_2);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  dVar7 = 0.0;
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar5 = *(long *)(lVar6 * 8);
      func_0x00010af53be8(param_2);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(param_2 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,lVar5,0);
  }
  lVar2 = param_2 + 0x40;
  _objc_loadWeakRetained(lVar2);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  _CACurrentMediaTime();
  func_0x00010be4ffe0(uVar8,(dVar7 - *(double *)(param_2 + 0x50)) * 1000.0,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108bfd694; end: 108bfd74f;  */

void FUN_108bfd694(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,0);
  }
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  _CACurrentMediaTime();
  func_0x00010be4ffe0(uVar2,(param_1 - *(double *)(param_2 + 0x50)) * 1000.0,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfd750; end: 108bfd763;  */

void FUN_108bfd750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bfd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bfd764; end: 108bfd9a7; -[SCFriendingUpdateFriendCoordinator _deleteFriendWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bfd764(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  func_0x00010c0a4c80(*(undefined8 *)(param_2 + 0x48));
  uVar1 = param_4;
  func_0x00010bf0a620();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = uVar1;
  func_0x00010beec000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c9e0();
  uVar3 = uVar1;
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf454e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0f1c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(uVar1);
  uStack_80 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf6be40(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfd9a8; end: 108bfda5f;  */

void FUN_108bfd9a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c9e0(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fdc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be80d00(*(undefined8 *)(param_1 + 0x48),lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfda60; end: 108bfdd97; -[SCFriendingUpdateFriendCoordinator _processDeleteWithAFriend:deleteSource:placementInfo:startTime:error:completionQueue:completionHandler:] */

void FUN_108bfda60(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  double dStack_d0;
  double dStack_c8;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  dVar7 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _CACurrentMediaTime();
  dVar7 = (dVar7 - param_1) * 1000.0;
  uVar2 = param_5;
  func_0x00010901ff84();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090201b0();
  if (param_7 == 0) {
    func_0x00010c0a4ce0(*(undefined8 *)(param_2 + 0x48));
    _objc_initWeak(auStack_90,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108bfdd98;
    puStack_a0 = &UNK_11085adb8;
    _objc_retain(param_4);
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_108bfde38;
    puStack_100 = &UNK_110ab8090;
    uStack_98 = param_4;
    _objc_copyWeak(auStack_d8,auStack_90);
    _objc_retain(param_9);
    lStack_e0 = param_9;
    _objc_retain(uVar2);
    uStack_f8 = uVar2;
    _objc_retain(param_6);
    uStack_f0 = param_6;
    _objc_retain(param_4);
    uStack_c0 = (undefined1)param_5;
    uStack_e8 = param_4;
    dStack_d0 = dVar7;
    dStack_c8 = param_1;
    func_0x00010c0f8500(uVar6);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(lStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    lVar3 = param_7;
    func_0x00010c09e560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if (lVar3 == 0) {
      lVar4 = param_7;
      func_0x00010bf660a0(param_7);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4cc0(dVar7,dVar7,uVar6);
    _objc_release(uVar5);
    if (lVar3 == 0) {
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    func_0x00010c0a4ca0(*(undefined8 *)(param_2 + 0x48));
    if ((param_8 != 0) && (param_9 != 0)) {
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_108bfdf18;
      puStack_130 = &UNK_11084aaa8;
      _objc_retain(param_9);
      lStack_120 = param_9;
      _objc_retain(param_7);
      lStack_128 = param_7;
      func_0x000107c27d8c(param_8,&puStack_148);
      _objc_release(lStack_128);
      _objc_release(lStack_120);
    }
  }
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfdd98; end: 108bfde37;  */

void FUN_108bfdd98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  FUN_108c10268(param_2,uVar1);
  FUN_108c1fff8(param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af53d00(param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c7add0(param_2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bfde38; end: 108bfdf17;  */

void FUN_108bfde38(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_2 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,0);
  }
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    _CACurrentMediaTime();
    func_0x00010c0a4cc0(uVar5,(param_1 - *(double *)(param_2 + 0x50)) * 1000.0,uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfdf18; end: 108bfdf2b;  */

void FUN_108bfdf18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bfdf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bfdf2c; end: 108bfe11f; -[SCFriendingUpdateFriendCoordinator _ignoreIncomingFriendWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bfdf2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  func_0x00010c0a7ee0(*(undefined8 *)(param_2 + 0x48));
  uVar1 = param_4;
  func_0x00010bf0a7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = uVar1;
  func_0x00010bfebe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0f1c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(uVar1);
  uStack_80 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bfe6720(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfe120; end: 108bfe1a3;  */

void FUN_108bfe120(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfebe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be81440(*(undefined8 *)(param_1 + 0x48),lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfe1a4; end: 108bfe457; -[SCFriendingUpdateFriendCoordinator _processIgnoreWithIncomingFriend:startTime:error:completionQueue:completionHandler:shouldLogSuggestionFetchRequestId:] */

void FUN_108bfe1a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,undefined1 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  double dStack_d0;
  double dStack_c8;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  dVar6 = (dVar6 - param_1) * 1000.0;
  if (param_5 == 0) {
    func_0x00010c0a7f40(*(undefined8 *)(param_2 + 0x48));
    _objc_initWeak(auStack_90,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108bfe458;
    puStack_a0 = &UNK_11085adb8;
    _objc_retain(param_4);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_108bfe46c;
    puStack_f0 = &UNK_1109fda00;
    uStack_98 = param_4;
    _objc_copyWeak(auStack_d8,auStack_90);
    _objc_retain(param_7);
    lStack_e0 = param_7;
    _objc_retain(param_4);
    uStack_e8 = param_4;
    dStack_d0 = dVar6;
    dStack_c8 = param_1;
    uStack_c0 = param_8;
    func_0x00010c0f8500(uVar5);
    _objc_release(uStack_e8);
    _objc_release(lStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    lVar2 = param_5;
    func_0x00010c09e560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      lVar3 = param_5;
      func_0x00010bf660a0(param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7f20(dVar6,dVar6,uVar5);
    _objc_release(uVar4);
    if (lVar2 == 0) {
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    func_0x00010c0a7f00(*(undefined8 *)(param_2 + 0x48));
    if ((param_6 != 0) && (param_7 != 0)) {
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_108bfe538;
      puStack_120 = &UNK_11084aaa8;
      _objc_retain(param_7);
      lStack_110 = param_7;
      _objc_retain(param_5);
      lStack_118 = param_5;
      func_0x000107c27d8c(param_6,&puStack_138);
      _objc_release(lStack_118);
      _objc_release(lStack_110);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfe458; end: 108bfe46b;  */

void FUN_108bfe458(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_70;
  
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(lVar6);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar7 = *(long *)(puVar1 + 0x58);
    _objc_retain(lVar7);
    if (lVar7 != 0) {
      lVar2 = lVar6;
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        _objc_release(lVar7);
      }
      else {
        lVar3 = lVar6;
        func_0x00010bfebe20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0737e0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar7);
        if ((int)lVar4 != 1) {
          uVar8 = *(undefined8 *)(puVar1 + 0x58);
          _objc_retain(uVar8);
          func_0x00010b6564bc(auStack_88,uVar8);
          _objc_release(uVar8);
          auStack_88[0] = 0;
          uStack_70 = 1;
          puVar5 = auStack_88;
          func_0x00010b65659c(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uStack_80);
          _objc_setProperty_nonatomic_copy(puVar1);
          _objc_release(puVar5);
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(param_2);
  return;
}



/* Entry: 108bfe46c; end: 108bfe537;  */

void FUN_108bfe46c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,0);
  }
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    _CACurrentMediaTime();
    func_0x00010c0a7f20(uVar5,(param_1 - *(double *)(param_2 + 0x40)) * 1000.0,uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfe538; end: 108bfe54b;  */

void FUN_108bfe538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bfe548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bfe54c; end: 108bfe75f; -[SCFriendingUpdateFriendCoordinator _blockSnapchatterWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bfe54c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  func_0x00010c0a1be0(*(undefined8 *)(param_2 + 0x48));
  uVar1 = param_4;
  func_0x00010bf0a560();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = uVar1;
  func_0x00010c244280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1d4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0f1c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf1d320(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfe760; end: 108bfe7df;  */

void FUN_108bfe760(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be80720(*(undefined8 *)(param_1 + 0x48),lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfe7e0; end: 108bfea8b; -[SCFriendingUpdateFriendCoordinator _processBlockWithPersistedSnapchatter:startTime:error:completionQueue:completionHandler:] */

void FUN_108bfe7e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  double dStack_c0;
  double dStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  dVar6 = (dVar6 - param_1) * 1000.0;
  if (param_5 == 0) {
    func_0x00010c0a1c40(*(undefined8 *)(param_2 + 0x48));
    _objc_initWeak(auStack_88,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108bfea8c;
    puStack_98 = &UNK_11085adb8;
    _objc_retain(param_4);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_108bfeadc;
    puStack_e0 = &UNK_110a5afb0;
    uStack_90 = param_4;
    _objc_copyWeak(auStack_c8,auStack_88);
    _objc_retain(param_7);
    lStack_d0 = param_7;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    dStack_c0 = dVar6;
    dStack_b8 = param_1;
    func_0x00010c0f8500(uVar5);
    _objc_release(uStack_d8);
    _objc_release(lStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    lVar2 = param_5;
    func_0x00010c09e560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      lVar3 = param_5;
      func_0x00010bf660a0(param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1c20(dVar6,dVar6,uVar5);
    _objc_release(uVar4);
    if (lVar2 == 0) {
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    func_0x00010c0a1c00(*(undefined8 *)(param_2 + 0x48));
    if ((param_6 != 0) && (param_7 != 0)) {
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_108bfeba8;
      puStack_110 = &UNK_11084aaa8;
      _objc_retain(param_7);
      lStack_100 = param_7;
      _objc_retain(param_5);
      lStack_108 = param_5;
      func_0x000107c27d8c(param_6,&puStack_128);
      _objc_release(lStack_108);
      _objc_release(lStack_100);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfea8c; end: 108bfeadb;  */

void FUN_108bfea8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  FUN_108c10268(param_2,uVar1);
  FUN_108c0fc74(param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bfeadc; end: 108bfeba7;  */

void FUN_108bfeadc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,0);
  }
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    _CACurrentMediaTime();
    func_0x00010c0a1c20(uVar5,(param_1 - *(double *)(param_2 + 0x40)) * 1000.0,uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfeba8; end: 108bfebbb;  */

void FUN_108bfeba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bfebb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bfebbc; end: 108bfed87; -[SCFriendingUpdateFriendCoordinator _unblockSnapchatterWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bfebbc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  func_0x00010c0b2160(*(undefined8 *)(param_2 + 0x48));
  uVar1 = param_4;
  func_0x00010bf0aa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf1d720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(uVar1);
  uStack_70 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c27f4a0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bfed88; end: 108bfee07;  */

void FUN_108bfed88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1d720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82760(*(undefined8 *)(param_1 + 0x48),lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bfee08; end: 108bff0b3; -[SCFriendingUpdateFriendCoordinator _processUnblockWithPersistedSnapchatter:startTime:error:completionQueue:completionHandler:] */

void FUN_108bfee08(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  double dStack_c0;
  double dStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  dVar6 = (dVar6 - param_1) * 1000.0;
  if (param_5 == 0) {
    func_0x00010c0b21c0(*(undefined8 *)(param_2 + 0x48));
    _objc_initWeak(auStack_88,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108bff0b4;
    puStack_98 = &UNK_11085adb8;
    _objc_retain(param_4);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_108bff0c4;
    puStack_e0 = &UNK_110a5afb0;
    uStack_90 = param_4;
    _objc_copyWeak(auStack_c8,auStack_88);
    _objc_retain(param_7);
    lStack_d0 = param_7;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    dStack_c0 = dVar6;
    dStack_b8 = param_1;
    func_0x00010c0f8500(uVar5);
    _objc_release(uStack_d8);
    _objc_release(lStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    lVar2 = param_5;
    func_0x00010c09e560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      lVar3 = param_5;
      func_0x00010bf660a0(param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b21a0(dVar6,dVar6,uVar5);
    _objc_release(uVar4);
    if (lVar2 == 0) {
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    func_0x00010c0b2180(*(undefined8 *)(param_2 + 0x48));
    if ((param_6 != 0) && (param_7 != 0)) {
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_108bff190;
      puStack_110 = &UNK_11084aaa8;
      _objc_retain(param_7);
      lStack_100 = param_7;
      _objc_retain(param_5);
      lStack_108 = param_5;
      func_0x000107c27d8c(param_6,&puStack_128);
      _objc_release(lStack_108);
      _objc_release(lStack_100);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bff0b4; end: 108bff0c3;  */

void FUN_108bff0b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 != (undefined *)0x0) && (uVar2 = uVar3, func_0x00010c06d560(), (int)uVar2 != 0)) {
    puVar1[0x15] = 0;
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bff0c4; end: 108bff18f;  */

void FUN_108bff0c4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,0);
  }
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    _CACurrentMediaTime();
    func_0x00010c0b21a0(uVar5,(param_1 - *(double *)(param_2 + 0x40)) * 1000.0,uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bff190; end: 108bff1a3;  */

void FUN_108bff190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bff1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bff1a4; end: 108bff383; -[SCFriendingUpdateFriendCoordinator _setDisplayNameWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bff1a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0a2be0(*(undefined8 *)(param_1 + 0x48));
  uVar1 = param_3;
  func_0x00010bf0a940();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010c244280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c190100(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bff384; end: 108bff427;  */

void FUN_108bff384(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf85d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82300(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bff428; end: 108bff5e3; -[SCFriendingUpdateFriendCoordinator _processSetDisplayNameWithSnapchatter:displayName:error:completionQueue:completionHandler:] */

void FUN_108bff428(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_5 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108bff5e4;
    puStack_78 = &UNK_110864a38;
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(param_4);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x108bff5f4;
    puStack_a0 = &UNK_110842508;
    uStack_68 = param_4;
    _objc_retain(param_7);
    lStack_98 = param_7;
    func_0x00010c0f8500(uVar3);
    _objc_release(lStack_98);
    _objc_release(uStack_68);
    lVar2 = lStack_70;
  }
  else {
    func_0x00010c0a2c00(*(undefined8 *)(param_1 + 0x48));
    if ((param_6 == 0) || (param_7 == 0)) goto LAB_108bff59c;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x108bff60c;
    puStack_d0 = &UNK_11084aaa8;
    _objc_retain(param_7);
    lStack_c0 = param_7;
    _objc_retain(param_5);
    lStack_c8 = param_5;
    func_0x000107c27d8c(param_6,&puStack_e8);
    _objc_release(lStack_c8);
    lVar2 = lStack_c0;
  }
  _objc_release(lVar2);
LAB_108bff59c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bff5e4; end: 108bff61f;  */

void FUN_108bff5e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  puVar3 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    lVar4 = lVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != lVar2) {
      _objc_setProperty_nonatomic_copy(puVar3);
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bff620; end: 108bff7f7; -[SCFriendingUpdateFriendCoordinator _setPostSendEmojiWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bff620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf0a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010c244280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c105040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1df520(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bff7f8; end: 108bff89b;  */

void FUN_108bff7f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c105040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82320(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bff89c; end: 108bffa57; -[SCFriendingUpdateFriendCoordinator _processSetPostSendEmojiWithSnapchatter:postViewEmoji:error:completionQueue:completionHandler:] */

void FUN_108bff89c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_5 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108bffa58;
    puStack_78 = &UNK_110864a38;
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(param_4);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x108bffa68;
    puStack_a0 = &UNK_110842508;
    uStack_68 = param_4;
    _objc_retain(param_7);
    lStack_98 = param_7;
    func_0x00010c0f8500(uVar3);
    _objc_release(lStack_98);
    _objc_release(uStack_68);
    lVar2 = lStack_70;
  }
  else {
    func_0x00010c0a2c00(*(undefined8 *)(param_1 + 0x48));
    if ((param_6 == 0) || (param_7 == 0)) goto LAB_108bffa10;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x108bffa80;
    puStack_d0 = &UNK_11084aaa8;
    _objc_retain(param_7);
    lStack_c0 = param_7;
    _objc_retain(param_5);
    lStack_c8 = param_5;
    func_0x000107c27d8c(param_6,&puStack_e8);
    _objc_release(lStack_c8);
    lVar2 = lStack_c0;
  }
  _objc_release(lVar2);
LAB_108bffa10:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bffa58; end: 108bffa93;  */

void FUN_108bffa58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  puVar3 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    lVar4 = lVar1;
    func_0x00010c105040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != lVar2) {
      _objc_setProperty_nonatomic_copy(puVar3);
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bffa94; end: 108bffc2f; -[SCFriendingUpdateFriendCoordinator _setAddedFriendsTimestampFromSnapchatterFromServer:addSource:placement:] */

void FUN_108bffa94(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if ((param_4 == 0x248de666) && (param_5 - 2U < 3)) {
    lVar1 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((lVar3 != 0) && (lVar1 = param_1, func_0x00010be3fd40(), (int)lVar1 != 0)) {
      lVar1 = param_3;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c261440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf0a8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010befcae0();
      FUN_1090216ac();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = lVar4;
      func_0x00010c0b4ca0();
      lVar5 = *(long *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010befcbc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0b4ca0();
      _objc_release(lVar2);
      _objc_release(lVar5);
      if (lVar3 < lVar1) {
        uVar6 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c165760();
        _objc_release(uVar6);
      }
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bffc30; end: 108bffc47; -[SCFriendingUpdateFriendCoordinator _isDuplicateBadingFixEnabled] */

void FUN_108bffc30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eed5b8,0,0);
  return;
}



/* Entry: 108bffc48; end: 108bffcbb; -[SCFriendingUpdateFriendCoordinator _logAddFriendAfterUpdatingDB:errorMessage:addSource:toFriendUserId:placementString:placementInfo:networkLatencyInMs:uiLatencyInMs:selectedShortcutId:sectionName:shouldLogSuggestionFetchRequestId:] */

void FUN_108bffc48(undefined8 param_1,double param_2,long param_3,undefined8 param_4,int param_5)

{
  func_0x00010c0a0ac0(*(undefined8 *)(param_3 + 0x50));
  if (param_5 != 0) {
    func_0x00010c0a0b20();
                    /* WARNING: Could not recover jumptable at 0x00010c0a0b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x48),PTR_s_logAddFriendTotalDurationInMs__112605ce0,
               (long)param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a0b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x48),PTR_s_logAddFriendUpdateDbFail_112605ce8);
  return;
}



/* Entry: 108bffcbc; end: 108bffeb3; -[SCFriendingUpdateFriendCoordinator _logAddAllFriends:errorMessage:friends:userIdToAddSourceMap:placementString:networkLatencyInMs:uiLatencyInMs:] */

void FUN_108bffcbc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar5 = 0;
  lVar2 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      uVar9 = uVar8;
      func_0x00010c2923e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c067fc0();
      FUN_10901fb98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010c2923e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0aa0(param_1,param_1,uVar9);
      _objc_release(uVar8);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    uVar5 = 0;
    lVar2 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be4ffc0();
  if ((uVar5 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a0a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x48),PTR_s_logAddAllFriendsUpdateDbFail_112605c98);
  return;
}



/* Entry: 108bffeb4; end: 108bffeeb; -[SCFriendingUpdateFriendCoordinator _logAddAllFriendsAfterUpdatingDB:errorMessage:friends:userIdToAddSourceMap:placementString:networkLatencyInMs:uiLatencyInMs:] */

void FUN_108bffeb4(long param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010be4ffc0();
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a0a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_logAddAllFriendsUpdateDbFail_112605c98);
  return;
}



/* Entry: 108bffeec; end: 108bfff53; -[SCFriendingUpdateFriendCoordinator _logAddAllFriendsSuccess:error:startTime:] */

void FUN_108bffeec(double param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_4 != 0) {
    dVar2 = param_1;
    func_0x00010c0a09e0();
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c0a0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_logAddAllFriendsTotalDurationInM_112605c90,
               (long)((dVar2 - param_1) * 1000.0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a09b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x48),PTR_s_logAddAllFriendsFailWithError__112605c78,param_5)
  ;
  return;
}



/* Entry: 108bfff54; end: 108c0000f; -[SCFriendingUpdateFriendCoordinator _needToShowAddFriendsTray:] */

void FUN_108bfff54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b1568;
  func_0x00010bfb94a0();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    FUN_108c07d74(uVar2,1);
    if ((int)uVar2 != 0) {
      lVar3 = param_1;
      func_0x00010bdf7440();
      lVar4 = param_1;
      func_0x00010be5dd80();
      if (lVar3 < lVar4) {
        lVar3 = param_1;
        func_0x00010be3e000();
        uVar2 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        if ((int)lVar3 == 0) {
          func_0x00010c165200();
        }
        else {
          func_0x00010c1651e0();
        }
        _objc_release(uVar2);
      }
    }
  }
  return;
}



/* Entry: 108c00010; end: 108c00067; -[SCFriendingUpdateFriendCoordinator _currentTrayImpressionCount:] */

undefined8 FUN_108c00010(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3e000();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    func_0x00010bef8a20();
  }
  else {
    func_0x00010bef8a00();
  }
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 108c00068; end: 108c0009f; -[SCFriendingUpdateFriendCoordinator _maxTrayImpressionCount:] */

long FUN_108c00068(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be3e000();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if ((int)lVar1 != 0) {
    FUN_108c072f4(uVar2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c2460();
    _objc_release(uVar2);
    return (long)(int)uVar3;
  }
  FUN_108c072f4(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c2480();
  _objc_release(uVar2);
  return (long)(int)uVar3;
}



/* Entry: 108c000a0; end: 108c000b3; -[SCFriendingUpdateFriendCoordinator _isAddFriendSourceAccept:] */

bool FUN_108c000a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x248de666;
}



/* Entry: 108c000b4; end: 108c0018b; -[SCFriendingUpdateFriendCoordinator .cxx_destruct] */

void FUN_108c000b4(long param_1)

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



/* Entry: 108c0018c; end: 108c003cb; -[SCSnapchattersGRPCUpdateService initWithUnifiedGRPCClientFactory:performerProvider:circumstanceEngine:preferences:blizzardSessionIDProvider:] */

undefined8 *
FUN_108c0018c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fdd70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf56360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126bb490;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = puVar1[1];
    puVar1[1] = puVar7;
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108c003cc; end: 108c0064f; -[SCSnapchattersGRPCUpdateService addFriendWithSnapchatter:addSource:placement:cellIndex:snapId:compositeStoryId:pageSessionId:callbackQueue:completionBlock:] */

void FUN_108c003cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = param_3;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c262460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_108c004e0;
    }
  }
  uVar5 = 0;
  uVar4 = 0;
LAB_108c004e0:
  lVar1 = param_3;
  FUN_108c02738(param_3,param_4,param_5,param_7,param_8,param_9,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010bef8f60(uVar3);
  _objc_release(param_1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 108c00650; end: 108c006bb;  */

void FUN_108c00650(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25680();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c006bc; end: 108c0082f; -[SCSnapchattersGRPCUpdateService addMultipleFriendsWithAddFriendRequests:placement:callbackQueue:completionBlock:] */

void FUN_108c006bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x000108c029a4(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bef8f60(uVar2);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108c00830; end: 108c0089b;  */

void FUN_108c00830(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be255e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c0089c; end: 108c00b3b; -[SCSnapchattersGRPCUpdateService deleteFriendWithFriend:deletedSource:snapId:compositeStoryId:pageSessionId:callbackQueue:completionBlock:] */

void FUN_108c0089c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126db1a0;
  _objc_opt_new(PTR_PTR_1126db1a0);
  puVar2 = PTR_PTR_1126db1a8;
  _objc_opt_new(PTR_PTR_1126db1a8);
  uVar6 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000107c3094c();
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar6);
  lVar4 = param_5;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c204680(puVar2);
  }
  lVar4 = param_6;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1805c0(puVar2);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fa0(puVar1);
  _objc_release(puVar5);
  func_0x00010c1d8620(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c12c820(uVar6);
  _objc_release(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108c00b3c; end: 108c00ba7;  */

void FUN_108c00b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c00ba8; end: 108c00deb; -[SCSnapchattersGRPCUpdateService ignoreFriendWithIncomingFriend:pageSessionId:callbackQueue:completionBlock:] */

void FUN_108c00ba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126db1b0;
  _objc_opt_new(PTR_PTR_1126db1b0);
  puVar2 = PTR_PTR_1126db1b8;
  _objc_opt_new(PTR_PTR_1126db1b8);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000107c3094c();
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fa0(puVar1);
  _objc_release(puVar5);
  func_0x00010c1d8620(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfe6740(uVar4);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c00dec; end: 108c00e57;  */

void FUN_108c00dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c00e58; end: 108c010af; -[SCSnapchattersGRPCUpdateService blockFriendWithSnapchatter:blockReasonId:pageSessionId:callbackQueue:completionBlock:] */

void FUN_108c00e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126db1c0;
  _objc_opt_new(PTR_PTR_1126db1c0);
  puVar2 = PTR_PTR_1126db1c8;
  _objc_opt_new(PTR_PTR_1126db1c8);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000107c3094c();
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fa0(puVar1);
  _objc_release(puVar5);
  func_0x00010c1d8620(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bf1d340(uVar4);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c010b0; end: 108c0111b;  */

void FUN_108c010b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c0111c; end: 108c01337; -[SCSnapchattersGRPCUpdateService unblockFriendWithSnapchatter:callbackQueue:completionBlock:] */

void FUN_108c0111c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126db1d0;
  _objc_opt_new(PTR_PTR_1126db1d0);
  puVar2 = PTR_PTR_1126db1d8;
  _objc_opt_new(PTR_PTR_1126db1d8);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000107c3094c();
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fa0(puVar1);
  _objc_release(puVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c27f4c0(uVar4);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c01338; end: 108c013a3;  */

void FUN_108c01338(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c013a4; end: 108c015e7; -[SCSnapchattersGRPCUpdateService setDisplayWithSnapchatter:displayName:callbackQueue:completionBlock:] */

void FUN_108c013a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126db1e0;
  _objc_opt_new(PTR_PTR_1126db1e0);
  puVar2 = PTR_PTR_1126db1e8;
  _objc_opt_new(PTR_PTR_1126db1e8);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000107c3094c();
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  func_0x00010c18fca0(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fa0(puVar1);
  _objc_release(puVar5);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf34e80(uVar4);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c015e8; end: 108c01653;  */

void FUN_108c015e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c01654; end: 108c01897; -[SCSnapchattersGRPCUpdateService setPostViewEmojiWithSnapchatter:postViewEmoji:callbackQueue:completionBlock:] */

void FUN_108c01654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126db1f0;
  _objc_opt_new(PTR_PTR_1126db1f0);
  puVar2 = PTR_PTR_1126db1f8;
  _objc_opt_new(PTR_PTR_1126db1f8);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000107c3094c();
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c19fd60(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  func_0x00010c1df4c0(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fa0(puVar1);
  _objc_release(puVar5);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c1df4e0(uVar4);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c01898; end: 108c01903;  */

void FUN_108c01898(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c01904; end: 108c01ca7; -[SCSnapchattersGRPCUpdateService _handleAddFriendWithFriendsActionResponse:error:callbackQueue:completionBlock:] */

void FUN_108c01904(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 == 0) || (param_4 != 0)) {
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_108c01cd4;
    puStack_f8 = &UNK_11084a9e8;
    _objc_retain(param_6);
    lStack_e0 = param_6;
    _objc_retain(param_4);
    lStack_f0 = param_4;
    _objc_retain(param_3);
    lStack_e8 = param_3;
    func_0x000107c27d8c(param_5,&puStack_110);
    _objc_release(lStack_e8);
    _objc_release(lStack_f0);
    lVar2 = lStack_e0;
    goto LAB_108c01c60;
  }
  lVar1 = param_3;
  func_0x00010c261c20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_108c046e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
LAB_108c01ba8:
    lVar1 = param_3;
    func_0x00010bfa0300(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0cb140(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    FUN_108c0409c(0,lVar1,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108c01ca8;
    puStack_80 = &UNK_11084aaa8;
    _objc_retain(param_6);
    lStack_70 = param_6;
    _objc_retain(param_4);
    lStack_78 = param_4;
    func_0x000107c27d8c(param_5,&puStack_98);
    _objc_release(lStack_78);
    lVar1 = lStack_70;
  }
  else {
    lVar1 = param_3;
    func_0x00010c261c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_108c01ba8;
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c261c20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe2ee0();
    lVar6 = lVar4;
    func_0x00010c0b5940(lVar4);
    func_0x000100c4a928(lVar5,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar1;
    func_0x00010bfac3e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x000108c044d8(lVar6,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar4);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x108c01cc0;
    puStack_c0 = &UNK_1108465d0;
    _objc_retain(param_6);
    uStack_a8 = 0;
    lStack_b8 = lVar3;
    lStack_b0 = lVar7;
    lStack_a0 = param_6;
    _objc_retain(lVar7);
    _objc_retain(lVar3);
    func_0x000107c27d8c(param_5,&puStack_d8);
    _objc_release(uStack_a8);
    _objc_release(lStack_b0);
    _objc_release(lStack_b8);
    _objc_release(lStack_a0);
    _objc_release(lVar7);
    _objc_release(lVar3);
    param_4 = 0;
  }
  _objc_release(lVar1);
LAB_108c01c60:
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c01ca8; end: 108c01cd3;  */

void FUN_108c01ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c01cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108c01cd4; end: 108c01d6b;  */

void FUN_108c01cd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bfa0300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0409c(uVar4,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108c01d6c; end: 108c02157; -[SCSnapchattersGRPCUpdateService _handleAddAllFriendsWithFriendsActionResponse:error:callbackQueue:completionBlock:] */

void FUN_108c01d6c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 == 0) || (param_4 != 0)) {
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_108c0216c;
    puStack_1a0 = &UNK_11084a9e8;
    _objc_retain(param_6);
    lStack_188 = param_6;
    _objc_retain(param_4);
    lStack_198 = param_4;
    _objc_retain(param_3);
    lStack_190 = param_3;
    func_0x000107c27d8c(param_5,&puStack_1b8);
    _objc_release(lStack_190);
    _objc_release(lStack_198);
    lVar2 = lStack_188;
  }
  else {
    lVar1 = param_3;
    func_0x00010c261c20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_108c046e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar1 = param_3;
    func_0x00010c261c20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar8 = *plStack_130;
      do {
        lVar9 = 0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(lVar1);
          }
          lVar10 = *(long *)(lStack_138 + lVar9 * 8);
          lVar5 = lVar10;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bfe2ee0();
          lVar7 = lVar5;
          func_0x00010c0b5940(lVar5);
          func_0x000100c4a928(lVar6,lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          func_0x00010bfac3e0(lVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar7;
          func_0x000108c044d8(lVar7,lVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar10);
          _objc_release(lVar7);
          _objc_release(lVar5);
          if (lVar6 != 0) {
            func_0x00010befa120(puVar3);
          }
          _objc_release(lVar6);
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar1;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c261c20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      lVar1 = param_3;
      func_0x00010bfa0300(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0cb140(param_3);
      _objc_retainAutoreleasedReturnValue();
      param_4 = 0;
      FUN_108c0409c(0,lVar1,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar1);
    }
    else {
      param_4 = 0;
    }
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_108c02158;
    puStack_168 = &UNK_1108465d0;
    _objc_retain(param_6);
    lStack_160 = lVar2;
    puStack_158 = puVar3;
    lStack_148 = param_6;
    _objc_retain(param_4);
    lStack_150 = param_4;
    _objc_retain(puVar3);
    _objc_retain(lVar2);
    func_0x000107c27d8c(param_5,&puStack_180);
    _objc_release(lStack_150);
    _objc_release(puStack_158);
    _objc_release(lStack_160);
    _objc_release(lStack_148);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108c02168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 108c02158; end: 108c0216b;  */

void FUN_108c02158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c02168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108c0216c; end: 108c02203;  */

void FUN_108c0216c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bfa0300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0409c(uVar4,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108c02204; end: 108c0236b; -[SCSnapchattersGRPCUpdateService _handleFriendActionResponse:error:callbackQueue:completionBlock:] */

void FUN_108c02204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108c022dc;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x000107c27d8c(param_5,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 108c0236c; end: 108c02377; -[SCSnapchattersGRPCUpdateService _callOptionBuilder] */

void FUN_108c0236c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae748,PTR_s_builder_1125a6bb0);
  return;
}



/* Entry: 108c02378; end: 108c023bf; -[SCSnapchattersGRPCUpdateService .cxx_destruct] */

void FUN_108c02378(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c023c0; end: 108c02737;  */

undefined1 FUN_108c023c0(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  
  uVar6 = 1;
  if ((long)param_1 < 0x1a040a22) {
    if ((long)param_1 < -0xea092b9) {
      if ((long)param_1 < -0x6401d9ed) {
        lVar5 = -0x6d0cb17d;
        uVar4 = 0xc6;
        if (param_1 != 0xffffffff98198191) {
          uVar4 = uVar6;
        }
        uVar6 = 8;
        if (param_1 != 0xffffffff92f34e84) {
          uVar6 = uVar4;
        }
        uVar7 = 0xffffffff8d60a69e;
        uVar8 = 0x18;
        bVar3 = param_1 == 0xffffffff8fc9b466;
        uVar4 = 0x1d;
      }
      else {
        lVar5 = -0x50fe1121;
        uVar4 = 9;
        if (param_1 != 0xffffffffeab1a352) {
          uVar4 = uVar6;
        }
        uVar8 = 2;
        if (param_1 != 0xffffffffcf5d0adf) {
          uVar8 = uVar4;
        }
        uVar6 = 0x1e;
        if (param_1 != 0xffffffffaf01eee0) {
          uVar6 = uVar8;
        }
        uVar7 = 0xffffffff9bfe2613;
        uVar8 = 0x24;
        bVar3 = param_1 == 0xffffffffa8b9a5bd;
        uVar4 = 7;
      }
    }
    else {
      if (-0x42fd6cf < (long)param_1) {
        lVar5 = 0x9c0b736;
        uVar4 = 0x19;
        if (param_1 != 0x10ca441e) {
          uVar4 = uVar6;
        }
        uVar8 = 0x10;
        if (param_1 != 0x1070c589) {
          uVar8 = uVar4;
        }
        uVar6 = 0xf;
        if (param_1 != 0x9c0b737) {
          uVar6 = uVar8;
        }
        uVar7 = 0xfffffffffbd02932;
        uVar8 = 0x12;
        uVar4 = param_1 != 0;
        goto LAB_108c02688;
      }
      lVar5 = -0x4c62610;
      uVar4 = 0xe;
      if (param_1 != 0xfffffffffb643e43) {
        uVar4 = uVar6;
      }
      uVar6 = 0x20;
      if (param_1 != 0xfffffffffb39d9f1) {
        uVar6 = uVar4;
      }
      uVar7 = 0xfffffffff15f6d47;
      uVar8 = 0xb;
      bVar3 = param_1 == 0xfffffffff2b19ec8;
      uVar4 = 5;
    }
  }
  else if ((long)param_1 < 0x2f5432a1) {
    if (0x20e40508 < (long)param_1) {
      if ((long)param_1 < 0x2e5189e1) {
        uVar1 = 0x20e40509;
        uVar4 = 0x1a;
        uVar2 = 0x248de666;
        uVar6 = 4;
LAB_108c02710:
        if (param_1 != uVar2) {
          uVar6 = 1;
        }
        if (param_1 != uVar1) {
          uVar4 = uVar6;
        }
        return uVar4;
      }
      if (param_1 == 0x2e5189e1) {
        return 0x1c;
      }
      if (param_1 == 0x2e593b1b) {
        return 0x14;
      }
      uVar1 = 0x2e879d01;
LAB_108c026c4:
      if (param_1 != uVar1) {
        return 1;
      }
      return 0xd;
    }
    lVar5 = 0x1b567eac;
    uVar4 = 0x1b;
    if (param_1 != 0x1df5c7d4) {
      uVar4 = 1;
    }
    uVar6 = 10;
    if (param_1 != 0x1b567ead) {
      uVar6 = uVar4;
    }
    uVar7 = 0x1a040a22;
    uVar8 = 3;
    bVar3 = param_1 == 0x1a0e6a1a;
    uVar4 = 6;
  }
  else {
    if ((long)param_1 < 0x54110798) {
      if (0x431dca03 < (long)param_1) {
        uVar1 = 0x431dca04;
        uVar4 = 0xc;
        uVar2 = 0x4a68a6a6;
        uVar6 = 0x16;
        goto LAB_108c02710;
      }
      if (param_1 == 0x2f5432a1) {
        return 0x15;
      }
      uVar1 = 0x3cf4b9ff;
      goto LAB_108c026c4;
    }
    lVar5 = 0x6424ea8a;
    uVar6 = 0x17;
    if (param_1 != 0x7ebc3d7f) {
      uVar6 = 1;
    }
    uVar4 = 0x11;
    if (param_1 != 0x78fe2cec) {
      uVar4 = uVar6;
    }
    uVar6 = 0x23;
    if (param_1 != 0x6424ea8b) {
      uVar6 = uVar4;
    }
    uVar7 = 0x54110798;
    uVar8 = 0x22;
    bVar3 = param_1 == 0x5740d2fe;
    uVar4 = 0x1f;
  }
  if (!bVar3) {
    uVar4 = 1;
  }
LAB_108c02688:
  if (param_1 != uVar7) {
    uVar8 = uVar4;
  }
  if ((long)param_1 <= lVar5) {
    uVar6 = uVar8;
  }
  return uVar6;
}



/* Entry: 108c02738; end: 108c02c87;  */

void FUN_108c02738(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126db200;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  FUN_10901fab4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7e80(puVar1);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR_PTR_1126db208;
  _objc_opt_new(PTR_PTR_1126db208);
  uVar4 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107c3094c();
  if ((int)uVar5 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar7);
  }
  func_0x00010c19fd60(puVar3);
  _objc_release(puVar7);
  _objc_release(uVar4);
  FUN_108c023c0(param_2);
  func_0x00010c206c40(puVar3);
  uVar4 = param_1;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fb80(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar6 = param_4;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    func_0x00010c204680(puVar3);
  }
  lVar6 = param_5;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    func_0x00010c1805c0(puVar3);
  }
  func_0x00010befa120(puVar2);
  func_0x00010c1d8fa0(puVar1);
  func_0x00010c1d8620(puVar1);
  _objc_release(param_6);
  func_0x00010c17d0e0(puVar1);
  _objc_release(param_8);
  func_0x00010c20fb40(puVar1);
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c02c88; end: 108c02cb3; +[SCGrapheneFriendActionMetric addFriendDuration] */

void FUN_108c02c88(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02cb4; end: 108c02cdf; +[SCGrapheneFriendActionMetric addFriendLatency] */

void FUN_108c02cb4(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02ce0; end: 108c02d0b; +[SCGrapheneFriendActionMetric addFriendSuccess] */

void FUN_108c02ce0(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02d0c; end: 108c02d37; +[SCGrapheneFriendActionMetric addFriendError] */

void FUN_108c02d0c(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02d38; end: 108c02d63; +[SCGrapheneFriendActionMetric addFriendFailDb] */

void FUN_108c02d38(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02d64; end: 108c02d8f; +[SCGrapheneFriendActionMetric addFriendNullId] */

void FUN_108c02d64(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02d90; end: 108c02dbb; +[SCGrapheneFriendActionMetric addFriend] */

void FUN_108c02d90(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02dbc; end: 108c02de7; +[SCGrapheneFriendActionMetric addAllFriendsDuration] */

void FUN_108c02dbc(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02de8; end: 108c02e13; +[SCGrapheneFriendActionMetric addAllFriendsLatency] */

void FUN_108c02de8(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02e14; end: 108c02e3f; +[SCGrapheneFriendActionMetric addAllFriendsSuccess] */

void FUN_108c02e14(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02e40; end: 108c02e6b; +[SCGrapheneFriendActionMetric addAllFriendsFailDb] */

void FUN_108c02e40(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c02e6c; end: 108c02e97; +[SCGrapheneFriendActionMetric addAllFriendsError] */

void FUN_108c02e6c(void)

{
  _objc_alloc(PTR_PTR_1126db170);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


