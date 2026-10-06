/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044e50a8; end: 1044e50f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e50a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e50f8; end: 1044e55ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e50f8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined *param_10,code *param_11,undefined4 param_12,undefined4 param_13,
                  code *param_14,undefined4 param_15,undefined4 param_16,code *param_17,
                  undefined4 param_18,undefined4 param_19,code *param_20,undefined4 param_21,
                  undefined4 param_22,code *param_23,undefined4 param_24,undefined4 param_25,
                  code *param_26,undefined4 param_27,undefined4 param_28,code *param_29,
                  undefined4 param_30,undefined4 param_31,code *param_32,undefined4 param_33,
                  undefined4 param_34,code *param_35,undefined4 param_36,undefined4 param_37,
                  code *param_38,undefined4 param_39,undefined4 param_40,code *param_41,
                  undefined4 param_42,undefined4 param_43,code *param_44,undefined4 param_45,
                  undefined4 param_46,code *param_47,undefined4 param_48,undefined4 param_49,
                  code *param_50,undefined4 param_51,undefined4 param_52,code *param_53,
                  undefined4 param_54,undefined4 param_55,code *param_56,undefined4 param_57,
                  undefined4 param_58,code *param_59,undefined4 param_60,undefined4 param_61,
                  code *param_62,code *param_63,code *param_64,code *param_65,code *param_66,
                  code *param_67,code *param_68,undefined8 param_69,code *param_70,
                  undefined8 param_71,code *param_72,undefined8 param_73,code *param_74,
                  undefined8 param_75,code *param_76,undefined8 param_77,code *param_78,
                  undefined8 param_79,code *param_80,undefined8 param_81,code *param_82,
                  undefined8 param_83,code *param_84,undefined8 param_85,code *param_86,
                  undefined8 param_87)

{
  undefined *puVar1;
  long unaff_x20;
  code *in_stack_000001f0;
  code *in_stack_00000200;
  code *in_stack_00000210;
  code *in_stack_00000220;
  code *in_stack_00000230;
  code *in_stack_00000240;
  code *in_stack_00000250;
  code *in_stack_00000260;
  code *in_stack_00000270;
  code *in_stack_00000280;
  code *in_stack_00000290;
  code *in_stack_000002a0;
  code *in_stack_000002b0;
  code *in_stack_000002c0;
  code *in_stack_000002d0;
  code *in_stack_000002e0;
  code *in_stack_000002f0;
  code *in_stack_00000300;
  code *in_stack_00000310;
  code *in_stack_00000320;
  code *in_stack_00000330;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10dd0cfc0;
  uStack_a0 = param_4;
  pcStack_98 = param_3;
  uStack_90 = param_6;
  pcStack_88 = param_5;
  uStack_80 = param_8;
  pcStack_78 = param_7;
  switch(*(undefined1 *)(unaff_x20 + _DAT_113080fa0)) {
  default:
    param_23 = param_1;
  case 0xbc:
  case 0xca:
    break;
  case 1:
    param_23 = param_3;
  case 0x3d:
    break;
  case 2:
    param_23 = param_5;
  case 0x3f:
    break;
  case 3:
  case 0x49:
    param_23 = param_7;
    break;
  case 4:
  case 0x44:
    (*param_9)();
    return;
  case 5:
  case 0xd1:
  case 0x42:
    (*param_11)();
    return;
  case 6:
  case 0x84:
  case 0x65:
    (*param_14)();
    return;
  case 7:
  case 0x61:
    (*param_17)();
    return;
  case 8:
  case 0x62:
    (*param_20)();
    return;
  case 9:
  case 0x3a:
    break;
  case 10:
  case 0x5f:
    (*param_26)();
    return;
  case 0xb:
  case 0x69:
    (*param_29)();
    return;
  case 0xc:
  case 0x51:
    (*param_32)();
    return;
  case 0xd:
  case 0x56:
  case 0xd4:
    (*param_35)();
    return;
  case 0xe:
  case 0x59:
    (*param_38)();
    return;
  case 0xf:
  case 0x57:
    (*param_41)();
    return;
  case 0x10:
  case 0x48:
    param_23 = param_44;
  case 100:
    break;
  case 0x11:
  case 0x76:
  case 0x96:
  case 0xe8:
  case 0xf0:
  case 0xf8:
    param_23 = param_47;
  case 0x45:
    break;
  case 0x12:
  case 0x4e:
  case 0x70:
  case 0x90:
    param_23 = param_50;
  case 0x79:
  case 0x80:
  case 0x99:
  case 0xa0:
  case 0xa4:
    break;
  case 0x13:
  case 0x6e:
    param_23 = param_53;
  case 0x71:
  case 0x75:
  case 0x7a:
  case 0x7f:
  case 0x82:
  case 0x91:
  case 0x95:
  case 0x9a:
  case 0x9f:
  case 0xa2:
  case 0xaa:
  case 0xac:
    break;
  case 0x14:
    param_23 = param_56;
  case 0x4a:
    break;
  case 0x15:
  case 0x40:
    param_23 = param_59;
    break;
  case 0x16:
  case 0x5e:
    param_23 = param_62;
    break;
  case 0x17:
  case 0x6c:
    param_23 = param_64;
  case 0x78:
  case 0x7d:
  case 0x98:
  case 0x9d:
    break;
  case 0x18:
    param_23 = param_66;
  case 0x3b:
    break;
  case 0x19:
    param_23 = param_68;
  case 0x47:
    break;
  case 0x1a:
  case 0x77:
  case 0x81:
  case 0x97:
  case 0xa1:
  case 0xa9:
    param_23 = param_70;
    break;
  case 0x1b:
  case 0x53:
    param_23 = param_72;
    break;
  case 0x1c:
  case 0x66:
  case 0x86:
    param_23 = param_74;
    break;
  case 0x1d:
  case 0x6b:
    param_23 = param_76;
  case 0x38:
  case 0x72:
  case 0x92:
    break;
  case 0x1e:
  case 0x4f:
    param_23 = param_78;
    break;
  case 0x1f:
    param_23 = param_80;
  case 0x4d:
    break;
  case 0x20:
  case 0x54:
    param_23 = param_82;
    break;
  case 0x21:
  case 0x68:
  case 0xb1:
  case 0xd9:
    param_23 = param_84;
    break;
  case 0x22:
  case 0x5a:
    param_23 = param_86;
    break;
  case 0x23:
  case 0x5b:
    param_23 = in_stack_000001f0;
    break;
  case 0x24:
  case 0x5c:
    param_23 = in_stack_00000200;
    break;
  case 0x25:
  case 0x5d:
    param_23 = in_stack_00000210;
    break;
  case 0x26:
    param_23 = in_stack_00000220;
  case 0x73:
  case 0x93:
    break;
  case 0x27:
  case 0x52:
  case 0x85:
  case 0xa6:
    param_23 = in_stack_00000230;
  case 0x7e:
  case 0x83:
  case 0x87:
  case 0x9e:
  case 0xa3:
    break;
  case 0x28:
  case 0x41:
    param_23 = in_stack_00000240;
    break;
  case 0x29:
    param_23 = in_stack_00000250;
  case 0x3e:
    break;
  case 0x2a:
  case 0x6f:
    param_23 = in_stack_00000260;
    break;
  case 0x2b:
  case 99:
    param_23 = in_stack_00000270;
  case 0xd3:
    break;
  case 0x2c:
    param_23 = in_stack_00000280;
  case 0x46:
    break;
  case 0x2d:
  case 0x55:
    param_23 = in_stack_00000290;
    break;
  case 0x2e:
  case 0xa8:
    param_23 = in_stack_000002a0;
    break;
  case 0x2f:
  case 0x67:
  case 0xad:
  case 0xc1:
  case 0xd5:
  case 0xe9:
  case 0xf1:
  case 0xf9:
    param_23 = in_stack_000002b0;
    break;
  case 0x30:
  case 0x43:
    param_23 = in_stack_000002c0;
    break;
  case 0x31:
  case 0x60:
    param_23 = in_stack_000002d0;
    break;
  case 0x32:
  case 0x6a:
  case 0xaf:
  case 0xc3:
  case 0xd7:
  case 0xeb:
  case 0xf3:
  case 0xfb:
    param_23 = in_stack_000002e0;
  case 0xba:
  case 0xe2:
  case 0xe4:
    break;
  case 0x33:
    param_23 = in_stack_000002f0;
    break;
  case 0x34:
    param_23 = in_stack_00000300;
    break;
  case 0x35:
  case 0x6d:
    param_23 = in_stack_00000310;
    break;
  case 0x36:
  case 0x7b:
  case 0x9b:
    param_23 = in_stack_00000320;
    break;
  case 0x37:
  case 0x74:
  case 0x94:
  case 0xa7:
  case 0xa5:
    param_23 = in_stack_00000330;
  case 0x7c:
  case 0x9c:
    break;
  case 0x3c:
    return;
  case 0x4b:
    return;
  case 0x4c:
    return;
  case 0x50:
    return;
  case 0x58:
    return;
  case 0xc0:
    return;
  case 0xc5:
  case 0xc6:
  case 0xf5:
  case 0xf6:
  case 0xfd:
  case 0xfe:
    goto code_r0x0001044e55d0;
  case 0xd2:
  case 0xfc:
  case 0xb0:
  case 0xae:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xf2:
  case 0xfa:
  case 0xb2:
  case 0xda:
  case 0xee:
  case 0xed:
  case 0xd0:
    param_84 = param_62;
    param_80 = param_63;
    param_76 = param_64;
    param_72 = param_65;
    param_68 = param_66;
  case 0xc4:
    param_64 = param_67;
  case 0xec:
    _objc_retain();
    param_10 = puVar1;
  case 199:
  case 0xf7:
  case 0xff:
    puStack_68 = &param_62;
    uStack_70 = 0x1044e60b0;
    pcStack_78 = (code *)&param_66;
    uStack_80 = 0x1044e60ac;
    pcStack_88 = (code *)&param_70;
    uStack_90 = 0x1044e60a8;
    pcStack_98 = (code *)&param_74;
    uStack_a0 = 0x1044e60a4;
    FUN_1044e50f8(0x1044e5fec,&stack0xffffffffffffffc0,0x1044e5ff8,&stack0xffffffffffffffa0,
                  0x1044e5ffc,&uStack_80,0x1044e6000,&uStack_a0);
    _objc_release(param_10);
    return;
  case 0xd8:
  case 0xf4:
    break;
  }
  (*param_23)();
code_r0x0001044e55d0:
  return;
}



