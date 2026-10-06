/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ee4b48; end: 106ee4c93; -[GCDAsyncUdpSocket receiveOnce:] */

undefined1 FUN_106ee4b48(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
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
  
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106edc4b0;
  uStack_60 = 0x106edc4c0;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106ee4c94;
  puStack_a0 = &UNK_110876070;
  ppuVar2 = &puStack_b8;
  lStack_98 = param_1;
  puStack_78 = puStack_90;
  puStack_48 = puStack_88;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar4 = puStack_78[5];
    _objc_retainAutorelease();
    *param_3 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 106ee4c94; end: 106ee4d97;  */

void FUN_106ee4c94(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(lVar2 + 0x44);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      func_0x00010bf14fa0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e8bff8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
    *(uint *)(lVar2 + 0x44) = uVar1 | 0x10;
    *(uint *)(*(long *)(param_1 + 0x20) + 0x44) =
         *(uint *)(*(long *)(param_1 + 0x20) + 0x44) & 0xffffffdf;
    lStack_28 = *(long *)(param_1 + 0x20);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106ee4d68;
    puStack_30 = &UNK_110842e18;
    func_0x00010007380c(*(undefined8 *)(lStack_28 + 0x60),&puStack_48);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ee4d98; end: 106ee4ee3; -[GCDAsyncUdpSocket beginReceiving:] */

undefined1 FUN_106ee4d98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
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
  
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106edc4b0;
  uStack_60 = 0x106edc4c0;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106ee4ee4;
  puStack_a0 = &UNK_110876070;
  ppuVar2 = &puStack_b8;
  lStack_98 = param_1;
  puStack_78 = puStack_90;
  puStack_48 = puStack_88;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar2);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar4 = puStack_78[5];
    _objc_retainAutorelease();
    *param_3 = uVar4;
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 106ee4ee4; end: 106ee4fe7;  */

void FUN_106ee4ee4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(lVar2 + 0x44);
  if ((uVar1 >> 5 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      func_0x00010bf14fa0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e8bff8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
    *(uint *)(lVar2 + 0x44) = uVar1 | 0x20;
    *(uint *)(*(long *)(param_1 + 0x20) + 0x44) =
         *(uint *)(*(long *)(param_1 + 0x20) + 0x44) & 0xffffffef;
    lStack_28 = *(long *)(param_1 + 0x20);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106ee4fb8;
    puStack_30 = &UNK_110842e18;
    func_0x00010007380c(*(undefined8 *)(lStack_28 + 0x60),&puStack_48);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ee4fe8; end: 106ee50db; -[GCDAsyncUdpSocket pauseReceiving] */

void FUN_106ee4fe8(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106ee5078;
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



/* Entry: 106ee50dc; end: 106ee50e3; -[GCDAsyncUdpSocket setReceiveFilter:withQueue:] */

void FUN_106ee50dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e81f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setReceiveFilter_withQueue_isAsy_112657aa0,param_3,param_4,1);
  return;
}



/* Entry: 106ee50e4; end: 106ee5213; -[GCDAsyncUdpSocket setReceiveFilter:withQueue:isAsynchronous:] */

void FUN_106ee50e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  pcStack_70 = FUN_106ee5214;
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



/* Entry: 106ee5214; end: 106ee5277;  */

void FUN_106ee5214(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar2;
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = *(undefined1 *)(param_1 + 0x38);
  return;
}



/* Entry: 106ee5278; end: 106ee58c3; -[GCDAsyncUdpSocket doReceive] */

/* WARNING: Possible PIC construction at 0x000106ee5534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106ee5538) */

void FUN_106ee5278(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int *unaff_x20;
  int *unaff_x21;
  int *piVar7;
  int *unaff_x22;
  undefined8 uVar8;
  int *unaff_x23;
  long lVar9;
  int *unaff_x24;
  byte bVar10;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int *piStack_190;
  int *piStack_188;
  int *piStack_180;
  int *piStack_178;
  int *piStack_170;
  int *piStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  int *piStack_128;
  int *piStack_120;
  int *piStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  int *piStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1[0x11];
  piVar2 = param_1;
  if (((uVar6 & 0x30) == 0) || (((uVar6 >> 4 & 1) != 0 && (param_1[0x2c] != 0)))) {
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010c264160();
    }
    if (*(long *)(param_1 + 0x2a) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010c264190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_suspendReceive6Source_112676a88);
        return;
      }
      goto LAB_106ee5894;
    }
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x2a) != 0) {
      if ((uVar6 >> 3 & 1) == 0) goto LAB_106ee5400;
      goto LAB_106ee5348;
    }
    func_0x00010c13d6c0();
    if (*(long *)(param_1 + 0x2a) == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_106ee5894;
      goto code_r0x00010c13d6e0;
    }
  }
  else {
    if ((uVar6 >> 3 & 1) == 0) {
      if ((*(long *)(param_1 + 0x2a) == 0) ||
         (param_1[0x11] = uVar6 ^ 0x10000, (uVar6 >> 0x10 & 1) != 0)) goto LAB_106ee5354;
LAB_106ee5400:
      uStack_b8 = CONCAT44(uStack_b8._4_4_,0x1c);
      piVar7 = (int *)(ulong)(uint)param_1[0x13];
      piVar2 = piVar7;
      _malloc();
      unaff_x23 = (int *)(ulong)(uint)param_1[0x16];
      _recvfrom(unaff_x23,piVar2,piVar7,0,&uStack_98,&uStack_b8);
      if ((long)unaff_x23 < 1) {
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        _free();
        unaff_x22 = (int *)0x0;
        unaff_x20 = (int *)0x0;
      }
      else {
        lVar4 = 0;
        if (unaff_x23 <= *(int **)(param_1 + 0x2a)) {
          lVar4 = (long)*(int **)(param_1 + 0x2a) - (long)unaff_x23;
        }
        *(long *)(param_1 + 0x2a) = lVar4;
        if (unaff_x23 != piVar7) {
          _realloc(piVar2,unaff_x23);
        }
        unaff_x20 = (int *)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a40();
        _objc_retainAutoreleasedReturnValue();
        piVar2 = (int *)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = piVar2;
      }
      unaff_x21 = (int *)0x0;
      if (unaff_x23 != (int *)0x0) goto LAB_106ee54e8;
LAB_106ee5518:
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010c13d6c0(param_1);
      }
      if (*(long *)(param_1 + 0x2a) == 0) {
code_r0x00010c13d6e0:
                    /* WARNING: Could not recover jumptable at 0x00010c13d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeReceive6Source_11262cfd8);
        return;
      }
    }
    else {
LAB_106ee5348:
      if (param_1[0x15] == -1) goto LAB_106ee5400;
LAB_106ee5354:
      uStack_b8 = CONCAT44(uStack_b8._4_4_,0x10);
      piVar7 = (int *)(ulong)*(ushort *)((long)param_1 + 0x4a);
      piVar2 = piVar7;
      _malloc();
      unaff_x23 = (int *)(ulong)(uint)param_1[0x15];
      _recvfrom(unaff_x23,piVar2,piVar7,0,&uStack_98,&uStack_b8);
      if ((long)unaff_x23 < 1) {
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        _free();
        unaff_x21 = (int *)0x0;
        unaff_x20 = (int *)0x0;
      }
      else {
        lVar4 = 0;
        if (unaff_x23 <= *(int **)(param_1 + 0x28)) {
          lVar4 = (long)*(int **)(param_1 + 0x28) - (long)unaff_x23;
        }
        *(long *)(param_1 + 0x28) = lVar4;
        if (unaff_x23 != piVar7) {
          _realloc(piVar2,unaff_x23);
        }
        unaff_x20 = (int *)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a40();
        _objc_retainAutoreleasedReturnValue();
        piVar2 = (int *)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = piVar2;
      }
      unaff_x22 = (int *)0x0;
      if (unaff_x23 == (int *)0x0) goto LAB_106ee5518;
LAB_106ee54e8:
      if ((long)unaff_x23 < 0) {
        ___error();
        if (*piVar2 == 0x23) goto LAB_106ee5518;
        unaff_x23 = param_1;
        func_0x00010bf987c0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x23 == (int *)0x0) {
          if ((*(byte *)(param_1 + 0x11) >> 5 & 1) == 0) goto LAB_106ee582c;
          goto LAB_106ee5824;
        }
        func_0x00010bf3df40(param_1);
        _objc_release(unaff_x23);
      }
      else {
        unaff_x23 = unaff_x21;
        if ((*(byte *)(param_1 + 0x11) >> 3 & 1) == 0) {
          unaff_x23 = unaff_x22;
          if (unaff_x21 != (int *)0x0) {
            unaff_x23 = unaff_x21;
          }
LAB_106ee54fc:
          _objc_retain(unaff_x23);
LAB_106ee5624:
          if (*(long *)(param_1 + 6) != 0) {
            lVar4 = *(long *)(param_1 + 8);
            unaff_x24 = (int *)0x0;
            if (lVar4 != 0) {
              uStack_98 = 0;
              uStack_88 = 0x3032000000;
              pcStack_80 = FUN_106edc4b0;
              uStack_78 = 0x106edc4c0;
              uStack_70 = 0;
              puStack_b0 = &uStack_b8;
              uStack_b8 = 0;
              uStack_a8 = 0x2020000000;
              uStack_a0 = 0;
              puStack_90 = &uStack_98;
              if ((char)param_1[10] == '\x01') {
                param_1[0x2c] = param_1[0x2c] + 1;
                puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_f8 = 0xc2000000;
                pcStack_f0 = FUN_106ee58c4;
                puStack_e8 = &UNK_1108ba108;
                piStack_e0 = param_1;
                puStack_c8 = puStack_b0;
                _objc_retain(unaff_x20);
                piStack_d8 = unaff_x20;
                _objc_retain(unaff_x23);
                piStack_d0 = unaff_x23;
                puStack_c0 = &uStack_98;
                func_0x00010007380c(lVar4,&puStack_100);
                _objc_release(piStack_d0);
                _objc_release(piStack_d8);
                unaff_x24 = (int *)0x0;
                bVar10 = 0;
              }
              else {
                puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_140 = 0xc2000000;
                pcStack_138 = FUN_106ee5a74;
                puStack_130 = &UNK_1108ba108;
                piStack_128 = param_1;
                puStack_110 = puStack_b0;
                _objc_retain(unaff_x20);
                piStack_120 = unaff_x20;
                _objc_retain(unaff_x23);
                piStack_118 = unaff_x23;
                puStack_108 = &uStack_98;
                func_0x00010006eaa4(lVar4,&puStack_148);
                bVar10 = *(byte *)(puStack_b0 + 3);
                unaff_x24 = (int *)(ulong)bVar10;
                if (bVar10 == 1) {
                  func_0x00010c0dd0a0(param_1);
                }
                _objc_release(piStack_118);
                _objc_release(piStack_120);
                bVar10 = bVar10 ^ 1;
              }
              __Block_object_dispose(&uStack_b8,8);
              __Block_object_dispose(&uStack_98,8);
              _objc_release(uStack_70);
              goto LAB_106ee57ec;
            }
          }
          func_0x00010c0dd0a0(param_1);
          _objc_release(unaff_x23);
          uVar6 = param_1[0x11];
          if ((uVar6 >> 5 & 1) != 0) {
LAB_106ee5824:
            func_0x00010bf87540(param_1);
            goto LAB_106ee582c;
          }
        }
        else {
          if (unaff_x21 == (int *)0x0) {
            if (unaff_x22 != (int *)0x0) {
              unaff_x24 = (int *)0x1;
              unaff_x23 = unaff_x22;
              goto LAB_106ee55ec;
            }
            unaff_x23 = (int *)0x0;
            goto LAB_106ee54fc;
          }
          unaff_x24 = param_1;
          func_0x00010c06f080();
          if (unaff_x22 == (int *)0x0) {
            _objc_retain(unaff_x21);
            if (((ulong)unaff_x24 & 1) == 0) {
              unaff_x24 = (int *)0x0;
              bVar10 = 1;
              goto LAB_106ee57ec;
            }
            goto LAB_106ee5624;
          }
LAB_106ee55ec:
          piVar2 = param_1;
          func_0x00010c06f0a0();
          uVar6 = (uint)piVar2 & (uint)unaff_x24;
          unaff_x24 = (int *)(ulong)uVar6;
          _objc_retain(unaff_x23);
          if ((uVar6 & 1) != 0) goto LAB_106ee5624;
          unaff_x24 = (int *)0x0;
          bVar10 = 1;
LAB_106ee57ec:
          _objc_release(unaff_x23);
          uVar6 = param_1[0x11];
          if ((uVar6 >> 5 & 1) != 0) goto LAB_106ee5824;
          if ((int)unaff_x24 == 0) {
            if (bVar10 != 0) {
              func_0x00010bf87540(param_1);
            }
            goto LAB_106ee582c;
          }
        }
        param_1[0x11] = uVar6 & 0xffffffcf;
      }
    }
LAB_106ee582c:
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    piVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_106ee5894:
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  piVar7 = piVar2;
  __Unwind_Resume();
  pcStack_158 = FUN_106ee58c4;
  piVar3 = piVar7;
  piStack_190 = unaff_x24;
  piStack_188 = unaff_x23;
  piStack_180 = unaff_x22;
  piStack_178 = unaff_x21;
  piStack_170 = unaff_x20;
  piStack_168 = piVar2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(*(long *)(piVar7 + 8) + 0x18);
  lVar9 = *(long *)(*(long *)(piVar7 + 0x10) + 8);
  uStack_198 = *(undefined8 *)(lVar9 + 0x28);
  (**(code **)(lVar4 + 0x10))
            (lVar4,*(undefined8 *)(piVar7 + 10),*(undefined8 *)(piVar7 + 0xc),&uStack_198);
  uVar1 = uStack_198;
  _objc_retain(uStack_198);
  uVar5 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = uVar1;
  _objc_release(uVar5);
  *(char *)(*(long *)(*(long *)(piVar7 + 0xe) + 8) + 0x18) = (char)lVar4;
  lStack_1c0 = *(long *)(piVar7 + 8);
  uVar1 = *(undefined8 *)(piVar7 + 10);
  uVar8 = *(undefined8 *)(lStack_1c0 + 0x60);
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_106ee59d8;
  puStack_1c8 = &UNK_1108ba108;
  uStack_1a8 = *(undefined8 *)(piVar7 + 0xe);
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(piVar7 + 0xc);
  uStack_1b8 = uVar1;
  _objc_retain(uVar5);
  uStack_1a0 = *(undefined8 *)(piVar7 + 0x10);
  uStack_1b0 = uVar5;
  func_0x00010007380c(uVar8,&puStack_1e0);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_autoreleasePoolPop(piVar3);
  return;
}



/* Entry: 106ee58c4; end: 106ee59d7;  */

void FUN_106ee58c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uStack_48 = *(undefined8 *)(lVar6 + 0x28);
  (**(code **)(lVar3 + 0x10))
            (lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),&uStack_48);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar4);
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)lVar3;
  lStack_70 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(lStack_70 + 0x60);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ee59d8;
  puStack_78 = &UNK_1108ba108;
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  _objc_retain(uVar4);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar4;
  func_0x00010007380c(uVar5,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106ee59d8; end: 106ee5a73;  */

void FUN_106ee59d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  *(int *)(*(long *)(param_1 + 0x20) + 0xb0) = *(int *)(*(long *)(param_1 + 0x20) + 0xb0) + -1;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
    func_0x00010c0dd0a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(uint *)(lVar2 + 0x44) >> 4 & 1) != 0) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
      *(uint *)(lVar2 + 0x44) = *(uint *)(lVar2 + 0x44) & 0xffffffef;
    }
    else if (*(int *)(lVar2 + 0xb0) == 0) {
      func_0x00010bf87540();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ee5a74; end: 106ee5b07;  */

void FUN_106ee5a74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uStack_48 = *(undefined8 *)(lVar5 + 0x28);
  (**(code **)(lVar3 + 0x10))
            (lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),&uStack_48);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar4);
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)lVar3;
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106ee5b08; end: 106ee5b43; -[GCDAsyncUdpSocket doReceiveEOF] */

