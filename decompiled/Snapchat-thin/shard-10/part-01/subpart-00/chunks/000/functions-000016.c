/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079296d8; end: 1079296df; -[SCNSnapMapsSdkTimedTransitionOptions easing] */

undefined8 FUN_1079296d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079298c4; end: 10792993b; -[SCNSnapMapsSdkUserMetadataManager initWithCpp:] */

undefined1 * FUN_1079298c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8e60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_107929ca8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107926360(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107929ca8; end: 107929cf7;  */

void FUN_107929ca8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792a004; end: 10792a093;  */

long FUN_10792a004(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eba68;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010792a0e4();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10792a2f0; end: 10792a333; -[SCNSnapMapsSdkViewportLogger .cxx_construct] */

undefined8 * FUN_10792a2f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010792a420();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792a618; end: 10792a623;  */

long FUN_10792a618(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ebba0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10792a82c; end: 10792a88b; -[SCNMapSdkResourceRequesterCacheDeleteCallback onSuccess] */

void FUN_10792a82c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10792aafc; end: 10792abdf; -[SCNMapSdkResourceRequesterError initWithReason:message:retryAfter:] */

undefined1 *
FUN_10792aafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8e78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10792b36c; end: 10792b373; -[SCNMapSdkResourceRequesterResource kind] */

undefined8 FUN_10792b36c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10792b3ac; end: 10792b3b3; -[SCNMapSdkResourceRequesterResource priorExpires] */

undefined8 FUN_10792b3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10792b3ec; end: 10792b3f3; -[SCNMapSdkResourceRequesterResource requestHeaders] */

undefined8 FUN_10792b3ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10792b7e8; end: 10792b83f;  */

void FUN_10792b7e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10792bb38; end: 10792bbd3; -[SCNMapSdkResourceRequesterResourceRequesterCallback .cxx_construct] */

undefined8 * FUN_10792bb38(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010792bbd4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792c14c; end: 10792c153; -[SCNMapSdkResourceRequesterResponse fetchTime] */

undefined8 FUN_10792c14c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10792c18c; end: 10792c193; -[SCNMapSdkResourceRequesterResponse etag] */

undefined8 FUN_10792c18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10792c3b4; end: 10792c3bb; -[SCNMapSdkResourceRequesterTileData x] */

undefined4 FUN_10792c3b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10792c5d8; end: 10792c5db;  */

void FUN_10792c5d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ebd38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792c7b0; end: 10792c7cb;  */

void FUN_10792c7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10792cb40; end: 10792ccab; -[SCNBitmojiFetcherCallback onBitmojiImageFetched:] */

void FUN_10792cb40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  plVar3 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar2 = param_3;
    func_0x00010c067fc0();
    _objc_release(param_3);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)lVar2);
    uStack_60 = 0;
    _objc_release(param_3);
  }
  else {
    func_0x0001000fef20(&uStack_50,lVar1);
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 1;
    func_0x0001000ff1ac(&uStack_50);
  }
  _objc_release(lVar1);
  func_0x00010792ce8c();
  (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_70);
  func_0x00010792cd70(&uStack_70);
  func_0x00010792ce8c();
  return;
}



/* Entry: 10792ceac; end: 10792d2af;  */

/* WARNING: Removing unreachable block (ram,0x00010792d080) */
/* WARNING: Removing unreachable block (ram,0x00010792d040) */

