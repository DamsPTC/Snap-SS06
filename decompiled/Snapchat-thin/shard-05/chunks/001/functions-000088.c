/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b100d4; end: 103b1022f;  */

undefined8 * FUN_103b100d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  func_0x000103b10004(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  return param_1;
}



/* Entry: 103b10230; end: 103b10293;  */

undefined8 * FUN_103b10230(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  uVar11 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  FUN_103b1008c(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Entry: 103b10294; end: 103b103c7;  */

int FUN_103b10294(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0xe) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 103b103c8; end: 103b103d7; -[SCCalendarCreationPresenterConfig currentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b103c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febe68));
  return;
}



/* Entry: 103b103d8; end: 103b103e7; -[SCCalendarCreationPresenterConfig profileUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b103d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febe70));
  return;
}



/* Entry: 103b103e8; end: 103b103f7; -[SCCalendarCreationPresenterConfig source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b103e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112febe78);
}



/* Entry: 103b103f8; end: 103b10417; -[SCCalendarCreationPresenterConfig uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b103f8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112febe80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b10418; end: 103b10433; -[SCCalendarCreationPresenterConfig optionalDismissalCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10418(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112febe88);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112febe88))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1106d3290;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 103b10434; end: 103b1043f; -[SCCalendarCreationPresenterConfig editEventId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10434(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febe90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febe90);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b10440; end: 103b1044b; -[SCCalendarCreationPresenterConfig editEventRevisionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10440(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febe98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febe98);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b1044c; end: 103b10457; -[SCCalendarCreationPresenterConfig editEventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1044c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febea0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febea0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b10458; end: 103b10467; -[SCCalendarCreationPresenterConfig editEventDateTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febea8));
  return;
}



/* Entry: 103b10468; end: 103b10477; -[SCCalendarCreationPresenterConfig editDurationSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febeb0));
  return;
}



/* Entry: 103b10478; end: 103b10483; -[SCCalendarCreationPresenterConfig editTzid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10478(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febeb8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febeb8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b10484; end: 103b1048f; -[SCCalendarCreationPresenterConfig editLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10484(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febec0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febec0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b10490; end: 103b104e7;  */

void FUN_103b10490(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b104e8; end: 103b104f7; -[SCCalendarCreationPresenterConfig editGuestsCanInvite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b104e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febec8));
  return;
}



/* Entry: 103b104f8; end: 103b10507; -[SCCalendarCreationPresenterConfig editIsAllDay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b104f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febed0));
  return;
}



/* Entry: 103b10508; end: 103b10563; -[SCCalendarCreationPresenterConfig editParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10508(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112febed8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000102f41734(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b10564; end: 103b1057f; -[SCCalendarCreationPresenterConfig planStickerCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10564(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112febee0);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112febee0))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_103b10608;
    puStack_48 = &UNK_1106d3268;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 103b10580; end: 103b10607;  */

void FUN_103b10580(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + *param_3))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = param_4;
    uStack_48 = param_5;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 103b10608; end: 103b10ad7;  */

/* WARNING: Possible PIC construction at 0x000103b106d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b106d4) */

