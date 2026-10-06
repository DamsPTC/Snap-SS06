/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f4b3e4; end: 104f4b60f;  */

void FUN_104f4b3e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4b610; end: 104f4b74b; -[SCFriendmojiTableCellView updateEmojiDesc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4b610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127178b8;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    lVar1 = param_1;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5f40(0x4026000000000000,lVar1,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf8e3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f4b74c; end: 104f4baeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4b74c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127178b4);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127178a8);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc02c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113d60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4baec; end: 104f4bb1b; -[SCFriendmojiTableCellView getEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4baec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127178ac);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f4bb1c; end: 104f4bb33; -[SCFriendmojiTableCellView isPlusExclusive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104f4bb1c(long param_1)

{
  return *(long *)(param_1 + _DAT_1127178bc) != 0;
}



/* Entry: 104f4bb34; end: 104f4bc3f; -[SCFriendmojiTableCellView setIsPlusExclusive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4bb34(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_1127178bc;
  if ((param_3 & 1) != 0) {
    if (*(long *)(param_1 + lVar5) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar2 = puVar1;
      func_0x000104f4db4c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar1,param_2,puVar2);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar1;
      _objc_release(uVar4);
      _objc_release(puVar2);
      lVar3 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_104f4bc40;
      puStack_40 = &UNK_1108471b0;
      lStack_38 = param_1;
      func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    return;
  }
  func_0x00010c12c960();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104f4bc40; end: 104f4beff;  */

void FUN_104f4bc40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = "@";
  pcVar5 = pcVar8;
  FUN_104f4bf00("@");
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4010000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(pcVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbf80();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f4bf00("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = "d";
  pcVar5 = pcVar8;
  FUN_104f4bf00("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f4bf00("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4bf00; end: 104f4c287;  */

void FUN_104f4bf00(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *in_stack_00000000;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x40) && (param_1[1] == 0)) {
    _objc_retain(in_stack_00000000);
    puVar3 = in_stack_00000000;
  }
  else {
    pbVar2 = param_1;
    _strcmp(param_1,"{CGPoint=dd}");
    if ((((int)pbVar2 == 0) || (pbVar2 = param_1, _strcmp(param_1,"{CGSize=dd}"), (int)pbVar2 == 0))
       || (pbVar2 = param_1, _strcmp(param_1,"{UIEdgeInsets=dddd}"), (int)pbVar2 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
      if (bVar1 < 99) {
        if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_104f4c248;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_104f4c248;
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_104f4c248;
            }
          }
        }
        else if (bVar1 == 0x49) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104f4c248;
          }
        }
        else if (bVar1 == 0x51) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104f4c248;
          }
        }
        else {
          if (bVar1 != 0x53) goto LAB_104f4c248;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df8a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104f4c248;
          }
        }
      }
      else if (bVar1 < 0x69) {
        if (bVar1 == 99) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104f4c248;
          }
        }
        else if (bVar1 == 100) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104f4c248;
          }
        }
        else {
          if (bVar1 != 0x66) goto LAB_104f4c248;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740((float)(double)in_stack_00000000,
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104f4c248;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104f4c248;
        }
      }
      else if (bVar1 == 0x71) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104f4c248;
        }
      }
      else {
        if (bVar1 != 0x73) goto LAB_104f4c248;
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104f4c248;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
LAB_104f4c248:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f4c288; end: 104f4c297; -[SCFriendmojiTableCellView friendmojiSymbol] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4c288(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178ac);
}