/* Entry: 1044e55f0; end: 1044e5b87; -[SCRemoteApiServiceSpec matchLensTappableQuestion:publicIlc:publicLiveCameraNativeCaption:publicDreams2P:publicPromptLenses:memoriesPicker:dualCameraStream:friendsList:snapPlus:exclusiveLensUpsell:cameraCapability:dreams:aiLensFeedback:promptLenses:inLensCreation:mediaShuffler:previewStickerConfig:liveCameraNativeCaption:automationFramework:previewSaveAsset:previewGenAiMode:mySelfieOnboarding:contentReadiness:bitmojiAvatarBuilder:ctStickerSearch:turnByTurnPromptLenses:turnBasedV2:cameos:getUserMySelfie:tappableLink:aiLensInfo:preGenAssets:bitmojiFashion:dailyGames:myAiInteractiveLensApi:aiGenerationLogger:skipVideoRecording:minerva:minervaDreams:minervaCommunityDreams:minervaTwoPersonDreams:minervaTwoPersonCommunity:minervaDreamsOpenPrompt:minervaVideoDreams:minervaVideoGenOpenPrompt:minervaExclusiveSync:minervaCommunityVideoToVideo:minervaImageQnA:minervaFriendSelection:minervaMentions:minervaAsyncDreamsOpenPrompt:minervaAsyncDreams:minervaAsyncTwoPersonDreams:minervaAsyncPreGenMySelfie:minervaAsyncDreamsMySelfie:minervaAsyncTwoPersonDreamsMySelfie:] */

void FUN_1044e55f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37)

{
  undefined1 auStack_480 [16];
  undefined8 uStack_470;
  undefined1 auStack_460 [16];
  undefined8 uStack_450;
  undefined1 auStack_440 [16];
  undefined8 uStack_430;
  undefined1 auStack_420 [16];
  undefined8 uStack_410;
  undefined1 auStack_400 [16];
  undefined8 uStack_3f0;
  undefined1 auStack_3e0 [16];
  undefined8 uStack_3d0;
  undefined1 auStack_3c0 [16];
  undefined8 uStack_3b0;
  undefined1 auStack_3a0 [16];
  undefined8 uStack_390;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined1 auStack_340 [16];
  undefined8 uStack_330;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
  undefined1 auStack_2e0 [16];
  undefined8 uStack_2d0;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_1d0 = param_16;
  uStack_1f0 = param_17;
  uStack_210 = param_18;
  uStack_230 = param_19;
  uStack_250 = param_20;
  uStack_270 = param_21;
  uStack_290 = param_22;
  uStack_2b0 = param_23;
  uStack_2d0 = param_24;
  uStack_2f0 = param_25;
  uStack_310 = param_26;
  uStack_330 = param_27;
  uStack_350 = param_28;
  uStack_370 = param_29;
  uStack_390 = param_30;
  uStack_3b0 = param_31;
  uStack_3d0 = param_32;
  uStack_3f0 = param_33;
  uStack_410 = param_34;
  uStack_430 = param_35;
  uStack_450 = param_36;
  uStack_470 = param_37;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1044e50f8(0x1044e5fec,auStack_40,0x1044e5ff8,auStack_60,0x1044e5ffc,auStack_80,0x1044e6000,
                auStack_a0,0x1044e6004,auStack_c0,0x1044e6008,auStack_e0,0x1044e600c,auStack_100,
                0x1044e6010,auStack_120,0x1044e6014,auStack_140,0x1044e6018,auStack_160,0x1044e601c,
                auStack_180,0x1044e6020,auStack_1a0,0x1044e6024,auStack_1c0,0x1044e6028,auStack_1e0,
                0x1044e602c,auStack_200,0x1044e6030,auStack_220,0x1044e6034,auStack_240,0x1044e6038,
                auStack_260,0x1044e603c,auStack_280,0x1044e6040,auStack_2a0,0x1044e6044,auStack_2c0,
                0x1044e6048,auStack_2e0,0x1044e604c,auStack_300,0x1044e6050,auStack_320,0x1044e6054,
                auStack_340,0x1044e6058,auStack_360,0x1044e605c,auStack_380,0x1044e6060,auStack_3a0,
                0x1044e6064,auStack_3c0,0x1044e6068,auStack_3e0,0x1044e606c,auStack_400,0x1044e6070,
                auStack_420,0x1044e6074,auStack_440,0x1044e6078,auStack_460,0x1044e607c,auStack_480)
  ;
  _objc_release(param_1);
  return;
}



/* Entry: 1044e5b88; end: 1044e5bbb;  */

void FUN_1044e5b88(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e5bbc; end: 1044e5be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044e5bbc(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_113080fa0);
  _objc_release();
  return uVar1;
}