void FUN_106ee5b08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c246320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee5b44; end: 106ee5bbf; -[GCDAsyncUdpSocket closeWithError:] */

void FUN_106ee5b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010bf945c0(param_1);
  }
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(uint *)(param_1 + 0x44);
  func_0x00010c12e720(param_1);
  func_0x00010bf3dce0(param_1);
  func_0x00010bf3dda0(param_1);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((uVar1 & 1) != 0) {
    func_0x00010c0dcfe0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ee5bc0; end: 106ee5c83; -[GCDAsyncUdpSocket close] */

void FUN_106ee5bc0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106ee5c50;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  lStack_28 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x60),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106ee5c84; end: 106ee5d6f; -[GCDAsyncUdpSocket closeAfterSending] */

void FUN_106ee5c84(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106ee5d14;
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



/* Entry: 106ee5d70; end: 106ee5d73; +[GCDAsyncUdpSocket ignore:] */

void FUN_106ee5d70(void)

{
  return;
}



/* Entry: 106ee5d74; end: 106ee5ddf; +[GCDAsyncUdpSocket startListenerThreadIfNeeded] */

void FUN_106ee5d74(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106ee5de0;
  puStack_20 = &UNK_110848088;
  if (lRam00000001136c8020 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136c8020,&puStack_38);
  }
  return;
}