void FUN_103b10608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  if (param_7 == 0) {
    param_7 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c5faec(param_7);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4,param_5,param_6,param_7,uVar5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 103b10ad8; end: 103b10e27; -[SCCalendarCreationPresenterConfig initWithCurrentUser:profileUser:source:uiContainer:optionalDismissalCallback:editEventId:editEventRevisionId:editEventName:editEventDateTimestamp:editDurationSeconds:editTzid:editLocation:editGuestsCanInvite:editIsAllDay:editParticipants:planStickerCompletion:] */

void FUN_103b10ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  long param_10,undefined8 param_11,undefined8 param_12,long param_13,long param_14,
                  undefined8 param_15,undefined8 param_16,long param_17,long param_18)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined *puStack_90;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_7 == 0) {
    pcStack_98 = (code *)0x0;
    puStack_90 = (undefined *)0x0;
  }
  else {
    puStack_90 = &UNK_1106d3250;
    param_2 = 0x18;
    func_0x000107c613fc(&UNK_1106d3250,0x18,7);
    *(long *)(puStack_90 + 0x10) = param_7;
    pcStack_98 = FUN_103b115c4;
  }
  if (param_8 == 0) {
    uStack_b0 = 0;
    lStack_a8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_b0 = param_2;
    lStack_a8 = param_8;
  }
  if (param_9 == 0) {
    uStack_c0 = 0;
    lStack_b8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_c0 = param_2;
    lStack_b8 = param_9;
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_6);
  lVar3 = param_10;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar4 = param_13;
  func_0x000107c61174();
  lVar5 = param_14;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar6 = param_17;
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_10 = 0;
    uVar2 = 0;
    uVar7 = param_2;
  }
  else {
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c61170(lVar3);
    uVar2 = param_2;
  }
  if (lVar4 == 0) {
    param_13 = 0;
    uVar1 = 0;
    uVar9 = uVar7;
  }
  else {
    func_0x000107c5faec();
    uVar9 = uVar7;
    func_0x000107c61170(lVar4);
    uVar1 = uVar7;
  }
  if (lVar5 == 0) {
    param_14 = 0;
    uVar9 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  if (lVar6 == 0) {
    param_17 = 0;
  }
  else {
    uVar7 = 0;
    func_0x000102f41734(0);
    func_0x000107c5fc54(param_17,uVar7);
    func_0x000107c61170(lVar6);
  }
  if (param_18 == 0) {
    uVar7 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = &UNK_1106d3228;
    func_0x000107c613fc(&UNK_1106d3228,0x18,7);
    *(long *)(puVar8 + 0x10) = param_18;
    uVar7 = 0x103b1159c;
  }
  func_0x000103b108f8(param_3,param_4,param_5,param_6,pcStack_98,puStack_90,lStack_a8,uStack_b0,
                      lStack_b8,uStack_c0,param_10,uVar2,param_11,param_12,param_13,uVar1,param_14,
                      uVar9,param_15,param_16,param_17,uVar7,puVar8);
  return;
}



/* Entry: 103b10e28; end: 103b10e67;  */

undefined8 FUN_103b10e28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103b11040(param_1);
  FUN_103b11308(param_1);
  return uVar1;
}



/* Entry: 103b10e68; end: 103b10e6b; -[SCCalendarCreationPresenterConfig copyWithZone:] */

void FUN_103b10e68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b10e6c; end: 103b10e9f; -[SCCalendarCreationPresenterConfig description] */

void FUN_103b10e6c(void)

{
  undefined1 auStack_c8 [184];
  
  FUN_103b1133c(auStack_c8);
  FUN_103b11308(auStack_c8);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b10ea0; end: 103b10f1b; -[SCCalendarCreationPresenterConfig init] */

void FUN_103b10ea0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCCalendarPresentServices/SCCalendarCreationPresenterConfigWrapper.swift",
                      0x48,2,0x75,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b10ee8);
  (*pcVar1)();
}



/* Entry: 103b10f1c; end: 103b1103f; -[SCCalendarCreationPresenterConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b10f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b10f70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b10f1c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112febe68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112febe70));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112febe80));
  if (*(long *)(param_1 + _DAT_112febe88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112febe88))[1]);
    return;
  }
  return;
}



/* Entry: 103b11040; end: 103b11307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11040(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  uStack_68 = *param_1;
  uStack_70 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112febe68) = uStack_68;
  *(undefined8 *)(unaff_x20 + _DAT_112febe70) = uStack_70;
  uVar3 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112febe78) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112febe80) = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febe88);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uVar7 = param_1[6];
  uVar5 = param_1[9];
  uVar6 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febe90);
  puVar1[1] = param_1[7];
  *puVar1 = uVar7;
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febe98);
  puVar1[1] = uVar5;
  *puVar1 = uVar6;
  uVar6 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febea0);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar6;
  uStack_a8 = param_1[0xc];
  uStack_b0 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + _DAT_112febea8) = uStack_a8;
  *(undefined8 *)(unaff_x20 + _DAT_112febeb0) = uStack_b0;
  uVar6 = param_1[0xe];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febeb8);
  puVar1[1] = param_1[0xf];
  *puVar1 = uVar6;
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uVar6 = param_1[0x10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febec0);
  puVar1[1] = param_1[0x11];
  *puVar1 = uVar6;
  uStack_d8 = param_1[0x12];
  uStack_e0 = param_1[0x13];
  *(undefined8 *)(unaff_x20 + _DAT_112febec8) = uStack_d8;
  *(undefined8 *)(unaff_x20 + _DAT_112febed0) = uStack_e0;
  uStack_e8 = param_1[0x14];
  uVar6 = param_1[0x15];
  *(undefined8 *)(unaff_x20 + _DAT_112febed8) = uStack_e8;
  uVar5 = param_1[0x16];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febee0);
  *puVar1 = uVar6;
  puVar1[1] = uVar5;
  FUN_103b115e8(&uStack_68,auStack_f8,0x112febf10,&UNK_10dc54e38);
  FUN_103b115e8(&uStack_70,auStack_f8,0x112febf10,&UNK_10dc54e38);
  func_0x000107c615f0(uVar3);
  func_0x000100d66ab8(uVar2,uVar4);
  FUN_103b115e8(&uStack_80,auStack_f8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b115e8(&uStack_90,auStack_f8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b115e8(&uStack_a0,auStack_f8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b115e8(&uStack_a8,auStack_f8,0x112dc3de0,&UNK_10d9813c0);
  FUN_103b115e8(&uStack_b0,auStack_f8,0x112dc3de0,&UNK_10d9813c0);
  FUN_103b115e8(&uStack_c0,auStack_f8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b115e8(&uStack_d0,auStack_f8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b115e8(&uStack_d8,auStack_f8,0x112dc3de0,&UNK_10d9813c0);
  FUN_103b115e8(&uStack_e0,auStack_f8,0x112dc3de0,&UNK_10d9813c0);
  FUN_103b115e8(&uStack_e8,auStack_f8,0x112febf18,&UNK_10dc54e40);
  func_0x000100d66ab8(uVar6,uVar5);
  func_0x000107c61154(&stack0xfffffffffffffef8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b11308; end: 103b1133b;  */

