/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106edf834; end: 106edf87b;  */

void FUN_106edf834(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  iVar1 = *(int *)(lVar2 + 0x18) + -1;
  *(int *)(lVar2 + 0x18) = iVar1;
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__close_11034bfc8)(*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 106edf87c; end: 106edf9ff; -[GCDAsyncUdpSocket setupSendAndReceiveSourcesForSocket6] */

void FUN_106edf87c(long param_1)

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
            (PTR___dispatch_source_type_write_11034be40,(long)*(int *)(param_1 + 0x58),0,
             *(undefined8 *)(param_1 + 0x60));
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR___dispatch_source_type_read_11034be30;
  _dispatch_source_create
            (PTR___dispatch_source_type_read_11034be30,(long)*(int *)(param_1 + 0x58),0,
             *(undefined8 *)(param_1 + 0x60));
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106edfa00;
  puStack_60 = &UNK_110842e18;
  lStack_58 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x70),&puStack_78);
  puStack_a0 = puVar2;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106edfa68;
  puStack_88 = &UNK_110842e18;
  lStack_80 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x80),&puStack_a0);
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 2;
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  puStack_f0 = puVar2;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106edfac0;
  puStack_d8 = &UNK_1108859b8;
  puStack_d0 = &uStack_c0;
  uStack_c8 = uVar1;
  puStack_b8 = &uStack_c0;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_1 + 0x70),&puStack_f0);
  puStack_120 = puVar2;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x106edfae4;
  puStack_108 = &UNK_1108859b8;
  puStack_100 = &uStack_c0;
  uStack_f8 = uVar1;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_1 + 0x80),&puStack_120);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x2a00;
  __Block_object_dispose(&uStack_c0,8);
  return;
}



/* Entry: 106edfa00; end: 106edfa67;  */

void FUN_106edfa00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  *(uint *)(*(long *)(param_1 + 0x20) + 0x44) = *(uint *)(*(long *)(param_1 + 0x20) + 0x44) | 0x2000
  ;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x90);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x20) == '\x01')) || (*(char *)(lVar2 + 0x21) == '\x01'))
  {
    func_0x00010c264200();
  }
  else {
    func_0x00010bf87580();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106edfa68; end: 106edfabf;  */

void FUN_106edfa68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  _dispatch_source_get_data();
  *(undefined8 *)(lVar3 + 0xa8) = uVar2;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xa8) == 0) {
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



/* Entry: 106edfac0; end: 106edfb07;  */

void FUN_106edfac0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  iVar1 = *(int *)(lVar2 + 0x18) + -1;
  *(int *)(lVar2 + 0x18) = iVar1;
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__close_11034bfc8)(*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 106edfb08; end: 106edfdd3; -[GCDAsyncUdpSocket createSocket4:socket6:error:] */

undefined8 FUN_106edfb08(long param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106edfc14;
  puStack_48 = &UNK_1109832d8;
  lStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retainBlock();
  if (param_3 == 0) {
LAB_106edfb84:
    if (param_4 != 0) {
      puVar2 = (undefined1 *)ppuVar1;
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,0x1e);
      *(int *)(param_1 + 0x58) = (int)puVar2;
      if ((int)puVar2 == -1) {
        if (*(int *)(param_1 + 0x54) != -1) {
          _close();
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
          goto LAB_106edfbf4;
        }
        goto LAB_106edfbf0;
      }
    }
    if (param_3 != 0) {
      func_0x00010c229520(param_1);
    }
    if (param_4 != 0) {
      func_0x00010c229540(param_1);
    }
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1;
    uVar3 = 1;
  }
  else {
    puVar2 = (undefined1 *)ppuVar1;
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,2);
    *(int *)(param_1 + 0x54) = (int)puVar2;
    if ((int)puVar2 != -1) goto LAB_106edfb84;
LAB_106edfbf0:
    uVar3 = 0;
  }
LAB_106edfbf4:
  _objc_release(ppuVar1);
  return uVar3;
}



/* Entry: 106edfdd4; end: 106edfe1b; -[GCDAsyncUdpSocket createSockets:] */

void FUN_106edfdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c074ec0();
  uVar2 = param_1;
  func_0x00010c074f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf59050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_createSocket4_socket6_error__1125b3db8,uVar1,uVar2,param_3);
  return;
}



/* Entry: 106edfe1c; end: 106edfe57; -[GCDAsyncUdpSocket suspendSend4Source] */

void FUN_106edfe1c(long param_1)

{
  if ((*(long *)(param_1 + 0x68) != 0) && ((*(byte *)(param_1 + 0x45) & 1) == 0)) {
    _dispatch_suspend();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x100;
  }
  return;
}



/* Entry: 106edfe58; end: 106edfe93; -[GCDAsyncUdpSocket suspendSend6Source] */

void FUN_106edfe58(long param_1)

{
  if ((*(long *)(param_1 + 0x70) != 0) && ((*(byte *)(param_1 + 0x45) >> 1 & 1) == 0)) {
    _dispatch_suspend();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x200;
  }
  return;
}



/* Entry: 106edfe94; end: 106edfecf; -[GCDAsyncUdpSocket resumeSend4Source] */

void FUN_106edfe94(long param_1)

{
  if ((*(long *)(param_1 + 0x68) != 0) && ((*(byte *)(param_1 + 0x45) & 1) != 0)) {
    _dispatch_resume();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffeff;
  }
  return;
}



/* Entry: 106edfed0; end: 106edff0b; -[GCDAsyncUdpSocket resumeSend6Source] */

void FUN_106edfed0(long param_1)

{
  if ((*(long *)(param_1 + 0x70) != 0) && ((*(byte *)(param_1 + 0x45) >> 1 & 1) != 0)) {
    _dispatch_resume();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffdff;
  }
  return;
}



/* Entry: 106edff0c; end: 106edff47; -[GCDAsyncUdpSocket suspendReceive4Source] */

void FUN_106edff0c(long param_1)

{
  if ((*(long *)(param_1 + 0x78) != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) {
    _dispatch_suspend();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x400;
  }
  return;
}



/* Entry: 106edff48; end: 106edff83; -[GCDAsyncUdpSocket suspendReceive6Source] */

void FUN_106edff48(long param_1)

{
  if ((*(long *)(param_1 + 0x80) != 0) && ((*(byte *)(param_1 + 0x45) >> 3 & 1) == 0)) {
    _dispatch_suspend();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x800;
  }
  return;
}



/* Entry: 106edff84; end: 106edffbf; -[GCDAsyncUdpSocket resumeReceive4Source] */

void FUN_106edff84(long param_1)

{
  if ((*(long *)(param_1 + 0x78) != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) {
    _dispatch_resume();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffbff;
  }
  return;
}



/* Entry: 106edffc0; end: 106edfffb; -[GCDAsyncUdpSocket resumeReceive6Source] */

void FUN_106edffc0(long param_1)

{
  if ((*(long *)(param_1 + 0x80) != 0) && ((*(byte *)(param_1 + 0x45) >> 3 & 1) != 0)) {
    _dispatch_resume();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffff7ff;
  }
  return;
}



/* Entry: 106edfffc; end: 106ee008f; -[GCDAsyncUdpSocket closeSocket4] */

void FUN_106edfffc(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x54) != -1) {
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x68));
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x78));
    func_0x00010c13d820(param_1);
    func_0x00010c13d6c0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xffffefff;
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    _objc_release(uVar1);
    *(undefined2 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 106ee0090; end: 106ee0123; -[GCDAsyncUdpSocket closeSocket6] */

void FUN_106ee0090(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x58) != -1) {
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x70));
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x80));
    func_0x00010c13d840(param_1);
    func_0x00010c13d6e0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar1);
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xffffdfff;
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    _objc_release(uVar1);
    *(undefined2 *)(param_1 + 0xe0) = 0;
  }
  return;
}