/* Entry: 106ee5de0; end: 106ee5e33;  */

void FUN_106ee5de0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_alloc();
  func_0x00010c050ac0();
  uVar1 = puRam00000001136c8028;
  puRam00000001136c8028 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001136c8028,PTR_s_start_112671080);
  return;
}



/* Entry: 106ee5e34; end: 106ee5f03; +[GCDAsyncUdpSocket listenerThread] */

void FUN_106ee5e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  _objc_autoreleasePoolPush();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  func_0x00010c1503c0(puVar2,param_2,param_1,PTR_s_ignore__112535d88,0,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142680();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(uVar1);
  return;
}



/* Entry: 106ee5f04; end: 106ee5f93; +[GCDAsyncUdpSocket addStreamListener:] */

void FUN_106ee5f04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_3;
  _objc_retain(param_3);
  _CFRunLoopGetCurrent();
  puVar1 = PTR__kCFRunLoopDefaultMode_11034abe8;
  if (*(long *)(param_3 + 0x130) != 0) {
    _CFReadStreamScheduleWithRunLoop
              (*(long *)(param_3 + 0x130),lVar2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8)
    ;
  }
  if (*(long *)(param_3 + 0x138) != 0) {
    _CFReadStreamScheduleWithRunLoop(*(long *)(param_3 + 0x138),lVar2,*(undefined8 *)puVar1);
  }
  if (*(long *)(param_3 + 0x140) != 0) {
    _CFWriteStreamScheduleWithRunLoop(*(long *)(param_3 + 0x140),lVar2,*(undefined8 *)puVar1);
  }
  if (*(long *)(param_3 + 0x148) != 0) {
    _CFWriteStreamScheduleWithRunLoop(*(long *)(param_3 + 0x148),lVar2,*(undefined8 *)puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ee5f94; end: 106ee6023; +[GCDAsyncUdpSocket removeStreamListener:] */

void FUN_106ee5f94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_3;
  _objc_retain(param_3);
  _CFRunLoopGetCurrent();
  puVar1 = PTR__kCFRunLoopDefaultMode_11034abe8;
  if (*(long *)(param_3 + 0x130) != 0) {
    _CFReadStreamUnscheduleFromRunLoop
              (*(long *)(param_3 + 0x130),lVar2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8)
    ;
  }
  if (*(long *)(param_3 + 0x138) != 0) {
    _CFReadStreamUnscheduleFromRunLoop(*(long *)(param_3 + 0x138),lVar2,*(undefined8 *)puVar1);
  }
  if (*(long *)(param_3 + 0x140) != 0) {
    _CFWriteStreamUnscheduleFromRunLoop(*(long *)(param_3 + 0x140),lVar2,*(undefined8 *)puVar1);
  }
  if (*(long *)(param_3 + 0x148) != 0) {
    _CFWriteStreamUnscheduleFromRunLoop(*(long *)(param_3 + 0x148),lVar2,*(undefined8 *)puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ee6024; end: 106ee61f7; -[GCDAsyncUdpSocket createReadAndWriteStreams:] */

undefined8 FUN_106ee6024(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((((*(long *)(param_1 + 0x130) == 0) && (*(long *)(param_1 + 0x140) == 0)) &&
      (*(long *)(param_1 + 0x138) == 0)) && (*(long *)(param_1 + 0x148) == 0)) {
    if (*(int *)(param_1 + 0x54) == -1) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 != -1) {
LAB_106ee60d4:
        _CFStreamCreatePairWithSocket(0,iVar1,param_1 + 0x138,param_1 + 0x148);
        if ((*(long *)(param_1 + 0x138) != 0) && (*(long *)(param_1 + 0x148) != 0)) {
          lVar3 = *(long *)(param_1 + 0x130);
          goto LAB_106ee60f8;
        }
      }
    }
    else {
      _CFStreamCreatePairWithSocket(0,*(int *)(param_1 + 0x54),param_1 + 0x130,param_1 + 0x140);
      lVar3 = *(long *)(param_1 + 0x130);
      if ((lVar3 != 0) && (*(long *)(param_1 + 0x140) != 0)) {
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 != -1) goto LAB_106ee60d4;
LAB_106ee60f8:
        uVar2 = *(undefined8 *)PTR__kCFStreamPropertyShouldCloseNativeSocket_11034abf0;
        uVar4 = *(undefined8 *)PTR__kCFBooleanFalse_11034ab88;
        _CFReadStreamSetProperty(lVar3,uVar2,uVar4);
        _CFWriteStreamSetProperty(*(undefined8 *)(param_1 + 0x140),uVar2,uVar4);
        _CFReadStreamSetProperty(*(undefined8 *)(param_1 + 0x138),uVar2,uVar4);
        _CFWriteStreamSetProperty(*(undefined8 *)(param_1 + 0x148),uVar2,uVar4);
        goto LAB_106ee6058;
      }
    }
    lVar3 = param_1;
    func_0x00010c0ede80();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x130) != 0) {
      _CFReadStreamClose();
      _CFRelease(*(undefined8 *)(param_1 + 0x130));
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    if (*(long *)(param_1 + 0x140) != 0) {
      _CFWriteStreamClose();
      _CFRelease(*(undefined8 *)(param_1 + 0x140));
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      _CFReadStreamClose();
      _CFRelease(*(undefined8 *)(param_1 + 0x138));
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    if (*(long *)(param_1 + 0x148) != 0) {
      _CFWriteStreamClose();
      _CFRelease(*(undefined8 *)(param_1 + 0x148));
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    if (param_3 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      _objc_retainAutorelease(lVar3);
      uVar2 = 0;
      *param_3 = lVar3;
    }
  }
  else {
LAB_106ee6058:
    lVar3 = 0;
    uVar2 = 1;
  }
  _objc_release(lVar3);
  return uVar2;
}



/* Entry: 106ee61f8; end: 106ee639f; -[GCDAsyncUdpSocket registerForStreamCallbacks:] */

undefined8 FUN_106ee61f8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(long *)(param_1 + 0x110) = param_1;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x54) == -1) {
LAB_106ee6278:
    if (*(int *)(param_1 + 0x58) == -1) {
LAB_106ee62d4:
      lVar1 = 0;
      uVar2 = 1;
      goto LAB_106ee6384;
    }
    lVar1 = *(long *)(param_1 + 0x138);
    if ((lVar1 != 0) && (*(long *)(param_1 + 0x148) != 0)) {
      _CFReadStreamSetClient(lVar1,0x18,FUN_106ee63a0,param_1 + 0x108);
      uVar2 = *(undefined8 *)(param_1 + 0x148);
      _CFWriteStreamSetClient(uVar2,0x18,0x106ee64a4,param_1 + 0x108);
      if (((int)lVar1 != 0) && ((int)uVar2 != 0)) goto LAB_106ee62d4;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x130);
    if ((lVar1 != 0) && (*(long *)(param_1 + 0x140) != 0)) {
      _CFReadStreamSetClient(lVar1,0x18,FUN_106ee63a0,param_1 + 0x108);
      uVar2 = *(undefined8 *)(param_1 + 0x140);
      _CFWriteStreamSetClient(uVar2,0x18,0x106ee64a4,param_1 + 0x108);
      if (((int)lVar1 != 0) && ((int)uVar2 != 0)) goto LAB_106ee6278;
    }
  }
  lVar1 = param_1;
  func_0x00010c0ede80();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x130) != 0) {
    _CFReadStreamSetClient(*(long *)(param_1 + 0x130),0,0,0);
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    _CFWriteStreamSetClient(*(long *)(param_1 + 0x140),0,0,0);
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    _CFReadStreamSetClient(*(long *)(param_1 + 0x138),0,0,0);
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    _CFWriteStreamSetClient(*(long *)(param_1 + 0x148),0,0,0);
  }
  if (param_3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    _objc_retainAutorelease(lVar1);
    uVar2 = 0;
    *param_3 = lVar1;
  }
