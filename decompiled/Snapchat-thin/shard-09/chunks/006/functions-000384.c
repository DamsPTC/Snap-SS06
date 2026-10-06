/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106edbd20; end: 106edbfeb; -[GCDAsyncSocket .cxx_destruct] */

void FUN_106edbd20(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 200,0);
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
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106edbfec; end: 106edc083; -[GCDAsyncUdpSendPacket initWithData:timeout:tag:] */

undefined1 *
FUN_106edbfec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7c18;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106edc084; end: 106edc0cb; -[GCDAsyncUdpSendPacket .cxx_destruct] */

void FUN_106edc084(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106edc0cc; end: 106edc0ff; -[GCDAsyncUdpSpecialPacket init] */

void FUN_106edc0cc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7c20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106edc100; end: 106edc12f; -[GCDAsyncUdpSpecialPacket .cxx_destruct] */

void FUN_106edc100(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106edc130; end: 106edc13f; -[GCDAsyncUdpSocket init] */

void FUN_106edc130(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDelegate_delegateQueue_s_1125e0380,0,0,0);
  return;
}



/* Entry: 106edc140; end: 106edc14f; -[GCDAsyncUdpSocket initWithSocketQueue:] */

void FUN_106edc140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDelegate_delegateQueue_s_1125e0380,0,0,param_3);
  return;
}



/* Entry: 106edc150; end: 106edc157; -[GCDAsyncUdpSocket initWithDelegate:delegateQueue:] */

void FUN_106edc150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDelegate_delegateQueue_s_1125e0380,param_3,param_4,0);
  return;
}



/* Entry: 106edc158; end: 106edc2ef; -[GCDAsyncUdpSocket initWithDelegate:delegateQueue:socketQueue:] */

undefined1 *
FUN_106edc158(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7c28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    if (param_4 != 0) {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = param_4;
      _objc_release(uVar2);
    }
    *(undefined2 *)((long)puVar1 + 0x4a) = 0xffff;
    *(undefined4 *)((long)puVar1 + 0x4c) = 0xffff;
    *(undefined2 *)((long)puVar1 + 0x50) = 0xffff;
    *(undefined8 *)((long)puVar1 + 0x54) = 0xffffffffffffffff;
    if (param_5 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e8bc78;
      func_0x00010bdc3520();
      _dispatch_queue_create();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
      *(undefined ***)((long)puVar1 + 0x60) = ppuVar3;
    }
    else {
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
      *(long *)((long)puVar1 + 0x60) = param_5;
    }
    _objc_release(uVar2);
    *(undefined1 **)((long)puVar1 + 0x100) = (undefined1 *)((long)puVar1 + 0x100);
    _dispatch_queue_set_specific
              (*(undefined8 *)((long)puVar1 + 0x60),(undefined1 *)((long)puVar1 + 0x100),puVar1,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = 0;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106edc2f0; end: 106edc3d3; -[GCDAsyncUdpSocket dealloc] */

void FUN_106edc2f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106edc3d4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),&puStack_48);
  }
  else {
    func_0x00010bf3df40(param_1);
  }
  _objc_storeWeak(param_1 + 8,0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar3);
  puStack_50 = PTR_PTR_1126f7c28;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106edc3d4; end: 106edc3df;  */

void FUN_106edc3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_closeWithError__1125ad178,0);
  return;
}



/* Entry: 106edc3e0; end: 106edc4af; -[GCDAsyncUdpSocket delegate] */

void FUN_106edc3e0(long param_1)

{
  long lVar1;
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
  
  lVar1 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106edc4b0;
    uStack_30 = 0x106edc4c0;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106edc4c8;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),&puStack_80);
    param_1 = puStack_48[5];
    _objc_retain(param_1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106edc4b0; end: 106edc4c7;  */

void FUN_106edc4b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106edc4c8; end: 106edc503;  */

void FUN_106edc4c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106edc504; end: 106edc5d3; -[GCDAsyncUdpSocket setDelegate:synchronously:] */

void FUN_106edc504(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106edc5d4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    if (param_4 == 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
    }
    else {
      func_0x00010006eaa4();
    }
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106edc5d4; end: 106edc5df;  */

void FUN_106edc5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)
            (*(long *)(param_1 + 0x20) + 8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106edc5e0; end: 106edc5e7; -[GCDAsyncUdpSocket setDelegate:] */

void FUN_106edc5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_synchronously__1126407b8,param_3,0);
  return;
}



/* Entry: 106edc5e8; end: 106edc5ef; -[GCDAsyncUdpSocket synchronouslySetDelegate:] */

void FUN_106edc5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_synchronously__1126407b8,param_3,1);
  return;
}



/* Entry: 106edc5f0; end: 106edc6f3; -[GCDAsyncUdpSocket delegateQueue] */

void FUN_106edc5f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106edc4b0;
    uStack_30 = 0x106edc4c0;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106edc6c0;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),&puStack_80);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106edc6f4; end: 106edc7c3; -[GCDAsyncUdpSocket setDelegateQueue:synchronously:] */

void FUN_106edc6f4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106edc7c4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    if (param_4 == 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
    }
    else {
      func_0x00010006eaa4();
    }
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106edc7c4; end: 106edc7ef;  */

void FUN_106edc7c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106edc7f0; end: 106edc7f7; -[GCDAsyncUdpSocket setDelegateQueue:] */

void FUN_106edc7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegateQueue_synchronously__1126407d8,param_3,0);
  return;
}



/* Entry: 106edc7f8; end: 106edc7ff; -[GCDAsyncUdpSocket synchronouslySetDelegateQueue:] */

void FUN_106edc7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegateQueue_synchronously__1126407d8,param_3,1);
  return;
}



/* Entry: 106edc800; end: 106edc937; -[GCDAsyncUdpSocket getDelegate:delegateQueue:] */

void FUN_106edc800(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_a0 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106edc4b0;
    uStack_40 = 0x106edc4c0;
    uStack_38 = 0;
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106edc4b0;
    uStack_70 = 0x106edc4c0;
    uStack_68 = 0;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106edc938;
    puStack_b0 = &UNK_110876070;
    lStack_a8 = param_1;
    puStack_88 = puStack_98;
    puStack_58 = puStack_a0;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),&puStack_c8);
    if (param_3 != (long *)0x0) {
      lVar1 = puStack_58[5];
      _objc_retainAutorelease();
      *param_3 = lVar1;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = puStack_88[5];
      _objc_retainAutorelease();
      *param_4 = uVar2;
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    if (param_3 != (long *)0x0) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      _objc_autorelease();
      *param_3 = lVar1;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      _objc_retainAutorelease();
      *param_4 = uVar2;
    }
  }
  return;
}



/* Entry: 106edc938; end: 106edc997;  */

