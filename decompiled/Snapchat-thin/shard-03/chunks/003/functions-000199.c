/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026e844c; end: 1026e846b;  */

void FUN_1026e844c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1026e846c; end: 1026e8493;  */

ulong FUN_1026e846c(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xb000000000000000;
}



/* Entry: 1026e8494; end: 1026e84b3;  */

void FUN_1026e8494(void)

{
  func_0x000107c61168(&PTR_PTR_112eb8558);
  return;
}



/* Entry: 1026e84b4; end: 1026e85cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e84b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb85b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb85b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb85c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb85c8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e85cc; end: 1026e8697; -[_TtC14MapRouterScope11MeTrayRoute initWithSource:sourceSessionID:reactionEmojis:reactionImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e85cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_5 != 0) {
    func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  }
  lVar3 = 0;
  if (param_6 != 0) {
    func_0x000100de1f70();
    func_0x000107c5fc54(param_6,lVar3);
    lVar3 = param_6;
  }
  *(undefined8 *)(param_1 + _DAT_112eb85b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112eb85b8) = param_4;
  *(long *)(param_1 + _DAT_112eb85c0) = param_5;
  *(long *)(param_1 + _DAT_112eb85c8) = lVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 1026e8698; end: 1026e86f7; -[_TtC14MapRouterScope11MeTrayRoute init] */

void FUN_1026e8698(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.MeTrayRoute",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e86c4);
  (*pcVar1)();
}



/* Entry: 1026e86f8; end: 1026e876b; -[_TtC14MapRouterScope11MeTrayRoute .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026e8724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e8728) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e86f8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb85b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb85c0));
  return;
}



/* Entry: 1026e876c; end: 1026e878b;  */

void FUN_1026e876c(void)

{
  func_0x000107c61168(&PTR_PTR_11285b040);
  return;
}



/* Entry: 1026e878c; end: 1026e87ab;  */

void FUN_1026e878c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1026e87ac; end: 1026e87e7;  */

ulong FUN_1026e87ac(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xc000000000000000;
}



/* Entry: 1026e87e8; end: 1026e8823; -[_TtC14MapRouterScope18MusicSettingsRoute init] */

void FUN_1026e87e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e8824; end: 1026e8893;  */

void FUN_1026e8824(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e8894; end: 1026e88cf; -[_TtC14MapRouterScope9PetsRoute init] */

void FUN_1026e8894(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e88d0; end: 1026e8903;  */

void FUN_1026e88d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e8904; end: 1026e892b;  */

ulong FUN_1026e8904(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x5000000000000000;
}



/* Entry: 1026e892c; end: 1026e894b;  */

void FUN_1026e892c(void)

{
  func_0x000107c61168(&PTR_PTR_11285b1c8);
  return;
}



/* Entry: 1026e894c; end: 1026e8c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e894c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb86e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb86e8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb86f0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb86f8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8700);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8708);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8710);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8718);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8720);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8728) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8730) = param_19;
  func_0x000107c61154(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e8c4c; end: 1026e8dfb; -[_TtC14MapRouterScope19PlaceDiscoveryRoute initWithPlaceLocation:placePivotType:pivotName:localizedDisplayName:userID:attributeID:pivotEmojiUnicode:localizedResultsHeader:source:sourceSessionID:footerActionID:] */

void FUN_1026e8c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  func_0x000107c5faec();
  if (param_7 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uVar5 = param_4;
  }
  else {
    uStack_a0 = param_4;
    func_0x000107c5faec();
    uVar5 = uStack_a0;
    uStack_98 = param_7;
  }
  if (param_8 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_b0 = uVar5;
    uStack_a8 = param_8;
  }
  if (param_9 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_c0 = uVar5;
    uStack_b8 = param_9;
  }
  func_0x000107c61174(param_5);
  lVar2 = param_10;
  func_0x000107c61174();
  lVar3 = param_11;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar2 == 0) {
    param_10 = 0;
    uVar1 = 0;
    uVar4 = uVar5;
  }
  else {
    func_0x000107c5faec();
    uVar4 = uVar5;
    func_0x000107c61170(lVar2);
    uVar1 = uVar5;
  }
  if (lVar3 == 0) {
    param_11 = 0;
    uVar6 = 0;
    uVar5 = uVar4;
  }
  else {
    func_0x000107c5faec();
    uVar5 = uVar4;
    func_0x000107c61170(lVar3);
    uVar6 = uVar4;
  }
  uVar4 = param_12;
  func_0x000107c5faec();
  func_0x000107c61170(param_12);
  func_0x0001026e8acc(param_1,param_2,param_5,param_6,param_4,uStack_98,uStack_a0,uStack_a8,
                      uStack_b0,uStack_b8,uStack_c0,param_10,uVar1,param_11,uVar6,uVar4,uVar5,
                      param_13,param_14);
  return;
}



