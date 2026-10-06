/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ed2770; end: 106ed28af;  */

void FUN_106ed2770(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (lVar7 == 0) {
    func_0x00010bf15080(uVar3,param_2,&PTR____CFConstantStringClassReference_110e8b538);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar3;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uStack_48 = *(undefined8 *)(lVar7 + 0x28);
    func_0x00010c105d40(uVar3,param_2,*(undefined8 *)(param_1 + 0x20),&uStack_48);
    uVar6 = uStack_48;
    _objc_retain(uStack_48);
    uVar4 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar6;
    _objc_release(uVar4);
    if ((int)uVar3 == 0) goto LAB_106ed2890;
    *(uint *)(*(long *)(param_1 + 0x28) + 8) = *(uint *)(*(long *)(param_1 + 0x28) + 8) | 1;
    uVar5 = *(ulong *)(param_1 + 0x28);
    uStack_50 = 0;
    func_0x00010bf48520(uVar5,param_2,*(undefined8 *)(uVar5 + 0x50),&uStack_50);
    uVar6 = uStack_50;
    _objc_retain(uStack_50);
    if ((uVar5 & 1) == 0) {
      func_0x00010bf3df40(*(undefined8 *)(param_1 + 0x28),param_2,uVar6);
    }
    else {
      func_0x00010c24e5a0(*(undefined8 *)(param_1 + 0x40));
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    }
  }
  _objc_release(uVar6);
LAB_106ed2890:
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ed28b0; end: 106ed29df; -[GCDAsyncSocket connectToNetService:error:] */

undefined1 * FUN_106ed28b0(ulong param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  int iVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  iVar5 = (int)&uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010befd7e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  puVar3 = auStack_d8;
  lVar7 = 0x10;
  uVar1 = param_3;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    unaff_x23 = *plStack_110;
    unaff_x22 = uVar1;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        iVar5 = (int)*(undefined8 *)(lStack_118 + unaff_x24 * 8);
        uVar1 = param_1;
        puVar3 = param_4;
        func_0x00010bf483a0();
        if ((uVar1 & 1) != 0) {
          puVar8 = (undefined1 *)0x1;
          goto LAB_106ed2994;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (unaff_x22 != unaff_x24);
      puVar3 = auStack_d8;
      lVar7 = 0x10;
      unaff_x22 = param_3;
      iVar5 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  puVar8 = (undefined1 *)0x0;
LAB_106ed2994:
  _objc_release(param_3);
  uVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106ed29e0;
  uStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  uStack_148 = param_1;
  puStack_140 = puVar8;
  uStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(lVar7);
  if (iVar5 != *(int *)(uVar1 + 0x38)) goto LAB_106ed2a74;
  if ((lVar7 == 0) && ((*(ushort *)(uVar1 + 0xc) & 1) != 0)) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e8b558;
LAB_106ed2a4c:
    uVar2 = uVar1;
    func_0x00010c0ede80(uVar1,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
LAB_106ed2a60:
    func_0x00010bf3df40(uVar1,param_2,uVar2);
  }
  else {
    if ((puVar3 == (undefined1 *)0x0) && ((*(ushort *)(uVar1 + 0xc) >> 1 & 1) != 0)) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e8b578;
      goto LAB_106ed2a4c;
    }
    uStack_168 = 0;
    uVar4 = uVar1;
    func_0x00010bf484c0(uVar1,param_2,puVar3,lVar7,&uStack_168);
    uVar2 = uStack_168;
    _objc_retain(uStack_168);
    if ((uVar4 & 1) == 0) goto LAB_106ed2a60;
  }
  _objc_release(uVar2);
LAB_106ed2a74:
  _objc_release(lVar7);
  _objc_release(puVar3);
  return puVar3;
}



/* Entry: 106ed29e0; end: 106ed2acb; -[GCDAsyncSocket lookup:didSucceedWithAddress4:address6:] */

void FUN_106ed29e0(ulong param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != *(int *)(param_1 + 0x38)) goto LAB_106ed2a74;
  if ((param_5 == 0) && ((*(ushort *)(param_1 + 0xc) & 1) != 0)) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e8b558;
LAB_106ed2a4c:
    uVar1 = param_1;
    func_0x00010c0ede80(param_1,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_106ed2a60:
    func_0x00010bf3df40(param_1,param_2,uVar1);
  }
  else {
    if ((param_4 == 0) && ((*(ushort *)(param_1 + 0xc) >> 1 & 1) != 0)) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e8b578;
      goto LAB_106ed2a4c;
    }
    uStack_48 = 0;
    uVar2 = param_1;
    func_0x00010bf484c0(param_1,param_2,param_4,param_5,&uStack_48);
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    if ((uVar2 & 1) == 0) goto LAB_106ed2a60;
  }
  _objc_release(uVar1);
LAB_106ed2a74:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106ed2acc; end: 106ed2b1b; -[GCDAsyncSocket lookup:didFail:] */

