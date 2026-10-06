/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107054628; end: 107054637; -[SCMessageChatViewModel shouldShowSenderHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107054628(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763460);
}



/* Entry: 107054638; end: 107054647; -[SCMessageChatViewModel shouldShowFoldIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107054638(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276346c);
}



/* Entry: 107054648; end: 10705468b; -[SCMessageChatViewModel foldIndicatorHeight] */

undefined8 FUN_107054648(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c233840();
  uVar2 = 0;
  if (iVar1 != 0) {
    func_0x00010c12f740(0);
    uVar2 = 0x4046800000000000;
    if (param_1 == 0) {
      uVar2 = 0x4030000000000000;
    }
  }
  return uVar2;
}



/* Entry: 10705468c; end: 1070546db; -[SCMessageChatViewModel shouldShowSenderLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10705468c(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010c12f740();
  if (((int)lVar1 == 0) || (*(char *)(param_1 + _DAT_112763508) == '\x01')) {
    bVar2 = *(byte *)(param_1 + _DAT_112763464);
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 1070546dc; end: 1070546eb; -[SCMessageChatViewModel shouldShowTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070546dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763468);
}



/* Entry: 1070546ec; end: 1070546fb; -[SCMessageChatViewModel shouldDisplayBelowFoldInChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070546ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634c0);
}



/* Entry: 1070546fc; end: 10705470b; -[SCMessageChatViewModel isUnseenMessageInChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070546fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634c4);
}



/* Entry: 10705470c; end: 10705471b; -[SCMessageChatViewModel intervalFromPrevious] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705470c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763474);
}



/* Entry: 10705471c; end: 107054d73; -[SCMessageChatViewModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10705471c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  long lStack_60;
  undefined *puStack_58;
  
  iVar2 = (int)&lStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f8648;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_isEqual__1125fa0c8,param_5);
  if (iVar2 != 0) {
    _objc_opt_class(param_3);
    lVar3 = param_5;
    func_0x00010c077980();
    if ((int)lVar3 != 0) {
      _objc_retain(param_5);
      lVar6 = *(long *)(param_3 + _DAT_112763448);
      lVar3 = param_5;
      func_0x00010c0cb2a0();
      if (lVar6 == lVar3) {
        lVar6 = *(long *)(param_3 + _DAT_1127634d0);
        lVar3 = param_5;
        func_0x00010c0c5580();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar6);
        _objc_retain(lVar3);
        if (lVar6 != lVar3) {
          if (lVar3 == 0) {
            _objc_release(lVar6);
          }
          else {
            lVar4 = lVar6;
            func_0x00010c071ae0();
            _objc_release(lVar3);
            _objc_release(lVar6);
            _objc_release(lVar3);
            if ((int)lVar4 != 0) goto LAB_107054834;
          }
          goto LAB_107054d40;
        }
        _objc_release(lVar3);
        _objc_release(lVar6);
        _objc_release(lVar3);
LAB_107054834:
        lVar6 = *(long *)(param_3 + _DAT_1127634d4);
        lVar3 = param_5;
        func_0x00010c0cb720();
        if ((((lVar6 != lVar3) ||
             (bVar1 = *(byte *)(param_3 + _DAT_11276344c), lVar3 = param_5, func_0x00010c0728e0(),
             (uint)bVar1 != (uint)lVar3)) ||
            (bVar1 = *(byte *)(param_3 + _DAT_112763450), lVar3 = param_5, func_0x00010c07d880(),
            (uint)bVar1 != (uint)lVar3)) ||
           ((bVar1 = *(byte *)(param_3 + _DAT_1127634a4), lVar3 = param_5, func_0x00010c076ee0(),
            (uint)bVar1 != (uint)lVar3 ||
            (bVar1 = *(byte *)(param_3 + _DAT_1127634f8), lVar3 = param_5, func_0x00010bf2c580(),
            (uint)bVar1 != (uint)lVar3)))) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_112763494);
        lVar3 = param_5;
        func_0x00010c0cb5a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_11276349c);
        lVar3 = param_5;
        func_0x00010bf50280(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_112763454);
        lVar3 = param_5;
        func_0x00010c2709c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634a8);
        lVar3 = param_5;
        func_0x00010c15df40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634e4);
        lVar3 = param_5;
        func_0x00010c121240(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634ac);
        lVar3 = param_5;
        func_0x00010c15dbc0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634b0);
        lVar3 = param_5;
        func_0x00010c122b60(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_11276348c);
        lVar3 = param_5;
        func_0x00010c15db40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_112763490);
        lVar3 = param_5;
        func_0x00010c15dea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634cc);
        lVar3 = param_5;
        func_0x00010bfce400(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((((int)uVar7 == 0) ||
            (dVar9 = *(double *)(param_3 + _DAT_11276343c), func_0x00010c0f6600(param_5),
            dVar9 != param_1)) ||
           ((bVar1 = *(byte *)(param_3 + _DAT_11276345c), lVar3 = param_5, func_0x00010bfd6220(),
            (uint)bVar1 != (uint)lVar3 ||
            (((bVar1 = *(byte *)(param_3 + _DAT_112763460), lVar3 = param_5, func_0x00010bfdbdc0(),
              (uint)bVar1 != (uint)lVar3 ||
              (bVar1 = *(byte *)(param_3 + _DAT_112763468), lVar3 = param_5, func_0x00010bfdd620(),
              (uint)bVar1 != (uint)lVar3)) ||
             (bVar1 = *(byte *)(param_3 + _DAT_1127634c0), lVar3 = param_5, func_0x00010bf85340(),
             (uint)bVar1 != (uint)lVar3)))))) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_112763514);
        lVar3 = param_5;
        func_0x00010c1209c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_11276351c);
        lVar3 = param_5;
        func_0x00010c15dd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634e8);
        lVar3 = param_5;
        func_0x00010c11edc0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634ec);
        lVar3 = param_5;
        func_0x00010bf5d020(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634f0);
        lVar3 = param_5;
        func_0x00010bf19480(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        uVar7 = *(undefined8 *)(param_3 + _DAT_1127634f4);
        lVar3 = param_5;
        func_0x00010c1050e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar7,lVar3);
        _objc_release(lVar3);
        if ((int)uVar7 == 0) goto LAB_107054d40;
        func_0x00010c105120(param_3);
        dVar9 = param_1;
        dVar8 = param_2;
        func_0x00010c105120(param_5);
        bVar5 = param_2 == dVar8 && param_1 == dVar9;
      }
      else {
LAB_107054d40:
        bVar5 = false;
      }
      _objc_release(param_5);
      goto LAB_107054d4c;
    }
  }
  bVar5 = false;
LAB_107054d4c:
  _objc_release(param_5);
  return bVar5;
}



/* Entry: 107054d74; end: 107054d7b; -[SCMessageChatViewModel widthForSenderLine] */