undefined8 FUN_103b11308(undefined8 param_1)

{
  (*(code *)(undefined *)0x103b0ecfc)();
  return param_1;
}



/* Entry: 103b1133c; end: 103b1157b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1133c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar23 = *(undefined8 *)(param_2 + _DAT_112febe68);
  uVar18 = *(undefined8 *)(param_2 + _DAT_112febe70);
  uVar15 = *(undefined8 *)(param_2 + _DAT_112febe78);
  uVar19 = *(undefined8 *)(param_2 + _DAT_112febe80);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112febe88);
  uVar8 = ((undefined8 *)(param_2 + _DAT_112febe88))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_112febe90);
  uVar9 = ((undefined8 *)(param_2 + _DAT_112febe90))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_112febe98);
  uVar10 = ((undefined8 *)(param_2 + _DAT_112febe98))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_112febea0);
  uVar11 = ((undefined8 *)(param_2 + _DAT_112febea0))[1];
  uVar21 = *(undefined8 *)(param_2 + _DAT_112febea8);
  uVar22 = *(undefined8 *)(param_2 + _DAT_112febeb0);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112febeb8);
  uVar12 = ((undefined8 *)(param_2 + _DAT_112febeb8))[1];
  uVar16 = *(undefined8 *)(param_2 + _DAT_112febec8);
  uVar17 = *(undefined8 *)(param_2 + _DAT_112febed0);
  uVar20 = *(undefined8 *)(param_2 + _DAT_112febed8);
  uVar6 = *(undefined8 *)(param_2 + _DAT_112febec0);
  uVar13 = ((undefined8 *)(param_2 + _DAT_112febec0))[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_112febee0);
  uVar14 = ((undefined8 *)(param_2 + _DAT_112febee0))[1];
  func_0x000107c61174(uVar18);
  func_0x000107c615f0(uVar19);
  func_0x000107c61174(uVar23);
  func_0x000100d66ab8(uVar1,uVar8);
  func_0x000107c61434(uVar20);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar11);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar22);
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar13);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000100d66ab8(uVar7,uVar14);
  *param_1 = uVar23;
  param_1[1] = uVar18;
  param_1[2] = uVar15;
  param_1[3] = uVar19;
  param_1[4] = uVar1;
  param_1[5] = uVar8;
  param_1[6] = uVar2;
  param_1[7] = uVar9;
  param_1[8] = uVar3;
  param_1[9] = uVar10;
  param_1[10] = uVar4;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar21;
  param_1[0xd] = uVar22;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar12;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar13;
  param_1[0x12] = uVar16;
  param_1[0x13] = uVar17;
  param_1[0x14] = uVar20;
  param_1[0x15] = uVar7;
  param_1[0x16] = uVar14;
  return;
}



/* Entry: 103b1157c; end: 103b115c3;  */