/* Entry: 106ee0124; end: 106ee0157; -[GCDAsyncUdpSocket closeSockets] */

void FUN_106ee0124(long param_1)

{
  func_0x00010bf3dd40();
  func_0x00010bf3dd60(param_1);
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffe;
  return;
}



/* Entry: 106ee0158; end: 106ee0303; -[GCDAsyncUdpSocket getLocalAddress:host:port:forSocket:withFamily:] */

undefined *
FUN_106ee0158(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined2 *param_5,undefined8 param_6,int param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined4 uStack_68;
  undefined1 auStack_64 [28];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  if (param_7 == 0x1e) {
    uStack_68 = 0x1c;
    _getsockname(param_6,auStack_64,&uStack_68);
    if ((int)param_6 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      func_0x00010bfe45c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      uVar6 = (undefined2)param_1;
      func_0x00010c1040c0();
      goto joined_r0x000106ee02f8;
    }
  }
  else if (param_7 == 2) {
    uStack_68 = 0x10;
    _getsockname(param_6,auStack_64,&uStack_68);
    if ((int)param_6 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      func_0x00010bfe45a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      uVar6 = (undefined2)param_1;
      func_0x00010c1040a0();
      goto joined_r0x000106ee02f8;
    }
  }
  puVar5 = (undefined *)0x0;
  uVar3 = 0;
  uVar6 = 0;
joined_r0x000106ee02f8:
  if (param_3 != (long *)0x0) {
    _objc_retainAutorelease(puVar5);
    *param_3 = (long)puVar5;
  }
  if (param_4 != (undefined8 *)0x0) {
    _objc_retainAutorelease(uVar3);
    *param_4 = uVar3;
  }
  if (param_5 != (undefined2 *)0x0) {
    *param_5 = uVar6;
  }
  bVar1 = puVar5 != (undefined *)0x0;
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (*(long *)(puVar5 + 0xb8) == 0) {
      puVar4 = puVar5;
      if ((((byte)puVar5[0x44] >> 1 & 1) != 0) && (*(int *)(puVar5 + 0x54) != -1)) {
        puVar2 = puVar5;
        func_0x00010bfc71a0();
        puVar4 = (undefined *)0x0;
        _objc_retain(0);
        _objc_retain(0);
        if ((int)puVar2 != 0) {
          _objc_retain(0);
          uVar3 = *(undefined8 *)(puVar5 + 0xb8);
          *(undefined8 *)(puVar5 + 0xb8) = 0;
          _objc_release(uVar3);
          _objc_retain(0);
          uVar3 = *(undefined8 *)(puVar5 + 0xc0);
          *(undefined8 *)(puVar5 + 0xc0) = 0;
          _objc_release(uVar3);
          *(undefined2 *)(puVar5 + 200) = 0;
        }
        _objc_release(0);
        _objc_release(0);
      }
      return puVar4;
    }
    return puVar5;
  }
  return (undefined *)(ulong)bVar1;
}



/* Entry: 106ee0304; end: 106ee03cf; -[GCDAsyncUdpSocket maybeUpdateCachedLocalAddress4Info] */

void FUN_106ee0304(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_32;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0x44) >> 1 & 1) != 0) && (*(int *)(param_1 + 0x54) != -1)) {
    uStack_32 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    lVar3 = param_1;
    func_0x00010bfc71a0(param_1,param_2,&uStack_40,&uStack_48,&uStack_32,*(int *)(param_1 + 0x54),2)
    ;
    uVar2 = uStack_40;
    _objc_retain(uStack_40);
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    if ((int)lVar3 != 0) {
      _objc_retain(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      _objc_release(uVar4);
      _objc_retain(uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = uVar1;
      _objc_release(uVar4);
      *(undefined2 *)(param_1 + 200) = uStack_32;
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106ee03d0; end: 106ee049b; -[GCDAsyncUdpSocket maybeUpdateCachedLocalAddress6Info] */

void FUN_106ee03d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_32;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0x44) >> 1 & 1) != 0) && (*(int *)(param_1 + 0x58) != -1)) {
    uStack_32 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    lVar3 = param_1;
    func_0x00010bfc71a0(param_1,param_2,&uStack_40,&uStack_48,&uStack_32,*(int *)(param_1 + 0x58),
                        0x1e);
    uVar2 = uStack_40;
    _objc_retain(uStack_40);
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    if ((int)lVar3 != 0) {
      _objc_retain(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
      _objc_release(uVar4);
      _objc_retain(uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xd8) = uVar1;
      _objc_release(uVar4);
      *(undefined2 *)(param_1 + 0xe0) = uStack_32;
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106ee049c; end: 106ee05db; -[GCDAsyncUdpSocket localAddress] */

void FUN_106ee049c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee05dc;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee0638;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee05dc; end: 106ee066b;  */

void FUN_106ee05dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x54) == -1) {
    func_0x00010c0c3b60();
    lVar2 = 0xd0;
  }
  else {
    func_0x00010c0c3b40();
    lVar2 = 0xb8;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee066c; end: 106ee07ab; -[GCDAsyncUdpSocket localHost] */

void FUN_106ee066c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee07ac;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee0808;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee07ac; end: 106ee083b;  */

void FUN_106ee07ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x54) == -1) {
    func_0x00010c0c3b60();
    lVar2 = 0xd8;
  }
  else {
    func_0x00010c0c3b40();
    lVar2 = 0xc0;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee083c; end: 106ee0957; -[GCDAsyncUdpSocket localPort] */

undefined2 FUN_106ee083c(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ee0958;
  puStack_78 = &UNK_11084b9d0;
  ppuVar3 = &puStack_90;
  lStack_70 = param_1;
  puStack_58 = puStack_68;
  _objc_retainBlock();
  lVar4 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106ee09a8;
    puStack_a0 = &UNK_110849530;
    _objc_retain(ppuVar3);
    ppuStack_98 = ppuVar3;
    func_0x00010006eaa4(uVar5,&puStack_b8);
    _objc_release(ppuStack_98);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  uVar1 = *(undefined2 *)(puStack_58 + 3);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_60,8);
  return uVar1;
}



/* Entry: 106ee0958; end: 106ee09db;  */

void FUN_106ee0958(long param_1)

{
  long lVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x54) == -1) {
    func_0x00010c0c3b60();
    lVar1 = 0xe0;
  }
  else {
    func_0x00010c0c3b40();
    lVar1 = 200;
  }
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined2 *)(*(long *)(param_1 + 0x20) + lVar1);
  return;
}



/* Entry: 106ee09dc; end: 106ee0b1b; -[GCDAsyncUdpSocket localAddress_IPv4] */