void FUN_106ed2acc(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 == *(int *)(param_1 + 0x38)) {
    _objc_retain(param_4);
    func_0x00010bf944c0(param_1);
    func_0x00010bf3df40(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 106ed2b1c; end: 106ed2c13; -[GCDAsyncSocket bindSocket:toInterface:error:] */

undefined8
FUN_106ed2b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_44;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar4 = param_1;
    _objc_opt_class();
    iVar1 = (int)uVar4;
    func_0x00010c104080();
    if (iVar1 != 0) {
      uStack_44 = 1;
      _setsockopt(param_3,0xffff,4,&uStack_44,4);
    }
    lVar2 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bf25f00();
    lVar3 = param_4;
    func_0x00010c08fa60(param_4);
    _bind(param_3,lVar2,lVar3);
    if ((int)param_3 != 0) {
      if (param_5 == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        ___error();
        func_0x00010bf992a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        uVar4 = 0;
        *param_5 = param_1;
      }
      goto LAB_106ed2be8;
    }
  }
  uVar4 = 1;
LAB_106ed2be8:
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 106ed2c14; end: 106ed2cf7; -[GCDAsyncSocket createSocket:connectInterface:errPtr:] */

undefined8
FUN_106ed2c14(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  ulong uVar1;
  undefined4 uStack_34;
  
  _objc_retain(param_4);
  _socket(param_3,1,0);
  if ((int)param_3 == -1) {
    if (param_5 != (ulong *)0x0) {
      ___error();
      func_0x00010bf992a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = param_1;
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010bf1a3a0();
    if ((uVar1 & 1) != 0) {
      uStack_34 = 1;
      _setsockopt(param_3,0xffff,0x1022,&uStack_34,4);
      goto LAB_106ed2cd8;
    }
    func_0x00010bf3dd80(param_1);
  }
  param_3 = 0xffffffff;
LAB_106ed2cd8:
  _objc_release(param_4);
  return param_3;
}



/* Entry: 106ed2cf8; end: 106ed2eeb; -[GCDAsyncSocket connectSocket:address:stateIndex:] */

void FUN_106ed2cf8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c06f000();
  if ((int)uVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x106ed2e08;
    puStack_70 = &UNK_1108502a8;
    uStack_50 = param_3;
    _objc_retain(param_4);
    uStack_68 = param_4;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_60 = param_1;
    uStack_4c = param_5;
    func_0x00010007380c(uVar1,&puStack_88);
    _objc_destroyWeak(auStack_58);
    _objc_release(uStack_68);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bf3dd80(param_1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106ed2eec; end: 106ed2fbf;  */

void FUN_106ed2eec(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06f000();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      func_0x00010bf3dec0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined4 *)(param_1 + 0x30));
      func_0x00010bf74240(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x38));
    }
    else {
      func_0x00010bf3dd80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x30));
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c2461a0();
      if (iVar1 == -1) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c2461c0();
        if (iVar1 == -1) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf992a0(uVar3,param_2,*(undefined4 *)(param_1 + 0x3c),
                              &PTR____CFConstantStringClassReference_110e8b598);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf77fe0(*(undefined8 *)(param_1 + 0x20),param_2,
                              *(undefined4 *)(param_1 + 0x38),uVar3);
          _objc_release(uVar3);
        }
      }
    }
  }
  else {
    func_0x00010bf3dd80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 106ed2fc0; end: 106ed3033; -[GCDAsyncSocket closeSocket:] */

void FUN_106ed2fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  if ((iVar1 != -1) && ((iVar1 == *(int *)(param_1 + 0x24) || (iVar1 == *(int *)(param_1 + 0x20)))))
  {
    _close(param_3);
    if (iVar1 == *(int *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    else if (iVar1 == *(int *)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    }
  }
  return;
}



/* Entry: 106ed3034; end: 106ed3057; -[GCDAsyncSocket closeUnusedSocket:] */

void FUN_106ed3034(long param_1,undefined8 param_2,int param_3)

{
  if ((param_3 == *(int *)(param_1 + 0x20)) && (param_3 == *(int *)(param_1 + 0x24))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeSocket__1125ad108);
  return;
}



/* Entry: 106ed3058; end: 106ed321f; -[GCDAsyncSocket connectWithAddress4:address6:error:] */

undefined8 FUN_106ed3058(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  int iStack_68;
  undefined4 uStack_64;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(ushort *)(param_1 + 0xc);
  if (param_3 != 0) {
    lVar6 = param_1;
    func_0x00010bf59060();
    *(int *)(param_1 + 0x20) = (int)lVar6;
  }
  if (param_4 != 0) {
    lVar6 = param_1;
    func_0x00010bf59060();
    *(int *)(param_1 + 0x24) = (int)lVar6;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar10 = *(int *)(param_1 + 0x24);
  if (iVar1 == -1) {
    if (iVar10 == -1) {
      uVar7 = 0;
      goto LAB_106ed31e4;
    }
    lVar6 = param_4;
    lVar8 = param_3;
    iVar10 = -1;
  }
  else {
    lVar4 = param_3;
    lVar5 = param_4;
    if (iVar10 == -1) {
      iVar1 = -1;
      lVar4 = param_4;
      lVar5 = param_3;
    }
    lVar6 = param_3;
    lVar8 = param_4;
    if ((uVar3 & 4) != 0) {
      lVar6 = lVar5;
      lVar8 = lVar4;
      iVar10 = iVar1;
    }
  }
  _objc_retain(lVar6);
  _objc_retain(lVar8);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  func_0x00010bf48320(param_1);
  if (lVar8 != 0) {
    uVar7 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x138) * 1000000000.0));
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106ed3220;
    puStack_80 = &UNK_110844b80;
    lStack_78 = param_1;
    iStack_68 = iVar10;
    _objc_retain(lVar8);
    lStack_70 = lVar8;
    uStack_64 = uVar2;
    func_0x00010058c530(uVar7,uVar9,&puStack_98);
    _objc_release(lStack_70);
  }
  _objc_release(lVar8);
  _objc_release(lVar6);
  uVar7 = 1;
LAB_106ed31e4:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106ed3220; end: 106ed322f;  */

void FUN_106ed3220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_connectSocket_address_stateIndex_1125afa70,
             *(undefined4 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x34));
  return;
}



/* Entry: 106ed3230; end: 106ed3387; -[GCDAsyncSocket connectWithAddressUN:error:] */

bool FUN_106ed3230(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  uVar3 = 1;
  _socket(1,1,0);
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 == -1) {
    if (param_4 != (long *)0x0) {
      ___error();
      func_0x00010bf992a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = param_1;
    }
  }
  else {
    uStack_44 = 1;
    _setsockopt(uVar3,0xffff,4,&uStack_44,4);
    uStack_48 = 1;
    _setsockopt(uVar3,0xffff,0x1022,&uStack_48,4);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ed3388;
    puStack_68 = &UNK_110844b80;
    _objc_retain(param_3);
    uStack_60 = param_3;
    lStack_58 = param_1;
    iStack_50 = iVar2;
    uStack_4c = uVar1;
    func_0x00010007380c(uVar3,&puStack_80);
    _objc_release(uStack_60);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return iVar2 != -1;
}



/* Entry: 106ed3388; end: 106ed34b3;  */