void FUN_103b1157c(void)

{
  func_0x000107c61168(&PTR_PTR_1129291d8);
  return;
}



/* Entry: 103b115c4; end: 103b115e7;  */

void FUN_103b115c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103b115e8; end: 103b1162f;  */

undefined8 FUN_103b115e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103b11630; end: 103b11637;  */

void FUN_103b11630(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b11638; end: 103b11647; -[SCCalendarDetailPresenterConfig currentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febf20));
  return;
}



/* Entry: 103b11648; end: 103b11657; -[SCCalendarDetailPresenterConfig profileUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febf28));
  return;
}



/* Entry: 103b11658; end: 103b11667; -[SCCalendarDetailPresenterConfig source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b11658(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112febf30);
}



/* Entry: 103b11668; end: 103b11687; -[SCCalendarDetailPresenterConfig uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11668(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112febf38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b11688; end: 103b11723; -[SCCalendarDetailPresenterConfig optionalDismissalCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11688(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112febf40);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112febf40))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1106d32e0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 103b11724; end: 103b1172f; -[SCCalendarDetailPresenterConfig eventId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11724(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112febf48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112febf48))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b11730; end: 103b1173f; -[SCCalendarDetailPresenterConfig revisionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b11730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112febf50);
}



/* Entry: 103b11740; end: 103b1174b; -[SCCalendarDetailPresenterConfig eventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11740(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112febf58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112febf58))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b1174c; end: 103b1175b; -[SCCalendarDetailPresenterConfig eventDateTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b1174c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112febf60);
}



/* Entry: 103b1175c; end: 103b11767; -[SCCalendarDetailPresenterConfig tzid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1175c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febf68))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febf68);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b11768; end: 103b11777; -[SCCalendarDetailPresenterConfig isAllDay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b11768(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112febf70);
}



/* Entry: 103b11778; end: 103b11787; -[SCCalendarDetailPresenterConfig durationSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b11778(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112febf78);
}



/* Entry: 103b11788; end: 103b11797; -[SCCalendarDetailPresenterConfig eventTimeHour] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febf80));
  return;
}



/* Entry: 103b11798; end: 103b117a7; -[SCCalendarDetailPresenterConfig eventTimeMinute] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febf88));
  return;
}



/* Entry: 103b117a8; end: 103b117b3; -[SCCalendarDetailPresenterConfig location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b117a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febf90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febf90);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b117b4; end: 103b1180b;  */

void FUN_103b117b4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b1180c; end: 103b1181b; -[SCCalendarDetailPresenterConfig guestsCanInvite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b1180c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112febf98);
}



/* Entry: 103b1181c; end: 103b11827; -[SCCalendarDetailPresenterConfig creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1181c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112febfa0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112febfa0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b11828; end: 103b1186f;  */

void FUN_103b11828(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b11870; end: 103b11c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112febf20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112febf28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112febf30) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112febf38) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf40);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf48);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112febf50) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf58);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112febf60) = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf68);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_112febf70) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112febf78) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112febf80) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112febf88) = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf90);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined1 *)(unaff_x20 + _DAT_112febf98) = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febfa0);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b11c50; end: 103b11dff; -[SCCalendarDetailPresenterConfig initWithCurrentUser:profileUser:source:uiContainer:optionalDismissalCallback:eventId:revisionId:eventName:eventDateTimestamp:tzid:isAllDay:durationSeconds:eventTimeHour:eventTimeMinute:location:guestsCanInvite:creatorId:] */

void FUN_103b11c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined1 param_13)

{
  undefined8 uVar1;
  long in_stack_00000040;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_90;
  undefined *puStack_88;
  
  func_0x000107c60bc4();
  if (param_7 == 0) {
    pcStack_90 = (code *)0x0;
    puStack_88 = (undefined *)0x0;
  }
  else {
    puStack_88 = &UNK_1106d32c8;
    param_2 = 0x18;
    func_0x000107c613fc(&UNK_1106d32c8,0x18,7);
    *(long *)(puStack_88 + 0x10) = param_7;
    pcStack_90 = FUN_103b12494;
  }
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c5faec();
  if (param_12 == 0) {
    uStack_d0 = 0;
    lStack_c8 = 0;
  }
  else {
    uStack_d0 = uVar1;
    func_0x000107c5faec();
    lStack_c8 = param_12;
  }
  if (in_stack_00000040 != 0) {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5faec();
  func_0x000103b11a64(param_3,param_4,param_5,param_6,pcStack_90,puStack_88,param_8,param_2,param_9,
                      param_10,uVar1,param_11,lStack_c8,uStack_d0,param_13);
  return;
}



/* Entry: 103b11e00; end: 103b11e3f;  */

undefined8 FUN_103b11e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103b11fd4(param_1);
  FUN_103b12240(param_1);
  return uVar1;
}