void FUN_106edc938(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = lVar3;
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106edc998; end: 106edca97; -[GCDAsyncUdpSocket setDelegate:delegateQueue:synchronously:] */

void FUN_106edc998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106edca98;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  uStack_48 = param_4;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    if (param_5 == 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
    }
    else {
      func_0x00010006eaa4();
    }
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106edca98; end: 106edcad7;  */

void FUN_106edca98(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 8,*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106edcad8; end: 106edcadf; -[GCDAsyncUdpSocket setDelegate:delegateQueue:] */

void FUN_106edcad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_delegateQueue_synchr_1126407a0,param_3,param_4,0);
  return;
}



/* Entry: 106edcae0; end: 106edcae7; -[GCDAsyncUdpSocket synchronouslySetDelegate:delegateQueue:] */

void FUN_106edcae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_delegateQueue_synchr_1126407a0,param_3,param_4,1);
  return;
}



/* Entry: 106edcae8; end: 106edcbbf; -[GCDAsyncUdpSocket isIPv4Enabled] */

undefined1 FUN_106edcae8(long param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edcbc0;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edcbc0; end: 106edcbdb;  */

void FUN_106edcbc0(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(byte *)(*(long *)(param_1 + 0x20) + 0x48) ^ 0xff) & 1;
  return;
}



/* Entry: 106edcbdc; end: 106edcc6f; -[GCDAsyncUdpSocket setIPv4Enabled:] */

void FUN_106edcbdc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106edcc70;
  puStack_38 = &UNK_110845ce0;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edcc70; end: 106edcc8b;  */

void FUN_106edcc70(long param_1)

{
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 0xfffe |
       ~(ushort)*(byte *)(param_1 + 0x28) & 1;
  return;
}



/* Entry: 106edcc8c; end: 106edcd63; -[GCDAsyncUdpSocket isIPv6Enabled] */

undefined1 FUN_106edcc8c(long param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edcd64;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edcd64; end: 106edcd7f;  */

void FUN_106edcd64(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 2) == 0;
  return;
}



/* Entry: 106edcd80; end: 106edce13; -[GCDAsyncUdpSocket setIPv6Enabled:] */

void FUN_106edcd80(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106edce14;
  puStack_38 = &UNK_110845ce0;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edce14; end: 106edce3b;  */

void FUN_106edce14(long param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 2;
  }
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 0xfffd | uVar1;
  return;
}



/* Entry: 106edce3c; end: 106edcf13; -[GCDAsyncUdpSocket isIPv4Preferred] */

undefined1 FUN_106edce3c(long param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edcf14;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edcf14; end: 106edcf2b;  */

void FUN_106edcf14(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(byte *)(*(long *)(param_1 + 0x20) + 0x48) >> 2 & 1;
  return;
}



/* Entry: 106edcf2c; end: 106edd003; -[GCDAsyncUdpSocket isIPv6Preferred] */

undefined1 FUN_106edcf2c(long param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edd004;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edd004; end: 106edd01b;  */

void FUN_106edd004(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(byte *)(*(long *)(param_1 + 0x20) + 0x48) >> 3 & 1;
  return;
}



/* Entry: 106edd01c; end: 106edd0f3; -[GCDAsyncUdpSocket isIPVersionNeutral] */

undefined1 FUN_106edd01c(long param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edd0f4;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edd0f4; end: 106edd10f;  */

void FUN_106edd0f4(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 0xc) == 0;
  return;
}



/* Entry: 106edd110; end: 106edd19f; -[GCDAsyncUdpSocket setPreferIPv4] */

void FUN_106edd110(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106edd1a0;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  lStack_28 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edd1a0; end: 106edd1c3;  */

void FUN_106edd1a0(long param_1)

{
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) = *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) | 4;
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 0xfff7;
  return;
}



/* Entry: 106edd1c4; end: 106edd253; -[GCDAsyncUdpSocket setPreferIPv6] */

void FUN_106edd1c4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106edd254;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  lStack_28 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edd254; end: 106edd277;  */

void FUN_106edd254(long param_1)

{
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 0xfffb;
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) = *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) | 8;
  return;
}



/* Entry: 106edd278; end: 106edd307; -[GCDAsyncUdpSocket setIPVersionNeutral] */

void FUN_106edd278(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106edd308;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  lStack_28 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edd308; end: 106edd32b;  */

void FUN_106edd308(long param_1)

{
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 0xfffb;
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x48) & 0xfff7;
  return;
}



/* Entry: 106edd32c; end: 106edd403; -[GCDAsyncUdpSocket maxReceiveIPv4BufferSize] */

undefined2 FUN_106edd32c(long param_1)

{
  undefined2 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edd404;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined2 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edd404; end: 106edd417;  */

void FUN_106edd404(long param_1)

{
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined2 *)(*(long *)(param_1 + 0x20) + 0x4a);
  return;
}



/* Entry: 106edd418; end: 106edd4ab; -[GCDAsyncUdpSocket setMaxReceiveIPv4BufferSize:] */

void FUN_106edd418(long param_1,undefined8 param_2,undefined2 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined2 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106edd4ac;
  puStack_38 = &UNK_110854380;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edd4ac; end: 106edd4bb;  */

void FUN_106edd4ac(long param_1)

{
  *(undefined2 *)(*(long *)(param_1 + 0x20) + 0x4a) = *(undefined2 *)(param_1 + 0x28);
  return;
}



/* Entry: 106edd4bc; end: 106edd593; -[GCDAsyncUdpSocket maxReceiveIPv6BufferSize] */

undefined4 FUN_106edd4bc(long param_1)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edd594;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined4 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edd594; end: 106edd5a7;  */

void FUN_106edd594(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4c);
  return;
}



/* Entry: 106edd5a8; end: 106edd63b; -[GCDAsyncUdpSocket setMaxReceiveIPv6BufferSize:] */