void FUN_10792ceac(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulong *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [112];
  long lStack_1e8;
  long lStack_1e0;
  undefined1 auStack_160 [32];
  ulong auStack_140 [6];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 uStack_70;
  undefined8 auStack_60 [3];
  byte bStack_48;
  
  func_0x00010792d440(auStack_258);
  func_0x00010792d3b8(auStack_60,param_2);
  if ((bStack_48 & 1) == 0) {
    ___cxa_allocate_exception(0x20);
    func_0x00010792d560();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10792d204);
    (*pcVar10)();
  }
  puVar13 = auStack_60;
  func_0x00010792d3e0();
  uVar1 = puVar13[1];
  puVar2 = (undefined8 *)*puVar13;
  if (-1 < (char)*(byte *)((long)puVar13 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar13 + 0x17);
    puVar2 = puVar13;
  }
  auStack_140[0] = auStack_140[0] & 0xffffffffffffff00;
  uStack_70 = 0;
  func_0x00010b4db990(auStack_258,puVar2,uVar1,auStack_140);
  FUN_10792d620(auStack_140);
  func_0x00010792d540(auStack_60);
  func_0x00010b4dbc64(auStack_140,auStack_258);
  func_0x00010792d658();
  func_0x00010792d640();
  if (((param_2 & 1) != 0) && (lStack_1e0 - lStack_1e8 == 0x30)) {
    puVar14 = auStack_258;
    func_0x00010b4dbc70(auStack_140);
    func_0x00010792d658();
    if (((ulong)puVar14 & 1) == 0) {
      func_0x00010792d658();
      if (((ulong)puVar14 & 1) == 0) {
        func_0x00010792d658();
        uVar11 = (uint)puVar14;
        if (((ulong)puVar14 & 1) == 0) {
          func_0x00010792d658();
          uVar17 = uVar11 ^ 1;
          uVar16 = 3;
          if (uVar11 == 0) {
            uVar16 = 0;
          }
        }
        else {
          uVar17 = 0;
          uVar16 = 2;
        }
      }
      else {
        uVar17 = 0;
        uVar16 = 1;
      }
    }
    else {
      uVar17 = 0;
      uVar16 = 0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
    if (uVar17 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_60,lStack_1e8);
      lVar9 = lStack_1e8;
      func_0x00010002b838(auStack_140,&UNK_10dede847);
      func_0x00010792d2b0(lVar9 + 0x18,auStack_140);
      func_0x00010792d640();
      func_0x00010002b838(auStack_140,&UNK_10dede84d);
      func_0x00010792d2b0(lVar9 + 0x18,auStack_140);
      func_0x00010792d640();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_270,lStack_1e8 + 0x18);
      func_0x00010b4e1960(auStack_140,auStack_160,"scale",5);
      puVar15 = auStack_140;
      func_0x00010727f9a8(auStack_288,puVar15,"");
      func_0x00010792d688();
      if (((ulong)puVar15 & 1) == 0) {
        func_0x00010792d688();
        uVar18 = 1;
        iVar12 = (int)puVar15;
        if (((ulong)puVar15 & 1) == 0) {
          func_0x00010792d688();
          uVar18 = 1;
          if (iVar12 != 0) {
            uVar18 = 2;
          }
        }
      }
      else {
        uVar18 = 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
      func_0x0001001148fc(auStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_2a0,auStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_2b8,auStack_270);
      uVar8 = uStack_290;
      uVar7 = uStack_298;
      uVar6 = uStack_2a0;
      uVar5 = uStack_2a8;
      uVar4 = uStack_2b0;
      uVar3 = uStack_2b8;
      auStack_140[1] = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      auStack_140[4] = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      param_1[2] = uVar8;
      param_1[1] = uVar7;
      *param_1 = uVar6;
      auStack_140[0] = 0;
      param_1[4] = uVar4;
      param_1[3] = uVar3;
      auStack_140[2] = 0;
      auStack_140[3] = 0;
      auStack_140[5] = 0;
      *(undefined4 *)(param_1 + 7) = 0;
      param_1[5] = uVar5;
      param_1[6] = CONCAT44(uVar18,uVar16);
      *(undefined1 *)(param_1 + 8) = 1;
      uStack_110 = uVar16;
      uStack_10c = uVar18;
      uStack_108 = 0;
      func_0x0001072fbd9c(auStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_270);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
      goto LAB_10792cfec;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
LAB_10792cfec:
  func_0x00010792d338(auStack_258);
  return;
}



/* Entry: 10792d4ec; end: 10792d53f;  */

void FUN_10792d4ec(undefined8 *param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_38);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 10792d620; end: 10792d63f;  */

void FUN_10792d620(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x00010792d368();
  }
  return;
}



/* Entry: 10792d8c4; end: 10792d93f; -[SCNMapCommonAuthContextFetchedCallback onRetryableError:] */