/* Entry: 104f4c298; end: 104f4c2a7; -[SCFriendmojiTableCellView emoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4c298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178b0);
}



/* Entry: 104f4c2a8; end: 104f4c2e7; -[SCFriendmojiTableCellView setEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4c2e8; end: 104f4c2f7; -[SCFriendmojiTableCellView emojiTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4c2e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178b4);
}



/* Entry: 104f4c2f8; end: 104f4c337; -[SCFriendmojiTableCellView setEmojiTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4c338; end: 104f4c347; -[SCFriendmojiTableCellView emojiDesc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4c338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178b8);
}



/* Entry: 104f4c348; end: 104f4c387; -[SCFriendmojiTableCellView setEmojiDesc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4c388; end: 104f4c397; -[SCFriendmojiTableCellView bottomBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4c388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178a8);
}



/* Entry: 104f4c398; end: 104f4c3d7; -[SCFriendmojiTableCellView setBottomBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4c3d8; end: 104f4c457; -[SCFriendmojiTableCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c3d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127178a8,0);
  _objc_storeStrong(param_1 + _DAT_1127178b8,0);
  _objc_storeStrong(param_1 + _DAT_1127178b4,0);
  _objc_storeStrong(param_1 + _DAT_1127178b0,0);
  _objc_storeStrong(param_1 + _DAT_1127178ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127178bc,0);
  return;
}



/* Entry: 104f4c458; end: 104f4c543; -[SCFriendmojiTableViewController initWithFeatureManager:plusServices:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104f4c458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e52d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_1127178c0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127178c4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127178c8),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f4c544; end: 104f4c677; -[SCFriendmojiTableViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c544(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e52d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  func_0x00010bfa7e20(*(undefined8 *)(param_1 + _DAT_1127178c0));
  func_0x00010bfef740(param_1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0xc2000000;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  *(undefined8 *)(param_1 + _DAT_1127178cc) = uVar4;
  _objc_release(puVar3);
  return;
}



/* Entry: 104f4c678; end: 104f4c7e7;  */

void FUN_104f4c678(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4c7e8; end: 104f4c92f; -[SCFriendmojiTableViewController initTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c7e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_1127178d0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f4c930; end: 104f4c96b; -[SCFriendmojiTableViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c930(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + _DAT_1127178c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb99e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4c96c; end: 104f4c99f; -[SCFriendmojiTableViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4c96c(long param_1)

{
  param_1 = param_1 + _DAT_1127178c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb9a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4c9a0; end: 104f4c9af; -[SCFriendmojiTableViewController getTitle] */

void FUN_104f4c9a0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc0f8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dbc0f8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104f4c9b0; end: 104f4c9b7; -[SCFriendmojiTableViewController numberOfSectionsInTableView:] */

undefined8 FUN_104f4c9b0(void)

{
  return 1;
}



/* Entry: 104f4c9b8; end: 104f4ca53; -[SCFriendmojiTableViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_104f4c9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc118;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc118,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126e52d0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_class_1125ac0b8);
  func_0x00010bfe0780();
  _objc_release(param_4);
  _objc_release(ppuVar1);
  return param_1;
}



/* Entry: 104f4ca54; end: 104f4cacf; -[SCFriendmojiTableViewController tableView:viewForHeaderInSection:] */

void FUN_104f4ca54(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc118;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc118,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126e52d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_class_1125ac0b8);
  func_0x00010c29cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f4cad0; end: 104f4cb6b; -[SCFriendmojiTableViewController tableView:heightForFooterInSection:] */

undefined8
FUN_104f4cad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc138;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc138,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126e52d0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_class_1125ac0b8);
  func_0x00010bfe0780();
  _objc_release(param_4);
  _objc_release(ppuVar1);
  return param_1;
}



/* Entry: 104f4cb6c; end: 104f4cc7f; -[SCFriendmojiTableViewController tableView:viewForFooterInSection:] */

void FUN_104f4cb6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dbc138;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc138,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar3);
  func_0x00010c213040(puVar1);
  func_0x00010c21e900(puVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f4cc80; end: 104f4ce43; -[SCFriendmojiTableViewController resetTap:] */

void FUN_104f4cc80(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126af180;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc158;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc158,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c138bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x20),PTR_s_resetFriendmojis_11262bd18);
  return;
}



/* Entry: 104f4ce44; end: 104f4ce5b;  */

void FUN_104f4ce44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resetFriendmojis_11262bd18);
  return;
}