void FUN_106edd5a8(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined4 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106edd63c;
  puStack_38 = &UNK_110868698;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edd63c; end: 106edd64b;  */

void FUN_106edd63c(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4c) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* Entry: 106edd64c; end: 106edd6df; -[GCDAsyncUdpSocket setMaxSendBufferSize:] */

void FUN_106edd64c(long param_1,undefined8 param_2,undefined2 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined2 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106edd6e0;
  puStack_38 = &UNK_110854380;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106edd6e0; end: 106edd6ef;  */

void FUN_106edd6e0(long param_1)

{
  *(undefined2 *)(*(long *)(param_1 + 0x20) + 0x50) = *(undefined2 *)(param_1 + 0x28);
  return;
}



/* Entry: 106edd6f0; end: 106edd7c7; -[GCDAsyncUdpSocket maxSendBufferSize] */

undefined2 FUN_106edd6f0(long param_1)

{
  undefined2 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  ppuVar2 = &puStack_70;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106edd7c8;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined2 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106edd7c8; end: 106edd7db;  */

void FUN_106edd7c8(long param_1)

{
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined2 *)(*(long *)(param_1 + 0x20) + 0x50);
  return;
}



/* Entry: 106edd7dc; end: 106edd8d7; -[GCDAsyncUdpSocket userData] */

void FUN_106edd7dc(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
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
  
  ppuVar1 = &puStack_80;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106edc4b0;
  uStack_30 = 0x106edc4c0;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106edd8d8;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  uVar3 = puStack_48[5];
  _objc_retain(uVar3);
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106edd8d8; end: 106edd90b;  */

void FUN_106edd8d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x150);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106edd90c; end: 106edd9cb; -[GCDAsyncUdpSocket setUserData:] */

void FUN_106edd90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106edd9cc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106edd9cc; end: 106edda0f;  */

void FUN_106edd9cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x150) != lVar2) {
    _objc_retain(lVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x150);
    *(long *)(lVar1 + 0x150) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106edda10; end: 106eddaff; -[GCDAsyncUdpSocket notifyDidConnectToAddress:] */

void FUN_106edda10(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_udpSocket_didConnectToAddress__11267d4d8),
     (uVar2 & 1) != 0)) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106eddb00;
    puStack_60 = &UNK_110848ba8;
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    lStack_50 = param_1;
    uStack_48 = uVar3;
    _objc_retain(uVar3);
    func_0x00010007380c(uVar4,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_58);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106eddb00; end: 106eddb33;  */

void FUN_106eddb00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c27eac0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eddb34; end: 106eddc07; -[GCDAsyncUdpSocket notifyDidNotConnect:] */