LAB_106ee6384:
  _objc_release(lVar1);
  return uVar2;
}



/* Entry: 106ee63a0; end: 106ee65a7;  */

void FUN_106ee63a0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  _objc_retain(param_3);
  if ((param_2 == 0x10) || (param_2 == 8)) {
    lVar2 = param_1;
    _CFReadStreamCopyError();
    if ((param_2 == 0x10) && (lVar2 == 0)) {
      lVar2 = param_3;
      func_0x00010c246320();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_3 + 0x60);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x106ee6f38;
    puStack_60 = &UNK_110844b80;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    lStack_50 = lVar2;
    _objc_retain(lVar2);
    func_0x00010007380c(uVar3,&puStack_78);
    _objc_release(lStack_50);
    _objc_release(lStack_58);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ee65a8; end: 106ee6607; -[GCDAsyncUdpSocket addStreamsToRunLoop:] */

undefined8 FUN_106ee65a8(long param_1)

{
  if ((*(byte *)(param_1 + 0x46) >> 1 & 1) == 0) {
    _objc_opt_class();
    func_0x00010c24f180();
    _objc_opt_class(param_1);
    func_0x00010c0f8ee0();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x20000;
  }
  return 1;
}



/* Entry: 106ee6608; end: 106ee66d7; -[GCDAsyncUdpSocket openStreams:] */

undefined8 FUN_106ee6608(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x54) == -1) {
LAB_106ee6658:
    if (*(int *)(param_1 + 0x58) != -1) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x138);
      _CFReadStreamOpen();
      iVar2 = (int)*(undefined8 *)(param_1 + 0x148);
      _CFWriteStreamOpen();
      if (iVar1 == 0 || iVar2 == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e8c138;
        goto LAB_106ee668c;
      }
    }
    uVar4 = 1;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x130);
    _CFReadStreamOpen();
    iVar2 = (int)*(undefined8 *)(param_1 + 0x140);
    _CFWriteStreamOpen();
    if (iVar1 != 0 && iVar2 != 0) goto LAB_106ee6658;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e8c118;
