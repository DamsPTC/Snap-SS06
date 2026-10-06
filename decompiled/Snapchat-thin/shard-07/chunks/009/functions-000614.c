/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b71f18; end: 105b71f5f; -[SCFriendsFeedChatOptionsPresenter didDismissMyFriends] */

void FUN_105b71f18(long param_1)

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



/* Entry: 105b71f60; end: 105b71fb7; -[SCFriendsFeedChatOptionsPresenter clearConversationsScopeWantsDismiss:] */

void FUN_105b71f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b71fb8; end: 105b71fff; -[SCFriendsFeedChatOptionsPresenter clearConversationsScopeDidDismiss:] */

void FUN_105b71fb8(long param_1)

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



/* Entry: 105b72000; end: 105b72047; -[SCFriendsFeedChatOptionsPresenter listsEditWorkflowDidFinish] */

void FUN_105b72000(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b72048; end: 105b7204b; -[SCFriendsFeedChatOptionsPresenter listsEditWorkflowDidDeleteList:] */

void FUN_105b72048(void)

{
  return;
}



/* Entry: 105b7204c; end: 105b7204f; -[SCFriendsFeedChatOptionsPresenter listsEditWorkflowDidUpdateListName:newListName:] */

void FUN_105b7204c(void)

{
  return;
}



/* Entry: 105b72050; end: 105b72173; -[SCFriendsFeedChatOptionsPresenter _presentNewChatsScreenWithCreateButtonExtentionType:preselectedUserIds:] */

void FUN_105b72050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cd80();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b4370;
  _objc_alloc(PTR_PTR_1126b4370);
  puVar4 = PTR_PTR_1126b27d8;
  func_0x00010c0d8660(PTR_PTR_1126b27d8);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c056d00(puVar3,param_2,puVar1,puVar4,param_4,lVar2,0xffffffffffffffff,param_3);
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b72174; end: 105b72267; -[SCFriendsFeedChatOptionsPresenter _presentManageChatsScreen] */

void FUN_105b72174(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar1);
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf23480(lVar1,param_2,lVar3,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 105b72268; end: 105b722fb; -[SCFriendsFeedChatOptionsPresenter _presentMyFriendsScreen] */

void FUN_105b72268(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126ae620;
  _objc_alloc(PTR_PTR_1126ae620);
  func_0x00010c0575e0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b722fc; end: 105b7239f; -[SCFriendsFeedChatOptionsPresenter _presentFriendmojiSettingsScreen] */

void FUN_105b722fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b5580;
  _objc_alloc(PTR_PTR_1126b5580);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b723a0; end: 105b72443; -[SCFriendsFeedChatOptionsPresenter _presentNewShortcutScreen] */

void FUN_105b723a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c27f8;
  _objc_alloc(PTR_PTR_1126c27f8);
  func_0x00010c056840();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b72444; end: 105b724c7; -[SCFriendsFeedChatOptionsPresenter .cxx_destruct] */

void FUN_105b72444(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105b724c8; end: 105b756e3; -[SCFriendsFeedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b724c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined *puVar72;
  undefined *puVar73;
  long lVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  undefined8 uVar81;
  undefined *puVar82;
  undefined *puVar83;
  undefined *puVar84;
  undefined *puVar85;
  undefined *puVar86;
  undefined *puVar87;
  undefined *puVar88;
  undefined *puVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  long lVar150;
  long lVar151;
  long lVar152;
  long lVar153;
  long lVar154;
  long lVar155;
  long lVar156;
  long lVar157;
  long lVar158;
  long lVar159;
  long lVar160;
  long lVar161;
  long lVar162;
  long lVar163;
  long lVar164;
  long lVar165;
  long lVar166;
  long lVar167;
  long lVar168;
  long lVar169;
  long lVar170;
  long lVar171;
  long lVar172;
  long lVar173;
  long lVar174;
  long lVar175;
  long lVar176;
  long lVar177;
  long lVar178;
  long lVar179;
  long lVar180;
  long lVar181;
  long lVar182;
  long lVar183;
  long lVar184;
  long lVar185;
  long lVar186;
  long lVar187;
  long lVar188;
  long lVar189;
  long lVar190;
  long lVar191;
  long lVar192;
  long lVar193;
  long lVar194;
  long lVar195;
  long lVar196;
  long lVar197;
  long lVar198;
  long lVar199;
  long lVar200;
  long lVar201;
  long lVar202;
  long lVar203;
  long lVar204;
  long lVar205;
  long lVar206;
  long lVar207;
  long lVar208;
  long lVar209;
  long lVar210;
  long lVar211;
  long lVar212;
  long lVar213;
  long lVar214;
  long lVar215;
  long lVar216;
  long lVar217;
  long lVar218;
  long lVar219;
  long lVar220;
  long lVar221;
  long lVar222;
  long lVar223;
  long lVar224;
  long lVar225;
  long lVar226;
  long lVar227;
  long lVar228;
  long lVar229;
  long lVar230;
  long lVar231;
  long lVar232;
  long lVar233;
  long lVar234;
  long lVar235;
  long lVar236;
  long lVar237;
  long lVar238;
  long lVar239;
  long lVar240;
  long lVar241;
  long lVar242;
  long lVar243;
  long lVar244;
  long lVar245;
  long lVar246;
  long lVar247;
  long lVar248;
  long lVar249;
  long lVar250;
  long lVar251;
  long lVar252;
  long lVar253;
  long lVar254;
  long lVar255;
  long lVar256;
  long lVar257;
  long lVar258;
  long lVar259;
  long lVar260;
  long lVar261;
  long lVar262;
  long lVar263;
  long lVar264;
  long lVar265;
  long lVar266;
  long lVar267;
  long lVar268;
  long lVar269;
  long lVar270;
  long lVar271;
  long lVar272;
  long lVar273;
  long lVar274;
  long lVar275;
  long lVar276;
  long lVar277;
  long lVar278;
  long lVar279;
  long lVar280;
  long lVar281;
  long lVar282;
  long lVar283;
  undefined1 auStack_2d0 [8];
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined *puStack_278;
  long lStack_270;
  long lStack_268;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = param_1 + _DAT_112730a94;
  _objc_loadWeakRetained(lVar1);
  lVar278 = lVar1;
  func_0x00010bfa2bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3460();
  _objc_release(lVar278);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730a98;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bef8e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar276 = (long)_DAT_112730a9c;
  lVar1 = param_1 + lVar276;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar283 = (long)_DAT_112730aa0;
  lVar1 = param_1 + lVar283;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf1d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730aa4;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730aa8;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730aac;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c069180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar280 = (long)_DAT_112730ab0;
  lVar1 = param_1 + lVar280;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar281 = (long)_DAT_112730ab4;
  lVar1 = param_1 + lVar281;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730ab8;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730abc;
  _objc_loadWeakRetained();
  lVar278 = lVar1;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar278;
  func_0x00010bf669c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730ac0;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730ac4;
  _objc_loadWeakRetained();
  lVar13 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar269 = (long)_DAT_112730ac8;
  lVar1 = param_1 + lVar269;
  _objc_loadWeakRetained();
  lVar14 = lVar1;
  func_0x00010bfa4100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar278 = (long)_DAT_112730acc;
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar15 = lVar1;
  func_0x00010bfb9760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar16 = lVar1;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar278 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar17 = lVar278;
  func_0x00010bfb9740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = (long)_DAT_112730ad0;
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010bfb9ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar19 = lVar1;
  func_0x00010bfb9d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar20 = lVar1;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar21 = lVar1;
  func_0x00010bfb9e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar278 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar22 = lVar278;
  func_0x00010bfb9fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar1 = param_1 + lVar281;
  _objc_loadWeakRetained();
  lVar23 = lVar1;
  func_0x00010bfba0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar269;
  _objc_loadWeakRetained();
  lVar24 = lVar1;
  func_0x00010bfba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730ad4;
  _objc_loadWeakRetained();
  lVar25 = lVar1;
  func_0x00010bfba7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar269 = param_1 + lVar269;
  _objc_loadWeakRetained();
  lVar26 = lVar269;
  func_0x00010bfcc7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar269);
  lVar1 = param_1 + _DAT_112730ad8;
  _objc_loadWeakRetained();
  lVar27 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730adc;
  _objc_loadWeakRetained();
  lVar28 = lVar1;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar280;
  _objc_loadWeakRetained();
  lVar29 = lVar1;
  func_0x00010c0cb6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730ae0;
  _objc_loadWeakRetained();
  lVar30 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730ae4;
  _objc_loadWeakRetained();
  lVar31 = lVar1;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar281;
  _objc_loadWeakRetained();
  lVar32 = lVar1;
  func_0x00010c0d5940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar281;
  _objc_loadWeakRetained();
  lVar33 = lVar1;
  func_0x00010c0d5860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar281;
  _objc_loadWeakRetained();
  lVar34 = lVar1;
  func_0x00010c0d5c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar270 = (long)_DAT_112730ae8;
  lVar1 = param_1 + lVar270;
  _objc_loadWeakRetained();
  lVar35 = lVar1;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar270;
  _objc_loadWeakRetained();
  lVar36 = lVar1;
  func_0x00010bfb4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar270;
  _objc_loadWeakRetained();
  lVar37 = lVar1;
  func_0x00010c2653a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730aec;
  _objc_loadWeakRetained();
  lVar38 = lVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730af0;
  _objc_loadWeakRetained();
  lVar39 = lVar1;
  func_0x00010c11e240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar266 = (long)_DAT_112730af4;
  lVar1 = param_1 + lVar266;
  _objc_loadWeakRetained();
  lVar40 = lVar1;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar283;
  _objc_loadWeakRetained();
  lVar41 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar283;
  _objc_loadWeakRetained();
  lVar42 = lVar1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar283;
  _objc_loadWeakRetained();
  lVar43 = lVar1;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar283;
  _objc_loadWeakRetained();
  lVar44 = lVar1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar270;
  _objc_loadWeakRetained();
  lVar45 = lVar1;
  func_0x00010c24e460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar278 = (long)_DAT_112730af8;
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar46 = lVar1;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar47 = lVar1;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730afc;
  _objc_loadWeakRetained();
  lVar48 = lVar1;
  func_0x00010bfb8c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar278 = param_1 + lVar278;
  _objc_loadWeakRetained();
  lVar49 = lVar278;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar282 = (long)_DAT_112730b00;
  lVar1 = param_1 + lVar282;
  _objc_loadWeakRetained();
  lVar278 = param_1 + _DAT_112730b04;
  _objc_loadWeakRetained();
  lVar50 = lVar278;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b08;
  _objc_loadWeakRetained();
  lVar51 = lVar278;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b0c;
  _objc_loadWeakRetained();
  lVar52 = lVar278;
  func_0x00010c0dcb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b10;
  _objc_loadWeakRetained();
  lVar53 = lVar278;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b14;
  _objc_loadWeakRetained();
  lVar54 = lVar278;
  func_0x00010bf0a280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b18;
  _objc_loadWeakRetained();
  lVar55 = lVar278;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b1c;
  _objc_loadWeakRetained();
  lVar56 = lVar278;
  func_0x00010c252360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b20;
  _objc_loadWeakRetained();
  lVar57 = lVar278;
  func_0x00010c22ac60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar278);
  lVar278 = param_1 + _DAT_112730b24;
  _objc_loadWeakRetained();
  lVar269 = param_1 + _DAT_112730b28;
  _objc_loadWeakRetained();
  lVar268 = param_1 + _DAT_112730b2c;
  _objc_loadWeakRetained();
  lVar58 = lVar268;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b30;
  _objc_loadWeakRetained();
  lVar59 = lVar268;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b34;
  _objc_loadWeakRetained();
  lVar60 = lVar268;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b38;
  _objc_loadWeakRetained();
  lVar61 = lVar268;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b3c;
  _objc_loadWeakRetained();
  lVar62 = lVar268;
  func_0x00010c2814a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar279 = (long)_DAT_112730b40;
  lVar268 = param_1 + lVar279;
  _objc_loadWeakRetained();
  lVar63 = lVar268;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b44;
  _objc_loadWeakRetained();
  lVar64 = lVar268;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b48;
  _objc_loadWeakRetained();
  lVar65 = lVar268;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b4c;
  _objc_loadWeakRetained();
  lVar66 = lVar268;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar283 = param_1 + lVar283;
  _objc_loadWeakRetained();
  lVar67 = lVar283;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar283);
  lVar268 = param_1 + _DAT_112730b50;
  _objc_loadWeakRetained();
  lVar283 = lVar268;
  func_0x00010c08f6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  _objc_initWeak(auStack_80,param_1);
  puVar68 = PTR_PTR_1126ae720;
  puVar87 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105b756e4;
  puStack_90 = &UNK_11084d4a8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar69 = PTR_PTR_1126ae720;
  puStack_d0 = puVar87;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105b75788;
  puStack_b8 = &UNK_11084cac0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar70 = PTR_PTR_1126ae720;
  puStack_f8 = puVar87;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105b75858;
  puStack_e0 = &UNK_11084cac0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar71 = PTR_PTR_1126ae720;
  puStack_120 = puVar87;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x105b75904;
  puStack_108 = &UNK_11084cac0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar72 = PTR_PTR_1126ae720;
  puStack_150 = puVar87;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_105b759b0;
  puStack_138 = &UNK_1108d86f0;
  _objc_copyWeak(auStack_128,auStack_80);
  puStack_130 = puVar68;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar73 = PTR_PTR_1126ae720;
  puStack_188 = puVar87;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x105b75a08;
  puStack_170 = &UNK_1108d8720;
  _objc_copyWeak(auStack_158,auStack_80);
  puStack_168 = puVar68;
  lStack_160 = lVar56;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar268 = 0;
  }
  else {
    lVar268 = param_1 + _DAT_112730d6c;
    _objc_loadWeakRetained();
  }
  lVar74 = lVar268;
  func_0x00010c06a600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  puVar75 = PTR_PTR_1126ae720;
  puStack_1b0 = puVar87;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x105b75a60;
  puStack_198 = &UNK_11087b768;
  _objc_copyWeak(auStack_190,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar76 = PTR_PTR_1126ae720;
  puStack_1d8 = puVar87;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x105b75aa0;
  puStack_1c0 = &UNK_11087b768;
  _objc_copyWeak(auStack_1b8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar77 = PTR_PTR_1126ae720;
  puStack_208 = puVar87;
  uStack_200 = 0xc2000000;
  uStack_1f8 = 0x105b75ae0;
  puStack_1f0 = &UNK_1108d8750;
  _objc_copyWeak(auStack_1e0,auStack_80);
  puStack_1e8 = puVar68;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar271 = (long)_DAT_112730b54;
  lVar268 = param_1 + lVar271;
  _objc_loadWeakRetained();
  lVar78 = lVar268;
  func_0x00010c0940a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + _DAT_112730b58;
  _objc_loadWeakRetained();
  lVar79 = lVar268;
  func_0x00010c094080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar268 = param_1 + lVar271;
  _objc_loadWeakRetained();
  lVar80 = lVar268;
  func_0x00010c0940e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar268);
  lVar271 = param_1 + lVar271;
  _objc_loadWeakRetained();
  lVar268 = lVar271;
  func_0x00010c0940c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar271);
  if (param_1 == 0) {
    uVar81 = 0;
  }
  else {
    uVar81 = *(undefined8 *)(param_1 + _DAT_112730d80);
  }
  _objc_retain();
  puVar82 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_230 = puVar87;
  uStack_228 = 0xc2000000;
  uStack_220 = 0x105b75b38;
  puStack_218 = &UNK_110849680;
  _objc_copyWeak(auStack_210,auStack_80);
  puStack_258 = puVar87;
  uStack_250 = 0xc2000000;
  uStack_248 = 0x105b75b80;
  puStack_240 = &UNK_11084d688;
  _objc_copyWeak(auStack_238,auStack_80);
  func_0x00010c0311a0();
  puVar83 = PTR_PTR_1126ae720;
  puStack_2a0 = puVar87;
  uStack_298 = 0xc2000000;
  pcStack_290 = FUN_105b75bac;
  puStack_288 = &UNK_1108d8780;
  _objc_copyWeak(auStack_260,auStack_80);
  lStack_280 = lVar8;
  puStack_278 = puVar68;
  lStack_270 = lVar29;
  lStack_268 = lVar54;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar84 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar85 = PTR_PTR_1126ae720;
  puStack_2c8 = puVar87;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_105b75c54;
  puStack_2b0 = &UNK_11086fd08;
  _objc_copyWeak(auStack_2a8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar86 = PTR_PTR_1126c2ad0;
  _objc_alloc();
  func_0x00010c0163e0();
  puVar87 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_2d0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar88 = puVar72;
  func_0x00010c269d40(puVar72);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123660();
  _objc_release(puVar88);
  puVar89 = PTR_PTR_1126c2ad8;
  _objc_alloc();
  lVar271 = param_1 + _DAT_112730b5c;
  _objc_loadWeakRetained();
  lVar90 = lVar271;
  func_0x00010c14c300();
  _objc_retainAutoreleasedReturnValue();
  lVar91 = param_1 + _DAT_112730b60;
  _objc_loadWeakRetained();
  lVar92 = lVar91;
  func_0x00010bfa3e40();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = param_1 + _DAT_112730b64;
  _objc_loadWeakRetained();
  lVar94 = lVar93;
  func_0x00010c0ebf20();
  _objc_retainAutoreleasedReturnValue();
  lVar95 = param_1 + _DAT_112730b6c;
  _objc_loadWeakRetained();
  lVar96 = param_1 + _DAT_112730b70;
  _objc_loadWeakRetained();
  lVar97 = lVar96;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar98 = param_1 + lVar280;
  _objc_loadWeakRetained();
  lVar99 = lVar98;
  func_0x00010bf50200();
  _objc_retainAutoreleasedReturnValue();
  lVar100 = param_1 + lVar280;
  _objc_loadWeakRetained();
  lVar101 = lVar100;
  func_0x00010bf3afa0();
  _objc_retainAutoreleasedReturnValue();
  lVar280 = param_1 + lVar280;
  _objc_loadWeakRetained();
  lVar102 = lVar280;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar281 = param_1 + lVar281;
  _objc_loadWeakRetained();
  lVar103 = lVar281;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar104 = param_1 + _DAT_112730b78;
  _objc_loadWeakRetained();
  lVar105 = param_1 + lVar270;
  _objc_loadWeakRetained();
  lVar106 = lVar105;
  func_0x00010bfba000();
  _objc_retainAutoreleasedReturnValue();
  lVar276 = param_1 + lVar276;
  _objc_loadWeakRetained();
  lVar107 = lVar276;
  func_0x00010c0dc260();
  _objc_retainAutoreleasedReturnValue();
  lVar108 = param_1 + _DAT_112730b7c;
  _objc_loadWeakRetained();
  lVar109 = lVar108;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar110 = param_1 + _DAT_112730b88;
  _objc_loadWeakRetained();
  lVar111 = param_1 + _DAT_112730b94;
  _objc_loadWeakRetained();
  lVar112 = param_1 + _DAT_112730b98;
  _objc_loadWeakRetained();
  lVar113 = lVar112;
  func_0x00010c25ac40();
  _objc_retainAutoreleasedReturnValue();
  lVar114 = param_1 + _DAT_112730ba8;
  _objc_loadWeakRetained();
  lVar115 = param_1 + _DAT_112730bac;
  _objc_loadWeakRetained();
  lVar116 = param_1 + _DAT_112730bb0;
  _objc_loadWeakRetained();
  lVar117 = param_1 + _DAT_112730bb4;
  _objc_loadWeakRetained();
  lVar118 = lVar117;
  func_0x00010bfba360();
  _objc_retainAutoreleasedReturnValue();
  lVar119 = lVar118;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar120 = param_1 + _DAT_112730bb8;
  _objc_loadWeakRetained();
  lVar121 = lVar120;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar122 = param_1 + _DAT_112730bbc;
  _objc_loadWeakRetained();
  lVar123 = lVar122;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar124 = param_1 + _DAT_112730bc0;
  _objc_loadWeakRetained();
  lVar125 = lVar124;
  func_0x00010c293ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = param_1 + _DAT_112730bd4;
  _objc_loadWeakRetained();
  lVar127 = param_1 + _DAT_112730be0;
  _objc_loadWeakRetained();
  lVar128 = param_1 + _DAT_112730be4;
  _objc_loadWeakRetained();
  lVar129 = param_1 + _DAT_112730bf4;
  _objc_loadWeakRetained();
  lVar130 = lVar129;
  func_0x00010c1051a0();
  _objc_retainAutoreleasedReturnValue();
  lVar131 = param_1 + _DAT_112730bf8;
  _objc_loadWeakRetained();
  lVar132 = lVar131;
  func_0x00010bfab9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar267 = (long)_DAT_112730bfc;
  lVar133 = param_1 + lVar267;
  _objc_loadWeakRetained();
  lVar134 = lVar133;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar135 = param_1 + _DAT_112730c00;
  _objc_loadWeakRetained();
  lVar136 = lVar135;
  func_0x00010c09baa0();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = param_1 + _DAT_112730c04;
  _objc_loadWeakRetained();
  lVar138 = lVar137;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar139 = param_1 + _DAT_112730c08;
  _objc_loadWeakRetained();
  lVar140 = lVar139;
  func_0x00010bf4a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar141 = param_1 + _DAT_112730c0c;
  _objc_loadWeakRetained();
  lVar142 = lVar141;
  func_0x00010c108640();
  _objc_retainAutoreleasedReturnValue();
  lVar143 = param_1 + _DAT_112730c10;
  _objc_loadWeakRetained();
  lVar144 = param_1 + _DAT_112730c1c;
  _objc_loadWeakRetained();
  lVar145 = param_1 + _DAT_112730c20;
  _objc_loadWeakRetained();
  lVar146 = param_1 + _DAT_112730c24;
  _objc_loadWeakRetained();
  lVar147 = lVar146;
  func_0x00010bef3d60();
  _objc_retainAutoreleasedReturnValue();
  lVar148 = param_1 + _DAT_112730c2c;
  _objc_loadWeakRetained();
  lVar149 = param_1 + _DAT_112730c34;
  _objc_loadWeakRetained();
  lVar150 = param_1 + _DAT_112730c3c;
  _objc_loadWeakRetained();
  lVar151 = param_1 + _DAT_112730c44;
  _objc_loadWeakRetained();
  lVar152 = param_1 + _DAT_112730c54;
  _objc_loadWeakRetained();
  lVar153 = param_1 + _DAT_112730c5c;
  _objc_loadWeakRetained();
  lVar154 = lVar153;
  func_0x00010c127c60();
  _objc_retainAutoreleasedReturnValue();
  lVar282 = param_1 + lVar282;
  _objc_loadWeakRetained();
  lVar155 = lVar282;
  func_0x00010c23f980();
  _objc_retainAutoreleasedReturnValue();
  lVar156 = param_1 + _DAT_112730c60;
  _objc_loadWeakRetained();
  lVar157 = lVar156;
  func_0x00010bf36440();
  _objc_retainAutoreleasedReturnValue();
  lVar158 = param_1 + _DAT_112730c68;
  _objc_loadWeakRetained();
  lVar161 = (long)_DAT_112730c70;
  lVar159 = param_1 + lVar161;
  _objc_loadWeakRetained();
  lVar160 = lVar159;
  func_0x00010c22d820();
  _objc_retainAutoreleasedReturnValue();
  lVar161 = param_1 + lVar161;
  _objc_loadWeakRetained();
  lVar162 = lVar161;
  func_0x00010c22d860();
  _objc_retainAutoreleasedReturnValue();
  lVar163 = param_1 + _DAT_112730c74;
  _objc_loadWeakRetained();
  lVar164 = lVar163;
  func_0x00010bfba2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar165 = param_1 + _DAT_112730c78;
  _objc_loadWeakRetained();
  lVar166 = lVar165;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar167 = param_1 + _DAT_112730c7c;
  _objc_loadWeakRetained();
  lVar168 = param_1 + _DAT_112730c80;
  _objc_loadWeakRetained();
  lVar169 = lVar168;
  func_0x00010bfeab60();
  _objc_retainAutoreleasedReturnValue();
  lVar170 = param_1 + _DAT_112730c84;
  _objc_loadWeakRetained();
  lVar171 = lVar170;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar174 = (long)_DAT_112730c8c;
  lVar172 = param_1 + lVar174;
  _objc_loadWeakRetained();
  lVar173 = lVar172;
  func_0x00010c06a7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar174 = param_1 + lVar174;
  _objc_loadWeakRetained();
  lVar175 = lVar174;
  func_0x00010c06a7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar176 = param_1 + _DAT_112730c90;
  _objc_loadWeakRetained();
  lVar177 = lVar176;
  func_0x00010bf4aa00();
  _objc_retainAutoreleasedReturnValue();
  lVar178 = param_1 + _DAT_112730c94;
  _objc_loadWeakRetained();
  lVar179 = lVar178;
  func_0x00010c22d320();
  _objc_retainAutoreleasedReturnValue();
  lVar265 = param_1 + _DAT_112730c98;
  lVar180 = lVar265;
  _objc_loadWeakRetained();
  lVar181 = lVar180;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  lVar182 = param_1 + lVar279;
  _objc_loadWeakRetained();
  lVar183 = lVar182;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar184 = param_1 + _DAT_112730c9c;
  _objc_loadWeakRetained();
  lVar185 = lVar184;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  lVar266 = param_1 + lVar266;
  _objc_loadWeakRetained();
  lVar186 = lVar266;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar187 = param_1 + _DAT_112730ca0;
  _objc_loadWeakRetained();
  lVar188 = lVar187;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar189 = param_1 + _DAT_112730ca8;
  _objc_loadWeakRetained();
  lVar190 = param_1 + _DAT_112730cb4;
  _objc_loadWeakRetained();
  lVar191 = param_1 + _DAT_112730cb8;
  _objc_loadWeakRetained();
  lVar192 = lVar191;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar193 = param_1 + _DAT_112730cbc;
  _objc_loadWeakRetained();
  lVar194 = param_1 + _DAT_112730cc0;
  _objc_loadWeakRetained();
  lVar195 = lVar194;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar196 = param_1 + _DAT_112730cc4;
  _objc_loadWeakRetained();
  lVar197 = lVar196;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar198 = param_1 + _DAT_112730cc8;
  _objc_loadWeakRetained();
  lVar199 = lVar198;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar200 = param_1 + _DAT_112730cd0;
  _objc_loadWeakRetained();
  lVar201 = lVar200;
  func_0x00010bfba160();
  _objc_retainAutoreleasedReturnValue();
  lVar202 = param_1 + _DAT_112730cd4;
  _objc_loadWeakRetained();
  lVar272 = (long)_DAT_112730cd8;
  lVar203 = param_1 + lVar272;
  _objc_loadWeakRetained();
  lVar204 = lVar203;
  func_0x00010bf37180();
  _objc_retainAutoreleasedReturnValue();
  lVar272 = param_1 + lVar272;
  _objc_loadWeakRetained();
  lVar205 = lVar272;
  func_0x00010c0f7020();
  _objc_retainAutoreleasedReturnValue();
  lVar206 = param_1 + _DAT_112730ce0;
  _objc_loadWeakRetained();
  lVar279 = param_1 + lVar279;
  _objc_loadWeakRetained();
  lVar207 = lVar279;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar273 = (long)_DAT_112730ce4;
  lVar208 = param_1 + lVar273;
  _objc_loadWeakRetained();
  lVar209 = lVar208;
  func_0x00010bfa2520();
  _objc_retainAutoreleasedReturnValue();
  lVar273 = param_1 + lVar273;
  _objc_loadWeakRetained();
  lVar210 = lVar273;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar211 = param_1 + _DAT_112730ce8;
  _objc_loadWeakRetained();
  lVar212 = lVar211;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar213 = param_1 + _DAT_112730cf0;
  _objc_loadWeakRetained();
  lVar214 = lVar213;
  func_0x00010c122860();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = param_1 + _DAT_112730cf4;
  _objc_loadWeakRetained();
  lVar216 = lVar215;
  func_0x00010bf4f920();
  _objc_retainAutoreleasedReturnValue();
  lVar217 = param_1 + _DAT_112730cf8;
  _objc_loadWeakRetained();
  lVar218 = lVar217;
  func_0x00010c0692e0();
  _objc_retainAutoreleasedReturnValue();
  lVar219 = lVar218;
  func_0x00010c069300();
  _objc_retainAutoreleasedReturnValue();
  lVar220 = param_1 + _DAT_112730cfc;
  _objc_loadWeakRetained();
  lVar221 = lVar220;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar222 = param_1 + _DAT_112730d00;
  _objc_loadWeakRetained();
  lVar223 = lVar222;
  func_0x00010c0890a0();
  _objc_retainAutoreleasedReturnValue();
  lVar274 = (long)_DAT_112730d04;
  lVar224 = param_1 + lVar274;
  _objc_loadWeakRetained();
  lVar225 = lVar224;
  func_0x00010c0b8d80();
  _objc_retainAutoreleasedReturnValue();
  lVar277 = (long)_DAT_112730d08;
  lVar226 = param_1 + lVar277;
  _objc_loadWeakRetained();
  lVar227 = lVar226;
  func_0x00010c149aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar277 = param_1 + lVar277;
  _objc_loadWeakRetained();
  lVar228 = lVar277;
  func_0x00010c149b20();
  _objc_retainAutoreleasedReturnValue();
  lVar274 = param_1 + lVar274;
  _objc_loadWeakRetained();
  lVar229 = lVar274;
  func_0x00010c0b8d60();
  _objc_retainAutoreleasedReturnValue();
  lVar230 = param_1 + _DAT_112730d0c;
  _objc_loadWeakRetained();
  lVar231 = lVar230;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar275 = (long)_DAT_112730d10;
  lVar232 = param_1 + lVar275;
  _objc_loadWeakRetained();
  lVar233 = lVar232;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar275 = param_1 + lVar275;
  _objc_loadWeakRetained();
  lVar234 = lVar275;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar235 = param_1 + _DAT_112730d18;
  _objc_loadWeakRetained();
  lVar236 = lVar235;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar237 = param_1 + _DAT_112730d20;
  _objc_loadWeakRetained();
  lVar238 = param_1 + _DAT_112730d7c;
  _objc_loadWeakRetained();
  lVar239 = lVar238;
  func_0x00010c23c800();
  _objc_retainAutoreleasedReturnValue();
  lVar240 = param_1 + _DAT_112730d24;
  _objc_loadWeakRetained();
  lVar241 = param_1 + _DAT_112730d28;
  _objc_loadWeakRetained();
  lVar242 = param_1 + _DAT_112730d2c;
  _objc_loadWeakRetained();
  lVar243 = lVar242;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar244 = param_1 + _DAT_112730d30;
  _objc_loadWeakRetained();
  lVar245 = lVar244;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  lVar267 = param_1 + lVar267;
  _objc_loadWeakRetained();
  lVar246 = lVar267;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar247 = param_1 + _DAT_112730d3c;
  _objc_loadWeakRetained();
  lVar248 = lVar247;
  func_0x00010c258e40();
  _objc_retainAutoreleasedReturnValue();
  lVar249 = param_1 + _DAT_112730d40;
  _objc_loadWeakRetained();
  lVar250 = lVar249;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar251 = lVar269;
  func_0x00010bf12e20();
  _objc_retainAutoreleasedReturnValue();
  lVar252 = param_1 + _DAT_112730d44;
  _objc_loadWeakRetained();
  lVar253 = lVar252;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar254 = param_1 + _DAT_112730d48;
  _objc_loadWeakRetained();
  lVar255 = lVar254;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  lVar256 = param_1 + _DAT_112730d4c;
  _objc_loadWeakRetained();
  lVar257 = param_1 + _DAT_112730d50;
  _objc_loadWeakRetained();
  lVar258 = param_1 + _DAT_112730d54;
  _objc_loadWeakRetained();
  lVar259 = lVar258;
  func_0x00010bfb3ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar260 = param_1 + _DAT_112730d58;
  _objc_loadWeakRetained();
  lVar261 = param_1 + _DAT_112730d5c;
  _objc_loadWeakRetained();
  lVar262 = lVar261;
  func_0x00010c0d0a20();
  _objc_retainAutoreleasedReturnValue();
  lVar263 = param_1 + _DAT_112730d60;
  _objc_loadWeakRetained();
  lVar264 = lVar263;
  func_0x00010c08d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2320();
  _objc_release(lVar264);
  _objc_release(lVar263);
  _objc_release(lVar262);
  _objc_release(lVar261);
  _objc_release(lVar260);
  _objc_release(lVar259);
  _objc_release(lVar258);
  _objc_release(lVar257);
  _objc_release(lVar256);
  _objc_release(lVar255);
  _objc_release(lVar254);
  _objc_release(lVar253);
  _objc_release(lVar252);
  _objc_release(lVar251);
  _objc_release(lVar250);
  _objc_release(lVar249);
  _objc_release(lVar248);
  _objc_release(lVar247);
  _objc_release(lVar246);
  _objc_release(lVar267);
  _objc_release(lVar245);
  _objc_release(lVar244);
  _objc_release(lVar243);
  _objc_release(lVar242);
  _objc_release(lVar241);
  _objc_release(lVar240);
  _objc_release(lVar239);
  _objc_release(lVar238);
  _objc_release(lVar237);
  _objc_release(lVar236);
  _objc_release(lVar235);
  _objc_release(lVar234);
  _objc_release(lVar275);
  _objc_release(lVar233);
  _objc_release(lVar232);
  _objc_release(lVar231);
  _objc_release(lVar230);
  _objc_release(lVar229);
  _objc_release(lVar274);
  _objc_release(lVar228);
  _objc_release(lVar277);
  _objc_release(lVar227);
  _objc_release(lVar226);
  _objc_release(lVar225);
  _objc_release(lVar224);
  _objc_release(lVar223);
  _objc_release(lVar222);
  _objc_release(lVar221);
  _objc_release(lVar220);
  _objc_release(lVar219);
  _objc_release(lVar218);
  _objc_release(lVar217);
  _objc_release(lVar216);
  _objc_release(lVar215);
  _objc_release(lVar214);
  _objc_release(lVar213);
  _objc_release(lVar212);
  _objc_release(lVar211);
  _objc_release(lVar210);
  _objc_release(lVar273);
  _objc_release(lVar209);
  _objc_release(lVar208);
  _objc_release(lVar207);
  _objc_release(lVar279);
  _objc_release(lVar206);
  _objc_release(lVar205);
  _objc_release(lVar272);
  _objc_release(lVar204);
  _objc_release(lVar203);
  _objc_release(lVar202);
  _objc_release(lVar201);
  _objc_release(lVar200);
  _objc_release(lVar199);
  _objc_release(lVar198);
  _objc_release(lVar197);
  _objc_release(lVar196);
  _objc_release(lVar195);
  _objc_release(lVar194);
  _objc_release(lVar193);
  _objc_release(lVar192);
  _objc_release(lVar191);
  _objc_release(lVar190);
  _objc_release(lVar189);
  _objc_release(lVar188);
  _objc_release(lVar187);
  _objc_release(lVar186);
  _objc_release(lVar266);
  _objc_release(lVar185);
  _objc_release(lVar184);
  _objc_release(lVar183);
  _objc_release(lVar182);
  _objc_release(lVar181);
  _objc_release(lVar180);
  _objc_release(lVar179);
  _objc_release(lVar178);
  _objc_release(lVar177);
  _objc_release(lVar176);
  _objc_release(lVar175);
  _objc_release(lVar174);
  _objc_release(lVar173);
  _objc_release(lVar172);
  _objc_release(lVar171);
  _objc_release(lVar170);
  _objc_release(lVar169);
  _objc_release(lVar168);
  _objc_release(lVar167);
  _objc_release(lVar166);
  _objc_release(lVar165);
  _objc_release(lVar164);
  _objc_release(lVar163);
  _objc_release(lVar162);
  _objc_release(lVar161);
  _objc_release(lVar160);
  _objc_release(lVar159);
  _objc_release(lVar158);
  _objc_release(lVar157);
  _objc_release(lVar156);
  _objc_release(lVar155);
  _objc_release(lVar282);
  _objc_release(lVar154);
  _objc_release(lVar153);
  _objc_release(lVar152);
  _objc_release(lVar151);
  _objc_release(lVar150);
  _objc_release(lVar149);
  _objc_release(lVar148);
  _objc_release(lVar147);
  _objc_release(lVar146);
  _objc_release(lVar145);
  _objc_release(lVar144);
  _objc_release(lVar143);
  _objc_release(lVar142);
  _objc_release(lVar141);
  _objc_release(lVar140);
  _objc_release(lVar139);
  _objc_release(lVar138);
  _objc_release(lVar137);
  _objc_release(lVar136);
  _objc_release(lVar135);
  _objc_release(lVar134);
  _objc_release(lVar133);
  _objc_release(lVar132);
  _objc_release(lVar131);
  _objc_release(lVar130);
  _objc_release(lVar129);
  _objc_release(lVar128);
  _objc_release(lVar127);
  _objc_release(lVar126);
  _objc_release(lVar125);
  _objc_release(lVar124);
  _objc_release(lVar123);
  _objc_release(lVar122);
  _objc_release(lVar121);
  _objc_release(lVar120);
  _objc_release(lVar119);
  _objc_release(lVar118);
  _objc_release(lVar117);
  _objc_release(lVar116);
  _objc_release(lVar115);
  _objc_release(lVar114);
  _objc_release(lVar113);
  _objc_release(lVar112);
  _objc_release(lVar111);
  _objc_release(lVar110);
  _objc_release(lVar109);
  _objc_release(lVar108);
  _objc_release(lVar107);
  _objc_release(lVar276);
  _objc_release(lVar106);
  _objc_release(lVar105);
  _objc_release(lVar104);
  _objc_release(lVar103);
  _objc_release(lVar281);
  _objc_release(lVar102);
  _objc_release(lVar280);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar271);
  _objc_loadWeakRetained();
  lVar280 = lVar265;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  puVar88 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(puVar89);
  func_0x00010bfc8740(puVar88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065280(lVar280);
  _objc_release(puVar88);
  _objc_release(lVar280);
  _objc_release(lVar265);
  puVar88 = puVar89;
  func_0x00010bfdf5e0(puVar89);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47060(puVar89);
  _objc_release(puVar88);
  _objc_storeWeak(param_1 + _DAT_112730d64,puVar89);
  param_1 = param_1 + lVar270;
  _objc_loadWeakRetained(param_1);
  lVar280 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar280);
  _objc_release(param_1);
  _objc_release(puVar89);
  _objc_release(puVar87);
  _objc_destroyWeak(auStack_2d0);
  _objc_release(puVar86);
  _objc_release(puVar85);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(puVar84);
  _objc_release(puVar83);
  _objc_destroyWeak(auStack_260);
  _objc_release(puVar82);
  _objc_destroyWeak(auStack_238);
  _objc_destroyWeak(auStack_210);
  _objc_release(uVar81);
  _objc_release(lVar268);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(puVar77);
  _objc_destroyWeak(auStack_1e0);
  _objc_release(puVar76);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(puVar75);
  _objc_destroyWeak(auStack_190);
  _objc_release(lVar74);
  _objc_release(puVar73);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar72);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar71);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar70);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar69);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar68);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar283);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar269);
  _objc_release(lVar278);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar1);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105b756e4; end: 105b75787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b756e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112730b7c;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar2 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb9f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105b75788; end: 105b75833;  */