/* Entry: 103b11e40; end: 103b11e43; -[SCCalendarDetailPresenterConfig copyWithZone:] */

void FUN_103b11e40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b11e44; end: 103b11e77; -[SCCalendarDetailPresenterConfig description] */

void FUN_103b11e44(void)

{
  undefined1 auStack_c8 [184];
  
  FUN_103b12274(auStack_c8);
  FUN_103b12240(auStack_c8);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b11e78; end: 103b11ef3; -[SCCalendarDetailPresenterConfig init] */

void FUN_103b11e78(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCCalendarPresentServices/SCCalendarDetailPresenterConfigWrapper.swift",0x46,
                      2,0x70,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b11ec0);
  (*pcVar1)();
}



/* Entry: 103b11ef4; end: 103b11fd3; -[SCCalendarDetailPresenterConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b11f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b11f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b11fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b11f84) */
/* WARNING: Removing unreachable block (ram,0x000103b11f5c) */
/* WARNING: Removing unreachable block (ram,0x000103b11fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11ef4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112febf20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112febf28));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112febf38));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112febf40),
                      ((undefined8 *)(param_1 + _DAT_112febf40))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112febf48 + 8))
  ;
  return;
}



/* Entry: 103b11fd4; end: 103b1223f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b11fd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  uStack_58 = *param_1;
  uStack_60 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112febf20) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_112febf28) = uStack_60;
  uVar3 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112febf30) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112febf38) = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf40);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  uVar5 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf48);
  puVar1[1] = param_1[7];
  *puVar1 = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112febf50) = param_1[8];
  uVar5 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf58);
  puVar1[1] = param_1[10];
  *puVar1 = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112febf60) = param_1[0xb];
  uVar5 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf68);
  puVar1[1] = param_1[0xd];
  *puVar1 = uVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112febf70) = *(undefined1 *)(param_1 + 0xe);
  uStack_98 = param_1[0x10];
  *(undefined8 *)(unaff_x20 + _DAT_112febf78) = param_1[0xf];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_78 = param_1[10];
  uStack_80 = param_1[9];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_112febf80) = uStack_98;
  uStack_a0 = param_1[0x11];
  *(undefined8 *)(unaff_x20 + _DAT_112febf88) = uStack_a0;
  uStack_a8 = param_1[0x13];
  uStack_b0 = param_1[0x12];
  uVar5 = param_1[0x12];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febf90);
  puVar1[1] = param_1[0x13];
  *puVar1 = uVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112febf98) = *(undefined1 *)(param_1 + 0x14);
  uStack_b8 = param_1[0x16];
  uStack_c0 = param_1[0x15];
  uVar5 = param_1[0x15];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febfa0);
  puVar1[1] = param_1[0x16];
  *puVar1 = uVar5;
  FUN_103b124b8(&uStack_58,auStack_d0,0x112febf10,&UNK_10dc54e38);
  FUN_103b124b8(&uStack_60,auStack_d0,0x112febf10,&UNK_10dc54e38);
  func_0x000107c615f0(uVar3);
  func_0x000100b64c10(uVar2,uVar4);
  func_0x000100402194(&uStack_70,auStack_d0);
  func_0x000100402194(&uStack_80,auStack_d0);
  FUN_103b124b8(&uStack_90,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b124b8(&uStack_98,auStack_d0,0x112dc3de0,&UNK_10d9813c0);
  FUN_103b124b8(&uStack_a0,auStack_d0,0x112dc3de0,&UNK_10d9813c0);
  FUN_103b124b8(&uStack_b0,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
  func_0x000100402194(&uStack_c0,auStack_d0);
  func_0x000107c61154(&stack0xffffffffffffff20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b12240; end: 103b12273;  */

undefined8 FUN_103b12240(undefined8 param_1)

{
  (*(code *)(undefined *)0x103b0f3b0)();
  return param_1;
}



/* Entry: 103b12274; end: 103b12473;  */

