/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b3c0e0; end: 103b3c0ff;  */

void FUN_103b3c0e0(void)

{
  func_0x000107c61168(&PTR_PTR_11292cf20);
  return;
}



/* Entry: 103b3c100; end: 103b3c14b; -[SCOpenLensTrigger lensID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed918);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed918))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3c14c; end: 103b3c1a7; -[SCOpenLensTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c14c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fed920))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fed920);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3c1a8; end: 103b3c20f; -[SCOpenLensTrigger launchParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c1a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112fed928);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b3c210; end: 103b3c29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed918);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed920);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fed928) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3c29c; end: 103b3c387; -[SCOpenLensTrigger initWithLensID:friendID:launchParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c29c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec();
  }
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed918);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112fed920);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  *(long *)(param_1 + _DAT_112fed928) = param_5;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3c388; end: 103b3c3e7; -[SCOpenLensTrigger init] */

void FUN_103b3c388(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.OpenLensTrigger",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3c3b4);
  (*pcVar1)();
}



/* Entry: 103b3c3e8; end: 103b3c437; -[SCOpenLensTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3c408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3c40c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed918 + 8))
  ;
  return;
}



/* Entry: 103b3c438; end: 103b3c457;  */

void FUN_103b3c438(void)

{
  func_0x000107c61168(&PTR_PTR_11292cff8);
  return;
}



/* Entry: 103b3c458; end: 103b3c493; -[SCOpenNowPlayingSettingsTrigger init] */

void FUN_103b3c458(undefined8 param_1)

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



/* Entry: 103b3c494; end: 103b3c4e7;  */

void FUN_103b3c494(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3c4e8; end: 103b3c533; -[SCOpenPlaceTrigger placeID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c4e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed980);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed980))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3c534; end: 103b3c547; -[SCOpenPlaceTrigger location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3c534(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed988);
}



/* Entry: 103b3c548; end: 103b3c557; -[SCOpenPlaceTrigger placeData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fed990));
  return;
}



/* Entry: 103b3c558; end: 103b3c5b3; -[SCOpenPlaceTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c558(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fed998))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fed998);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3c5b4; end: 103b3c65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed980);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed988);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed990) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed998);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3c660; end: 103b3c73b; -[SCOpenPlaceTrigger initWithPlaceID:location:placeData:friendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c660(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_7 == 0) {
    param_7 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_4;
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed980);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed988);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_3 + _DAT_112fed990) = param_6;
  plVar2 = (long *)(param_3 + _DAT_112fed998);
  *plVar2 = param_7;
  plVar2[1] = lVar5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_3;
  lStack_58 = lVar4;
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 103b3c73c; end: 103b3c79b; -[SCOpenPlaceTrigger init] */

void FUN_103b3c73c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.OpenPlaceTrigger",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3c768);
  (*pcVar1)();
}



/* Entry: 103b3c79c; end: 103b3c7eb; -[SCOpenPlaceTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3c7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3c7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed980 + 8))
  ;
  return;
}



/* Entry: 103b3c7ec; end: 103b3c80b;  */

void FUN_103b3c7ec(void)

{
  func_0x000107c61168(&PTR_PTR_11292d178);
  return;
}



/* Entry: 103b3c80c; end: 103b3c81b; -[SCOpenSongTrigger trackID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b3c80c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed9c8);
}



/* Entry: 103b3c81c; end: 103b3c867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c81c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fed9c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3c868; end: 103b3c8bb; -[SCOpenSongTrigger initWithTrackID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c868(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112fed9c8) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3c8bc; end: 103b3c93b; -[SCOpenSongTrigger init] */

void FUN_103b3c8bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.OpenSongTrigger",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3c8e8);
  (*pcVar1)();
}



/* Entry: 103b3c93c; end: 103b3c987; -[SCPetTappedTrigger petID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c93c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed9f8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed9f8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3c988; end: 103b3c99b; -[SCPetTappedTrigger coordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3c988(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112feda00);
}



/* Entry: 103b3c99c; end: 103b3ca17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed9f8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feda00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3ca18; end: 103b3ca9b; -[SCPetTappedTrigger initWithPetID:latitude:longitude:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ca18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed9f8);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112feda00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3ca9c; end: 103b3cafb; -[SCPetTappedTrigger init] */