undefined8 FUN_107054d74(void)

{
  return 0x4000000000000000;
}



/* Entry: 107054d7c; end: 107054e03; -[SCMessageChatViewModel isSentByUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107054d7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_1127634a8);
  lVar2 = *(long *)(param_1 + _DAT_112763458);
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  if (lVar1 == lVar2) {
    lVar3 = 1;
  }
  else if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c071ae0(lVar1,param_2,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 107054e04; end: 107054e5b; -[SCMessageChatViewModel sectionColor] */

void FUN_107054e04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d980();
  if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010c0728e0(), (int)uVar1 == 0)) {
    func_0x00010c15db40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfce0c0(PTR_PTR_1126cb4d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107054e5c; end: 107054e8b; -[SCMessageChatViewModel senderLineColorOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107054e5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763490);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107054e8c; end: 107054ec3; -[SCMessageChatViewModel payloadContentFitWidth] */

void FUN_107054e8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be70ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__payloadContentFitWidth_112579d98);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f65b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_payloadContentWidth_11261b388);
  return;
}



/* Entry: 107054ec4; end: 107054ec7; -[SCMessageChatViewModel messageContentFitWidth] */

void FUN_107054ec4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__payloadContentFitWidth_112579d98);
  return;
}



/* Entry: 107054ec8; end: 107054eff; -[SCMessageChatViewModel payloadContainerViewInsets] */

