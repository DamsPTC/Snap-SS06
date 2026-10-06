/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0045185c; end: 004518af;  */

void FUN_0045185c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00451668(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x20);
  func_0x00780c20(uVar2,param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x0077dd00(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004518b0; end: 004519e3; -[SCServiceLoop setWhenNotified:forScheduledService:] */

void FUN_004518b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x451968;
  puStack_50 = &UNK_009e43d0;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x0078a560(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 004519e4; end: 00451a3b; -[SCServiceLoop suspendAllServices] */

void FUN_004519e4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00451a3c;
  puStack_20 = &UNK_009e3fc0;
  lStack_18 = param_1;
  func_0x0078a560(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 00451a3c; end: 00451c1f;  */

void FUN_00451a3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e4e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x0078b280(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x0077eb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e760(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x0078b280(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  puVar5 = auStack_e8;
  uVar6 = 0x10;
  puVar3 = puVar1;
  func_0x00780ea0();
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x22 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
        unaff_x23 = *(undefined8 *)(param_1 + 0x20);
        unaff_x24 = unaff_x22;
        func_0x0078c820();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
        func_0x0077bce0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00789f00(uVar2,param_2,unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077d580(unaff_x23,param_2,1,unaff_x24,uVar2);
        _objc_release(uVar2);
        _objc_release(unaff_x22);
        _objc_release(unaff_x24);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar5 = auStack_e8;
      uVar6 = 0x10;
      puVar3 = puVar1;
      puVar4 = &uStack_130;
      func_0x00780ea0();
      uVar2 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_00451c20;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = uVar2;
  puStack_150 = puVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  _objc_retain(puVar5);
  func_0x00451668();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_00ac2e58;
  _objc_alloc();
  func_0x007867a0();
  _objc_release(uVar6);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(puVar3 + 0x28);
  puStack_1a8 = PTR___NSConcreteStackBlock_00999f30;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x451d3c;
  puStack_190 = &UNK_009e43d0;
  puStack_188 = puVar3;
  puStack_180 = (undefined1 *)puVar4;
  _objc_retain(puVar8);
  puStack_178 = puVar8;
  _objc_retain(puVar4);
  func_0x0078a560(uVar2,param_2,&puStack_1a8);
  puVar1 = puStack_178;
  _objc_retain(puVar8);
  _objc_release(puVar1);
  _objc_release(puStack_180);
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar8);
  return;
}



/* Entry: 00451c20; end: 00451eb7; -[SCServiceLoop observeService:queue:changeHandler:] */

void FUN_00451c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00451668();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac2e58;
  _objc_alloc();
  func_0x007867a0();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x451d3c;
  puStack_60 = &UNK_009e43d0;
  lStack_58 = param_1;
  uStack_50 = param_3;
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  _objc_retain(param_3);
  func_0x0078a560(uVar3,param_2,&puStack_78);
  puVar1 = puStack_48;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00451eb8; end: 00451f47; -[SCServiceLoop performNotifierChanges:] */

void FUN_00451eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_00451f48;
  puStack_48 = &UNK_009e3670;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 00451f48; end: 00451f77;  */

void FUN_00451f48(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0077da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleServicesAndNotifyObserv_00aba388,0);
  return;
}



/* Entry: 00451f78; end: 00452147; -[SCServiceLoop unobserveServiceForObserveContext:fromDealloc:] */

void FUN_00451f78(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0077bce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x0078ace0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_00452148;
  pcStack_60 = FUN_00452170;
  uVar3 = param_3;
  func_0x007800e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  if (param_4 == 0) {
    _objc_retain(uVar1);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x0078a560(uVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  else {
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    func_0x0078a560(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 00452148; end: 0045216f;  */

void FUN_00452148(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 00452170; end: 00452177;  */

void FUN_00452170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00452178; end: 0045221f;  */

void FUN_00452178(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00789f00(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00780e80();
  if (lVar2 == 0) {
    func_0x0078b4a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_00999f30;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_00452220;
    puStack_30 = &UNK_009e4b88;
    lStack_28 = *(long *)(param_1 + 0x38);
    _dispatch_async(*(long *)(param_1 + 0x30),&puStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 00452220; end: 0045224f;  */

void FUN_00452220(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00452250; end: 0045230b;  */

void FUN_00452250(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00789f00(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b460();
  func_0x00787320(*(undefined8 *)(param_1 + 0x30));
  lVar2 = lVar1;
  func_0x00780e80();
  if (lVar2 == 0) {
    func_0x0078b4a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_00999f30;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_0045230c;
    puStack_30 = &UNK_009e4b88;
    lStack_28 = *(long *)(param_1 + 0x40);
    _dispatch_async(*(long *)(param_1 + 0x38),&puStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 0045230c; end: 0045231f;  */

void FUN_0045230c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00452320; end: 004523d7; -[SCServiceLoop endCurrentTermAndContinueService:whenNotified:] */

void FUN_00452320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_004523d8;
  puStack_50 = &UNK_009e43d0;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 004523d8; end: 0045252f;  */

void FUN_004523d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00451668(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00789f00(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x0078f400(lVar2,param_2,*(undefined8 *)(param_1 + 0x30));
    func_0x0078f4e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_2,lVar2,uVar1);
    func_0x0078b4a0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),param_2,uVar1);
    func_0x0077da40(*(undefined8 *)(param_1 + 0x28),param_2,lVar2);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00789f00(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x0078b4a0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),param_2,uVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar3;
    func_0x0078c820(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    lVar4 = lVar3;
    func_0x0077bce0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789f00(uVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d580(uVar6,param_2,1,lVar2,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00452530; end: 00452627; -[SCServiceLoop _suspendServiceWithUUID:] */

void FUN_00452530(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789f00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00789f00(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x0078b4a0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
    lVar2 = lVar1;
    func_0x0078c820(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00789f00(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d580(param_1,param_2,1,lVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x0078b4a0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x0078f4e0(*(undefined8 *)(param_1 + 0x18),param_2,lVar1,param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00452628; end: 00452743; -[SCServiceLoop _performWithStatus:service:observeSet:] */

/* WARNING: Removing unreachable block (ram,0x00452a40) */

void FUN_00452628(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,long param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  double dStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_1b0;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    param_1 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar3 = param_6;
    func_0x00780ea0();
    param_4 = puVar4;
    if (lVar3 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar9 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_6);
          }
          func_0x0078a640(*(undefined8 *)(lStack_118 + lVar9 * 8));
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = param_6;
        param_4 = &uStack_120;
        func_0x00780ea0();
      } while (lVar3 != 0);
    }
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uStack_2e0 = 0;
  uStack_2d0 = 0x3032000000;
  pcStack_2c8 = FUN_00452d04;
  uStack_2c0 = 0x452d14;
  uStack_2b8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0x2020000000;
  uStack_2e8 = 0;
  uStack_330 = 0;
  uStack_320 = 0x3032000000;
  pcStack_318 = FUN_00452d04;
  uStack_310 = 0x452d14;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  puStack_328 = &uStack_330;
  puStack_2f8 = &uStack_300;
  puStack_2d8 = &uStack_2e0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puStack_370 = PTR___NSConcreteStackBlock_00999f30;
  uStack_368 = 0xc2000000;
  pcStack_360 = FUN_00452d1c;
  puStack_358 = &UNK_009e4c18;
  puStack_350 = &uStack_330;
  puStack_348 = &uStack_2e0;
  puStack_340 = &uStack_300;
  dStack_338 = param_1;
  puStack_308 = puVar1;
  func_0x00782b60(*(undefined8 *)(param_5 + 8));
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  plStack_3a0 = (long *)0x0;
  lVar6 = puStack_328[5];
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00780ea0();
  if (lVar3 != 0) {
    lVar9 = *plStack_3a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_3a0 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lStack_3a8 + lVar11 * 8);
        uVar10 = *(undefined8 *)(param_5 + 8);
        uVar5 = uVar7;
        func_0x0077bce0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078b4a0(uVar10);
        _objc_release(uVar5);
        uVar10 = *(undefined8 *)(param_5 + 0x10);
        uVar5 = uVar7;
        func_0x0077bce0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(uVar10);
        _objc_release(uVar5);
        func_0x0078c820();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_00ac2e68;
        _objc_alloc();
        func_0x00786780();
        uVar5 = uVar7;
        func_0x00781ba0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_3e0 = PTR___NSConcreteStackBlock_00999f30;
        uStack_3d8 = 0xc2000000;
        pcStack_3d0 = FUN_00452e6c;
        puStack_3c8 = &UNK_009e36d0;
        uStack_3c0 = uVar7;
        puStack_3b8 = puVar1;
        _objc_retain(puVar1);
        _objc_retain(uVar7);
        _dispatch_async(uVar5,&puStack_3e0);
        _objc_release(uVar5);
        _objc_release(puStack_3b8);
        _objc_release(uStack_3c0);
        _objc_release(puVar1);
        _objc_release(uVar7);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar6;
      func_0x00780ea0();
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  lVar6 = puStack_328[5];
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00780ea0();
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(lVar9 * 8);
      uVar5 = uVar8;
      func_0x0078c820(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_5 + 0x38);
      uVar7 = uVar8;
      func_0x0077bce0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00789f00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077d580(param_5);
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x0077bce0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (undefined1 *)param_4;
      func_0x0077bce0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x007878e0();
      _objc_release(puVar2);
      _objc_release(uVar8);
      if ((int)uVar5 != 0) {
        _objc_release(param_4);
        param_4 = (undefined8 *)0x0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar6;
    func_0x00780ea0();
  }
  _objc_release(lVar6);
  if (param_4 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    _objc_retain(param_4);
    func_0x0078a580(0x3fb999999999999a,uVar5);
    _objc_release(param_4);
  }
  *(long *)(param_5 + 0x30) = *(long *)(param_5 + 0x30) + 1;
  if (puStack_2d8[5] != 0) {
    dVar13 = (double)puStack_2f8[3];
    dVar12 = 315360000.0;
    if (dVar13 < 315360000.0) {
      uVar5 = *(undefined8 *)(param_5 + 0x28);
      _CACurrentMediaTime();
      dVar12 = (param_1 + dVar13) - dVar12;
      if (dVar12 <= 0.0) {
        dVar12 = 0.0;
      }
      func_0x0078a580(dVar12,uVar5);
    }
  }
  __Block_object_dispose(&uStack_330,8);
  _objc_release(puStack_308);
  __Block_object_dispose(&uStack_300,8);
  __Block_object_dispose(&uStack_2e0,8);
  _objc_release(uStack_2b8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_1b0) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_330,8);
    __Block_object_dispose(&uStack_300,8);
    lVar3 = 8;
    __Block_object_dispose(&uStack_2e0);
    __Unwind_Resume();
    *(undefined8 *)((long)param_4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 00452744; end: 00452d03; -[SCServiceLoop _scheduleServicesAndNotifyObserversForItem:] */

/* WARNING: Removing unreachable block (ram,0x00452a40) */

void FUN_00452744(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  double dStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_00452d04;
  uStack_1a0 = 0x452d14;
  uStack_198 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x2020000000;
  uStack_1c8 = 0;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_00452d04;
  uStack_1f0 = 0x452d14;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  puStack_208 = &uStack_210;
  puStack_1d8 = &uStack_1e0;
  puStack_1b8 = &uStack_1c0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puStack_250 = PTR___NSConcreteStackBlock_00999f30;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_00452d1c;
  puStack_238 = &UNK_009e4c18;
  puStack_230 = &uStack_210;
  puStack_228 = &uStack_1c0;
  puStack_220 = &uStack_1e0;
  dStack_218 = param_1;
  puStack_1e8 = puVar1;
  func_0x00782b60(*(undefined8 *)(param_2 + 8));
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  lVar3 = puStack_208[5];
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00780ea0();
  if (lVar2 != 0) {
    lVar8 = *plStack_280;
    do {
      lVar9 = 0;
      do {
        if (*plStack_280 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_288 + lVar9 * 8);
        uVar7 = *(undefined8 *)(param_2 + 8);
        uVar4 = uVar5;
        func_0x0077bce0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078b4a0(uVar7);
        _objc_release(uVar4);
        uVar7 = *(undefined8 *)(param_2 + 0x10);
        uVar4 = uVar5;
        func_0x0077bce0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(uVar7);
        _objc_release(uVar4);
        func_0x0078c820();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_00ac2e68;
        _objc_alloc();
        func_0x00786780();
        uVar4 = uVar5;
        func_0x00781ba0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_2c0 = PTR___NSConcreteStackBlock_00999f30;
        uStack_2b8 = 0xc2000000;
        pcStack_2b0 = FUN_00452e6c;
        puStack_2a8 = &UNK_009e36d0;
        uStack_2a0 = uVar5;
        puStack_298 = puVar1;
        _objc_retain(puVar1);
        _objc_retain(uVar5);
        _dispatch_async(uVar4,&puStack_2c0);
        _objc_release(uVar4);
        _objc_release(puStack_298);
        _objc_release(uStack_2a0);
        _objc_release(puVar1);
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00780ea0();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  lVar3 = puStack_208[5];
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00780ea0();
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      uVar6 = *(undefined8 *)(lVar8 * 8);
      uVar4 = uVar6;
      func_0x0078c820(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      uVar5 = uVar6;
      func_0x0077bce0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00789f00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077d580(param_2);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x0077bce0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_4;
      func_0x0077bce0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x007878e0();
      _objc_release(lVar9);
      _objc_release(uVar6);
      if ((int)uVar4 != 0) {
        _objc_release(param_4);
        param_4 = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar3;
    func_0x00780ea0();
  }
  _objc_release(lVar3);
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(param_4);
    func_0x0078a580(0x3fb999999999999a,uVar4);
    _objc_release(param_4);
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
  if (puStack_1b8[5] != 0) {
    dVar11 = (double)puStack_1d8[3];
    dVar10 = 315360000.0;
    if (dVar11 < 315360000.0) {
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      _CACurrentMediaTime();
      dVar10 = (param_1 + dVar11) - dVar10;
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      func_0x0078a580(dVar10,uVar4);
    }
  }
  __Block_object_dispose(&uStack_210,8);
  _objc_release(puStack_1e8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(uStack_198);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_90) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_210,8);
    __Block_object_dispose(&uStack_1e0,8);
    lVar2 = 8;
    __Block_object_dispose(&uStack_1c0);
    __Unwind_Resume();
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 00452d04; end: 00452d1b;  */

void FUN_00452d04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 00452d1c; end: 00452de3;  */

void FUN_00452d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00789ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = *(double *)(param_1 + 0x38);
  func_0x00793a00();
  _objc_release(uVar1);
  if (dVar3 <= 0.0) {
    func_0x0077e720(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),param_2,param_3
                   );
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if ((*(long *)(lVar2 + 0x28) == 0) ||
       (dVar3 < *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = param_3;
      _objc_release(uVar1);
      *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = dVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00452de4; end: 00452e6b;  */

void FUN_00452de4(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 00452e6c; end: 00452e77;  */

void FUN_00452e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_runWithServiceTerm__00abdc90,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00452e78; end: 00452f57;  */

void FUN_00452e78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x0077bce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00(lVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x0078c820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x0077bce0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789f00(uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d580(uVar1,param_2,2,uVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(uVar2);
    return;
  }
  return;
}



/* Entry: 00452f58; end: 00452f73;  */

void FUN_00452f58(long param_1)

{
  if (*(long *)(param_1 + 0x28) == *(long *)(*(long *)(param_1 + 0x20) + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0077da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(long *)(param_1 + 0x20),PTR_s__scheduleServicesAndNotifyObserv_00aba388,0);
    return;
  }
  return;
}



/* Entry: 00452f74; end: 00452fd3; -[SCServiceLoop .cxx_destruct] */

void FUN_00452f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00452fd4; end: 00453017; +[SCServiceScheduleNotifier scheduleAfterSeconds:] */

void FUN_00452fd4(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR_PTR_00ac2d60;
  dVar2 = param_1;
  _objc_alloc(PTR_PTR_00ac2d60);
  _CACurrentMediaTime();
  func_0x007866e0(param_1 + dVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00453018; end: 0045305f; -[SCServiceScheduleNotifier initWithScheduledTime:] */

void FUN_00453018(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3ce0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 00453060; end: 00453077; -[SCServiceScheduleNotifier waitUntil:] */

double FUN_00453060(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 <= *(double *)(param_2 + 8)) {
    dVar1 = *(double *)(param_2 + 8) - param_1;
  }
  return dVar1;
}



/* Entry: 00453078; end: 00453207; +[SCSnapTokenMetricsUtil generateAccessTokenRetrievalLatencyBlizzardEvent:] */

void FUN_00453078(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_00ac2e70;
  lVar1 = param_4;
  func_0x00783fa0(param_4);
  func_0x007921c0(puVar2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_00ac2e78;
  _objc_alloc_init(PTR_PTR_00ac2e78);
  lVar1 = param_4;
  func_0x00787500(param_4);
  func_0x0078d220(puVar3,param_3,lVar1);
  puVar4 = PTR_PTR_00ac2c90;
  lVar1 = param_4;
  func_0x0077e220(param_4);
  func_0x00791680(puVar4,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790280(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  func_0x00782540(param_4);
  func_0x0078df80(puVar3,param_3,(long)(param_1 * 1000.0));
  func_0x0078e300(puVar3,param_3,puVar2);
  lVar1 = param_4;
  func_0x00787ee0(param_4);
  func_0x00790ca0(puVar3,param_3,lVar1);
  lVar1 = param_4;
  func_0x0078b7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x0078b7e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fe60(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x0078b7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x0078b7a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fde0(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00453208; end: 0045335b; +[SCSnapTokenMetricsUtil generateAccessTokenFetchErrorBlizzardEventWithError:metricsInfo:] */

void FUN_00453208(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_00ac2e80;
  _objc_alloc_init(PTR_PTR_00ac2e80);
  puVar3 = PTR_PTR_00ac2c90;
  lVar2 = param_4;
  func_0x0077e220(param_4);
  func_0x00791680(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790280(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_00ac2ae0;
  func_0x0077ba40(PTR_PTR_00ac2ae0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dca0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  lVar2 = param_4;
  func_0x00787ee0(param_4);
  func_0x00790ca0(puVar1,param_2,lVar2);
  lVar2 = param_4;
  func_0x0078b7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x0078b7e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fe60(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x0078b7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x0078b7a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fde0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0045335c; end: 004533bb; +[SCSnapTokenMetricsUtil generateSnapSessionFetchErrorBlizzardEventWithError:] */

void FUN_0045335c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2e88;
  _objc_alloc_init(PTR_PTR_00ac2e88);
  puVar2 = PTR_PTR_00ac2ae0;
  func_0x0077ba40(PTR_PTR_00ac2ae0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dca0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004533bc; end: 0045342f; +[SCSnapTokenMetricsUtil generateSnapTokenAppSessionPeriodBlizzardEventWithScope:misses:] */

void FUN_004533bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2e90;
  _objc_alloc_init(PTR_PTR_00ac2e90);
  func_0x0078f000();
  puVar2 = PTR_PTR_00ac2c90;
  func_0x00791680(PTR_PTR_00ac2c90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790280(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00453430; end: 004534d7; -[SCSnapTokenKeychainDiskStorage initWithLogger:isKeychainPerformerEnabled:] */

undefined1 *
FUN_00453430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3ce8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x0077db80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004534d8; end: 004535ab; +[SCSnapTokenKeychainDiskStorage _sharedKeychainPerformer] */

void FUN_004534d8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b602a8 != -1) {
    _dispatch_once(0xb602a8,&PTR___NSConcreteGlobalBlock_009e4c50);
  }
  uVar1 = uRam0000000000b602a0;
  _objc_retain(uRam0000000000b602a0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004535ac; end: 0045361f; -[SCSnapTokenKeychainDiskStorage refreshTokenDataWithUserId:] */

void FUN_004535ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0077d740();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077cc00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0077c5e0(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_00a264c0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00453620; end: 004536af; -[SCSnapTokenKeychainDiskStorage setRefreshTokenDataWithData:userId:] */

long FUN_00453620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x0077d740(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077cc40();
  }
  else {
    func_0x0077daa0(param_1,param_2,param_3,lVar1,&PTR____CFConstantStringClassReference_00a264c0);
  }
  _objc_release(param_3);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 004536b0; end: 00453713; -[SCSnapTokenKeychainDiskStorage removeRefreshTokenDataWithUserId:] */

long FUN_004536b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0077d740();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077cc20();
  }
  else {
    func_0x0077d7e0(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_00a264c0);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 00453714; end: 004537af; -[SCSnapTokenKeychainDiskStorage accessTokenDataWithUserId:accessType:] */

void FUN_00453714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0077be20();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x0077be40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x0077cc00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0077c5e0(param_1,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004537b0; end: 0045386b; -[SCSnapTokenKeychainDiskStorage setAccessTokenDataWithData:userId:accessType:] */

long FUN_004537b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x0077be20(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x0077be40(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x0077cc40();
  }
  else {
    func_0x0077daa0(param_1,param_2,param_3,lVar2,lVar3);
  }
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 0045386c; end: 004538f7; -[SCSnapTokenKeychainDiskStorage removeAccessTokenDataWithUserId:accessType:] */

long FUN_0045386c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0077be20();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x0077be40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x0077cc20();
  }
  else {
    func_0x0077d7e0(param_1,param_2,lVar2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 004538f8; end: 0045396b; -[SCSnapTokenKeychainDiskStorage cloud1TLTokenDataWithUserId:] */

void FUN_004538f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0077c340();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077cc00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0077c5e0(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_00a26500);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0045396c; end: 004539fb; -[SCSnapTokenKeychainDiskStorage setCloud1TLTokenDataWithData:forUserId:] */

long FUN_0045396c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x0077c340(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077cc40();
  }
  else {
    func_0x0077daa0(param_1,param_2,param_3,lVar1,&PTR____CFConstantStringClassReference_00a26500);
  }
  _objc_release(param_3);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 004539fc; end: 00453a5f; -[SCSnapTokenKeychainDiskStorage removeCloud1TLTokenDataWithUserId:] */

long FUN_004539fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0077c340();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0077cc20();
  }
  else {
    func_0x0077d7e0(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_00a26500);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 00453a60; end: 00453b8b; -[SCSnapTokenKeychainDiskStorage _guardedDataForKey:tokenType:] */

void FUN_00453a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_00453b8c;
  uStack_40 = 0x453b9c;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x0078a5a0(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00453b8c; end: 00453ba3;  */

void FUN_00453b8c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 00453ba4; end: 00453be7;  */

void FUN_00453ba4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077c5e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00453be8; end: 00453ca3; -[SCSnapTokenKeychainDiskStorage _guardedRemoveDataForKeyWithStatus:tokenType:] */

undefined8 FUN_00453be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00453ca4;
  puStack_50 = &UNK_009e43d0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 00453ca4; end: 00453cb3;  */

void FUN_00453ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeDataForKeyWithStatus_toke_00aba2f0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 00453cb4; end: 00453d9b; -[SCSnapTokenKeychainDiskStorage _guardedSetBackgroundDataWithStatus:forKey:tokenType:] */

undefined8
FUN_00453cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_00999f30;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_00453d9c;
  puStack_68 = &UNK_009e4c70;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 00453d9c; end: 00453dab;  */

void FUN_00453d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setBackgroundDataWithStatus_for_00aba3a0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 00453dac; end: 00453e63; -[SCSnapTokenKeychainDiskStorage _dataForKey:tokenType:] */

void FUN_00453dac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  int iStack_34;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x007882e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    iStack_34 = 0;
    puVar2 = PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8;
    func_0x00781520(PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8,param_2,param_3,&iStack_34);
    _objc_retainAutoreleasedReturnValue();
    if (iStack_34 != -0x62d4 && iStack_34 != 0) {
      func_0x00788980(*(undefined8 *)(param_1 + 8),param_2,0,(long)iStack_34,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00453e64; end: 00453f0b; -[SCSnapTokenKeychainDiskStorage _removeDataForKeyWithStatus:tokenType:] */

bool FUN_00453e64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x007882e0();
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8;
    func_0x0078b300(PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8,param_2,param_3);
    iVar1 = (int)puVar3;
    bVar4 = iVar1 == -0x62d4 || iVar1 == 0;
    if (iVar1 != -0x62d4 && iVar1 != 0) {
      func_0x00788960(*(undefined8 *)(param_1 + 8),param_2,0,(long)iVar1,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 00453f0c; end: 00453fb7; -[SCSnapTokenKeychainDiskStorage _setBackgroundDataWithStatus:forKey:tokenType:] */

undefined8
FUN_00453f0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x007882e0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8;
    func_0x0078ce00(PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8,param_2,param_3,param_4);
    if ((int)puVar2 == 0) {
      uVar3 = 1;
      goto LAB_00453f8c;
    }
    func_0x007889a0(*(undefined8 *)(param_1 + 8),param_2,0,(long)(int)puVar2,param_5);
  }
  uVar3 = 0;
LAB_00453f8c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 00453fb8; end: 0045405b; -[SCSnapTokenKeychainDiskStorage _accessTokenKeyForUserId:accessType:] */

void FUN_00453fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2c90;
  func_0x00791680(PTR_PTR_00ac2c90,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a26540);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0045405c; end: 00454093; -[SCSnapTokenKeychainDiskStorage _refreshTokenKeyForUserId:] */

void FUN_0045405c(undefined8 param_1,undefined8 param_2)

{
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a26560);
  return;
}



/* Entry: 00454094; end: 0045411b; -[SCSnapTokenKeychainDiskStorage _accessTokenMetricKeyWithType:] */

void FUN_00454094(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = (undefined **)PTR_PTR_00ac2c90;
  func_0x00791680();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x007882e0();
  if (ppuVar2 == (undefined **)0x0) {
    _objc_release(ppuVar1);
    ppuVar1 = &PTR____CFConstantStringClassReference_00a21280;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a26580);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0045411c; end: 00454153; -[SCSnapTokenKeychainDiskStorage _cloud1TLTokenKeyForUserId:] */

void FUN_0045411c(undefined8 param_1,undefined8 param_2)

{
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a26560);
  return;
}



/* Entry: 00454154; end: 00454183; -[SCSnapTokenKeychainDiskStorage .cxx_destruct] */

void FUN_00454154(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00454184; end: 004542a3; +[SCKeychainManager queryForKey:] */

/* WARNING: Removing unreachable block (ram,0x00454640) */
/* WARNING: Removing unreachable block (ram,0x00454528) */

undefined8 * FUN_00454184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x007815a0(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__kSecClassGenericPassword_009998a8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_00a24a80;
  uStack_40 = *(undefined8 *)PTR__kCFBooleanFalse_00999d38;
  puVar11 = &uStack_60;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  uStack_58 = param_3;
  uStack_50 = param_3;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00789700();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
    func_0x007815a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = *(undefined8 *)PTR__kSecClassGenericPassword_009998a8;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_00a24a80;
    uStack_d0 = *(undefined8 *)PTR__kCFBooleanTrue_00999d40;
    puVar1 = &uStack_f0;
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    puStack_e8 = puVar11;
    puStack_e0 = puVar11;
    func_0x00782080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00789700();
    _objc_release(puVar3);
    _objc_release(puVar11);
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_c8) {
      ___stack_chk_fail();
      lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
      _objc_retain(puVar1);
      puVar4 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _SecItemCopyMatching();
      if ((int)puVar5 == 0) {
        _objc_retain(0);
        lVar6 = 0;
        func_0x00780ea0();
        while (lVar6 != 0) {
          lVar10 = 0;
          do {
            puVar7 = *(undefined **)(lVar10 * 8);
            func_0x00789ea0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar7;
            func_0x00780e20();
            _objc_release(puVar7);
            puVar7 = PTR__OBJC_CLASS___NSData_00ac2b10;
            _objc_opt_class(PTR__OBJC_CLASS___NSData_00ac2b10);
            puVar8 = puVar5;
            _objc_opt_isKindOfClass(puVar5,puVar7);
            if (((ulong)puVar8 & 1) == 0) {
              puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
              _objc_opt_class();
              puVar8 = puVar5;
              _objc_opt_isKindOfClass(puVar5,puVar7);
              if (((ulong)puVar8 & 1) != 0) {
                _objc_retain(puVar5);
                puVar7 = puVar5;
                goto LAB_004545b4;
              }
              FUN_00454690(0);
              puVar7 = (undefined *)0x0;
            }
            else {
              puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
              _objc_alloc();
              func_0x007851e0();
LAB_004545b4:
              puVar8 = puVar7;
              FUN_00454690();
              if (((((ulong)puVar8 & 1) == 0) && (puVar7 != (undefined *)0x0)) &&
                 (puVar11 = puVar1, func_0x00780c20(), ((ulong)puVar11 & 1) == 0)) {
                func_0x0078b2e0(PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8);
              }
            }
            _objc_release(puVar7);
            _objc_release(puVar5);
            lVar10 = lVar10 + 1;
          } while (lVar6 != lVar10);
          lVar6 = 0;
          func_0x00780ea0();
        }
        _objc_release(0);
      }
      _objc_release(puVar4);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
        return puVar1;
      }
      ___stack_chk_fail();
      _objc_retain();
      if (lRam0000000000b602b8 != -1) {
        _dispatch_once(0xb602b8,&PTR___NSConcreteGlobalBlock_009e4ca0);
      }
      if ((bRam0000000000b602b0 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = puVar1;
        func_0x00780c40(puVar1);
      }
      _objc_release(puVar1);
      return puVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return puVar2;
}



/* Entry: 004542a4; end: 004543c3; +[SCKeychainManager synchronizableQueryForKey:] */

/* WARNING: Removing unreachable block (ram,0x00454640) */
/* WARNING: Removing unreachable block (ram,0x00454528) */

undefined8 * FUN_004542a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x007815a0(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__kSecClassGenericPassword_009998a8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_00a24a80;
  uStack_40 = *(undefined8 *)PTR__kCFBooleanTrue_00999d40;
  puVar7 = &uStack_60;
  puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  uStack_58 = param_3;
  uStack_50 = param_3;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  func_0x00789700();
  _objc_release(puVar10);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(puVar7);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _SecItemCopyMatching();
  if ((int)puVar3 == 0) {
    _objc_retain(0);
    lVar4 = 0;
    func_0x00780ea0();
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        puVar5 = *(undefined **)(lVar9 * 8);
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00780e20();
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSData_00ac2b10;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_00ac2b10);
        puVar6 = puVar3;
        _objc_opt_isKindOfClass(puVar3,puVar5);
        if (((ulong)puVar6 & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
          _objc_opt_class();
          puVar6 = puVar3;
          _objc_opt_isKindOfClass(puVar3,puVar5);
          if (((ulong)puVar6 & 1) != 0) {
            _objc_retain(puVar3);
            puVar5 = puVar3;
            goto LAB_004545b4;
          }
          FUN_00454690(0);
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
          _objc_alloc();
          func_0x007851e0();
LAB_004545b4:
          puVar6 = puVar5;
          FUN_00454690();
          if (((((ulong)puVar6 & 1) == 0) && (puVar5 != (undefined *)0x0)) &&
             (puVar10 = puVar7, func_0x00780c20(), ((ulong)puVar10 & 1) == 0)) {
            func_0x0078b2e0(PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8);
          }
        }
        _objc_release(puVar5);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = 0;
      func_0x00780ea0();
    }
    _objc_release(0);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (lRam0000000000b602b8 != -1) {
    _dispatch_once(0xb602b8,&PTR___NSConcreteGlobalBlock_009e4ca0);
  }
  if ((bRam0000000000b602b0 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = puVar7;
    func_0x00780c40(puVar7);
  }
  _objc_release(puVar7);
  return puVar10;
}



/* Entry: 004543c4; end: 0045468f; +[SCKeychainManager removeAllDataExcludingWhitelist:] */

/* WARNING: Removing unreachable block (ram,0x00454640) */
/* WARNING: Removing unreachable block (ram,0x00454528) */

ulong FUN_004543c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _SecItemCopyMatching();
  if ((int)puVar2 == 0) {
    _objc_retain(0);
    lVar3 = 0;
    func_0x00780ea0();
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        puVar4 = *(undefined **)(lVar7 * 8);
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00780e20();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSData_00ac2b10;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_00ac2b10);
        puVar5 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
          _objc_opt_class();
          puVar5 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar4);
          if (((ulong)puVar5 & 1) != 0) {
            _objc_retain(puVar2);
            puVar4 = puVar2;
            goto LAB_004545b4;
          }
          FUN_00454690(0);
          puVar4 = (undefined *)0x0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
          _objc_alloc();
          func_0x007851e0();
LAB_004545b4:
          puVar5 = puVar4;
          FUN_00454690();
          if (((((ulong)puVar5 & 1) == 0) && (puVar4 != (undefined *)0x0)) &&
             (uVar8 = param_3, func_0x00780c20(), (uVar8 & 1) == 0)) {
            func_0x0078b2e0(PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8);
          }
        }
        _objc_release(puVar4);
        _objc_release(puVar2);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = 0;
      func_0x00780ea0();
    }
    _objc_release(0);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (lRam0000000000b602b8 != -1) {
    _dispatch_once(0xb602b8,&PTR___NSConcreteGlobalBlock_009e4ca0);
  }
  if ((bRam0000000000b602b0 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_3;
    func_0x00780c40(param_3);
  }
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 00454690; end: 0045470b;  */

undefined8 FUN_00454690(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  if (lRam0000000000b602b8 != -1) {
    _dispatch_once(0xb602b8,&PTR___NSConcreteGlobalBlock_009e4ca0);
  }
  if ((bRam0000000000b602b0 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00780c40(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 0045470c; end: 0045478b; +[SCKeychainManager setData:forKey:] */

bool FUN_0045470c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0078ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(param_3);
  _objc_release(param_1);
  return (int)uVar1 == 0;
}



/* Entry: 0045478c; end: 00454803; +[SCKeychainManager setDataWithStatus:forKey:] */

undefined8 FUN_0045478c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0078ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00454804; end: 0045493b;  */

undefined8 FUN_00454804(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  _objc_retain(param_2);
  func_0x0078f4e0(param_1);
  uVar1 = param_1;
  func_0x00789700();
  puVar4 = param_3;
  func_0x0078f4e0();
  uVar2 = uVar1;
  _SecItemAdd(uVar1,0);
  if ((int)uVar2 == -0x62d3) {
    puVar4 = &uStack_68;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    uStack_68 = param_2;
    puStack_60 = param_3;
    func_0x00782080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    _SecItemUpdate(param_1,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x0078ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(puVar4);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 0045493c; end: 004549b3; +[SCKeychainManager setBackupableData:forKey:] */

undefined8 FUN_0045493c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0078ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 004549b4; end: 00454a2b; +[SCKeychainManager setBackupableDataMoreAccessible:forKey:] */

undefined8 FUN_004549b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0078ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00454a2c; end: 00454aa3; +[SCKeychainManager setSynchronizableData:forKey:] */

undefined8 FUN_00454a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00792640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00454aa4; end: 00454aeb; +[SCKeychainManager synchronizableDataForKey:] */

void FUN_00454aa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00792640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454aec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00454aec; end: 00454b9f;  */

void FUN_00454aec(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  _objc_retain();
  func_0x0078f4a0(param_1);
  func_0x0078f4a0(param_1);
  lStack_38 = 0;
  uVar1 = param_1;
  _SecItemCopyMatching(param_1,&lStack_38);
  _objc_release(param_1);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)uVar1;
  }
  lVar2 = lStack_38;
  if (((int)uVar1 != 0) && (lStack_38 != 0)) {
    _CFRelease();
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 00454ba0; end: 00454bdb; +[SCKeychainManager removeSynchronizableDataForKeyWithStatus:] */

undefined8 FUN_00454ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00792640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00454bdc; end: 00454c27; +[SCKeychainManager dataForKey:status:] */

void FUN_00454bdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ac80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454aec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00454c28; end: 00454c2f; +[SCKeychainManager dataForKey:] */

void FUN_00454c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00781530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_dataForKey_status__00abb240,param_3,0);
  return;
}



/* Entry: 00454c30; end: 00454c6f; +[SCKeychainManager removeDataForKey:] */

bool FUN_00454c30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ac80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return (int)uVar1 == 0;
}



/* Entry: 00454c70; end: 00454cab; +[SCKeychainManager removeDataForKeyWithStatus:] */

undefined8 FUN_00454c70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ac80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00454cac; end: 00454d2b; +[SCKeychainManager setBackgroundData:forKey:] */

bool FUN_00454cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0078ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(param_3);
  _objc_release(param_1);
  return (int)uVar1 == 0;
}



/* Entry: 00454d2c; end: 00454da3; +[SCKeychainManager setBackgroundDataWithStatus:forKey:] */

undefined8 FUN_00454d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0078ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_00454804();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00454da4; end: 00454e73; +[SCKeychainManager isDataThisDeviceOnly:] */

bool FUN_00454da4(long param_1)

{
  long lVar1;
  
  func_0x0078ac80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  lVar1 = param_1;
  FUN_00454aec(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 00454e74; end: 00454e93; +[SCSnapTokenAccessTypeUtil serverNameForAccessType:] */

undefined * FUN_00454e74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xc) {
    return (&PTR_PTR_009e4dd0)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 00454e94; end: 00454eb3; +[SCSnapTokenAccessTypeUtil shortStringFromAccessType:] */

undefined * FUN_00454e94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xc) {
    return (&PTR_PTR_009e4e30)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 00454eb4; end: 00454f4f; +[SCSnapTokenAccessTypeUtil accessTypeFromServerName:] */

long FUN_00454eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (lRam0000000000b602c8 != -1) {
    _dispatch_once(0xb602c8,&PTR___NSConcreteGlobalBlock_009e4cc0);
  }
  lVar1 = lRam0000000000b602c0;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0xc;
  }
  else {
    lVar2 = lVar1;
    func_0x00793100(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 00454f50; end: 00454f8f;  */

void FUN_00454f50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_alloc_init();
  uVar1 = puRam0000000000b602c0;
  puRam0000000000b602c0 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00782f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac2c90,PTR_s_executeOnAccessTypes__00abb8d0,
             &PTR___NSConcreteGlobalBlock_009e4d00);
  return;
}



/* Entry: 00454f90; end: 0045500f;  */

void FUN_00454f90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000000b602c0;
  puVar3 = PTR_PTR_00ac2c90;
  func_0x0078c7e0(PTR_PTR_00ac2c90);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 00455010; end: 0045504b; +[SCSnapTokenAccessTypeUtil executeOnAccessTypes:] */

void FUN_00455010(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xc);
  return;
}



/* Entry: 0045504c; end: 0045518b; +[SCSnapTokenAccessTypeUtil allServerSideScopeNames] */

void FUN_0045504c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b602d8 != -1) {
    _dispatch_once(0xb602d8,&PTR___NSConcreteGlobalBlock_009e4d20);
  }
  uVar1 = uRam0000000000b602d0;
  _objc_retain(uRam0000000000b602d0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0045518c; end: 004551df; +[SCSnapTokenAccessTypeUtil priorityTokensAndMultiScopeScopeNames] */

void FUN_0045518c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b602e8 != -1) {
    _dispatch_once(0xb602e8,&PTR___NSConcreteGlobalBlock_009e4d70);
  }
  uVar1 = uRam0000000000b602e0;
  _objc_retain(uRam0000000000b602e0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004551e0; end: 004552d3;  */

void FUN_004551e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = PTR_PTR_00ac2c90;
  func_0x0078c7e0(PTR_PTR_00ac2c90,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_00ac2c90;
  func_0x0078c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_00ac2c90;
  func_0x0078c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b602e0;
  puRam0000000000b602e0 = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (lRam0000000000b602f8 != -1) {
    _dispatch_once(0xb602f8,&PTR___NSConcreteGlobalBlock_009e4d90);
  }
  uVar1 = uRam0000000000b602f0;
  _objc_retain(uRam0000000000b602f0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004552d4; end: 004553ef; +[SCSnapTokenAccessTypeUtil priorityTokensScopeNames] */

void FUN_004552d4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b602f8 != -1) {
    _dispatch_once(0xb602f8,&PTR___NSConcreteGlobalBlock_009e4d90);
  }
  uVar1 = uRam0000000000b602f0;
  _objc_retain(uRam0000000000b602f0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004553f0; end: 00455543; +[SCSnapTokenAccessTypeUtil nonPriorityServerSideScopeNames] */

void FUN_004553f0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b60308 != -1) {
    _dispatch_once(0xb60308,&PTR___NSConcreteGlobalBlock_009e4db0);
  }
  uVar1 = uRam0000000000b60300;
  _objc_retain(uRam0000000000b60300);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00455544; end: 0045558b; +[SCSnapTokenAccessTokenErrorUtil SCSnapTokenAccessErrorStringFromError:] */

undefined ** FUN_00455544(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return (undefined **)(&PTR_PTR_009e4e90)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_00a268e0;
}



/* Entry: 0045558c; end: 0045565f;  */

undefined8 FUN_0045558c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  FUN_00455a30(param_1,puVar1,param_4,0);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 00455660; end: 0045575f;  */

uint FUN_00455660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lStack_48 = 0;
  puVar1 = PTR__OBJC_CLASS___NSPropertyListSerialization_00ac2e98;
  func_0x00781740(PTR__OBJC_CLASS___NSPropertyListSerialization_00ac2e98,param_2,param_1,200,0,
                  &lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar5 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_50 = 0;
    puVar3 = puVar1;
    func_0x0078c1c0(puVar1,param_2,puVar2,param_4,&lStack_50);
    lVar5 = lStack_50;
    _objc_retain(lStack_50);
    uVar4 = (uint)(lVar5 == 0) & (uint)puVar3;
    _objc_release(puVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(puVar1);
  _objc_release(lVar5);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 00455760; end: 004557e7; +[SCDiskUtility _isUserScopedDirectory:] */

ulong FUN_00455760(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00780e80();
  if (uVar2 < 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00780e80(param_3);
    uVar1 = param_3;
    func_0x00789e20(param_3,param_2,uVar2 - 2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x007878e0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 004557e8; end: 0045586f; +[SCDiskUtility _isGlobalScopedDirectory:] */

ulong FUN_004557e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00780e80();
  if (uVar2 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00780e80(param_3);
    uVar1 = param_3;
    func_0x00789e20(param_3,param_2,uVar2 - 1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x007878e0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 00455870; end: 004558f7; +[SCDiskUtility _isExtensionDirectory:] */

ulong FUN_00455870(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00780e80();
  if (uVar2 < 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00780e80(param_3);
    uVar1 = param_3;
    func_0x00789e20(param_3,param_2,uVar2 - 2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x007878e0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 004558f8; end: 00455a2f; +[SCDiskUtility shortNameFromPath:] */

void FUN_004558f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x0078a420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d080(param_1,param_2,lVar1);
  lVar3 = lVar1;
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x0077d040(param_1,param_2,lVar1);
    if ((int)uVar2 == 0) {
      func_0x0077d020(param_1,param_2,lVar1);
      if ((int)param_1 == 0) {
        lVar4 = param_3;
        func_0x00788240(param_3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_004559f4;
      }
      lVar4 = lVar1;
      func_0x00780e80(lVar1);
      func_0x00789e20(lVar1,param_2,lVar4 + -3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = lVar1;
      func_0x00780e80(lVar1);
      func_0x00789e20(lVar1,param_2,lVar4 + -2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar4 = lVar1;
    func_0x00780e80(lVar1);
    func_0x00789e20(lVar1,param_2,lVar4 + -3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar3;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
LAB_004559f4:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar4);
  return;
}



/* Entry: 00455a30; end: 00455d37;  */

undefined8 * FUN_00455a30(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  int iVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    _objc_retain();
    param_4 = param_1;
    func_0x00794420(param_1);
    puVar5 = param_1;
    goto LAB_00455cd4;
  }
  puVar3 = param_1;
  _objc_retain(param_1);
  func_0x005b5cd8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  if (lRam0000000000b60320 != -1) {
    _dispatch_once(0xb60320,&PTR___NSConcreteGlobalBlock_009e4ec8);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb60310,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000000b60310 = lRam0000000000b60310 + 1;
    }
  } while (cVar1 != '\0');
  func_0x0078c100(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00791e80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x00783500();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00794420();
  _objc_release(param_1);
  if (((ulong)puVar3 & 1) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      iVar12 = (int)*(undefined8 *)PTR__NSPOSIXErrorDomain_00998f50;
      puVar10 = (undefined *)*param_4;
      func_0x007823e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x007878e0();
      if (iVar12 != 0) {
        func_0x00780460(*param_4);
      }
LAB_00455cb4:
      _objc_release(puVar10);
      param_4 = (undefined8 *)0x0;
    }
  }
  else {
    puVar10 = puVar4;
    func_0x0078a400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    _objc_retainAutorelease();
    func_0x0077bcc0();
    _objc_release(puVar10);
    uVar7 = param_2;
    func_0x0078a400(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    _objc_retainAutorelease();
    func_0x0077bcc0();
    _objc_release(uVar7);
    _rename(puVar6,uVar8);
    puVar10 = PTR__OBJC_CLASS___NSString_00ac2988;
    if ((int)puVar6 == 0) {
      param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    else if (param_4 != (undefined8 *)0x0) {
      ___error();
      func_0x0078c100();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSError_00ac2b00;
      _objc_alloc();
      ___error();
      func_0x007853c0();
      _objc_autorelease();
      *param_4 = puVar9;
      _objc_release(puVar6);
      goto LAB_00455cb4;
    }
  }
  _objc_release(puVar4);
LAB_00455cd4:
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar11) {
    ___stack_chk_fail();
    _SCUUID();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puRam0000000000b60318;
    puRam0000000000b60318 = (undefined8 *)param_2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar5);
    return puVar5;
  }
  return param_4;
}



/* Entry: 00455d38; end: 00455d63;  */

void FUN_00455d38(undefined8 param_1)

{
  undefined8 uVar1;
  
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000000b60318;
  uRam0000000000b60318 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00455d64; end: 00455fd7;  */

undefined8 * FUN_00455d64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 uStack_388;
  undefined1 uStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [24];
  undefined1 uStack_330;
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [24];
  undefined1 uStack_2d8;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined1 uStack_280;
  undefined1 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [24];
  undefined1 uStack_228;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 uStack_1d0;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_3a8 = 0x100000000;
  FUN_00425cb4(auStack_3a0,"\nALTER TABLE Notifications ADD COLUMN json TEXT\n");
  uStack_388 = 0;
  uStack_358 = 0;
  uStack_350 = 0x200000001;
  FUN_00425cb4(auStack_348,
               "\nALTER TABLE Notifications ADD COLUMN receiveTimestampMs INTEGER;\nALTER TABLE Notifications ADD COLUMN latestAnnounceTimestampMs INTEGER;\nALTER TABLE Notifications ADD COLUMN announceAttemptCount INTEGER\n"
              );
  uStack_330 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0x300000002;
  FUN_00425cb4(auStack_2f0,
               "\nALTER TABLE Notifications ADD COLUMN redriveAttemptCount INTEGER NOT NULL DEFAULT 0\n"
              );
  uStack_2d8 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0x400000003;
  FUN_00425cb4(auStack_298,
               "\nDROP TABLE IF EXISTS Notifications;\nCREATE TABLE IF NOT EXISTS Notifications (\n    -- The unique ID for this notification record in UUID format.\n    notificationId TEXT NOT NULL PRIMARY KEY,\n\n    -- The notification type for this notification record.\n    type TEXT NOT NULL,\n\n    -- The timestamp in milliseconds that the notification was sent by the server.\n    timestamp INTEGER NOT NULL,\n\n    -- The notification category for this notification record.\n    category INTEGER NOT NULL,\n\n    -- Current processing state of the notification.\n    state INTEGER NOT NULL,\n\n    -- System source for the notification.\n    source INTEGER NOT NULL,\n\n    -- Notification payload as serialized JSON string.\n    json TEXT,\n\n    -- Timestamp in milliseconds when the notification was first received from server.\n    receiveTimestampMs INTEGER,\n\n    -- Timestamp in milliseconds of the latest attempt to announce the notification to platform.\n    latestAnnounceTimestampMs INTEGER,\n\n    -- Number of times the notification has been redrived.\n    redriveAttemptCount INTEGER NOT NULL DEFAULT 0\n)\n"
              );
  uStack_280 = 0;
  uStack_250 = 0;
  uStack_248 = 0x500000004;
  FUN_00425cb4(auStack_240,
               "\nALTER TABLE Notifications ADD COLUMN isRedrivable INTEGER NOT NULL DEFAULT 0\n");
  uStack_228 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0x600000005;
  FUN_00425cb4(auStack_1e8,"\nALTER TABLE Notifications ADD COLUMN suppressionReason INTEGER\n");
  uStack_1d0 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0x700000006;
  FUN_00425cb4(auStack_190,
               "\nALTER TABLE Notifications ADD COLUMN skipDedupe INTEGER NOT NULL DEFAULT 0\n");
  uStack_178 = 0;
  uStack_148 = 0;
  uStack_140 = 0x800000007;
  FUN_00425cb4(auStack_138,
               "\nALTER TABLE Notifications ADD COLUMN latestRedriveReminderTimestampMs INTEGER\n");
  uStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x900000008;
  FUN_00425cb4(auStack_e0,
               "\nCREATE INDEX IF NOT EXISTS notifications_receive_timestamp_idx\nON Notifications(receiveTimestampMs)\n"
              );
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0xa00000009;
  FUN_00425cb4(auStack_88,
               "\nALTER TABLE Notifications ADD COLUMN hasGroupingData INTEGER NOT NULL DEFAULT 0;\nALTER TABLE Notifications ADD COLUMN groupingConversationId TEXT;\nALTER TABLE Notifications ADD COLUMN groupingBundleId TEXT;\nCREATE INDEX IF NOT EXISTS notifications_grouping_history_idx\nON Notifications(receiveTimestampMs, hasGroupingData)\n"
              );
  uStack_70 = 0;
  uStack_40 = 0;
  uVar3 = 10;
  FUN_006450b8(param_1,10,
               "\nCREATE TABLE IF NOT EXISTS Notifications (\n    -- The unique ID for this notification record in UUID format.\n    notificationId TEXT NOT NULL PRIMARY KEY,\n\n    -- The notification type for this notification record.\n    type TEXT NOT NULL,\n\n    -- The timestamp in milliseconds that the notification was sent by the server.\n    timestamp INTEGER NOT NULL,\n\n    -- The notification category for this notification record.\n    category INTEGER NOT NULL,\n\n    -- Current processing state of the notification.\n    state INTEGER NOT NULL,\n\n    -- System source for the notification.\n    source INTEGER NOT NULL,\n\n    -- Notification payload as serialized JSON string.\n    json TEXT,\n\n    -- Timestamp in milliseconds when the notification was first received from server.\n    receiveTimestampMs INTEGER,\n\n    -- Timestamp in milliseconds of the latest attempt to announce the notification to platform.\n    latestAnnounceTimestampMs INTEGER,\n\n    -- Number of times the notification has been redrived.\n    redriveAttemptCount INTEGER NOT NULL DEFAULT 0,\n\n    -- Whether the notification is eligible for redrive.\n    isRedrivable INTEGER NOT NULL DEFAULT 0,\n\n    -- Optional reason for why a notification was suppressed.\n    -- Not set if a notification has not been suppressed\n    -- or if it has been suppressed for an unknown reason.\n    suppressionReason INTEGER,\n\n    -- Whether deduplication should be skipped for this notification.\n    skipDedupe INTEGER NOT NULL DEFAULT 0,\n\n    -- Timestamp in milliseconds of the latest redrive reminder attempt.\n    latestRedriveReminderTimestampMs INTEGER,\n\n    -- Boolean flag to find relevant history quickly.\n    hasGroupingData INTEGER NOT NULL DEFAULT 0,\n\n    -- Pre-extracted grouping keys.\n    -- These are NULL if not present in the notification.\n    groupingConversationId TEXT,\n    groupingBundleId TEXT\n);\nCREATE INDEX IF NOT EXISTS notifications_receive_timestamp_idx\nON Notifications(receiveTimestampMs);\nCREATE INDEX IF NOT EXISTS notifications_grouping_history_idx\nON Notifications(receiveTimestam..." /* TRUNCATED STRING LITERAL */
               ,&uStack_3a8,10);
  lVar4 = 0x318;
  do {
    puVar1 = (undefined8 *)(auStack_3a0 + lVar4 + -8);
    FUN_00456130();
    lVar4 = lVar4 + -0x58;
  } while (lVar4 != -0x58);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_90;
  lVar4 = -0x370;
  do {
    FUN_00456130(puVar2);
    puVar2 = puVar2 + -0xb;
    lVar4 = lVar4 + 0x58;
  } while (lVar4 != 0);
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_009e4ef8;
  puVar1[1] = uVar3;
  FUN_0045600c(puVar1 + 2,uVar3);
  return puVar1;
}