/* Entry: 104f4ce5c; end: 104f4ce93; -[SCFriendmojiTableViewController resetFriendmojis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4ce5c(long param_1)

{
  func_0x00010c139940(*(undefined8 *)(param_1 + _DAT_1127178c0));
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127178d0),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 104f4ce94; end: 104f4cedb; -[SCFriendmojiTableViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4ce94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127178c0);
  func_0x00010bfb9b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104f4cedc; end: 104f4d013; -[SCFriendmojiTableViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4cedc(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110dbc0d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126b29f0;
    _objc_alloc(PTR_PTR_1126b29f0);
    func_0x00010c040040();
  }
  lVar5 = (long)_DAT_1127178c0;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = param_4;
  func_0x00010c142240();
  if (lVar3 <= lVar2) {
    lVar2 = param_4;
    func_0x00010c142240(param_4);
    lVar3 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf8e600(uVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2857c0(param_3,param_2,lVar3,uVar4);
    _objc_release(uVar4);
    lVar2 = lVar3;
    func_0x00010c0720c0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f5ef98);
    func_0x00010c1b35e0(param_3,param_2,lVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104f4d014; end: 104f4d297; -[SCFriendmojiTableViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104f4d014(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5,undefined8 param_6,undefined **param_7,undefined *param_8)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_8;
  _objc_retain(param_8);
  lVar11 = (long)_DAT_1127178c0;
  lVar2 = *(long *)(param_5 + lVar11);
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010bf529e0();
  puVar3 = param_8;
  func_0x00010c142240();
  dVar14 = 0.0;
  if ((long)puVar3 <= lVar13) {
    func_0x00010c142240(param_8);
    lVar13 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010bf8e600();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = *(double *)(param_5 + _DAT_1127178cc) + -112.0;
    uVar9 = uVar4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ba0(dVar15,0x7fefffffffffffff,uVar9);
    dVar14 = param_4;
    _objc_release(puVar5);
    _objc_release(puVar3);
    uVar12 = uVar4;
    func_0x00010bf8e3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_7 = (undefined **)0x1;
    puVar5 = puVar6;
    func_0x00010bf20ba0(dVar15,0x7fefffffffffffff,uVar12);
    _objc_release(puVar6);
    _objc_release(puVar3);
    param_1 = param_4 + dVar14 + 13.0 + 5.0;
    dVar14 = param_1 + 14.0;
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(lVar13);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return dVar14;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b29f0;
  _objc_opt_class(PTR_PTR_1126b29f0);
  ppuVar7 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar3);
  ppuVar1 = param_7;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_7);
  if (ppuVar1 == (undefined **)0x0) goto LAB_104f4d4b8;
  ppuVar7 = param_7;
  func_0x00010bfb99c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == &PTR____CFConstantStringClassReference_110f5ef98) {
    lVar8 = *(long *)(param_8 + _DAT_1127178c4);
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010c0d4420();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c252440();
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(lVar13);
    _objc_release(lVar8);
    _objc_release(&PTR____CFConstantStringClassReference_110f5ef98);
    if (lVar11 != 1) goto LAB_104f4d404;
    func_0x00010bf6e880(*(undefined8 *)(param_8 + _DAT_1127178d0));
    puVar3 = param_8 + _DAT_1127178c8;
    _objc_loadWeakRetained(puVar3);
    func_0x00010bfb9a20();
  }
  else {
    _objc_release(ppuVar7);
LAB_104f4d404:
    lVar13 = (long)_DAT_1127178d4;
    _objc_retain(param_7);
    uVar9 = *(undefined8 *)(param_8 + lVar13);
    *(undefined ***)(param_8 + lVar13) = ppuVar1;
    _objc_release(uVar9);
    uVar12 = *(undefined8 *)(param_8 + _DAT_1127178c0);
    uVar9 = *(undefined8 *)(param_8 + lVar13);
    func_0x00010bfc50c0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158a80(uVar12);
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126b29f8;
    _objc_alloc(PTR_PTR_1126b29f8);
    func_0x00010c011b00();
    func_0x00010c189500();
    puVar6 = param_8;
    func_0x00010c0d66a0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(puVar6);
    func_0x00010bf6e880(*(undefined8 *)(param_8 + _DAT_1127178d0));
  }
  _objc_release(puVar3);
LAB_104f4d4b8:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return param_1;
}



/* Entry: 104f4d298; end: 104f4d4df; -[SCFriendmojiTableViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d298(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b29f0;
  _objc_opt_class(PTR_PTR_1126b29f0);
  ppuVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  ppuVar1 = param_3;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_3);
  if (ppuVar1 == (undefined **)0x0) goto LAB_104f4d4b8;
  ppuVar3 = param_3;
  func_0x00010bfb99c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == &PTR____CFConstantStringClassReference_110f5ef98) {
    lVar4 = *(long *)(param_1 + _DAT_1127178c4);
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010c0d4420();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c252440();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar10);
    _objc_release(lVar4);
    _objc_release(&PTR____CFConstantStringClassReference_110f5ef98);
    if (lVar7 != 1) goto LAB_104f4d404;
    func_0x00010bf6e880(*(undefined8 *)(param_1 + _DAT_1127178d0));
    puVar2 = (undefined *)(param_1 + _DAT_1127178c8);
    _objc_loadWeakRetained(puVar2);
    func_0x00010bfb9a20();
  }
  else {
    _objc_release(ppuVar3);
LAB_104f4d404:
    lVar10 = (long)_DAT_1127178d4;
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    *(undefined ***)(param_1 + lVar10) = ppuVar1;
    _objc_release(uVar8);
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127178c0);
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bfc50c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158a80(uVar9);
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126b29f8;
    _objc_alloc(PTR_PTR_1126b29f8);
    func_0x00010c011b00();
    func_0x00010c189500();
    lVar10 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(lVar10);
    func_0x00010bf6e880(*(undefined8 *)(param_1 + _DAT_1127178d0));
  }
  _objc_release(puVar2);
LAB_104f4d4b8:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f4d4e0; end: 104f4d56f; -[SCFriendmojiTableViewController updateEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d4e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127178d4;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010bfc50c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127178c0);
    func_0x00010bf8e600(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2857c0(*(undefined8 *)(param_1 + lVar3),param_2,lVar1,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104f4d570; end: 104f4d59b; -[SCFriendmojiTableViewController saveSetting] */