void FUN_10792d8c4(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010792db6c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010792dbec();
  func_0x00010792db8c(*(undefined8 *)(*plVar1 + 0x18));
  func_0x00010792dba0();
  func_0x00010792db98();
  return;
}



/* Entry: 10792dbf8; end: 10792dcaf;  */

void FUN_10792dbf8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ebec0;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10792dcb0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010792df2c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10792df1c; end: 10792df2b;  */

void FUN_10792df1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ebf00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792e0b4; end: 10792e0b7;  */

bool FUN_10792e0b4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10792e278; end: 10792e27f;  */

bool FUN_10792e278(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10792e434; end: 10792e437;  */

bool FUN_10792e434(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10792e618; end: 10792e663; +[SMSdkEdgeInsets descriptor] */

void FUN_10792e618(void)

{
  long lVar1;
  
  if (lRam0000000113726bf0 == 0) {
    lVar1 = lRam0000000113726bf0;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a44();
    lRam0000000113726bf0 = lVar1;
  }
  return;
}



/* Entry: 10792e89c; end: 10792e90b; +[SMSdkFeature_Property_Value descriptor] */

long FUN_10792e89c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726c30;
  if (lRam0000000113726c30 == 0) {
    func_0x0001079309f4();
    func_0x000107930aec();
    func_0x0001079309b4();
    func_0x000107930ae4();
  }
  lRam0000000113726c30 = lVar1;
  return lVar1;
}



/* Entry: 10792eb40; end: 10792eb8f; +[SMSdkGetPlacesProfileRequest descriptor] */

void FUN_10792eb40(void)

{
  long lVar1;
  
  if (lRam0000000113726c70 == 0) {
    lVar1 = lRam0000000113726c70;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930ac0();
    lRam0000000113726c70 = lVar1;
  }
  return;
}



/* Entry: 10792edb0; end: 10792ee03; +[SMSdkClusterMember descriptor] */

void FUN_10792edb0(void)

{
  long lVar1;
  
  if (lRam0000000113726cb0 == 0) {
    lVar1 = lRam0000000113726cb0;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    lRam0000000113726cb0 = lVar1;
  }
  return;
}



/* Entry: 10792f06c; end: 10792f0cb; +[SMSdkResolvedContentObject descriptor] */

long FUN_10792f06c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726cf0;
  if (lRam0000000113726cf0 == 0) {
    func_0x0001079309f4();
    func_0x000107930a38();
    func_0x0001079309b4();
  }
  lRam0000000113726cf0 = lVar1;
  return lVar1;
}



/* Entry: 10792f2fc; end: 10792f33f; +[SMSdkLabelledEmoji descriptor] */

void FUN_10792f2fc(void)

{
  long lVar1;
  
  if (lRam0000000113726d30 == 0) {
    lVar1 = lRam0000000113726d30;
    func_0x000107930980();
    func_0x000107930a20();
    lRam0000000113726d30 = lVar1;
  }
  return;
}



/* Entry: 10792f550; end: 10792f597; +[SMSdkBatteryInfo descriptor] */

void FUN_10792f550(void)

{
  long lVar1;
  
  if (lRam0000000113726d70 == 0) {
    lVar1 = lRam0000000113726d70;
    func_0x000107930980();
    func_0x000107930b0c();
    lRam0000000113726d70 = lVar1;
  }
  return;
}



/* Entry: 10792f7dc; end: 10792f827; +[SMSdkLocationSharingPreferences_LocationSharingSettings_AllowList descriptor] */

long FUN_10792f7dc(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726db0;
  if (lRam0000000113726db0 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x000107930a60();
  }
  lRam0000000113726db0 = lVar1;
  return lVar1;
}



/* Entry: 10792fa70; end: 10792fabb; +[SMSdkMapSdkInitializationParams_ApplicationInfo descriptor] */

long FUN_10792fa70(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726df0;
  if (lRam0000000113726df0 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x000107930b14();
  }
  lRam0000000113726df0 = lVar1;
  return lVar1;
}



/* Entry: 10792fcfc; end: 10792fd47; +[SMSdkValue_KeyValuePair descriptor] */