LAB_106ee668c:
    func_0x00010c0ede80(param_1,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      _objc_retainAutorelease();
      uVar4 = 0;
      *param_3 = param_1;
    }
  }
  _objc_release();
  return uVar4;
}



/* Entry: 106ee66d8; end: 106ee6727; -[GCDAsyncUdpSocket removeStreamsFromRunLoop] */

void FUN_106ee66d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x46) >> 1 & 1) != 0) {
    _objc_opt_class();
    func_0x00010c0f8ee0();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffdffff;
  }
  return;
}



/* Entry: 106ee6728; end: 106ee67f3; -[GCDAsyncUdpSocket closeReadAndWriteStreams] */

void FUN_106ee6728(long param_1)

{
  if (*(long *)(param_1 + 0x130) != 0) {
    _CFReadStreamSetClient(*(long *)(param_1 + 0x130),0,0,0);
    _CFReadStreamClose(*(undefined8 *)(param_1 + 0x130));
    _CFRelease(*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    _CFWriteStreamSetClient(*(long *)(param_1 + 0x140),0,0,0);
    _CFWriteStreamClose(*(undefined8 *)(param_1 + 0x140));
    _CFRelease(*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    _CFReadStreamSetClient(*(long *)(param_1 + 0x138),0,0,0);
    _CFReadStreamClose(*(undefined8 *)(param_1 + 0x138));
    _CFRelease(*(undefined8 *)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    _CFWriteStreamSetClient(*(long *)(param_1 + 0x148),0,0,0);
    _CFWriteStreamClose(*(undefined8 *)(param_1 + 0x148));
    _CFRelease(*(undefined8 *)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  return;
}



/* Entry: 106ee67f4; end: 106ee68bb; -[GCDAsyncUdpSocket applicationWillEnterForeground:] */

void FUN_106ee67f4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106ee6884;
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



/* Entry: 106ee68bc; end: 106ee68d3; -[GCDAsyncUdpSocket markSocketQueueTargetQueue:] */

void FUN_106ee68bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_set_specific_11034c100)
            (param_3,*(undefined8 *)(param_1 + 0x100),param_1,0);
  return;
}



/* Entry: 106ee68d4; end: 106ee68e7; -[GCDAsyncUdpSocket unmarkSocketQueueTargetQueue:] */

void FUN_106ee68d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_set_specific_11034c100)
            (param_3,*(undefined8 *)(param_1 + 0x100),0,0);
  return;
}



/* Entry: 106ee68e8; end: 106ee692f; -[GCDAsyncUdpSocket performBlock:] */

/* WARNING: Possible PIC construction at 0x00010006eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006eb08) */

void FUN_106ee68e8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106ee6918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  if ((bRam0000000113817d68 & 1) == 0) {
    iVar1 = 0x13817d68;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_sync");
      pcRam0000000113817d60 = pcVar2;
      func_0x000107c60e4c(0x113817d68);
    }
  }
  pcVar2 = pcRam0000000113817d60;
  func_0x00010002a3a8(param_3);
  func_0x000107c61180();
  (*pcVar2)(uVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ee6930; end: 106ee696f; -[GCDAsyncUdpSocket socketFD] */

int FUN_106ee6930(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1 + 0x58);
    }
  }
  return iVar1;
}



/* Entry: 106ee6970; end: 106ee69a3; -[GCDAsyncUdpSocket socket4FD] */

undefined4 FUN_106ee6970(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
  }
  return uVar1;
}



/* Entry: 106ee69a4; end: 106ee69d7; -[GCDAsyncUdpSocket socket6FD] */

undefined4 FUN_106ee69a4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar1;
}



/* Entry: 106ee69d8; end: 106ee6a2f; -[GCDAsyncUdpSocket readStream] */

void FUN_106ee69d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar1 != 0) {
    uStack_28 = 0;
    func_0x00010bf58260(param_1,param_2,&uStack_28);
  }
  return;
}



/* Entry: 106ee6a30; end: 106ee6a87; -[GCDAsyncUdpSocket writeStream] */

void FUN_106ee6a30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x100);
  _dispatch_get_specific();
  if (lVar1 != 0) {
    uStack_28 = 0;
    func_0x00010bf58260(param_1,param_2,&uStack_28);
  }
  return;
}



/* Entry: 106ee6a88; end: 106ee6a8f; -[GCDAsyncUdpSocket enableBackgroundingOnSockets] */

undefined8 FUN_106ee6a88(void)

{
  return 0;
}



/* Entry: 106ee6a90; end: 106ee6b0b; +[GCDAsyncUdpSocket hostFromSockaddr4:] */

undefined * FUN_106ee6a90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_76 [46];
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 auStack_28 [16];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 2;
  _inet_ntop(2,param_3 + 4,auStack_28,0x10);
  if (lVar1 == 0) {
    auStack_28[0] = 0;
  }
  puVar3 = auStack_28;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_106ee6b0c;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = 0x1e;
    puStack_40 = &stack0xfffffffffffffff0;
    _inet_ntop(0x1e,puVar3 + 8,auStack_76,0x2e);
    if (lVar1 == 0) {
      auStack_76[0] = 0;
    }
    puVar3 = auStack_76;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      return (undefined *)
             (ulong)((uint)(*(ushort *)(puVar3 + 2) >> 8) |
                    (*(ushort *)(puVar3 + 2) & 0xff00ff) << 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 106ee6b0c; end: 106ee6b87; +[GCDAsyncUdpSocket hostFromSockaddr6:] */

undefined * FUN_106ee6b0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_46 [46];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x1e;
  _inet_ntop(0x1e,param_3 + 8,auStack_46,0x2e);
  if (lVar1 == 0) {
    auStack_46[0] = 0;
  }
  puVar3 = auStack_46;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)
         (ulong)((uint)(*(ushort *)(puVar3 + 2) >> 8) | (*(ushort *)(puVar3 + 2) & 0xff00ff) << 8);
}



/* Entry: 106ee6b88; end: 106ee6b97; +[GCDAsyncUdpSocket portFromSockaddr4:] */

ushort FUN_106ee6b88(undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
}



/* Entry: 106ee6b98; end: 106ee6ba7; +[GCDAsyncUdpSocket portFromSockaddr6:] */

ushort FUN_106ee6b98(undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
}



/* Entry: 106ee6ba8; end: 106ee6bef; +[GCDAsyncUdpSocket hostFromAddress:] */

void FUN_106ee6ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00010bfc6380(param_1,param_2,&uStack_28,0,0,param_3);
  uVar1 = uStack_28;
  _objc_retain(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ee6bf0; end: 106ee6c23; +[GCDAsyncUdpSocket portFromAddress:] */

undefined2 FUN_106ee6bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uStack_12;
  
  uStack_12 = 0;
  func_0x00010bfc6380(param_1,param_2,0,&uStack_12,0,param_3);
  return uStack_12;
}



/* Entry: 106ee6c24; end: 106ee6c57; +[GCDAsyncUdpSocket familyFromAddress:] */