/* Entry: 1026e8dfc; end: 1026e8e5b; -[_TtC14MapRouterScope19PlaceDiscoveryRoute init] */

void FUN_1026e8dfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.PlaceDiscoveryRoute",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e8e28);
  (*pcVar1)();
}



/* Entry: 1026e8e5c; end: 1026e8f5b; -[_TtC14MapRouterScope19PlaceDiscoveryRoute .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026e8e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026e8f14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e8e7c) */
/* WARNING: Removing unreachable block (ram,0x0001026e8f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e8e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb86e8));
  return;
}



/* Entry: 1026e8f5c; end: 1026e8f7b;  */

void FUN_1026e8f5c(void)

{
  func_0x000107c61168(&PTR_PTR_11285b278);
  return;
}



/* Entry: 1026e8f7c; end: 1026e91eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e8f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  
  func_0x000107c610f8();
  uVar2 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8760);
  puVar1[1] = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8768);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8770);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8778);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8780) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8788) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8790);
  *puVar1 = param_9;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8798);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112eb87a0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112eb87a8) = 0;
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e91ec; end: 1026e92c7; -[_TtC14MapRouterScope17PlaceProfileRoute initWithBoundingNE:boundingSW:placeID:source:openSource:sourceType:sourceSessionID:placeLinkButtonData:] */

void FUN_1026e91ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_7);
  if (param_11 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_6;
    func_0x000107c5faec(param_11);
  }
  func_0x000107c61174(param_12);
  func_0x0001026e90b4(param_1,param_2,param_3,param_4,param_7,param_6,param_8,param_9,param_10,
                      param_11,uVar1,param_12);
  return;
}



/* Entry: 1026e92c8; end: 1026e9507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e92c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8778);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8760);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8780) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8788) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8790);
  *puVar1 = param_7;
  *(undefined1 *)(puVar1 + 1) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112eb87a8) = param_9;
  uVar2 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
  uVar3 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8768);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8770);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8798);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb87a0) = 0;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9508; end: 1026e9567; -[_TtC14MapRouterScope17PlaceProfileRoute init] */

void FUN_1026e9508(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.PlaceProfileRoute",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e9534);
  (*pcVar1)();
}



/* Entry: 1026e9568; end: 1026e95ef; -[_TtC14MapRouterScope17PlaceProfileRoute .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026e95ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e95b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9568(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb8778 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb8798 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb87a0));
  return;
}



/* Entry: 1026e95f0; end: 1026e960f;  */

void FUN_1026e95f0(void)

{
  func_0x000107c61168(&PTR_PTR_11285b388);
  return;
}



/* Entry: 1026e9610; end: 1026e96c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9610(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb87d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e96c8; end: 1026e972b; -[_TtC14MapRouterScope20RequestLocationRoute initWithUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e96c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb87d8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e972c; end: 1026e978b; -[_TtC14MapRouterScope20RequestLocationRoute init] */

void FUN_1026e972c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.RequestLocationRoute",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e9758);
  (*pcVar1)();
}



/* Entry: 1026e978c; end: 1026e979f; -[_TtC14MapRouterScope20RequestLocationRoute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e978c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb87d8 + 8))
  ;
  return;
}



/* Entry: 1026e97a0; end: 1026e97db;  */

ulong FUN_1026e97a0(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x2000000000000000;
}



/* Entry: 1026e97dc; end: 1026e9893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e97dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8808);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9894; end: 1026e98f7; -[_TtC14MapRouterScope18ShareLocationRoute initWithUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb8808);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e98f8; end: 1026e9957; -[_TtC14MapRouterScope18ShareLocationRoute init] */

void FUN_1026e98f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.ShareLocationRoute",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e9924);
  (*pcVar1)();
}