/* Entry: 1044e5be8; end: 1044e5e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1044e5be8(undefined **param_1,undefined *param_2,uint param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  uint uVar18;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  uint uVar24;
  undefined *puVar25;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar26;
  undefined **ppuVar27;
  int iVar28;
  undefined **ppuVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined *apuStack_3b0 [2];
  undefined *apuStack_3a0 [2];
  undefined *apuStack_390 [2];
  undefined *apuStack_380 [2];
  undefined *apuStack_370 [2];
  undefined *apuStack_360 [2];
  undefined *apuStack_350 [2];
  undefined *apuStack_340 [2];
  undefined *apuStack_330 [2];
  undefined *apuStack_320 [2];
  undefined *apuStack_310 [2];
  undefined *apuStack_300 [2];
  undefined *apuStack_2f0 [2];
  undefined *apuStack_2e0 [2];
  undefined *apuStack_2d0 [2];
  undefined *apuStack_2c0 [2];
  undefined *apuStack_2b0 [2];
  undefined *apuStack_2a0 [2];
  undefined *apuStack_290 [2];
  undefined *apuStack_280 [2];
  undefined *apuStack_270 [2];
  undefined *apuStack_260 [2];
  undefined *apuStack_250 [2];
  undefined *apuStack_240 [2];
  undefined *apuStack_230 [2];
  undefined *apuStack_220 [2];
  undefined *apuStack_210 [2];
  undefined *apuStack_200 [2];
  undefined *apuStack_1f0 [2];
  undefined *apuStack_1e0 [2];
  undefined *apuStack_1d0 [2];
  undefined *apuStack_1c0 [2];
  undefined *apuStack_1b0 [2];
  undefined *apuStack_1a0 [2];
  undefined *apuStack_190 [2];
  undefined *apuStack_180 [2];
  undefined *apuStack_170 [2];
  undefined *apuStack_160 [2];
  undefined *apuStack_150 [2];
  undefined *apuStack_140 [2];
  undefined *apuStack_130 [2];
  undefined *apuStack_120 [2];
  undefined *apuStack_110 [2];
  undefined *apuStack_100 [2];
  undefined *apuStack_f0 [2];
  undefined *apuStack_e0 [2];
  undefined *apuStack_d0 [2];
  undefined *apuStack_c0 [2];
  undefined *apuStack_b0 [2];
  undefined *apuStack_a0 [2];
  undefined *apuStack_90 [2];
  undefined *apuStack_80 [2];
  undefined *apuStack_70 [2];
  undefined *apuStack_60 [2];
  undefined *apuStack_50 [2];
  undefined *apuStack_40 [2];
  int iVar19;
  uint uVar20;
  
  ppuVar26 = apuStack_3b0;
  uVar18 = (uint)apuStack_3b0;
  uVar20 = (uint)((ulong)apuStack_3b0 >> 8);
  iVar19 = (int)apuStack_3b0;
  ppuVar21 = param_1;
  FUN_1044e5e14();
  ppuVar22 = ppuVar21;
  _objc_allocWithZone();
  iVar28 = (int)apuStack_3b0;
  uVar24 = (uint)param_2;
  ppuVar27 = apuStack_3b0;
  ppuVar3 = apuStack_3b0;
  ppuVar4 = apuStack_3b0;
  ppuVar5 = apuStack_3b0;
  ppuVar6 = apuStack_3b0;
  ppuVar7 = apuStack_3b0;
  ppuVar8 = apuStack_3b0;
  ppuVar9 = apuStack_3b0;
  ppuVar10 = apuStack_3b0;
  ppuVar11 = apuStack_3b0;
  ppuVar12 = apuStack_3b0;
  ppuVar13 = apuStack_3b0;
  ppuVar14 = apuStack_3b0;
  ppuVar15 = apuStack_3b0;
  ppuVar16 = apuStack_3b0;
  ppuVar17 = apuStack_3b0;
  ppuVar29 = _DAT_113080fa0;
  iVar1 = (int)apuStack_3b0;
  switch((ulong)param_1 & 0xff) {
  case 0:
  case 0x3a:
  case 0x5a:
    break;
  default:
    ppuVar17 = apuStack_3a0;
  case 0x84:
  case 0x92:
  case 0xca:
    ppuVar26 = ppuVar17;
    break;
  case 2:
    ppuVar26 = apuStack_390;
    break;
  case 3:
    ppuVar26 = apuStack_380;
    break;
  case 4:
    ppuVar26 = apuStack_370;
    break;
  case 5:
    ppuVar26 = apuStack_360;
    break;
  case 6:
  case 0xd8:
    ppuVar26 = apuStack_350;
    break;
  case 7:
    ppuVar13 = apuStack_340;
  case 0xd4:
    ppuVar26 = ppuVar13;
    break;
  case 8:
    ppuVar26 = apuStack_330;
    break;
  case 9:
    ppuVar14 = apuStack_320;
  case 0xe8:
  case 0xf0:
  case 0xf8:
    ppuVar26 = ppuVar14;
    break;
  case 10:
  case 0xd1:
    ppuVar26 = apuStack_310;
    break;
  case 0xb:
    ppuVar26 = apuStack_300;
    break;
  case 0xc:
    ppuVar26 = apuStack_2f0;
    break;
  case 0xd:
    ppuVar26 = apuStack_2e0;
    break;
  case 0xe:
  case 0xd0:
    ppuVar26 = apuStack_2d0;
    break;
  case 0xf:
    ppuVar26 = apuStack_2c0;
    break;
  case 0x10:
    ppuVar26 = apuStack_2b0;
    break;
  case 0x11:
    ppuVar26 = apuStack_2a0;
    break;
  case 0x12:
    ppuVar11 = apuStack_290;
  case 0x99:
    ppuVar26 = ppuVar11;
    break;
  case 0x13:
    ppuVar26 = apuStack_280;
    break;
  case 0x14:
    ppuVar26 = apuStack_270;
    break;
  case 0x15:
    ppuVar12 = apuStack_260;
  case 0x3e:
  case 0x5e:
  case 0xb0:
  case 0xb8:
  case 0xc0:
    ppuVar26 = ppuVar12;
    break;
  case 0x16:
  case 0x38:
  case 0x58:
    ppuVar8 = apuStack_250;
  case 0x41:
  case 0x48:
  case 0x61:
  case 0x68:
  case 0x6c:
    ppuVar26 = ppuVar8;
    break;
  case 0x17:
    ppuVar26 = apuStack_240;
    break;
  case 0x18:
    ppuVar26 = apuStack_230;
    break;
  case 0x19:
    ppuVar26 = apuStack_220;
    break;
  case 0x1a:
  case 0x4d:
  case 0x6e:
    ppuVar6 = apuStack_210;
  case 0x46:
  case 0x4b:
  case 0x4f:
  case 0x66:
  case 0x6b:
    ppuVar26 = ppuVar6;
    break;
  case 0x1b:
    ppuVar26 = apuStack_200;
    break;
  case 0x1c:
    ppuVar26 = apuStack_1f0;
    break;
  case 0x1d:
    ppuVar26 = apuStack_1e0;
    break;
  case 0x1e:
    ppuVar10 = apuStack_1d0;
  case 0x9c:
    ppuVar26 = ppuVar10;
    break;
  case 0x1f:
    ppuVar26 = apuStack_1c0;
    break;
  case 0x20:
    ppuVar9 = apuStack_1b0;
  case 0x4c:
    ppuVar26 = ppuVar9;
    break;
  case 0x21:
    ppuVar26 = apuStack_1a0;
    break;
  case 0x22:
    ppuVar26 = apuStack_190;
    break;
  case 0x23:
    ppuVar26 = apuStack_180;
    break;
  case 0x24:
    ppuVar26 = apuStack_170;
    break;
  case 0x25:
    ppuVar26 = apuStack_160;
    break;
  case 0x26:
    ppuVar26 = apuStack_150;
    break;
  case 0x27:
    ppuVar26 = apuStack_140;
    break;
  case 0x28:
    ppuVar26 = apuStack_130;
    break;
  case 0x29:
    ppuVar26 = apuStack_120;
    break;
  case 0x2a:
    ppuVar7 = apuStack_110;
  case 0x88:
    ppuVar26 = ppuVar7;
    break;
  case 0x2b:
  case 0xe4:
    ppuVar15 = apuStack_100;
  case 0x9b:
  case 0xd3:
    ppuVar26 = ppuVar15;
    break;
  case 0x2c:
    ppuVar26 = apuStack_f0;
    break;
  case 0x2d:
    ppuVar26 = apuStack_e0;
    break;
  case 0x2e:
  case 0x4e:
    ppuVar26 = apuStack_d0;
    break;
  case 0x2f:
  case 0x75:
  case 0x89:
  case 0x9d:
  case 0xb1:
  case 0xb9:
  case 0xc1:
  case 0xd5:
  case 0xe9:
  case 0xf1:
  case 0xf9:
    ppuVar26 = apuStack_c0;
    break;
  case 0x30:
  case 0x79:
  case 0xa1:
  case 0xd9:
    ppuVar26 = apuStack_b0;
    break;
  case 0x31:
    ppuVar26 = apuStack_a0;
    break;
  case 0x32:
  case 0x77:
  case 0x8b:
  case 0x9f:
  case 0xb3:
  case 0xbb:
  case 0xc3:
  case 0xd7:
  case 0xeb:
  case 0xf3:
  case 0xfb:
    ppuVar16 = apuStack_90;
  case 0x82:
  case 0xaa:
  case 0xac:
  case 0xe2:
    ppuVar26 = ppuVar16;
    break;
  case 0x33:
    ppuVar26 = apuStack_80;
    break;
  case 0x34:
    ppuVar4 = apuStack_70;
  case 0x40:
  case 0x45:
  case 0x60:
  case 0x65:
    ppuVar26 = ppuVar4;
    break;
  case 0x35:
    ppuVar26 = apuStack_60;
    break;
  case 0x36:
    ppuVar5 = apuStack_50;
  case 0x39:
  case 0x3d:
  case 0x42:
  case 0x47:
  case 0x4a:
  case 0x59:
  case 0x5d:
  case 0x62:
  case 0x67:
  case 0x6a:
  case 0x72:
  case 0x74:
    ppuVar26 = ppuVar5;
    break;
  case 0x37:
    ppuVar26 = apuStack_40;
    break;
  case 0x3b:
  case 0x5b:
    goto code_r0x0001044e5df0;
  case 0x3c:
  case 0x5c:
  case 0x6f:
    goto code_r0x0001044e5e04;
  case 0x3f:
  case 0x49:
  case 0x5f:
  case 0x69:
  case 0x71:
    goto code_r0x0001044e5df4;
  case 0x43:
  case 99:
    goto code_r0x0001044e5dfc;
  case 0x44:
  case 100:
    goto code_r0x0001044e5e0c;
  case 0x6d:
    goto code_r0x0001044e5e08;
  case 0x70:
    ppuVar22 = &PTR_PTR_1129c47a8;
  case 0xa0:
  case 0xbc:
  case 0xf5:
  case 0xfd:
    _objc_opt_self();
code_r0x0001044e5e28:
    auVar31._8_8_ = 0;
    auVar31._0_8_ = ppuVar22;
    return auVar31;
  case 0x76:
  case 0x8a:
  case 0x9e:
  case 0xb2:
  case 0xba:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xf2:
  case 0xfa:
    goto code_r0x0001044e5ed0;
  case 0x78:
    uVar20 = param_3 + 0x37 >> 8;
    in_CY = 0xfffeff < param_3 + 0x37;
code_r0x0001044e5ed0:
    iVar28 = 2;
    if ((bool)in_CY) {
      iVar28 = 4;
    }
    if ((uVar20 & 0xffffff) < 0xff) {
      iVar28 = 1;
    }
    iVar1 = 0;
    if (200 < param_3) {
      iVar1 = iVar28;
    }
    in_CY = 199 < uVar24;
    in_ZR = uVar24 == 200;
code_r0x0001044e5ef4:
    iVar19 = iVar1;
    if ((bool)in_CY && !(bool)in_ZR) {
      iVar1 = (uVar24 - 0xc9 >> 8) + 1;
      *(char *)ppuVar22 = (char)(uVar24 - 0xc9);
      if (1 < iVar19) {
        if (iVar19 == 2) {
          *(short *)((long)ppuVar22 + 1) = (short)iVar1;
          auVar36._8_8_ = param_2;
          auVar36._0_8_ = ppuVar22;
          return auVar36;
        }
        *(int *)((long)ppuVar22 + 1) = iVar1;
code_r0x0001044e5f70:
        auVar38._8_8_ = param_2;
        auVar38._0_8_ = ppuVar22;
        return auVar38;
      }
      if (iVar19 != 0) {
        *(char *)((long)ppuVar22 + 1) = (char)iVar1;
        auVar34._8_8_ = param_2;
        auVar34._0_8_ = ppuVar22;
        return auVar34;
      }
    }
    else {
code_r0x0001044e5ef8:
      if (iVar19 < 2) {
        if (iVar19 != 0) {
          *(undefined1 *)((long)ppuVar22 + 1) = 0;
          if (uVar24 == 0) goto code_r0x0001044e5f68;
          goto code_r0x0001044e5f44;
        }
      }
      else if (iVar19 == 2) {
        *(undefined2 *)((long)ppuVar22 + 1) = 0;
      }
      else {
        *(undefined4 *)((long)ppuVar22 + 1) = 0;
      }
      if (uVar24 != 0) {
code_r0x0001044e5f44:
        *(char *)ppuVar22 = (char)param_2 + '7';
        auVar35._8_8_ = param_2;
        auVar35._0_8_ = ppuVar22;
        return auVar35;
      }
    }
code_r0x0001044e5f68:
    auVar37._8_8_ = param_2;
    auVar37._0_8_ = ppuVar22;
    return auVar37;
  case 0x7a:
  case 0xa2:
  case 0xda:
    goto code_r0x0001044e5ef4;
  case 0x8c:
    puVar23 = &UNK_10dd0d06c;
    puVar25 = &UNK_11077dac0;
    _swift_getWitnessTable(&UNK_10dd0d06c,&UNK_11077dac0);
    puRam0000000113080fd0 = puVar23;
    auVar41._8_8_ = puVar25;
    auVar41._0_8_ = puVar23;
    return auVar41;
  case 0x8d:
  case 0x8e:
  case 0xbd:
  case 0xbe:
  case 0xc5:
  case 0xc6:
  case 0xf6:
  case 0xfe:
    goto code_r0x0001044e5e28;
  case 0x8f:
  case 0xbf:
  case 199:
  case 0xf7:
  case 0xff:
    puVar23 = ppuVar21[2];
    UNRECOVERED_JUMPTABLE = *(code **)(puVar23 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001044e5ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar43._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar43._0_8_ = puVar23;
    return auVar43;
  case 0x98:
    auVar39._1_7_ = 0;
    auVar39[0] = *(byte *)ppuVar22;
    auVar39._8_8_ = param_2;
    return auVar39;
  case 0x9a:
  case 0xd2:
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    return auVar2 << 0x40;
  case 0xb4:
    if ((bool)in_CY) {
      ppuVar22 = (undefined **)0x38;
    }
    auVar42._8_8_ = param_2;
    auVar42._0_8_ = ppuVar22;
    return auVar42;
  case 0xb5:
    goto code_r0x0001044e5f44;
  case 0xb6:
    goto code_r0x0001044e5ef8;
  case 0xc4:
    goto code_r0x0001044e5ea4;
  case 0xec:
    if (!(bool)in_CY) {
      iVar28 = -1;
    }
    auVar33._4_4_ = 0;
    auVar33._0_4_ = iVar28 + 1;
    auVar33._8_8_ = param_2;
    return auVar33;
  case 0xed:
    goto code_r0x0001044e5e9c;
  case 0xee:
    goto code_r0x0001044e5f70;
  case 0xf4:
    uVar18 = (uint)*(byte *)ppuVar22 | iVar28 << 8;
code_r0x0001044e5e9c:
    ppuVar22 = (undefined **)(ulong)(uVar18 - 0x37);
code_r0x0001044e5ea4:
    auVar32._8_8_ = param_2;
    auVar32._0_8_ = ppuVar22;
    return auVar32;
  case 0xfc:
    auVar40._8_8_ = param_2;
    auVar40._0_8_ = ppuVar22;
    return auVar40;
  }
  *(char *)((long)ppuVar22 + (long)_DAT_113080fa0) = (char)param_1;
  *ppuVar26 = (undefined *)ppuVar22;
  ppuVar26[1] = (undefined *)ppuVar21;
  ppuVar27 = ppuVar26;
code_r0x0001044e5df0:
  ppuVar29 = &PTR_s_info_1125d9000;
  ppuVar3 = ppuVar27;
code_r0x0001044e5df4:
  ppuVar22 = ppuVar3;
  param_2 = ppuVar29[0x49];
code_r0x0001044e5dfc:
  _objc_msgSendSuper2();
code_r0x0001044e5e04:
code_r0x0001044e5e08:
code_r0x0001044e5e0c:
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = ppuVar22;
  return auVar30;
}



/* Entry: 1044e5e14; end: 1044e5e33;  */