long FUN_10792fcfc(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e30;
  if (lRam0000000113726e30 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x000107930a50();
  }
  lRam0000000113726e30 = lVar1;
  return lVar1;
}



/* Entry: 10792ff70; end: 10792fff3; +[SMSdkGestureConfig descriptor] */

long FUN_10792ff70(long param_1)

{
  if (lRam0000000113726e70 == 0) {
    func_0x0001079309f4();
    func_0x00010bf00dc0();
    func_0x00010c229040();
    func_0x000107930b44();
    lRam0000000113726e70 = param_1;
  }
  return lRam0000000113726e70;
}



/* Entry: 107930248; end: 10793029b; +[SMSdkMapBrowsingContext_FocusViewBrowsingContext descriptor] */

long FUN_107930248(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726eb0;
  if (lRam0000000113726eb0 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a38();
    func_0x0001079309d8();
  }
  lRam0000000113726eb0 = lVar1;
  return lVar1;
}



/* Entry: 1079304d4; end: 10793051f; +[SMSdkMapBrowsingContext_UserPreviewBrowsingContext descriptor] */

long FUN_1079304d4(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ef0;
  if (lRam0000000113726ef0 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x0001079309d8();
  }
  lRam0000000113726ef0 = lVar1;
  return lVar1;
}



/* Entry: 107930760; end: 1079307bf; +[SMSdkViewportInfo_Viewport descriptor] */

long FUN_107930760(long param_1)

{
  if (lRam0000000113726f30 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a38();
    func_0x00010c228780();
    lRam0000000113726f30 = param_1;
  }
  return lRam0000000113726f30;
}



/* Entry: 107930b8c; end: 107930b8f;  */