/* Entry: 1026e9958; end: 1026e996b; -[_TtC14MapRouterScope18ShareLocationRoute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb8808 + 8))
  ;
  return;
}



/* Entry: 1026e996c; end: 1026e9997;  */

ulong FUN_1026e996c(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x1000000000000004;
}



/* Entry: 1026e9998; end: 1026e99b7;  */

void FUN_1026e9998(void)

{
  func_0x000107c61168(&PTR_PTR_11285b558);
  return;
}



/* Entry: 1026e99b8; end: 1026e9a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e99b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb8838) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9a50; end: 1026e9a9b; -[_TtC14MapRouterScope15SoundTopicRoute initWithTrackID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb8838) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9a9c; end: 1026e9afb; -[_TtC14MapRouterScope15SoundTopicRoute init] */

void FUN_1026e9a9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.SoundTopicRoute",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e9ac8);
  (*pcVar1)();
}



/* Entry: 1026e9afc; end: 1026e9b27;  */

ulong FUN_1026e9afc(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x3000000000000004;
}



/* Entry: 1026e9b28; end: 1026e9b47;  */

void FUN_1026e9b28(void)

{
  func_0x000107c61168(&PTR_PTR_11285b618);
  return;
}



/* Entry: 1026e9b48; end: 1026e9b6f;  */

void FUN_1026e9b48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1026e9b70; end: 1026e9bab;  */

ulong FUN_1026e9b70(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xf000000000000000;
}



/* Entry: 1026e9bac; end: 1026e9be7;  */

void FUN_1026e9bac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1026e9be8; end: 1026e9c0b;  */

void FUN_1026e9be8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026e9c0c; end: 1026e9c37;  */

ulong FUN_1026e9c0c(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xe000000000000004;
}



/* Entry: 1026e9c38; end: 1026e9c57;  */

void FUN_1026e9c38(void)

{
  func_0x000107c61168(&PTR_PTR_112eb8940);
  return;
}



/* Entry: 1026e9c58; end: 1026e9d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb89a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb89a8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9d50; end: 1026e9ddf; -[_TtC14MapRouterScope19SystemSettingsRoute initWithNotificationID:notificationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb89a0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb89a8);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9de0; end: 1026e9e3f; -[_TtC14MapRouterScope19SystemSettingsRoute init] */

void FUN_1026e9de0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.SystemSettingsRoute",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e9e0c);
  (*pcVar1)();
}



/* Entry: 1026e9e40; end: 1026e9e7f; -[_TtC14MapRouterScope19SystemSettingsRoute .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026e9e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e9e64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb89a0 + 8))
  ;
  return;
}



/* Entry: 1026e9e80; end: 1026e9ebb;  */

ulong FUN_1026e9e80(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x8000000000000000;
}



/* Entry: 1026e9ebc; end: 1026e9f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9ebc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb89d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9f74; end: 1026e9fd7; -[_TtC14MapRouterScope21WidgetOnboardingRoute initWithUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e9f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb89d8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e9fd8; end: 1026ea037; -[_TtC14MapRouterScope21WidgetOnboardingRoute init] */

void FUN_1026e9fd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.WidgetOnboardingRoute",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ea004);
  (*pcVar1)();
}



/* Entry: 1026ea038; end: 1026ea04b; -[_TtC14MapRouterScope21WidgetOnboardingRoute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb89d8 + 8))
  ;
  return;
}



/* Entry: 1026ea04c; end: 1026ea077;  */

ulong FUN_1026ea04c(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x2000000000000004;
}



/* Entry: 1026ea078; end: 1026ea097;  */

void FUN_1026ea078(void)

{
  func_0x000107c61168(&PTR_PTR_11285b7a0);
  return;
}



/* Entry: 1026ea098; end: 1026ea187;  */

undefined8 FUN_1026ea098(void)

{
  return 0;
}



/* Entry: 1026ea188; end: 1026ea1a7; -[_TtC25SCMapBitmojiLayerServices25SCMapBitmojiLayerServices bitmojiLayerManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea188(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb8a08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026ea1a8; end: 1026ea1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea1a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb8a08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026ea1f4; end: 1026ea24b; -[_TtC25SCMapBitmojiLayerServices25SCMapBitmojiLayerServices initWithBitmojiLayerManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb8a08) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1026ea24c; end: 1026ea2ab; -[_TtC25SCMapBitmojiLayerServices25SCMapBitmojiLayerServices init] */