void FUN_1044e5e14(void)

{
  _objc_opt_self(&PTR_PTR_1129c47a8);
  return;
}



/* Entry: 1044e5e34; end: 1044e5f9b;  */

int FUN_1044e5e34(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (200 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x37) {
      iVar2 = 4;
    }
    if (param_2 + 0x37 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044e5eb0;
        goto LAB_1044e5e94;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044e5e94:
      return ((uint)*param_1 | uVar1 << 8) - 0x37;
    }
  }
LAB_1044e5eb0:
  iVar2 = *param_1 - 0x38;
  if (*param_1 < 0x38) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044e5f9c; end: 1044e5fdb;  */

void FUN_1044e5f9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d06c;
  _swift_getWitnessTable(&UNK_10dd0d06c,&UNK_11077dac0);
  puRam0000000113080fd0 = puVar1;
  return;
}



/* Entry: 1044e5fdc; end: 1044e60e7;  */

ulong FUN_1044e5fdc(ulong param_1)

{
  if (0x37 < param_1) {
    param_1 = 0x38;
  }
  return param_1;
}



/* Entry: 1044e60e8; end: 1044e61bf;  */

void FUN_1044e60e8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e61c0; end: 1044e61df;  */

void FUN_1044e61c0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044e61e0; end: 1044e621f;  */

