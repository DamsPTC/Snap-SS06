/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10792993c; end: 107929a47; -[SCNSnapMapsSdkUserMetadataManager updateUserInfo:] */

void FUN_10792993c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long *plVar3;
  undefined1 auStack_150 [272];
  
  func_0x000107929cb8();
  plVar3 = *(long **)(unaff_x20 + 0x18);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x19;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar2 = unaff_x19;
  func_0x00010c08fa60(unaff_x19);
  func_0x0001072f11ac(auStack_150);
  func_0x00010006369c(auStack_150,uVar1,uVar2);
  _objc_release(unaff_x19);
  (**(code **)(*plVar3 + 0x10))(plVar3,auStack_150);
  FUN_107939800(auStack_150);
  func_0x000107929cd8();
  return;
}



/* Entry: 107929cf8; end: 107929daf;  */

void FUN_107929cf8(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1109eba68;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_107929db0);
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
    func_0x00010792a0a4(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10792a094; end: 10792a0a3;  */

void FUN_10792a094(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ebaa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792a334; end: 10792a3ab;  */

void FUN_10792a334(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109ebb38;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010792a420();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_10792a3ac);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010792a43c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10792a624; end: 10792a663;  */

void FUN_10792a624(void)

{
  func_0x00010792a7a8();
  return;
}



/* Entry: 10792a88c; end: 10792a8db;  */

void FUN_10792a88c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010792a97c();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10792abe0; end: 10792abe7; -[SCNMapSdkResourceRequesterError reason] */

undefined8 FUN_10792abe0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10792b374; end: 10792b37b; -[SCNMapSdkResourceRequesterResource loadingMethod] */

undefined8 FUN_10792b374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10792b3b4; end: 10792b3bb; -[SCNMapSdkResourceRequesterResource priorEtag] */

undefined8 FUN_10792b3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10792b3f4; end: 10792b467; -[SCNMapSdkResourceRequesterResource .cxx_destruct] */

void FUN_10792b3f4(long param_1)

{
  func_0x00010792b468(param_1 + 0x88);
  func_0x00010792b468(param_1 + 0x80);
  func_0x00010792b468(param_1 + 0x78);
  func_0x00010792b468(param_1 + 0x70);
  func_0x00010792b468(param_1 + 0x58);
  func_0x00010792b468(param_1 + 0x50);
  func_0x00010792b468(param_1 + 0x48);
  func_0x00010792b468(param_1 + 0x40);
  func_0x00010792b468(param_1 + 0x38);
  func_0x00010792b468(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10792b840; end: 10792b89b; -[SCNMapSdkResourceRequesterResourceRequester .cxx_destruct] */

void FUN_10792b840(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ebc80;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072aca24((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792bbd4; end: 10792bbeb;  */

void FUN_10792bbd4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792c154; end: 10792c15b; -[SCNMapSdkResourceRequesterResponse error] */

undefined8 FUN_10792c154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10792c194; end: 10792c1d7; -[SCNMapSdkResourceRequesterResponse .cxx_destruct] */

void FUN_10792c194(long param_1)

{
  func_0x00010792c1d8(param_1 + 0x40);
  func_0x00010792c1d8(param_1 + 0x38);
  func_0x00010792c1d8(param_1 + 0x30);
  func_0x00010792c1d8(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10792c3bc; end: 10792c3c3; -[SCNMapSdkResourceRequesterTileData y] */

undefined4 FUN_10792c3bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10792c5dc; end: 10792c5ef;  */

void FUN_10792c5dc(void)

{
  func_0x00010792c774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10792c7cc; end: 10792c86b;  */

void FUN_10792c7cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5720;
  _objc_alloc(PTR_PTR_1126d5720);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x0001001011a4(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff60c0(puVar1,param_2,lVar2,lVar3,(long)*(int *)(param_1 + 0x30),
                      (long)*(int *)(param_1 + 0x34),(long)*(int *)(param_1 + 0x38));
  func_0x00010792c86c();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10792ccac; end: 10792ccd7;  */

void FUN_10792ccac(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010792cd90();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10792d2b0; end: 10792d337;  */

bool FUN_10792d2b0(long *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  
  bVar5 = param_2[0x17];
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)bVar5) {
    uVar1 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar6) {
    uVar2 = (ulong)bVar6;
  }
  if (uVar1 <= uVar2) {
    pcVar3 = *(char **)param_2;
    pcVar8 = *(char **)param_2 + *(ulong *)(param_2 + 8);
    if (-1 < (char)bVar5) {
      pcVar3 = param_2;
      pcVar8 = param_2 + bVar5;
    }
    plVar4 = (long *)*param_1;
    if (-1 < (char)bVar6) {
      plVar4 = param_1;
    }
    pcVar9 = (char *)(uVar2 + (long)plVar4);
    do {
      pcVar9 = pcVar9 + -1;
      bVar7 = pcVar8 == pcVar3;
      if (pcVar8 == pcVar3) {
        return bVar7;
      }
      pcVar8 = pcVar8 + -1;
    } while (*pcVar8 == *pcVar9);
    return bVar7;
  }
  return false;
}



/* Entry: 10792d540; end: 10792d55f;  */

void FUN_10792d540(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10792d640; end: 10792d68f;  */

void FUN_10792d640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000180);
  return;
}



/* Entry: 10792d940; end: 10792d9bb; -[SCNMapCommonAuthContextFetchedCallback onUnretrybleError:] */

void FUN_10792d940(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010792db6c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010792dbec();
  func_0x00010792db8c(*(undefined8 *)(*plVar1 + 0x20));
  func_0x00010792dba0();
  func_0x00010792db98();
  return;
}



/* Entry: 10792dcb0; end: 10792ddaf;  */

void FUN_10792dcb0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ebf00;
  puVar4[3] = &PTR_DAT_1109ebf78;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109ebf50;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10792df2c(&uStack_50);
  return;
}



/* Entry: 10792df2c; end: 10792df57;  */

long FUN_10792df2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10792e0b8; end: 10792e123;  */

long FUN_10792e0b8(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726b80 == 0) {
    func_0x000107930ad8();
    func_0x000107930ad0();
    do {
      if (lRam0000000113726b80 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726b80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726b80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726b80 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726b80;
}



/* Entry: 10792e280; end: 10792e2e7;  */

long FUN_10792e280(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726ba0 == 0) {
    func_0x000107930ad8();
    func_0x000107930a8c();
    do {
      if (lRam0000000113726ba0 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726ba0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726ba0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726ba0 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726ba0;
}



/* Entry: 10792e438; end: 10792e4b7;  */

long FUN_10792e438(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726bc0 == 0) {
    func_0x000107930ad8();
    func_0x00010bf00e20();
    do {
      if (lRam0000000113726bc0 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726bc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726bc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726bc0 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726bc0;
}



/* Entry: 10792e664; end: 10792e6a7; +[SMSdkUnitBezier descriptor] */

void FUN_10792e664(void)

{
  long lVar1;
  
  if (lRam0000000113726bf8 == 0) {
    lVar1 = lRam0000000113726bf8;
    func_0x000107930980();
    func_0x000107930a20();
    lRam0000000113726bf8 = lVar1;
  }
  return;
}



/* Entry: 10792e90c; end: 10792e957; +[SMSdkFeature_Property_Value_List descriptor] */

long FUN_10792e90c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726c38;
  if (lRam0000000113726c38 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x000107930a70();
  }
  lRam0000000113726c38 = lVar1;
  return lVar1;
}



/* Entry: 10792eb90; end: 10792ebd3; +[SMSdkPlaceProfile descriptor] */

void FUN_10792eb90(void)

{
  long lVar1;
  
  if (lRam0000000113726c78 == 0) {
    lVar1 = lRam0000000113726c78;
    func_0x000107930980();
    func_0x000107930a38();
    lRam0000000113726c78 = lVar1;
  }
  return;
}



/* Entry: 10792ee04; end: 10792ee63; +[SMSdkLocationAnnotation descriptor] */

long FUN_10792ee04(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726cb8;
  if (lRam0000000113726cb8 == 0) {
    func_0x0001079309f4();
    func_0x000107930a38();
    func_0x0001079309b4();
  }
  lRam0000000113726cb8 = lVar1;
  return lVar1;
}



/* Entry: 10792f0cc; end: 10792f143; +[SMSdkStorySummaryInfo descriptor] */

long FUN_10792f0cc(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726cf8;
  if (lRam0000000113726cf8 == 0) {
    func_0x0001079309f4();
    func_0x00010bf00dc0();
    func_0x0001079309b4();
    func_0x000107930b44();
  }
  lRam0000000113726cf8 = lVar1;
  return lVar1;
}



/* Entry: 10792f340; end: 10792f383; +[SMSdkStickerOverrides descriptor] */

void FUN_10792f340(void)

{
  long lVar1;
  
  if (lRam0000000113726d38 == 0) {
    lVar1 = lRam0000000113726d38;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726d38 = lVar1;
  }
  return;
}



/* Entry: 10792f598; end: 10792f5e3; +[SMSdkWidgetInfo descriptor] */

void FUN_10792f598(void)

{
  long lVar1;
  
  if (lRam0000000113726d78 == 0) {
    lVar1 = lRam0000000113726d78;
    func_0x000107930980();
    func_0x00010bf00dc0();
    lRam0000000113726d78 = lVar1;
  }
  return;
}



/* Entry: 10792f828; end: 10792f86f; +[SMSdkSensorInfo descriptor] */

void FUN_10792f828(void)

{
  long lVar1;
  
  if (lRam0000000113726db8 == 0) {
    lVar1 = lRam0000000113726db8;
    func_0x000107930980();
    func_0x000107930b0c();
    lRam0000000113726db8 = lVar1;
  }
  return;
}



/* Entry: 10792fabc; end: 10792fb07; +[SMSdkMapSdkInitializationParams_LocalizedString descriptor] */

long FUN_10792fabc(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726df8;
  if (lRam0000000113726df8 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x000107930b14();
  }
  lRam0000000113726df8 = lVar1;
  return lVar1;
}



/* Entry: 10792fd48; end: 10792fd93; +[SMSdkValue_ValueObject descriptor] */

long FUN_10792fd48(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e38;
  if (lRam0000000113726e38 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x000107930a50();
  }
  lRam0000000113726e38 = lVar1;
  return lVar1;
}



/* Entry: 10792fff4; end: 107930057; +[SMSdkMapFriendsLoadEvent descriptor] */

long FUN_10792fff4(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e78;
  if (lRam0000000113726e78 == 0) {
    func_0x0001079309f4();
    func_0x000107930b0c();
    func_0x0001079309b4();
  }
  lRam0000000113726e78 = lVar1;
  return lVar1;
}



/* Entry: 10793029c; end: 1079302e7; +[SMSdkMapBrowsingContext_FilteredBrowsingContext descriptor] */

long FUN_10793029c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726eb8;
  if (lRam0000000113726eb8 == 0) {
    func_0x000107930980();
    func_0x000107930a2c();
    func_0x0001079309d8();
  }
  lRam0000000113726eb8 = lVar1;
  return lVar1;
}



/* Entry: 107930520; end: 10793056b; +[SMSdkMapBrowsingContext_DropsTrayBrowsingContext descriptor] */

long FUN_107930520(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ef8;
  if (lRam0000000113726ef8 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x0001079309d8();
  }
  lRam0000000113726ef8 = lVar1;
  return lVar1;
}



/* Entry: 1079307c0; end: 10793081b; +[SMSdkViewportInfo_Weather descriptor] */

long FUN_1079307c0(long param_1)

{
  if (lRam0000000113726f38 == 0) {
    func_0x000107930980();
    func_0x000107930af8();
    func_0x00010c2289e0();
    func_0x000107930aa0();
    lRam0000000113726f38 = param_1;
  }
  return lRam0000000113726f38;
}



/* Entry: 107930b90; end: 107930ba3;  */

void FUN_107930b90(void)

{
  func_0x000107930b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107930da8; end: 107930db3;  */

undefined ** FUN_107930da8(void)

{
  return &PTR_DAT_1109ec070;
}



/* Entry: 1079310bc; end: 1079310e7;  */

undefined8 * FUN_1079310bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  func_0x000107931020(param_1,param_3);
  return param_1;
}



/* Entry: 10793124c; end: 10793126b;  */

undefined ** FUN_10793124c(void)

{
  return &PTR_DAT_1109ee350;
}



/* Entry: 107931400; end: 107931413;  */

void FUN_107931400(void)

{
  func_0x000107931394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793156c; end: 10793158f;  */

undefined8 FUN_10793156c(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107931758; end: 1079317b7;  */

undefined1  [16] FUN_107931758(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107946da8();
  puVar1 = param_1 + 0x18;
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



/* Entry: 107931960; end: 10793198f;  */

void FUN_107931960(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107931834();
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
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 107931a88; end: 107931ad7;  */

void FUN_107931a88(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000107946280();
  while (unaff_x22 != 0) {
    func_0x000107931520(*unaff_x21);
    func_0x000107946ff0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 107931bec; end: 107931bf7;  */

undefined ** FUN_107931bec(void)

{
  return &PTR_DAT_1109ee490;
}



/* Entry: 107931e20; end: 107931e53;  */

void FUN_107931e20(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
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



/* Entry: 107931f98; end: 107931f9b;  */

undefined8 FUN_107931f98(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 1079320a0; end: 10793210b;  */

void FUN_1079320a0(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946940();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x0001079320dc(unaff_x19[4]);
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 107932440; end: 107932443;  */

long FUN_107932440(long param_1)

{
  func_0x000107946a94();
  func_0x000107943774(param_1 + 0x10);
  return param_1;
}



/* Entry: 107932594; end: 107932653;  */

void FUN_107932594(void)

{
  undefined4 extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  func_0x000107946e64();
  switch(extraout_w8) {
  case 2:
    func_0x000107946c3c();
  default:
    goto LAB_107932624;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_107932624;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107931dd0();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_107932624;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107931f74();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_107932624;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107932414();
    }
  }
  __ZdlPv();
LAB_107932624:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 107932964; end: 107932967;  */

void FUN_107932964(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto code_r0x0001079323c4;
  func_0x000107947068();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_107932594();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  bVar2 = iVar1 + -1 == 7;
  switch(iVar1 + -1) {
  case 0:
    *(undefined1 *)(unaff_x21 + 2) = *(undefined1 *)(unaff_x20 + 0x10);
    break;
  case 1:
    func_0x0001079471b8();
    if (!bVar2) {
      unaff_x21[2] = extraout_x8;
    }
    func_0x000107946e78();
    break;
  case 2:
  case 3:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    break;
  case 4:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    break;
  case 5:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x000107931f28();
      break;
    }
    func_0x000107946bdc();
    func_0x000107944e7c();
    goto code_r0x0001079323c0;
  case 6:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x000107946f24();
      func_0x000107931f68();
      break;
    }
    func_0x000107946bdc();
    func_0x000107944ecc();
    goto code_r0x0001079323c0;
  case 7:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x000107932554();
      break;
    }
    func_0x000107946bdc();
    func_0x000107944f1c();
code_r0x0001079323c0:
    unaff_x21[2] = (ulong)param_1;
  }
code_r0x0001079323c4:
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



/* Entry: 107932a10; end: 107932a4b;  */

void FUN_107932a10(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946940();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x0001079320dc(unaff_x19[4]);
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 107932ce0; end: 107932d0b;  */

undefined8 FUN_107932ce0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107932d0c(param_1);
  return param_1;
}



/* Entry: 107933050; end: 10793315f;  */

void FUN_107933050(void)

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



/* Entry: 107933324; end: 107933353;  */

void FUN_107933324(long param_1)

{
  if (*(int *)(param_1 + 0x24) == 7 || *(int *)(param_1 + 0x24) == 4) {
    func_0x000107946c10();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10793373c; end: 107933773;  */

void FUN_10793373c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  return;
}



/* Entry: 107933978; end: 1079339a3;  */

long FUN_107933978(long param_1)

{
  func_0x000107946a94();
  func_0x0001079437e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 107933af0; end: 107933aff;  */

void FUN_107933af0(long *param_1,long param_2)

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



/* Entry: 107933bd8; end: 107933c13;  */

void FUN_107933bd8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  func_0x00010029b2d4(unaff_x19 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 107933f98; end: 10793403f;  */

void FUN_107933f98(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946940();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107933fe8(unaff_x19[4]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107934014(unaff_x19[5]);
    }
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10793430c; end: 10793433f;  */

void FUN_10793430c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
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



/* Entry: 107934508; end: 10793455f;  */

void FUN_107934508(long param_1)

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



/* Entry: 107934694; end: 107934697;  */

void FUN_107934694(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
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



/* Entry: 1079348e8; end: 10793491b;  */

undefined8 FUN_1079348e8(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  func_0x000107946f1c();
  func_0x0001079470b0();
  return param_1;
}



/* Entry: 107934bac; end: 107934c73;  */

void FUN_107934bac(ulong *param_1,long param_2)

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



/* Entry: 107934d64; end: 107934e97;  */

long * FUN_107934d64(long *param_1,long *param_2,long *param_3,long *param_4)

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
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107934d94;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107934d94:
      param_4 = (long *)&UNK_10f4385c6;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x0001079468c8();
    param_2 = param_1;
    func_0x000107946bd4();
    func_0x000107946a60();
    unaff_x20 = param_1;
  }
  func_0x000107946964();
  if ((long)param_2 < 0) {
    if (unaff_x22[1] != 0) goto LAB_107934de8;
  }
  else if ((int)param_2 != 0) {
LAB_107934de8:
    param_4 = (long *)&UNK_10f4385ec;
    func_0x000107946aa4();
    param_1 = unaff_x19;
    func_0x000107946674();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x34) == 0x65) {
    unaff_x22 = (long *)(*(ulong *)(unaff_x21 + 0x28) & 0xfffffffffffffffc);
  }
  else {
    if (*(int *)(unaff_x21 + 0x34) != 100) goto LAB_107934e64;
    func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x28));
    param_4 = (long *)&UNK_10f438614;
    func_0x000107946aa4();
  }
  func_0x000107946ac0();
  param_1 = unaff_x19;
  param_3 = unaff_x22;
  unaff_x20 = unaff_x19;
LAB_107934e64:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (long *)(ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 107935194; end: 1079351a7;  */

void FUN_107935194(void)

{
  func_0x000107935108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107935848; end: 10793587b;  */

long FUN_107935848(long param_1)

{
  func_0x000107946a94();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001079357ec(param_1);
  }
  return param_1;
}



/* Entry: 107935aa8; end: 107935aab;  */

undefined8 FUN_107935aa8(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 107935d2c; end: 107935d3f;  */

void FUN_107935d2c(void)

{
  func_0x000107935cfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107935e84; end: 107935e93;  */

void FUN_107935e84(long *param_1,long param_2)

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



/* Entry: 107936024; end: 1079360af;  */

void FUN_107936024(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
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
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 107936220; end: 10793622b;  */

undefined ** FUN_107936220(void)

{
  return &PTR_DAT_1109eeb68;
}



/* Entry: 1079367bc; end: 1079367f3;  */

long FUN_1079367bc(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 107936968; end: 107936977;  */

void FUN_107936968(long *param_1,long param_2)

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



/* Entry: 107936a98; end: 107936acf;  */

void FUN_107936a98(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  func_0x000107936a5c();
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



/* Entry: 107936e48; end: 107936e4b;  */

undefined8 FUN_107936e48(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107936e0c(param_1);
  return param_1;
}



/* Entry: 107937030; end: 1079370eb;  */

void FUN_107937030(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x000107947080();
    if (param_1 == (ulong *)0x0) {
      FUN_1079451cc();
      unaff_x21[3] = (ulong)unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x000107936c90();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[5];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        func_0x000107936e60();
      }
      *(int *)(unaff_x21 + 5) = iVar2;
    }
    if ((iVar2 == 3) || (iVar2 == 2)) {
      if (iVar3 != iVar2) {
        unaff_x21[4] = (ulong)&DAT_11383d918;
      }
      func_0x000107946f00();
    }
  }
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



/* Entry: 107937284; end: 1079372c7;  */

void FUN_107937284(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  func_0x0001079370ec();
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



/* Entry: 107937734; end: 107937747;  */

void FUN_107937734(void)

{
  func_0x0001079376e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107937a40; end: 107937a53;  */

void FUN_107937a40(void)

{
  func_0x000107937a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107937bc0; end: 107937bc3;  */

undefined1  [16] FUN_107937bc0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 107937cf0; end: 107937e4f;  */

long * FUN_107937cf0(long *param_1,long param_2,long *param_3,long *param_4)

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
      goto LAB_107937d20;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107937d20:
      param_4 = (long *)&UNK_10f4388aa;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107937d54;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107937d54:
      param_4 = (long *)&UNK_10f4388d2;
      func_0x000107946aa4();
      func_0x000107946498();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  plVar2 = *(long **)(unaff_x21 + 0x30);
  if (plVar2 != (long *)0x0) {
    param_1 = unaff_x19;
    func_0x00010599ccb0();
    param_3 = unaff_x20;
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x38) != 0) {
    func_0x0001079468c8();
    plVar2 = param_1;
    func_0x000107946ef8();
    func_0x000107946a60();
    unaff_x20 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x20));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_107937dc4;
  }
  else if ((int)plVar2 != 0) {
LAB_107937dc4:
    param_4 = (long *)&UNK_10f4388fc;
    func_0x000107946aa4();
    plVar2 = (long *)0x5;
    func_0x000107946674();
    param_1 = unaff_x19;
    unaff_x20 = unaff_x19;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x28));
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107937e1c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_107937e1c;
  param_4 = (long *)&UNK_10f438929;
  func_0x000107946aa4();
  func_0x0001079473b4();
  func_0x000107946674();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107937e1c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar3 - iVar4);
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



/* Entry: 1079380b4; end: 1079380c7;  */

void FUN_1079380b4(void)

{
  func_0x000107938084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793823c; end: 10793823f;  */

undefined1  [16] FUN_10793823c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 1079383c0; end: 1079383c3;  */

void FUN_1079383c0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
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



/* Entry: 107938638; end: 10793863b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107938638(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107947080();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001079470a4();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  func_0x000107946584();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1079388b4; end: 107938933;  */

void FUN_1079388b4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  func_0x000107947208();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000107947080();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
  }
  func_0x000107946584();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
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



/* Entry: 107938ac8; end: 107938b47;  */

void FUN_107938ac8(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x0001079472a4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_107934bac();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
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



/* Entry: 107938c94; end: 107938cc3;  */

void FUN_107938c94(ulong *param_1)

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



/* Entry: 107938dd4; end: 107938e8f;  */

void FUN_107938dd4(long param_1)

{
  int iVar1;
  int extraout_w8;
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x000107946a08();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 107938fc4; end: 107939197;  */

long * FUN_107938fc4(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946984();
  func_0x000107946824();
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107938ff8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107938ff8:
      param_4 = (long *)&UNK_10f4389fb;
      func_0x000107946aa4();
      func_0x000107946634();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107939030;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107939030:
      param_4 = (long *)&UNK_10f438a27;
      func_0x000107946aa4();
      func_0x000107946cd0();
      func_0x000107946758();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001079466b8();
    param_2 = param_1;
    func_0x000107946e70();
    func_0x000107946a44();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x0001079466b8();
    param_2 = param_1;
    func_0x000107946ef8();
    func_0x000107946a6c();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x0001079466b8();
    param_2 = param_1;
    func_0x00010794703c();
    func_0x000107946a6c();
    unaff_x21 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_1079390cc;
  }
  else if ((int)param_2 != 0) {
LAB_1079390cc:
    param_4 = (long *)&UNK_10f438a5b;
    func_0x000107946aa4();
    param_2 = (long *)0x6;
    param_1 = unaff_x19;
    func_0x000107946758();
    unaff_x21 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10793910c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10793910c:
      param_4 = (long *)&UNK_10f438a83;
      func_0x000107946aa4();
      func_0x0001079473b4();
      func_0x000107946758();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107939164;
  }
  else if ((int)param_2 == 0) goto LAB_107939164;
  param_4 = (long *)&UNK_10f438aac;
  func_0x000107946aa4();
  func_0x000107946758();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_107939164:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
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



/* Entry: 10793947c; end: 10793948f;  */

void FUN_10793947c(void)

{
  func_0x00010793944c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107939604; end: 107939607;  */

undefined1  [16] FUN_107939604(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}