void FUN_106ed3388(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  iVar1 = *(int *)(param_1 + 0x30);
  _connect(iVar1,puVar2,*puVar2);
  if (iVar1 == 0) {
    lStack_40 = *(long *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106ed34b4;
    puStack_48 = &UNK_110868698;
    uStack_38 = *(undefined4 *)(param_1 + 0x34);
    func_0x00010007380c(*(undefined8 *)(lStack_40 + 0x58),&puStack_60);
  }
  else {
    _perror();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    ___error();
    func_0x00010bf992a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_78 = *(long *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(lStack_78 + 0x58);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x106ed34e8;
    puStack_80 = &UNK_1108a7688;
    uStack_68 = *(undefined4 *)(param_1 + 0x34);
    uStack_70 = uVar3;
    _objc_retain();
    func_0x00010007380c(uVar4,&puStack_98);
    _objc_release(uStack_70);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 106ed34b4; end: 106ed351b;  */

void FUN_106ed34b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf74240(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed351c; end: 106ed382b; -[GCDAsyncSocket didConnect:] */

void FUN_106ed351c(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined2 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  if (param_3 != *(int *)(param_1 + 0x38)) {
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  func_0x00010bf944c0();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106ed382c;
  puStack_80 = &UNK_110842e18;
  ppuVar4 = &puStack_98;
  lStack_78 = param_1;
  _objc_retainBlock();
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x106ed38b0;
  puStack_b0 = &UNK_110868698;
  ppuVar5 = &puStack_c8;
  lStack_a8 = param_1;
  uStack_a0 = uVar1;
  _objc_retainBlock();
  lVar6 = param_1;
  func_0x00010bf48740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf489c0();
  lVar8 = param_1;
  func_0x00010bf48a80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar11 = *(long *)(param_1 + 0x18);
  if ((lVar11 == 0) || (lVar6 == 0)) {
LAB_106ed36ac:
    if (((lVar11 == 0) || (lVar8 == 0)) ||
       (uVar10 = uVar9, _objc_opt_respondsToSelector(uVar9,PTR_s_socket_didConnectToUrl__11266f2b0),
       (uVar10 & 1) == 0)) {
      (*(code *)ppuVar4[2])(ppuVar4);
      (*(code *)ppuVar5[2])(ppuVar5);
      goto LAB_106ed3758;
    }
    (*(code *)ppuVar4[2])(ppuVar4);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    puStack_150 = puVar2;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_106ed3a18;
    puStack_138 = &UNK_1108465d0;
    _objc_retain(uVar9);
    uStack_130 = uVar9;
    lStack_128 = param_1;
    _objc_retain(lVar8);
    lStack_120 = lVar8;
    _objc_retain(ppuVar5);
    ppuStack_118 = ppuVar5;
    func_0x00010007380c(uVar12,&puStack_150);
    _objc_release(ppuStack_118);
    _objc_release(lStack_120);
    uVar10 = uStack_130;
  }
  else {
    uVar10 = uVar9;
    _objc_opt_respondsToSelector(uVar9,PTR_s_socket_didConnectToHost_port__11266f2a8);
    if ((uVar10 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 0x18);
      goto LAB_106ed36ac;
    }
    (*(code *)ppuVar4[2])(ppuVar4);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    puStack_110 = puVar2;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_106ed3940;
    puStack_f8 = &UNK_1109831f8;
    _objc_retain(uVar9);
    uStack_f0 = uVar9;
    lStack_e8 = param_1;
    _objc_retain(lVar6);
    uStack_d0 = (undefined2)lVar7;
    lStack_e0 = lVar6;
    _objc_retain(ppuVar5);
    ppuStack_d8 = ppuVar5;
    func_0x00010007380c(uVar12,&puStack_110);
    _objc_release(ppuStack_d8);
    _objc_release(lStack_e0);
    uVar10 = uStack_f0;
  }
  _objc_release(uVar10);
LAB_106ed3758:
  iVar3 = *(int *)(param_1 + 0x20);
  if ((iVar3 == -1) && (iVar3 = *(int *)(param_1 + 0x24), iVar3 == -1)) {
    iVar3 = *(int *)(param_1 + 0x28);
  }
  _fcntl(iVar3,4);
  if (iVar3 == -1) {
    lVar7 = param_1;
    func_0x00010c0ede80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3df40(param_1);
    _objc_release(lVar7);
  }
  else {
    func_0x00010c229280(param_1);
    func_0x00010c0c3840(param_1);
    func_0x00010c0c3880(param_1);
  }
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 106ed382c; end: 106ed393f;  */

void FUN_106ed382c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf58240();
  uVar3 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e8b5b8;
  }
  else {
    func_0x00010c126660(uVar3,param_2,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    uVar3 = *(ulong *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e8b5d8;
  }
  uVar1 = uVar3;
  func_0x00010c0ede80(uVar3,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(uVar3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ed3940; end: 106ed39e3;  */

void FUN_106ed3940(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246200(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ed39e4;
  puStack_40 = &UNK_110849530;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010007380c(uVar3,&puStack_58);
  _objc_release(uStack_38);
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ed39e4; end: 106ed3a17;  */

void FUN_106ed39e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed3a18; end: 106ed3ab7;  */

void FUN_106ed3a18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246220(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ed3ab8;
  puStack_40 = &UNK_110849530;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010007380c(uVar3,&puStack_58);
  _objc_release(uStack_38);
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ed3ab8; end: 106ed3aeb;  */

void FUN_106ed3ab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed3aec; end: 106ed3b03; -[GCDAsyncSocket didNotConnect:error:] */

void FUN_106ed3aec(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 == *(int *)(param_1 + 0x38)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeWithError__1125ad178,param_4);
    return;
  }
  return;
}



/* Entry: 106ed3b04; end: 106ed3c07; -[GCDAsyncSocket startConnectTimeout:] */

void FUN_106ed3b04(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (0.0 <= param_1) {
    puVar1 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create
              (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_2 + 0x58));
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    *(undefined **)(param_2 + 0x78) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ed3c08;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    _dispatch_source_set_event_handler(uVar2,&puStack_70);
    uVar2 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    _dispatch_source_set_timer(*(undefined8 *)(param_2 + 0x78),uVar2,0xffffffffffffffff,0);
    _dispatch_resume(*(undefined8 *)(param_2 + 0x78));
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106ed3c08; end: 106ed3c4f;  */

void FUN_106ed3c08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf87360(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed3c50; end: 106ed3cb7; -[GCDAsyncSocket endConnectTimeout] */

void FUN_106ed3c50(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 106ed3cb8; end: 106ed3cfb; -[GCDAsyncSocket doConnectTimeout] */

void FUN_106ed3cb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf944c0();
  uVar1 = param_1;
  func_0x00010bf48380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ed3cfc; end: 106ed401f; -[GCDAsyncSocket closeWithError:] */

void FUN_106ed3cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf944c0(param_1);
  if (*(long *)(param_1 + 0xb0) != 0) {
    func_0x00010bf945a0(param_1);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010bf94600(param_1);
  }
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 200));
  if ((*(long *)(param_1 + 0xf8) != 0) || (*(long *)(param_1 + 0x100) != 0)) {
    func_0x00010c12e720(param_1);
    if (*(long *)(param_1 + 0xf8) != 0) {
      _CFReadStreamSetClient(*(long *)(param_1 + 0xf8),0,0,0);
      _CFReadStreamClose(*(undefined8 *)(param_1 + 0xf8));
      _CFRelease(*(undefined8 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      _CFWriteStreamSetClient(*(long *)(param_1 + 0x100),0,0,0);
      _CFWriteStreamClose(*(undefined8 *)(param_1 + 0x100));
      _CFRelease(*(undefined8 *)(param_1 + 0x100));
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
  }
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x110));
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    _SSLClose();
    _CFRelease(*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    if (*(long *)(param_1 + 0x68) != 0) goto LAB_106ed3e20;
    if (((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 0x80) == 0)) &&
       (*(long *)(param_1 + 0x88) == 0)) {
      if (*(int *)(param_1 + 0x20) != -1) {
        _close();
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x24) != -1) {
        _close();
        *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x28) != -1) {
        _close();
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0f5800(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bfad0c0();
        _unlink();
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = 0;
        _objc_release(uVar3);
      }
      goto LAB_106ed3e98;
    }
  }
  else {
    _dispatch_source_cancel();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x68) != 0) {
LAB_106ed3e20:
      _dispatch_source_cancel();
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
      _objc_release(uVar3);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    _dispatch_source_cancel();
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar3);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    _dispatch_source_cancel();
    func_0x00010c13d6a0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar3);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    _dispatch_source_cancel();
    func_0x00010c13dbe0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar3);
  }
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
LAB_106ed3e98:
  uVar2 = *(uint *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if ((uVar2 & 1) != 0) {
    uVar4 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    if ((uVar2 & 0x10000) != 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = uVar4,
       _objc_opt_respondsToSelector(uVar4,PTR_s_socketDidDisconnect_withError__11266f300),
       (uVar5 & 1) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106ed4020;
      puStack_50 = &UNK_110848ba8;
      _objc_retain(uVar4);
      uStack_48 = uVar4;
      _objc_retain(lVar1);
      lStack_40 = lVar1;
      _objc_retain(param_3);
      uStack_38 = param_3;
      func_0x00010007380c(uVar3,&puStack_68);
      _objc_release(uStack_38);
      _objc_release(lStack_40);
      _objc_release(uStack_48);
    }
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ed4020; end: 106ed4053;  */

void FUN_106ed4020(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246360(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed4054; end: 106ed411f; -[GCDAsyncSocket disconnect] */

void FUN_106ed4054(long param_1)

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
  uStack_38 = 0x106ed40e4;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  lStack_28 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106ed4120; end: 106ed4177; -[GCDAsyncSocket disconnectAfterReading] */

void FUN_106ed4120(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ed4178;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),&puStack_38);
  return;
}



/* Entry: 106ed4178; end: 106ed41bf;  */

void FUN_106ed4178(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  if ((uVar1 & 1) != 0) {
    *(uint *)(*(long *)(param_1 + 0x20) + 8) = uVar1 | 0x24;
    func_0x00010c0c37e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 106ed41c0; end: 106ed4217; -[GCDAsyncSocket disconnectAfterWriting] */

void FUN_106ed41c0(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ed4218;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),&puStack_38);
  return;
}



/* Entry: 106ed4218; end: 106ed425f;  */

void FUN_106ed4218(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  if ((uVar1 & 1) != 0) {
    *(uint *)(*(long *)(param_1 + 0x20) + 8) = uVar1 | 0x44;
    func_0x00010c0c37e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 106ed4260; end: 106ed42b7; -[GCDAsyncSocket disconnectAfterReadingAndWriting] */

void FUN_106ed4260(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ed42b8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),&puStack_38);
  return;
}



/* Entry: 106ed42b8; end: 106ed42ff;  */

void FUN_106ed42b8(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  if ((uVar1 & 1) != 0) {
    *(uint *)(*(long *)(param_1 + 0x20) + 8) = uVar1 | 100;
    func_0x00010c0c37e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 106ed4300; end: 106ed436f; -[GCDAsyncSocket maybeClose] */

void FUN_106ed4300(long param_1)

{
  long lVar1;
  
  if ((*(uint *)(param_1 + 8) >> 5 & 1) == 0) {
    if ((*(uint *)(param_1 + 8) >> 6 & 1) == 0) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0xa0);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 8) >> 6 & 1) == 0) goto LAB_106ed435c;
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (*(long *)(param_1 + 0xb8) != 0)) {
    return;
  }
LAB_106ed435c:
                    /* WARNING: Could not recover jumptable at 0x00010bf3df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeWithError__1125ad178,0);
  return;
}



/* Entry: 106ed4370; end: 106ed43df; -[GCDAsyncSocket badConfigError:] */

void FUN_106ed4370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8b0d8,1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ed43e0; end: 106ed444f; -[GCDAsyncSocket badParamError:] */

void FUN_106ed43e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8b0d8,2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ed4450; end: 106ed4503; +[GCDAsyncSocket gaiError:] */

void FUN_106ed4450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ed4504; end: 106ed45e7; -[GCDAsyncSocket errorWithErrno:reason:] */

void FUN_106ed4504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  uVar1 = param_3;
  _strerror(param_3);
  func_0x00010c25da80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      *(undefined8 *)PTR__NSPOSIXErrorDomain_110345598,(long)(int)param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ed45e8; end: 106ed46a7; -[GCDAsyncSocket errnoError] */

void FUN_106ed45e8(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ___error();
  uVar1 = (ulong)*param_1;
  _strerror(uVar1);
  func_0x00010c25da80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  piVar3 = (int *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar6 = *(undefined8 *)PTR__NSPOSIXErrorDomain_110345598;
  piVar4 = piVar3;
  ___error();
  func_0x00010bf99240(puVar5,param_2,uVar6,(long)*piVar4,piVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(piVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106ed46a8; end: 106ed4723; -[GCDAsyncSocket sslError:] */

void FUN_106ed46a8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                      &PTR____CFConstantStringClassReference_110e8b638,
                      *(undefined8 *)PTR__NSLocalizedRecoverySuggestionErrorKey_110345580);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8b658,(long)param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ed4724; end: 106ed47ef; -[GCDAsyncSocket connectTimeoutError] */

void FUN_106ed4724(undefined8 param_1,undefined8 param_2)

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
                      &PTR____CFConstantStringClassReference_110e8b0d8,3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ed47f0; end: 106ed48bb; -[GCDAsyncSocket readMaxedOutError] */

void FUN_106ed47f0(undefined8 param_1,undefined8 param_2)

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
                      &PTR____CFConstantStringClassReference_110e8b0d8,6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ed48bc; end: 106ed4987; -[GCDAsyncSocket readTimeoutError] */

void FUN_106ed48bc(undefined8 param_1,undefined8 param_2)

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
                      &PTR____CFConstantStringClassReference_110e8b0d8,4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ed4988; end: 106ed4a53; -[GCDAsyncSocket writeTimeoutError] */

void FUN_106ed4988(undefined8 param_1,undefined8 param_2)

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
                      &PTR____CFConstantStringClassReference_110e8b0d8,5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ed4a54; end: 106ed4b1f; -[GCDAsyncSocket connectionClosedError] */

void FUN_106ed4a54(undefined8 param_1,undefined8 param_2)

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
                      &PTR____CFConstantStringClassReference_110e8b0d8,7,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ed4b20; end: 106ed4b8f; -[GCDAsyncSocket otherError:] */

void FUN_106ed4b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e8b0d8,8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ed4b90; end: 106ed4c67; -[GCDAsyncSocket isDisconnected] */

undefined1 FUN_106ed4b90(long param_1)

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
  pcStack_60 = FUN_106ed4c68;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106ed4c68; end: 106ed4c83;  */

void FUN_106ed4c68(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(byte *)(*(long *)(param_1 + 0x20) + 8) ^ 0xff) & 1;
  return;
}



/* Entry: 106ed4c84; end: 106ed4d5b; -[GCDAsyncSocket isConnected] */

undefined1 FUN_106ed4c84(long param_1)

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
  pcStack_60 = FUN_106ed4d5c;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar3 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106ed4d5c; end: 106ed4d73;  */

void FUN_106ed4d5c(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(byte *)(*(long *)(param_1 + 0x20) + 8) >> 1 & 1;
  return;
}



/* Entry: 106ed4d74; end: 106ed4ef7; -[GCDAsyncSocket connectedHost] */

void FUN_106ed4d74(long param_1)

{
  long lVar1;
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
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106ecf4f0;
    uStack_30 = 0x106ecf500;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106ed4e80;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_80);
    param_1 = puStack_48[5];
    _objc_retain(param_1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else if (*(int *)(param_1 + 0x20) == -1) {
    if (*(int *)(param_1 + 0x24) == -1) {
      param_1 = 0;
    }
    else {
      func_0x00010bf48780(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf48760(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ed4ef8; end: 106ed502b; -[GCDAsyncSocket connectedPort] */

ulong FUN_106ed4ef8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106ed4fdc;
    puStack_58 = &UNK_11084b9d0;
    uStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    uVar2 = (ulong)*(ushort *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    if (*(int *)(param_1 + 0x20) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf489f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_connectedPortFromSocket4__1125afc20);
      return param_1;
    }
    if (*(int *)(param_1 + 0x24) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf48a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_connectedPortFromSocket6__1125afc28);
      return param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106ed502c; end: 106ed5173; -[GCDAsyncSocket connectedUrl] */

void FUN_106ed502c(long param_1)

{
  long lVar1;
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
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106ecf4f0;
    uStack_30 = 0x106ecf500;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106ed5118;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_80);
    param_1 = puStack_48[5];
    _objc_retain(param_1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else if (*(int *)(param_1 + 0x28) == -1) {
    param_1 = 0;
  }
  else {
    func_0x00010bf48aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ed5174; end: 106ed52f7; -[GCDAsyncSocket localHost] */

void FUN_106ed5174(long param_1)

{
  long lVar1;
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
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106ecf4f0;
    uStack_30 = 0x106ecf500;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106ed5280;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_80);
    param_1 = puStack_48[5];
    _objc_retain(param_1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else if (*(int *)(param_1 + 0x20) == -1) {
    if (*(int *)(param_1 + 0x24) == -1) {
      param_1 = 0;
    }
    else {
      func_0x00010c09da60(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c09da40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ed52f8; end: 106ed542b; -[GCDAsyncSocket localPort] */

ulong FUN_106ed52f8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106ed53dc;
    puStack_58 = &UNK_11084b9d0;
    uStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    uVar2 = (ulong)*(ushort *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    if (*(int *)(param_1 + 0x20) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010c09ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_localPortFromSocket4__112605178);
      return param_1;
    }
    if (*(int *)(param_1 + 0x24) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010c09ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_localPortFromSocket6__112605180);
      return param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106ed542c; end: 106ed545b; -[GCDAsyncSocket connectedHost4] */

void FUN_106ed542c(long param_1)

{
  if (*(int *)(param_1 + 0x20) != -1) {
    func_0x00010bf48760();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed545c; end: 106ed548b; -[GCDAsyncSocket connectedHost6] */

void FUN_106ed545c(long param_1)

{
  if (*(int *)(param_1 + 0x24) != -1) {
    func_0x00010bf48780();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed548c; end: 106ed54a3; -[GCDAsyncSocket connectedPort4] */

long FUN_106ed548c(long param_1)

{
  if (*(int *)(param_1 + 0x20) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf489f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_connectedPortFromSocket4__1125afc20);
    return param_1;
  }
  return 0;
}



/* Entry: 106ed54a4; end: 106ed54bb; -[GCDAsyncSocket connectedPort6] */

long FUN_106ed54a4(long param_1)

{
  if (*(int *)(param_1 + 0x24) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf48a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_connectedPortFromSocket6__1125afc28);
    return param_1;
  }
  return 0;
}



/* Entry: 106ed54bc; end: 106ed54eb; -[GCDAsyncSocket localHost4] */

void FUN_106ed54bc(long param_1)

{
  if (*(int *)(param_1 + 0x20) != -1) {
    func_0x00010c09da40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed54ec; end: 106ed551b; -[GCDAsyncSocket localHost6] */

void FUN_106ed54ec(long param_1)

{
  if (*(int *)(param_1 + 0x24) != -1) {
    func_0x00010c09da60();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed551c; end: 106ed5533; -[GCDAsyncSocket localPort4] */

long FUN_106ed551c(long param_1)

{
  if (*(int *)(param_1 + 0x20) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010c09ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_localPortFromSocket4__112605178);
    return param_1;
  }
  return 0;
}



/* Entry: 106ed5534; end: 106ed554b; -[GCDAsyncSocket localPort6] */

long FUN_106ed5534(long param_1)

{
  if (*(int *)(param_1 + 0x24) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010c09ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_localPortFromSocket6__112605180);
    return param_1;
  }
  return 0;
}



/* Entry: 106ed554c; end: 106ed55db; -[GCDAsyncSocket connectedHostFromSocket4:] */

void FUN_106ed554c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_80;
  undefined1 auStack_7c [28];
  undefined4 uStack_3c;
  undefined4 auStack_38 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c = 0x10;
  puVar1 = &uStack_3c;
  _getpeername(param_3,auStack_38);
  if ((int)param_3 < 0) {
    param_1 = 0;
  }
  else {
    _objc_opt_class(param_1);
    puVar1 = auStack_38;
    func_0x00010bfe45a0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uStack_80 = 0x1c;
    _getpeername(puVar1,auStack_7c,&uStack_80);
    if (-1 < (int)puVar1) {
      _objc_opt_class(param_1);
      func_0x00010bfe45c0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed55dc; end: 106ed563f; -[GCDAsyncSocket connectedHostFromSocket6:] */

void FUN_106ed55dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_40;
  undefined1 auStack_3c [28];
  
  uStack_40 = 0x1c;
  _getpeername(param_3,auStack_3c,&uStack_40);
  if (-1 < (int)param_3) {
    _objc_opt_class(param_1);
    func_0x00010bfe45c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed5640; end: 106ed56c7; -[GCDAsyncSocket connectedPortFromSocket4:] */

void FUN_106ed5640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_80;
  undefined1 auStack_7c [28];
  undefined4 uStack_3c;
  undefined4 auStack_38 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c = 0x10;
  puVar1 = &uStack_3c;
  _getpeername(param_3,auStack_38);
  if ((int)param_3 < 0) {
    param_1 = 0;
  }
  else {
    _objc_opt_class(param_1);
    puVar1 = auStack_38;
    func_0x00010c1040a0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uStack_80 = 0x1c;
    _getpeername(puVar1,auStack_7c,&uStack_80);
    if (-1 < (int)puVar1) {
      _objc_opt_class(param_1);
      func_0x00010c1040c0();
    }
    return;
  }
  return;
}



/* Entry: 106ed56c8; end: 106ed5723; -[GCDAsyncSocket connectedPortFromSocket6:] */

void FUN_106ed56c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_40;
  undefined1 auStack_3c [28];
  
  uStack_40 = 0x1c;
  _getpeername(param_3,auStack_3c,&uStack_40);
  if (-1 < (int)param_3) {
    _objc_opt_class(param_1);
    func_0x00010c1040c0();
  }
  return;
}



/* Entry: 106ed5724; end: 106ed57b3; -[GCDAsyncSocket connectedUrlFromSocketUN:] */

void FUN_106ed5724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_120;
  undefined1 auStack_11c [28];
  undefined4 uStack_dc;
  undefined4 auStack_d8 [4];
  long lStack_c8;
  undefined4 uStack_98;
  undefined4 auStack_92 [26];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0x6a;
  puVar1 = &uStack_98;
  _getpeername(param_3,auStack_92);
  if ((int)param_3 < 0) {
    param_1 = 0;
  }
  else {
    _objc_opt_class();
    puVar1 = auStack_92;
    func_0x00010c28f5c0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_dc = 0x10;
    puVar2 = &uStack_dc;
    _getsockname(puVar1,auStack_d8);
    if ((int)puVar1 < 0) {
      param_1 = 0;
    }
    else {
      _objc_opt_class(param_1);
      puVar2 = auStack_d8;
      func_0x00010bfe45a0();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      uStack_120 = 0x1c;
      _getsockname(puVar2,auStack_11c,&uStack_120);
      if (-1 < (int)puVar2) {
        _objc_opt_class(param_1);
        func_0x00010bfe45c0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed57b4; end: 106ed5843; -[GCDAsyncSocket localHostFromSocket4:] */

void FUN_106ed57b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_80;
  undefined1 auStack_7c [28];
  undefined4 uStack_3c;
  undefined4 auStack_38 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c = 0x10;
  puVar1 = &uStack_3c;
  _getsockname(param_3,auStack_38);
  if ((int)param_3 < 0) {
    param_1 = 0;
  }
  else {
    _objc_opt_class(param_1);
    puVar1 = auStack_38;
    func_0x00010bfe45a0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uStack_80 = 0x1c;
    _getsockname(puVar1,auStack_7c,&uStack_80);
    if (-1 < (int)puVar1) {
      _objc_opt_class(param_1);
      func_0x00010bfe45c0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed5844; end: 106ed58a7; -[GCDAsyncSocket localHostFromSocket6:] */

void FUN_106ed5844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_40;
  undefined1 auStack_3c [28];
  
  uStack_40 = 0x1c;
  _getsockname(param_3,auStack_3c,&uStack_40);
  if (-1 < (int)param_3) {
    _objc_opt_class(param_1);
    func_0x00010bfe45c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ed58a8; end: 106ed592f; -[GCDAsyncSocket localPortFromSocket4:] */

void FUN_106ed58a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_80;
  undefined1 auStack_7c [28];
  undefined4 uStack_3c;
  undefined4 auStack_38 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c = 0x10;
  puVar1 = &uStack_3c;
  _getsockname(param_3,auStack_38);
  if ((int)param_3 < 0) {
    param_1 = 0;
  }
  else {
    _objc_opt_class(param_1);
    puVar1 = auStack_38;
    func_0x00010c1040a0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uStack_80 = 0x1c;
    _getsockname(puVar1,auStack_7c,&uStack_80);
    if (-1 < (int)puVar1) {
      _objc_opt_class(param_1);
      func_0x00010c1040c0();
    }
    return;
  }
  return;
}



/* Entry: 106ed5930; end: 106ed598b; -[GCDAsyncSocket localPortFromSocket6:] */

void FUN_106ed5930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_40;
  undefined1 auStack_3c [28];
  
  uStack_40 = 0x1c;
  _getsockname(param_3,auStack_3c,&uStack_40);
  if (-1 < (int)param_3) {
    _objc_opt_class(param_1);
    func_0x00010c1040c0();
  }
  return;
}



/* Entry: 106ed598c; end: 106ed5a87; -[GCDAsyncSocket connectedAddress] */

void FUN_106ed598c(long param_1)

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
  pcStack_38 = FUN_106ecf4f0;
  uStack_30 = 0x106ecf500;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ed5a88;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar1);
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



/* Entry: 106ed5a88; end: 106ed5b87;  */

void FUN_106ed5a88(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_48;
  undefined1 auStack_44 [28];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar5 + 0x20);
  if (iVar1 != -1) {
    uStack_48 = 0x10;
    _getpeername(iVar1,auStack_44,&uStack_48);
    if (iVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar2;
      _objc_release(uVar6);
    }
    lVar5 = *(long *)(param_1 + 0x20);
  }
  uVar3 = (ulong)*(uint *)(lVar5 + 0x24);
  if (*(uint *)(lVar5 + 0x24) != 0xffffffff) {
    uStack_48 = 0x1c;
    _getpeername(uVar3,auStack_44,&uStack_48);
    if ((int)uVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar3 = *(ulong *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar2;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d0;
  puStack_a8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_106ecf4f0;
  uStack_80 = 0x106ecf500;
  uStack_78 = 0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106ed5c84;
  puStack_b8 = &UNK_11084b9d0;
  uStack_b0 = uVar3;
  puStack_98 = puStack_a8;
  _objc_retainBlock();
  lVar5 = *(long *)(uVar3 + 0x128);
  _dispatch_get_specific();
  if (lVar5 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(uVar3 + 0x58),ppuVar4);
  }
  else {
    (**(code **)((long)ppuVar4 + 0x10))(ppuVar4);
  }
  uVar6 = puStack_98[5];
  _objc_retain(uVar6);
  _objc_release(ppuVar4);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106ed5b88; end: 106ed5c83; -[GCDAsyncSocket localAddress] */

void FUN_106ed5b88(long param_1)

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
  pcStack_38 = FUN_106ecf4f0;
  uStack_30 = 0x106ecf500;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ed5c84;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar1);
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



/* Entry: 106ed5c84; end: 106ed5d83;  */

ulong FUN_106ed5c84(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined4 uStack_48;
  undefined1 auStack_44 [28];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar5 + 0x20);
  if (iVar2 != -1) {
    uStack_48 = 0x10;
    _getsockname(iVar2,auStack_44,&uStack_48);
    if (iVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar3;
      _objc_release(uVar6);
    }
    lVar5 = *(long *)(param_1 + 0x20);
  }
  uVar4 = (ulong)*(uint *)(lVar5 + 0x24);
  if (*(uint *)(lVar5 + 0x24) != 0xffffffff) {
    uStack_48 = 0x1c;
    _getsockname(uVar4,auStack_44,&uStack_48);
    if ((int)uVar4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar4 = *(ulong *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar3;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar4;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(uVar4 + 0x128);
  _dispatch_get_specific();
  if (lVar5 == 0) {
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106ed5e30;
    puStack_a8 = &UNK_11084b9d0;
    uStack_a0 = uVar4;
    puStack_88 = puStack_98;
    func_0x00010006eaa4(*(undefined8 *)(uVar4 + 0x58),&puStack_c0);
    bVar1 = *(byte *)(puStack_88 + 3);
    __Block_object_dispose(&uStack_90,8);
  }
  else {
    bVar1 = *(int *)(uVar4 + 0x20) != -1;
  }
  return (ulong)(bVar1 & 1);
}



/* Entry: 106ed5d84; end: 106ed5e2f; -[GCDAsyncSocket isIPv4] */

byte FUN_106ed5d84(long param_1)

{
  byte bVar1;
  long lVar2;
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
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ed5e30;
    puStack_58 = &UNK_11084b9d0;
    lStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = *(int *)(param_1 + 0x20) != -1;
  }
  return bVar1 & 1;
}



/* Entry: 106ed5e30; end: 106ed5e4b;  */

void FUN_106ed5e30(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(int *)(*(long *)(param_1 + 0x20) + 0x20) != -1;
  return;
}



/* Entry: 106ed5e4c; end: 106ed5ef7; -[GCDAsyncSocket isIPv6] */

byte FUN_106ed5e4c(long param_1)

{
  byte bVar1;
  long lVar2;
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
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ed5ef8;
    puStack_58 = &UNK_11084b9d0;
    lStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = *(int *)(param_1 + 0x24) != -1;
  }
  return bVar1 & 1;
}



/* Entry: 106ed5ef8; end: 106ed5f13;  */

void FUN_106ed5ef8(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(int *)(*(long *)(param_1 + 0x20) + 0x24) != -1;
  return;
}



/* Entry: 106ed5f14; end: 106ed5fb7; -[GCDAsyncSocket isSecure] */

byte FUN_106ed5f14(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ed5fb8;
    puStack_58 = &UNK_11084b9d0;
    lStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    bVar2 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar2 = *(byte *)(param_1 + 9) >> 5 & 1;
  }
  return bVar2 & 1;
}



/* Entry: 106ed5fb8; end: 106ed5fcf;  */

void FUN_106ed5fb8(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (byte)(*(uint *)(*(long *)(param_1 + 0x20) + 8) >> 0xd) & 1;
  return;
}



/* Entry: 106ed5fd0; end: 106ed63c7; -[GCDAsyncSocket getInterfaceAddress4:address6:fromDescription:port:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_106ed5fd0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  ulong param_5,uint param_6)

{
  ushort uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  int iStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  int iStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  char acStack_162 [106];
  long lStack_f8;
  undefined8 *puStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar3 = param_5;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf529e0();
  if (uVar15 == 0) {
    uVar15 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010c08fa60();
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      _objc_retain(uVar4);
      uVar15 = uVar4;
    }
    _objc_release(uVar4);
  }
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if ((param_6 == 0) && (1 < uVar4)) {
    uVar4 = uVar3;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _strtol();
    _objc_release(uVar4);
    param_6 = (uint)uVar5;
    if (0xfffe < uVar5 - 1) {
      param_6 = 0;
    }
  }
  uVar1 = (ushort)(param_6 >> 8);
  if (uVar15 == 0) {
    uStack_c0._2_2_ = uVar1 & 0xff | (ushort)((param_6 & 0xff00ff) << 8);
    uStack_90._0_4_ = CONCAT22(uStack_c0._2_2_,0x210);
    uStack_90 = (undefined *)(ulong)(uint)uStack_90;
    puVar11 = (undefined8 *)PTR__in6addr_any_11034c490;
  }
  else {
    uVar4 = uVar15;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e8b7d8;
      uVar4 = uVar15;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = uVar15;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        iVar10 = (int)&plStack_c8;
        _getifaddrs();
        if (iVar10 == 0) {
          if (plStack_c8 == (long *)0x0) {
            plStack_c8 = (long *)0x0;
            puVar14 = (undefined *)0x0;
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar13 = (undefined *)0x0;
            puVar14 = (undefined *)0x0;
            uVar1 = uVar1 & 0xff | (ushort)((param_6 & 0xff00ff) << 8);
            plVar16 = plStack_c8;
            do {
              if ((puVar13 == (undefined *)0x0) &&
                 (puVar11 = (undefined8 *)plVar16[3], *(char *)((long)puVar11 + 1) == '\x02')) {
                uVar17 = *puVar11;
                uStack_b8 = (undefined4)puVar11[1];
                uStack_b4 = (undefined4)((ulong)puVar11[1] >> 0x20);
                uStack_c0._0_2_ = (undefined2)uVar17;
                uStack_c0._2_2_ = (ushort)((ulong)uVar17 >> 0x10);
                uStack_c0._4_4_ = (undefined4)((ulong)uVar17 >> 0x20);
                lVar6 = plVar16[1];
                _strcmp(lVar6,uVar4);
                if ((int)lVar6 == 0) {
LAB_106ed6354:
                  ppuVar8 = (undefined **)&uStack_c0;
                  puVar13 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
                  uStack_c0._2_2_ = uVar1;
                  func_0x00010bf64a00();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  ppuVar8 = (undefined **)&uStack_90;
                  lVar6 = 2;
                  _inet_ntop(2,(undefined2 *)((long)&uStack_c0 + 4),ppuVar8,0x10);
                  if (lVar6 != 0) {
                    puVar11 = &uStack_90;
                    _strcmp(puVar11,uVar4);
                    if ((int)puVar11 == 0) goto LAB_106ed6354;
                  }
                  puVar13 = (undefined *)0x0;
                }
              }
              else if (puVar14 == (undefined *)0x0) {
                puVar12 = (ulong *)plVar16[3];
                if (*(char *)((long)puVar12 + 1) == '\x1e') {
                  uStack_90 = (undefined *)*puVar12;
                  uStack_7c = *(undefined8 *)((long)puVar12 + 0x14);
                  uStack_80 = (undefined4)((ulong)*(undefined8 *)((long)puVar12 + 0xc) >> 0x20);
                  uStack_88 = (undefined4)puVar12[1];
                  uStack_84 = (undefined4)(puVar12[1] >> 0x20);
                  lVar6 = plVar16[1];
                  _strcmp(lVar6,uVar4);
                  if ((int)lVar6 == 0) {
LAB_106ed637c:
                    uStack_90._0_4_ = CONCAT22(uVar1,(undefined2)uStack_90);
                    ppuVar8 = (undefined **)&uStack_90;
                    puVar14 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
                    func_0x00010bf64a00();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_106ed63a0;
                  }
                  ppuVar8 = (undefined **)&uStack_c0;
                  lVar6 = 0x1e;
                  _inet_ntop(0x1e,&uStack_88,ppuVar8,0x2e);
                  if (lVar6 != 0) {
                    puVar7 = (undefined2 *)&uStack_c0;
                    _strcmp(puVar7,uVar4);
                    if ((int)puVar7 == 0) goto LAB_106ed637c;
                  }
                }
                puVar14 = (undefined *)0x0;
              }
LAB_106ed63a0:
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          _freeifaddrs(plStack_c8);
        }
        else {
          puVar14 = (undefined *)0x0;
          puVar13 = (undefined *)0x0;
        }
        goto LAB_106ed61d0;
      }
    }
    uStack_c0._2_2_ = uVar1 & 0xff | (ushort)((param_6 & 0xff00ff) << 8);
    uStack_90._0_4_ = CONCAT22(uStack_c0._2_2_,0x210);
    uStack_90 = (undefined *)CONCAT44(0x100007f,(uint)uStack_90);
    puVar11 = (undefined8 *)PTR__in6addr_loopback_11034c498;
  }
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_c0._4_4_ = 0;
  uStack_c0._0_2_ = 0x1e1c;
  uStack_b0 = (undefined4)puVar11[1];
  uStack_ac = (undefined4)((ulong)puVar11[1] >> 0x20);
  uStack_b8 = (undefined4)*puVar11;
  uStack_b4 = (undefined4)((ulong)*puVar11 >> 0x20);
  puVar13 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)&uStack_c0;
  puVar14 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
LAB_106ed61d0:
  if (param_3 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar13);
    *param_3 = puVar13;
  }
  if (param_4 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar14);
    *param_4 = puVar14;
  }
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106ed63c8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar8;
  puStack_f0 = param_4;
  uStack_e8 = param_5;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c0f5800();
  iVar10 = (int)ppuVar9;
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c08fa60();
  if (ppuVar9 == (undefined **)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    acStack_162[1] = 1;
    ppuVar9 = ppuVar8;
    _objc_retainAutorelease(ppuVar8);
    func_0x00010bfad0c0();
    ___strlcpy_chk(acStack_162 + 2,ppuVar9,0x68,0x68);
    cVar2 = (char)acStack_162 + '\x02';
    _strlen();
    acStack_162[0] = cVar2 + '\x02';
    iVar10 = (int)acStack_162;
    puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    puVar14 = PTR___dispatch_source_type_read_11034be30;
    _dispatch_source_create(PTR___dispatch_source_type_read_11034be30,(long)iVar10,0,ppuVar8[0xb]);
    puVar13 = ppuVar8[0x10];
    ppuVar8[0x10] = puVar14;
    _objc_release(puVar13);
    puVar14 = PTR___dispatch_source_type_write_11034be40;
    _dispatch_source_create(PTR___dispatch_source_type_write_11034be40,(long)iVar10,0,ppuVar8[0xb]);
    puVar13 = ppuVar8[0x11];
    ppuVar8[0x11] = puVar14;
    _objc_release(puVar13);
    _objc_initWeak(auStack_1d8,ppuVar8);
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    puVar13 = ppuVar8[0x10];
    puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f8 = 0xc2000000;
    pcStack_1f0 = FUN_106ed6688;
    puStack_1e8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_1e0,auStack_1d8);
    _dispatch_source_set_event_handler(puVar13,&puStack_200);
    puVar13 = ppuVar8[0x11];
    puStack_228 = puVar14;
    uStack_220 = 0xc2000000;
    uStack_218 = 0x106ed66ec;
    puStack_210 = &UNK_1108434b0;
    _objc_copyWeak(auStack_208,auStack_1d8);
    _dispatch_source_set_event_handler(puVar13,&puStack_228);
    uStack_248 = 0;
    uStack_238 = 0x2020000000;
    uStack_230 = 2;
    puStack_278 = puVar14;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_106ed6740;
    puStack_260 = &UNK_1108859b8;
    puStack_258 = &uStack_248;
    iStack_250 = iVar10;
    puStack_240 = &uStack_248;
    _dispatch_source_set_cancel_handler(ppuVar8[0x10],&puStack_278);
    puStack_2a8 = puVar14;
    uStack_2a0 = 0xc2000000;
    uStack_298 = 0x106ed6764;
    puStack_290 = &UNK_1108859b8;
    puStack_288 = &uStack_248;
    iStack_280 = iVar10;
    _dispatch_source_set_cancel_handler(ppuVar8[0x11],&puStack_2a8);
    ppuVar8[0x18] = (undefined *)0x0;
    *(uint *)(ppuVar8 + 1) = *(uint *)(ppuVar8 + 1) & 0xfffffeff;
    _dispatch_resume(ppuVar8[0x10]);
    *(uint *)(ppuVar8 + 1) = *(uint *)(ppuVar8 + 1) | 0x280;
    __Block_object_dispose(&uStack_248,8);
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(auStack_1e0);
    _objc_destroyWeak(auStack_1d8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106ed63c8; end: 106ed649f; -[GCDAsyncSocket getInterfaceAddressFromUrl:] */

void FUN_106ed63c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  int iStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  int iStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  char acStack_92 [106];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  func_0x00010c0f5800();
  iVar3 = (int)lVar2;
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    acStack_92[1] = 1;
    lVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bfad0c0();
    ___strlcpy_chk(acStack_92 + 2,lVar2,0x68,0x68);
    cVar1 = (char)acStack_92 + '\x02';
    _strlen();
    acStack_92[0] = cVar1 + '\x02';
    iVar3 = (int)acStack_92;
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR___dispatch_source_type_read_11034be30;
  _dispatch_source_create
            (PTR___dispatch_source_type_read_11034be30,(long)iVar3,0,*(undefined8 *)(param_3 + 0x58)
            );
  uVar4 = *(undefined8 *)(param_3 + 0x80);
  *(undefined **)(param_3 + 0x80) = puVar5;
  _objc_release(uVar4);
  puVar5 = PTR___dispatch_source_type_write_11034be40;
  _dispatch_source_create
            (PTR___dispatch_source_type_write_11034be40,(long)iVar3,0,
             *(undefined8 *)(param_3 + 0x58));
  uVar4 = *(undefined8 *)(param_3 + 0x88);
  *(undefined **)(param_3 + 0x88) = puVar5;
  _objc_release(uVar4);
  _objc_initWeak(auStack_108,param_3);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_3 + 0x80);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106ed6688;
  puStack_118 = &UNK_1108434b0;
  _objc_copyWeak(auStack_110,auStack_108);
  _dispatch_source_set_event_handler(uVar4,&puStack_130);
  uVar4 = *(undefined8 *)(param_3 + 0x88);
  puStack_158 = puVar5;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x106ed66ec;
  puStack_140 = &UNK_1108434b0;
  _objc_copyWeak(auStack_138,auStack_108);
  _dispatch_source_set_event_handler(uVar4,&puStack_158);
  uStack_178 = 0;
  uStack_168 = 0x2020000000;
  uStack_160 = 2;
  puStack_1a8 = puVar5;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_106ed6740;
  puStack_190 = &UNK_1108859b8;
  puStack_188 = &uStack_178;
  iStack_180 = iVar3;
  puStack_170 = &uStack_178;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_3 + 0x80),&puStack_1a8);
  puStack_1d8 = puVar5;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x106ed6764;
  puStack_1c0 = &UNK_1108859b8;
  puStack_1b8 = &uStack_178;
  iStack_1b0 = iVar3;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_3 + 0x88),&puStack_1d8);
  *(undefined8 *)(param_3 + 0xc0) = 0;
  *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) & 0xfffffeff;
  _dispatch_resume(*(undefined8 *)(param_3 + 0x80));
  *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x280;
  __Block_object_dispose(&uStack_178,8);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  return;
}



/* Entry: 106ed64a0; end: 106ed6687; -[GCDAsyncSocket setupReadAndWriteSourcesForNewlyConnectedSocket:] */

void FUN_106ed64a0(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  int iStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  int iStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR___dispatch_source_type_read_11034be30;
  _dispatch_source_create
            (PTR___dispatch_source_type_read_11034be30,(long)param_3,0,
             *(undefined8 *)(param_1 + 0x58));
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR___dispatch_source_type_write_11034be40;
  _dispatch_source_create
            (PTR___dispatch_source_type_write_11034be40,(long)param_3,0,
             *(undefined8 *)(param_1 + 0x58));
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ed6688;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  _dispatch_source_set_event_handler(uVar2,&puStack_90);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106ed66ec;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,auStack_68);
  _dispatch_source_set_event_handler(uVar2,&puStack_b8);
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 2;
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106ed6740;
  puStack_f0 = &UNK_1108859b8;
  puStack_e8 = &uStack_d8;
  iStack_e0 = param_3;
  puStack_d0 = &uStack_d8;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_1 + 0x80),&puStack_108);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x106ed6764;
  puStack_120 = &UNK_1108859b8;
  puStack_118 = &uStack_d8;
  iStack_110 = param_3;
  _dispatch_source_set_cancel_handler(*(undefined8 *)(param_1 + 0x88),&puStack_138);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  _dispatch_resume(*(undefined8 *)(param_1 + 0x80));
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x280;
  __Block_object_dispose(&uStack_d8,8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106ed6688; end: 106ed673f;  */

void FUN_106ed6688(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    _dispatch_source_get_data();
    *(long *)(param_1 + 0xc0) = lVar2;
    if (lVar2 == 0) {
      func_0x00010bf874e0(param_1);
    }
    else {
      func_0x00010bf874c0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed6740; end: 106ed6787;  */

void FUN_106ed6740(long param_1)

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



/* Entry: 106ed6788; end: 106ed679f; -[GCDAsyncSocket usingCFStreamForTLS] */

bool FUN_106ed6788(long param_1)

{
  return ((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x42000) == 0;
}



/* Entry: 106ed67a0; end: 106ed67b7; -[GCDAsyncSocket usingSecureTransportForTLS] */

bool FUN_106ed67a0(long param_1)

{
  return ((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x42000) != 0;
}



/* Entry: 106ed67b8; end: 106ed67ef; -[GCDAsyncSocket suspendReadSource] */

void FUN_106ed67b8(long param_1)

{
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    _dispatch_suspend(*(undefined8 *)(param_1 + 0x80));
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
  }
  return;
}



/* Entry: 106ed67f0; end: 106ed6827; -[GCDAsyncSocket resumeReadSource] */

void FUN_106ed67f0(long param_1)

{
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    _dispatch_resume(*(undefined8 *)(param_1 + 0x80));
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  }
  return;
}



/* Entry: 106ed6828; end: 106ed685f; -[GCDAsyncSocket suspendWriteSource] */

void FUN_106ed6828(long param_1)

{
  if ((*(byte *)(param_1 + 9) >> 1 & 1) == 0) {
    _dispatch_suspend(*(undefined8 *)(param_1 + 0x88));
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200;
  }
  return;
}



/* Entry: 106ed6860; end: 106ed6897; -[GCDAsyncSocket resumeWriteSource] */

void FUN_106ed6860(long param_1)

{
  if ((*(byte *)(param_1 + 9) >> 1 & 1) != 0) {
    _dispatch_resume(*(undefined8 *)(param_1 + 0x88));
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffdff;
  }
  return;
}



/* Entry: 106ed6898; end: 106ed68ab; -[GCDAsyncSocket readDataWithTimeout:tag:] */

void FUN_106ed6898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_readDataWithTimeout_buffer_buffe_112625f20,0,0,0,param_3);
  return;
}



/* Entry: 106ed68ac; end: 106ed68b7; -[GCDAsyncSocket readDataWithTimeout:buffer:bufferOffset:tag:] */

void FUN_106ed68ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_readDataWithTimeout_buffer_buffe_112625f20,param_3,param_4,0,param_5);
  return;
}



/* Entry: 106ed68b8; end: 106ed69ab; -[GCDAsyncSocket readDataWithTimeout:buffer:bufferOffset:maxLength:tag:] */

void FUN_106ed68b8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c08fa60();
  if (param_5 <= uVar1) {
    puVar2 = PTR_PTR_1126d31e0;
    _objc_alloc();
    func_0x00010c008540(param_1);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ed69ac;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_2;
    puStack_58 = puVar2;
    _objc_retain();
    func_0x00010007380c(uVar3,&puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106ed69ac; end: 106ed69ff;  */

void FUN_106ed69ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if ((*(uint *)(*(long *)(param_1 + 0x20) + 8) & 5) == 1) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010c0c3840(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed6a00; end: 106ed6a0f; -[GCDAsyncSocket readDataToLength:withTimeout:tag:] */

void FUN_106ed6a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1213b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_readDataToLength_withTimeout_buf_112625f08,param_3,0,0,param_4);
  return;
}