void FUN_106ee09dc(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee0b1c;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee0b5c;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee0b1c; end: 106ee0b8f;  */

void FUN_106ee0b1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0c3b40(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee0b90; end: 106ee0ccf; -[GCDAsyncUdpSocket localHost_IPv4] */

void FUN_106ee0b90(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee0cd0;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee0d10;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee0cd0; end: 106ee0d43;  */

void FUN_106ee0cd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0c3b40(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee0d44; end: 106ee0e5f; -[GCDAsyncUdpSocket localPort_IPv4] */

undefined2 FUN_106ee0d44(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ee0e60;
  puStack_78 = &UNK_11084b9d0;
  ppuVar3 = &puStack_90;
  lStack_70 = param_1;
  puStack_58 = puStack_68;
  _objc_retainBlock();
  lVar4 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106ee0e94;
    puStack_a0 = &UNK_110849530;
    _objc_retain(ppuVar3);
    ppuStack_98 = ppuVar3;
    func_0x00010006eaa4(uVar5,&puStack_b8);
    _objc_release(ppuStack_98);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  uVar1 = *(undefined2 *)(puStack_58 + 3);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_60,8);
  return uVar1;
}



/* Entry: 106ee0e60; end: 106ee0ec7;  */

void FUN_106ee0e60(long param_1)

{
  func_0x00010c0c3b40(*(undefined8 *)(param_1 + 0x20));
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined2 *)(*(long *)(param_1 + 0x20) + 200);
  return;
}



/* Entry: 106ee0ec8; end: 106ee1007; -[GCDAsyncUdpSocket localAddress_IPv6] */

void FUN_106ee0ec8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee1008;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee1048;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee1008; end: 106ee107b;  */

void FUN_106ee1008(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0c3b60(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee107c; end: 106ee11bb; -[GCDAsyncUdpSocket localHost_IPv6] */

void FUN_106ee107c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee11bc;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee11fc;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee11bc; end: 106ee122f;  */

void FUN_106ee11bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0c3b60(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee1230; end: 106ee134b; -[GCDAsyncUdpSocket localPort_IPv6] */

undefined2 FUN_106ee1230(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ee134c;
  puStack_78 = &UNK_11084b9d0;
  ppuVar3 = &puStack_90;
  lStack_70 = param_1;
  puStack_58 = puStack_68;
  _objc_retainBlock();
  lVar4 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106ee1380;
    puStack_a0 = &UNK_110849530;
    _objc_retain(ppuVar3);
    ppuStack_98 = ppuVar3;
    func_0x00010006eaa4(uVar5,&puStack_b8);
    _objc_release(ppuStack_98);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  uVar1 = *(undefined2 *)(puStack_58 + 3);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_60,8);
  return uVar1;
}



/* Entry: 106ee134c; end: 106ee13b3;  */

void FUN_106ee134c(long param_1)

{
  func_0x00010c0c3b60(*(undefined8 *)(param_1 + 0x20));
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined2 *)(*(long *)(param_1 + 0x20) + 0xe0);
  return;
}



/* Entry: 106ee13b4; end: 106ee155f; -[GCDAsyncUdpSocket maybeUpdateCachedConnectedAddressInfo] */

void FUN_106ee13b4(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_68;
  undefined1 auStack_64 [28];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  if ((*(long *)(param_1 + 0xe8) != 0) || (((byte)param_1[0x44] >> 3 & 1) == 0)) goto LAB_106ee14d4;
  iVar1 = *(int *)(param_1 + 0x54);
  puVar6 = param_1;
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != -1) {
      uStack_68 = 0x1c;
      _getpeername(iVar1,auStack_64,&uStack_68);
      if (iVar1 == 0) {
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class();
        func_0x00010bfe45c0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        _objc_opt_class();
        uVar7 = SUB82(puVar2,0);
        func_0x00010c1040c0();
        uVar9 = 0x1e;
        goto LAB_106ee14a0;
      }
    }
LAB_106ee1490:
    puVar5 = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    uStack_68 = 0x10;
    _getpeername(iVar1,auStack_64,&uStack_68);
    if (iVar1 != 0) goto LAB_106ee1490;
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    func_0x00010bfe45a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    _objc_opt_class();
    uVar7 = SUB82(puVar2,0);
    func_0x00010c1040a0();
    uVar9 = 2;
  }
LAB_106ee14a0:
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar5;
  _objc_retain(puVar5);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar6;
  _objc_release(uVar8);
  *(undefined2 *)(param_1 + 0xf8) = uVar7;
  *(undefined4 *)(param_1 + 0xfc) = uVar9;
  _objc_release();
LAB_106ee14d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_106edc4b0;
  uStack_c0 = 0x106edc4c0;
  uStack_b8 = 0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106ee16a0;
  puStack_f8 = &UNK_11084b9d0;
  ppuVar3 = &puStack_110;
  puStack_f0 = puVar5;
  puStack_d8 = puStack_e8;
  _objc_retainBlock();
  lVar4 = *(long *)(puVar5 + 0x100);
  _dispatch_get_specific();
  if (lVar4 == 0) {
    uVar8 = *(undefined8 *)(puVar5 + 0x60);
    puStack_138 = puVar6;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x106ee16e0;
    puStack_120 = &UNK_110849530;
    _objc_retain(ppuVar3);
    ppuStack_118 = ppuVar3;
    func_0x00010006eaa4(uVar8,&puStack_138);
    _objc_release(ppuStack_118);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  uVar8 = puStack_d8[5];
  _objc_retain(uVar8);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106ee1560; end: 106ee169f; -[GCDAsyncUdpSocket connectedAddress] */

void FUN_106ee1560(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee16a0;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee16e0;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee16a0; end: 106ee1713;  */

void FUN_106ee16a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0c3b20(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee1714; end: 106ee1853; -[GCDAsyncUdpSocket connectedHost] */

void FUN_106ee1714(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106edc4b0;
  uStack_50 = 0x106edc4c0;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ee1854;
  puStack_88 = &UNK_11084b9d0;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_1;
  puStack_68 = puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106ee1894;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010006eaa4(uVar4,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106ee1854; end: 106ee18c7;  */

void FUN_106ee1854(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0c3b20(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee18c8; end: 106ee19e3; -[GCDAsyncUdpSocket connectedPort] */

undefined2 FUN_106ee18c8(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ee19e4;
  puStack_78 = &UNK_11084b9d0;
  ppuVar3 = &puStack_90;
  lStack_70 = param_1;
  puStack_58 = puStack_68;
  _objc_retainBlock();
  lVar4 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106ee1a18;
    puStack_a0 = &UNK_110849530;
    _objc_retain(ppuVar3);
    ppuStack_98 = ppuVar3;
    func_0x00010006eaa4(uVar5,&puStack_b8);
    _objc_release(ppuStack_98);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  uVar1 = *(undefined2 *)(puStack_58 + 3);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_60,8);
  return uVar1;
}



/* Entry: 106ee19e4; end: 106ee1a4b;  */

void FUN_106ee19e4(long param_1)

{
  func_0x00010c0c3b20(*(undefined8 *)(param_1 + 0x20));
  *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined2 *)(*(long *)(param_1 + 0x20) + 0xf8);
  return;
}



/* Entry: 106ee1a4c; end: 106ee1b23; -[GCDAsyncUdpSocket isConnected] */

undefined1 FUN_106ee1a4c(long param_1)

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
  pcStack_60 = FUN_106ee1b24;
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



/* Entry: 106ee1b24; end: 106ee1b3b;  */

void FUN_106ee1b24(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(byte *)(*(long *)(param_1 + 0x20) + 0x44) >> 3 & 1;
  return;
}



/* Entry: 106ee1b3c; end: 106ee1c17; -[GCDAsyncUdpSocket isClosed] */

undefined1 FUN_106ee1b3c(long param_1)

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
  uStack_28 = 1;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106ee1c18;
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



/* Entry: 106ee1c18; end: 106ee1c33;  */

void FUN_106ee1c18(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(byte *)(*(long *)(param_1 + 0x20) + 0x44) ^ 0xff) & 1;
  return;
}



/* Entry: 106ee1c34; end: 106ee1d0b; -[GCDAsyncUdpSocket isIPv4] */

undefined1 FUN_106ee1c34(long param_1)

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
  pcStack_60 = FUN_106ee1d0c;
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



/* Entry: 106ee1d0c; end: 106ee1d53;  */

void FUN_106ee1d0c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x44) & 1) == 0) {
    func_0x00010c074ec0();
    uVar1 = (undefined1)lVar2;
  }
  else {
    uVar1 = *(int *)(lVar2 + 0x54) != -1;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 106ee1d54; end: 106ee1e2b; -[GCDAsyncUdpSocket isIPv6] */

undefined1 FUN_106ee1d54(long param_1)

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
  pcStack_60 = FUN_106ee1e2c;
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



/* Entry: 106ee1e2c; end: 106ee1e73;  */

void FUN_106ee1e2c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x44) & 1) == 0) {
    func_0x00010c074f20();
    uVar1 = (undefined1)lVar2;
  }
  else {
    uVar1 = *(int *)(lVar2 + 0x58) != -1;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 106ee1e74; end: 106ee1f17; -[GCDAsyncUdpSocket preBind:] */

void FUN_106ee1e74(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  func_0x00010c105de0();
  if ((int)lVar1 != 0) {
    if ((*(uint *)(param_1 + 0x44) >> 1 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x44) & 0xc) == 0) {
        if (param_3 == (long *)0x0) {
          return;
        }
        if ((*(ushort *)(param_1 + 0x48) & 3) != 3) {
          return;
        }
        ppuVar2 = &PTR____CFConstantStringClassReference_110e8b378;
      }
      else {
        if (param_3 == (long *)0x0) {
          return;
        }
        ppuVar2 = &PTR____CFConstantStringClassReference_110e8be98;
      }
    }
    else {
      if (param_3 == (long *)0x0) {
        return;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e8be78;
    }
    func_0x00010bf14fa0(param_1,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = param_1;
  }
  return;
}



/* Entry: 106ee1f18; end: 106ee1f23; -[GCDAsyncUdpSocket bindToPort:error:] */

void FUN_106ee1f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_bindToPort_interface_error__1125a42b8,param_3,0,param_4);
  return;
}