void FUN_1026ea24c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapBitmojiLayerServices.SCMapBitmojiLayerServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ea278);
  (*pcVar1)();
}



/* Entry: 1026ea2ac; end: 1026ea2bb; -[_TtC25SCMapBitmojiLayerServices25SCMapBitmojiLayerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea2ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb8a08));
  return;
}



/* Entry: 1026ea2bc; end: 1026ea2db;  */

void FUN_1026ea2bc(void)

{
  func_0x000107c61168(&PTR_PTR_11285b860);
  return;
}



/* Entry: 1026ea2dc; end: 1026ea333;  */

void FUN_1026ea2dc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1026ea42c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1026ea334; end: 1026ea34f;  */

void FUN_1026ea334(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1026ea350; end: 1026ea42b;  */

void FUN_1026ea350(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001026ea44c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1026ea42c; end: 1026ea46f;  */

undefined1  [16] FUN_1026ea42c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xf) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xe < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1026ea470; end: 1026ea4af;  */

void FUN_1026ea470(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf800;
  func_0x000107c61520(&UNK_10dacf800,&UNK_11053c780);
  puRam0000000112eb8a38 = puVar1;
  return;
}



/* Entry: 1026ea4b0; end: 1026ea4b3;  */

void FUN_1026ea4b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf8a0;
  func_0x000107c61520(&UNK_10dacf8a0,&UNK_11053c7a0);
  puRam0000000112eb8a40 = puVar1;
  return;
}



/* Entry: 1026ea4b4; end: 1026ea4f3;  */

void FUN_1026ea4b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf8a0;
  func_0x000107c61520(&UNK_10dacf8a0,&UNK_11053c7a0);
  puRam0000000112eb8a40 = puVar1;
  return;
}



/* Entry: 1026ea4f4; end: 1026ea4f7;  */

void FUN_1026ea4f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf940;
  func_0x000107c61520(&UNK_10dacf940,&UNK_11053c7c0);
  puRam0000000112eb8a48 = puVar1;
  return;
}



/* Entry: 1026ea4f8; end: 1026ea537;  */

void FUN_1026ea4f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf940;
  func_0x000107c61520(&UNK_10dacf940,&UNK_11053c7c0);
  puRam0000000112eb8a48 = puVar1;
  return;
}



/* Entry: 1026ea538; end: 1026ea53b;  */

void FUN_1026ea538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf9e0;
  func_0x000107c61520(&UNK_10dacf9e0,&UNK_11053c7e0);
  puRam0000000112eb8a50 = puVar1;
  return;
}



/* Entry: 1026ea53c; end: 1026ea57b;  */

void FUN_1026ea53c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf9e0;
  func_0x000107c61520(&UNK_10dacf9e0,&UNK_11053c7e0);
  puRam0000000112eb8a50 = puVar1;
  return;
}



/* Entry: 1026ea57c; end: 1026ea57f;  */

void FUN_1026ea57c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacfa80;
  func_0x000107c61520(&UNK_10dacfa80,&UNK_11053c800);
  puRam0000000112eb8a58 = puVar1;
  return;
}



/* Entry: 1026ea580; end: 1026ea5bf;  */

void FUN_1026ea580(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacfa80;
  func_0x000107c61520(&UNK_10dacfa80,&UNK_11053c800);
  puRam0000000112eb8a58 = puVar1;
  return;
}



/* Entry: 1026ea5c0; end: 1026ea673;  */

undefined1  [16] FUN_1026ea5c0(void)

{
  return ZEXT816(0x11053c780);
}



/* Entry: 1026ea674; end: 1026ea683; -[_TtC29SCMapFocusViewLoggingServices29SCMapFocusViewLoggingServices focusViewLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb8a60));
  return;
}



/* Entry: 1026ea684; end: 1026ea6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea684(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb8a60) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026ea6d0; end: 1026ea727; -[_TtC29SCMapFocusViewLoggingServices29SCMapFocusViewLoggingServices initWithFocusViewLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb8a60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1026ea728; end: 1026ea787; -[_TtC29SCMapFocusViewLoggingServices29SCMapFocusViewLoggingServices init] */

void FUN_1026ea728(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapFocusViewLoggingServices.SCMapFocusViewLoggingServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ea754);
  (*pcVar1)();
}