undefined4 FUN_106ee6c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = 0;
  func_0x00010bfc6380(param_1,param_2,0,0,&uStack_14,param_3);
  return uStack_14;
}



/* Entry: 106ee6c58; end: 106ee6c93; +[GCDAsyncUdpSocket isIPv4Address:] */

bool FUN_106ee6c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iStack_14;
  
  iStack_14 = 0;
  func_0x00010bfc6380(param_1,param_2,0,0,&iStack_14,param_3);
  return iStack_14 == 2;
}



/* Entry: 106ee6c94; end: 106ee6ccf; +[GCDAsyncUdpSocket isIPv6Address:] */

bool FUN_106ee6c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iStack_14;
  
  iStack_14 = 0;
  func_0x00010bfc6380(param_1,param_2,0,0,&iStack_14,param_3);
  return iStack_14 == 0x1e;
}



/* Entry: 106ee6cd0; end: 106ee6cdb; +[GCDAsyncUdpSocket getHost:port:fromAddress:] */

void FUN_106ee6cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getHost_port_family_fromAddress__1125cf288,param_3,param_4,0,param_5);
  return;
}



/* Entry: 106ee6cdc; end: 106ee6e27; +[GCDAsyncUdpSocket getHost:port:family:fromAddress:] */

undefined8
FUN_106ee6cdc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined2 *param_4,
             undefined4 *param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c08fa60();
  if (uVar1 < 0x10) {
LAB_106ee6de8:
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = 0;
    }
    uVar3 = 0;
    uVar4 = 0;
    if (param_5 == (undefined4 *)0x0) goto LAB_106ee6e08;
  }
  else {
    uVar1 = param_6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (*(char *)(uVar1 + 1) == '\x1e') {
      uVar2 = param_6;
      func_0x00010c08fa60();
      if (uVar2 < 0x1c) goto LAB_106ee6de8;
      if (param_3 != (undefined8 *)0x0) {
        uVar4 = param_1;
        func_0x00010bfe45c0(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = uVar4;
      }
      if (param_4 != (undefined2 *)0x0) {
        func_0x00010c1040c0(param_1,param_2,uVar1);
        *param_4 = (short)param_1;
      }
      uVar4 = 1;
      if (param_5 == (undefined4 *)0x0) goto LAB_106ee6e08;
      uVar3 = 0x1e;
    }
    else {
      if ((*(char *)(uVar1 + 1) != '\x02') || (uVar2 = param_6, func_0x00010c08fa60(), uVar2 < 0x10)
         ) goto LAB_106ee6de8;
      if (param_3 != (undefined8 *)0x0) {
        uVar4 = param_1;
        func_0x00010bfe45a0(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = uVar4;
      }
      if (param_4 != (undefined2 *)0x0) {
        func_0x00010c1040a0(param_1,param_2,uVar1);
        *param_4 = (short)param_1;
      }
      uVar4 = 1;
      if (param_5 == (undefined4 *)0x0) goto LAB_106ee6e08;
      uVar3 = 2;
    }
  }
  *param_5 = uVar3;
LAB_106ee6e08:
  _objc_release(param_6);
  return uVar4;
}



/* Entry: 106ee6e28; end: 106ee6fd7; -[GCDAsyncUdpSocket .cxx_destruct] */

void FUN_106ee6e28(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ee6fd8; end: 106ee7097; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator initWithParams:delegate:callbackPerformer:] */

undefined1 *
FUN_106ee6fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7c30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3210;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106ee7098; end: 106ee72db; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator startConnecting] */