/* Entry: 106ee1f24; end: 106ee20ab; -[GCDAsyncUdpSocket bindToPort:interface:error:] */

undefined1
FUN_106ee1f24(long param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_a8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106edc4b0;
  uStack_70 = 0x106edc4c0;
  uStack_68 = 0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106ee20ac;
  puStack_c0 = &UNK_110983308;
  lStack_b8 = param_1;
  puStack_88 = puStack_a8;
  puStack_58 = &uStack_60;
  _objc_retain(param_4);
  ppuVar2 = &puStack_d8;
  uStack_b0 = param_4;
  puStack_a0 = &uStack_60;
  uStack_98 = param_3;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_88[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(ppuVar2);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 106ee20ac; end: 106ee232b;  */

/* WARNING: Removing unreachable block (ram,0x000106ee2248) */
/* WARNING: Removing unreachable block (ram,0x000106ee215c) */
/* WARNING: Removing unreachable block (ram,0x000106ee2164) */
/* WARNING: Removing unreachable block (ram,0x000106ee2168) */
/* WARNING: Removing unreachable block (ram,0x000106ee2174) */
/* WARNING: Removing unreachable block (ram,0x000106ee2178) */
/* WARNING: Removing unreachable block (ram,0x000106ee217c) */
/* WARNING: Removing unreachable block (ram,0x000106ee21e0) */
/* WARNING: Removing unreachable block (ram,0x000106ee21e4) */
/* WARNING: Removing unreachable block (ram,0x000106ee21e8) */
/* WARNING: Removing unreachable block (ram,0x000106ee21f0) */
/* WARNING: Removing unreachable block (ram,0x000106ee21f4) */
/* WARNING: Removing unreachable block (ram,0x000106ee2200) */
/* WARNING: Removing unreachable block (ram,0x000106ee2240) */
/* WARNING: Removing unreachable block (ram,0x000106ee2244) */
/* WARNING: Removing unreachable block (ram,0x000106ee2284) */
/* WARNING: Removing unreachable block (ram,0x000106ee2288) */
/* WARNING: Removing unreachable block (ram,0x000106ee230c) */
/* WARNING: Removing unreachable block (ram,0x000106ee22c4) */
/* WARNING: Removing unreachable block (ram,0x000106ee22d4) */
/* WARNING: Removing unreachable block (ram,0x000106ee22e4) */
/* WARNING: Removing unreachable block (ram,0x000106ee22e8) */
/* WARNING: Removing unreachable block (ram,0x000106ee22f8) */

void FUN_106ee20ac(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  func_0x00010c105c00();
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar3);
  if (iVar1 != 0) {
    func_0x00010bf51060(*(undefined8 *)(param_1 + 0x20));
    _objc_retain(0);
    _objc_retain(0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf15080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(0);
    _objc_release(0);
  }
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106ee232c; end: 106ee24a3; -[GCDAsyncUdpSocket bindToAddress:error:] */

undefined1 FUN_106ee232c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar2 = &puStack_c0;
  _objc_retain(param_3);
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106edc4b0;
  uStack_60 = 0x106edc4c0;
  uStack_58 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106ee24a4;
  puStack_a8 = &UNK_110876040;
  lStack_a0 = param_1;
  puStack_78 = puStack_90;
  puStack_48 = &uStack_50;
  _objc_retain(param_3);
  uStack_98 = param_3;
  puStack_88 = &uStack_50;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = puStack_78[5];
    _objc_retainAutorelease();
    *param_4 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106ee24a4; end: 106ee275f;  */

void FUN_106ee24a4(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar10 + 0x28);
  func_0x00010c105c00();
  _objc_retain(uVar7);
  uVar4 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = uVar7;
  _objc_release(uVar4);
  if (iVar2 == 0) goto LAB_106ee25e8;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x00010bfa0800();
  if (iVar2 == 0x1e) {
    lVar10 = 0;
    lVar8 = *(long *)(param_1 + 0x28);
LAB_106ee2580:
    _objc_retain(lVar8);
    lVar5 = *(long *)(param_1 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x48);
    if ((((uVar1 & 1) == 0) || (lVar10 == 0)) && (((uVar1 >> 1 & 1) == 0 || (lVar8 == 0)))) {
      if ((*(byte *)(lVar5 + 0x44) & 1) != 0) {
LAB_106ee2674:
        if ((uVar1 & 1) == 0 && lVar10 != 0) {
          iVar2 = *(int *)(lVar5 + 0x54);
          lVar5 = lVar10;
          _objc_retainAutorelease(lVar10);
          func_0x00010bf25f00();
          lVar9 = lVar10;
          func_0x00010c08fa60(lVar10);
          _bind(iVar2,lVar5,lVar9);
          lVar5 = *(long *)(param_1 + 0x20);
          if (iVar2 != -1) {
            uVar6 = 2;
LAB_106ee270c:
            *(uint *)(lVar5 + 0x44) = *(uint *)(lVar5 + 0x44) | uVar6;
            if ((uVar1 & 2) != 0 || lVar8 == 0) {
              *(uint *)(*(long *)(param_1 + 0x20) + 0x44) =
                   *(uint *)(*(long *)(param_1 + 0x20) + 0x44) | 0x80;
            }
            *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
            goto LAB_106ee25d8;
          }
        }
        else {
          iVar2 = *(int *)(lVar5 + 0x58);
          lVar5 = lVar8;
          _objc_retainAutorelease(lVar8);
          func_0x00010bf25f00();
          lVar9 = lVar8;
          func_0x00010c08fa60(lVar8);
          _bind(iVar2,lVar5,lVar9);
          if (iVar2 != -1) {
            *(uint *)(*(long *)(param_1 + 0x20) + 0x44) =
                 *(uint *)(*(long *)(param_1 + 0x20) + 0x44) | 2;
            lVar5 = *(long *)(param_1 + 0x20);
            uVar6 = 0x40;
            goto LAB_106ee270c;
          }
        }
        func_0x00010bf3dda0();
        lVar5 = *(long *)(param_1 + 0x20);
        func_0x00010bf987c0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ee25c0;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x28);
      func_0x00010bf59040();
      _objc_retain(uVar7);
      uVar4 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      _objc_release(uVar4);
      if ((int)lVar5 != 0) {
        lVar5 = *(long *)(param_1 + 0x20);
        goto LAB_106ee2674;
      }
    }
    else {
      func_0x00010bf15080();
      _objc_retainAutoreleasedReturnValue();
LAB_106ee25c0:
      lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar9 + 0x28);
      *(long *)(lVar9 + 0x28) = lVar5;
      _objc_release(uVar4);
    }
LAB_106ee25d8:
    _objc_release(lVar8);
  }
  else {
    if (iVar2 == 2) {
      lVar10 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar10);
LAB_106ee257c:
      lVar8 = 0;
      goto LAB_106ee2580;
    }
    if (iVar2 != 0) {
      lVar10 = 0;
      goto LAB_106ee257c;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf15080();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar10 = *(long *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar4;
  }
  _objc_release(lVar10);
LAB_106ee25e8:
  _objc_autoreleasePoolPop(lVar3);
  return;
}



/* Entry: 106ee2760; end: 106ee27ef; -[GCDAsyncUdpSocket preConnect:] */

void FUN_106ee2760(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  func_0x00010c105de0();
  if ((int)lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x44) & 0xc) == 0) {
      if (param_3 == (long *)0x0) {
        return;
      }
      if ((*(ushort *)(param_1 + 0x48) & 3) != 3) {
        return;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e8b378;
    }
    else {
      if (param_3 == (long *)0x0) {
        return;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e8beb8;
    }
    func_0x00010bf14fa0(param_1,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = param_1;
  }
  return;
}



/* Entry: 106ee27f0; end: 106ee2977; -[GCDAsyncUdpSocket connectToHost:onPort:error:] */

undefined1
FUN_106ee27f0(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_a8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106edc4b0;
  uStack_70 = 0x106edc4c0;
  uStack_68 = 0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106ee2978;
  puStack_c0 = &UNK_110983308;
  lStack_b8 = param_1;
  puStack_88 = puStack_a8;
  puStack_58 = &uStack_60;
  _objc_retain(param_3);
  ppuVar2 = &puStack_d8;
  uStack_b0 = param_3;
  puStack_a0 = &uStack_60;
  uStack_98 = param_4;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_88[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(ppuVar2);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106ee2978; end: 106ee2b1b;  */

void FUN_106ee2978(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uStack_58 = *(undefined8 *)(lVar7 + 0x28);
  func_0x00010c105d00(uVar4,param_2,&uStack_58);
  uVar1 = uStack_58;
  _objc_retain(uStack_58);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar1;
  _objc_release(uVar5);
  if ((int)uVar4 != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010bf15080(lVar7,param_2,&PTR____CFConstantStringClassReference_110e8bd78);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      puVar6 = *(undefined **)(lVar8 + 0x28);
      *(long *)(lVar8 + 0x28) = lVar7;
    }
    else {
      if ((*(byte *)(lVar7 + 0x44) & 1) == 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uStack_60 = *(undefined8 *)(lVar8 + 0x28);
        func_0x00010bf59080(lVar7,param_2,&uStack_60);
        uVar1 = uStack_60;
        _objc_retain(uStack_60);
        uVar4 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar8 + 0x28) = uVar1;
        _objc_release(uVar4);
        if ((int)lVar7 == 0) goto LAB_106ee2af8;
      }
      puVar6 = PTR_PTR_1126d31f8;
      _objc_alloc_init();
      puVar6[8] = 1;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined2 *)(param_1 + 0x40);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106ee2b1c;
      puStack_78 = &UNK_1108599d8;
      puStack_70 = puVar6;
      uStack_68 = uVar1;
      _objc_retain();
      func_0x00010bf0c1c0(uVar1,param_2,uVar4,uVar2,&puStack_90);
      *(uint *)(*(long *)(param_1 + 0x20) + 0x44) = *(uint *)(*(long *)(param_1 + 0x20) + 0x44) | 4;
      func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,puVar6);
      func_0x00010c0c3860(*(undefined8 *)(param_1 + 0x20));
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
      _objc_release(puStack_70);
    }
    _objc_release(puVar6);
  }
LAB_106ee2af8:
  _objc_autoreleasePoolPop(lVar3);
  return;
}