void FUN_103b3ca9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.PetTappedTrigger",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3cac8);
  (*pcVar1)();
}



/* Entry: 103b3cafc; end: 103b3cb0f; -[SCPetTappedTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed9f8 + 8))
  ;
  return;
}



/* Entry: 103b3cb10; end: 103b3cb2f;  */

void FUN_103b3cb10(void)

{
  func_0x000107c61168(&PTR_PTR_11292d310);
  return;
}



/* Entry: 103b3cb30; end: 103b3cb3b; -[SCPlayFriendStoryTrigger placeID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cb30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feda30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feda30))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3cb3c; end: 103b3cb47; -[SCPlayFriendStoryTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cb3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feda38);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feda38))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3cb48; end: 103b3cb8f;  */

void FUN_103b3cb48(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b3cb90; end: 103b3cba3; -[SCPlayFriendStoryTrigger screenLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3cb90(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112feda40);
}



/* Entry: 103b3cba4; end: 103b3cc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feda30);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feda38);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feda40);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3cc40; end: 103b3ccef; -[SCPlayFriendStoryTrigger initWithPlaceID:friendID:screenLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cc40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_4;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112feda30);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112feda38);
  *puVar1 = param_6;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_3 + _DAT_112feda40);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lStack_60 = param_3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3ccf0; end: 103b3cd4f; -[SCPlayFriendStoryTrigger init] */

void FUN_103b3ccf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.PlayFriendStoryTrigger",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3cd1c);
  (*pcVar1)();
}



/* Entry: 103b3cd50; end: 103b3cd8f; -[SCPlayFriendStoryTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3cd70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3cd74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112feda30 + 8))
  ;
  return;
}



/* Entry: 103b3cd90; end: 103b3cdaf;  */

void FUN_103b3cd90(void)

{
  func_0x000107c61168(&PTR_PTR_11292d3d8);
  return;
}



/* Entry: 103b3cdb0; end: 103b3cdc3; -[SCPlayHeatmapStoryTrigger screenLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3cdb0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112feda70);
}



/* Entry: 103b3cdc4; end: 103b3ce6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cdc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feda70);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3ce6c; end: 103b3ceeb; -[SCPlayHeatmapStoryTrigger init] */

void FUN_103b3ce6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.PlayHeatmapStoryTrigger",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3ce98);
  (*pcVar1)();
}



/* Entry: 103b3ceec; end: 103b3cf37; -[SCPlayPOIStoryTrigger poiID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ceec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fedaa0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fedaa0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3cf38; end: 103b3cfab; -[SCPlayPOIStoryTrigger previewManifest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cf38(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fedaa8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112fedaa8);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    func_0x000107c5ee20(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b3cfac; end: 103b3cfbf; -[SCPlayPOIStoryTrigger location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3cfac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fedab0);
}



/* Entry: 103b3cfc0; end: 103b3cfcb; -[SCPlayPOIStoryTrigger placeID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cfc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fedab8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fedab8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3cfcc; end: 103b3cfd7; -[SCPlayPOIStoryTrigger label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cfcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fedac0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fedac0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3cfd8; end: 103b3cfe3; -[SCPlayPOIStoryTrigger kind] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cfd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fedac8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fedac8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3cfe4; end: 103b3cfef; -[SCPlayPOIStoryTrigger thumbnailURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3cfe4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fedad0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fedad0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3cff0; end: 103b3d047;  */

void FUN_103b3cff0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b3d048; end: 103b3d057; -[SCPlayPOIStoryTrigger isCompressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b3d048(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fedad8);
}



/* Entry: 103b3d058; end: 103b3d067; -[SCPlayPOIStoryTrigger placeData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fedae0));
  return;
}



/* Entry: 103b3d068; end: 103b3d2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedaa0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedaa8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedab0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedab8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedac0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedac8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedad0);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_112fedad8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112fedae0) = param_17;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3d2e8; end: 103b3d4bf; -[SCPlayPOIStoryTrigger initWithPoiID:previewManifest:location:placeID:label:kind:thumbnailURL:isCompressed:placeData:] */