void FUN_1044e61e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d110;
  _swift_getWitnessTable(&UNK_10dd0d110,&UNK_11077db70);
  puRam0000000113080fd8 = puVar1;
  return;
}



/* Entry: 1044e6220; end: 1044e622f;  */

undefined1  [16] FUN_1044e6220(void)

{
  return ZEXT816(0x11077db70);
}



/* Entry: 1044e6230; end: 1044e6317; +[SCCameraFilterTypeContext cameraContextToStringWithContext:] */

void FUN_1044e6230(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lStack_28;
  
  uVar3 = 0xec000000474e4943;
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar3 = 0x800000010f204c80;
      uVar2 = 0xd000000000000012;
      goto LAB_1044e62cc;
    }
    if (param_3 != 1) {
LAB_1044e62f4:
      lStack_28 = param_3;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_11077db70,&lStack_28,&UNK_11077db70,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e6318);
      (*pcVar1)();
    }
    uVar2 = 0x5f544e4f5246;
  }
  else {
    if (param_3 == 2) {
      uVar3 = 0xeb00000000474e49;
      uVar2 = 0x4341465f52414552;
      goto LAB_1044e62cc;
    }
    if (param_3 != 3) goto LAB_1044e62f4;
    uVar2 = 0x5f444558494d;
  }
  uVar2 = uVar2 | 0x4146000000000000;
LAB_1044e62cc:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044e6318; end: 1044e6337;  */

void FUN_1044e6318(void)

{
  _objc_opt_self(&PTR_PTR_1129c4868);
  return;
}



/* Entry: 1044e6338; end: 1044e6373; -[SCCameraFilterTypeContext init] */

void FUN_1044e6338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1044e6318();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e6374; end: 1044e63a3;  */

void FUN_1044e6374(void)

{
  FUN_1044e6318();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e63a4; end: 1044e64cb; +[SCCameraMediaContext cameraMediaTypeContextToStringWithContext:] */

void FUN_1044e63a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  long lStack_28;
  
  if (param_3 < 3) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        uVar4 = 0xe500000000000000;
        uVar2 = 0x4547414d49;
      }
      else {
        if (param_3 != 2) {
LAB_1044e64a8:
          lStack_28 = param_3;
          __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                    (&UNK_11077dbe8,&lStack_28,&UNK_11077dbe8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e64cc);
          (*pcVar1)();
        }
        uVar4 = 0xe500000000000000;
        uVar2 = 0x4f45444956;
      }
      goto LAB_1044e6480;
    }
    pcVar3 = "UNRECOGNIZED_VALUE";
  }
  else {
    if (param_3 == 3) {
      uVar4 = 0xee00444e554f535f;
      uVar2 = 0x4f4e5f4f45444956;
      goto LAB_1044e6480;
    }
    if (param_3 != 4) {
      if (param_3 != 5) goto LAB_1044e64a8;
      uVar4 = 0x800000010f1540f0;
      uVar2 = 0xd000000000000015;
      goto LAB_1044e6480;
    }
    pcVar3 = "VIDEO_SOUND_LAGUNA";
  }
  uVar2 = 0xd000000000000012;
  uVar4 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
LAB_1044e6480:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044e64cc; end: 1044e64eb;  */

void FUN_1044e64cc(void)

{
  _objc_opt_self(&PTR_PTR_1129c4918);
  return;
}



/* Entry: 1044e64ec; end: 1044e6527; -[SCCameraMediaContext init] */

void FUN_1044e64ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1044e64cc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e6528; end: 1044e6557;  */

void FUN_1044e6528(void)

{
  FUN_1044e64cc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e6558; end: 1044e656b;  */

bool FUN_1044e6558(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044e656c; end: 1044e6643;  */

void FUN_1044e656c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e6644; end: 1044e6663;  */

void FUN_1044e6644(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044e6664; end: 1044e66a3;  */

void FUN_1044e6664(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d230;
  _swift_getWitnessTable(&UNK_10dd0d230,&UNK_11077dbe8);
  puRam0000000113081030 = puVar1;
  return;
}



/* Entry: 1044e66a4; end: 1044e66b3;  */

undefined1  [16] FUN_1044e66a4(void)

{
  return ZEXT816(0x11077dbe8);
}



/* Entry: 1044e66b4; end: 1044e66cb; +[SCManagedCaptureDeviceCapabilities highResActiveFormatSize1080p] */

undefined1  [16] FUN_1044e66b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4090e00000000000;
  auVar1._0_8_ = 0x409e000000000000;
  return auVar1;
}



/* Entry: 1044e66cc; end: 1044e66e3; +[SCManagedCaptureDeviceCapabilities captureVideoActiveFormatSize1080p] */

undefined1  [16] FUN_1044e66cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4090e00000000000;
  auVar1._0_8_ = 0x409e000000000000;
  return auVar1;
}



/* Entry: 1044e66e4; end: 1044e66fb; +[SCManagedCaptureDeviceCapabilities captureVideoActiveFormatSize2k] */

undefined1  [16] FUN_1044e66e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4096800000000000;
  auVar1._0_8_ = 0x40a4000000000000;
  return auVar1;
}



/* Entry: 1044e66fc; end: 1044e6713; +[SCManagedCaptureDeviceCapabilities captureVideoActiveFormatSize4k] */