/* Entry: 106ee2b1c; end: 106ee2bab;  */

void FUN_106ee2b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0c3800(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ee2bac; end: 106ee2d23; -[GCDAsyncUdpSocket connectToAddress:error:] */

undefined1 FUN_106ee2bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar2 = &puStack_c0;
  _objc_retain(param_3);
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106edc4b0;
  uStack_60 = 0x106edc4c0;
  uStack_58 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106ee2d24;
  puStack_a8 = &UNK_110876040;
  lStack_a0 = param_1;
  puStack_78 = puStack_90;
  puStack_48 = &uStack_50;
  _objc_retain(param_3);
  uStack_98 = param_3;
  puStack_88 = &uStack_50;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = puStack_78[5];
    _objc_retainAutorelease();
    *param_4 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106ee2d24; end: 106ee2eb7;  */

void FUN_106ee2d24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uStack_48 = *(undefined8 *)(lVar7 + 0x28);
  func_0x00010c105d00(uVar2,param_2,&uStack_48);
  uVar9 = uStack_48;
  _objc_retain(uStack_48);
  uVar3 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar9;
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
      func_0x00010bf15080(lVar7,param_2,&PTR____CFConstantStringClassReference_110e8bed8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      lVar8 = *(long *)(lVar6 + 0x28);
      *(long *)(lVar6 + 0x28) = lVar7;
    }
    else {
      if ((*(byte *)(lVar7 + 0x44) & 1) == 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uStack_50 = *(undefined8 *)(lVar8 + 0x28);
        func_0x00010bf59080(lVar7,param_2,&uStack_50);
        uVar9 = uStack_50;
        _objc_retain(uStack_50);
        uVar2 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar8 + 0x28) = uVar9;
        _objc_release(uVar2);
        if ((int)lVar7 == 0) goto LAB_106ee2e98;
        lVar8 = *(long *)(param_1 + 0x28);
      }
      func_0x00010bf51e00(lVar8);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d31f8;
      _objc_alloc_init();
      uVar9 = *(undefined8 *)(puVar5 + 0x10);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      _objc_retain(puVar4);
      _objc_release(uVar9);
      *(uint *)(*(long *)(param_1 + 0x20) + 0x44) = *(uint *)(*(long *)(param_1 + 0x20) + 0x44) | 4;
      func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,puVar5);
      func_0x00010c0c3860(*(undefined8 *)(param_1 + 0x20));
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    _objc_release(lVar8);
  }
LAB_106ee2e98:
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ee2eb8; end: 106ee309f; -[GCDAsyncUdpSocket maybeConnect] */

void FUN_106ee2eb8(ulong param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x90);
  puVar2 = PTR_PTR_1126d31f8;
  _objc_opt_class(PTR_PTR_1126d31f8);
  _objc_opt_isKindOfClass(uVar4,puVar2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x90);
  _objc_retain(lVar5);
  if ((*(byte *)(lVar5 + 8) & 1) != 0) goto LAB_106ee307c;
  if (*(long *)(lVar5 + 0x18) == 0) {
    uVar4 = param_1;
    func_0x00010bfc2120();
    _objc_retain(0);
    _objc_retain(0);
    iVar6 = (int)uVar4;
    if (iVar6 == 0x1e) {
      uVar4 = param_1;
      func_0x00010bf48500();
      _objc_retain(0);
      _objc_release(0);
      if ((int)uVar4 == 0) goto LAB_106ee3044;
LAB_106ee2f98:
      *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 10;
      _objc_retain(0);
      uVar3 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = 0;
      _objc_release(uVar3);
      uVar4 = param_1;
      _objc_opt_class();
      func_0x00010bfe4580();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      *(ulong *)(param_1 + 0xf0) = uVar4;
      _objc_release(uVar3);
      uVar4 = param_1;
      _objc_opt_class();
      uVar1 = (undefined2)uVar4;
      func_0x00010c104080();
      *(undefined2 *)(param_1 + 0xf8) = uVar1;
      *(int *)(param_1 + 0xfc) = iVar6;
      func_0x00010c0dd000(param_1);
    }
    else {
      if (iVar6 == 2) {
        uVar4 = param_1;
        func_0x00010bf484e0();
        _objc_retain(0);
        _objc_release(0);
        if ((uVar4 & 1) != 0) goto LAB_106ee2f98;
      }
LAB_106ee3044:
      func_0x00010c0dd060(param_1);
    }
    _objc_release(0);
    _objc_release(0);
  }
  else {
    func_0x00010c0dd060(param_1);
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffb;
  func_0x00010bf945c0(param_1);
  func_0x00010c0c3860(param_1);
LAB_106ee307c:
  _objc_release(lVar5);
  return;
}