void FUN_103b3d2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9,
                  long param_10,undefined1 param_11,undefined4 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  func_0x000107c5faec();
  if (param_6 == 0) {
    uVar4 = param_4;
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_13);
    uStack_a0 = 0xf000000000000000;
    uStack_98 = 0;
  }
  else {
    uStack_a0 = param_4;
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_13);
    lVar9 = param_6;
    func_0x000107c61174(param_6);
    func_0x000107c5ee30();
    uVar4 = uStack_a0;
    func_0x000107c61170(lVar9);
    uStack_98 = param_6;
  }
  if (param_7 == 0) {
    lVar9 = 0;
    uVar1 = 0;
    uVar2 = uVar4;
  }
  else {
    lVar9 = param_7;
    func_0x000107c5faec(param_7);
    uVar2 = uVar4;
    func_0x000107c61170(param_7);
    uVar1 = uVar4;
  }
  if (param_8 == 0) {
    lVar5 = 0;
    uVar4 = 0;
    uVar3 = uVar2;
  }
  else {
    lVar5 = param_8;
    func_0x000107c5faec(param_8);
    uVar3 = uVar2;
    func_0x000107c61170(param_8);
    uVar4 = uVar2;
  }
  if (param_9 == 0) {
    lVar8 = 0;
    uVar2 = 0;
    uVar7 = uVar3;
  }
  else {
    lVar8 = param_9;
    func_0x000107c5faec();
    uVar7 = uVar3;
    func_0x000107c61170(param_9);
    uVar2 = uVar3;
  }
  if (param_10 == 0) {
    lVar6 = 0;
    uVar7 = 0;
  }
  else {
    lVar6 = param_10;
    func_0x000107c5faec();
    func_0x000107c61170(param_10);
  }
  func_0x000103b3d1a8(param_1,param_2,param_5,param_4,uStack_98,uStack_a0,lVar9,uVar1,lVar5,uVar4,
                      lVar8,uVar2,lVar6,uVar7,param_11);
  return;
}



/* Entry: 103b3d4c0; end: 103b3d51f; -[SCPlayPOIStoryTrigger init] */

void FUN_103b3d4c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.PlayPOIStoryTrigger",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3d4ec);
  (*pcVar1)();
}



/* Entry: 103b3d520; end: 103b3d5bf; -[SCPlayPOIStoryTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d520(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fedaa0 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_112fedaa8),
                      ((undefined8 *)(param_1 + _DAT_112fedaa8))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fedab8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fedac0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fedac8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fedad0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fedae0));
  return;
}



/* Entry: 103b3d5c0; end: 103b3d5df;  */

void FUN_103b3d5c0(void)

{
  func_0x000107c61168(&PTR_PTR_11292d568);
  return;
}



/* Entry: 103b3d5e0; end: 103b3d62b; -[SCPlayPlaceStoryTrigger placeID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d5e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fedb10);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fedb10))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3d62c; end: 103b3d63f; -[SCPlayPlaceStoryTrigger screenLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3d62c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fedb18);
}



/* Entry: 103b3d640; end: 103b3d6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedb10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedb18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3d6bc; end: 103b3d73f; -[SCPlayPlaceStoryTrigger initWithPlaceID:screenLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d6bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112fedb10);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fedb18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3d740; end: 103b3d79f; -[SCPlayPlaceStoryTrigger init] */

void FUN_103b3d740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.PlayPlaceStoryTrigger",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3d76c);
  (*pcVar1)();
}



/* Entry: 103b3d7a0; end: 103b3d7b3; -[SCPlayPlaceStoryTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fedb10 + 8))
  ;
  return;
}



/* Entry: 103b3d7b4; end: 103b3d7d3;  */

void FUN_103b3d7b4(void)

{
  func_0x000107c61168(&PTR_PTR_11292d668);
  return;
}



/* Entry: 103b3d7d4; end: 103b3d80f; -[SCRenderedPlacesChangedTrigger init] */

void FUN_103b3d7d4(undefined8 param_1)

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



/* Entry: 103b3d810; end: 103b3d863;  */

void FUN_103b3d810(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3d864; end: 103b3d8af; -[SCRequestRealTimeLocationTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fedb70);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fedb70))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3d8b0; end: 103b3d90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d8b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedb70);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3d90c; end: 103b3d96f; -[SCRequestRealTimeLocationTrigger initWithFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fedb70);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3d970; end: 103b3d9cf; -[SCRequestRealTimeLocationTrigger init] */

void FUN_103b3d970(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.RequestRealTimeLocationTrigger",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3d99c);
  (*pcVar1)();
}