undefined1  [16] FUN_1044e66fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x40a0e00000000000;
  auVar1._0_8_ = 0x40ae000000000000;
  return auVar1;
}



/* Entry: 1044e6714; end: 1044e672f; +[SCManagedCaptureDeviceCapabilities captureVideoActiveFormatSize4kFourByThree] */

undefined1  [16] FUN_1044e6714(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x40a7a00000000000;
  auVar1._0_8_ = 0x40af800000000000;
  return auVar1;
}



/* Entry: 1044e6730; end: 1044e6793; +[SCManagedCaptureDeviceCapabilities liveStreamActiveFormatResolution] */

undefined1  [16] FUN_1044e6730(void)

{
  if (lRam0000000113081038 != -1) {
    _swift_once(0x113081038,0x1044e6774);
  }
  return auRam0000000113813b88;
}



/* Entry: 1044e6794; end: 1044e68a7;  */

undefined1  [16] FUN_1044e6794(double param_1,undefined8 param_2,double param_3,double param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_opt_self(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar4 = puVar3;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  _objc_release(puVar4);
  func_0x00010c0b6c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar3);
  lVar5 = 0x112d6cc38;
  func_0x0001000285a8(0x112d6cc38,&UNK_10d92f830);
  _swift_initStackObject();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(undefined8 *)(lVar5 + 0x28) = 0x4090e00000000000;
  *(undefined8 *)(lVar5 + 0x20) = 0x409e000000000000;
  *(undefined8 *)(lVar5 + 0x38) = 0x4086800000000000;
  *(undefined8 *)(lVar5 + 0x30) = 0x4094000000000000;
  _swift_release();
  bVar1 = 1920.0 <= param_1 * param_4;
  bVar2 = 1080.0 <= param_1 * param_3;
  uVar6 = 0x4086800000000000;
  if (bVar2 && bVar1) {
    uVar6 = 0x4090e00000000000;
  }
  uVar7 = 0x4094000000000000;
  if (bVar2 && bVar1) {
    uVar7 = 0x409e000000000000;
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1044e68a8; end: 1044e692b;  */

undefined * FUN_1044e68a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar3 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c075d00();
  _objc_release(puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5e640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c07e1c0();
    _objc_release(puVar1);
  }
  return puVar3;
}



/* Entry: 1044e692c; end: 1044e6a77; +[SCManagedCaptureDeviceCapabilities is1080pRecordingSupportedOnAlliPhoneCameras] */

undefined * FUN_1044e692c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar3 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c075d00();
  _objc_release(puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5e640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c07e1c0();
    _objc_release(puVar1);
  }
  return puVar3;
}



/* Entry: 1044e6a78; end: 1044e6b3f; +[SCManagedCaptureDeviceCapabilities is1080pRecordingAndRenderingSupported] */

bool FUN_1044e6a78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075d00();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07e1a0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      if (lRam0000000113081038 != -1) {
        _swift_once(0x113081038,0x1044e6774);
      }
      return 1080.0 <= dRam0000000113813b90;
    }
  }
  return false;
}



/* Entry: 1044e6b40; end: 1044e6b57; +[SCManagedCaptureDeviceCapabilities isEnhancedNightModeSupported] */

uint FUN_1044e6b40(uint param_1)

{
  FUN_1044e6c68();
  return param_1 & 1;
}



/* Entry: 1044e6b58; end: 1044e6bfb;  */

undefined1  [16] FUN_1044e6b58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075d00();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07e1c0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      uVar4 = 0x4090e00000000000;
      uVar5 = 0x409e000000000000;
      goto LAB_1044e6be8;
    }
  }
  uVar4 = 0x4086800000000000;
  uVar5 = 0x4094000000000000;
LAB_1044e6be8:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1044e6bfc; end: 1044e6c37; -[SCManagedCaptureDeviceCapabilities init] */

void FUN_1044e6bfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100353190();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e6c38; end: 1044e6c67;  */

void FUN_1044e6c38(void)

{
  func_0x000100353190();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e6c68; end: 1044e6d13;  */

undefined * FUN_1044e6c68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075d00();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    puVar2 = puVar1;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07e1a0();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      return (undefined *)0x1;
    }
  }
  func_0x00010bf5e640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075ce0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1044e6d14; end: 1044e6d17; +[SCManagedCaptureDeviceCapabilities HDModeActiveFormatResolutionFrontCamera] */

undefined1  [16] FUN_1044e6d14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075d00();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07e1c0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      uVar4 = 0x4090e00000000000;
      uVar5 = 0x409e000000000000;
      goto LAB_1044e6be8;
    }
  }
  uVar4 = 0x4086800000000000;
  uVar5 = 0x4094000000000000;
LAB_1044e6be8:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1044e6d18; end: 1044e6d3f; +[SCManagedCaptureDeviceCapabilities HDModeActiveFormatResolutionBackCamera] */

undefined1  [16] FUN_1044e6d18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075d00();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07e1c0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      uVar4 = 0x4090e00000000000;
      uVar5 = 0x409e000000000000;
      goto LAB_1044e6be8;
    }
  }
  uVar4 = 0x4086800000000000;
  uVar5 = 0x4094000000000000;
LAB_1044e6be8:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1044e6d40; end: 1044e6d7f;  */

void FUN_1044e6d40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d360;
  _swift_getWitnessTable(&UNK_10dd0d360,&UNK_11077dd00);
  puRam0000000113081068 = puVar1;
  return;
}



/* Entry: 1044e6d80; end: 1044e6d83;  */

void FUN_1044e6d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d400;
  _swift_getWitnessTable(&UNK_10dd0d400,&UNK_11077dd20);
  puRam0000000113081070 = puVar1;
  return;
}



/* Entry: 1044e6d84; end: 1044e6dc3;  */

void FUN_1044e6d84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d400;
  _swift_getWitnessTable(&UNK_10dd0d400,&UNK_11077dd20);
  puRam0000000113081070 = puVar1;
  return;
}



/* Entry: 1044e6dc4; end: 1044e6e47;  */

void FUN_1044e6dc4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e6e48; end: 1044e6e8f;  */

void FUN_1044e6e48(ulong *param_1,ulong *param_2)

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



/* Entry: 1044e6e90; end: 1044e6ea7; +[SCCaptureControlUtils deviceHasCaptureControlButton] */

uint FUN_1044e6e90(uint param_1)

{
  FUN_1044e721c();
  return param_1 & 1;
}



/* Entry: 1044e6ea8; end: 1044e6eab;  */

void FUN_1044e6ea8(void)

{
  return;
}



/* Entry: 1044e6eac; end: 1044e6eb3; +[SCCaptureControlUtils setMockedDeviceIdentifier:] */

void FUN_1044e6eac(void)

{
  return;
}



/* Entry: 1044e6eb4; end: 1044e6eb7; +[SCCaptureControlUtils clearMockedDeviceIdentifier] */

void FUN_1044e6eb4(void)

{
  return;
}



/* Entry: 1044e6eb8; end: 1044e6ef3; -[SCCaptureControlUtils init] */

void FUN_1044e6eb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1044e72a4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e6ef4; end: 1044e6f23;  */

void FUN_1044e6ef4(void)