/* Entry: 106ee30a0; end: 106ee3163; -[GCDAsyncUdpSocket connectWithAddress4:error:] */

bool FUN_106ee30a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x54);
  _objc_retainAutorelease(param_3);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf25f00(param_3);
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  _connect(iVar1,uVar2,uVar3);
  if (iVar1 == 0) {
    func_0x00010bf3dd60(param_1);
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x80;
  }
  else if (param_4 != (long *)0x0) {
    func_0x00010bf987c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = param_1;
  }
  return iVar1 == 0;
}



/* Entry: 106ee3164; end: 106ee3227; -[GCDAsyncUdpSocket connectWithAddress6:error:] */

bool FUN_106ee3164(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  _objc_retainAutorelease(param_3);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf25f00(param_3);
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  _connect(iVar1,uVar2,uVar3);
  if (iVar1 == 0) {
    func_0x00010bf3dd40(param_1);
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x40;
  }
  else if (param_4 != (long *)0x0) {
    func_0x00010bf987c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = param_1;
  }
  return iVar1 == 0;
}



/* Entry: 106ee3228; end: 106ee32ab; -[GCDAsyncUdpSocket preJoin:] */

void FUN_106ee3228(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  func_0x00010c105de0();
  if ((int)lVar1 != 0) {
    if ((*(uint *)(param_1 + 0x44) >> 1 & 1) == 0) {
      if (param_3 == (long *)0x0) {
        return;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e8bef8;
    }
    else {
      if ((*(uint *)(param_1 + 0x44) & 0xc) == 0) {
        return;
      }
      if (param_3 == (long *)0x0) {
        return;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e8bf18;
    }
    func_0x00010bf14fa0(param_1,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = param_1;
  }
  return;
}



/* Entry: 106ee32ac; end: 106ee32b7; -[GCDAsyncUdpSocket joinMulticastGroup:error:] */

void FUN_106ee32ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_joinMulticastGroup_onInterface_e_1125ff0c0,param_3,0,param_4);
  return;
}



/* Entry: 106ee32b8; end: 106ee32cb; -[GCDAsyncUdpSocket joinMulticastGroup:onInterface:error:] */

void FUN_106ee32b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performMulticastRequest_forGroup_11261bcd8,0xc,param_3,param_4,param_5);
  return;
}



/* Entry: 106ee32cc; end: 106ee32d7; -[GCDAsyncUdpSocket leaveMulticastGroup:error:] */

void FUN_106ee32cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_leaveMulticastGroup_onInterface__1126012a8,param_3,0,param_4);
  return;
}



/* Entry: 106ee32d8; end: 106ee32eb; -[GCDAsyncUdpSocket leaveMulticastGroup:onInterface:error:] */

void FUN_106ee32d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performMulticastRequest_forGroup_11261bcd8,0xd,param_3,param_4,param_5);
  return;
}



/* Entry: 106ee32ec; end: 106ee349b; -[GCDAsyncUdpSocket performMulticastRequest:forGroup:onInterface:error:] */

undefined1
FUN_106ee32ec(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar2 = &puStack_e0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_a8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106edc4b0;
  uStack_70 = 0x106edc4c0;
  uStack_68 = 0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106ee349c;
  puStack_c8 = &UNK_110983338;
  lStack_c0 = param_1;
  puStack_88 = puStack_a8;
  puStack_58 = &uStack_60;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  puStack_a0 = &uStack_60;
  uStack_98 = param_3;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  if (param_6 != (undefined8 *)0x0) {
    uVar4 = puStack_88[5];
    _objc_retainAutorelease();
    *param_6 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(ppuVar2);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 106ee349c; end: 106ee3717;  */

void FUN_106ee349c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uStack_58 = *(undefined8 *)(lVar9 + 0x28);
  func_0x00010c105da0();
  uVar5 = uStack_58;
  _objc_retain(uStack_58);
  uVar4 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = uVar5;
  _objc_release(uVar4);
  if (iVar2 == 0) goto LAB_106ee36d0;
  lStack_68 = 0;
  lStack_60 = 0;
  func_0x00010bf51140(*(undefined8 *)(param_1 + 0x20));
  lVar1 = lStack_60;
  _objc_retain(lStack_60);
  lVar9 = lStack_68;
  _objc_retain(lStack_68);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0 && lVar9 == 0) {
    func_0x00010bf15080();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    lVar10 = *(long *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar5;
  }
  else {
    lStack_78 = 0;
    lStack_70 = 0;
    func_0x00010bf51060();
    lVar10 = lStack_70;
    _objc_retain(lStack_70);
    lVar7 = lStack_78;
    _objc_retain(lStack_78);
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar10 == 0 && lVar7 == 0) {
LAB_106ee35a8:
      func_0x00010bf15080();
      _objc_retainAutoreleasedReturnValue();
LAB_106ee3698:
      lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar5 = *(undefined8 *)(lVar8 + 0x28);
      *(long *)(lVar8 + 0x28) = lVar6;
      _objc_release(uVar5);
    }
    else {
      if (((*(int *)(lVar6 + 0x54) == -1) || (lVar1 == 0)) || (lVar10 == 0)) {
        if (((*(int *)(lVar6 + 0x58) != -1) && (lVar9 != 0)) && (lVar7 != 0)) {
          lVar6 = lVar9;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          uStack_88 = *(undefined8 *)(lVar6 + 0x10);
          uStack_90 = *(undefined8 *)(lVar6 + 8);
          uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x20);
          func_0x00010bfecd40();
          iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x58);
          _setsockopt(iVar2,0x29,*(undefined4 *)(param_1 + 0x48),&uStack_90,0x14);
          lVar6 = *(long *)(param_1 + 0x20);
          if (iVar2 != 0) goto LAB_106ee3684;
          func_0x00010bf3dd40();
          goto LAB_106ee3704;
        }
        goto LAB_106ee35a8;
      }
      lVar6 = lVar1;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      lVar8 = lVar10;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uStack_90 = CONCAT44(*(undefined4 *)(lVar8 + 4),*(undefined4 *)(lVar6 + 4));
      iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x54);
      _setsockopt(iVar2,0,*(undefined4 *)(param_1 + 0x48),&uStack_90,8);
      lVar6 = *(long *)(param_1 + 0x20);
      if (iVar2 != 0) {
LAB_106ee3684:
        func_0x00010bf987c0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ee3698;
      }
      func_0x00010bf3dd60();
LAB_106ee3704:
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    }
    _objc_release(lVar7);
  }
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
LAB_106ee36d0:
  _objc_autoreleasePoolPop(lVar3);
  return;
}



/* Entry: 106ee3718; end: 106ee3867; -[GCDAsyncUdpSocket enableReusePort:error:] */