long FUN_107930b8c(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 107930d94; end: 107930da7;  */

void FUN_107930d94(void)

{
  func_0x000107930d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079310ac; end: 1079310bb;  */

void FUN_1079310ac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_1109ebfa0;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 107931238; end: 10793124b;  */

void FUN_107931238(void)

{
  func_0x0001079311cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079313fc; end: 1079313ff;  */

undefined8 FUN_1079313fc(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107931538; end: 10793156b;  */

void FUN_107931538(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107931728; end: 107931757;  */

void FUN_107931728(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x0001079315e8();
  func_0x000107946c18();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1079318fc; end: 10793195f;  */

long FUN_1079318fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x30) = (int)lVar1;
  return lVar1;
}



/* Entry: 107931a20; end: 107931a87;  */

long * FUN_107931a20(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x00010794635c();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x0001079467a0();
    func_0x000107946d7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 107931bd8; end: 107931beb;  */

void FUN_107931bd8(void)

{
  func_0x000107931b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107931e14; end: 107931e1f;  */

undefined ** FUN_107931e14(void)

{
  return &PTR_DAT_1109ee4d0;
}



/* Entry: 107931f74; end: 107931f97;  */

undefined8 FUN_107931f74(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107932094; end: 10793209f;  */

undefined ** FUN_107932094(void)

{
  return &PTR_DAT_1109ee578;
}



/* Entry: 107932414; end: 10793243f;  */

long FUN_107932414(long param_1)

{
  func_0x000107946a94();
  func_0x000107943774(param_1 + 0x10);
  return param_1;
}



/* Entry: 107932584; end: 107932593;  */

void FUN_107932584(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1079328b4; end: 107932963;  */

void FUN_1079328b4(void)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946c2c();
  if ((uint)extraout_x8 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001079328e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedef37)[extraout_x8] * 4 + 0x1079328e4))();
    return;
  }
  iVar1 = 0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 107932a04; end: 107932a0f;  */

undefined ** FUN_107932a04(void)

{
  return &PTR_DAT_1109ee678;
}



/* Entry: 107932c34; end: 107932cdf;  */

void FUN_107932c34(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ee220);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x00010794379c(unaff_x19 + 0x18);
  lVar1 = unaff_x21 + 0x30;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = unaff_x21 + 0x38;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x38) = lVar1;
  lVar1 = unaff_x21 + 0x40;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  lVar1 = unaff_x21 + 0x48;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x48) = lVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107944f6c();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x20;
  return;
}



/* Entry: 10793304c; end: 10793304f;  */

void FUN_10793304c(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  func_0x000107933160();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x0001001a53d4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x50);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107944f6c();
      *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      func_0x000107931d08();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_03 & 1) != 0) {
    func_0x00010794672c();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107933310; end: 107933323;  */

void FUN_107933310(void)

{
  func_0x0001079332b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793370c; end: 10793373b;  */

void FUN_10793370c(ulong *param_1,ulong *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  ulong extraout_x8;
  ulong uVar5;
  undefined *extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar6;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107933360();
  func_0x000107946c18();
  func_0x000107946614();
  uVar6 = param_3;
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
    uVar6 = unaff_x22;
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  uVar5 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar5 = param_2[1];
  }
  if (uVar5 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x0001079470b8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto code_r0x0001079336e8;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107933324();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  bVar3 = iVar1 + -2 == 5;
  switch(iVar1 + -2) {
  case 0:
    *(undefined1 *)(unaff_x21 + 3) = *(undefined1 *)(unaff_x20 + 0x18);
    break;
  case 1:
  case 3:
    *(undefined4 *)(unaff_x21 + 3) = *(undefined4 *)(unaff_x20 + 0x18);
    break;
  case 2:
    if (iVar2 != iVar1) {
      unaff_x21[3] = (ulong)&DAT_11383d918;
    }
    puVar4 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    if (*(int *)(unaff_x20 + 0x24) != 4) {
      puVar4 = &DAT_11383d918;
    }
    goto code_r0x0001079336dc;
  case 4:
    unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
    break;
  case 5:
    func_0x0001079471b8();
    if (!bVar3) {
      unaff_x21[3] = (ulong)extraout_x8_00;
    }
    puVar4 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    if (*(int *)(unaff_x20 + 0x24) != 7) {
      puVar4 = extraout_x8_00;
    }
code_r0x0001079336dc:
    param_1 = unaff_x21 + 3;
    func_0x0001001a53d4(param_1,puVar4,uVar6);
  }
code_r0x0001079336e8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1079338a0; end: 107933977;  */

void FUN_1079338a0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x000107946514();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x0001079470c0();
  return;
}



/* Entry: 107933ac0; end: 107933aef;  */

void FUN_107933ac0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107933af0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107933bcc; end: 107933bd7;  */

undefined ** FUN_107933bcc(void)

{
  return &PTR_DAT_1109ee7d0;
}



/* Entry: 107933f8c; end: 107933f97;  */

undefined ** FUN_107933f8c(void)

{
  return &PTR_DAT_1109ee820;
}



/* Entry: 107934300; end: 10793430b;  */

undefined ** FUN_107934300(void)

{
  return &PTR_DAT_1109ee860;
}



/* Entry: 10793447c; end: 107934507;  */

long * FUN_10793447c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x0001079465d0();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1079344d0;
  }
  else if ((int)plVar1 == 0) goto LAB_1079344d0;
  func_0x000107946aa4();
  param_2 = param_3;
  func_0x000107946f64(param_3,1);
LAB_1079344d0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000107946ab4();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10793463c; end: 107934693;  */

void FUN_10793463c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946514();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1079347f0; end: 1079348e7;  */

long FUN_1079347f0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x000107946514();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar2 = param_1 + 1;
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000107946a08();
    lVar2 = extraout_x8_01 + lVar2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 107934ba8; end: 107934bab;  */

void FUN_107934ba8(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107947144();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  func_0x000107947390();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x30) = extraout_w8;
  }
  func_0x000107947384();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x31) = extraout_w8_00;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107934d28; end: 107934d63;  */

