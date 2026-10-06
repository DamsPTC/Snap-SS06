/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cc7bb4; end: 107cc7d37; -[SCMyStoriesMediaDocumentStore initWithMediaPath:] */

undefined1 * FUN_107cc7bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fa6d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc7d38; end: 107cc7e67; -[SCMyStoriesMediaDocumentStore fetchMediaFromDiskForKey:completionQueue:completion:] */

void FUN_107cc7d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc7e68; end: 107cc7e9f;  */

void FUN_107cc7e68(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be126e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc7ea0; end: 107cc8063; -[SCMyStoriesMediaDocumentStore _fetchMediaFromDiskForKey:completionQueue:completion:] */

void FUN_107cc7ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107cc8064;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_48 = param_5;
    _objc_retain(param_4);
    func_0x00010007380c(param_4,&puStack_68);
    _objc_release(param_4);
    puVar1 = puStack_48;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010c25ce00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64a80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107cc8074;
    puStack_80 = &UNK_11084aaa8;
    _objc_retain(param_5);
    puStack_78 = puVar3;
    puStack_70 = param_5;
    _objc_retain(puVar3);
    func_0x00010007380c(param_4,&puStack_98);
    _objc_release(param_4);
    _objc_release(puStack_78);
    _objc_release(puStack_70);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 107cc8064; end: 107cc8073;  */

void FUN_107cc8064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc8070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107cc8074; end: 107cc80b3;  */

void FUN_107cc8074(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0c3fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107cc80b4; end: 107cc820b; -[SCMyStoriesMediaDocumentStore setMediaToDiskForKey:media:completionQueue:completion:] */

void FUN_107cc80b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc820c; end: 107cc8243;  */

void FUN_107cc820c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc8244; end: 107cc8437; -[SCMyStoriesMediaDocumentStore _setMediaToDiskForKey:media:completionQueue:completion:] */

void FUN_107cc8244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d75e8;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107cc8438;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_58 = param_6;
    _objc_retain(param_5);
    func_0x00010007380c(param_5,&puStack_78);
    _objc_release(param_5);
    puVar1 = puStack_58;
  }
  else {
    _objc_retain(param_5);
    _objc_alloc(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0095c0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25ce00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c14e020();
    _objc_release(uVar3);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x107cc8448;
    puStack_90 = &UNK_11084a9b8;
    _objc_retain(param_6);
    uStack_80 = SUB81(puVar4,0);
    puStack_88 = param_6;
    func_0x00010007380c(param_5,&puStack_a8);
    _objc_release(param_5);
    _objc_release(puStack_88);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc8438; end: 107cc845b;  */

void FUN_107cc8438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc8444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107cc845c; end: 107cc858b; -[SCMyStoriesMediaDocumentStore deleteMediaFromDiskWithKeys:completionQueue:completion:] */

void FUN_107cc845c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc858c; end: 107cc85c3;  */

void FUN_107cc858c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc85c4; end: 107cc878b; -[SCMyStoriesMediaDocumentStore _deleteMediaFromDiskWithKeys:completionQueue:completion:] */

void FUN_107cc85c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_138 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bdf5040();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c25ce00(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be61300(param_1);
        _objc_release(puVar4);
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  uVar3 = uStack_138;
  func_0x00010007380c(uStack_138,param_5);
  lVar2 = lVar1;
  func_0x00010be71ba0(param_1);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(uVar3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_160 = uVar3;
  pcStack_148 = FUN_107cc878c;
  lStack_170 = param_1;
  uStack_168 = param_5;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(lVar2);
  _objc_initWeak(auStack_178,lVar1);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  _objc_copyWeak(auStack_180,auStack_178);
  _objc_retain(lVar2);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(lVar2);
  return;
}



/* Entry: 107cc878c; end: 107cc8863; -[SCMyStoriesMediaDocumentStore deleteAllMediaWithCompletion:] */

void FUN_107cc878c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc8864; end: 107cc8897;  */

void FUN_107cc8864(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc8898; end: 107cc8a1f; -[SCMyStoriesMediaDocumentStore _deleteAllMediaWithCompletion:] */

void FUN_107cc8898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x20) = 1;
  lVar2 = param_1;
  func_0x00010bdf5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b24e8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107cc8a20;
  puStack_70 = &UNK_110a06e10;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(lVar2);
  lStack_68 = lVar2;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(lVar2);
  _objc_retain(param_3);
  func_0x00010c27b060(puVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_90);
  _objc_release(lStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc8a20; end: 107cc8a7f;  */

long FUN_107cc8a20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be61300();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107cc8a80; end: 107cc8ab3;  */

void FUN_107cc8a80(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc8ab4; end: 107cc8b5b; -[SCMyStoriesMediaDocumentStore _performDeleteExpiredMedia] */

void FUN_107cc8ab4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107cc8b5c; end: 107cc8b87;  */

void FUN_107cc8b5c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc8b88; end: 107cc8d13; -[SCMyStoriesMediaDocumentStore _deleteExpiredMedia] */

void FUN_107cc8b88(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar2 = param_1;
  func_0x00010bdf5040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  func_0x00010c0523a0(0xc0f5180000000000);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b24e8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107cc8d14;
  puStack_78 = &UNK_110a06e40;
  _objc_retain(puVar3);
  puStack_70 = puVar3;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar2);
  uStack_68 = uVar2;
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retain(uVar2);
  func_0x00010c27b060(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(puStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107cc8d14; end: 107cc8e2f;  */

long FUN_107cc8d14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar3 = puVar2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf64e00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf433a0();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0xffffffffffffffff) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010be61300();
    _objc_release(param_1);
  }
  else {
    lVar6 = 1;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return lVar6;
}



/* Entry: 107cc8e30; end: 107cc8e67;  */

void FUN_107cc8e30(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc8e68; end: 107cc8f7b; -[SCMyStoriesMediaDocumentStore _createTrashURL] */

void FUN_107cc8e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfcd1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar3 = puVar1;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee820(puVar1,param_2,puVar3);
  puVar4 = puVar1;
  func_0x00010bdc2c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55da0();
  _objc_release(puVar1);
  _objc_retain(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107cc8f7c; end: 107cc90c7; -[SCMyStoriesMediaDocumentStore _moveFileToTrashWithFileURL:trashURL:] */

undefined * FUN_107cc8f7c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bfacbe0(puVar4,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar4);
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010bfcd1e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      lVar1 = param_4;
      func_0x00010bdc2c60(param_4,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d1580();
      _objc_release(puVar3);
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107cc90c8; end: 107cc9203; -[SCMyStoriesMediaDocumentStore _performEmptyTrashWithUrl:completion:] */

void FUN_107cc90c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107cc9184;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc9204; end: 107cc923f; -[SCMyStoriesMediaDocumentStore .cxx_destruct] */

void FUN_107cc9204(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc9240; end: 107cc9353; -[SCStoriesMediaStore queryMediaForKey:dataDecodingBlock:completionQueue:completion:] */

void FUN_107cc9240(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107cc9354;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_48 = param_6;
    func_0x00010007380c(param_5,&puStack_68);
    uVar1 = uStack_48;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010be12600(param_1);
    _objc_release(param_6);
    uVar1 = param_5;
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107cc9354; end: 107cc9363;  */

void FUN_107cc9354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc9360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107cc9364; end: 107cc9403;  */

void FUN_107cc9364(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107cc9404;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = param_2;
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107cc9404; end: 107cc9413;  */

void FUN_107cc9404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc9410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107cc9414; end: 107cc95db; -[SCStoriesMediaStore setMediaForKey:media:expiration:persistToDisk:completionQueue:completion:] */

void FUN_107cc9414(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 == 0) || (param_4 == 0)) {
    if ((param_7 == 0) || (param_8 == (undefined *)0x0)) goto LAB_107cc9594;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107cc95dc;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_8);
    puStack_68 = param_8;
    func_0x00010007380c(param_7,&puStack_88);
    puVar1 = puStack_68;
  }
  else {
    puVar1 = PTR_PTR_1126d75f0;
    _objc_alloc(PTR_PTR_1126d75f0);
    func_0x00010c0083c0();
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bea5900(param_1);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_107cc9594:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc95dc; end: 107cc95eb;  */

void FUN_107cc95dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc95e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107cc95ec; end: 107cc9677;  */

void FUN_107cc95ec(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107cc9678;
    puStack_48 = &UNK_11084a9b8;
    _objc_retain(lVar2);
    lStack_40 = lVar2;
    uStack_38 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(lStack_40);
  }
  return;
}



/* Entry: 107cc9678; end: 107cc968b;  */

void FUN_107cc9678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cc9688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107cc968c; end: 107cc9813; -[SCStoriesMediaStore deleteMediaForKeys:fromDiskOnly:completionQueue:completion:] */

void FUN_107cc968c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_5;
  _objc_retain();
  _dispatch_group_create();
  if ((param_4 & 1) == 0) {
    _dispatch_group_enter(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar1);
    func_0x00010c12d4c0(uVar3);
    _objc_release(uVar1);
  }
  _dispatch_group_enter(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010bf6c380(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x000100bc0718(uVar1,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc9814; end: 107cc9823;  */

void FUN_107cc9814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107cc9824; end: 107cc995b; -[SCStoriesMediaStore deleteAllMediaWithCompletionQueue:completion:] */

void FUN_107cc9824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  func_0x00010c12aec0(uVar2);
  _dispatch_group_enter(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010bf6b500(uVar2);
  _objc_release(uVar2);
  func_0x000100bc0718(uVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 107cc995c; end: 107cc996b;  */

void FUN_107cc995c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107cc996c; end: 107cc9a1f; -[SCStoriesMediaStore deleteAllMediaFromCacheWithCompletionQueue:completion:] */

void FUN_107cc996c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107cc9a20;
  puStack_48 = &UNK_110948980;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c12aec0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc9a20; end: 107cc9a2b;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_107cc9a20(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar2 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      pcVar4 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar4;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar4 = pcRam0000000113817cd0;
  func_0x00010002a3a8(uVar3);
  func_0x000107c61180();
  (*pcVar4)(uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107cc9a2c; end: 107cc9a33; -[SCStoriesMediaStore cacheContainsKey:] */

void FUN_107cc9a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_contains__1125b06d8);
  return;
}



/* Entry: 107cc9a34; end: 107cc9b8f; -[SCStoriesMediaStore _fetchMediaForKey:dataDecodingBlock:completion:] */

void FUN_107cc9a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107cc9b90;
  puStack_68 = &UNK_1108bec18;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0dff40(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc9b90; end: 107cc9c77;  */

void FUN_107cc9b90(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d75f0;
  _objc_opt_class(PTR_PTR_1126d75f0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  _objc_release(puVar2);
  if ((((ulong)puVar4 & 1) == 0) || (puVar2 == (undefined *)0x0)) {
    lVar5 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar5 + 0x10))(lVar5,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    lVar5 = param_2;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107cc9c78; end: 107cc9ce3;  */

void FUN_107cc9c78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29820();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc9ce4; end: 107cc9f47; -[SCStoriesMediaStore _handleFetchFromMediaCacheForKey:media:dataDecodingBlock:completion:] */

void FUN_107cc9ce4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bfa8660(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d75f0;
    _objc_opt_class(PTR_PTR_1126d75f0);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      (**(code **)(param_6 + 0x10))(param_6,param_4);
    }
    else {
      func_0x00010bf63640(puVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,puVar2);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc9f48; end: 107cc9f9f;  */

void FUN_107cc9f48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc9fa0; end: 107cca133; -[SCStoriesMediaStore _handleFetchMediaFromDiskForKey:media:dataDecodingBlock:completion:] */

void FUN_107cc9fa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  if (param_4 == 0) {
    pcVar5 = *(code **)(param_6 + 0x10);
    _objc_retain(param_6);
    (*pcVar5)(param_6,0);
  }
  else {
    _objc_retain(param_6);
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d75f0;
    _objc_opt_class(PTR_PTR_1126d75f0);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = param_5;
      (**(code **)(param_5 + 0x10))(param_5,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf63640(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1d0500(*(undefined8 *)(param_1 + 8));
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(puVar1);
    param_6 = puVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cca134; end: 107cca26f; -[SCStoriesMediaStore _setMediaWithKey:media:expiration:persistToDisk:completion:] */

void FUN_107cca134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  func_0x00010c1d0500(uVar2);
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0xffffffffffff8000;
    func_0x0001000819a8(0xffffffffffff8000,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c53c0(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cca270; end: 107cca287;  */

void FUN_107cca270(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000107cca280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4 != 0);
  return;
}



/* Entry: 107cca288; end: 107cca2b7; -[SCStoriesMediaStore .cxx_destruct] */

void FUN_107cca288(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cca2b8; end: 107cca3bb; -[SCStoriesThumbnailRemoteLoader initWithStoriesThumbnailCoordinator:] */

undefined1 * FUN_107cca2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa6e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cca3bc; end: 107cca4d7; -[SCStoriesThumbnailRemoteLoader downloadItem:callbackQueue:completionBlock:retryCount:] */

void FUN_107cca3bc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0bf3e0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cca4d8; end: 107cca4e7;  */

void FUN_107cca4d8(void)

{
  return;
}



/* Entry: 107cca4e8; end: 107cca52b;  */

void FUN_107cca4e8(long param_1,undefined8 param_2)

{
  func_0x000107d23ef8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06360(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cca52c; end: 107cca70f; -[SCStoriesThumbnailRemoteLoader _downloadWithThumbnailInfo:callbackQueue:completionBlock:] */

void FUN_107cca52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d75f8;
  _objc_alloc();
  func_0x00010c051e60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107cca710;
  puStack_80 = &UNK_110848ba8;
  lStack_78 = param_1;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  func_0x00010c0f7fc0(uVar4);
  _objc_initWeak(auStack_a0,param_1);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107cca75c;
  puStack_c0 = &UNK_11092ece8;
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(puVar2);
  ppuVar3 = &puStack_d8;
  puStack_b0 = puVar2;
  _objc_retainBlock(ppuVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11da60(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cca710; end: 107cca75b;  */

void FUN_107cca710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf26940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89680(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107cca75c; end: 107cca7eb;  */

void FUN_107cca75c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf26940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3dd00(lVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107cca7ec; end: 107cca8a7; -[SCStoriesThumbnailRemoteLoader _registerHandlerForCacheKey:handler:] */

void FUN_107cca7ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_3);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cca8a8; end: 107ccaa33; -[SCStoriesThumbnailRemoteLoader _invokeHandlerIfPossibleForCacheKey:handler:thumbnail:isFromCache:] */

void FUN_107cca8a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4b900();
  if ((int)lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bf44140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_4;
      func_0x00010bf44000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        lVar2 = param_4;
        func_0x00010bf44140(param_4);
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_107ccaa34;
        puStack_70 = &UNK_11084d5f8;
        _objc_retain(param_4);
        lStack_68 = param_4;
        _objc_retain(param_5);
        uStack_60 = param_5;
        uStack_58 = param_6;
        func_0x00010007380c(lVar2,&puStack_88);
        _objc_release(lVar2);
        _objc_release(uStack_60);
        _objc_release(lStack_68);
      }
    }
    func_0x00010c12d360(lVar1);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccaa34; end: 107ccaa7b;  */

void FUN_107ccaa34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf44000();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ccaa7c; end: 107ccab63; -[SCStoriesThumbnailRemoteLoader didUpdateThumbnailStateChangeRequest:] */

void FUN_107ccaa7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 2) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ccab64; end: 107ccab97;  */

void FUN_107ccab64(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccab98; end: 107ccadeb; -[SCStoriesThumbnailRemoteLoader _handleThumbnailLoadedUpdate:] */

void FUN_107ccab98(long param_1,undefined8 param_2,long param_3)

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
  undefined8 uVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar2 = param_3;
  func_0x00010bf267e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar3 = lVar8;
    func_0x00010bf51e00();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar11 = *(long *)(lVar9 * 8);
        lVar4 = lVar11;
        func_0x00010c26df40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c26e380();
        lVar6 = param_3;
        func_0x00010c26e380();
        _objc_release(lVar4);
        if (lVar5 == lVar6) {
          func_0x00010c12d360(lVar8);
          lVar4 = lVar11;
          func_0x00010c26df40(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar11;
          func_0x00010bf44140(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf44000(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be06360(param_1);
          _objc_release(lVar11);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    lVar2 = lVar8;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      lVar2 = param_3;
      func_0x00010bf267e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar10);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar8);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 107ccadec; end: 107ccae27; -[SCStoriesThumbnailRemoteLoader .cxx_destruct] */

void FUN_107ccadec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ccae28; end: 107ccaef7; -[SCStoriesThumbnailRemoteLoaderHandler initWithThumbnailInfo:completionQueue:completionBlock:] */

undefined1 *
FUN_107ccae28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa6f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ccaef8; end: 107ccaeff; -[SCStoriesThumbnailRemoteLoaderHandler thumbnailInfo] */

undefined8 FUN_107ccaef8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ccaf00; end: 107ccaf07; -[SCStoriesThumbnailRemoteLoaderHandler completionQueue] */

undefined8 FUN_107ccaf00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ccaf08; end: 107ccaf0f; -[SCStoriesThumbnailRemoteLoaderHandler completionBlock] */

undefined8 FUN_107ccaf08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ccaf10; end: 107ccaf4b; -[SCStoriesThumbnailRemoteLoaderHandler .cxx_destruct] */

void FUN_107ccaf10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ccaf4c; end: 107ccaf4f;  */

void FUN_107ccaf4c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdf30 != -1) {
    func_0x00010002a2fc(0x1137fdf30,&PTR___NSConcreteGlobalBlock_110d98868);
  }
  uVar1 = uRam00000001137fdf28;
  func_0x000107c61174(uRam00000001137fdf28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ccaf50; end: 107ccb133; -[SCMyStoriesMediaThumbnailGenerator createThumbnailForThumbnailInfo:completion:] */

void FUN_107ccaf50(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c242080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    lVar2 = param_3;
    func_0x00010900c0f8();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c242080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    if (lVar3 != 0) {
      lVar1 = lVar3;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(lVar1);
    puVar4 = param_4;
    _objc_retainBlock(param_4);
    func_0x00010bef7440(uVar10);
    _objc_release(puVar4);
    lVar5 = param_3;
    func_0x00010c242080(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26e380(param_3);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    puVar4 = puVar6;
    func_0x00010bdf4b80(param_1);
    _objc_release(lVar1);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  _objc_retain(puVar4);
  puVar9 = puVar4;
  func_0x00010bf529e0();
  if (puVar9 != (undefined *)0x0) {
    puVar9 = *(undefined **)(param_3 + 0x30);
    lVar1 = lVar7;
    func_0x00010bf267e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (puVar9 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      uVar10 = *(undefined8 *)(param_3 + 0x30);
      lVar1 = lVar7;
      func_0x00010bf267e0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar10);
      _objc_release(lVar1);
    }
    func_0x00010befa160(puVar9);
    lVar1 = lVar7;
    func_0x00010bf267e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf4b80(param_3);
    _objc_release(lVar1);
    _objc_release(puVar9);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 107ccb134; end: 107ccb24f; -[SCMyStoriesMediaThumbnailGenerator forceablyCreateThumbnailsForMediaInfo:thumbnailTypes:] */

void FUN_107ccb134(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar3 = *(undefined **)(param_1 + 0x30);
    uVar2 = param_3;
    func_0x00010bf267e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = param_3;
      func_0x00010bf267e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4,param_2,puVar3,uVar2);
      _objc_release(uVar2);
    }
    func_0x00010befa160(puVar3,param_2,param_4);
    uVar2 = param_3;
    func_0x00010bf267e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf4b80(param_1,param_2,param_3,param_4,uVar2);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ccb250; end: 107ccb4c3; -[SCMyStoriesMediaThumbnailGenerator _createThumbnailsForMediaInfo:thumbnailTypes:cacheKey:] */

void FUN_107ccb250(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar2);
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ce860(lVar3);
        _objc_release(uVar4);
      }
      _objc_initWeak(auStack_68,param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107ccb4c4;
      puStack_90 = &UNK_110a07030;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      uStack_88 = param_3;
      _objc_retain(param_4);
      lStack_80 = param_4;
      _objc_retain(param_5);
      ppuVar5 = &puStack_a8;
      lStack_78 = param_5;
      _objc_retainBlock(ppuVar5);
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      lVar6 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11d560(lVar6);
      _objc_release(uVar4);
      _objc_release(lVar6);
      _objc_release(param_1);
      _objc_release(ppuVar5);
      _objc_release(lStack_78);
      _objc_release(lStack_80);
      _objc_release(uStack_88);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(lVar3);
    }
    else {
      func_0x00010befa160(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccb4c4; end: 107ccb533;  */

void FUN_107ccb4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29a60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccb534; end: 107ccb747; -[SCMyStoriesMediaThumbnailGenerator _handleFetchedMedia:thumbnailTypes:mediaData:overlayData:cacheKey:] */

void FUN_107ccb534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  if (param_5 == 0) {
    uVar2 = param_4;
    FUN_107ccb79c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_7);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107ccb748;
    puStack_78 = &UNK_1108576a8;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_70 = param_3;
    _objc_retain(param_7);
    ppuVar1 = &puStack_90;
    uStack_68 = param_7;
    _objc_retainBlock(ppuVar1);
    func_0x00010be1c380(param_1);
    _objc_release(ppuVar1);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccb748; end: 107ccb79b;  */

void FUN_107ccb748(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccb79c; end: 107ccb90b;  */

void FUN_107ccb79c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      puVar4 = PTR_PTR_1126d7608;
      _objc_alloc(PTR_PTR_1126d7608);
      func_0x00010c067fc0(uVar6);
      func_0x00010c051fc0(puVar4);
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bde05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearGeneratedThumbnailTypes_ge_112555b10,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107ccb90c; end: 107ccb91b;  */

void FUN_107ccb90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearGeneratedThumbnailTypes_ge_112555b10,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107ccb91c; end: 107ccbf57; -[SCMyStoriesMediaThumbnailGenerator _generateThumbnailsOnBackgroundThread:thumbnailTypes:mediaData:overlayData:completion:] */

void FUN_107ccb91c(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_6 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_3;
  func_0x00010c27dd80();
  if ((uVar2 < 0x1b) && ((1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0)) {
    func_0x000108544644();
  }
  if ((uVar2 + 1 < 0x1c) && ((1L << (uVar2 + 1 & 0x3f) & 0xd8de5fdU) != 0)) {
    if ((((uVar2 + 1 < 0x1c) && ((1L << (uVar2 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) &&
        (uVar2 + 1 < 0x1b)) && ((1L << (uVar2 + 1 & 0x3f) & 0x6c6bd77U) != 0)) goto LAB_107ccba50;
    iVar1 = 0;
    func_0x00010bc7c628();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (iVar1 != 0) {
      puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc();
      func_0x00010c0082a0();
LAB_107ccbc14:
      _objc_retain(puVar8);
      _objc_retain(param_4);
      _objc_retain(param_7);
      if (puVar6 == (undefined *)0x0) {
        lVar7 = param_4;
        FUN_107ccb79c(param_4);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_7 + 0x10))(param_7,lVar7);
      }
      else {
        _objc_retain(param_7);
        _objc_retain(puVar8);
        _objc_retain(param_4);
        func_0x00010bfe6c40(puVar6);
        _objc_release(param_4);
        _objc_release(puVar8);
        lVar7 = param_7;
      }
      _objc_release(lVar7);
      _objc_release(param_7);
      _objc_release(param_4);
      puVar4 = puVar8;
      puVar3 = puVar6;
      goto LAB_107ccbd84;
    }
    uVar2 = param_3;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar5 = param_5;
    func_0x00010c14e080();
    _objc_retain(0);
    if ((int)uVar5 != 0) {
      func_0x00010befb520(puVar3);
      puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x00010bf0b9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(0);
      _objc_release(puVar3);
      goto LAB_107ccbc14;
    }
    lVar7 = param_4;
    FUN_107ccb79c(param_4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,lVar7);
    _objc_release(lVar7);
    _objc_release(0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107ccbd94();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,puVar4);
LAB_107ccbd84:
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_107ccba50:
  _objc_release(puVar8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccbf58; end: 107ccc353; -[SCMyStoriesMediaThumbnailGenerator _handleGeneratedThumbnail:generatedThumbnails:cacheKey:] */

void FUN_107ccbf58(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  _dispatch_group_create();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        func_0x00010c26e380(uVar11);
        _objc_retain(param_3);
        func_0x00010c25b720();
        puVar3 = PTR_PTR_1126c3398;
        _objc_alloc(PTR_PTR_1126c3398);
        uVar8 = param_3;
        func_0x00010bf267e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffa8e0(puVar3);
        _objc_release(param_3);
        _objc_release(uVar8);
        puVar4 = puVar3;
        func_0x00010900c0f8(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
        uVar8 = uVar11;
        func_0x00010c26da00(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14d040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (puVar5 != (undefined *)0x0) {
          _dispatch_group_enter(lVar1);
          lVar6 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c26da00(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_107ccc354;
          puStack_150 = &UNK_110842e18;
          _objc_retain(lVar1);
          lStack_148 = lVar1;
          func_0x00010befbec0(lVar6);
          _objc_release(puVar7);
          _objc_release(uVar11);
          _objc_release(lVar6);
          _objc_release(lStack_148);
        }
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_initWeak(auStack_170,param_1);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_107ccc35c;
  puStack_198 = &UNK_110850cf8;
  _objc_copyWeak(auStack_178,auStack_170);
  uStack_190 = param_3;
  lStack_188 = param_4;
  lStack_180 = param_5;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bc0718(lVar1,uVar8,&puStack_1b0);
  _objc_release(uVar8);
  _objc_release(lStack_180);
  _objc_release(lStack_188);
  _objc_release(uStack_190);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_170);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar1 + 0x20));
  return;
}



/* Entry: 107ccc354; end: 107ccc35b;  */

void FUN_107ccc354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107ccc35c; end: 107ccc393;  */

void FUN_107ccc35c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde05c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccc394; end: 107ccc79b; -[SCMyStoriesMediaThumbnailGenerator _clearGeneratedThumbnailTypes:generatedThumbnails:cacheKey:] */

void FUN_107ccc394(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
    uVar5 = *(ulong *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar16 = *(long *)(lVar14 * 8);
        func_0x00010c26e380(lVar16);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(lVar4);
        _objc_release(puVar6);
        if (uVar5 != 0) {
          lVar7 = lVar16;
          func_0x00010c26da00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar7 != 0) {
            func_0x00010c26e380(lVar16);
            func_0x00010c0df840(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(uVar5);
            _objc_release(puVar6);
          }
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c26e380(lVar16);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010bf4b900();
        _objc_release(puVar6);
        if ((uVar8 & 1) == 0) {
          lVar7 = lVar16;
          func_0x00010c26e380(lVar16);
          lVar9 = param_5;
          func_0x00010900c0a0(param_5,lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = *(long *)(param_1 + 0x38);
          func_0x00010bf286e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar7 != 0) {
            lVar15 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar10);
              }
              lVar13 = *(long *)(lVar15 * 8);
              lVar11 = lVar16;
              func_0x00010c26da00(lVar16);
              _objc_retainAutoreleasedReturnValue();
              (**(code **)(lVar13 + 0x10))(lVar13,lVar11);
              _objc_release(lVar11);
              lVar15 = lVar15 + 1;
            } while (lVar7 != lVar15);
            lVar7 = lVar10;
            func_0x00010bf52a60();
          }
          _objc_release(lVar10);
          _objc_release(lVar9);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar3);
      lVar3 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    uVar8 = uVar5;
    func_0x00010bf529e0();
    if (uVar8 != 0) {
      uVar8 = uVar5;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(lVar4);
      _objc_release(uVar8);
    }
    lVar3 = lVar4;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = lVar4;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf4b80(param_1);
      _objc_release(lVar3);
    }
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_destroyWeak(param_3 + 0x18);
  _objc_destroyWeak(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 107ccc79c; end: 107ccc84f; -[SCMyStoriesMediaThumbnailGenerator .cxx_destruct] */

void FUN_107ccc79c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ccc850; end: 107ccc857; -[SCStoriesThumbnailCoordinator removeListener:] */

void FUN_107ccc850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ccc858; end: 107cccacb; -[SCStoriesThumbnailCoordinator queryThumbnailForThumbnailInfo:completionQueue:completion:] */

void FUN_107ccc858(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010900c0f8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107cccacc;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010007380c(param_4,&puStack_78);
    uVar4 = uStack_58;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf88ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4cd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      _objc_initWeak(auStack_b0,param_1);
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_copyWeak(auStack_b8,auStack_b0);
      _objc_retain(param_3);
      func_0x00010c11d540(uVar5);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_b8);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_b0);
      goto LAB_107ccca6c;
    }
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107cccae0;
    puStack_90 = &UNK_110941cc0;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_5);
    uStack_80 = param_5;
    func_0x00010be96c80(param_1);
    _objc_release(uStack_80);
    uVar4 = uStack_88;
  }
  _objc_release(uVar4);
LAB_107ccca6c:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cccacc; end: 107cccadf;  */

void FUN_107cccacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cccadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107cccae0; end: 107cccb87;  */

void FUN_107cccae0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107cccb88;
  puStack_50 = &UNK_1108523f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 107cccb88; end: 107cccb9b;  */

void FUN_107cccb88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cccb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 107cccb9c; end: 107cccccf;  */

void FUN_107cccb9c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    func_0x00010be2c540(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107ccccd0;
    puStack_58 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    _objc_retain(param_2);
    lStack_50 = param_2;
    func_0x00010007380c(uVar3,&puStack_70);
    _objc_release(lStack_50);
    uVar2 = uStack_48;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 107ccccd0; end: 107cccce3;  */

void FUN_107ccccd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cccce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),1);
  return;
}



/* Entry: 107cccce4; end: 107cccd8b;  */

void FUN_107cccce4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107cccd8c;
  puStack_50 = &UNK_1108523f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 107cccd8c; end: 107cccd9f;  */

void FUN_107cccd8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cccd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 107cccda0; end: 107ccd00b; -[SCStoriesThumbnailCoordinator _handleMissingThumbnail:completion:] */

void FUN_107cccda0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c26e380(param_3);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar1 = param_3;
    func_0x00010c242080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
      goto LAB_107cccfbc;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(param_4);
    func_0x00010bf597c0(uVar9);
    lVar3 = param_4;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = param_4;
    _objc_retainBlock(param_4);
    func_0x00010bef7440(uVar9);
    _objc_release(lVar3);
    uVar4 = *(ulong *)(param_1 + 0x60);
    func_0x00010bfda1c0();
    if ((uVar4 & 1) != 0) goto LAB_107cccfbc;
    puVar5 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_107cc618c(lVar2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    lVar7 = param_1;
    func_0x00010be5e640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f6a0(uVar9);
    _objc_release(lVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010900c078(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b19c0(uVar9);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
LAB_107cccfbc:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107ccd018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ccd00c; end: 107ccd01b;  */

void FUN_107ccd00c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107ccd018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 107ccd01c; end: 107ccd26f; -[SCStoriesThumbnailCoordinator _retrieveThumbnailFromContentDeliveryIfNeeded:completion:] */

void FUN_107ccd01c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf4cd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c26e380(param_3);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = lVar3;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_107ccd270;
      puStack_70 = &UNK_11084a9e8;
      lStack_68 = param_1;
      _objc_retain(param_3);
      lStack_60 = param_3;
      _objc_retain(param_4);
      uStack_58 = param_4;
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uStack_58);
      _objc_release(lStack_60);
      goto LAB_107ccd1a4;
    }
  }
  _objc_initWeak(auStack_90,param_1);
  puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar5 == 0) {
    func_0x00010c13ef80(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_98);
  }
  _objc_destroyWeak(auStack_90);
LAB_107ccd1a4:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccd270; end: 107ccd2f3;  */

void FUN_107ccd270(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107ccd2f4;
  puStack_40 = &UNK_11086f048;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010bf597c0(uVar2,param_2,uVar1,&puStack_58);
  _objc_release(uStack_38);
  return;
}



/* Entry: 107ccd2f4; end: 107ccd303;  */

void FUN_107ccd2f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107ccd300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 107ccd304; end: 107ccd33f;  */

void FUN_107ccd304(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c13ef80();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