void FUN_107054ec8(void)

{
  func_0x00010c12f740();
  return;
}



/* Entry: 107054f00; end: 107054f8b; -[SCMessageChatViewModel payloadContainerViewMargins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107054f00(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  uVar2 = param_1;
  func_0x00010c2335e0();
  uVar3 = param_1;
  func_0x00010c234240();
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    uVar4 = 0x4020000000000000;
    if ((((uint)uVar3 | (uint)*(byte *)(param_1 + (long)_DAT_112763470)) & 1) == 0) {
      uVar4 = 0xbfe0000000000000;
    }
    uVar5 = 0;
    if ((int)uVar2 == 0) {
      uVar5 = uVar4;
    }
  }
  return uVar5;
}



/* Entry: 107054f8c; end: 107055033; -[SCMessageChatViewModel payloadViewInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107054f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = (long)_DAT_1127634c8;
  if (*(long *)(param_5 + lVar1) != 0) {
    func_0x00010c11eba0();
    uVar2 = *(undefined8 *)(param_5 + lVar1);
    uVar3 = param_1;
    uVar6 = param_2;
    func_0x00010bf1ea80(param_5);
    uVar4 = uVar3;
    func_0x00010c0f6480(param_5);
    uVar5 = uVar4;
    func_0x00010c0f6540(param_5);
    FUN_10706aa28(param_1,param_2,uVar3,uVar4,uVar5,uVar6,param_3,param_4,uVar2);
  }
  return;
}



/* Entry: 107055034; end: 1070550a7; -[SCMessageChatViewModel textForTimeLabel] */

void FUN_107055034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f200(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_107069e34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070550a8; end: 10705516b; -[SCMessageChatViewModel textForActionHeaderTimeLabel] */

void FUN_1070550a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_107069fa8(puVar2,uVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10705516c; end: 10705526f; -[SCMessageChatViewModel dateHeaderWidth] */

undefined8 FUN_10705516c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010c2335e0();
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  uVar5 = 0;
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c26bf40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cb510;
    func_0x00010bf65300(PTR_PTR_1126cb510);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cb510;
    func_0x00010bf652e0(PTR_PTR_1126cb510);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3ff0000000000000;
    func_0x00010bf0e340(0x3ff0000000000000,puVar4,param_2,uVar1,puVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    func_0x00010bf1ec40(param_1);
    uVar1 = uVar5;
    func_0x00010bf652a0(param_1);
    func_0x00010c23d600(uVar5,uVar1,PTR_PTR_1126af270,param_2,puVar4,1);
    _objc_release(puVar4);
  }
  return uVar5;
}



/* Entry: 107055270; end: 1070553b3; -[SCMessageChatViewModel textForDateHeaderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107055270(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112763520;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = param_1;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0812c0();
    if ((int)puVar4 == 0) {
      puVar4 = puVar3;
      func_0x00010c083de0();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar4 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb5960(puVar5,param_2,puVar3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar5;
      }
      else {
        func_0x000107080cfc();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000107080ce4();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c28eda0(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf51e00(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf51e00(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070553b4; end: 1070553b7; -[SCMessageChatViewModel identifier] */

void FUN_1070553b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cb5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_messageId_112610780);
  return;
}



/* Entry: 1070553b8; end: 10705545f; -[SCMessageChatViewModel calculateHeight] */