void FUN_104f4d570(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2116c0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c17a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCell__11263c2e0,0);
  return;
}



/* Entry: 104f4d59c; end: 104f4d5ab; -[SCFriendmojiTableViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4d59c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178d0);
}



/* Entry: 104f4d5ac; end: 104f4d5eb; -[SCFriendmojiTableViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4d5ec; end: 104f4d5fb; -[SCFriendmojiTableViewController screenWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4d5ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178cc);
}



/* Entry: 104f4d5fc; end: 104f4d60b; -[SCFriendmojiTableViewController setScreenWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d5fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127178cc) = param_1;
  return;
}



/* Entry: 104f4d60c; end: 104f4d61b; -[SCFriendmojiTableViewController cell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4d60c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178d4);
}



/* Entry: 104f4d61c; end: 104f4d65b; -[SCFriendmojiTableViewController setCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4d65c; end: 104f4d66b; -[SCFriendmojiTableViewController featureManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4d65c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178c0);
}



/* Entry: 104f4d66c; end: 104f4d6ab; -[SCFriendmojiTableViewController setFeatureManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4d6ac; end: 104f4d717; -[SCFriendmojiTableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d6ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127178c0,0);
  _objc_storeStrong(param_1 + _DAT_1127178d4,0);
  _objc_storeStrong(param_1 + _DAT_1127178d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127178c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127178c4,0);
  return;
}



/* Entry: 104f4d718; end: 104f4d82f; -[SCFriendmojiSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d718(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b2a00;
  _objc_alloc(PTR_PTR_1126b2a00);
  lVar2 = param_1 + _DAT_1127178d8;
  _objc_loadWeakRetained(lVar2);
  lVar5 = (long)_DAT_1127178dc;
  lVar3 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0161a0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b2a08;
  _objc_alloc(PTR_PTR_1126b2a08);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c011b40(puVar4);
  _objc_release(lVar5);
  lVar2 = param_1 + _DAT_1127178e0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_storeWeak(param_1 + _DAT_1127178e4,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f4d830; end: 104f4d8d7; -[SCFriendmojiSettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d830(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_1127178e4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_1127178e0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126e52d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f4d8d8; end: 104f4d927; -[SCFriendmojiSettingsEntryPoint friendmojiTableViewControllerDidTapDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d8d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127178e0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4d928; end: 104f4d973; -[SCFriendmojiSettingsEntryPoint friendmojiTableViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d928(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127178e0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb99a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4d974; end: 104f4da87; -[SCFriendmojiSettingsEntryPoint friendmojiTableViewControllerPresentPlusSubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4d974(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127178e8;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b1da8;
    _objc_alloc(PTR_PTR_1126b1da8);
    func_0x00010c04abe0();
    lVar1 = param_1 + _DAT_1127178ec;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bf23e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f4da88; end: 104f4dadf; -[SCFriendmojiSettingsEntryPoint plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4da88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178e8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f4dae0; end: 104f4dbc7; -[SCFriendmojiSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4dae0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127178e8,0);
  _objc_destroyWeak(param_1 + _DAT_1127178ec);
  _objc_destroyWeak(param_1 + _DAT_1127178dc);
  _objc_destroyWeak(param_1 + _DAT_1127178d8);
  _objc_destroyWeak(param_1 + _DAT_1127178e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127178e4);
  return;
}



/* Entry: 104f4dbc8; end: 104f4dd33; -[SCLeaveGroupAlertEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4dbc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_1127178f0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + _DAT_1127178f4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfc6120(lVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 104f4dd34; end: 104f4dd7b;  */