undefined1 FUN_106ee3718(long param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar2 = &puStack_c0;
  puStack_90 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_98 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106edc4b0;
  uStack_60 = 0x106edc4c0;
  uStack_58 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106ee3868;
  puStack_a8 = &UNK_110983368;
  lStack_a0 = param_1;
  uStack_88 = param_3;
  puStack_78 = puStack_98;
  puStack_48 = puStack_90;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = puStack_78[5];
    _objc_retainAutorelease();
    *param_4 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 106ee3868; end: 106ee39d7;  */

void FUN_106ee3868(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uStack_48 = *(undefined8 *)(lVar5 + 0x28);
  func_0x00010c105de0();
  uVar4 = uStack_48;
  _objc_retain(uStack_48);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar3);
  if (iVar1 == 0) goto LAB_106ee39a4;
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x44) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uStack_50 = *(undefined8 *)(lVar6 + 0x28);
    func_0x00010bf59080();
    uVar4 = uStack_50;
    _objc_retain(uStack_50);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar4;
    _objc_release(uVar3);
    if ((int)lVar5 == 0) goto LAB_106ee39a4;
    lVar5 = *(long *)(param_1 + 0x20);
  }
  uStack_54 = (uint)*(byte *)(param_1 + 0x38);
  iVar1 = *(int *)(lVar5 + 0x54);
  if (iVar1 == -1) {
LAB_106ee3950:
    iVar1 = *(int *)(lVar5 + 0x58);
    if (iVar1 == -1) goto LAB_106ee39a4;
    _setsockopt(iVar1,0xffff,0x200,&uStack_54,4);
    if (iVar1 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
      goto LAB_106ee39a4;
    }
  }
  else {
    _setsockopt(iVar1,0xffff,0x200,&uStack_54,4);
    if (iVar1 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
      lVar5 = *(long *)(param_1 + 0x20);
      goto LAB_106ee3950;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf987c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar3);
LAB_106ee39a4:
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106ee39d8; end: 106ee3b27; -[GCDAsyncUdpSocket enableBroadcast:error:] */

undefined1 FUN_106ee39d8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar2 = &puStack_c0;
  puStack_90 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_98 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106edc4b0;
  uStack_60 = 0x106edc4c0;
  uStack_58 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106ee3b28;
  puStack_a8 = &UNK_110983368;
  lStack_a0 = param_1;
  uStack_88 = param_3;
  puStack_78 = puStack_98;
  puStack_48 = puStack_90;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = puStack_78[5];
    _objc_retainAutorelease();
    *param_4 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 106ee3b28; end: 106ee3c5b;  */

void FUN_106ee3b28(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uStack_48 = *(undefined8 *)(lVar5 + 0x28);
  func_0x00010c105de0();
  uVar4 = uStack_48;
  _objc_retain(uStack_48);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar3);
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x44) & 1) == 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uStack_50 = *(undefined8 *)(lVar6 + 0x28);
      func_0x00010bf59080();
      uVar4 = uStack_50;
      _objc_retain(uStack_50);
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      _objc_release(uVar3);
      if ((int)lVar5 == 0) goto LAB_106ee3c3c;
      lVar5 = *(long *)(param_1 + 0x20);
    }
    iVar1 = *(int *)(lVar5 + 0x54);
    if (iVar1 != -1) {
      uStack_54 = (uint)*(byte *)(param_1 + 0x38);
      _setsockopt(iVar1,0xffff,0x20,&uStack_54,4);
      if (iVar1 == 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf987c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        uVar3 = *(undefined8 *)(lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x28) = uVar4;
        _objc_release(uVar3);
      }
    }
  }
LAB_106ee3c3c:
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106ee3c5c; end: 106ee3c63; -[GCDAsyncUdpSocket sendData:withTag:] */

void FUN_106ee3c5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xbff0000000000000,param_1,PTR_s_sendData_withTimeout_tag__1126348a8);
  return;
}



/* Entry: 106ee3c64; end: 106ee3d33; -[GCDAsyncUdpSocket sendData:withTimeout:tag:] */

void FUN_106ee3c64(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d3200;
    _objc_alloc();
    func_0x00010c008580(param_1);
    uVar3 = *(undefined8 *)(param_2 + 0x60);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ee3d34;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_2;
    puStack_48 = puVar2;
    _objc_retain();
    func_0x00010007380c(uVar3,&puStack_70);
    _objc_release(puStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106ee3d34; end: 106ee3d6f;  */

void FUN_106ee3d34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c3860(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ee3d70; end: 106ee3eab; -[GCDAsyncUdpSocket sendData:toHost:port:withTimeout:tag:] */

void FUN_106ee3d70(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d3200;
    _objc_alloc();
    func_0x00010c008580(param_1);
    puVar3[0x20] = 1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ee3eac;
    puStack_68 = &UNK_1108599d8;
    _objc_retain();
    puStack_60 = puVar3;
    lStack_58 = param_2;
    func_0x00010bf0c1c0(param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106ee3f40;
    puStack_98 = &UNK_110841f80;
    lStack_90 = param_2;
    puStack_88 = puVar3;
    _objc_retain(puVar3);
    func_0x00010007380c(uVar4,&puStack_b0);
    _objc_release(puStack_88);
    _objc_release(puStack_60);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106ee3eac; end: 106ee3f3f;  */

void FUN_106ee3eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) == *(long *)(*(long *)(param_1 + 0x28) + 0x90)) {
    func_0x00010bf87480();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ee3f40; end: 106ee3f7b;  */

void FUN_106ee3f40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c3860(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ee3f7c; end: 106ee4093; -[GCDAsyncUdpSocket sendData:toAddress:withTimeout:tag:] */

void FUN_106ee3f7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d3200;
    _objc_alloc();
    func_0x00010c008580(param_1);
    puVar3 = PTR_PTR_1126d3208;
    func_0x00010bfa0800();
    *(int *)(puVar2 + 0x40) = (int)puVar3;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)(puVar2 + 0x38);
    *(undefined8 *)(puVar2 + 0x38) = param_5;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ee4094;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_2;
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    func_0x00010007380c(uVar4,&puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106ee4094; end: 106ee40cf;  */

void FUN_106ee4094(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c3860(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ee40d0; end: 106ee40d7; -[GCDAsyncUdpSocket setSendFilter:withQueue:] */

void FUN_106ee40d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fc110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSendFilter_withQueue_isAsynch_11265ca68,param_3,param_4,1);
  return;
}



/* Entry: 106ee40d8; end: 106ee4207; -[GCDAsyncUdpSocket setSendFilter:withQueue:isAsynchronous:] */

void FUN_106ee40d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf51e00();
    _objc_retain(param_4);
    uVar4 = param_4;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ee4208;
  puStack_68 = &UNK_110864938;
  lStack_60 = param_1;
  _objc_retain(lVar3);
  lStack_50 = lVar3;
  _objc_retain(uVar4);
  uStack_58 = uVar4;
  uStack_48 = param_5;
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
  _objc_release(uStack_58);
  _objc_release(lStack_50);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ee4208; end: 106ee426b;  */

void FUN_106ee4208(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar2;
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40) = *(undefined1 *)(param_1 + 0x38);
  return;
}



/* Entry: 106ee426c; end: 106ee43af; -[GCDAsyncUdpSocket maybeDequeueSend] */

void FUN_106ee426c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    uStack_38 = 0;
    lVar1 = param_1;
    func_0x00010bf59080(param_1,param_2,&uStack_38);
    uVar2 = uStack_38;
    _objc_retain(uStack_38);
    if ((int)lVar1 == 0) {
      func_0x00010bf3df40(param_1);
      _objc_release(uVar2);
      return;
    }
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010bf529e0();
  do {
    if (lVar1 == 0) {
LAB_106ee4380:
      if ((*(long *)(param_1 + 0x90) == 0) && (*(char *)(param_1 + 0x45) < '\0')) {
        func_0x00010bf3df40(param_1);
      }
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    _objc_release(uVar4);
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x98));
    uVar5 = *(ulong *)(param_1 + 0x90);
    puVar3 = PTR_PTR_1126d31f8;
    _objc_opt_class(PTR_PTR_1126d31f8);
    _objc_opt_isKindOfClass(uVar5,puVar3);
    if ((uVar5 & 1) != 0) {
      func_0x00010c0c3800(param_1);
      return;
    }
    if (*(long *)(*(long *)(param_1 + 0x90) + 0x30) == 0) {
      func_0x00010bf87480(param_1);
      goto LAB_106ee4380;
    }
    func_0x00010c0dd080(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x00010bf529e0();
  } while( true );
}



/* Entry: 106ee43b0; end: 106ee468b; -[GCDAsyncUdpSocket doPreSend] */

void FUN_106ee43b0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  lVar4 = *(long *)(param_1 + 0x90);
  if ((uVar2 >> 3 & 1) == 0) {
    if ((*(byte *)(lVar4 + 0x20) & 1) != 0) {
      if ((uVar2 >> 0xc & 1) != 0) {
        func_0x00010c2641e0(param_1);
        uVar2 = *(uint *)(param_1 + 0x44);
      }
      if ((uVar2 >> 0xd & 1) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c264210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_suspendSend6Source_112676aa8);
      return;
    }
    lVar3 = *(long *)(lVar4 + 0x30);
    if (lVar3 != 0) {
      _objc_retain(lVar3);
LAB_106ee4458:
      func_0x00010c0dd080(param_1);
      func_0x00010bf945c0(param_1);
      func_0x00010c0c3860(param_1);
      goto LAB_106ee447c;
    }
    if (*(long *)(lVar4 + 0x38) == 0) {
      if (*(long *)(lVar4 + 0x28) == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e8bfb8;
        goto LAB_106ee442c;
      }
      lStack_50 = 0;
      uStack_48 = 0;
      lVar4 = param_1;
      func_0x00010bfc2120(param_1,param_2,&uStack_48,&lStack_50);
      uVar5 = uStack_48;
      _objc_retain(uStack_48);
      lVar3 = lStack_50;
      _objc_retain(lStack_50);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x38);
      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x38) = uVar5;
      _objc_retain(uVar5);
      _objc_release(uVar6);
      *(int *)(*(long *)(param_1 + 0x90) + 0x40) = (int)lVar4;
      _objc_release(uVar5);
      goto joined_r0x000106ee4440;
    }
  }
  else if ((((*(byte *)(lVar4 + 0x20) & 1) == 0) && (*(long *)(lVar4 + 0x28) == 0)) &&
          (*(long *)(lVar4 + 0x30) == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = uVar6;
    _objc_release(uVar5);
    *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x40) = *(undefined4 *)(param_1 + 0xfc);
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e8bf98;
LAB_106ee442c:
    lVar3 = param_1;
    func_0x00010bf14fa0(param_1,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
joined_r0x000106ee4440:
    if (lVar3 != 0) goto LAB_106ee4458;
  }
  if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) {
    func_0x00010bf87580(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x40) != '\x01') {
    puStack_a8 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x2020000000;
    uStack_88 = 1;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106ee47b8;
    puStack_b8 = &UNK_11084b9d0;
    lStack_b0 = param_1;
    puStack_98 = puStack_a8;
    func_0x00010006eaa4(*(long *)(param_1 + 0x38),&puStack_d0);
    if (*(char *)(puStack_98 + 3) == '\x01') {
      func_0x00010bf87580(param_1);
    }
    else {
      func_0x00010c0dd0e0(param_1);
      func_0x00010bf945c0(param_1);
      func_0x00010c0c3860(param_1);
    }
    __Block_object_dispose(&uStack_a0,8);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x90) + 0x21) = 1;
  lVar3 = *(long *)(param_1 + 0x90);
  _objc_retain(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ee468c;
  puStack_68 = &UNK_110841f80;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(lVar3);
  func_0x00010007380c(uVar5,&puStack_80);
  _objc_release(lStack_58);
LAB_106ee447c:
  _objc_release(lVar3);
  return;
}