void FUN_106ee7098(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = param_1;
  func_0x00010c0f04c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fe0(0x3fe0000000000000,uVar5);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  puVar1 = PTR_PTR_1126d3218;
  func_0x00010bf61100(PTR_PTR_1126d3218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193380(param_1);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf8bfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfbfe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168fe0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010bf05e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
    _objc_release(lVar3);
  }
  puVar1 = PTR_PTR_1126d3178;
  func_0x00010c0db120(PTR_PTR_1126d3178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168e80(*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6718;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf05e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf05bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(lVar3);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106ee72dc; end: 106ee7353;  */

void FUN_106ee72dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f04c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c00(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ee7354; end: 106ee75bb; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator _tryPeerVerification] */

void FUN_106ee7354(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  func_0x00010c27bc00();
  if ((uVar1 & 1) == 0) {
    func_0x00010c21a260(param_1,param_2,1);
    if (*(long *)(param_1 + 0x18) == 0) {
      ppuVar7 = &PTR_FUN_11318aee0;
    }
    else {
      ppuVar7 = &PTR_DAT_11318aee8;
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010c27bbe0();
    if ((uVar1 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    func_0x00010c21a220(param_1,param_2,1);
    ppuVar7 = &PTR_FUN_11318aef0;
    if (*(long *)(param_1 + 0x18) != 0) {
      ppuVar7 = &PTR_DAT_11318aef8;
    }
  }
  puVar8 = *ppuVar7;
  puVar2 = PTR_PTR_1126d3220;
  _objc_alloc(PTR_PTR_1126d3220);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf05bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0f70c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c22bf40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3540(puVar2,param_2,uVar3,uVar4,uVar5,2,puVar8);
  func_0x00010c16c9a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar1 = param_1;
  func_0x00010bf10dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bfc06c0();
  _objc_retain(0);
  _objc_retain(0);
  _objc_release(uVar1);
  if ((uVar6 & 1) == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
  }
  else {
    func_0x00010c1692c0(*(undefined8 *)(param_1 + 0x40),param_2,0);
    puVar2 = PTR_PTR_1126b6718;
    func_0x00010c2989e0(PTR_PTR_1126b6718,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da0e0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f71a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar1,param_2,param_1);
    _objc_release(param_1);
    param_1 = uVar1;
  }
  _objc_release(param_1);
  _objc_release(0);
  _objc_release(0);
  return;
}



/* Entry: 106ee75bc; end: 106ee7ab3; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator handleResponse:] */

undefined * FUN_106ee75bc(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [128];
  long lStack_a8;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf10dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c0f70e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) goto LAB_106ee79b0;
    puVar4 = param_3;
    func_0x00010c0f7160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar4 == (undefined *)0x0) goto LAB_106ee79b0;
    puVar1 = param_3;
    func_0x00010c0f70e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da0a0(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bf8bfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c0f70e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfc0160(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff0c0(*(undefined8 *)(param_1 + 0x40),param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c0f7160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da080(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x40);
    func_0x00010c22bf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) goto LAB_106ee7994;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
    puVar1 = param_1;
  }
  else {
    puVar4 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    if (puVar4 == (undefined *)0x0) {
LAB_106ee766c:
      puVar4 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) goto LAB_106ee79b0;
      puVar6 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010c0db100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar4);
      if (puVar6 != puVar2) goto LAB_106ee79b0;
      puVar4 = param_3;
      func_0x00010c13bcc0();
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x4) {
        func_0x00010c0f2c20(puVar1);
        goto LAB_106ee79ac;
      }
LAB_106ee76f0:
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2c00(puVar1,param_2,param_1);
      puVar4 = param_1;
    }
    else {
      puVar6 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010c0f71a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar4);
      if (puVar6 != puVar2) goto LAB_106ee766c;
      puVar4 = param_3;
      func_0x00010c13bcc0();
      if (puVar4 != (undefined *)0x4) {
LAB_106ee7994:
        func_0x00010bed0400(param_1);
        goto LAB_106ee79b0;
      }
      puVar4 = param_3;
      func_0x00010c0f71e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2028c0(*(undefined8 *)(param_1 + 0x40),param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010c0f7180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5e20(*(undefined8 *)(param_1 + 0x40),param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bee8420();
      if (((ulong)puVar4 & 1) == 0) goto LAB_106ee7994;
      if (*(long *)(param_1 + 0x18) == 1) {
        puVar4 = param_3;
        func_0x00010c0f7180();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_50 = puVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f5e20(*(undefined8 *)(param_1 + 0x40),param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar4);
        puVar4 = param_1;
        func_0x00010bf8bfe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bfbf4a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c195ce0(param_1,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar4);
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ee76f0;
      }
      if (*(long *)(param_1 + 0x18) != 0) goto LAB_106ee79b0;
      func_0x00010bf8bfe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bfbf4a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195ce0(param_1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126d3178;
      func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b6718;
      func_0x00010bf93fa0(PTR_PTR_1126b6718,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cdac0(param_1,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0db100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(puVar4,param_2,param_1);
      _objc_release(param_1);
    }
    _objc_release(puVar4);
  }
LAB_106ee79ac:
  _objc_release(puVar1);
LAB_106ee79b0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d3178;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_3 + 0x18) == 0) {
    func_0x00010bfe0b00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_3;
    func_0x00010bf7fde0(param_3);
    func_0x00010bf38b40(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  _objc_retain();
  puVar4 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_170,auStack_128,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar5 = *plStack_160;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_160 != lVar5) {
          _objc_enumerationMutation(puVar1);
        }
        puVar2 = param_3;
        func_0x00010bf10dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c2985c0();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          puVar4 = (undefined *)0x1;
          goto LAB_106ee7be4;
        }
        puVar6 = puVar6 + 1;
      } while (puVar4 != puVar6);
      puVar4 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_170,auStack_128,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  puVar4 = (undefined *)0x0;
LAB_106ee7be4:
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    return *(undefined **)(puVar1 + 0x10);
  }
  return puVar4;
}



/* Entry: 106ee7ab4; end: 106ee7c2f; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator _verifyAuthenticity] */

undefined8 FUN_106ee7ab4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar2 = PTR_PTR_1126d3178;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00010bfe0b00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010bf7fde0(param_1);
    func_0x00010bf38b40(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar6 = *plStack_110;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        uVar1 = param_1;
        func_0x00010bf10dc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c2985c0();
        _objc_release(uVar1);
        if ((uVar4 & 1) != 0) {
          uVar5 = 1;
          goto LAB_106ee7be4;
        }
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  uVar5 = 0;
LAB_106ee7be4:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(puVar2 + 0x10);
}



/* Entry: 106ee7c30; end: 106ee7c37; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator overrideSharedSecret] */

undefined8 FUN_106ee7c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ee7c38; end: 106ee7c67; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setOverrideSharedSecret:] */

void FUN_106ee7c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7c68; end: 106ee7c6f; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator disableDevCert] */

undefined1 FUN_106ee7c68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106ee7c70; end: 106ee7c77; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setDisableDevCert:] */

void FUN_106ee7c70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ee7c78; end: 106ee7c7f; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator params] */

undefined8 FUN_106ee7c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ee7c80; end: 106ee7c87; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setParams:] */

void FUN_106ee7c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106ee7c88; end: 106ee7c9f; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator delegate] */

void FUN_106ee7c88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ee7ca0; end: 106ee7cab; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setDelegate:] */

void FUN_106ee7ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106ee7cac; end: 106ee7cb3; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator callbackPerformer] */

undefined8 FUN_106ee7cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ee7cb4; end: 106ee7ce3; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setCallbackPerformer:] */

void FUN_106ee7cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7ce4; end: 106ee7ceb; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator ecdh] */

undefined8 FUN_106ee7ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ee7cec; end: 106ee7d1b; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setEcdh:] */

void FUN_106ee7cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7d1c; end: 106ee7d23; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator authenticator] */

undefined8 FUN_106ee7d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ee7d24; end: 106ee7d53; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setAuthenticator:] */

void FUN_106ee7d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7d54; end: 106ee7d5b; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator transcript] */

undefined8 FUN_106ee7d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ee7d5c; end: 106ee7d8b; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setTranscript:] */

void FUN_106ee7d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7d8c; end: 106ee7d93; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator encryptionKey] */

undefined8 FUN_106ee7d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ee7d94; end: 106ee7dc3; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setEncryptionKey:] */

void FUN_106ee7d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7dc4; end: 106ee7dcb; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator peerVerificationRequest] */

undefined8 FUN_106ee7dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ee7dcc; end: 106ee7dfb; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setPeerVerificationRequest:] */

void FUN_106ee7dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7dfc; end: 106ee7e03; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator nonceExchangeRequest] */

undefined8 FUN_106ee7dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106ee7e04; end: 106ee7e33; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setNonceExchangeRequest:] */

void FUN_106ee7e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee7e34; end: 106ee7e3b; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator triedProdKey] */

undefined1 FUN_106ee7e34(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106ee7e3c; end: 106ee7e43; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setTriedProdKey:] */

void FUN_106ee7e3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106ee7e44; end: 106ee7e4b; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator triedDevKey] */

undefined1 FUN_106ee7e44(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106ee7e4c; end: 106ee7e53; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setTriedDevKey:] */

void FUN_106ee7e4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106ee7e54; end: 106ee7ed3; -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator .cxx_destruct] */