void FUN_107934d28(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  func_0x000107934cec();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107935190; end: 107935193;  */

long FUN_107935190(long param_1)

{
  func_0x000107946a94();
  func_0x000100067de0(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x0001079348e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x000107931394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x0001000681a0();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x0001000681a0();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 1079357ec; end: 107935847;  */

void FUN_1079357ec(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107946e64();
  if (((extraout_w8 == 3) || (extraout_w8 == 2)) || (extraout_w8 == 1)) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        func_0x00010069094c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 107935a80; end: 107935aa7;  */

undefined8 FUN_107935a80(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 107935d28; end: 107935d2b;  */

long FUN_107935d28(long param_1)

{
  func_0x000107946a94();
  func_0x00010794385c(param_1 + 0x10);
  return param_1;
}



/* Entry: 107935e54; end: 107935e83;  */

void FUN_107935e54(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107935e84();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107935f38; end: 107936023;  */

long * FUN_107935f38(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946414();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107935f68;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107935f68:
      param_4 = (long *)&UNK_10f4386a7;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107935f9c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107935f9c:
      param_4 = (long *)&UNK_10f4386c4;
      func_0x000107946aa4();
      func_0x000107946498();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107935ff0;
  }
  else if ((int)param_2 == 0) goto LAB_107935ff0;
  param_4 = (long *)&UNK_10f4386e1;
  func_0x000107946aa4();
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_107935ff0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10793620c; end: 10793621f;  */

void FUN_10793620c(void)

{
  func_0x00010793617c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079367b0; end: 1079367bb;  */

undefined1  [16] FUN_1079367b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x21;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10793692c; end: 107936967;  */

void FUN_10793692c(ulong *param_1)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107936968();
  func_0x000107947214();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x28) = extraout_w8;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107936a8c; end: 107936a97;  */

undefined ** FUN_107936a8c(void)

{
  return &PTR_DAT_1109eebf8;
}



/* Entry: 107936e0c; end: 107936e47;  */

void FUN_107936e0c(long param_1)

{
  long unaff_x19;
  
  func_0x0001079473cc();
  if (param_1 != 0) {
    func_0x0001079369e4();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    if ((*(uint *)(unaff_x19 + 0x28) & 0xfffffffe) == 2) {
      func_0x000107946f1c();
    }
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  return;
}



/* Entry: 107937018; end: 10793702f;  */

void FUN_107937018(void)

{
  func_0x000107936bf0();
  func_0x0001079462e4();
  return;
}



/* Entry: 107937278; end: 107937283;  */

undefined ** FUN_107937278(void)

{
  return &PTR_DAT_1109eec90;
}



/* Entry: 107937730; end: 107937733;  */

long FUN_107937730(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107937200();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107937a3c; end: 107937a3f;  */

long FUN_107937a3c(long param_1)

{
  func_0x000107946a94();
  func_0x0001079438f8(param_1 + 0x10);
  return param_1;
}



/* Entry: 107937b90; end: 107937bbf;  */

void FUN_107937b90(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107937a60();
  func_0x000107946c18();
  func_0x0001079464dc();
  func_0x000107937b80();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107937cb0; end: 107937cef;  */

void FUN_107937cb0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  func_0x000107946f94();
  func_0x000107946ef0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1079380b0; end: 1079380b3;  */

long FUN_1079380b0(long param_1)

{
  func_0x000107946a94();
  FUN_107943940(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793820c; end: 10793823b;  */

void FUN_10793820c(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x0001079380d4();
  func_0x000107946c18();
  func_0x0001079464dc();
  func_0x0001079381fc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107938370; end: 1079383bf;  */

void FUN_107938370(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 1079384ec; end: 107938637;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1079384ec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x000107946664();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x0001079469d8();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    func_0x000107946a38();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x4;
    func_0x000107946a9c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1079387c8; end: 1079388b3;  */

long * FUN_1079387c8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x0001079467a0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    func_0x0001079469d8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 107938a5c; end: 107938ac7;  */

void FUN_107938a5c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010794678c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107935670(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946dc4();
  return;
}



/* Entry: 107938c90; end: 107938c93;  */

void FUN_107938c90(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107938cc4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107938d4c; end: 107938dd3;  */

long * FUN_107938d4c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946414();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107938d90;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107938d90;
  param_4 = (long *)&UNK_10f4389ce;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107938d90:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x0001079472d4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107938f84; end: 107938fc3;  */

void FUN_107938f84(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  func_0x000107946f94();
  func_0x000107946ef0();
  func_0x00010794710c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107939478; end: 10793947b;  */

long FUN_107939478(long param_1)

{
  func_0x000107946a94();
  func_0x000107943988(param_1 + 0x10);
  return param_1;
}