/* Entry: 106ee468c; end: 106ee474b;  */

void FUN_106ee468c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  lVar1 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  (**(code **)(lVar4 + 0x10))
            (lVar4,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x38),
             *(undefined8 *)(lVar1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106ee474c;
  puStack_60 = &UNK_11084d5f8;
  _objc_retain(uVar2);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = (undefined1)lVar4;
  uStack_58 = uVar2;
  func_0x00010007380c(uVar5,&puStack_78);
  _objc_release(uStack_58);
  _objc_autoreleasePoolPop(lVar3);
  return;
}



/* Entry: 106ee474c; end: 106ee480b;  */

void FUN_106ee474c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x21) = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x90);
  if (*(long *)(param_1 + 0x20) == lVar2) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010bf87580();
    }
    else {
      func_0x00010c0dd0e0(*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(lVar2 + 0x18));
      func_0x00010bf945c0(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c0c3860(*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ee480c; end: 106ee49b3; -[GCDAsyncUdpSocket doSend] */

void FUN_106ee480c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x44);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 8);
  func_0x00010bf25f00(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 8);
  func_0x00010c08fa60(uVar2);
  if ((uVar7 >> 3 & 1) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x38);
    func_0x00010bf25f00(uVar3);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x38);
    func_0x00010c08fa60(uVar4);
    if (*(int *)(*(long *)(param_1 + 0x90) + 0x40) == 2) {
      uVar7 = *(uint *)(param_1 + 0x54);
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x58);
    }
    piVar5 = (int *)(ulong)uVar7;
    _sendto(piVar5,uVar1,uVar2,0,uVar3,uVar4);
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x90) + 0x40) == 2) {
      uVar7 = *(uint *)(param_1 + 0x54);
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x58);
    }
    piVar5 = (int *)(ulong)uVar7;
    _send(piVar5,uVar1,uVar2,0);
  }
  uVar7 = *(uint *)(param_1 + 0x44);
  if ((uVar7 >> 1 & 1) == 0) {
    uVar7 = uVar7 | 2;
    *(uint *)(param_1 + 0x44) = uVar7;
  }
  if (piVar5 != (int *)0x0) {
    if ((long)piVar5 < 0) {
      ___error();
      if (*piVar5 == 0x23) {
        uVar7 = *(uint *)(param_1 + 0x44);
        goto LAB_106ee491c;
      }
      lVar6 = param_1;
      func_0x00010bf987c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        func_0x00010bf3df40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar6);
        return;
      }
    }
    func_0x00010c0dd0e0(param_1);
    func_0x00010bf945c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0c3870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maybeDequeueSend_11260e830);
    return;
  }
LAB_106ee491c:
  if ((uVar7 >> 0xc & 1) == 0) {
    func_0x00010c13d820(param_1);
    uVar7 = *(uint *)(param_1 + 0x44);
  }
  if ((uVar7 >> 0xd & 1) == 0) {
    func_0x00010c13d840(param_1);
  }
  if ((*(long *)(param_1 + 0x88) == 0) && (0.0 <= *(double *)(*(long *)(param_1 + 0x90) + 0x10))) {
                    /* WARNING: Could not recover jumptable at 0x00010c2295b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupSendTimerWithTimeout__112667f90);
    return;
  }
  return;
}



/* Entry: 106ee49b4; end: 106ee49ef; -[GCDAsyncUdpSocket endCurrentSend] */

void FUN_106ee49b4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee49f0; end: 106ee4a4f; -[GCDAsyncUdpSocket doSendTimeout] */

void FUN_106ee49f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c15ce60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dd080(param_1);
  _objc_release(uVar1);
  func_0x00010bf945c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0c3870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maybeDequeueSend_11260e830);
  return;
}



/* Entry: 106ee4a50; end: 106ee4b17; -[GCDAsyncUdpSocket setupSendTimerWithTimeout:] */

void FUN_106ee4a50(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create
            (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_2 + 0x60));
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(undefined **)(param_2 + 0x88) = puVar1;
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ee4b18;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_2;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_2 + 0x88),&puStack_58);
  uVar2 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  _dispatch_source_set_timer(*(undefined8 *)(param_2 + 0x88),uVar2,0xffffffffffffffff,0);
  _dispatch_resume(*(undefined8 *)(param_2 + 0x88));
  return;
}



/* Entry: 106ee4b18; end: 106ee4b47;  */

void FUN_106ee4b18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf875a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}