void FUN_106ee7e54(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ee7ed4; end: 106ee7fab; -[SCSpectaclesPairingLagunaBLEAuthenticator initWithVerificationCode:delegate:] */

undefined1 *
FUN_106ee7ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7c38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    puVar2 = PTR_PTR_1126d3218;
    func_0x00010bf61100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d3228;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    func_0x00010c220bc0(*(undefined8 *)((long)puVar1 + 0x18));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ee7fac; end: 106ee80a7; -[SCSpectaclesPairingLagunaBLEAuthenticator startConnecting] */

void FUN_106ee7fac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d3230;
  _objc_alloc_init(PTR_PTR_1126d3230);
  lVar2 = param_1;
  func_0x00010bf8bfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbfe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
    _objc_release(lVar2);
  }
  puVar4 = puVar1;
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6ec0();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7160();
  _objc_release(puVar4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15bc00();
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ee80a8; end: 106ee84ff; -[SCSpectaclesPairingLagunaBLEAuthenticator handleEncryptionResponse:] */

void FUN_106ee80a8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c252d60();
  if (((uint)puVar2 & 0xfffffffe) == 2) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
    puVar2 = param_1;
    goto LAB_106ee84d8;
  }
  puVar2 = param_3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0cba00();
  iVar1 = (int)puVar3;
  if (iVar1 == 3) {
    puVar3 = param_1;
    func_0x00010c0df8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c0cb3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf37e40(puVar3,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar3);
    if ((int)puVar9 == 0) goto LAB_106ee8474;
    puVar3 = param_1;
    func_0x00010bf8bfe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c22bf40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bfbf460(puVar3,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar3);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c00();
LAB_106ee84cc:
    _objc_release(param_1);
    param_1 = puVar9;
  }
  else {
    if (iVar1 == 2) {
      puVar3 = param_3;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010c0cb3e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      _objc_release(puVar3);
      if (puVar9 == (undefined *)0x18) {
        puVar9 = PTR_PTR_1126d3178;
        func_0x00010c297b20(PTR_PTR_1126d3178);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d3178;
        func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_3;
        func_0x00010c0cb140(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        func_0x00010c0cb3e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar8);
        puVar8 = param_3;
        func_0x00010c0cb140(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        func_0x00010c0cb3e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar8);
        puVar8 = param_1;
        func_0x00010c0df8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        func_0x00010bfc25c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        if (puVar4 == (undefined *)0x0) {
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f2c20();
        }
        else {
          puVar8 = PTR_PTR_1126d3230;
          _objc_alloc_init(PTR_PTR_1126d3230);
          puVar7 = puVar8;
          func_0x00010c0cb140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c7160();
          _objc_release(puVar7);
          puVar7 = puVar8;
          func_0x00010c0cb140(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c6ec0();
          _objc_release(puVar7);
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15bc00();
          _objc_release(param_1);
          param_1 = puVar8;
        }
        _objc_release(param_1);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        param_1 = puVar3;
        goto LAB_106ee84cc;
      }
    }
    else {
      if (iVar1 != 1) goto LAB_106ee84d8;
      puVar3 = param_1;
      func_0x00010bf8bfe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0cb3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010bfc0160(puVar3,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ff0c0(param_1,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar3);
      puVar3 = param_1;
      func_0x00010c22bf40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        puVar9 = param_1;
        func_0x00010c0df8c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c22bf40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ff0c0(puVar9,param_2,param_1);
        goto LAB_106ee84cc;
      }
    }
LAB_106ee8474:
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2c20();
  }
  _objc_release(param_1);
LAB_106ee84d8:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ee8500; end: 106ee8517; -[SCSpectaclesPairingLagunaBLEAuthenticator delegate] */

void FUN_106ee8500(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ee8518; end: 106ee8523; -[SCSpectaclesPairingLagunaBLEAuthenticator setDelegate:] */

void FUN_106ee8518(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106ee8524; end: 106ee852b; -[SCSpectaclesPairingLagunaBLEAuthenticator ecdh] */

undefined8 FUN_106ee8524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ee852c; end: 106ee855b; -[SCSpectaclesPairingLagunaBLEAuthenticator setEcdh:] */

void FUN_106ee852c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee855c; end: 106ee8563; -[SCSpectaclesPairingLagunaBLEAuthenticator numericComparison] */

undefined8 FUN_106ee855c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ee8564; end: 106ee8593; -[SCSpectaclesPairingLagunaBLEAuthenticator setNumericComparison:] */

void FUN_106ee8564(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ee8594; end: 106ee859b; -[SCSpectaclesPairingLagunaBLEAuthenticator sharedSecret] */

undefined8 FUN_106ee8594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ee859c; end: 106ee85cb; -[SCSpectaclesPairingLagunaBLEAuthenticator setSharedSecret:] */

void FUN_106ee859c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ee85cc; end: 106ee860f; -[SCSpectaclesPairingLagunaBLEAuthenticator .cxx_destruct] */

void FUN_106ee85cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ee8610; end: 106ee87c7; -[SCSpectaclesPairingLagunaBTAuthenticator initWithAccessory:encryptionKey:authProviders:delegate:] */

undefined1 *
FUN_106ee8610(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126d3238;
  puVar1 = PTR_PTR_1126c0c70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c087d40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3240;
  func_0x00010bf95ea0(PTR_PTR_1126d3240);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d78e0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    func_0x00010c0f2c60(param_6);
    ppuVar5 = (undefined1 **)0x0;
  }
  else {
    puStack_58 = PTR_PTR_1126f7c40;
    puStack_60 = param_1;
    _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
    if (ppuVar5 != (undefined1 **)0x0) {
      _objc_storeWeak((undefined1 *)((long)ppuVar5 + 0x18),param_6);
      _objc_retain(param_5);
      uVar4 = *(undefined8 *)((long)ppuVar5 + 0x28);
      *(undefined8 *)((long)ppuVar5 + 0x28) = param_5;
      _objc_release(uVar4);
      _objc_retain(puVar3);
      uVar4 = *(undefined8 *)((long)ppuVar5 + 0x10);
      *(undefined **)((long)ppuVar5 + 0x10) = puVar3;
      _objc_release(uVar4);
      puVar1 = PTR_PTR_1126d3248;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)((long)ppuVar5 + 0x20);
      *(undefined **)((long)ppuVar5 + 0x20) = puVar1;
      _objc_release(uVar4);
      func_0x00010c24d960(*(undefined8 *)((long)ppuVar5 + 0x10));
    }
    _objc_retain(ppuVar5);
    param_1 = (undefined1 *)ppuVar5;
  }
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_1);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106ee87c8; end: 106ee88eb; -[SCSpectaclesPairingLagunaBTAuthenticator _sendAuthRequest:withData:] */

void FUN_106ee87c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d3250;
  _objc_alloc_init(PTR_PTR_1126d3250);
  puVar2 = puVar1;
  func_0x00010bf108e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c7a0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  if ((int)param_3 == 5) {
    func_0x00010bf108e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168800();
  }
  else {
    if ((int)param_3 != 3) goto LAB_106ee8874;
    func_0x00010bf108e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c78e0();
  }
  _objc_release(puVar2);
LAB_106ee8874:
  func_0x00010c1876c0(param_1,param_2,param_3);
  func_0x00010bf3ca40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3150;
  func_0x00010c087be0(PTR_PTR_1126d3150,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ee88ec; end: 106ee88f7; -[SCSpectaclesPairingLagunaBTAuthenticator communicationClientDidBecomeActive:] */

void FUN_106ee88ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendAuthRequest_withData__112585400,1,0);
  return;
}



/* Entry: 106ee88f8; end: 106ee8927; -[SCSpectaclesPairingLagunaBTAuthenticator communicationClient:didError:] */

void FUN_106ee88f8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