void FUN_106eddb34(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = uVar1, _objc_opt_respondsToSelector(uVar1,PTR_s_udpSocket_didNotConnect__11267d4e0),
     (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106eddc08;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010007380c(uVar3,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106eddc08; end: 106eddc3b;  */

void FUN_106eddc08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c27eae0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eddc3c; end: 106eddcef; -[GCDAsyncUdpSocket notifyDidSendDataWithTag:] */

void FUN_106eddc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_udpSocket_didSendDataWithTag__11267d4f8),
     (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106eddcf0;
    puStack_50 = &UNK_110844b80;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    lStack_40 = param_1;
    uStack_38 = param_3;
    func_0x00010007380c(uVar3,&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106eddcf0; end: 106eddd23;  */

void FUN_106eddcf0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c27eb40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eddd24; end: 106edde07; -[GCDAsyncUdpSocket notifyDidNotSendDataWithTag:dueToError:] */

void FUN_106eddd24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_udpSocket_didNotSendDataWithTag__11267d4e8),
     (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106edde08;
    puStack_68 = &UNK_11084d788;
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    lStack_58 = param_1;
    uStack_48 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010007380c(uVar3,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106edde08; end: 106edde3b;  */

void FUN_106edde08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c27eb00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106edde3c; end: 106eddf67; -[GCDAsyncUdpSocket notifyDidReceiveData:fromAddress:withFilterContext:] */

void FUN_106edde3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_udpSocket_didReceiveData_fromAdd_11267d4f0),
     (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106eddf68;
    puStack_70 = &UNK_1108475b0;
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    lStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010007380c(uVar3,&puStack_88);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106eddf68; end: 106eddf9f;  */

void FUN_106eddf68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c27eb20(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eddfa0; end: 106ede073; -[GCDAsyncUdpSocket notifyDidCloseWithError:] */

void FUN_106eddfa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_udpSocketDidClose_withError__11267d500),
     (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ede074;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010007380c(uVar3,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106ede074; end: 106ede0a7;  */

void FUN_106ede074(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c27eb60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ede0a8; end: 106ede117; -[GCDAsyncUdpSocket badConfigError:] */

void FUN_106ede0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8bc58,1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ede118; end: 106ede187; -[GCDAsyncUdpSocket badParamError:] */

void FUN_106ede118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8bc58,2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ede188; end: 106ede23b; -[GCDAsyncUdpSocket gaiError:] */

void FUN_106ede188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _gai_strerror(param_3);
  func_0x00010c25d8e0(puVar2,param_2,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8b618,(long)(int)param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ede23c; end: 106ede343; -[GCDAsyncUdpSocket errnoErrorWithReason:] */

void FUN_106ede23c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  ulong uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = param_3;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ___error();
  uVar2 = (ulong)*puVar1;
  _strerror(uVar2);
  func_0x00010c25da80(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  piVar4 = (int *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar7 = *(undefined8 *)PTR__NSPOSIXErrorDomain_110345598;
  piVar5 = piVar4;
  ___error();
  func_0x00010bf99240(puVar6,param_2,uVar7,(long)*piVar5,piVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(piVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106ede344; end: 106ede34b; -[GCDAsyncUdpSocket errnoError] */

void FUN_106ede344(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf987d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_errnoErrorWithReason__1125c3b98,0);
  return;
}



/* Entry: 106ede34c; end: 106ede417; -[GCDAsyncUdpSocket sendTimeoutError] */

void FUN_106ede34c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09e800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8bc58,3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ede418; end: 106ede4e3; -[GCDAsyncUdpSocket socketClosedError] */

void FUN_106ede418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09e800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8bc58,4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ede4e4; end: 106ede553; -[GCDAsyncUdpSocket otherError:] */

void FUN_106ede4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8bc58,5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ede554; end: 106ede5e3; -[GCDAsyncUdpSocket preOp:] */

undefined8 FUN_106ede554(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (param_3 == (long *)0x0) {
      return 0;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e8bd38;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      return 1;
    }
    if (param_3 == (long *)0x0) {
      return 0;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e8bd58;
  }
  func_0x00010bf14fa0(param_1,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_3 = param_1;
  return 0;
}



/* Entry: 106ede5e4; end: 106ede74f; -[GCDAsyncUdpSocket asyncResolveHost:port:withCompletionBlock:] */

void FUN_106ede5e4(long param_1,undefined8 param_2,long param_3,undefined2 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined2 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010bf15080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ede750;
    puStack_58 = &UNK_11084aaa8;
    lStack_50 = lVar1;
    lStack_48 = param_5;
    _objc_retain(param_5);
    _objc_retain(lVar1);
    func_0x00010007380c(uVar3,&puStack_70);
    _objc_release(lStack_50);
    lVar2 = lStack_48;
  }
  else {
    func_0x00010bf51e00();
    lVar1 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106ede788;
    puStack_98 = &UNK_11084e040;
    lStack_90 = param_3;
    lStack_88 = param_1;
    lStack_80 = param_5;
    uStack_78 = param_4;
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010007380c(lVar1,&puStack_b0);
    _objc_release(lStack_80);
    _objc_release(lStack_90);
    lVar2 = param_5;
    param_5 = param_3;
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(lVar1);
  return;
}



/* Entry: 106ede750; end: 106ede787;  */

void FUN_106ede750(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ede788; end: 106edeac3;  */

void FUN_106ede788(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  ushort uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_68;
  ushort uStack_66;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0720c0();
  if ((uVar5 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar2 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = 0;
      uStack_9e = 0;
      uStack_9c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 2;
      uStack_94 = 0x11;
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      puVar7 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
      _getaddrinfo(uVar9,puVar7,&uStack_a0,&uStack_68);
      if ((int)uVar9 == 0) {
        lVar10 = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
        if (lVar10 == 0) {
          uVar9 = 0;
        }
        else {
          do {
            if (*(int *)(lVar10 + 4) == 0x1e) {
              if (*(short *)(*(long *)(lVar10 + 0x20) + 2) == 0) {
                *(ushort *)(*(long *)(lVar10 + 0x20) + 2) =
                     *(ushort *)(param_1 + 0x38) >> 8 | *(ushort *)(param_1 + 0x38) << 8;
              }
LAB_106ede99c:
              puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(puVar7);
            }
            else if (*(int *)(lVar10 + 4) == 2) goto LAB_106ede99c;
            lVar10 = *(long *)(lVar10 + 0x28);
          } while (lVar10 != 0);
          uVar9 = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
        }
        _freeaddrinfo(uVar9);
        puVar7 = puVar4;
        func_0x00010bf529e0();
        if (puVar7 == (undefined *)0x0) goto LAB_106ede938;
        uVar9 = 0;
      }
      else {
LAB_106ede938:
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bfbcae0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      goto LAB_106ede9f4;
    }
  }
  uStack_60 = 0;
  uStack_68 = 0x210;
  uStack_9e = *(ushort *)(param_1 + 0x38) >> 8 | *(ushort *)(param_1 + 0x38) << 8;
  uStack_64 = 0x100007f;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_a0 = 0x1e1c;
  uStack_90 = (undefined4)*(undefined8 *)(PTR__in6addr_loopback_11034c498 + 8);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(PTR__in6addr_loopback_11034c498 + 8) >> 0x20);
  uStack_98 = (undefined4)*(undefined8 *)PTR__in6addr_loopback_11034c498;
  uStack_94 = (undefined4)((ulong)*(undefined8 *)PTR__in6addr_loopback_11034c498 >> 0x20);
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  uStack_66 = uStack_9e;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar6);
  uVar9 = 0;
LAB_106ede9f4:
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106edeac4;
  puStack_c0 = &UNK_11084a9e8;
  _objc_retain(uVar1);
  puStack_b8 = puVar4;
  uStack_b0 = uVar9;
  uStack_a8 = uVar1;
  _objc_retain(uVar9);
  _objc_retain(puVar4);
  func_0x00010007380c(uVar8,&puStack_d8);
  _objc_release(uStack_b0);
  _objc_release(puStack_b8);
  _objc_release(uStack_a8);
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_autoreleasePoolPop();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar10 = lVar3;
    _objc_autoreleasePoolPush();
    (**(code **)(*(long *)(lVar3 + 0x30) + 0x10))
              (*(long *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar10);
    return;
  }
  return;
}



/* Entry: 106edeac4; end: 106edeafb;  */

void FUN_106edeac4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106edeafc; end: 106edee7f; -[GCDAsyncUdpSocket getAddress:error:fromAddresses:] */

undefined **
FUN_106edeafc(undefined **param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  undefined **unaff_x23;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **unaff_x24;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined **ppuVar19;
  long *plVar20;
  long unaff_x27;
  undefined8 *puVar21;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_320;
  undefined1 *puStack_318;
  undefined *puStack_310;
  undefined **ppuStack_308;
  undefined *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined2 uStack_2a0;
  ushort uStack_29e;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  long lStack_268;
  undefined8 *puStack_260;
  long lStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar17 = auStack_f0;
  puVar9 = (undefined8 *)0x10;
  puVar4 = param_5;
  func_0x00010bf52a60();
  if (puVar4 == (undefined8 *)0x0) {
    ppuVar19 = (undefined **)0x0;
    bVar2 = false;
  }
  else {
    ppuVar19 = (undefined **)0x0;
    bVar2 = false;
    unaff_x27 = *plStack_1a0;
    do {
      unaff_x20 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != unaff_x27) {
          _objc_enumerationMutation(param_5);
        }
        unaff_x24 = *(undefined ***)(lStack_1a8 + (long)unaff_x20 * 8);
        ppuVar8 = param_1;
        _objc_opt_class();
        iVar3 = (int)ppuVar8;
        func_0x00010bfa0800();
        if (iVar3 == 0x1e) {
          ppuVar19 = (undefined **)0x1;
        }
        else if (iVar3 == 2) {
          bVar2 = true;
        }
        unaff_x20 = (undefined8 *)((long)unaff_x20 + 1);
      } while (puVar4 != unaff_x20);
      puVar17 = auStack_f0;
      puVar9 = (undefined8 *)0x10;
      puVar4 = param_5;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
    unaff_x23 = (undefined **)0x0;
  }
  if ((((ulong)param_1[9] & 1) == 0) || ((int)ppuVar19 != 0)) {
    if (((ulong)param_1[9] & 2) != 0 && !bVar2) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e8bdb8;
      goto LAB_106eded50;
    }
    if ((*(uint *)((long)param_1 + 0x44) & 0x40) != 0 && (int)ppuVar19 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e8bdd8;
      goto LAB_106eded50;
    }
    if ((*(uint *)((long)param_1 + 0x44) & 0x80) != 0 && !bVar2) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e8bdf8;
      goto LAB_106eded50;
    }
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1d8 = 0;
    puStack_1e0 = (undefined8 *)0x0;
    puStack_1f8 = param_4;
    _objc_retain(param_5);
    ppuVar8 = &puStack_1f0;
    puVar17 = auStack_170;
    puVar9 = (undefined8 *)0x10;
    puVar4 = param_5;
    func_0x00010bf52a60();
    if (puVar4 == (undefined8 *)0x0) {
      unaff_x27 = 1;
      unaff_x23 = (undefined **)0x0;
      unaff_x24 = (undefined **)0x0;
    }
    else {
      unaff_x23 = (undefined **)0x0;
      unaff_x24 = (undefined **)0x0;
      param_4 = (undefined8 *)*puStack_1e0;
      unaff_x27 = 1;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if ((undefined8 *)*puStack_1e0 != param_4) {
            _objc_enumerationMutation(param_5);
          }
          ppuVar19 = *(undefined ***)(lStack_1e8 + (long)puVar12 * 8);
          ppuVar8 = param_1;
          _objc_opt_class();
          iVar3 = (int)ppuVar8;
          ppuVar8 = ppuVar19;
          func_0x00010bfa0800();
          if (iVar3 == 2) {
            if (unaff_x23 == (undefined **)0x0) {
              _objc_retain(ppuVar19);
              unaff_x23 = ppuVar19;
              if (unaff_x24 != (undefined **)0x0) goto LAB_106ededf0;
              unaff_x27 = 1;
            }
          }
          else if (unaff_x24 == (undefined **)0x0) {
            _objc_retain(ppuVar19);
            unaff_x24 = ppuVar19;
            if (unaff_x23 != (undefined **)0x0) goto LAB_106ededf0;
            unaff_x27 = 0;
          }
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar4 != puVar12);
        ppuVar8 = &puStack_1f0;
        puVar17 = auStack_170;
        puVar9 = (undefined8 *)0x10;
        puVar4 = param_5;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
LAB_106ededf0:
    _objc_release(param_5);
    unaff_x20 = puStack_1f8;
    uVar1 = (ushort)(unaff_x23 != (undefined **)0x0) & *(ushort *)(param_1 + 9) >> 2;
    if (unaff_x24 == (undefined **)0x0) {
      uVar1 = 1;
    }
    if (((*(ushort *)(param_1 + 9) >> 3 & 1) == 0) || (unaff_x24 == (undefined **)0x0)) {
      uVar11 = (uint)(unaff_x23 != (undefined **)0x0) & (uint)unaff_x27;
    }
    else {
      uVar11 = 0;
    }
    param_1 = unaff_x23;
    if (uVar1 == 0 && uVar11 == 0) {
      param_1 = unaff_x24;
    }
    uVar10 = 2;
    if (uVar1 == 0 && uVar11 == 0) {
      uVar10 = 0x1e;
    }
    ppuVar16 = (undefined **)(ulong)uVar10;
    _objc_retain(param_1);
    if (param_3 != (undefined8 *)0x0) {
      _objc_retainAutorelease(param_1);
      *param_3 = param_1;
    }
    if (unaff_x20 != (undefined8 *)0x0) {
      *unaff_x20 = 0;
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e8bd98;
LAB_106eded50:
    func_0x00010c0ede80();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 == (undefined8 *)0x0) {
      ppuVar16 = (undefined **)0x0;
    }
    else {
      _objc_retainAutorelease(param_1);
      ppuVar16 = (undefined **)0x0;
      *param_4 = param_1;
    }
  }
  _objc_release(param_1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar16;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_106edee80;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar9;
  puVar12 = param_6;
  puStack_260 = param_4;
  lStack_258 = unaff_x27;
  ppuStack_250 = ppuVar19;
  ppuStack_248 = ppuVar16;
  ppuStack_240 = unaff_x24;
  ppuStack_238 = unaff_x23;
  ppuStack_230 = param_1;
  puStack_228 = param_3;
  puStack_220 = unaff_x20;
  puStack_218 = param_5;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  uVar11 = (uint)puVar17;
  uVar1 = (ushort)((ulong)puVar17 >> 8);
  if (ppuVar8 == (undefined **)0x0) {
    uStack_29e = uVar1 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
    uStack_2c0._0_4_ = CONCAT22(uStack_29e,0x210);
    uStack_2c0 = (undefined *)(ulong)(uint)uStack_2c0;
    puVar21 = (undefined8 *)PTR__in6addr_any_11034c490;
  }
  else {
    ppuVar16 = ppuVar8;
    func_0x00010c0720c0();
    if (((ulong)ppuVar16 & 1) == 0) {
      ppuVar16 = &PTR____CFConstantStringClassReference_110e8b7d8;
      ppuVar13 = ppuVar8;
      func_0x00010c0720c0();
      if ((int)ppuVar13 == 0) {
        ppuVar13 = ppuVar8;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        iVar3 = (int)&plStack_2c8;
        _getifaddrs();
        if (iVar3 == 0) {
          if (plStack_2c8 == (long *)0x0) {
            plStack_2c8 = (long *)0x0;
            puVar15 = (undefined *)0x0;
            puVar14 = (undefined *)0x0;
          }
          else {
            puVar14 = (undefined *)0x0;
            puVar15 = (undefined *)0x0;
            uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            puVar17 = (undefined1 *)(ulong)uVar11;
            plVar20 = plStack_2c8;
            do {
              uVar1 = (ushort)uVar11;
              if ((puVar14 == (undefined *)0x0) &&
                 (puVar21 = (undefined8 *)plVar20[3], *(char *)((long)puVar21 + 1) == '\x02')) {
                lVar18 = plVar20[1];
                _strcmp(lVar18,ppuVar13);
                if ((int)lVar18 == 0) {
                  uStack_298 = (undefined4)puVar21[1];
                  uStack_294 = (undefined4)((ulong)puVar21[1] >> 0x20);
                  uStack_2a0 = (undefined2)*puVar21;
                  uStack_29c = (undefined4)((ulong)*puVar21 >> 0x20);
                  ppuVar16 = (undefined **)&uStack_2a0;
                  uStack_29e = uVar1;
LAB_106edf158:
                  puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
                  func_0x00010bf64a00();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  ppuVar16 = (undefined **)&uStack_2a0;
                  lVar18 = 2;
                  _inet_ntop(2,(long)puVar21 + 4);
                  if (lVar18 != 0) {
                    puVar6 = &uStack_2a0;
                    _strcmp(puVar6,ppuVar13);
                    if ((int)puVar6 == 0) {
                      uStack_2b8 = (undefined4)puVar21[1];
                      uStack_2b4 = (undefined4)((ulong)puVar21[1] >> 0x20);
                      uStack_2c0._4_4_ = (undefined4)((ulong)*puVar21 >> 0x20);
                      uStack_2c0._0_2_ = (undefined2)*puVar21;
                      uStack_2c0._0_4_ = CONCAT22(uVar1,(undefined2)uStack_2c0);
                      ppuVar16 = (undefined **)&uStack_2c0;
                      goto LAB_106edf158;
                    }
                  }
                  puVar14 = (undefined *)0x0;
                }
              }
              else if (puVar15 == (undefined *)0x0) {
                puVar21 = (undefined8 *)plVar20[3];
                if (*(char *)((long)puVar21 + 1) == '\x1e') {
                  lVar18 = plVar20[1];
                  _strcmp(lVar18,ppuVar13);
                  if ((int)lVar18 == 0) {
                    uStack_298 = (undefined4)puVar21[1];
                    uStack_2a0 = (undefined2)*puVar21;
                    uStack_29c = (undefined4)((ulong)*puVar21 >> 0x20);
                    uStack_28c = (undefined4)*(undefined8 *)((long)puVar21 + 0x14);
                    uStack_288 = (undefined4)((ulong)*(undefined8 *)((long)puVar21 + 0x14) >> 0x20);
                    uStack_294 = (undefined4)*(undefined8 *)((long)puVar21 + 0xc);
                    uStack_290 = (undefined4)((ulong)*(undefined8 *)((long)puVar21 + 0xc) >> 0x20);
                    ppuVar16 = (undefined **)&uStack_2a0;
                    uStack_29e = uVar1;
LAB_106edf18c:
                    puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
                    func_0x00010bf64a00();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_106edf1a0;
                  }
                  ppuVar16 = (undefined **)&uStack_2a0;
                  lVar18 = 0x1e;
                  _inet_ntop(0x1e,puVar21 + 1);
                  if (lVar18 != 0) {
                    puVar6 = &uStack_2a0;
                    _strcmp(puVar6,ppuVar13);
                    if ((int)puVar6 == 0) {
                      uStack_2ac = *(undefined8 *)((long)puVar21 + 0x14);
                      uStack_2b8 = (undefined4)puVar21[1];
                      uStack_2b4 = (undefined4)*(undefined8 *)((long)puVar21 + 0xc);
                      uStack_2b0 = (undefined4)((ulong)*(undefined8 *)((long)puVar21 + 0xc) >> 0x20)
                      ;
                      uStack_2c0._4_4_ = (undefined4)((ulong)*puVar21 >> 0x20);
                      uStack_2c0._0_2_ = (undefined2)*puVar21;
                      uStack_2c0._0_4_ = CONCAT22(uVar1,(undefined2)uStack_2c0);
                      ppuVar16 = (undefined **)&uStack_2c0;
                      goto LAB_106edf18c;
                    }
                  }
                }
                puVar15 = (undefined *)0x0;
              }
LAB_106edf1a0:
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          ppuVar19 = (undefined **)0x0;
          _freeifaddrs(plStack_2c8);
        }
        else {
          puVar15 = (undefined *)0x0;
          puVar14 = (undefined *)0x0;
        }
        goto LAB_106edefb4;
      }
    }
    uStack_29e = uVar1 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
    uStack_2c0._0_4_ = CONCAT22(uStack_29e,0x210);
    uStack_2c0 = (undefined *)CONCAT44(0x100007f,(uint)uStack_2c0);
    puVar21 = (undefined8 *)PTR__in6addr_loopback_11034c498;
  }
  uStack_288 = 0;
  uStack_29c = 0;
  uStack_2a0 = 0x1e1c;
  uStack_2b4 = 0;
  uStack_2b8 = 0;
  uStack_290 = (undefined4)puVar21[1];
  uStack_28c = (undefined4)((ulong)puVar21[1] >> 0x20);
  uStack_298 = (undefined4)*puVar21;
  uStack_294 = (undefined4)((ulong)*puVar21 >> 0x20);
  ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = (undefined **)&uStack_2a0;
  puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
LAB_106edefb4:
  if (puVar9 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar14);
    *puVar9 = puVar14;
  }
  if (param_6 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar15);
    *param_6 = puVar15;
  }
  _objc_release(puVar15);
  _objc_release(puVar14);
  ppuVar5 = ppuVar8;
  _objc_release(ppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    pcStack_2d8 = FUN_106edf1c8;
    ppuStack_320 = ppuVar19;
    puStack_318 = puVar17;
    puStack_310 = puVar15;
    ppuStack_308 = ppuVar13;
    puStack_300 = puVar14;
    puStack_2f8 = puVar9;
    puStack_2f0 = param_6;
    ppuStack_2e8 = ppuVar8;
    ppuStack_2e0 = &puStack_210;
    _objc_retain(ppuVar16);
    if (ppuVar16 == (undefined **)0x0) {
      puVar15 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_348 = 0x1100000002;
      uStack_350 = 4;
      ppuVar19 = ppuVar16;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      puVar15 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
      _getaddrinfo(ppuVar19,puVar15,&uStack_350,&lStack_358);
      if ((int)ppuVar19 == 0) {
        if (lStack_358 == 0) {
          lStack_358 = 0;
          puVar15 = (undefined *)0x0;
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = (undefined *)0x0;
          puVar15 = (undefined *)0x0;
          lVar18 = lStack_358;
          do {
            if ((puVar14 == (undefined *)0x0) && (*(int *)(lVar18 + 4) == 2)) {
              puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x00010bf64a00();
              _objc_retainAutoreleasedReturnValue();
            }
            else if (puVar15 == (undefined *)0x0) {
              if (*(int *)(lVar18 + 4) == 0x1e) {
                puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x00010bf64a00();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar15 = (undefined *)0x0;
              }
            }
            lVar18 = *(long *)(lVar18 + 0x28);
          } while (lVar18 != 0);
        }
        _freeaddrinfo(lStack_358);
      }
      else {
        puVar15 = (undefined *)0x0;
        puVar14 = (undefined *)0x0;
      }
      _objc_release(puVar7);
    }
    if (puVar4 != (undefined8 *)0x0) {
      _objc_retainAutorelease(puVar14);
      *puVar4 = puVar14;
    }
    if (puVar12 != (undefined8 *)0x0) {
      _objc_retainAutorelease(puVar15);
      *puVar12 = puVar15;
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(ppuVar16);
    return ppuVar16;
  }
  return ppuVar5;
}



/* Entry: 106edee80; end: 106edf1c7; -[GCDAsyncUdpSocket convertIntefaceDescription:port:intoAddress4:address6:] */

void FUN_106edee80(undefined8 param_1,undefined8 param_2,undefined **param_3,ulong param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  ushort uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 unaff_x26;
  long *plVar13;
  undefined8 *puVar14;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined2 uStack_a0;
  ushort uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_5;
  puVar7 = param_6;
  _objc_retain(param_3);
  uVar11 = (uint)param_4;
  uVar1 = (ushort)(param_4 >> 8);
  if (param_3 == (undefined **)0x0) {
    uStack_9e = uVar1 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
    uStack_c0._0_4_ = CONCAT22(uStack_9e,0x210);
    uStack_c0 = (undefined *)(ulong)(uint)uStack_c0;
    puVar14 = (undefined8 *)PTR__in6addr_any_11034c490;
  }
  else {
    ppuVar3 = param_3;
    func_0x00010c0720c0();
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e8b7d8;
      ppuVar8 = param_3;
      func_0x00010c0720c0();
      if ((int)ppuVar8 == 0) {
        ppuVar8 = param_3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        iVar2 = (int)&plStack_c8;
        _getifaddrs();
        if (iVar2 == 0) {
          if (plStack_c8 == (long *)0x0) {
            plStack_c8 = (long *)0x0;
            puVar10 = (undefined *)0x0;
            puVar9 = (undefined *)0x0;
          }
          else {
            puVar9 = (undefined *)0x0;
            puVar10 = (undefined *)0x0;
            uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            param_4 = (ulong)uVar11;
            plVar13 = plStack_c8;
            do {
              uVar1 = (ushort)uVar11;
              if ((puVar9 == (undefined *)0x0) &&
                 (puVar14 = (undefined8 *)plVar13[3], *(char *)((long)puVar14 + 1) == '\x02')) {
                lVar12 = plVar13[1];
                _strcmp(lVar12,ppuVar8);
                if ((int)lVar12 == 0) {
                  uStack_98 = (undefined4)puVar14[1];
                  uStack_94 = (undefined4)((ulong)puVar14[1] >> 0x20);
                  uStack_a0 = (undefined2)*puVar14;
                  uStack_9c = (undefined4)((ulong)*puVar14 >> 0x20);
                  ppuVar3 = (undefined **)&uStack_a0;
                  uStack_9e = uVar1;
LAB_106edf158:
                  puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
                  func_0x00010bf64a00();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  ppuVar3 = (undefined **)&uStack_a0;
                  lVar12 = 2;
                  _inet_ntop(2,(long)puVar14 + 4);
                  if (lVar12 != 0) {
                    puVar4 = &uStack_a0;
                    _strcmp(puVar4,ppuVar8);
                    if ((int)puVar4 == 0) {
                      uStack_b8 = (undefined4)puVar14[1];
                      uStack_b4 = (undefined4)((ulong)puVar14[1] >> 0x20);
                      uStack_c0._4_4_ = (undefined4)((ulong)*puVar14 >> 0x20);
                      uStack_c0._0_2_ = (undefined2)*puVar14;
                      uStack_c0._0_4_ = CONCAT22(uVar1,(undefined2)uStack_c0);
                      ppuVar3 = (undefined **)&uStack_c0;
                      goto LAB_106edf158;
                    }
                  }
                  puVar9 = (undefined *)0x0;
                }
              }
              else if (puVar10 == (undefined *)0x0) {
                puVar14 = (undefined8 *)plVar13[3];
                if (*(char *)((long)puVar14 + 1) == '\x1e') {
                  lVar12 = plVar13[1];
                  _strcmp(lVar12,ppuVar8);
                  if ((int)lVar12 == 0) {
                    uStack_98 = (undefined4)puVar14[1];
                    uStack_a0 = (undefined2)*puVar14;
                    uStack_9c = (undefined4)((ulong)*puVar14 >> 0x20);
                    uStack_8c = (undefined4)*(undefined8 *)((long)puVar14 + 0x14);
                    uStack_88 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0x14) >> 0x20);
                    uStack_94 = (undefined4)*(undefined8 *)((long)puVar14 + 0xc);
                    uStack_90 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
                    ppuVar3 = (undefined **)&uStack_a0;
                    uStack_9e = uVar1;
LAB_106edf18c:
                    puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
                    func_0x00010bf64a00();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_106edf1a0;
                  }
                  ppuVar3 = (undefined **)&uStack_a0;
                  lVar12 = 0x1e;
                  _inet_ntop(0x1e,puVar14 + 1);
                  if (lVar12 != 0) {
                    puVar4 = &uStack_a0;
                    _strcmp(puVar4,ppuVar8);
                    if ((int)puVar4 == 0) {
                      uStack_ac = *(undefined8 *)((long)puVar14 + 0x14);
                      uStack_b8 = (undefined4)puVar14[1];
                      uStack_b4 = (undefined4)*(undefined8 *)((long)puVar14 + 0xc);
                      uStack_b0 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
                      uStack_c0._4_4_ = (undefined4)((ulong)*puVar14 >> 0x20);
                      uStack_c0._0_2_ = (undefined2)*puVar14;
                      uStack_c0._0_4_ = CONCAT22(uVar1,(undefined2)uStack_c0);
                      ppuVar3 = (undefined **)&uStack_c0;
                      goto LAB_106edf18c;
                    }
                  }
                }
                puVar10 = (undefined *)0x0;
              }
LAB_106edf1a0:
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          unaff_x26 = 0;
          _freeifaddrs(plStack_c8);
        }
        else {
          puVar10 = (undefined *)0x0;
          puVar9 = (undefined *)0x0;
        }
        goto LAB_106edefb4;
      }
    }
    uStack_9e = uVar1 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
    uStack_c0._0_4_ = CONCAT22(uStack_9e,0x210);
    uStack_c0 = (undefined *)CONCAT44(0x100007f,(uint)uStack_c0);
    puVar14 = (undefined8 *)PTR__in6addr_loopback_11034c498;
  }
  uStack_88 = 0;
  uStack_9c = 0;
  uStack_a0 = 0x1e1c;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_90 = (undefined4)puVar14[1];
  uStack_8c = (undefined4)((ulong)puVar14[1] >> 0x20);
  uStack_98 = (undefined4)*puVar14;
  uStack_94 = (undefined4)((ulong)*puVar14 >> 0x20);
  ppuVar8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)&uStack_a0;
  puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
LAB_106edefb4:
  if (param_5 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar9);
    *param_5 = puVar9;
  }
  if (param_6 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar10);
    *param_6 = puVar10;
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_106edf1c8;
    uStack_120 = unaff_x26;
    uStack_118 = param_4;
    puStack_110 = puVar10;
    ppuStack_108 = ppuVar8;
    puStack_100 = puVar9;
    puStack_f8 = param_5;
    puStack_f0 = param_6;
    ppuStack_e8 = param_3;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      puVar10 = (undefined *)0x0;
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0x1100000002;
      uStack_150 = 4;
      ppuVar8 = ppuVar3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      puVar10 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
      _getaddrinfo(ppuVar8,puVar10,&uStack_150,&lStack_158);
      if ((int)ppuVar8 == 0) {
        if (lStack_158 == 0) {
          lStack_158 = 0;
          puVar10 = (undefined *)0x0;
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar9 = (undefined *)0x0;
          puVar10 = (undefined *)0x0;
          lVar12 = lStack_158;
          do {
            if ((puVar9 == (undefined *)0x0) && (*(int *)(lVar12 + 4) == 2)) {
              puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x00010bf64a00();
              _objc_retainAutoreleasedReturnValue();
            }
            else if (puVar10 == (undefined *)0x0) {
              if (*(int *)(lVar12 + 4) == 0x1e) {
                puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x00010bf64a00();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar10 = (undefined *)0x0;
              }
            }
            lVar12 = *(long *)(lVar12 + 0x28);
          } while (lVar12 != 0);
        }
        _freeaddrinfo(lStack_158);
      }
      else {
        puVar10 = (undefined *)0x0;
        puVar9 = (undefined *)0x0;
      }
      _objc_release(puVar5);
    }
    if (puVar6 != (undefined8 *)0x0) {
      _objc_retainAutorelease(puVar9);
      *puVar6 = puVar9;
    }
    if (puVar7 != (undefined8 *)0x0) {
      _objc_retainAutorelease(puVar10);
      *puVar7 = puVar10;
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(ppuVar3);
    return;
  }
  return;
}



/* Entry: 106edf1c8; end: 106edf387; -[GCDAsyncUdpSocket convertNumericHost:port:intoAddress4:address6:] */

void FUN_106edf1c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0x1100000002;
    uStack_80 = 4;
    lVar4 = param_3;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    puVar3 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc3520();
    _getaddrinfo(lVar4,puVar3,&uStack_80,&lStack_88);
    if ((int)lVar4 == 0) {
      if (lStack_88 == 0) {
        lStack_88 = 0;
        puVar3 = (undefined *)0x0;
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = (undefined *)0x0;
        puVar3 = (undefined *)0x0;
        lVar4 = lStack_88;
        do {
          if ((puVar2 == (undefined *)0x0) && (*(int *)(lVar4 + 4) == 2)) {
            puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf64a00();
            _objc_retainAutoreleasedReturnValue();
          }
          else if (puVar3 == (undefined *)0x0) {
            if (*(int *)(lVar4 + 4) == 0x1e) {
              puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x00010bf64a00();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar3 = (undefined *)0x0;
            }
          }
          lVar4 = *(long *)(lVar4 + 0x28);
        } while (lVar4 != 0);
      }
      _freeaddrinfo(lStack_88);
    }
    else {
      puVar3 = (undefined *)0x0;
      puVar2 = (undefined *)0x0;
    }
    _objc_release(puVar1);
  }
  if (param_5 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar2);
    *param_5 = puVar2;
  }
  if (param_6 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar3);
    *param_6 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106edf388; end: 106edf3f7; -[GCDAsyncUdpSocket isConnectedToAddress4:] */

bool FUN_106edf388(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xfc) == 2) {
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    lVar2 = *(long *)(param_1 + 0xe8);
    func_0x00010bf25f00();
    if (*(int *)(param_3 + 4) == *(int *)(lVar2 + 4)) {
      bVar1 = *(short *)(param_3 + 2) == *(short *)(lVar2 + 2);
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 106edf3f8; end: 106edf46b; -[GCDAsyncUdpSocket isConnectedToAddress6:] */

bool FUN_106edf3f8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xfc) == 0x1e) {
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    lVar2 = *(long *)(param_1 + 0xe8);
    func_0x00010bf25f00();
    if (*(long *)(param_3 + 8) == *(long *)(lVar2 + 8) &&
        *(long *)(param_3 + 0x10) == *(long *)(lVar2 + 0x10)) {
      bVar1 = *(short *)(param_3 + 2) == *(short *)(lVar2 + 2);
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 106edf46c; end: 106edf52b; -[GCDAsyncUdpSocket indexOfInterfaceAddr4:] */

undefined8 FUN_106edf46c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plStack_28;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar3 = param_3, func_0x00010c08fa60(), lVar3 == 0x10)) {
    lVar3 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    iVar2 = (int)&plStack_28;
    _getifaddrs();
    plVar1 = plStack_28;
    if (iVar2 == 0) {
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if ((*(char *)(plVar1[3] + 1) == '\x02') && (*(int *)(plVar1[3] + 4) == *(int *)(lVar3 + 4))
           ) {
          uVar4 = plVar1[1];
          _if_nametoindex(uVar4);
          goto LAB_106edf524;
        }
      }
      uVar4 = 0;
LAB_106edf524:
      _freeifaddrs(plStack_28);
      goto LAB_106edf4bc;
    }
  }
  uVar4 = 0;
LAB_106edf4bc:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106edf52c; end: 106edf5ef; -[GCDAsyncUdpSocket indexOfInterfaceAddr6:] */

undefined8 FUN_106edf52c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plStack_28;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar3 = param_3, func_0x00010c08fa60(), lVar3 == 0x1c)) {
    lVar3 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    iVar2 = (int)&plStack_28;
    _getifaddrs();
    plVar1 = plStack_28;
    if (iVar2 == 0) {
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        lVar4 = plVar1[3];
        if ((*(char *)(lVar4 + 1) == '\x1e') &&
           (*(long *)(lVar4 + 8) == *(long *)(lVar3 + 8) &&
            *(long *)(lVar4 + 0x10) == *(long *)(lVar3 + 0x10))) {
          uVar5 = plVar1[1];
          _if_nametoindex(uVar5);
          goto LAB_106edf5e8;
        }
      }
      uVar5 = 0;
LAB_106edf5e8:
      _freeifaddrs(plStack_28);
      goto LAB_106edf57c;
    }
  }
  uVar5 = 0;
LAB_106edf57c:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106edf5f0; end: 106edf773; -[GCDAsyncUdpSocket setupSendAndReceiveSourcesForSocket4] */

void FUN_106edf5f0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar2 = PTR___dispatch_source_type_write_11034be40;
  _dispatch_source_create
            (PTR___dispatch_source_type_write_11034be40,(long)*(int *)(param_1 + 0x54),0,
             *(undefined8 *)(param_1 + 0x60));
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR___dispatch_source_type_read_11034be30;
  _dispatch_source_create
            (PTR___dispatch_source_type_read_11034be30,(long)*(int *)(param_1 + 0x54),0,
             *(undefined8 *)(param_1 + 0x60));
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106edf774;
  puStack_60 = &UNK_110842e18;
  lStack_58 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x68),&puStack_78);
  puStack_a0 = puVar2;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106edf7dc;
  puStack_88 = &UNK_110842e18;
  lStack_80 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x78),&puStack_a0);
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 2;
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  puStack_f0 = puVar2;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106edf834;
  puStack_d8 = &UNK_1108859b8;
  puStack_d0 = &uStack_c0;
  uStack_c8 = uVar1;
  puStack_b8 = &uStack_c0;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_1 + 0x68),&puStack_f0);
  puStack_120 = puVar2;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x106edf858;
  puStack_108 = &UNK_1108859b8;
  puStack_100 = &uStack_c0;
  uStack_f8 = uVar1;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_1 + 0x78),&puStack_120);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x1500;
  __Block_object_dispose(&uStack_c0,8);
  return;
}



/* Entry: 106edf774; end: 106edf7db;  */

void FUN_106edf774(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  *(uint *)(*(long *)(param_1 + 0x20) + 0x44) = *(uint *)(*(long *)(param_1 + 0x20) + 0x44) | 0x1000
  ;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x90);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x20) == '\x01')) || (*(char *)(lVar2 + 0x21) == '\x01'))
  {
    func_0x00010c2641e0();
  }
  else {
    func_0x00010bf87580();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106edf7dc; end: 106edf833;  */

void FUN_106edf7dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  _dispatch_source_get_data();
  *(undefined8 *)(lVar3 + 0xa0) = uVar2;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xa0) == 0) {
    func_0x00010bf87560();
  }
  else {
    func_0x00010bf87540();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}


