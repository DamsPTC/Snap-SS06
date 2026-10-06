/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcb1134; end: 10bcb1163; -[SCServiceTerm .cxx_destruct] */

void FUN_10bcb1134(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb1164; end: 10bcb120b; -[SCServiceItem initWithService:UUID:] */

undefined1 *
FUN_10bcb1164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e3c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 10bcb120c; end: 10bcb1213; -[SCServiceItem service] */

undefined8 FUN_10bcb120c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcb1214; end: 10bcb121b; -[SCServiceItem UUID] */

undefined8 FUN_10bcb1214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcb121c; end: 10bcb1223; -[SCServiceItem notifier] */

undefined8 FUN_10bcb121c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bcb1224; end: 10bcb1253; -[SCServiceItem setNotifier:] */

void FUN_10bcb1224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb1254; end: 10bcb128f; -[SCServiceItem .cxx_destruct] */

void FUN_10bcb1254(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb1290; end: 10bcb1397; -[SCServiceObserveContext initWithServiceLoop:UUID:queue:changeHandler:] */

undefined1 *
FUN_10bcb1290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270e3d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb1398; end: 10bcb13df; -[SCServiceObserveContext dealloc] */

void FUN_10bcb1398(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b40(param_1,param_2,1);
  puStack_28 = PTR_PTR_11270e3d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bcb13e0; end: 10bcb13e7; -[SCServiceObserveContext unobserve] */

void FUN_10bcb13e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unobserveFromDealloc__11267e0f8,0);
  return;
}



/* Entry: 10bcb13e8; end: 10bcb13f7; -[SCServiceObserveContext unobserveFromDealloc:] */

void FUN_10bcb13e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_unobserveServiceForObserveContex_11267e110,
             param_1,param_3);
  return;
}



/* Entry: 10bcb13f8; end: 10bcb142b; -[SCServiceObserveContext invalidate] */

void FUN_10bcb13f8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb142c; end: 10bcb1507; -[SCServiceObserveContext performWithStatus:service:] */