void FUN_104f4dd34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4dd7c; end: 104f4de7f; -[SCLeaveGroupAlertEntryPoint _handleLeaveGroupForGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4dd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127178f0;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    uVar3 = param_3;
    func_0x00010c06ecc0(param_3);
    lVar1 = param_1;
    func_0x00010be49e00(param_1,param_2,lVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f4de80; end: 104f4e13f; -[SCLeaveGroupAlertEntryPoint _leaveGroupAlertForGroupId:isCommunityGroup:] */

void FUN_104f4de80(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000104f4e698();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104f4e140;
  puStack_a8 = &UNK_110849410;
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_3);
  lStack_a0 = param_3;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = auStack_90;
  _objc_copyWeak(auStack_c8,puVar1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  if (param_4 == 0) {
    func_0x000104f4e6b0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104f4e668();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000104f4e680();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar3);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar1);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdfeee0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f4e140; end: 104f4e193;  */

void FUN_104f4e140(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfeee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4e194; end: 104f4e24f;  */

void FUN_104f4e194(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104f4e250; end: 104f4e283;  */

void FUN_104f4e250(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf71d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4e284; end: 104f4e3cb; -[SCLeaveGroupAlertEntryPoint _didPressLeaveGroup:dialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4e284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + _DAT_1127178f4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c08e240(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f4e3cc; end: 104f4e427;  */

void FUN_104f4e3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe660();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4e428; end: 104f4e5a7; -[SCLeaveGroupAlertEntryPoint _didLeaveGroup:errorMessage:dialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4e428(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
    if ((int)puVar2 != 0) {
      func_0x000104f4e6c8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      param_4 = puVar2;
    }
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_1127178f8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  else {
    puVar1 = (undefined *)(param_1 + _DAT_1127178f0);
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104f4e5a8;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar2;
    func_0x00010bf84b00(param_5,param_2,1,&puStack_68);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f4e5a8; end: 104f4e5af;  */

void FUN_104f4e5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didLeaveGroup_1125bb7b0);
  return;
}



/* Entry: 104f4e5b0; end: 104f4e623; -[SCLeaveGroupAlertEntryPoint dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4e5b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127178f0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08e220(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4e624; end: 104f4e667; -[SCLeaveGroupAlertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4e624(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127178f8);
  _objc_destroyWeak(param_1 + _DAT_1127178f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127178f0);
  return;
}



/* Entry: 104f4e668; end: 104f4e6df;  */

void FUN_104f4e668(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc1b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbc1b8,
                      &PTR____CFConstantStringClassReference_110dbc1d8,0);
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



/* Entry: 104f4e6e0; end: 104f4e7e3; -[SCFriendCreateGroupAction initWithContext:snapchatter:createChatSelectionScopeExposer:deepLinkHandler:] */

undefined1 *
FUN_104f4e6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e52e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0x13;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f4e7e4; end: 104f4e983; -[SCFriendCreateGroupAction actionSheetCell] */

void FUN_104f4e7e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_104f4eee4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b10a0;
  func_0x00010c0ec240(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar6 = puVar5;
  func_0x00010bf1d200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104f4e984; end: 104f4e9cb;  */

void FUN_104f4e984(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cbc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4e9cc; end: 104f4eacb; -[SCFriendCreateGroupAction _presentNewChatsScreenWithActionSheet:] */

void FUN_104f4e9cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 8),param_2,0x23);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2848;
  _objc_alloc(PTR_PTR_1126b2848);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0cfc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b27d8;
  func_0x00010c0d8980(PTR_PTR_1126b27d8);
  func_0x00010c056d20(puVar3,param_2,uVar1,puVar4,puVar2,param_1,3,2,0);
  _objc_release(puVar4);
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f4eacc; end: 104f4eb03; -[SCFriendCreateGroupAction createChatSelectionScopeWantsToDismiss:] */

void FUN_104f4eacc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f4eb04; end: 104f4eb4b; -[SCFriendCreateGroupAction createChatSelectionScopeDidDismiss:] */

void FUN_104f4eb04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f4eb4c; end: 104f4ec57; -[SCFriendCreateGroupAction createChatSelectionScope:wantsToDismissWithNewChat:] */

void FUN_104f4eb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f4ec58; end: 104f4ec8b;  */

void FUN_104f4ec58(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4ec8c; end: 104f4ecf7; -[SCFriendCreateGroupAction _navigateToChat:] */

void FUN_104f4ec8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3400(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f4ecf8; end: 104f4ecfb;  */

void FUN_104f4ecf8(void)

{
  return;
}



/* Entry: 104f4ecfc; end: 104f4ed03; -[SCFriendCreateGroupAction position] */

undefined8 FUN_104f4ecfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f4ed04; end: 104f4ed0b; -[SCFriendCreateGroupAction prominentActionButton] */

undefined8 FUN_104f4ed04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f4ed0c; end: 104f4ed5f; -[SCFriendCreateGroupAction .cxx_destruct] */

void FUN_104f4ed0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f4ed60; end: 104f4ee9b; -[SCMessagingFriendActionSheetCreateGroupPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4ed60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = (long)_DAT_112717914;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2a18;
  _objc_alloc(PTR_PTR_1126b2a18);
  lVar4 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar6 = lVar8;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112717918);
  param_1 = param_1 + _DAT_11271791c;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0043e0(puVar3,param_2,lVar5,lVar6,uVar9,lVar7);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4ee9c; end: 104f4eee3; -[SCMessagingFriendActionSheetCreateGroupPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4ee9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717918,0);
  _objc_destroyWeak(param_1 + _DAT_11271791c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717914);
  return;
}



/* Entry: 104f4eee4; end: 104f4eefb;  */

void FUN_104f4eee4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc278;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbc278,
                      &PTR____CFConstantStringClassReference_110dbc298,0);
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



/* Entry: 104f4eefc; end: 104f4f067; -[SCFriendChatSettingsAction initWithContext:position:withAccessibilityIdentifier:actions:title:actionName:webScopeExposer:messagingExperimentService:] */

undefined1 *
FUN_104f4eefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e52e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f4f068; end: 104f4f16b; -[SCFriendChatSettingsAction actionSheetCell] */

void FUN_104f4f068(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x00010c0d0f20(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  puVar2 = puVar1;
  func_0x00010bf1d200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c165e40(puVar2);
  func_0x00010c160fc0(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f4f16c; end: 104f4f1b3;  */

void FUN_104f4f16c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be271c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f4f1b4; end: 104f4f4cf; -[SCFriendChatSettingsAction _handleChatSettingsTappedWithActionSheet:] */

void FUN_104f4f1b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  func_0x00010c0a0440(*(undefined8 *)(param_3 + 8));
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b10a0;
  func_0x000104f62318();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dbc2f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc2f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar5);
  _objc_release(ppuVar6);
  puVar7 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010bff4f40();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bcbeb30();
  func_0x00010c23bba0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar7;
  func_0x00010bfe6ac0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  puVar9 = puVar7;
  func_0x00010bfe6ac0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c1739e0(0,0xc000000000000000,param_1,param_2,puVar7);
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bcbeb30();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x00010c08fa60(puVar8);
  }
  func_0x00010c066640(puVar8);
  func_0x00010c1a76a0(param_5);
  _objc_initWeak(auStack_78,param_3);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1d2600(param_5);
  func_0x00010c1312e0(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 104f4f4d0; end: 104f4f5a7;  */

void FUN_104f4f4d0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f4f5a8; end: 104f4f797; -[SCFriendChatSettingsAction _didTapHeaderActionLabel] */

void FUN_104f4f5a8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  func_0x00010bddf320();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc2d8;
  if (*(long *)(param_1 + 0x40) != 10) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbc2b8;
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2b9b80(puVar4,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar5 = puVar4;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104f4f798;
  puStack_60 = &UNK_110842308;
  puVar6 = puVar2;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar5,param_2,&puStack_78,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0cfc40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf22ba0(puVar5,param_2,puVar3,puVar4,uVar7,param_1,0,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 104f4f798; end: 104f4f7af;  */

void FUN_104f4f798(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 104f4f7b0; end: 104f4f7f7; -[SCFriendChatSettingsAction _cleanUpWebScope] */

void FUN_104f4f7b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f4f7f8; end: 104f4f7fb; -[SCFriendChatSettingsAction webBrowserDidDismiss:] */

void FUN_104f4f7f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpWebScope_112555668);
  return;
}



/* Entry: 104f4f7fc; end: 104f4f803; -[SCFriendChatSettingsAction position] */

undefined8 FUN_104f4f7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f4f804; end: 104f4f80b; -[SCFriendChatSettingsAction prominentActionButton] */

undefined8 FUN_104f4f804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f4f80c; end: 104f4f877; -[SCFriendChatSettingsAction .cxx_destruct] */

void FUN_104f4f80c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104f4f878; end: 104f4f9af; -[SCFriendClearConversationAction initWithFriendUserId:context:conversationServices:friendsFeedDataAccess:withAccessibilityIdentifier:] */

undefined1 *
FUN_104f4f878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e52f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    func_0x00010bf3afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0xc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f4f9b0; end: 104f4facb; -[SCFriendClearConversationAction actionSheetCell] */

void FUN_104f4f9b0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000104f62378();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c160fc0(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f4facc; end: 104f4fb13;  */

void FUN_104f4facc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be272c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