/* WARNING: Possible PIC construction at 0x000103b12424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b12434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b1244c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b12438) */
/* WARNING: Removing unreachable block (ram,0x000103b12428) */
/* WARNING: Removing unreachable block (ram,0x000103b12450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12274(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar20 = *(undefined8 *)(param_2 + _DAT_112febf20);
  uVar22 = *(undefined8 *)(param_2 + _DAT_112febf28);
  uVar15 = *(undefined8 *)(param_2 + _DAT_112febf30);
  uVar21 = *(undefined8 *)(param_2 + _DAT_112febf38);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112febf40);
  uVar7 = ((undefined8 *)(param_2 + _DAT_112febf40))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_112febf48);
  uVar8 = ((undefined8 *)(param_2 + _DAT_112febf48))[1];
  uVar18 = *(undefined8 *)(param_2 + _DAT_112febf50);
  uVar17 = *(undefined8 *)(param_2 + _DAT_112febf60);
  uVar3 = *(undefined8 *)(param_2 + _DAT_112febf58);
  uVar9 = ((undefined8 *)(param_2 + _DAT_112febf58))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_112febf68);
  uVar10 = ((undefined8 *)(param_2 + _DAT_112febf68))[1];
  uVar13 = *(undefined1 *)(param_2 + _DAT_112febf70);
  uVar16 = *(undefined8 *)(param_2 + _DAT_112febf78);
  uVar19 = *(undefined8 *)(param_2 + _DAT_112febf80);
  uVar23 = *(undefined8 *)(param_2 + _DAT_112febf88);
  uVar14 = *(undefined1 *)(param_2 + _DAT_112febf98);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112febf90);
  uVar11 = ((undefined8 *)(param_2 + _DAT_112febf90))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_112febfa0);
  uVar12 = ((undefined8 *)(param_2 + _DAT_112febfa0))[1];
  func_0x000107c61174(uVar22);
  func_0x000107c615f0(uVar21);
  func_0x000107c61174(uVar20);
  func_0x000100b64c10(uVar1,uVar7);
  *param_1 = uVar20;
  param_1[1] = uVar22;
  param_1[2] = uVar15;
  param_1[3] = uVar21;
  param_1[4] = uVar1;
  param_1[5] = uVar7;
  param_1[6] = uVar2;
  param_1[7] = uVar8;
  param_1[8] = uVar18;
  param_1[9] = uVar3;
  param_1[10] = uVar9;
  param_1[0xb] = uVar17;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar10;
  *(undefined1 *)(param_1 + 0xe) = uVar13;
  param_1[0xf] = uVar16;
  param_1[0x10] = uVar19;
  param_1[0x11] = uVar23;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar11;
  *(undefined1 *)(param_1 + 0x14) = uVar14;
  param_1[0x15] = uVar6;
  param_1[0x16] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103b12474; end: 103b12493;  */

void FUN_103b12474(void)

{
  func_0x000107c61168(&PTR_PTR_112929318);
  return;
}



/* Entry: 103b12494; end: 103b124b7;  */

void FUN_103b12494(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103b124b8; end: 103b124ff;  */

undefined8 FUN_103b124b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103b12500; end: 103b1250f; -[SCCalendarListPresenterConfig listViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febfd0));
  return;
}



/* Entry: 103b12510; end: 103b1251f; -[SCCalendarListPresenterConfig listContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febfd8));
  return;
}



/* Entry: 103b12520; end: 103b1252f; -[SCCalendarListPresenterConfig source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b12520(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112febfe0);
}



/* Entry: 103b12530; end: 103b1254f; -[SCCalendarListPresenterConfig uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12530(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112febfe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b12550; end: 103b125eb; -[SCCalendarListPresenterConfig optionalDismissalCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12550(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112febff0);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112febff0))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1106d3330;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 103b125ec; end: 103b12743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b125ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112febfd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112febfd8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112febfe0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112febfe8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febff0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b12744; end: 103b12843; -[SCCalendarListPresenterConfig initWithListViewModel:listContext:source:uiContainer:optionalDismissalCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  if (param_7 == 0) {
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_1106d3318;
    func_0x000107c613fc(&UNK_1106d3318,0x18,7);
    *(long *)(puVar3 + 0x10) = param_7;
    pcVar4 = FUN_103b129e4;
  }
  *(undefined8 *)(param_1 + _DAT_112febfd0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112febfd8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112febfe0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112febfe8) = param_6;
  puVar1 = (undefined8 *)(param_1 + _DAT_112febff0);
  *puVar1 = pcVar4;
  puVar1[1] = puVar3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 103b12844; end: 103b128cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12844(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112febfd0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112febfd8) = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112febfe0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112febfe8) = uVar2;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112febff0);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b128cc; end: 103b128cf; -[SCCalendarListPresenterConfig copyWithZone:] */