void FUN_10bcb142c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (((lVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) && (*(long *)(param_1 + 8) != param_3)) {
    *(long *)(param_1 + 8) = param_3;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10bcb1508;
    puStack_50 = &UNK_11085b7b0;
    lStack_40 = lVar1;
    _objc_retain(param_4);
    uStack_48 = param_4;
    lStack_38 = param_3;
    _objc_retain(lVar1);
    func_0x000107c27d8c(uVar2,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10bcb1508; end: 10bcb151b;  */

void FUN_10bcb1508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcb1518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10bcb151c; end: 10bcb1523; -[SCServiceObserveContext UUID] */

undefined8 FUN_10bcb151c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bcb1524; end: 10bcb152b; -[SCServiceObserveContext changeHandler] */

undefined8 FUN_10bcb1524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bcb152c; end: 10bcb1533; -[SCServiceObserveContext queue] */

undefined8 FUN_10bcb152c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10bcb1534; end: 10bcb157b; -[SCServiceObserveContext .cxx_destruct] */

void FUN_10bcb1534(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bcb157c; end: 10bcb15cf; +[SCServiceLoop sharedInstance] */

void FUN_10bcb157c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fded8 != -1) {
    func_0x000107c27d9c(0x1137fded8,&PTR___NSConcreteGlobalBlock_110d98770);
  }
  uVar1 = uRam00000001137fded0;
  _objc_retain(uRam00000001137fded0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb15d0; end: 10bcb15fb;  */

void FUN_10bcb15d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c3a00;
  _objc_alloc_init();
  uVar1 = puRam00000001137fded0;
  puRam00000001137fded0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb15fc; end: 10bcb1753; -[SCServiceLoop init] */

undefined1 * FUN_10bcb15fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e3d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb1754; end: 10bcb19cf; -[SCServiceLoop resumeService:whenNotified:] */

void FUN_10bcb1754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10bcb180c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcb19d0; end: 10bcb1a5f; -[SCServiceLoop invalidateService:] */

void FUN_10bcb19d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10bcb1a60;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcb1a60; end: 10bcb1aaf;  */

void FUN_10bcb1a60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bcb194c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,uVar1);
  func_0x00010bec9160(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb1ab0; end: 10bcb1b3f; -[SCServiceLoop suspendService:] */

void FUN_10bcb1ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10bcb1b40;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcb1b40; end: 10bcb1b93;  */

void FUN_10bcb1b40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bcb194c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x20);
  func_0x00010bf4b900(uVar2,param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bec9160(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb1b94; end: 10bcb1cc7; -[SCServiceLoop setWhenNotified:forScheduledService:] */

void FUN_10bcb1b94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10bcb1c4c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10bcb1cc8; end: 10bcb1d1f; -[SCServiceLoop suspendAllServices] */

void FUN_10bcb1cc8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bcb1d20;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 10bcb1d20; end: 10bcb1f03;  */

void FUN_10bcb1d20(long param_1,undefined8 param_2)

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
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
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
  func_0x00010bf52a60();
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
        func_0x00010c15f680();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
        func_0x00010bdc3540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar2,param_2,unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be72ea0(unaff_x23,param_2,1,unaff_x24,uVar2);
        _objc_release(uVar2);
        _objc_release(unaff_x22);
        _objc_release(unaff_x24);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar5 = auStack_e8;
      uVar6 = 0x10;
      puVar3 = puVar1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
      uVar2 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10bcb1f04;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = uVar2;
  puStack_150 = puVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  _objc_retain(puVar5);
  func_0x00010bcb194c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126e2e28;
  _objc_alloc();
  func_0x00010c044ec0();
  _objc_release(uVar6);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(puVar3 + 0x28);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x10bcb2020;
  puStack_190 = &UNK_110848ba8;
  puStack_188 = puVar3;
  puStack_180 = (undefined1 *)puVar4;
  _objc_retain(puVar8);
  puStack_178 = puVar8;
  _objc_retain(puVar4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_1a8);
  puVar1 = puStack_178;
  _objc_retain(puVar8);
  _objc_release(puVar1);
  _objc_release(puStack_180);
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10bcb1f04; end: 10bcb219b; -[SCServiceLoop observeService:queue:changeHandler:] */

void FUN_10bcb1f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010bcb194c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e2e28;
  _objc_alloc();
  func_0x00010c044ec0();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x10bcb2020;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  uStack_50 = param_3;
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_78);
  puVar1 = puStack_48;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bcb219c; end: 10bcb222b; -[SCServiceLoop performNotifierChanges:] */

void FUN_10bcb219c(long param_1,undefined8 param_2,undefined8 param_3)

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
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10bcb222c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcb222c; end: 10bcb225b;  */

void FUN_10bcb222c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010be9b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleServicesAndNotifyObserv_112584760,0);
  return;
}



/* Entry: 10bcb225c; end: 10bcb242b; -[SCServiceLoop unobserveServiceForObserveContext:fromDealloc:] */

void FUN_10bcb225c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10bcb242c;
  pcStack_60 = FUN_10bcb2454;
  uVar3 = param_3;
  func_0x00010bf34f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  if (param_4 == 0) {
    _objc_retain(uVar1);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  else {
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar4);
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



/* Entry: 10bcb242c; end: 10bcb2453;  */

void FUN_10bcb242c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10bcb2454; end: 10bcb245b;  */

void FUN_10bcb2454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10bcb245c; end: 10bcb2503;  */

void FUN_10bcb245c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10bcb2504;
    puStack_30 = &UNK_110847658;
    lStack_28 = *(long *)(param_1 + 0x38);
    func_0x000107c27d8c(*(long *)(param_1 + 0x30),&puStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10bcb2504; end: 10bcb2517;  */

void FUN_10bcb2504(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb2518; end: 10bcb25d3;  */

void FUN_10bcb2518(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x30));
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10bcb25d4;
    puStack_30 = &UNK_110847658;
    lStack_28 = *(long *)(param_1 + 0x40);
    func_0x000107c27d8c(*(long *)(param_1 + 0x38),&puStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10bcb25d4; end: 10bcb25e7;  */

void FUN_10bcb25d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb25e8; end: 10bcb269f; -[SCServiceLoop endCurrentTermAndContinueService:whenNotified:] */

void FUN_10bcb25e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10bcb26a0;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10bcb26a0; end: 10bcb27f7;  */

void FUN_10bcb26a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bcb194c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c1ce800(lVar2,param_2,*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_2,lVar2,uVar1);
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),param_2,uVar1);
    func_0x00010be9b6e0(*(undefined8 *)(param_1 + 0x28),param_2,lVar2);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c0e00e0(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),param_2,uVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar3;
    func_0x00010c15f680(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    lVar4 = lVar3;
    func_0x00010bdc3540(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be72ea0(uVar6,param_2,1,lVar2,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb27f8; end: 10bcb28ef; -[SCServiceLoop _suspendServiceWithUUID:] */

void FUN_10bcb27f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
    lVar2 = lVar1;
    func_0x00010c15f680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be72ea0(param_1,param_2,1,lVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,lVar1,param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcb28f0; end: 10bcb2a0b; -[SCServiceLoop _performWithStatus:service:observeSet:] */

void FUN_10bcb28f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
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
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
    func_0x00010bf52a60();
    param_4 = puVar4;
    if (lVar3 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar9 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00010c0f9660(*(undefined8 *)(lStack_118 + lVar9 * 8));
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = param_6;
        param_4 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uStack_2e0 = 0;
  uStack_2d0 = 0x3032000000;
  pcStack_2c8 = FUN_10bcb2fcc;
  uStack_2c0 = 0x10bcb2fdc;
  uStack_2b8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0x2020000000;
  uStack_2e8 = 0;
  uStack_330 = 0;
  uStack_320 = 0x3032000000;
  pcStack_318 = FUN_10bcb2fcc;
  uStack_310 = 0x10bcb2fdc;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_328 = &uStack_330;
  puStack_2f8 = &uStack_300;
  puStack_2d8 = &uStack_2e0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_370 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_368 = 0xc2000000;
  pcStack_360 = FUN_10bcb2fe4;
  puStack_358 = &UNK_110d98790;
  puStack_350 = &uStack_330;
  puStack_348 = &uStack_2e0;
  puStack_340 = &uStack_300;
  dStack_338 = param_1;
  puStack_308 = puVar1;
  func_0x00010bf97ce0(*(undefined8 *)(param_5 + 8));
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
  func_0x00010bf52a60();
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
        func_0x00010bdc3540(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar10);
        _objc_release(uVar5);
        uVar10 = *(undefined8 *)(param_5 + 0x10);
        uVar5 = uVar7;
        func_0x00010bdc3540(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(uVar5);
        func_0x00010c15f680();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126e2e30;
        _objc_alloc();
        func_0x00010c044e60();
        uVar5 = uVar7;
        func_0x00010bf67a80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3d8 = 0xc2000000;
        pcStack_3d0 = FUN_10bcb30ac;
        puStack_3c8 = &UNK_110841f80;
        uStack_3c0 = uVar7;
        puStack_3b8 = puVar1;
        _objc_retain(puVar1);
        _objc_retain(uVar7);
        func_0x000107c27d8c(uVar5,&puStack_3e0);
        _objc_release(uVar5);
        _objc_release(puStack_3b8);
        _objc_release(uStack_3c0);
        _objc_release(puVar1);
        _objc_release(uVar7);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  lVar9 = puStack_328[5];
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar9);
      }
      uVar8 = *(undefined8 *)(lVar11 * 8);
      uVar5 = uVar8;
      func_0x00010c15f680(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_5 + 0x38);
      uVar7 = uVar8;
      func_0x00010bdc3540(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be72ea0(param_5);
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (undefined1 *)param_4;
      func_0x00010bdc3540(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      _objc_release(uVar8);
      if ((int)uVar5 != 0) {
        _objc_release(param_4);
        param_4 = (undefined8 *)0x0;
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  if (param_4 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    _objc_retain(param_4);
    func_0x00010c0f7fe0(0x3fb999999999999a,uVar5);
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
      func_0x00010c0f7fe0(dVar12,uVar5);
    }
  }
  __Block_object_dispose(&uStack_330,8);
  _objc_release(puStack_308);
  __Block_object_dispose(&uStack_300,8);
  __Block_object_dispose(&uStack_2e0,8);
  _objc_release(uStack_2b8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
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



/* Entry: 10bcb2a0c; end: 10bcb2fcb; -[SCServiceLoop _scheduleServicesAndNotifyObserversForItem:] */

void FUN_10bcb2a0c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
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
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_10bcb2fcc;
  uStack_1a0 = 0x10bcb2fdc;
  uStack_198 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x2020000000;
  uStack_1c8 = 0;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_10bcb2fcc;
  uStack_1f0 = 0x10bcb2fdc;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_208 = &uStack_210;
  puStack_1d8 = &uStack_1e0;
  puStack_1b8 = &uStack_1c0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_10bcb2fe4;
  puStack_238 = &UNK_110d98790;
  puStack_230 = &uStack_210;
  puStack_228 = &uStack_1c0;
  puStack_220 = &uStack_1e0;
  dStack_218 = param_1;
  puStack_1e8 = puVar1;
  func_0x00010bf97ce0(*(undefined8 *)(param_2 + 8));
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  lVar4 = puStack_208[5];
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_280;
    do {
      lVar10 = 0;
      do {
        if (*plStack_280 != lVar9) {
          _objc_enumerationMutation(lVar4);
        }
        uVar6 = *(undefined8 *)(lStack_288 + lVar10 * 8);
        uVar8 = *(undefined8 *)(param_2 + 8);
        uVar5 = uVar6;
        func_0x00010bdc3540(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar8);
        _objc_release(uVar5);
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        uVar5 = uVar6;
        func_0x00010bdc3540(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(uVar5);
        func_0x00010c15f680();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126e2e30;
        _objc_alloc();
        func_0x00010c044e60();
        uVar5 = uVar6;
        func_0x00010bf67a80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2b8 = 0xc2000000;
        pcStack_2b0 = FUN_10bcb30ac;
        puStack_2a8 = &UNK_110841f80;
        uStack_2a0 = uVar6;
        puStack_298 = puVar1;
        _objc_retain(puVar1);
        _objc_retain(uVar6);
        func_0x000107c27d8c(uVar5,&puStack_2c0);
        _objc_release(uVar5);
        _objc_release(puStack_298);
        _objc_release(uStack_2a0);
        _objc_release(puVar1);
        _objc_release(uVar6);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  lVar9 = puStack_208[5];
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar9);
      }
      uVar7 = *(undefined8 *)(lVar10 * 8);
      uVar5 = uVar7;
      func_0x00010c15f680(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + 0x38);
      uVar6 = uVar7;
      func_0x00010bdc3540(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be72ea0(param_2);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010bdc3540(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      _objc_release(uVar7);
      if ((int)uVar5 != 0) {
        _objc_release(param_4);
        param_4 = 0;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  if (param_4 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(param_4);
    func_0x00010c0f7fe0(0x3fb999999999999a,uVar5);
    _objc_release(param_4);
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
  if (puStack_1b8[5] != 0) {
    dVar12 = (double)puStack_1d8[3];
    dVar11 = 315360000.0;
    if (dVar12 < 315360000.0) {
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      _CACurrentMediaTime();
      dVar11 = (param_1 + dVar12) - dVar11;
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      func_0x00010c0f7fe0(dVar11,uVar5);
    }
  }
  __Block_object_dispose(&uStack_210,8);
  _objc_release(puStack_1e8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(uStack_198);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_210,8);
  __Block_object_dispose(&uStack_1e0,8);
  lVar3 = 8;
  __Block_object_dispose(&uStack_1c0);
  __Unwind_Resume();
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 10bcb2fcc; end: 10bcb2fe3;  */

void FUN_10bcb2fcc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bcb2fe4; end: 10bcb30ab;  */

void FUN_10bcb2fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dcd60(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = *(double *)(param_1 + 0x38);
  func_0x00010c2a1480();
  _objc_release(uVar1);
  if (dVar3 <= 0.0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),param_2,
                        param_3);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcb30ac; end: 10bcb30b7;  */

void FUN_10bcb30ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_runWithServiceTerm__11262e530,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10bcb30b8; end: 10bcb3197;  */

void FUN_10bcb30b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bdc3540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15f680(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010bdc3540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be72ea0(uVar1,param_2,2,uVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10bcb3198; end: 10bcb31b3;  */

void FUN_10bcb3198(long param_1)

{
  if (*(long *)(param_1 + 0x28) == *(long *)(*(long *)(param_1 + 0x20) + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00010be9b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__scheduleServicesAndNotifyObserv_112584760,0);
    return;
  }
  return;
}



/* Entry: 10bcb31b4; end: 10bcb3213; -[SCServiceLoop .cxx_destruct] */

void FUN_10bcb31b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb3214; end: 10bcb3257; +[SCServiceScheduleNotifier scheduleAfterSeconds:] */

void FUN_10bcb3214(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR_PTR_1126c3c40;
  dVar2 = param_1;
  _objc_alloc(PTR_PTR_1126c3c40);
  _CACurrentMediaTime();
  func_0x00010c041d20(param_1 + dVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb3258; end: 10bcb329f; -[SCServiceScheduleNotifier initWithScheduledTime:] */

void FUN_10bcb3258(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e3e0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10bcb32a0; end: 10bcb32b7; -[SCServiceScheduleNotifier waitUntil:] */

double FUN_10bcb32a0(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 <= *(double *)(param_2 + 8)) {
    dVar1 = *(double *)(param_2 + 8) - param_1;
  }
  return dVar1;
}



/* Entry: 10bcb32b8; end: 10bcb33a3;  */

void FUN_10bcb32b8(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c08fa60();
  puVar6 = (undefined *)0x0;
  if ((param_2 != 0) && (0xf < uVar1)) {
    puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_retainAutorelease(param_1);
    func_0x00010bf25f00();
    uVar2 = param_1;
    func_0x00010c08fa60(param_1);
    lVar3 = param_2;
    _objc_retainAutorelease(param_2);
    func_0x00010bf25f00();
    lVar4 = param_2;
    func_0x00010c08fa60(param_2);
    puVar5 = puVar6;
    _objc_retainAutorelease(puVar6);
    func_0x00010c0d3c60();
    _CCHmac(2,uVar1,uVar2,lVar3,lVar4,puVar5);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10bcb33a4; end: 10bcb3dbb;  */

void FUN_10bcb33a4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar7 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  if (((ulong)puVar7 & 1) == 0) {
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1;
  func_0x00010c08fa60();
  lVar4 = lVar3 + 0x10;
  _malloc();
  uStack_68 = 0;
  _objc_retainAutorelease(param_1);
  func_0x00010bf25f00();
  puVar7 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bf25f00();
  puVar5 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bf25f00();
  lVar6 = lVar4;
  FUN_10bcb57bc(lVar4,lVar3 + 0x10,&uStack_68,param_1,lVar3,puVar7,puVar5);
  if ((int)lVar6 == 0) {
    _free(lVar4);
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a20(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10bcb3dbc; end: 10bcb3de3;  */

/* WARNING: Removing unreachable block (ram,0x00010bcb4274) */
/* WARNING: Removing unreachable block (ram,0x00010bcb427c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb454c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb4554) */

void FUN_10bcb3dbc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1;
  puVar2 = param_4;
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar14 = (undefined8 *)0xc;
    func_0x000107c2b3c4(&uStack_74,0xc,&UNK_10e525a20);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_1126b4958;
    puVar2 = param_1;
    func_0x00010c08fa60();
    puVar2 = (undefined8 *)((long)puVar2 + 0x1c);
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar3;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    *puVar15 = uStack_74;
    *(undefined4 *)(puVar15 + 1) = uStack_6c;
    lVar4 = param_3;
    func_0x00010c08fa60();
    if (lVar4 == 0x10) {
      puVar2 = puVar3;
      _objc_retainAutorelease();
      iVar1 = (int)puVar2;
      func_0x00010c0d3c60();
      puVar14 = param_1;
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010ae349c4();
      iVar1 = iVar1 + 0xc;
      puVar2 = &uStack_88;
      FUN_10bcb5a7c();
      puVar15 = puVar3;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      if (iVar1 == 0) {
        puVar5 = puVar3;
        func_0x00010c08fa60();
        if (puVar5 != (undefined8 *)0x0) {
          _bzero(puVar15);
          puVar14 = puVar5;
        }
        puVar15 = (undefined8 *)0x0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      else {
        puVar5 = param_1;
        func_0x00010c08fa60();
        *(undefined8 *)((undefined *)((long)puVar15 + (long)puVar5) + 0x14) = uStack_80;
        *(undefined8 *)((undefined *)((long)puVar15 + (long)puVar5) + 0xc) = uStack_88;
        _objc_retain(puVar3);
        puVar15 = puVar3;
      }
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar14);
    _objc_retain(puVar2);
    puVar15 = (undefined8 *)0x0;
    if ((param_3 != 0) && (puVar14 != (undefined8 *)0x0)) {
      puVar15 = puVar14;
      func_0x00010c08fa60();
      if (puVar15 < (undefined8 *)0x1c) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = puVar14;
        func_0x00010c08fa60(puVar14);
        puVar3 = puVar14;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar14);
        puVar5 = puVar14;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_1126b4958;
        func_0x00010bf64b80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010c08fa60();
        if (lVar4 == 0x10) {
          puVar7 = puVar5;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          puVar8 = puVar6;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          puVar9 = puVar14;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar10 = puVar2;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar11 = puVar2;
          func_0x00010c08fa60(puVar2);
          lVar4 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bf25f00();
          puVar12 = puVar3;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar13 = puVar12;
          func_0x00010ae349c4();
          func_0x00010bcb5c4c(puVar7,(undefined *)((long)puVar15 + -0x1c),puVar8,
                              (undefined *)((long)puVar9 + 0xc),(undefined *)((long)puVar15 + -0x1c)
                              ,puVar10,puVar11,lVar4,puVar12,puVar13);
          if ((int)puVar7 == 0) {
            puVar15 = puVar5;
            _objc_retainAutorelease(puVar5);
            func_0x00010c0d3c60();
            puVar7 = puVar5;
            func_0x00010c08fa60();
            if (puVar7 != (undefined8 *)0x0) {
              _bzero(puVar15,puVar7);
            }
            puVar15 = (undefined8 *)0x0;
          }
          else {
            _objc_retain(puVar5);
            puVar15 = puVar5;
          }
        }
        else {
          puVar15 = (undefined8 *)0x0;
        }
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar14);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10bcb3de4; end: 10bcb3fab;  */

void FUN_10bcb3de4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c08fa60(param_1);
  FUN_10bcb5e3c(uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bcb3fac; end: 10bcb41bb;  */

void FUN_10bcb3fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b0 [6];
  byte bStack_aa;
  byte bStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retainAutorelease(param_3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bdc3520();
  uVar2 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0x1032547698badcfe;
  uStack_a0 = 0xefcdab8967452301;
  func_0x000107c2b4a0(&uStack_a0,uVar1,uVar2);
  func_0x000107c2b4a4(auStack_b0,&uStack_a0);
  bStack_aa = bStack_aa & 0xf | 0x30;
  bStack_a8 = bStack_a8 & 0x3f | 0x80;
  _uuid_unparse_lower(auStack_b0,&uStack_a0);
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = &uStack_a0;
  func_0x00010c057e20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x00010bf64920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar5 = puVar3;
    func_0x00010c08fa60(puVar3);
    func_0x000107c31280(puVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb41bc; end: 10bcb4457;  */

/* WARNING: Removing unreachable block (ram,0x00010bcb454c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb4554) */

void FUN_10bcb41bc(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_2;
  puVar1 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 == 0) {
    puVar14 = (undefined8 *)0x0;
    goto LAB_10bcb4400;
  }
  puVar13 = (undefined8 *)0xc;
  func_0x000107c2b3c4(&uStack_74,0xc,&UNK_10e525a20);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_1126b4958;
  puVar1 = param_2;
  func_0x00010c08fa60();
  puVar1 = (undefined8 *)((long)puVar1 + 0x1c);
  func_0x00010bf64b80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  *puVar14 = uStack_74;
  *(undefined4 *)(puVar14 + 1) = uStack_6c;
  lVar3 = param_1;
  func_0x00010c08fa60();
  if ((param_4 & 1) == 0) {
    if (lVar3 != 0x10) goto LAB_10bcb43cc;
    puVar1 = puVar2;
    _objc_retainAutorelease();
    iStack_90 = (int)puVar1;
    func_0x00010c0d3c60();
    puVar13 = param_2;
    func_0x00010c08fa60();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c08fa60();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c08fa60();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010ae349c4();
LAB_10bcb4360:
    iStack_90 = iStack_90 + 0xc;
    puVar1 = &uStack_88;
    FUN_10bcb5a7c();
    puVar14 = puVar2;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    if (iStack_90 == 0) {
      puVar4 = puVar2;
      func_0x00010c08fa60();
      if (puVar4 != (undefined8 *)0x0) {
        _bzero(puVar14);
        puVar13 = puVar4;
      }
      puVar14 = (undefined8 *)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      puVar4 = param_2;
      func_0x00010c08fa60();
      *(undefined8 *)((undefined *)((long)puVar14 + (long)puVar4) + 0x14) = uStack_80;
      *(undefined8 *)((undefined *)((long)puVar14 + (long)puVar4) + 0xc) = uStack_88;
      _objc_retain(puVar2);
      puVar14 = puVar2;
    }
  }
  else {
    if (lVar3 == 0x20) {
      puVar1 = puVar2;
      _objc_retainAutorelease();
      iStack_90 = (int)puVar1;
      func_0x00010c0d3c60();
      puVar13 = param_2;
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010ae34b64();
      goto LAB_10bcb4360;
    }
LAB_10bcb43cc:
    puVar14 = (undefined8 *)0x0;
  }
  _objc_release(puVar2);
LAB_10bcb4400:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar13);
    _objc_retain(puVar1);
    puVar14 = (undefined8 *)0x0;
    if ((param_1 != 0) && (puVar13 != (undefined8 *)0x0)) {
      puVar14 = puVar13;
      func_0x00010c08fa60();
      if (puVar14 < (undefined8 *)0x1c) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        puVar14 = puVar13;
        func_0x00010c08fa60(puVar13);
        puVar2 = puVar13;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar13);
        puVar4 = puVar13;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0d3c80();
        _objc_release(puVar4);
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_1126b4958;
        func_0x00010bf64b80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c08fa60();
        if (lVar3 == 0x10) {
          puVar6 = puVar4;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          puVar7 = puVar5;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          puVar8 = puVar13;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar9 = puVar1;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar10 = puVar1;
          func_0x00010c08fa60(puVar1);
          lVar3 = param_1;
          _objc_retainAutorelease(param_1);
          func_0x00010bf25f00();
          puVar11 = puVar2;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar12 = puVar11;
          func_0x00010ae349c4();
          func_0x00010bcb5c4c(puVar6,(undefined *)((long)puVar14 + -0x1c),puVar7,
                              (undefined *)((long)puVar8 + 0xc),(undefined *)((long)puVar14 + -0x1c)
                              ,puVar9,puVar10,lVar3,puVar11,puVar12);
          if ((int)puVar6 == 0) {
            puVar14 = puVar4;
            _objc_retainAutorelease(puVar4);
            func_0x00010c0d3c60();
            puVar6 = puVar4;
            func_0x00010c08fa60();
            if (puVar6 != (undefined8 *)0x0) {
              _bzero(puVar14,puVar6);
            }
            puVar14 = (undefined8 *)0x0;
          }
          else {
            _objc_retain(puVar4);
            puVar14 = puVar4;
          }
        }
        else {
          puVar14 = (undefined8 *)0x0;
        }
        _objc_release(puVar4);
        _objc_release(puVar5);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar1);
    _objc_release(puVar13);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10bcb4458; end: 10bcb445f;  */

/* WARNING: Removing unreachable block (ram,0x00010bcb454c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb4554) */

void FUN_10bcb4458(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = param_2;
    func_0x00010c08fa60();
    if (uVar1 < 0x1c) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar1 = param_2;
      func_0x00010c08fa60(param_2);
      uVar2 = param_2;
      func_0x00010c25eac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(param_2);
      uVar3 = param_2;
      func_0x00010c25eac0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d3c80();
      _objc_release(uVar3);
      puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c08fa60();
      if (lVar6 == 0x10) {
        puVar13 = puVar5;
        _objc_retainAutorelease();
        func_0x00010c0d3c60();
        uVar3 = uVar4;
        _objc_retainAutorelease();
        func_0x00010c0d3c60();
        uVar7 = param_2;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        uVar8 = param_3;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        uVar9 = param_3;
        func_0x00010c08fa60(param_3);
        lVar6 = param_1;
        _objc_retainAutorelease(param_1);
        func_0x00010bf25f00();
        uVar10 = uVar2;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        uVar11 = uVar10;
        func_0x00010ae349c4();
        func_0x00010bcb5c4c(puVar13,uVar1 - 0x1c,uVar3,uVar7 + 0xc,uVar1 - 0x1c,uVar8,uVar9,lVar6,
                            uVar10,uVar11);
        if ((int)puVar13 == 0) {
          puVar13 = puVar5;
          _objc_retainAutorelease(puVar5);
          func_0x00010c0d3c60();
          puVar12 = puVar5;
          func_0x00010c08fa60();
          if (puVar12 != (undefined *)0x0) {
            _bzero(puVar13,puVar12);
          }
          puVar13 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar5);
          puVar13 = puVar5;
        }
      }
      else {
        puVar13 = (undefined *)0x0;
      }
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10bcb4460; end: 10bcb4703;  */

void FUN_10bcb4460(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_10bcb46c8;
  uVar1 = param_2;
  func_0x00010c08fa60();
  if (uVar1 < 0x1c) {
    puVar11 = (undefined *)0x0;
    goto LAB_10bcb46c8;
  }
  uVar1 = param_2;
  func_0x00010c08fa60(param_2);
  uVar2 = param_2;
  func_0x00010c25eac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_2);
  uVar3 = param_2;
  func_0x00010c25eac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08fa60();
  uStack_68 = puVar5;
  uStack_70 = uVar4;
  uStack_78 = param_2;
  uStack_80 = param_3;
  uVar7 = param_3;
  lVar8 = param_1;
  uVar3 = uVar2;
  if ((param_4 & 1) == 0) {
    if (lVar6 != 0x10) goto LAB_10bcb467c;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c08fa60(param_3);
    _objc_retainAutorelease(param_1);
    func_0x00010bf25f00();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar9 = uVar3;
    func_0x00010ae349c4();
LAB_10bcb4640:
    func_0x00010bcb5c4c(uStack_68,uVar1 - 0x1c,uStack_70,uStack_78 + 0xc,uVar1 - 0x1c,uStack_80,
                        uVar7,lVar8,uVar3,uVar9);
    if ((int)uStack_68 == 0) {
      puVar11 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010c0d3c60();
      puVar10 = puVar5;
      func_0x00010c08fa60();
      if (puVar10 != (undefined *)0x0) {
        _bzero(puVar11,puVar10);
      }
      puVar11 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar5);
      puVar11 = puVar5;
    }
  }
  else {
    if (lVar6 == 0x20) {
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c08fa60(param_3);
      _objc_retainAutorelease(param_1);
      func_0x00010bf25f00();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uVar9 = uVar3;
      func_0x00010ae34b64();
      goto LAB_10bcb4640;
    }
LAB_10bcb467c:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_10bcb46c8:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10bcb4704; end: 10bcb4713;  */

/* WARNING: Removing unreachable block (ram,0x00010bcb42f0) */
/* WARNING: Removing unreachable block (ram,0x00010bcb42f8) */
/* WARNING: Removing unreachable block (ram,0x00010bcb454c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb4554) */

void FUN_10bcb4704(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_2;
  puVar2 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 == 0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar14 = (undefined8 *)0xc;
    func_0x000107c2b3c4(&uStack_74,0xc,&UNK_10e525a20);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_1126b4958;
    puVar2 = param_2;
    func_0x00010c08fa60();
    puVar2 = (undefined8 *)((long)puVar2 + 0x1c);
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar3;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    *puVar15 = uStack_74;
    *(undefined4 *)(puVar15 + 1) = uStack_6c;
    lVar4 = param_1;
    func_0x00010c08fa60();
    if (lVar4 == 0x20) {
      puVar2 = puVar3;
      _objc_retainAutorelease();
      iVar1 = (int)puVar2;
      func_0x00010c0d3c60();
      puVar14 = param_2;
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c08fa60();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010ae34b64();
      iVar1 = iVar1 + 0xc;
      puVar2 = &uStack_88;
      FUN_10bcb5a7c();
      puVar15 = puVar3;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      if (iVar1 == 0) {
        puVar5 = puVar3;
        func_0x00010c08fa60();
        if (puVar5 != (undefined8 *)0x0) {
          _bzero(puVar15);
          puVar14 = puVar5;
        }
        puVar15 = (undefined8 *)0x0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      else {
        puVar5 = param_2;
        func_0x00010c08fa60();
        *(undefined8 *)((undefined *)((long)puVar15 + (long)puVar5) + 0x14) = uStack_80;
        *(undefined8 *)((undefined *)((long)puVar15 + (long)puVar5) + 0xc) = uStack_88;
        _objc_retain(puVar3);
        puVar15 = puVar3;
      }
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar14);
    _objc_retain(puVar2);
    puVar15 = (undefined8 *)0x0;
    if ((param_1 != 0) && (puVar14 != (undefined8 *)0x0)) {
      puVar15 = puVar14;
      func_0x00010c08fa60();
      if (puVar15 < (undefined8 *)0x1c) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = puVar14;
        func_0x00010c08fa60(puVar14);
        puVar3 = puVar14;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar14);
        puVar5 = puVar14;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableData_1126b4958;
        func_0x00010bf64b80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010c08fa60();
        if (lVar4 == 0x10) {
          puVar7 = puVar5;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          puVar8 = puVar6;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          puVar9 = puVar14;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar10 = puVar2;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar11 = puVar2;
          func_0x00010c08fa60(puVar2);
          lVar4 = param_1;
          _objc_retainAutorelease(param_1);
          func_0x00010bf25f00();
          puVar12 = puVar3;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar13 = puVar12;
          func_0x00010ae349c4();
          func_0x00010bcb5c4c(puVar7,(undefined *)((long)puVar15 + -0x1c),puVar8,
                              (undefined *)((long)puVar9 + 0xc),(undefined *)((long)puVar15 + -0x1c)
                              ,puVar10,puVar11,lVar4,puVar12,puVar13);
          if ((int)puVar7 == 0) {
            puVar15 = puVar5;
            _objc_retainAutorelease(puVar5);
            func_0x00010c0d3c60();
            puVar7 = puVar5;
            func_0x00010c08fa60();
            if (puVar7 != (undefined8 *)0x0) {
              _bzero(puVar15,puVar7);
            }
            puVar15 = (undefined8 *)0x0;
          }
          else {
            _objc_retain(puVar5);
            puVar15 = puVar5;
          }
        }
        else {
          puVar15 = (undefined8 *)0x0;
        }
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar14);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10bcb4714; end: 10bcb487f;  */

void FUN_10bcb4714(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_10bcb4880();
  lVar2 = lVar1;
  FUN_10bcb4990();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar3 = param_2;
    func_0x00010c08fa60();
    FUN_10bcb4a84();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar4 = param_2;
      FUN_10bcb4c28(param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
        func_0x00010bf64b00(PTR__OBJC_CLASS___NSMutableData_1126b4958);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0();
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10bcb4880; end: 10bcb498f;  */

undefined1  [16] FUN_10bcb4880(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  lVar3 = param_1;
  if (lVar1 == 0x20) {
    func_0x00010bf51e00(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcb62c0(param_1,puVar2,0,0x20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  lVar1 = lVar3;
  func_0x00010c25eac0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25eac0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 10bcb4990; end: 10bcb4a83;  */

void FUN_10bcb4990(ulong param_1,undefined *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (uVar1 < 0x10) {
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      puVar2 = param_2;
      func_0x00010bf51e00(param_2);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b00(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0();
    }
    uVar1 = param_1;
    FUN_10bcb32b8(param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10bcb4a84; end: 10bcb4c27;  */

void FUN_10bcb4a84(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010c08fa60(param_3);
  func_0x00010bf64b80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_3);
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  func_0x00010c130cc0(puVar3);
  lVar6 = 0;
  do {
    func_0x00010c130cc0(puVar2);
    func_0x00010c08fa60(param_3);
    _objc_retainAutorelease(puVar2);
    func_0x00010bf25f00();
    func_0x00010c130cc0(puVar3);
    uVar4 = param_2;
    FUN_10bcb32b8(param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ae0(puVar1);
    _objc_release(uVar4);
    lVar6 = lVar6 + 1;
  } while ((param_1 >> 5) + 1 != lVar6);
  puVar5 = puVar1;
  func_0x00010c25eac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10bcb4c28; end: 10bcb4d2b;  */

void FUN_10bcb4c28(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c08fa60();
  uVar2 = param_2;
  func_0x00010c08fa60();
  puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  if (uVar1 == uVar2) {
    func_0x00010c08fa60(param_1);
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    uVar1 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar2 = param_2;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar6 = param_1;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        puVar3[uVar6] = *(byte *)(uVar2 + uVar6) ^ *(byte *)(uVar1 + uVar6);
        uVar6 = uVar6 + 1;
        uVar4 = param_1;
        func_0x00010c08fa60();
      } while (uVar6 < uVar4);
    }
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10bcb4d2c; end: 10bcb4f1b;  */

void FUN_10bcb4d2c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_10bcb4880();
  lVar2 = param_2;
  func_0x00010c25eac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    func_0x00010c08fa60(param_2);
    lVar3 = param_2;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    FUN_10bcb4a84();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar8 = 0;
    }
    else {
      lVar5 = lVar3;
      FUN_10bcb4c28(lVar3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        lVar6 = lVar1;
        FUN_10bcb4990(lVar1,lVar5,param_3);
        _objc_retainAutoreleasedReturnValue();
        if ((lVar6 == 0) || (lVar8 = lVar6, func_0x00010c071cc0(), (int)lVar8 == 0)) {
          lVar8 = 0;
        }
        else {
          _objc_retain(lVar5);
          lVar8 = lVar5;
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10bcb4f1c; end: 10bcb50a7;  */

undefined8 * FUN_10bcb4f1c(ulong param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_10bcb5060:
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_4;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if ((lVar3 == 0) || (uVar4 = param_1, func_0x00010c08fa60(), uVar4 == 0)) {
      _objc_release(lVar2);
      goto LAB_10bcb5060;
    }
    uVar4 = param_2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (((uVar4 != 0) && (uVar4 = param_1, func_0x00010c08fa60(), 0x1f < uVar4)) &&
       (uVar4 = param_2, func_0x00010c08fa60(), 0xf < uVar4)) {
      puVar5 = (undefined8 *)0x98;
      _malloc();
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0x90;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[10] = 0;
        puVar5[9] = 0;
        puVar5[0xc] = 0;
        puVar5[0xb] = 0;
        puVar5[0xe] = 0;
        puVar5[0xd] = 0;
        puVar5[0x10] = 0;
        puVar5[0xf] = 0;
        puVar5[0x12] = 0;
        puVar5[0x11] = 0;
        puVar6 = puVar5 + 1;
        puVar5[2] = 0;
        *puVar6 = 0;
        puVar5 = puVar6;
        FUN_10bcb50a8(puVar6,param_1,param_2,param_3,param_4,1);
        func_0x00010ae33ff8(puVar6);
        func_0x000107c2b534(puVar6);
        goto LAB_10bcb506c;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_10bcb506c:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar5;
}



/* Entry: 10bcb50a8; end: 10bcb554b;  */

undefined8
FUN_10bcb50a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_6c [4];
  long lStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar12 = param_5;
  _objc_retain(param_5);
  func_0x00010ae34ac8();
  uVar2 = param_2;
  _objc_retainAutorelease(param_2);
  func_0x00010bf25f00();
  uVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  uVar4 = param_1;
  func_0x00010ae340b8(param_1,uVar12,0,uVar2,uVar3,param_6);
  puVar5 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
  if ((int)uVar4 != 1) {
    uVar12 = 0;
    goto LAB_10bcb54ec;
  }
  uVar12 = param_4;
  func_0x00010c0f5800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaccc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  if (puVar5 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x00010c022640();
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c0f5800(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfacbe0();
    _objc_release(uVar12);
    _objc_release(puVar7);
    if ((int)puVar8 == 0) {
LAB_10bcb5254:
      puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_5;
      func_0x00010c0f5800(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf561e0();
      _objc_release(uVar12);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010bf3dba0(puVar5);
        goto LAB_10bcb53b8;
      }
      uVar12 = param_5;
      func_0x00010c0f5800(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfacd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      if (puVar7 == (undefined *)0x0) {
        func_0x00010bf3dba0(puVar5);
LAB_10bcb54d0:
        uVar12 = 0;
      }
      else {
        while( true ) {
          puVar8 = puVar5;
          func_0x00010c121360();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c08fa60();
          if (puVar9 == (undefined *)0x0) break;
          puVar9 = puVar6;
          _objc_retainAutorelease(puVar6);
          func_0x00010c0d3c60();
          puVar10 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bf25f00();
          puVar11 = puVar8;
          func_0x00010c08fa60(puVar8);
          uVar12 = param_1;
          func_0x00010ae34908(param_1,puVar9,auStack_6c,puVar10,puVar11);
          puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
          if ((int)uVar12 == 0) {
            _objc_release(puVar8);
            goto LAB_10bcb546c;
          }
          _objc_retainAutorelease(puVar6);
          func_0x00010c0d3c60();
          func_0x00010bf64a00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bda00(puVar7);
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        _objc_release(puVar8);
        puVar8 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010c0d3c60();
        func_0x00010ae34918(param_1,puVar8,auStack_6c);
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        if ((int)param_1 == 0) {
LAB_10bcb546c:
          func_0x00010bf3dba0(puVar5);
          func_0x00010bf3dba0(puVar7);
          puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = param_5;
          func_0x00010c0f5800(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12cc40(puVar8);
          _objc_release(uVar12);
          _objc_release(puVar8);
          goto LAB_10bcb54d0;
        }
        _objc_retainAutorelease(puVar6);
        func_0x00010c0d3c60();
        func_0x00010bf64a00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bda00(puVar7);
        _objc_release(puVar8);
        func_0x00010bf3dba0(puVar5);
        func_0x00010bf3dba0(puVar7);
        uVar12 = 1;
      }
      _objc_release(puVar7);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      lStack_68 = 0;
      func_0x00010c12cc60();
      lVar1 = lStack_68;
      _objc_retain(lStack_68);
      _objc_release(puVar7);
      if (lVar1 == 0) goto LAB_10bcb5254;
      func_0x00010bf3dba0(puVar5);
      _objc_release(lVar1);
LAB_10bcb53b8:
      uVar12 = 0;
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
LAB_10bcb54ec:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar12;
}



/* Entry: 10bcb554c; end: 10bcb56d7;  */

undefined8 * FUN_10bcb554c(ulong param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_10bcb5690:
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_4;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if ((lVar3 == 0) || (uVar4 = param_1, func_0x00010c08fa60(), uVar4 == 0)) {
      _objc_release(lVar2);
      goto LAB_10bcb5690;
    }
    uVar4 = param_2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (((uVar4 != 0) && (uVar4 = param_1, func_0x00010c08fa60(), 0x1f < uVar4)) &&
       (uVar4 = param_2, func_0x00010c08fa60(), 0xf < uVar4)) {
      puVar5 = (undefined8 *)0x98;
      _malloc();
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0x90;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[10] = 0;
        puVar5[9] = 0;
        puVar5[0xc] = 0;
        puVar5[0xb] = 0;
        puVar5[0xe] = 0;
        puVar5[0xd] = 0;
        puVar5[0x10] = 0;
        puVar5[0xf] = 0;
        puVar5[0x12] = 0;
        puVar5[0x11] = 0;
        puVar6 = puVar5 + 1;
        puVar5[2] = 0;
        *puVar6 = 0;
        puVar5 = puVar6;
        FUN_10bcb50a8(puVar6,param_1,param_2,param_3,param_4,0);
        func_0x00010ae33ff8(puVar6);
        func_0x000107c2b534(puVar6);
        goto LAB_10bcb569c;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_10bcb569c:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar5;
}



/* Entry: 10bcb56d8; end: 10bcb57bb;  */

void FUN_10bcb56d8(ulong param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_40;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  _objc_retain();
  uStack_31 = 0;
  uVar5 = param_1;
  func_0x00010c08fa60();
  puVar1 = (undefined1 *)(uVar5 >> 1);
  _malloc();
  uVar5 = param_1;
  func_0x00010c08fa60();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_1;
      func_0x00010bf35920();
      uStack_33 = (undefined1)uVar2;
      uVar2 = param_1;
      func_0x00010bf35920();
      uStack_32 = (undefined1)uVar2;
      uStack_40 = 0;
      puVar3 = &uStack_33;
      _strtol(puVar3,&uStack_40,0x10);
      *puVar1 = (char)puVar3;
      uVar2 = param_1;
      func_0x00010c08fa60();
      uVar5 = uVar5 + 2;
      puVar1 = puVar1 + 1;
    } while (uVar5 < uVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c08fa60(param_1);
  func_0x00010bf64a40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10bcb57bc; end: 10bcb5a7b;  */

undefined8
FUN_10bcb57bc(long param_1,ulong param_2,long *param_3,long param_4,ulong param_5,long param_6,
             long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iStack_54;
  
  if (param_2 < 0x10) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  if (param_2 - 0x10 < param_5) {
    return 0;
  }
  if (0x7ffffffe < param_5) {
    return 0;
  }
  puVar1 = (undefined8 *)0x98;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  *puVar1 = 0x90;
  puVar2 = puVar1;
  func_0x00010ae34ac8();
  puVar3 = puVar1 + 1;
  puVar1[2] = 0;
  *puVar3 = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1 = puVar3;
  func_0x00010ae340b8(puVar3,puVar2);
  if ((int)puVar1 == 0) {
    func_0x00010ae33ff8(puVar3);
    func_0x000107c2b534(puVar3);
    return 0;
  }
  puVar1 = puVar3;
  func_0x00010ae3433c(puVar3,param_1,&iStack_54,param_4,param_5);
  if ((int)puVar1 == 1) {
    *param_3 = (long)iStack_54;
    puVar1 = puVar3;
    func_0x00010ae34534(puVar3,param_1 + iStack_54,&iStack_54);
    if ((int)puVar1 == 1) {
      *param_3 = *param_3 + (long)iStack_54;
      uVar4 = 1;
      goto LAB_10bcb58d4;
    }
  }
  uVar4 = 0;
LAB_10bcb58d4:
  func_0x00010ae33ff8(puVar3);
  func_0x000107c2b534(puVar3);
  return uVar4;
}



/* Entry: 10bcb5a7c; end: 10bcb5e3b;  */

bool FUN_10bcb5a7c(long param_1,ulong param_2,long param_3,long param_4,ulong param_5,long param_6,
                  ulong param_7,long param_8,long param_9,long param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iStack_64;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  if (param_8 == 0) {
    return false;
  }
  if (param_9 == 0) {
    return false;
  }
  if (param_10 == 0) {
    return false;
  }
  if ((param_4 == 0) && (param_5 != 0)) {
    return false;
  }
  if (0x7ffffffe < param_2) {
    return false;
  }
  if (0x7ffffffe < param_5) {
    return false;
  }
  if (0x7ffffffe < param_7) {
    return false;
  }
  if ((param_6 == 0) && (param_7 != 0)) {
    return false;
  }
  puVar1 = (undefined8 *)0x98;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    return false;
  }
  *puVar1 = 0x90;
  puVar3 = puVar1 + 1;
  puVar1[2] = 0;
  *puVar3 = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1 = puVar3;
  func_0x00010ae340b8(puVar3,param_10);
  if (((int)puVar1 != 0) &&
     ((iStack_64 = 0, param_6 == 0 ||
      (puVar1 = puVar3, func_0x00010ae3433c(puVar3,0,&iStack_64,param_6,param_7), (int)puVar1 == 1))
     )) {
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      puVar1 = puVar3;
      func_0x00010ae3433c(puVar3,param_1,&iStack_64,param_4,param_5);
      if ((int)puVar1 != 1) goto LAB_10bcb5c38;
      lVar2 = (long)iStack_64;
    }
    puVar1 = puVar3;
    func_0x00010ae34534(puVar3,param_1 + lVar2,&iStack_64);
    if ((int)puVar1 == 1) {
      puVar1 = puVar3;
      func_0x00010ae342a8(puVar3,0x10,0x10,param_3);
      func_0x00010ae33ff8(puVar3);
      func_0x000107c2b534(puVar3);
      return (int)puVar1 == 1;
    }
  }
LAB_10bcb5c38:
  func_0x00010ae33ff8(puVar3);
  func_0x000107c2b534(puVar3);
  return false;
}



/* Entry: 10bcb5e3c; end: 10bcb5ed3;  */

/* WARNING: Possible PIC construction at 0x00010bcb6030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcb63d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcb6034) */
/* WARNING: Removing unreachable block (ram,0x00010bcb609c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb6078) */
/* WARNING: Removing unreachable block (ram,0x00010bcb63dc) */

void FUN_10bcb5e3c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  int iVar12;
  undefined **ppuVar13;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 **ppuVar14;
  undefined8 uVar15;
  undefined1 auStack_150 [12];
  int iStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined *apuStack_90 [2];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long lStack_18;
  
  ppuVar8 = apuStack_90;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0x1032547698badcfe;
  puStack_80 = (undefined *)0xefcdab8967452301;
  func_0x000107c2b4a0(&puStack_80,param_1,param_2);
  ppuVar9 = &puStack_80;
  func_0x000107c2b4a4(apuStack_90);
  lVar11 = 0x10;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_98 = 0x10bcb5ed4;
  ppuVar14 = &puStack_a0;
  uStack_f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar9);
  ppuVar13 = ppuVar3;
  _objc_retain();
  if (ppuVar9 == (undefined **)0x0) {
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar13;
    if (ppuVar3 != (undefined **)0x0) goto LAB_10bcb5f44;
LAB_10bcb5ff8:
    ppuVar13 = (undefined **)0x0;
  }
  else {
    ppuVar4 = ppuVar9;
    if (ppuVar3 == (undefined **)0x0) goto LAB_10bcb5ff8;
LAB_10bcb5f44:
    iStack_144 = 0;
    func_0x000107c2b428();
    unaff_x25 = ppuVar4;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    unaff_x26 = ppuVar4;
    func_0x00010c08fa60();
    unaff_x27 = ppuVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    ppuVar10 = ppuVar3;
    func_0x00010c08fa60(ppuVar3);
    func_0x000107c2b490(ppuVar13,unaff_x25,unaff_x26,unaff_x27,ppuVar10,&uStack_140,&iStack_144);
    if ((ppuVar13 == (undefined **)0x0) || (iStack_144 != 0x20)) {
      ppuVar13 = (undefined **)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
    }
    else {
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  uVar15 = 0x10bcb6034;
  puVar2 = auStack_150;
  while( true ) {
    *(undefined ***)(puVar2 + -0x60) = unaff_x28;
    *(undefined ***)(puVar2 + -0x58) = unaff_x27;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = unaff_x25;
    *(undefined ***)(puVar2 + -0x40) = ppuVar13;
    *(undefined ***)(puVar2 + -0x38) = ppuVar4;
    *(long *)(puVar2 + -0x30) = lVar11;
    *(undefined ***)(puVar2 + -0x28) = ppuVar8;
    *(undefined ***)(puVar2 + -0x20) = ppuVar9;
    *(undefined ***)(puVar2 + -0x18) = ppuVar3;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar14;
    *(undefined8 *)(puVar2 + -8) = uVar15;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar9 = ppuVar8;
    _objc_retain();
    _objc_retain(ppuVar8);
    unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    iVar12 = (int)lVar11;
    if (0 < iVar12) {
      unaff_x27 = (undefined **)(ulong)(iVar12 + 0x1fU >> 5);
      unaff_x28 = (undefined **)0x1;
      ppuVar3 = ppuVar4;
      do {
        ppuVar9 = ppuVar13;
        _objc_retainAutorelease(ppuVar13);
        func_0x00010bf25f00();
        ppuVar4 = ppuVar13;
        func_0x00010c08fa60(ppuVar13);
        _CCHmacInit(puVar2 + -0x210,2,ppuVar9,ppuVar4);
        ppuVar9 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bf25f00();
        ppuVar4 = ppuVar3;
        func_0x00010c08fa60(ppuVar3);
        _CCHmacUpdate(puVar2 + -0x210,ppuVar9,ppuVar4);
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar9 = ppuVar8;
          _objc_retainAutorelease(ppuVar8);
          func_0x00010bf25f00();
          ppuVar4 = ppuVar8;
          func_0x00010c08fa60(ppuVar8);
          _CCHmacUpdate(puVar2 + -0x210,ppuVar9,ppuVar4);
        }
        puVar2[-0x211] = (char)unaff_x28;
        _CCHmacUpdate(puVar2 + -0x210,puVar2 + -0x211,1);
        ppuVar9 = (undefined **)(puVar2 + -0x90);
        _CCHmacFinal(puVar2 + -0x210);
        unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar5);
        ppuVar4 = unaff_x25;
        func_0x00010bf51e00();
        _objc_release(ppuVar3);
        _objc_release(unaff_x25);
        unaff_x28 = (undefined **)(ulong)((int)unaff_x28 + 1);
        uVar1 = (int)unaff_x27 - 1;
        unaff_x27 = (undefined **)(ulong)uVar1;
        ppuVar3 = ppuVar4;
      } while (uVar1 != 0);
    }
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64b00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)iVar12;
    ppuVar10 = (undefined **)0x0;
    puVar7 = puVar6;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar8);
    ppuVar3 = ppuVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70)) break;
    ___stack_chk_fail();
    *(undefined ***)(puVar2 + -0x280) = unaff_x28;
    *(undefined ***)(puVar2 + -0x278) = unaff_x27;
    *(undefined ***)(puVar2 + -0x270) = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    *(undefined ***)(puVar2 + -0x268) = unaff_x25;
    *(undefined ***)(puVar2 + -0x260) = ppuVar4;
    *(undefined **)(puVar2 + -600) = puVar6;
    *(undefined **)(puVar2 + -0x250) = puVar5;
    *(undefined **)(puVar2 + -0x248) = puVar7;
    *(undefined ***)(puVar2 + -0x240) = ppuVar8;
    *(undefined ***)(puVar2 + -0x238) = ppuVar13;
    *(undefined1 **)(puVar2 + -0x230) = puVar2 + -0x10;
    *(undefined8 *)(puVar2 + -0x228) = 0x10bcb62c0;
    ppuVar14 = (undefined1 **)(puVar2 + -0x230);
    _objc_retain();
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar10);
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar3);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 != (undefined **)0x0) goto LAB_10bcb6320;
LAB_10bcb63b8:
      ppuVar13 = (undefined **)0x0;
    }
    else {
      ppuVar4 = ppuVar9;
      if (ppuVar3 == (undefined **)0x0) goto LAB_10bcb63b8;
LAB_10bcb6320:
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar4;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      unaff_x26 = ppuVar4;
      func_0x00010c08fa60();
      unaff_x27 = ppuVar3;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      unaff_x28 = ppuVar3;
      func_0x00010c08fa60();
      ppuVar8 = ppuVar13;
      _objc_retainAutorelease(ppuVar13);
      func_0x00010c0d3c60();
      _CCHmac(2,unaff_x25,unaff_x26,unaff_x27,unaff_x28,ppuVar8);
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    uVar15 = 0x10bcb63dc;
    puVar2 = puVar2 + -0x280;
    ppuVar8 = ppuVar10;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb5ed4; end: 10bcb6427;  */

/* WARNING: Possible PIC construction at 0x00010bcb6030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcb63d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcb6034) */
/* WARNING: Removing unreachable block (ram,0x00010bcb609c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb6078) */
/* WARNING: Removing unreachable block (ram,0x00010bcb63dc) */

void FUN_10bcb5ed4(undefined **param_1,undefined **param_2,undefined **param_3,long param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_c0 [12];
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar11 = &stack0xfffffffffffffff0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  ppuVar10 = param_1;
  _objc_retain();
  ppuVar3 = param_2;
  if (param_2 == (undefined **)0x0) {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar10;
  }
  if (param_1 == (undefined **)0x0) {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    iStack_b4 = 0;
    func_0x000107c2b428();
    unaff_x25 = ppuVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    unaff_x26 = ppuVar3;
    func_0x00010c08fa60();
    unaff_x27 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    ppuVar8 = param_1;
    func_0x00010c08fa60(param_1);
    func_0x000107c2b490(ppuVar10,unaff_x25,unaff_x26,unaff_x27,ppuVar8,&uStack_b0,&iStack_b4);
    if ((ppuVar10 == (undefined **)0x0) || (iStack_b4 != 0x20)) {
      ppuVar10 = (undefined **)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_1);
  _objc_release(ppuVar3);
  uVar12 = 0x10bcb6034;
  puVar2 = auStack_c0;
  do {
    *(undefined ***)(puVar2 + -0x60) = unaff_x28;
    *(undefined ***)(puVar2 + -0x58) = unaff_x27;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = unaff_x25;
    *(undefined ***)(puVar2 + -0x40) = ppuVar10;
    *(undefined ***)(puVar2 + -0x38) = ppuVar3;
    *(long *)(puVar2 + -0x30) = param_4;
    *(undefined ***)(puVar2 + -0x28) = param_3;
    *(undefined ***)(puVar2 + -0x20) = param_2;
    *(undefined ***)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar11;
    *(undefined8 *)(puVar2 + -8) = uVar12;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_2 = param_3;
    _objc_retain();
    _objc_retain(param_3);
    unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    iVar9 = (int)param_4;
    if (0 < iVar9) {
      unaff_x27 = (undefined **)(ulong)(iVar9 + 0x1fU >> 5);
      unaff_x28 = (undefined **)0x1;
      ppuVar8 = ppuVar3;
      do {
        ppuVar3 = ppuVar10;
        _objc_retainAutorelease(ppuVar10);
        func_0x00010bf25f00();
        ppuVar5 = ppuVar10;
        func_0x00010c08fa60(ppuVar10);
        _CCHmacInit(puVar2 + -0x210,2,ppuVar3,ppuVar5);
        ppuVar3 = ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bf25f00();
        ppuVar5 = ppuVar8;
        func_0x00010c08fa60(ppuVar8);
        _CCHmacUpdate(puVar2 + -0x210,ppuVar3,ppuVar5);
        if (param_3 != (undefined **)0x0) {
          ppuVar3 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bf25f00();
          ppuVar5 = param_3;
          func_0x00010c08fa60(param_3);
          _CCHmacUpdate(puVar2 + -0x210,ppuVar3,ppuVar5);
        }
        puVar2[-0x211] = (char)unaff_x28;
        _CCHmacUpdate(puVar2 + -0x210,puVar2 + -0x211,1);
        param_2 = (undefined **)(puVar2 + -0x90);
        _CCHmacFinal(puVar2 + -0x210);
        unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar4);
        ppuVar3 = unaff_x25;
        func_0x00010bf51e00();
        _objc_release(ppuVar8);
        _objc_release(unaff_x25);
        unaff_x28 = (undefined **)(ulong)((int)unaff_x28 + 1);
        uVar1 = (int)unaff_x27 - 1;
        unaff_x27 = (undefined **)(ulong)uVar1;
        ppuVar8 = ppuVar3;
      } while (uVar1 != 0);
    }
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64b00();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (long)iVar9;
    ppuVar8 = (undefined **)0x0;
    puVar7 = puVar6;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(param_3);
    param_1 = ppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    ___stack_chk_fail();
    *(undefined ***)(puVar2 + -0x280) = unaff_x28;
    *(undefined ***)(puVar2 + -0x278) = unaff_x27;
    *(undefined ***)(puVar2 + -0x270) = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    *(undefined ***)(puVar2 + -0x268) = unaff_x25;
    *(undefined ***)(puVar2 + -0x260) = ppuVar3;
    *(undefined **)(puVar2 + -600) = puVar6;
    *(undefined **)(puVar2 + -0x250) = puVar4;
    *(undefined **)(puVar2 + -0x248) = puVar7;
    *(undefined ***)(puVar2 + -0x240) = param_3;
    *(undefined ***)(puVar2 + -0x238) = ppuVar10;
    *(undefined1 **)(puVar2 + -0x230) = puVar2 + -0x10;
    *(undefined8 *)(puVar2 + -0x228) = 0x10bcb62c0;
    puVar11 = puVar2 + -0x230;
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(ppuVar8);
    _objc_retain(param_2);
    _objc_retain(param_1);
    if (param_2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == (undefined **)0x0) goto LAB_10bcb63b8;
LAB_10bcb6320:
      ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar3;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      unaff_x26 = ppuVar3;
      func_0x00010c08fa60();
      unaff_x27 = param_1;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      unaff_x28 = param_1;
      func_0x00010c08fa60();
      ppuVar5 = ppuVar10;
      _objc_retainAutorelease(ppuVar10);
      func_0x00010c0d3c60();
      _CCHmac(2,unaff_x25,unaff_x26,unaff_x27,unaff_x28,ppuVar5);
    }
    else {
      ppuVar3 = param_2;
      if (param_1 != (undefined **)0x0) goto LAB_10bcb6320;
LAB_10bcb63b8:
      ppuVar10 = (undefined **)0x0;
    }
    _objc_release(param_1);
    _objc_release(ppuVar3);
    uVar12 = 0x10bcb63dc;
    puVar2 = puVar2 + -0x280;
    param_3 = ppuVar8;
  } while( true );
}



/* Entry: 10bcb6428; end: 10bcb64f3;  */

void FUN_10bcb6428(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (lRam0000000113846ab0 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1049a0();
    _objc_release(puVar2);
    _dispatch_block_cancel(lRam0000000113846ab0);
    lVar1 = lRam0000000113846ab0;
    lRam0000000113846ab0 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10bcb64f4; end: 10bcb6513;  */

/* WARNING: Possible PIC construction at 0x0001005c6268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005c626c) */
/* WARNING: Removing unreachable block (ram,0x0001005c64e4) */
/* WARNING: Removing unreachable block (ram,0x0001005c6290) */
/* WARNING: Removing unreachable block (ram,0x0001005c62a0) */
/* WARNING: Removing unreachable block (ram,0x0001005c62a8) */
/* WARNING: Removing unreachable block (ram,0x0001005c62b0) */
/* WARNING: Removing unreachable block (ram,0x0001005c6440) */
/* WARNING: Removing unreachable block (ram,0x0001005c6444) */
/* WARNING: Removing unreachable block (ram,0x0001005c6474) */
/* WARNING: Removing unreachable block (ram,0x0001005c633c) */
/* WARNING: Removing unreachable block (ram,0x0001005c648c) */
/* WARNING: Removing unreachable block (ram,0x0001005c639c) */
/* WARNING: Removing unreachable block (ram,0x0001005c63a0) */
/* WARNING: Removing unreachable block (ram,0x0001005c647c) */
/* WARNING: Removing unreachable block (ram,0x0001005c6490) */

undefined8 FUN_10bcb64f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if ((param_4 & 1) == 0) {
    func_0x000107c61174(param_1);
    uVar1 = param_1;
    func_0x000107c5e9b8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
      return uVar1;
    }
    func_0x000107c60e78();
  }
  else {
    func_0x000107c61174(param_1);
  }
  if (lRam00000001137fdf30 != -1) {
    func_0x00010002a2fc(0x1137fdf30,&PTR___NSConcreteGlobalBlock_110d98868);
  }
  uVar1 = uRam00000001137fdf28;
  func_0x000107c61174(uRam00000001137fdf28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return uVar1;
}



/* Entry: 10bcb6514; end: 10bcb65e7;  */

undefined8
FUN_10bcb6514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3128c(param_1,puVar1,param_4,0);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10bcb65e8; end: 10bcb66e7;  */

uint FUN_10bcb65e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
  puVar1 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
  func_0x00010bf64be0(PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208,param_2,param_1,200,0,
                      &lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar5 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_50 = 0;
    puVar3 = puVar1;
    func_0x00010c14e080(puVar1,param_2,puVar2,param_4,&lStack_50);
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



/* Entry: 10bcb66e8; end: 10bcb676f; +[SCDiskUtility _isUserScopedDirectory:] */

ulong FUN_10bcb66e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 < 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf529e0(param_3);
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,uVar2 - 2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10bcb6770; end: 10bcb67f7; +[SCDiskUtility _isGlobalScopedDirectory:] */

ulong FUN_10bcb6770(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf529e0(param_3);
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,uVar2 - 1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10bcb67f8; end: 10bcb687f; +[SCDiskUtility _isExtensionDirectory:] */

ulong FUN_10bcb67f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 < 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf529e0(param_3);
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,uVar2 - 2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10bcb6880; end: 10bcb69b7; +[SCDiskUtility shortNameFromPath:] */

void FUN_10bcb6880(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f5860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45120(param_1,param_2,lVar1);
  lVar3 = lVar1;
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010be40ca0(param_1,param_2,lVar1);
    if ((int)uVar2 == 0) {
      func_0x00010be404e0(param_1,param_2,lVar1);
      if ((int)param_1 == 0) {
        lVar4 = param_3;
        func_0x00010c0899c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10bcb697c;
      }
      lVar4 = lVar1;
      func_0x00010bf529e0(lVar1);
      func_0x00010c0dfd40(lVar1,param_2,lVar4 + -3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = lVar1;
      func_0x00010bf529e0(lVar1);
      func_0x00010c0dfd40(lVar1,param_2,lVar4 + -2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar4 = lVar1;
    func_0x00010bf529e0(lVar1);
    func_0x00010c0dfd40(lVar1,param_2,lVar4 + -3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar3;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
LAB_10bcb697c:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10bcb69b8; end: 10bcb6a9f;  */

void FUN_10bcb69b8(undefined *param_1,undefined8 param_2,undefined ***param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined ***)0x2) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_11102e0d8;
    param_3 = &ppuStack_40;
    puVar2 = &uStack_48;
  }
  else if (param_3 == (undefined ***)0x1) {
    uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_30 = &PTR____CFConstantStringClassReference_11102e0b8;
    param_3 = &ppuStack_30;
    puVar2 = &uStack_38;
  }
  else {
    if (param_3 != (undefined ***)0x0) goto LAB_10bcb6a78;
    uStack_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_20 = &PTR____CFConstantStringClassReference_11102e098;
    param_3 = &ppuStack_20;
    puVar2 = &uStack_28;
  }
  param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,puVar2,1);
  _objc_retainAutoreleasedReturnValue();
LAB_10bcb6a78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bdfaf20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1,param_2,&PTR____CFConstantStringClassReference_11102e078,param_3,
                        param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb6aa0; end: 10bcb6b0b;  */

void FUN_10bcb6aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bdfaf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar1,param_2,&PTR____CFConstantStringClassReference_11102e078,param_3,
                      param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb6b0c; end: 10bcb6b13;  */

undefined8 FUN_10bcb6b0c(void)

{
  return 1;
}



/* Entry: 10bcb6b14; end: 10bcb6c2b;  */

void FUN_10bcb6b14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = 0x11;
  func_0x000107c312b8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10bcb6bd8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x000107c27d8c(uVar2,&puStack_48);
  _objc_release(uVar2);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 10bcb6c2c; end: 10bcb6c8f;  */

undefined * FUN_10bcb6c2c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55dc0(puVar1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10bcb6c90; end: 10bcb6d97; +[SCDiskUtility traverseDirectory:recurseSubfolders:propertiesForKeys:operation:completion:] */

void FUN_10bcb6c90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 != 0) {
    _objc_retain(param_7);
    _objc_retain(param_5);
    func_0x00010bfad300(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10bcb6d98;
    puStack_60 = &UNK_110d988a8;
    _objc_retain(param_6);
    uStack_58 = param_6;
    func_0x00010c27b080(param_1,param_2,puVar1,param_4,param_5,&puStack_78,param_7);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(uStack_58);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 10bcb6d98; end: 10bcb6da3;  */

void FUN_10bcb6d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcb6da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10bcb6da4; end: 10bcb6dc7; +[SCDiskUtility traverseDirectoryURL:recurseSubfolders:propertiesForKeys:operation:completion:] */

void FUN_10bcb6da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becf750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__traverseDirectoryAndSubfolders__112591778,param_3,param_5,param_6,
               param_7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__traverseDirectory_propertiesFor_112591770,param_3,param_5,param_6,
             param_7);
  return;
}



/* Entry: 10bcb6dc8; end: 10bcb6ea7; +[SCDiskUtility _executeIterationOperation:fileUrl:propertiesForKeys:enumerator:] */

long FUN_10bcb6dc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x00010c13b4c0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_3 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,param_4,uVar2,param_6);
  }
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10bcb6ea8; end: 10bcb7063; +[SCDiskUtility _traverseDirectoryAndSubfolders:propertiesForKeys:operation:completion:] */

void FUN_10bcb6ea8(int param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x0;
  puVar3 = puVar2;
  func_0x00010bf98160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar3);
  puVar7 = auStack_e8;
  puVar9 = (undefined1 *)0x10;
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        puVar7 = *(undefined1 **)(lStack_128 + (long)puVar13 * 8);
        puVar6 = (undefined8 *)param_5;
        puVar9 = param_4;
        puVar10 = puVar3;
        iVar1 = param_1;
        func_0x00010be0bbc0();
        if (iVar1 == 0) goto LAB_10bcb6fe8;
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar7 = auStack_e8;
      puVar9 = (undefined1 *)0x10;
      puVar2 = puVar3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
LAB_10bcb6fe8:
  _objc_release(puVar3);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_270;
  pcStack_138 = FUN_10bcb7064;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = 0;
  puVar3 = puVar2;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uStack_228;
  _objc_retain(uStack_228);
  _objc_release(puVar2);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(puVar3);
  puVar8 = auStack_220;
  puVar13 = puVar3;
  func_0x00010bf52a60();
  if (puVar13 != (undefined *)0x0) {
    lVar12 = *plStack_260;
    puVar2 = puVar13;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        puVar8 = *(undefined1 **)(lStack_268 + (long)puVar13 * 8);
        uVar4 = param_3;
        puVar5 = (undefined8 *)puVar9;
        func_0x00010be0bbc0();
        if ((int)uVar4 == 0) goto LAB_10bcb71b4;
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar8 = auStack_220;
      puVar2 = puVar3;
      puVar5 = &uStack_270;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
LAB_10bcb71b4:
  _objc_release(puVar3);
  if (puVar10 != (undefined *)0x0) {
    (**(code **)(puVar10 + 0x10))(puVar10);
  }
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  uStack_2b0 = uVar11;
  pcStack_278 = FUN_10bcb7238;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar3;
  uStack_2a8 = param_3;
  puStack_2a0 = puVar10;
  puStack_298 = puVar9;
  puStack_290 = puVar7;
  puStack_288 = (undefined1 *)puVar6;
  ppuStack_280 = &puStack_140;
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar8;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar10 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b24e8;
  if (puVar10 == (undefined *)0x0) {
    uVar11 = 0;
  }
  else {
    puStack_2f8 = &uStack_300;
    uStack_300 = 0;
    uStack_2f0 = 0x3032000000;
    pcStack_2e8 = FUN_10bcb745c;
    uStack_2e0 = 0x10bcb746c;
    uStack_2d8 = 0;
    uStack_2d0 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    func_0x00010c27b060(puVar3);
    _objc_release(puVar13);
    uVar11 = puStack_2f8[5];
    _objc_retain(uVar11);
    _objc_release(puVar10);
    __Block_object_dispose(&uStack_300,8);
    _objc_release(uStack_2d8);
  }
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  lVar12 = 8;
  __Block_object_dispose(&uStack_300);
  __Unwind_Resume();
  *(undefined8 *)((long)puVar5 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 10bcb7064; end: 10bcb7237; +[SCDiskUtility _traverseDirectory:propertiesForKeys:operation:completion:] */

void FUN_10bcb7064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = 0;
  puVar2 = puVar1;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uStack_f8;
  _objc_retain(uStack_f8);
  _objc_release(puVar1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar2);
  puVar7 = auStack_f0;
  puVar10 = puVar2;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar9 = *plStack_130;
    puVar1 = puVar10;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(puVar2);
        }
        puVar7 = *(undefined1 **)(lStack_138 + (long)puVar10 * 8);
        uVar3 = param_1;
        puVar6 = (undefined8 *)param_5;
        func_0x00010be0bbc0();
        if ((int)uVar3 == 0) goto LAB_10bcb71b4;
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
      puVar7 = auStack_f0;
      puVar1 = puVar2;
      puVar6 = &uStack_140;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
LAB_10bcb71b4:
  _objc_release(puVar2);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_180 = uVar8;
  pcStack_148 = FUN_10bcb7238;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = puVar1;
  puStack_188 = puVar2;
  uStack_178 = param_1;
  lStack_170 = param_6;
  puStack_168 = param_5;
  uStack_160 = param_4;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar7;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar10 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24e8;
  if (puVar10 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    puStack_1c8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x3032000000;
    pcStack_1b8 = FUN_10bcb745c;
    uStack_1b0 = 0x10bcb746c;
    uStack_1a8 = 0;
    uStack_1a0 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    func_0x00010c27b060(puVar2);
    _objc_release(puVar5);
    uVar8 = puStack_1c8[5];
    _objc_retain(uVar8);
    _objc_release(puVar10);
    __Block_object_dispose(&uStack_1d0,8);
    _objc_release(uStack_1a8);
  }
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_1d0);
  __Unwind_Resume();
  *(undefined8 *)((long)puVar6 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 10bcb7238; end: 10bcb745b; +[SCDiskUtility directoryPathFromRegex:basePath:] */

void FUN_10bcb7238(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = param_4;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b24e8;
  if (puVar3 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10bcb745c;
    uStack_70 = 0x10bcb746c;
    uStack_68 = 0;
    uStack_60 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010c27b060(puVar1);
    _objc_release(puVar4);
    uVar6 = puStack_88[5];
    _objc_retain(uVar6);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_90);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 10bcb745c; end: 10bcb7473;  */

void FUN_10bcb745c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bcb7474; end: 10bcb758b;  */

bool FUN_10bcb7474(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar5 = param_2;
    func_0x00010bdc2d60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60(lVar3);
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c0df1c0();
    bVar1 = lVar5 == 0;
    lVar4 = lVar6;
    if (lVar5 != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      lVar4 = *(long *)(lVar5 + 0x28);
      *(long *)(lVar5 + 0x28) = lVar3;
      lVar3 = lVar6;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10bcb758c; end: 10bcb76ff; +[SCDiskUtility calculateDirectoryUsage:cancelationToken:] */

ulong FUN_10bcb758c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b24e8;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uStack_50 = *(undefined8 *)PTR__NSURLFileSizeKey_11034ab08;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c27b060(puVar1);
  _objc_release(puVar2);
  uVar6 = puStack_68[3];
  _objc_release(param_4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar6;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_70,8);
  __Unwind_Resume();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c282800();
  lVar5 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + lVar4;
  lVar4 = *(long *)(param_3 + 0x20);
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  else {
    func_0x00010c06e0e0();
    uVar6 = (ulong)((uint)lVar4 ^ 1);
  }
  _objc_release(lVar3);
  return uVar6;
}



/* Entry: 10bcb7700; end: 10bcb777b;  */

uint FUN_10bcb7700(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__NSURLFileSizeKey_11034ab08);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c282800();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x00010c06e0e0();
    uVar3 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar3;
}