/* Entry: 1026ea788; end: 1026ea797; -[_TtC29SCMapFocusViewLoggingServices29SCMapFocusViewLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ea788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb8a60));
  return;
}



/* Entry: 1026ea798; end: 1026ea7b7;  */

void FUN_1026ea798(void)

{
  func_0x000107c61168(&PTR_PTR_11285b920);
  return;
}



/* Entry: 1026ea7b8; end: 1026eaa77;  */

ulong FUN_1026ea7b8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1026eaa28);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar11;
        func_0x00010111c518(uVar11,param_1);
      }
      uVar1 = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026eaa24);
        (*pcVar3)();
      }
      uVar5 = uVar4;
      func_0x000107c5d0f0();
      if (uVar5 == 1) {
        func_0x000107c6142c(param_1);
        uStack_70 = 0;
        uStack_68 = 0;
        uVar10 = uVar4;
        func_0x000107c40414(uVar4);
        func_0x000107c61180();
        puVar6 = &UNK_11053c900;
        func_0x000107c613fc(&UNK_11053c900,0x18,7);
        *(ulong **)(puVar6 + 0x10) = &uStack_70;
        puVar7 = &UNK_11053c928;
        func_0x000107c613fc(&UNK_11053c928,0x20,7);
        *(code **)(puVar7 + 0x10) = FUN_1026eaa7c;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = (code *)0x1026eaaac;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100de6bdc;
        puStack_88 = &UNK_11053c940;
        puStack_78 = puVar7;
        func_0x000107c60bc4(&puStack_a0);
        func_0x000107c61574(puStack_78);
        pcStack_80 = FUN_1026eaa78;
        puStack_78 = (undefined *)0x0;
        puStack_a0 = puVar2;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_101380a90;
        puStack_88 = &UNK_11053c968;
        func_0x000107c60bc4(&puStack_a0);
        func_0x000107c61574(puStack_78);
        func_0x000107c4c794(uVar10);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(uVar10);
        uVar10 = uStack_70;
        if (uStack_68 != 0) {
          uVar11 = uStack_70 & 0xffffffffffff;
          if ((uStack_68 & 0x2000000000000000) != 0) {
            uVar11 = uStack_68 >> 0x38 & 0xf;
          }
          if (uVar11 != 0) {
            func_0x000107c61434();
            uVar11 = uVar4;
            func_0x000107c4d3e4();
            func_0x000107c61180();
            if (uVar11 == 0) {
              func_0x000107c61170(uVar4);
            }
            else {
              func_0x000107c5faec();
              func_0x000107c61170(uVar11);
              func_0x000107c61170(uVar4);
            }
            uVar11 = uStack_68;
            func_0x000107c61574(puVar6);
            func_0x000107c6142c(uVar11);
            return uVar10;
          }
        }
        func_0x000107c61170(uVar4);
        param_1 = uStack_68;
        func_0x000107c61574(puVar6);
        break;
      }
      func_0x000107c61170(uVar4);
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar10);
  }
  func_0x000107c6142c(param_1);
  return 0;
}



/* Entry: 1026eaa78; end: 1026eaa7b;  */

void FUN_1026eaa78(void)

{
  return;
}



/* Entry: 1026eaa7c; end: 1026eaacb;  */

void FUN_1026eaa7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1026eaacc; end: 1026eaae7;  */

void FUN_1026eaacc(long param_1,long param_2)

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



/* Entry: 1026eaae8; end: 1026eab77;  */

long FUN_1026eaae8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026eab78; end: 1026eabe3;  */

undefined8 * FUN_1026eab78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026eabe4; end: 1026eac27;  */

undefined8 * FUN_1026eabe4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1026eac28; end: 1026eacc7;  */

int FUN_1026eac28(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026eacc8; end: 1026eae5f;  */

long FUN_1026eacc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026eae60; end: 1026eaeab; -[SCMapPetLocation petId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eae60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb8a90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb8a90))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1026eaeac; end: 1026eaec7; -[SCMapPetLocation coordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026eaeac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112eb8a98);
}



/* Entry: 1026eaec8; end: 1026eb043; -[SCMapPetLocation initWithPetId:coordinate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eaec8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112eb8a90);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112eb8a98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026eb044; end: 1026eb047; -[SCMapPetLocation copyWithZone:] */

void FUN_1026eb044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