void FUN_103b128cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b128d0; end: 103b128eb; -[SCCalendarListPresenterConfig description] */

void FUN_103b128d0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b128ec; end: 103b12967; -[SCCalendarListPresenterConfig init] */

void FUN_103b128ec(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCCalendarPresentServices/SCCalendarListPresenterConfigWrapper.swift",0x44,2,
                      0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b12934);
  (*pcVar1)();
}



/* Entry: 103b12968; end: 103b129c3; -[SCCalendarListPresenterConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12968(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112febfd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112febfd8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112febfe8));
  if (*(long *)(param_1 + _DAT_112febff0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112febff0))[1]);
    return;
  }
  return;
}



/* Entry: 103b129c4; end: 103b129e3;  */

void FUN_103b129c4(void)

{
  func_0x000107c61168(&PTR_PTR_112929460);
  return;
}



/* Entry: 103b129e4; end: 103b12a0b;  */

void FUN_103b129e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b129ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103b12a0c; end: 103b12a1b; -[MemoriesEngagementLoggingServices memoriesEngagementLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fec028));
  return;
}



/* Entry: 103b12a1c; end: 103b12b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b12a1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fec020) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fec028) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103b12b24; end: 103b12b83; -[MemoriesEngagementLoggingServices init] */

void FUN_103b12b24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesEngagementLoggingServices.MemoriesEngagementLoggingServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b12b50);
  (*pcVar1)();
}



/* Entry: 103b12b84; end: 103b12bbb; -[MemoriesEngagementLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12b84(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fec020));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fec028));
  return;
}



/* Entry: 103b12bbc; end: 103b12bcb; -[_TtC27SCSendToRankingPreloadScope27SCSendToRankingPreloadScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b12bbc(long param_1)

{
  param_1 = param_1 + _DAT_112fec060;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b12bcc; end: 103b12bef;  */

undefined8 FUN_103b12bcc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b12bf0; end: 103b12c03;  */

bool FUN_103b12bf0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b12c04; end: 103b12caf;  */

void FUN_103b12c04(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b12cb0; end: 103b12cd7;  */

void FUN_103b12cb0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b12cd8; end: 103b12d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12cd8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002b9374();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fec070) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b12d40; end: 103b12d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12d40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fec070) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b12d8c; end: 103b12e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b12d8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  func_0x0001002b43d4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112fec060;
  func_0x000107c61614(lVar3 + _DAT_112fec060,0);
  *(long *)(lVar3 + _DAT_112fec058) = param_1;
  func_0x000107c61428(lVar3 + lVar1,auStack_58,1,0);
  func_0x000107c61604(lVar3 + lVar1,param_2);
  plVar4 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  aplStack_80[0] = plVar4;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar4;
}



/* Entry: 103b12e68; end: 103b12ecf; -[_TtC27SCSendToRankingPreloadScope35SCSendToRankingPreloadScopeServices buildWithOrigin:delegate:] */

void FUN_103b12e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_103b12d8c(param_3,param_4);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b12ed0; end: 103b12ed3;  */

void FUN_103b12ed0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b12ed4; end: 103b12f07;  */

void FUN_103b12ed4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b12f08; end: 103b12f1b; -[_TtC27SCSendToRankingPreloadScope35SCSendToRankingPreloadScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b12f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fec070));
  return;
}



/* Entry: 103b12f1c; end: 103b12f5b;  */

void FUN_103b12f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fec078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54ed8;
  func_0x000107c61520(&UNK_10dc54ed8,&UNK_1106d3498);
  puRam0000000112fec078 = puVar1;
  return;
}



/* Entry: 103b12f5c; end: 103b12f8f;  */

undefined1  [16] FUN_103b12f5c(void)

{
  return ZEXT816(0x1106d3498);
}



/* Entry: 103b12f90; end: 103b12fdf;  */

void FUN_103b12f90(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001d;
  func_0x000100bd65fc(0xd00000000000001d,0x800000010f19ef60,0);
  uRam000000011380cd40 = uVar1;
  return;
}