/* Entry: 103b3d9d0; end: 103b3d9e3; -[SCRequestRealTimeLocationTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3d9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fedb70 + 8))
  ;
  return;
}



/* Entry: 103b3d9e4; end: 103b3da03;  */

void FUN_103b3d9e4(void)

{
  func_0x000107c61168(&PTR_PTR_11292d7e0);
  return;
}



/* Entry: 103b3da04; end: 103b3da17; -[SCSelectAddressPinTrigger location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3da04(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fedba0);
}



/* Entry: 103b3da18; end: 103b3da63; -[SCSelectAddressPinTrigger addressString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3da18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fedba8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fedba8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3da64; end: 103b3dadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3da64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedba0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedba8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3dae0; end: 103b3db63; -[SCSelectAddressPinTrigger initWithLocation:addressString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3dae0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112fedba0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fedba8);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3db64; end: 103b3dbc3; -[SCSelectAddressPinTrigger init] */

void FUN_103b3db64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.SelectAddressPinTrigger",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3db90);
  (*pcVar1)();
}



/* Entry: 103b3dbc4; end: 103b3dbd7; -[SCSelectAddressPinTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3dbc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fedba8 + 8))
  ;
  return;
}



/* Entry: 103b3dbd8; end: 103b3dbf7;  */

void FUN_103b3dbd8(void)

{
  func_0x000107c61168(&PTR_PTR_11292d8a0);
  return;
}



/* Entry: 103b3dbf8; end: 103b3dc43; -[SCShareLocationTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3dbf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fedbd8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fedbd8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3dc44; end: 103b3dc9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3dc44(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedbd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3dca0; end: 103b3dd03; -[SCShareLocationTrigger initWithFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3dca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fedbd8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3dd04; end: 103b3dd63; -[SCShareLocationTrigger init] */

void FUN_103b3dd04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.ShareLocationTrigger",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3dd30);
  (*pcVar1)();
}



/* Entry: 103b3dd64; end: 103b3dd77; -[SCShareLocationTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3dd64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fedbd8 + 8))
  ;
  return;
}



/* Entry: 103b3dd78; end: 103b3dd97;  */

void FUN_103b3dd78(void)

{
  func_0x000107c61168(&PTR_PTR_11292d968);
  return;
}



/* Entry: 103b3dd98; end: 103b3ddd3; -[SCShowHomeWorkOnboardingTrigger init] */

void FUN_103b3dd98(undefined8 param_1)

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



/* Entry: 103b3ddd4; end: 103b3de27;  */

void FUN_103b3ddd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3de28; end: 103b3de63; -[SCShowInferredSchoolOnboardingTrigger init] */

void FUN_103b3de28(undefined8 param_1)

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



/* Entry: 103b3de64; end: 103b3deb7;  */

void FUN_103b3de64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3deb8; end: 103b3dec7; -[SCUpdateHomeModelTrigger scaling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b3deb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fedc58);
}



/* Entry: 103b3dec8; end: 103b3ded7; -[SCUpdateHomeModelTrigger angle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b3dec8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fedc60);
}



/* Entry: 103b3ded8; end: 103b3df33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ded8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fedc58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fedc60) = param_2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3df34; end: 103b3df97; -[SCUpdateHomeModelTrigger initWithScaling:angle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3df34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  func_0x000107c614f0();
  *(undefined8 *)(param_3 + _DAT_112fedc58) = param_1;
  *(undefined8 *)(param_3 + _DAT_112fedc60) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3df98; end: 103b3e017; -[SCUpdateHomeModelTrigger init] */

void FUN_103b3df98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.UpdateHomeModelTrigger",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3dfc4);
  (*pcVar1)();
}



/* Entry: 103b3e018; end: 103b3e053; -[SCWeatherEffectStartedTrigger init] */

void FUN_103b3e018(undefined8 param_1)

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



/* Entry: 103b3e054; end: 103b3e0a7;  */

void FUN_103b3e054(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3e0a8; end: 103b3e0e3; -[SCWeatherEffectStoppedTrigger init] */

void FUN_103b3e0a8(undefined8 param_1)

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



/* Entry: 103b3e0e4; end: 103b3e137;  */

void FUN_103b3e0e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3e138; end: 103b3e173; -[SCWidgetCalloutSeenTrigger init] */

void FUN_103b3e138(undefined8 param_1)

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