double FUN_1070553b8(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = param_4;
  func_0x00010bfe1300();
  dVar2 = 0.0;
  if ((uVar1 & 1) == 0) {
    func_0x00010bf1eac0(0,param_4);
    dVar4 = dVar2;
    func_0x00010c0f6560(param_4);
    dVar2 = dVar2 + dVar4;
    func_0x00010c0f6560(param_4);
    dVar2 = dVar2 + param_3;
    uVar1 = param_4;
    func_0x00010c0730e0();
    if (((uVar1 & 1) == 0) && (uVar1 = param_4, func_0x00010c0d7360(), (int)uVar1 != 0)) {
      func_0x00010c2746e0(param_4);
      dVar2 = dVar2 + dVar4;
    }
    uVar1 = param_4;
    func_0x00010c076200();
    dVar3 = dVar2 + 6.0;
    dVar4 = dVar3;
    if ((int)uVar1 == 0) {
      dVar4 = dVar2;
    }
    func_0x00010befcee0(dVar3,param_4);
    dVar4 = dVar4 + dVar3;
    func_0x00010c120ec0(param_4);
    dVar2 = dVar3 + dVar4;
  }
  return dVar2;
}



/* Entry: 107055460; end: 1070554a3; -[SCMessageChatViewModel textForHeaderStatusView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107055460(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c234240();
  if ((int)lVar1 != 0) {
    func_0x00010c15dcc0(*(undefined8 *)(param_1 + _DAT_11276351c));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070554a4; end: 1070554f3; -[SCMessageChatViewModel textForSenderHeaderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070554a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276351c);
  func_0x00010c15dcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070554f4; end: 107055537; -[SCMessageChatViewModel textForEditedHeaderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070554f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c234240();
  if ((int)lVar1 != 0) {
    func_0x00010bf8c5a0(*(undefined8 *)(param_1 + _DAT_11276351c));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107055538; end: 107055547; -[SCMessageChatViewModel senderIconResource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107055538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276351c),PTR_s_senderIcon_112635190);
  return;
}



/* Entry: 107055548; end: 107055557; -[SCMessageChatViewModel contextualHeaderViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107055548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276351c),PTR_s_contextualHeader_1125b1788);
  return;
}



/* Entry: 107055558; end: 107055567; -[SCMessageChatViewModel groupChatAddButtonViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107055558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfce770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276351c),PTR_s_groupChatAddButton_1125d1380);
  return;
}



/* Entry: 107055568; end: 1070555a3; -[SCMessageChatViewModel senderHeaderHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055568(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  func_0x00010c234240();
  uVar2 = 0;
  if ((int)lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c0877a0(0,*(undefined8 *)(param_3 + _DAT_11276351c));
  }
  return uVar2;
}



/* Entry: 1070555a4; end: 1070555db; -[SCMessageChatViewModel senderHeaderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070555a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c12f740();
  if ((int)lVar1 != 0) {
    func_0x00010c0877a0(0,*(undefined8 *)(param_1 + _DAT_11276351c));
  }
  return;
}



/* Entry: 1070555dc; end: 107055613; -[SCMessageChatViewModel senderHeaderTopMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070555dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c234240();
  if ((int)lVar1 != 0) {
    func_0x00010c0bafa0(0,*(undefined8 *)(param_1 + _DAT_11276351c));
  }
  return;
}



/* Entry: 107055614; end: 10705564f; -[SCMessageChatViewModel senderHeaderBottomMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055614(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_4;
  func_0x00010c234240();
  uVar2 = 0;
  if ((int)lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0bafa0(0,*(undefined8 *)(param_4 + _DAT_11276351c));
  }
  return uVar2;
}



/* Entry: 107055650; end: 10705568b; -[SCMessageChatViewModel senderHeaderLeadingMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055650(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  func_0x00010c234240();
  uVar2 = 0;
  if ((int)lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c0bafa0(0,*(undefined8 *)(param_3 + _DAT_11276351c));
  }
  return uVar2;
}



/* Entry: 10705568c; end: 1070556c7; -[SCMessageChatViewModel senderHeaderTrailingMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705568c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_d3;
  
  lVar1 = param_1;
  func_0x00010c234240();
  uVar2 = 0;
  if ((int)lVar1 != 0) {
    uVar2 = in_d3;
    func_0x00010c0bafa0(0,*(undefined8 *)(param_1 + _DAT_11276351c));
  }
  return uVar2;
}



/* Entry: 1070556c8; end: 10705571b; -[SCMessageChatViewModel senderHeaderLeadingInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070556c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  func_0x00010c234240();
  uVar2 = 0;
  if (((int)lVar1 != 0) && (lVar1 = param_3, func_0x00010c12f740(), (int)lVar1 != 0)) {
    func_0x00010c0bafa0(*(undefined8 *)(param_3 + _DAT_11276351c));
    uVar2 = param_2;
  }
  return uVar2;
}



/* Entry: 10705571c; end: 10705576f; -[SCMessageChatViewModel senderHeaderTrailingInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705571c(long param_1)

{
  long lVar1;
  undefined8 in_d3;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c234240();
  uVar2 = 0;
  if (((int)lVar1 != 0) && (lVar1 = param_1, func_0x00010c12f740(), (int)lVar1 != 0)) {
    func_0x00010c0bafa0(*(undefined8 *)(param_1 + _DAT_11276351c));
    uVar2 = in_d3;
  }
  return uVar2;
}



/* Entry: 107055770; end: 107055773; -[SCMessageChatViewModel headerLabelFont] */