{
  FUN_1044e72a4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e6f24; end: 1044e6f27; -[SCCaptureControlUtils .cxx_destruct] */

void FUN_1044e6f24(void)

{
  return;
}



/* Entry: 1044e6f28; end: 1044e721b;  */

undefined1  [16] FUN_1044e6f28(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long alStack_6c0 [3];
  undefined1 auStack_6a8 [8];
  long alStack_6a0 [2];
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  ulong uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  long lStack_640;
  undefined8 uStack_638;
  undefined **ppuStack_630;
  undefined8 uStack_628;
  byte bStack_611;
  undefined1 auStack_610 [1024];
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [32];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  __ss6MirrorVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)&uStack_690 + lVar11;
  _bzero(auStack_610,0x500);
  _uname(auStack_610);
  uStack_668 = uStack_1f8;
  uStack_670 = uStack_200;
  uStack_658 = uStack_208;
  uStack_660 = uStack_210;
  uStack_688 = uStack_1d8;
  uStack_690 = uStack_1e0;
  uStack_678 = uStack_1e8;
  uStack_680 = uStack_1f0;
  uStack_638 = uStack_1b8;
  lStack_640 = lStack_1c0;
  uStack_628 = uStack_1c8;
  ppuStack_630 = (undefined **)uStack_1d0;
  uStack_648 = uStack_1a8;
  lStack_650 = lStack_1b0;
  uVar14 = 0x113081168;
  func_0x0001000285a8(0x113081168,&UNK_10dd0d4f8);
  puVar4 = &UNK_11077dd98;
  uStack_90 = uVar14;
  _swift_allocObject(&UNK_11077dd98,0x110,7);
  *(undefined8 *)(puVar4 + 0x18) = uStack_658;
  *(ulong *)(puVar4 + 0x10) = uStack_660;
  *(undefined8 *)(puVar4 + 0x28) = uStack_668;
  *(undefined8 *)(puVar4 + 0x20) = uStack_670;
  *(undefined8 *)(puVar4 + 0x38) = uStack_678;
  *(undefined8 *)(puVar4 + 0x30) = uStack_680;
  *(undefined8 *)(puVar4 + 0x48) = uStack_688;
  *(undefined8 *)(puVar4 + 0x40) = uStack_690;
  *(undefined8 *)(puVar4 + 0x58) = uStack_628;
  *(undefined ***)(puVar4 + 0x50) = ppuStack_630;
  *(undefined8 *)(puVar4 + 0x68) = uStack_638;
  *(long *)(puVar4 + 0x60) = lStack_640;
  *(undefined8 *)(puVar4 + 0x78) = uStack_648;
  *(long *)(puVar4 + 0x70) = lStack_650;
  *(undefined8 *)(puVar4 + 0x88) = uStack_198;
  *(undefined8 *)(puVar4 + 0x80) = uStack_1a0;
  *(undefined8 *)(puVar4 + 0x98) = uStack_188;
  *(undefined8 *)(puVar4 + 0x90) = uStack_190;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_178;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_180;
  *(undefined8 *)(puVar4 + 0xb8) = uStack_168;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_170;
  *(undefined8 *)(puVar4 + 200) = uStack_158;
  *(undefined8 *)(puVar4 + 0xc0) = uStack_160;
  *(undefined8 *)(puVar4 + 0xd8) = uStack_148;
  *(undefined8 *)(puVar4 + 0xd0) = uStack_150;
  *(undefined8 *)(puVar4 + 0xe8) = uStack_138;
  *(undefined8 *)(puVar4 + 0xe0) = uStack_140;
  *(undefined8 *)(puVar4 + 0xf8) = uStack_128;
  *(undefined8 *)(puVar4 + 0xf0) = uStack_130;
  *(undefined8 *)(puVar4 + 0x108) = uStack_118;
  *(undefined8 *)(puVar4 + 0x100) = uStack_120;
  ppuVar5 = &puStack_a8;
  puStack_a8 = puVar4;
  __ss6MirrorV10reflectingAByp_tcfC(uVar8);
  __ss6MirrorV8childrens13AnyCollectionVySSSg5label_yp5valuetGvg();
  ppuStack_630 = ppuVar5;
  __ss15_AnySequenceBoxC13_makeIterators0aE0VyxGyFTj();
  __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&puStack_a8);
  puVar1 = PTR___sypN_11034f1a8;
  puVar4 = PTR___ss4Int8VN_11034edc0;
  if (lStack_80 == 0) {
    uVar15 = 0;
    uVar14 = 0xe000000000000000;
  }
  else {
    uVar15 = 0;
    uVar14 = 0xe000000000000000;
    uStack_660 = uVar8;
    lStack_650 = lVar12;
    lStack_640 = lVar3;
    do {
      uStack_d8 = uStack_a0;
      puStack_e0 = puStack_a8;
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      lStack_b8 = lStack_80;
      uStack_c0 = uStack_88;
      func_0x000102d25d50(&puStack_e0,&uStack_110);
      _swift_bridgeObjectRelease(uStack_108);
      pbVar6 = &bStack_611;
      _swift_dynamicCast(pbVar6,auStack_100,puVar1 + 8,puVar4,6);
      if (((int)pbVar6 != 0) && ((ulong)bStack_611 != 0)) {
        if ((char)bStack_611 < '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044e7218);
          (*pcVar2)();
        }
        puVar7 = &uStack_110;
        uVar9 = 1;
        uStack_110 = (ulong)bStack_611;
        __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar7,1);
        uStack_110 = uVar15;
        uStack_108 = uVar14;
        _swift_bridgeObjectRetain(uVar14);
        __sSS6appendyySSF(puVar7,uVar9);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(uVar9);
        uVar14 = uStack_108;
        uVar15 = uStack_110;
      }
      func_0x000102d25da0(&puStack_e0);
      __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&puStack_a8);
      lVar3 = lStack_640;
      lVar12 = lStack_650;
      uVar8 = uStack_660;
    } while (lStack_80 != 0);
  }
  _swift_release(ppuStack_630);
  _swift_release(ppuVar5);
  lVar10 = lVar3;
  (**(code **)(lVar12 + 8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar16._8_8_ = uVar14;
    auVar16._0_8_ = uVar15;
    return auVar16;
  }
  ___stack_chk_fail();
  *(long *)((long)alStack_6c0 + lVar11) = lVar12;
  *(long *)((long)alStack_6c0 + lVar11 + 8) = lVar3;
  *(undefined ***)((long)alStack_6c0 + lVar11 + 0x10) = ppuVar5;
  *(undefined8 **)(auStack_6a8 + lVar11) = &uStack_690;
  *(undefined1 **)((long)alStack_6a0 + lVar11) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_6a0 + lVar11 + 8) = FUN_1044e721c;
  FUN_1044e6f28();
  lVar11 = 10;
  plVar13 = (long *)0x1130810d0;
  lVar3 = lVar10;
  do {
    if (lVar10 != 0) {
      if ((uVar8 == plVar13[-1] && lVar10 == *plVar13) ||
         (uVar15 = uVar8, lVar3 = lVar10,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar8,lVar10,plVar13[-1],*plVar13,0), (uVar15 & 1) != 0)) {
        uVar14 = 1;
        goto LAB_1044e7288;
      }
    }
    plVar13 = plVar13 + 2;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      uVar14 = 0;
LAB_1044e7288:
      _swift_bridgeObjectRelease(lVar10);
      auVar17._8_8_ = lVar3;
      auVar17._0_8_ = uVar14;
      return auVar17;
    }
  } while( true );
}



/* Entry: 1044e721c; end: 1044e72a3;  */

undefined8 FUN_1044e721c(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_1044e6f28();
  lVar3 = 10;
  plVar4 = (long *)0x1130810d0;
  do {
    if (param_2 != 0) {
      if ((param_1 == plVar4[-1] && param_2 == *plVar4) ||
         (uVar1 = param_1,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (param_1,param_2,plVar4[-1],*plVar4,0), (uVar1 & 1) != 0)) {
        uVar2 = 1;
        goto LAB_1044e7288;
      }
    }
    plVar4 = plVar4 + 2;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      uVar2 = 0;
LAB_1044e7288:
      _swift_bridgeObjectRelease(param_2);
      return uVar2;
    }
  } while( true );
}



/* Entry: 1044e72a4; end: 1044e72c3;  */

void FUN_1044e72a4(void)

{
  _objc_opt_self(&PTR_PTR_1129c4a78);
  return;
}



/* Entry: 1044e72c4; end: 1044e72d3;  */

undefined * FUN_1044e72c4(void)