void FUN_105b75788(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_105b75834();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c262500();
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b75834; end: 105b75857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b75834(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112730d78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b75858; end: 105b759af;  */

void FUN_105b75858(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_105b75834();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c078500();
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b759b0; end: 105b75bab;  */

void FUN_105b759b0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c2ab0;
    _objc_alloc(PTR_PTR_1126c2ab0);
    func_0x00010c018080();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b75bac; end: 105b75c37;  */

void FUN_105b75bac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c2ac8;
    _objc_alloc(PTR_PTR_1126c2ac8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beee460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0420(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b75c38; end: 105b75c53;  */

void FUN_105b75c38(void)

{
  _objc_opt_new(PTR_PTR_1126ba0c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b75c54; end: 105b75ce3;  */

void FUN_105b75c54(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b75ce4; end: 105b75d1f; -[SCFriendsFeedEntryPoint end] */

void FUN_105b75ce4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec140;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b75d20; end: 105b75def; -[SCFriendsFeedEntryPoint _createViewLifecycleEventsPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b75d20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1 + _DAT_112730bb4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bfba360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29d340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126ae820;
  _objc_opt_class(PTR_PTR_1126ae820);
  uVar2 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b75df0; end: 105b75ebf; -[SCFriendsFeedEntryPoint _createFirstRenderHasUnviewedStoriesEventsPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b75df0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1 + _DAT_112730bb4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bfba360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb9e80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126ae820;
  _objc_opt_class(PTR_PTR_1126ae820);
  uVar2 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b75ec0; end: 105b75f1f; -[SCFriendsFeedEntryPoint _attachAlertDialogWithViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b75ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112730d64;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b75f20; end: 105b75f5b; -[SCFriendsFeedEntryPoint _detachAlertDialogWithViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b75f20(long param_1)

{
  param_1 = param_1 + _DAT_112730d64;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b75f5c; end: 105b75fa3; -[SCFriendsFeedEntryPoint _creatorSubscriptionsInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b75f5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112730d68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c260aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b75fa4; end: 105b7693b; -[SCFriendsFeedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b75fa4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112730d60);
  _objc_destroyWeak(param_1 + _DAT_112730d3c);
  _objc_destroyWeak(param_1 + _DAT_112730d44);
  _objc_destroyWeak(param_1 + _DAT_112730b24);
  _objc_destroyWeak(param_1 + _DAT_112730bd4);
  _objc_storeStrong(param_1 + _DAT_112730d38,0);
  _objc_storeStrong(param_1 + _DAT_112730d34,0);
  _objc_storeStrong(param_1 + _DAT_112730d1c,0);
  _objc_destroyWeak(param_1 + _DAT_112730d20);
  _objc_destroyWeak(param_1 + _DAT_112730b88);
  _objc_storeStrong(param_1 + _DAT_112730b84,0);
  _objc_storeStrong(param_1 + _DAT_112730d14,0);
  _objc_storeStrong(param_1 + _DAT_112730cec,0);
  _objc_storeStrong(param_1 + _DAT_112730cdc,0);
  _objc_storeStrong(param_1 + _DAT_112730ccc,0);
  _objc_storeStrong(param_1 + _DAT_112730cac,0);
  _objc_destroyWeak(param_1 + _DAT_112730cbc);
  _objc_destroyWeak(param_1 + _DAT_112730d5c);
  _objc_destroyWeak(param_1 + _DAT_112730ce0);
  _objc_destroyWeak(param_1 + _DAT_112730cb4);
  _objc_storeStrong(param_1 + _DAT_112730cb0,0);
  _objc_destroyWeak(param_1 + _DAT_112730ca8);
  _objc_storeStrong(param_1 + _DAT_112730d80,0);
  _objc_storeStrong(param_1 + _DAT_112730ca4,0);
  _objc_storeStrong(param_1 + _DAT_112730c48,0);
  _objc_storeStrong(param_1 + _DAT_112730c88,0);
  _objc_storeStrong(param_1 + _DAT_112730c64,0);
  _objc_storeStrong(param_1 + _DAT_112730c6c,0);
  _objc_destroyWeak(param_1 + _DAT_112730c68);
  _objc_storeStrong(param_1 + _DAT_112730c4c,0);
  _objc_storeStrong(param_1 + _DAT_112730c50,0);
  _objc_destroyWeak(param_1 + _DAT_112730c54);
  _objc_storeStrong(param_1 + _DAT_112730c14,0);
  _objc_destroyWeak(param_1 + _DAT_112730c10);
  _objc_storeStrong(param_1 + _DAT_112730c58,0);
  _objc_storeStrong(param_1 + _DAT_112730ba4,0);
  _objc_storeStrong(param_1 + _DAT_112730b9c,0);
  _objc_storeStrong(param_1 + _DAT_112730bc8,0);
  _objc_storeStrong(param_1 + _DAT_112730bf0,0);
  _objc_storeStrong(param_1 + _DAT_112730b80,0);
  _objc_storeStrong(param_1 + _DAT_112730bcc,0);
  _objc_storeStrong(param_1 + _DAT_112730bd8,0);
  _objc_storeStrong(param_1 + _DAT_112730bec,0);
  _objc_destroyWeak(param_1 + _DAT_112730b78);
  _objc_storeStrong(param_1 + _DAT_112730b74,0);
  _objc_storeStrong(param_1 + _DAT_112730bc4,0);
  _objc_storeStrong(param_1 + _DAT_112730ba0,0);
  _objc_destroyWeak(param_1 + _DAT_112730c3c);
  _objc_storeStrong(param_1 + _DAT_112730c38,0);
  _objc_destroyWeak(param_1 + _DAT_112730c34);
  _objc_storeStrong(param_1 + _DAT_112730c30,0);
  _objc_destroyWeak(param_1 + _DAT_112730c2c);
  _objc_storeStrong(param_1 + _DAT_112730c28,0);
  _objc_destroyWeak(param_1 + _DAT_112730c44);
  _objc_storeStrong(param_1 + _DAT_112730c40,0);
  _objc_destroyWeak(param_1 + _DAT_112730be0);
  _objc_storeStrong(param_1 + _DAT_112730bdc,0);
  _objc_storeStrong(param_1 + _DAT_112730bd0,0);
  _objc_storeStrong(param_1 + _DAT_112730b68,0);
  _objc_destroyWeak(param_1 + _DAT_112730b6c);
  _objc_destroyWeak(param_1 + _DAT_112730c1c);
  _objc_storeStrong(param_1 + _DAT_112730c18,0);
  _objc_storeStrong(param_1 + _DAT_112730b90,0);
  _objc_storeStrong(param_1 + _DAT_112730b8c,0);
  _objc_storeStrong(param_1 + _DAT_112730be8,0);
  _objc_destroyWeak(param_1 + _DAT_112730be4);
  _objc_destroyWeak(param_1 + _DAT_112730b50);
  _objc_destroyWeak(param_1 + _DAT_112730b4c);
  _objc_destroyWeak(param_1 + _DAT_112730b48);
  _objc_destroyWeak(param_1 + _DAT_112730b44);
  _objc_destroyWeak(param_1 + _DAT_112730b3c);
  _objc_destroyWeak(param_1 + _DAT_112730b38);
  _objc_destroyWeak(param_1 + _DAT_112730b34);
  _objc_destroyWeak(param_1 + _DAT_112730b30);
  _objc_destroyWeak(param_1 + _DAT_112730d50);
  _objc_destroyWeak(param_1 + _DAT_112730d4c);
  _objc_destroyWeak(param_1 + _DAT_112730d30);
  _objc_destroyWeak(param_1 + _DAT_112730d40);
  _objc_destroyWeak(param_1 + _DAT_112730b70);
  _objc_destroyWeak(param_1 + _DAT_112730d24);
  _objc_destroyWeak(param_1 + _DAT_112730d7c);
  _objc_destroyWeak(param_1 + _DAT_112730d58);
  _objc_destroyWeak(param_1 + _DAT_112730b18);
  _objc_destroyWeak(param_1 + _DAT_112730a94);
  _objc_destroyWeak(param_1 + _DAT_112730d00);
  _objc_destroyWeak(param_1 + _DAT_112730cf8);
  _objc_destroyWeak(param_1 + _DAT_112730ce8);
  _objc_destroyWeak(param_1 + _DAT_112730ce4);
  _objc_destroyWeak(param_1 + _DAT_112730cd0);
  _objc_destroyWeak(param_1 + _DAT_112730cb8);
  _objc_destroyWeak(param_1 + _DAT_112730b0c);
  _objc_destroyWeak(param_1 + _DAT_112730bfc);
  _objc_destroyWeak(param_1 + _DAT_112730c7c);
  _objc_destroyWeak(param_1 + _DAT_112730ae0);
  _objc_destroyWeak(param_1 + _DAT_112730d78);
  _objc_destroyWeak(param_1 + _DAT_112730ac8);
  _objc_destroyWeak(param_1 + _DAT_112730c80);
  _objc_destroyWeak(param_1 + _DAT_112730c00);
  _objc_destroyWeak(param_1 + _DAT_112730b14);
  _objc_destroyWeak(param_1 + _DAT_112730bc0);
  _objc_destroyWeak(param_1 + _DAT_112730b08);
  _objc_destroyWeak(param_1 + _DAT_112730c5c);
  _objc_destroyWeak(param_1 + _DAT_112730c74);
  _objc_destroyWeak(param_1 + _DAT_112730c98);
  _objc_destroyWeak(param_1 + _DAT_112730ca0);
  _objc_destroyWeak(param_1 + _DAT_112730c9c);
  _objc_destroyWeak(param_1 + _DAT_112730d74);
  _objc_destroyWeak(param_1 + _DAT_112730b94);
  _objc_destroyWeak(param_1 + _DAT_112730b64);
  _objc_destroyWeak(param_1 + _DAT_112730b60);
  _objc_destroyWeak(param_1 + _DAT_112730d70);
  _objc_destroyWeak(param_1 + _DAT_112730b5c);
  _objc_destroyWeak(param_1 + _DAT_112730cf0);
  _objc_destroyWeak(param_1 + _DAT_112730cf4);
  _objc_destroyWeak(param_1 + _DAT_112730b2c);
  _objc_destroyWeak(param_1 + _DAT_112730b1c);
  _objc_destroyWeak(param_1 + _DAT_112730d2c);
  _objc_destroyWeak(param_1 + _DAT_112730d18);
  _objc_destroyWeak(param_1 + _DAT_112730d0c);
  _objc_destroyWeak(param_1 + _DAT_112730d08);
  _objc_destroyWeak(param_1 + _DAT_112730d04);
  _objc_destroyWeak(param_1 + _DAT_112730cfc);
  _objc_destroyWeak(param_1 + _DAT_112730cd8);
  _objc_destroyWeak(param_1 + _DAT_112730cd4);
  _objc_destroyWeak(param_1 + _DAT_112730b10);
  _objc_destroyWeak(param_1 + _DAT_112730cc8);
  _objc_destroyWeak(param_1 + _DAT_112730cc4);
  _objc_destroyWeak(param_1 + _DAT_112730cc0);
  _objc_destroyWeak(param_1 + _DAT_112730c70);
  _objc_destroyWeak(param_1 + _DAT_112730b40);
  _objc_destroyWeak(param_1 + _DAT_112730bb8);
  _objc_destroyWeak(param_1 + _DAT_112730aec);
  _objc_destroyWeak(param_1 + _DAT_112730b00);
  _objc_destroyWeak(param_1 + _DAT_112730af4);
  _objc_destroyWeak(param_1 + _DAT_112730af8);
  _objc_destroyWeak(param_1 + _DAT_112730afc);
  _objc_destroyWeak(param_1 + _DAT_112730aa0);
  _objc_destroyWeak(param_1 + _DAT_112730c94);
  _objc_destroyWeak(param_1 + _DAT_112730bbc);
  _objc_destroyWeak(param_1 + _DAT_112730adc);
  _objc_destroyWeak(param_1 + _DAT_112730bac);
  _objc_destroyWeak(param_1 + _DAT_112730ab4);
  _objc_destroyWeak(param_1 + _DAT_112730c0c);
  _objc_destroyWeak(param_1 + _DAT_112730ae4);
  _objc_destroyWeak(param_1 + _DAT_112730aac);
  _objc_destroyWeak(param_1 + _DAT_112730ad8);
  _objc_destroyWeak(param_1 + _DAT_112730b7c);
  _objc_destroyWeak(param_1 + _DAT_112730ad4);
  _objc_destroyWeak(param_1 + _DAT_112730ad0);
  _objc_destroyWeak(param_1 + _DAT_112730bb4);
  _objc_destroyWeak(param_1 + _DAT_112730acc);
  _objc_destroyWeak(param_1 + _DAT_112730c90);
  _objc_destroyWeak(param_1 + _DAT_112730d54);
  _objc_destroyWeak(param_1 + _DAT_112730ac4);
  _objc_destroyWeak(param_1 + _DAT_112730abc);
  _objc_destroyWeak(param_1 + _DAT_112730ac0);
  _objc_destroyWeak(param_1 + _DAT_112730c78);
  _objc_destroyWeak(param_1 + _DAT_112730ab0);
  _objc_destroyWeak(param_1 + _DAT_112730b58);
  _objc_destroyWeak(param_1 + _DAT_112730b54);
  _objc_destroyWeak(param_1 + _DAT_112730bf8);
  _objc_destroyWeak(param_1 + _DAT_112730d68);
  _objc_destroyWeak(param_1 + _DAT_112730bf4);
  _objc_destroyWeak(param_1 + _DAT_112730c84);
  _objc_destroyWeak(param_1 + _DAT_112730b28);
  _objc_destroyWeak(param_1 + _DAT_112730c08);
  _objc_destroyWeak(param_1 + _DAT_112730c04);
  _objc_destroyWeak(param_1 + _DAT_112730c20);
  _objc_destroyWeak(param_1 + _DAT_112730aa8);
  _objc_destroyWeak(param_1 + _DAT_112730b98);
  _objc_destroyWeak(param_1 + _DAT_112730c60);
  _objc_destroyWeak(param_1 + _DAT_112730bb0);
  _objc_destroyWeak(param_1 + _DAT_112730b20);
  _objc_destroyWeak(param_1 + _DAT_112730aa4);
  _objc_destroyWeak(param_1 + _DAT_112730ab8);
  _objc_destroyWeak(param_1 + _DAT_112730c24);
  _objc_destroyWeak(param_1 + _DAT_112730a98);
  _objc_destroyWeak(param_1 + _DAT_112730d6c);
  _objc_destroyWeak(param_1 + _DAT_112730d48);
  _objc_destroyWeak(param_1 + _DAT_112730d28);
  _objc_destroyWeak(param_1 + _DAT_112730d10);
  _objc_destroyWeak(param_1 + _DAT_112730af0);
  _objc_destroyWeak(param_1 + _DAT_112730c8c);
  _objc_destroyWeak(param_1 + _DAT_112730ba8);
  _objc_destroyWeak(param_1 + _DAT_112730b04);
  _objc_destroyWeak(param_1 + _DAT_112730a9c);
  _objc_destroyWeak(param_1 + _DAT_112730ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112730d64);
  return;
}



/* Entry: 105b7693c; end: 105b769df; -[SCFriendsFeedPullToRefreshHandler initWithFriendsFeedFetcher:friendsFeedLoadingStatusStream:] */

undefined1 *
FUN_105b7693c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec148;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b769e0; end: 105b76b63; -[SCFriendsFeedPullToRefreshHandler pullToRefreshFuture] */

void FUN_105b769e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286120();
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c09d440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfbc3e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105b76b64; end: 105b76b83;  */

bool FUN_105b76b64(undefined8 param_1,long param_2)

{
  func_0x00010c27c360(param_2);
  return param_2 == 4;
}



/* Entry: 105b76b84; end: 105b76be7;  */

void FUN_105b76b84(long param_1,long param_2)

{
  func_0x00010c09d440();
  if ((1 < param_2 - 2U) && (param_2 != 0)) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b76be8; end: 105b76c53; -[SCFriendsFeedPullToRefreshHandler _didPullToRefreshWithSuccess:] */

void FUN_105b76be8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(lVar2);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_dispose_1125bf4f8);
    return;
  }
  return;
}



/* Entry: 105b76c54; end: 105b76c9b; -[SCFriendsFeedPullToRefreshHandler .cxx_destruct] */

void FUN_105b76c54(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b76c9c; end: 105b76d1f; -[SCFriendsFeedSnapReplayAnimationStateProvider init] */

undefined1 * FUN_105b76c9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec150;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b76d20; end: 105b76d47; -[SCFriendsFeedSnapReplayAnimationStateProvider currentlyReplayingSnapConversationIds] */

void FUN_105b76d20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b76d48; end: 105b76ddb; -[SCFriendsFeedSnapReplayAnimationStateProvider addReplayingSnapConversationIdToCurrentlyReplayingSnaps:] */

void FUN_105b76d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf51e00(uVar3);
    func_0x00010c0d9840(uVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b76ddc; end: 105b76e6f; -[SCFriendsFeedSnapReplayAnimationStateProvider removeReplayingSnapConversationIdFromCurrentlyReplayingSnaps:] */

void FUN_105b76ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf51e00(uVar2);
    func_0x00010c0d9840(uVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b76e70; end: 105b76e9f; -[SCFriendsFeedSnapReplayAnimationStateProvider .cxx_destruct] */

void FUN_105b76e70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105b76ea0; end: 105b76ffb; -[SCFriendsFeedSubstituteAnimationStateProvider initWithFriendsFeedViewLifecycleEvent:] */

undefined8 * FUN_105b76ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ec158;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b76ffc; end: 105b770ab;  */

void FUN_105b76ffc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1560(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b770ac; end: 105b770d7;  */

void FUN_105b770ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b770d8; end: 105b770ff; -[SCFriendsFeedSubstituteAnimationStateProvider displayedSubstituteAnimationIdentifiers] */

void FUN_105b770d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b77100; end: 105b77193; -[SCFriendsFeedSubstituteAnimationStateProvider addIdentifierToDisplayedSubstituteAnimations:] */

void FUN_105b77100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar3);
    func_0x00010c0d9840(uVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b77194; end: 105b7721f; -[SCFriendsFeedSubstituteAnimationStateProvider _clearDisplayedSubstituteAnimationIdentifiers] */

void FUN_105b77194(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _os_unfair_lock_lock(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar3);
    func_0x00010c0d9840(uVar4,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 105b77220; end: 105b7725b; -[SCFriendsFeedSubstituteAnimationStateProvider .cxx_destruct] */

void FUN_105b77220(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105b7725c; end: 105b77377; -[SCPeekAPeekAnimationStateProvider initWithFriendsFeedViewLifecycleListener:friendsFeedGraphene:plusFeatureLogger:] */

undefined1 *
FUN_105b7725c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec160;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7920(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b77378; end: 105b7739f; -[SCPeekAPeekAnimationStateProvider currentlyPeekingFeedIds] */

void FUN_105b77378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b773a0; end: 105b774b7; -[SCPeekAPeekAnimationStateProvider addPeekingFeedId:] */

void FUN_105b773a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar2);
    func_0x00010c0d9840(uVar4,param_2,uVar2);
    _objc_release(uVar2);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      puVar3 = PTR_PTR_1126b2cb0;
      func_0x00010c0f6f40(PTR_PTR_1126b2cb0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a8c40();
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b774b8; end: 105b7754b; -[SCPeekAPeekAnimationStateProvider removePeekingFeedId:] */

void FUN_105b774b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar2);
    func_0x00010c0d9840(uVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b7754c; end: 105b7766b; -[SCPeekAPeekAnimationStateProvider _subscribeToFriendsFeedViewLifecycleEvents:] */

void FUN_105b7754c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c29d340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b7766c; end: 105b776b3;  */

void FUN_105b7766c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be695e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b776b4; end: 105b7779b; -[SCPeekAPeekAnimationStateProvider _onFriendsFeedViewLifecyleEvent:] */

void FUN_105b776b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105b7779c;
  puStack_30 = &UNK_110841f20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105b777ac;
  puStack_58 = &UNK_110841f20;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105b777b8;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105b777c8;
  puStack_a8 = &UNK_110842e18;
  lStack_a0 = param_1;
  lStack_78 = param_1;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0c1560(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b7779c; end: 105b777d3;  */

void FUN_105b7779c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
  return;
}



/* Entry: 105b777d4; end: 105b77827; -[SCPeekAPeekAnimationStateProvider .cxx_destruct] */

void FUN_105b777d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b77828; end: 105b77bab; -[SCFeedTableFooterView initWithUserSession:friendsFeedLoadingStatusStream:findFriendsCTAImageProvider:snapchattersDataTracker:contactPermissionInfoProvider:shouldShowLoadingViewObservable:viewHasAppearedObservable:circumstanceEngine:appStartExperimentReader:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105b77828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126ec168;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112730dcc;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112730dd0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    uVar3 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112730dd4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112730dd8;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112730ddc;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_8;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112730de0;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_9;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112730de4);
    *(undefined **)((long)puVar2 + (long)_DAT_112730de4) = puVar4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112730de8;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112730dec;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_11;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112730df0,param_12);
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010bf1f440();
    if (iVar1 == 0) {
      func_0x00010bec8760(puVar2);
      func_0x00010bec87e0(puVar2);
    }
    else {
      puVar4 = PTR_PTR_1126ae790;
      _objc_alloc();
      func_0x00010c021520();
      lVar5 = (long)_DAT_112730df4;
      uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
      *(undefined **)((long)puVar2 + lVar5) = puVar4;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
      _objc_retain(puVar2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105b77bac; end: 105b77bd3;  */

void FUN_105b77bac(long param_1)

{
  func_0x00010bec8780(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bec87f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__subscribeToViewHasAppearedObser_11258fba0);
  return;
}



/* Entry: 105b77bd4; end: 105b77d57; -[SCFeedTableFooterView _subscribeToUpdateUpsellViewOffMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b77bd4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112730dd8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4a2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bec8760(param_1);
  }
  else {
    lVar1 = lVar2;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112730df8;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf870a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105b77d58; end: 105b77dff;  */

void FUN_105b77d58(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  lVar7 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    uVar3 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    uVar4 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105b77f5c;
    puStack_a8 = &UNK_110854380;
    uStack_98 = (undefined1)uVar4;
    uStack_97 = (undefined1)uVar3;
    lStack_a0 = lVar7;
    func_0x000100162d98("APPSTORE",&puStack_c0);
  }
  _objc_release(lVar7);
  _objc_release(uVar6);
  return;
}



/* Entry: 105b77e00; end: 105b77f5b;  */

void FUN_105b77e00(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105b77f5c;
    puStack_58 = &UNK_110854380;
    uStack_48 = (undefined1)uVar4;
    uStack_47 = (undefined1)uVar2;
    lStack_50 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_70);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105b77f5c; end: 105b77f6f;  */

void FUN_105b77f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateUpsellView_contactPermiss_112596560,
             *(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29));
  return;
}



/* Entry: 105b77f70; end: 105b780b7; -[SCFeedTableFooterView _subscribeToUpdateUpsellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b77f70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112730ddc);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b780b8; end: 105b78197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b780b8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730dd8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcdbe0();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(param_2);
    _objc_opt_class(puVar3);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    uVar1 = param_2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    func_0x00010bee2ee0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b78198; end: 105b782c7; -[SCFeedTableFooterView _subscribeToViewHasAppearedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78198(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112730de0);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b782c8; end: 105b78377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b782c8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    uVar3 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)(param_1 + _DAT_112730dfc) = (char)uVar3;
    func_0x00010bee1620(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b78378; end: 105b783f7; -[SCFeedTableFooterView _updateUpsellView:contactPermissionGranted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78378(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  
  *(byte *)(param_1 + _DAT_112730e00) = param_3;
  lVar1 = param_1 + _DAT_112730df0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c233580();
  _objc_release(lVar1);
  *(byte *)(param_1 + _DAT_112730e04) = (byte)lVar2 & (param_3 ^ 0xff) & (param_4 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubviewsOnIdle_112595f30);
  return;
}



/* Entry: 105b783f8; end: 105b7856b; -[SCFeedTableFooterView _updateSubviewsOnIdle] */

void FUN_105b783f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126b2990;
  func_0x00010bfa42c0(PTR_PTR_1126b2990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uStack_50 = 0;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010c2a14e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b7856c; end: 105b78597;  */

void FUN_105b7856c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78598; end: 105b785c7; -[SCFeedTableFooterView _updateSubviewsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78598(long param_1)

{
  if (*(char *)(param_1 + _DAT_112730dfc) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bee1650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateSubviewsWithShouldShowLoa_112595f38,
               *(undefined1 *)(param_1 + _DAT_112730e00),*(undefined1 *)(param_1 + _DAT_112730e04));
    return;
  }
  return;
}



/* Entry: 105b785c8; end: 105b786f3; -[SCFeedTableFooterView _updateSubviewsWithShouldShowLoadingView:shouldShowUpsellView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b785c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010bee2f00();
  lVar1 = param_1;
  func_0x00010bebbde0();
  if (((int)param_3 == (int)lVar1) &&
     (lVar1 = param_1, func_0x00010bebbe00(), (int)param_4 == (int)lVar1)) {
    return;
  }
  func_0x00010bedae80(param_1,param_2,param_3);
  lVar1 = (long)_DAT_112730e08;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010bfb68e0();
    func_0x00010bc8525c();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
    _CGRectGetHeight();
  }
  func_0x00010bee2f20(param_1,param_2,param_4);
  lVar1 = (long)_DAT_112730e0c;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010bfb68e0();
    func_0x00010bc8525c();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
  }
  func_0x00010bfb68e0(param_1);
  func_0x00010bc850d8();
  func_0x00010c19f0e0(param_1);
  param_1 = param_1 + _DAT_112730df0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b786f4; end: 105b787ab; -[SCFeedTableFooterView _updateLoadingViewIfPossibleWithShouldShowLoadingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b786f4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bebbde0();
  if (param_3 == (int)lVar3) {
    return;
  }
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c2ae0;
    _objc_alloc();
    func_0x00010c0164a0();
    lVar3 = (long)_DAT_112730e08;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
    return;
  }
  lVar3 = (long)_DAT_112730e08;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b787ac; end: 105b788f7; -[SCFeedTableFooterView _updateUpsellViewIfPossibleWithShouldShowUpsellView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b787ac(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bebbe00();
  if (param_3 != (int)lVar1) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be188f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__forceRemovalUpsellView_112563bd8);
      return;
    }
    lVar1 = param_1;
    func_0x00010bdf54c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112730e0c;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112730dd4);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1198a0(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105b788f8; end: 105b7893f;  */

void FUN_105b788f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c19cba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78940; end: 105b78973; -[SCFeedTableFooterView _forceRemovalUpsellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78940(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730e0c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b78974; end: 105b789c3; -[SCFeedTableFooterView _updateUpsellViewElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78974(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112730e0c),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b789c4; end: 105b78a47; -[SCFeedTableFooterView _createUpsellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b789c4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 == 0) {
    _objc_alloc(PTR_PTR_1126c2ae8);
    func_0x00010c04a6c0();
  }
  else {
    puVar2 = PTR_PTR_1126b16b8;
    _objc_alloc(PTR_PTR_1126b16b8);
    func_0x000108c07984(*(undefined8 *)(param_1 + _DAT_112730de8));
    func_0x00010c04a6e0(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b78a48; end: 105b78a57; -[SCFeedTableFooterView shouldShowUpsellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105b78a48(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112730e04);
}



/* Entry: 105b78a58; end: 105b78aa3; -[SCFeedTableFooterView _showingLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105b78a58(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112730e08);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 105b78aa4; end: 105b78aef; -[SCFeedTableFooterView _showingUpsellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105b78aa4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112730e0c);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 105b78af0; end: 105b78b2b; -[SCFeedTableFooterView addContactsButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78af0(long param_1)

{
  param_1 = param_1 + _DAT_112730df0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2389a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78b2c; end: 105b78b67; -[SCFeedTableFooterView openSystemContactTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78b2c(long param_1)

{
  param_1 = param_1 + _DAT_112730df0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e9420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78b68; end: 105b78ba7; -[SCFeedTableFooterView forceLoadMoreConversations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78b68(long param_1)

{
  param_1 = param_1 + _DAT_112730df0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78ba8; end: 105b78bff; -[SCFeedTableFooterView didStartSnapchattersUpdateDataRequest:] */

void FUN_105b78ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105b78c00;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bc6e0(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 105b78c00; end: 105b78ca7;  */

void FUN_105b78c00(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105b78ca8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b78ca8; end: 105b78cd3;  */

void FUN_105b78ca8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78cd4; end: 105b78dab; -[SCFeedTableFooterView didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105b78cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105b78dac;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105b78dac; end: 105b78dd7;  */

void FUN_105b78dac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78dd8; end: 105b78ed7; -[SCFeedTableFooterView didEndSnapchattersContactDataRequest:withResult:] */

void FUN_105b78dd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf0a6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0c0860(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b78ed8; end: 105b78edf;  */

void FUN_105b78ed8(void)

{
  return;
}



/* Entry: 105b78ee0; end: 105b78f6f;  */

void FUN_105b78ee0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105b78f70;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b78f70; end: 105b78f9b;  */

void FUN_105b78f70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b78f9c; end: 105b79093; -[SCFeedTableFooterView setFindFriendsCTABackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b78f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2ae8;
  uVar4 = *(ulong *)(param_1 + _DAT_112730e0c);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105b79094;
    puStack_48 = &UNK_110841f80;
    _objc_retain(uVar4);
    uStack_40 = uVar1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b79094; end: 105b7909f;  */

void FUN_105b79094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBackgroundImage__1126393e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105b790a0; end: 105b790bf; -[SCFeedTableFooterView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b790a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112730df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b790c0; end: 105b790d3; -[SCFeedTableFooterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b790c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112730df0,param_3);
  return;
}



/* Entry: 105b790d4; end: 105b790e3; -[SCFeedTableFooterView loadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b790d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730e08);
}



/* Entry: 105b790e4; end: 105b791df; -[SCFeedTableFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b790e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112730e08,0);
  _objc_destroyWeak(param_1 + _DAT_112730df0);
  _objc_storeStrong(param_1 + _DAT_112730dec,0);
  _objc_storeStrong(param_1 + _DAT_112730de8,0);
  _objc_storeStrong(param_1 + _DAT_112730e0c,0);
  _objc_storeStrong(param_1 + _DAT_112730df8,0);
  _objc_storeStrong(param_1 + _DAT_112730df4,0);
  _objc_storeStrong(param_1 + _DAT_112730de0,0);
  _objc_storeStrong(param_1 + _DAT_112730ddc,0);
  _objc_storeStrong(param_1 + _DAT_112730de4,0);
  _objc_storeStrong(param_1 + _DAT_112730dd8,0);
  _objc_storeStrong(param_1 + _DAT_112730dd4,0);
  _objc_storeStrong(param_1 + _DAT_112730dd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112730dcc,0);
  return;
}



/* Entry: 105b791e0; end: 105b79683; -[SCFriendsFeedTableHeaderRenderer initWithBillboardFeedHeaderPromptScopeExposer:navigationServices:friendsFeedViewController:friendsFeedOperaPresentingViewController:uiContainer:messagingExperimentService:friendsFeedHeaderScopeServices:friendsFeedHeaderScopeExposer:feedInteractionEventPublisher:shortcutEventPublisher:delegate:preferences:storiesEverywhereScopeExposer:storiesEverywhereScopeServices:storiesConfigProvider:loadViewEagerly:friendsFeedReadyLogger:simpleSnapchatExperimentConfigProvider:] */

undefined8 *
FUN_105b791e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126ec170;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1b,param_5);
    _objc_storeWeak(puVar1 + 0x1c,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1a,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    uVar2 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c258380();
    puVar1[0x11] = uVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x91) = param_18;
    _objc_retain(param_20);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_20;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    if (puVar1[0x11] != 0) {
      func_0x00010bec78a0(puVar1);
    }
    func_0x00010be0d380(puVar1);
    func_0x00010be0cb80(puVar1);
    if (puVar1[0x11] != 0) {
      func_0x00010be0d420(puVar1);
    }
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b79684; end: 105b796c3;  */

void FUN_105b79684(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beca3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b796c4; end: 105b796cb; -[SCFriendsFeedTableHeaderRenderer headerView] */

void FUN_105b796c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_target_112678178);
  return;
}