void FUN_107055770(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107055774; end: 107055797; -[SCMessageChatViewModel headerLabelHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055774(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0877a0(*(undefined8 *)(param_3 + _DAT_11276351c));
  return param_2;
}



/* Entry: 107055798; end: 1070557cb; -[SCMessageChatViewModel isReactable] */

bool FUN_107055798(long param_1)

{
  func_0x00010c1209c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1070557cc; end: 10705580f; -[SCMessageChatViewModel reactionsHeight] */

undefined8 FUN_1070557cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1209c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c120ec0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107055810; end: 107055853; -[SCMessageChatViewModel reactions] */

void FUN_107055810(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107055854; end: 107055863; +[SCMessageChatViewModel grayChatColor] */

void FUN_107055854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xbf);
  return;
}



/* Entry: 107055864; end: 107055b7b; +[SCMessageChatViewModel timeLabelWidth] */

double FUN_107055864(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010c2a5080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf122e0(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf650e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar5);
    dVar13 = 43200.0;
    puVar2 = puVar6;
    func_0x00010bf64e40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c26f200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c26f200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    FUN_107069e14();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    _objc_opt_respondsToSelector(puVar5,PTR_s_sizeWithAttributes__11266cfc0);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010c14dce0(puVar5);
      dVar12 = dVar13;
      func_0x00010c14dce0(puVar7);
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d660(puVar5);
      dVar12 = dVar13;
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d660(puVar7);
      _objc_release(puVar9);
    }
    if (dVar12 <= dVar13) {
      dVar12 = dVar13;
    }
    dVar13 = 45.0;
    if (45.0 <= dVar12) {
      dVar13 = dVar12;
    }
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    param_1 = dVar13;
    func_0x00010c0df720(dVar13,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(param_2);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  else {
    func_0x00010bfb2c80(lVar3);
    dVar13 = (double)SUB84(param_1,0);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return dVar13;
  }
  ___stack_chk_fail();
  if (lRam00000001136c9fe8 != -1) {
    func_0x00010002a2fc(0x1136c9fe8,&PTR___NSConcreteGlobalBlock_110989778);
  }
  uVar1 = uRam00000001136c9ff0;
  _objc_retain(uRam00000001136c9ff0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return param_1;
}



/* Entry: 107055b7c; end: 107055bcf; +[SCMessageChatViewModel widthCache] */

void FUN_107055b7c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c9fe8 != -1) {
    func_0x00010002a2fc(0x1136c9fe8,&PTR___NSConcreteGlobalBlock_110989778);
  }
  uVar1 = uRam00000001136c9ff0;
  _objc_retain(uRam00000001136c9ff0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107055bd0; end: 107055bfb;  */

void FUN_107055bd0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001136c9ff0;
  puRam00000001136c9ff0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107055bfc; end: 107055c03; -[SCMessageChatViewModel shouldShowStatusMessageHeaderLabel] */

undefined8 FUN_107055bfc(void)

{
  return 0;
}



/* Entry: 107055c04; end: 107055c0b; -[SCMessageChatViewModel textForStatusMessageHeaderLabel] */

undefined8 FUN_107055c04(void)

{
  return 0;
}



/* Entry: 107055c0c; end: 107055ccf; -[SCMessageChatViewModel _payloadContentFitWidth] */

void FUN_107055c0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c234620();
  if ((int)uVar1 != 0) {
    _objc_opt_class(param_1);
    func_0x00010c26f460();
  }
  uVar1 = param_1;
  func_0x00010c234240();
  if ((int)uVar1 != 0) {
    func_0x00010c15dd80(param_1);
    func_0x00010c15dca0(param_1);
    func_0x00010c15dd20(param_1);
  }
  func_0x00010c11eba0(param_1);
  func_0x00010bf1ea80(param_1);
  func_0x00010c0f6740(param_1);
  func_0x00010c0f6740(param_1);
  func_0x00010c0f65a0(param_1);
  return;
}



/* Entry: 107055cd0; end: 107055d8f; -[SCMessageChatViewModel quotedContentSize] */

undefined1  [16] FUN_107055cd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_3;
  func_0x00010c11edc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ec80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    lVar1 = param_3;
    func_0x00010c11edc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11ec80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6780(param_3);
    func_0x00010bf4d660(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107055d90; end: 107055e47; -[SCMessageChatViewModel ctaAccessoryContentSize] */

undefined1  [16] FUN_107055d90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = param_3;
  func_0x00010bf5d020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf5d020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe1300();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010bf5d020(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x4069000000000000;
      func_0x00010bf4d660(0x4069000000000000);
      _objc_release(param_3);
      goto LAB_107055e34;
    }
  }
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
LAB_107055e34:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 107055e48; end: 107055ea3; -[SCMessageChatViewModel postSnapActionsSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107055e48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c1050e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf1ec40(param_1);
  }
  return;
}



/* Entry: 107055ea4; end: 107055ec3; -[SCMessageChatViewModel additionalWidthForWhitespaceTapToSave] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055ea4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + _DAT_112763448);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276347c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 1) {
    uVar4 = uVar2;
    func_0x00010bf80aa0();
    iVar1 = (int)uVar4;
    uVar4 = 0x7fefffffffffffff;
  }
  else {
    uVar4 = uVar2;
    func_0x00010bf80a80();
    iVar1 = (int)uVar4;
    uVar4 = 0x4046800000000000;
  }
  uVar5 = 0xffefffffffffffff;
  if (iVar1 == 0) {
    uVar5 = uVar4;
  }
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 107055ec4; end: 107055ed3; -[SCMessageChatViewModel payloadViewPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055ec4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634c8);
}



/* Entry: 107055ed4; end: 107055ee3; -[SCMessageChatViewModel recipientUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055ed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634d8);
}



/* Entry: 107055ee4; end: 107055ef3; -[SCMessageChatViewModel analyticsMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055ee4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763498);
}



/* Entry: 107055ef4; end: 107055f03; -[SCMessageChatViewModel conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055ef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276349c);
}



/* Entry: 107055f04; end: 107055f13; -[SCMessageChatViewModel isGroupConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107055f04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634a0);
}



/* Entry: 107055f14; end: 107055f23; -[SCMessageChatViewModel senderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055f14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634a8);
}



/* Entry: 107055f24; end: 107055f33; -[SCMessageChatViewModel reactableViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055f24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763514);
}



/* Entry: 107055f34; end: 107055f43; -[SCMessageChatViewModel message] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055f34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763444);
}



/* Entry: 107055f44; end: 107055f83; -[SCMessageChatViewModel setMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107055f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763444;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107055f84; end: 107055f93; -[SCMessageChatViewModel messageBodyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055f84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763448);
}



/* Entry: 107055f94; end: 107055fa3; -[SCMessageChatViewModel mediaList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055f94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634d0);
}



/* Entry: 107055fa4; end: 107055fb3; -[SCMessageChatViewModel messageMediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055fa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634d4);
}



/* Entry: 107055fb4; end: 107055fc3; -[SCMessageChatViewModel currentUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055fb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763458);
}



/* Entry: 107055fc4; end: 107055fd3; -[SCMessageChatViewModel snapchattersData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055fc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634b4);
}



/* Entry: 107055fd4; end: 107055fe3; -[SCMessageChatViewModel chatReplySenderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055fd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634fc);
}



/* Entry: 107055fe4; end: 107055ff3; -[SCMessageChatViewModel chatReplyMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107055fe4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763500);
}



/* Entry: 107055ff4; end: 107056003; -[SCMessageChatViewModel chatReplyIsSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107055ff4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763504);
}



/* Entry: 107056004; end: 107056013; -[SCMessageChatViewModel canBeSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056004(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634f8);
}



/* Entry: 107056014; end: 107056023; -[SCMessageChatViewModel isSavedByCurrentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056014(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276350c);
}



/* Entry: 107056024; end: 107056033; -[SCMessageChatViewModel isFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056024(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276344c);
}



/* Entry: 107056034; end: 107056043; -[SCMessageChatViewModel isSending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056034(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763450);
}



/* Entry: 107056044; end: 107056053; -[SCMessageChatViewModel isErasable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056044(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634dc);
}



/* Entry: 107056054; end: 107056063; -[SCMessageChatViewModel isStatusMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056054(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763470);
}



/* Entry: 107056064; end: 107056073; -[SCMessageChatViewModel circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056064(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763478);
}



/* Entry: 107056074; end: 107056083; -[SCMessageChatViewModel messagingExperimentService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276347c);
}



/* Entry: 107056084; end: 1070560c3; -[SCMessageChatViewModel setMessagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107056084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276347c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070560c4; end: 1070560d3; -[SCMessageChatViewModel chatMediaFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070560c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763484);
}



/* Entry: 1070560d4; end: 1070560e3; -[SCMessageChatViewModel contentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070560d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763480);
}



/* Entry: 1070560e4; end: 107056123; -[SCMessageChatViewModel setContentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070560e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763480;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107056124; end: 107056133; -[SCMessageChatViewModel snapchattersDataTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763488);
}



/* Entry: 107056134; end: 107056173; -[SCMessageChatViewModel setSnapchattersDataTracking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107056134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763488;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107056174; end: 107056183; -[SCMessageChatViewModel messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763494);
}



/* Entry: 107056184; end: 107056193; -[SCMessageChatViewModel isLockedConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056184(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634a4);
}



/* Entry: 107056194; end: 1070561a3; -[SCMessageChatViewModel conversationSubtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634bc);
}



/* Entry: 1070561a4; end: 1070561b3; -[SCMessageChatViewModel timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070561a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763454);
}



/* Entry: 1070561b4; end: 1070561c3; -[SCMessageChatViewModel orderKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070561b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763510);
}



/* Entry: 1070561c4; end: 1070561d3; -[SCMessageChatViewModel summarizedUserListsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070561c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634b8);
}



/* Entry: 1070561d4; end: 1070561e3; -[SCMessageChatViewModel readByParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070561d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634e4);
}



/* Entry: 1070561e4; end: 1070561f3; -[SCMessageChatViewModel senderDisplayname] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070561e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634ac);
}



/* Entry: 1070561f4; end: 107056203; -[SCMessageChatViewModel recipientDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070561f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634b0);
}



/* Entry: 107056204; end: 107056213; -[SCMessageChatViewModel senderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056204(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276348c);
}



/* Entry: 107056214; end: 10705621f; -[SCMessageChatViewModel setSenderLineColorOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107056214(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107056220; end: 10705622f; -[SCMessageChatViewModel group] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634cc);
}



/* Entry: 107056230; end: 10705623f; -[SCMessageChatViewModel messageHasReplyMedias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056230(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634e0);
}



/* Entry: 107056240; end: 10705624f; -[SCMessageChatViewModel payloadHorizontalMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276343c);
}



/* Entry: 107056250; end: 10705625f; -[SCMessageChatViewModel quotedRenderableViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056250(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634e8);
}