{
  return &UNK_10dd0d500;
}



/* Entry: 1044e72d4; end: 1044e7313;  */

void FUN_1044e72d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d570;
  _swift_getWitnessTable(&UNK_10dd0d570,&UNK_11077ddc0);
  puRam0000000113081170 = puVar1;
  return;
}



/* Entry: 1044e7314; end: 1044e7317;  */

void FUN_1044e7314(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d5a8;
  _swift_getWitnessTable(&UNK_10dd0d5a8,&UNK_11077ddc0);
  puRam0000000113081178 = puVar1;
  return;
}



/* Entry: 1044e7318; end: 1044e7357;  */

void FUN_1044e7318(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d5a8;
  _swift_getWitnessTable(&UNK_10dd0d5a8,&UNK_11077ddc0);
  puRam0000000113081178 = puVar1;
  return;
}



/* Entry: 1044e7358; end: 1044e7397;  */

void FUN_1044e7358(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1044e7398; end: 1044e73d7;  */

void FUN_1044e7398(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d548;
  _swift_getWitnessTable(&UNK_10dd0d548,&UNK_11077ddc0);
  puRam0000000113081180 = puVar1;
  return;
}



/* Entry: 1044e73d8; end: 1044e73db;  */

void FUN_1044e73d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d670;
  _swift_getWitnessTable(&UNK_10dd0d670,&UNK_11077ddc0);
  puRam0000000113081188 = puVar1;
  return;
}



/* Entry: 1044e73dc; end: 1044e741b;  */

void FUN_1044e73dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d670;
  _swift_getWitnessTable(&UNK_10dd0d670,&UNK_11077ddc0);
  puRam0000000113081188 = puVar1;
  return;
}



/* Entry: 1044e741c; end: 1044e7587;  */

void FUN_1044e741c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1044e7588; end: 1044e762f;  */

void FUN_1044e7588(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1044e761c;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1044e761c:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1044e7630; end: 1044e764b;  */

undefined1  [16] FUN_1044e7630(void)

{
  return ZEXT816(0x11077ddc0);
}



/* Entry: 1044e764c; end: 1044e768b;  */

void FUN_1044e764c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d738;
  _swift_getWitnessTable(&UNK_10dd0d738,&UNK_11077df00);
  puRam0000000113081190 = puVar1;
  return;
}



/* Entry: 1044e768c; end: 1044e768f;  */

void FUN_1044e768c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d770;
  _swift_getWitnessTable(&UNK_10dd0d770,&UNK_11077df00);
  puRam0000000113081198 = puVar1;
  return;
}



/* Entry: 1044e7690; end: 1044e76cf;  */

void FUN_1044e7690(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d770;
  _swift_getWitnessTable(&UNK_10dd0d770,&UNK_11077df00);
  puRam0000000113081198 = puVar1;
  return;
}



/* Entry: 1044e76d0; end: 1044e770f;  */

void FUN_1044e76d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1044e7710; end: 1044e774f;  */

void FUN_1044e7710(void)

{
  undefined *puVar1;
  
  if (puRam00000001130811a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d710;
  _swift_getWitnessTable(&UNK_10dd0d710,&UNK_11077df00);
  puRam00000001130811a0 = puVar1;
  return;
}



/* Entry: 1044e7750; end: 1044e7753;  */

void FUN_1044e7750(void)

{
  undefined *puVar1;
  
  if (puRam00000001130811a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d838;
  _swift_getWitnessTable(&UNK_10dd0d838,&UNK_11077df00);
  puRam00000001130811a8 = puVar1;
  return;
}



/* Entry: 1044e7754; end: 1044e7793;  */

void FUN_1044e7754(void)

{
  undefined *puVar1;
  
  if (puRam00000001130811a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d838;
  _swift_getWitnessTable(&UNK_10dd0d838,&UNK_11077df00);
  puRam00000001130811a8 = puVar1;
  return;
}



/* Entry: 1044e7794; end: 1044e78ff;  */

void FUN_1044e7794(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1044e7900; end: 1044e79a7;  */

void FUN_1044e7900(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1044e7994;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1044e7994:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1044e79a8; end: 1044e79bf;  */

undefined1  [16] FUN_1044e79a8(void)

{
  return ZEXT816(0x11077df00);
}



/* Entry: 1044e79c0; end: 1044e79c7; +[SCCameraHardwareAvailabilityOptions background] */

undefined8 FUN_1044e79c0(void)

{
  return 2;
}



/* Entry: 1044e79c8; end: 1044e7a63; -[SCCameraHardwareAvailabilityOptions init] */

void FUN_1044e79c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCManagedCaptureFoundation/SCCameraHardwareAvailabilityOptionsWrapper.swift",0x4b,2,
             0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e7a10);
  (*pcVar1)();
}



/* Entry: 1044e7a64; end: 1044e7aff; -[SCManagedCaptureDevicePositionOption init] */

void FUN_1044e7a64(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCManagedCaptureFoundation/SCManagedCaptureDevicePositionOptionWrapper.swift",0x4c,2,
             0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e7aac);
  (*pcVar1)();
}



/* Entry: 1044e7b00; end: 1044e7b13;  */

bool FUN_1044e7b00(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044e7b14; end: 1044e7bbf;  */

void FUN_1044e7b14(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e7bc0; end: 1044e7bfb;  */

void FUN_1044e7bc0(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  bVar1 = 0x3c < uVar3;
  bVar2 = (1L << (uVar3 & 0x3f) & 0x1000000041000000U) == 0;
  if (bVar1 || bVar2) {
    uVar3 = 0;
  }
  *param_1 = uVar3;
  *(bool *)(param_1 + 1) = bVar1 || bVar2;
  return;
}



/* Entry: 1044e7bfc; end: 1044e7c3b;  */

void FUN_1044e7bfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0d900;
  _swift_getWitnessTable(&UNK_10dd0d900,&UNK_11077e0e8);
  puRam0000000113081200 = puVar1;
  return;
}



/* Entry: 1044e7c3c; end: 1044e7c4b;  */

undefined1  [16] FUN_1044e7c3c(void)

{
  return ZEXT816(0x11077e0e8);
}



/* Entry: 1044e7c4c; end: 1044e7c9b;  */

void FUN_1044e7c4c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000113081208 != 0) {
    return;
  }
  puVar1 = &UNK_11077e108;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000113081208 = param_1;
  return;
}



/* Entry: 1044e7c9c; end: 1044e7cc7;  */

bool FUN_1044e7c9c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044e7cc8; end: 1044e7f5f;  */

int FUN_1044e7cc8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1044e7f60; end: 1044e7fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e7f60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081210) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e7fac; end: 1044e800b; -[_TtC29SCCameraConfigurationServices29SCCameraConfigurationServices init] */

void FUN_1044e7fac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraConfigurationServices.SCCameraConfigurationServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e7fd8);
  (*pcVar1)();
}



/* Entry: 1044e800c; end: 1044e801b; -[_TtC29SCCameraConfigurationServices29SCCameraConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e800c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113081210));
  return;
}



/* Entry: 1044e801c; end: 1044e8047; +[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName multiCam] */

void FUN_1044e801c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41435f49544c554d,0xe90000000000004d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e8048; end: 1044e8077; +[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName slowMotion] */

void FUN_1044e8048(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544f4d5f574f4c53,0xeb000000004e4f49);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e8078; end: 1044e809f; +[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName portrait] */

void FUN_1044e8078(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5449415254524f50,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e80a0; end: 1044e80c3; +[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName night] */

void FUN_1044e80a0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544847494e,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e80c4; end: 1044e80f7; +[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName fourByThree] */

void FUN_1044e80c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f59425f52554f46,0xed00004545524854);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e80f8; end: 1044e814b; +[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName highDefinition] */

void FUN_1044e80f8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4645445f48474948,0xef4e4f4954494e49);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


