/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bf0794; end: 108bf07e7;  */

void FUN_108bf0794(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf75c40(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined1 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bf07e8; end: 108bf08cf; -[SCSnapchattersDataRequestTracker didStartSnapchattersSuggestDataRequest:] */

void FUN_108bf07e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108bf08d0; end: 108bf091f;  */

void FUN_108bf08d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf7be80(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bf0920; end: 108bf0a4b; -[SCSnapchattersDataRequestTracker didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_108bf0920(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108bf0a4c; end: 108bf0a9f;  */

void FUN_108bf0a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf75c20(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined1 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bf0aa0; end: 108bf0b87; -[SCSnapchattersDataRequestTracker didStartSnapchattersContactDataRequest:] */

void FUN_108bf0aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108bf0b88; end: 108bf0bd7;  */

void FUN_108bf0b88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf7be40(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bf0bd8; end: 108bf0cf3; -[SCSnapchattersDataRequestTracker didEndSnapchattersContactDataRequest:withResult:] */

void FUN_108bf0bd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108bf0cf4; end: 108bf0d43;  */

void FUN_108bf0cf4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf75bc0(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bf0d44; end: 108bf0e33; -[SCSnapchattersDataRequestTracker didEndSnapchattersFriendInfoRequest:withSuccess:] */

void FUN_108bf0d44(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108bf0e34; end: 108bf0e87;  */

void FUN_108bf0e34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf75c00(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined1 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bf0e88; end: 108bf0e8f; -[SCSnapchattersDataRequestTracker removeListener:] */

void FUN_108bf0e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108bf0e90; end: 108bf0f33; -[SCSnapchattersDataRequestTracker _startProcessingDataRequest:forSnapchatterId:] */

void FUN_108bf0e90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4);
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bf0f34; end: 108bf1053; -[SCSnapchattersDataRequestTracker _endProcessingDataRequest:forSnapchatterId:] */

void FUN_108bf0f34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c0e00e0(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0e00e0(uVar2,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(lVar1);
      if ((int)uVar3 != 0) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,param_4);
      }
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bf1054; end: 108bf1097; -[SCSnapchattersDataRequestTracker .cxx_destruct] */

void FUN_108bf1054(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108bf1098; end: 108bf169f;  */

void FUN_108bf1098(undefined **param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined4 uStack_14a4;
  long lStack_14a0;
  long lStack_1498;
  undefined8 uStack_1490;
  undefined **ppuStack_1488;
  undefined4 uStack_1480;
  undefined4 uStack_1470;
  undefined1 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  long lStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  long *plStack_1428;
  long *plStack_1420;
  undefined1 uStack_1411;
  undefined **ppuStack_1410;
  undefined4 uStack_1408;
  undefined2 uStack_13f8;
  byte bStack_13f6;
  byte bStack_13f5;
  undefined1 *puStack_13d8;
  undefined ***pppuStack_13d0;
  long lStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  long *plStack_13b0;
  long *plStack_13a8;
  undefined1 uStack_1399;
  undefined **ppuStack_1398;
  undefined4 uStack_1390;
  undefined2 uStack_1380;
  byte bStack_137e;
  byte bStack_137d;
  undefined1 *puStack_1360;
  undefined ***pppuStack_1358;
  long lStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  long *plStack_1338;
  long *plStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined ***pppuStack_1310;
  undefined ***pppuStack_1308;
  undefined *puStack_1300;
  undefined *puStack_12f8;
  undefined *puStack_12f0;
  undefined ***pppuStack_12e8;
  undefined ***pppuStack_12e0;
  undefined ***pppuStack_12d8;
  undefined8 **ppuStack_12d0;
  code *pcStack_12c8;
  undefined4 uStack_12b8;
  undefined1 uStack_12b1;
  long lStack_12b0;
  long lStack_12a8;
  undefined8 uStack_12a0;
  long lStack_1298;
  long lStack_1290;
  undefined **ppuStack_1280;
  undefined4 uStack_1278;
  undefined4 uStack_1268;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  long lStack_1238;
  long lStack_1230;
  undefined8 uStack_1228;
  long *plStack_1220;
  long *plStack_1218;
  undefined1 uStack_1209;
  undefined **ppuStack_1208;
  undefined4 uStack_1200;
  undefined2 uStack_11f0;
  byte bStack_11ee;
  byte bStack_11ed;
  undefined1 *puStack_11d0;
  undefined ***pppuStack_11c8;
  long lStack_11c0;
  long lStack_11b8;
  undefined8 uStack_11b0;
  long *plStack_11a8;
  long *plStack_11a0;
  undefined **ppuStack_1198;
  undefined4 uStack_1190;
  undefined4 uStack_1180;
  undefined1 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  long lStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  long *plStack_1138;
  long *plStack_1130;
  undefined1 uStack_1121;
  undefined **ppuStack_1120;
  undefined4 uStack_1118;
  undefined2 uStack_1108;
  byte bStack_1106;
  byte bStack_1105;
  undefined1 *puStack_10e8;
  undefined ***pppuStack_10e0;
  long lStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  long *plStack_10c0;
  long *plStack_10b8;
  undefined1 uStack_10a9;
  undefined **ppuStack_10a8;
  undefined4 uStack_10a0;
  undefined2 uStack_1090;
  byte bStack_108e;
  byte bStack_108d;
  undefined1 *puStack_1070;
  undefined ***pppuStack_1068;
  long lStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  long *plStack_1048;
  long *plStack_1040;
  undefined **ppuStack_1038;
  undefined4 uStack_1030;
  undefined2 uStack_1020;
  byte bStack_101e;
  byte bStack_101d;
  undefined ***pppuStack_1000;
  undefined ***pppuStack_ff8;
  long lStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  long *plStack_fd8;
  long *plStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined1 uStack_fa8;
  undefined1 uStack_fa7;
  undefined4 uStack_fa4;
  code *pcStack_fa0;
  undefined8 uStack_f98;
  long alStack_f90 [2];
  undefined8 **ppuStack_f20;
  code *pcStack_f18;
  undefined4 uStack_f08;
  undefined1 uStack_f01;
  long lStack_f00;
  long lStack_ef8;
  undefined8 uStack_ef0;
  long lStack_ee8;
  long lStack_ee0;
  undefined **ppuStack_ed0;
  undefined4 uStack_ec8;
  undefined4 uStack_eb8;
  undefined1 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  long lStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  long *plStack_e70;
  long *plStack_e68;
  undefined1 uStack_e59;
  undefined **ppuStack_e58;
  undefined4 uStack_e50;
  undefined2 uStack_e40;
  byte bStack_e3e;
  byte bStack_e3d;
  undefined1 *puStack_e20;
  undefined ***pppuStack_e18;
  long lStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  long *plStack_df8;
  long *plStack_df0;
  undefined1 uStack_de1;
  undefined **ppuStack_de0;
  undefined4 uStack_dd8;
  undefined2 uStack_dc8;
  byte bStack_dc6;
  byte bStack_dc5;
  undefined1 *puStack_da8;
  undefined ***pppuStack_da0;
  long lStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  long *plStack_d80;
  long *plStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined1 uStack_d50;
  undefined1 uStack_d4f;
  undefined4 uStack_d4c;
  code *pcStack_d48;
  undefined8 uStack_d40;
  long lStack_d38;
  undefined ***pppuStack_d30;
  undefined ***pppuStack_d28;
  undefined ***pppuStack_d20;
  undefined *puStack_d18;
  undefined **ppuStack_d10;
  undefined8 uStack_d08;
  undefined **ppuStack_d00;
  undefined ***pppuStack_cf8;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined **appuStack_ca0 [17];
  long lStack_c18;
  undefined8 uStack_c10;
  undefined ***pppuStack_c08;
  undefined **ppuStack_c00;
  undefined *puStack_bf8;
  undefined **ppuStack_bf0;
  long *plStack_be8;
  undefined ***pppuStack_be0;
  undefined **ppuStack_bd8;
  undefined8 **ppuStack_bd0;
  code *pcStack_bc8;
  undefined4 uStack_bc0;
  undefined1 uStack_bb9;
  long lStack_bb8;
  long lStack_bb0;
  undefined8 uStack_ba8;
  long lStack_ba0;
  long lStack_b98;
  undefined **ppuStack_b88;
  undefined4 uStack_b80;
  undefined4 uStack_b70;
  undefined1 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long lStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  long *plStack_b28;
  long *plStack_b20;
  undefined1 uStack_b11;
  undefined **ppuStack_b10;
  undefined4 uStack_b08;
  undefined2 uStack_af8;
  byte bStack_af6;
  byte bStack_af5;
  undefined1 *puStack_ad8;
  undefined ***pppuStack_ad0;
  long lStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  long *plStack_ab0;
  long *plStack_aa8;
  undefined *apuStack_aa0 [3];
  undefined1 uStack_a81;
  undefined **appuStack_a80 [3];
  byte bStack_a67;
  byte bStack_a66;
  byte bStack_a65;
  undefined *apuStack_a38 [3];
  long *plStack_a20;
  long *plStack_a18;
  undefined1 uStack_a09;
  undefined **ppuStack_a08;
  undefined4 uStack_a00;
  undefined1 uStack_9f0;
  byte bStack_9ef;
  byte bStack_9ee;
  byte bStack_9ed;
  undefined1 *puStack_9d0;
  undefined ***pppuStack_9c8;
  long lStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  long *plStack_9a8;
  long *plStack_9a0;
  undefined **ppuStack_998;
  undefined4 uStack_990;
  undefined2 uStack_980;
  byte bStack_97e;
  byte bStack_97d;
  undefined ***pppuStack_960;
  undefined ***pppuStack_958;
  long lStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  long *plStack_938;
  long *plStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined1 uStack_907;
  undefined4 uStack_904;
  code *pcStack_900;
  undefined8 uStack_8f8;
  long alStack_8f0 [2];
  undefined ***pppuStack_8e0;
  undefined ***pppuStack_8d8;
  undefined **ppuStack_8d0;
  undefined8 uStack_8c8;
  undefined ***pppuStack_8c0;
  undefined ***pppuStack_8b8;
  undefined *puStack_8b0;
  undefined **ppuStack_8a8;
  undefined ***pppuStack_8a0;
  undefined **ppuStack_898;
  undefined8 **ppuStack_890;
  code *pcStack_888;
  undefined4 uStack_878;
  undefined1 uStack_871;
  long lStack_870;
  long lStack_868;
  undefined8 uStack_860;
  long lStack_858;
  long lStack_850;
  undefined **ppuStack_840;
  undefined4 uStack_838;
  undefined4 uStack_828;
  undefined1 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  long *plStack_7e0;
  long *plStack_7d8;
  undefined1 uStack_7c9;
  undefined **ppuStack_7c8;
  undefined4 uStack_7c0;
  undefined2 uStack_7b0;
  byte bStack_7ae;
  byte bStack_7ad;
  undefined1 *puStack_790;
  undefined ***pppuStack_788;
  long lStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  long *plStack_768;
  long *plStack_760;
  undefined1 uStack_751;
  undefined **ppuStack_750;
  undefined4 uStack_748;
  undefined2 uStack_738;
  byte bStack_736;
  byte bStack_735;
  undefined1 *puStack_718;
  undefined ***pppuStack_710;
  long lStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 uStack_6c0;
  undefined1 uStack_6bf;
  undefined4 uStack_6bc;
  code *pcStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined ***pppuStack_6a0;
  undefined ***pppuStack_698;
  undefined ***pppuStack_690;
  undefined ***pppuStack_688;
  undefined *puStack_680;
  undefined **ppuStack_678;
  undefined ***pppuStack_670;
  undefined **ppuStack_668;
  undefined1 **ppuStack_660;
  code *pcStack_658;
  undefined ***pppuStack_648;
  undefined **ppuStack_640;
  undefined4 uStack_638;
  undefined1 uStack_631;
  long lStack_630;
  long lStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long lStack_610;
  undefined **ppuStack_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5e8;
  undefined1 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined1 uStack_589;
  undefined **ppuStack_588;
  undefined4 uStack_580;
  undefined2 uStack_570;
  byte bStack_56e;
  byte bStack_56d;
  undefined1 *puStack_550;
  undefined ***pppuStack_548;
  long lStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long *plStack_528;
  long *plStack_520;
  undefined **ppuStack_518;
  undefined4 uStack_510;
  undefined4 uStack_500;
  undefined1 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined1 uStack_4a1;
  undefined **ppuStack_4a0;
  undefined4 uStack_498;
  undefined2 uStack_488;
  byte bStack_486;
  byte bStack_485;
  undefined1 *puStack_468;
  undefined ***pppuStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined1 uStack_42a;
  undefined1 uStack_429;
  undefined **ppuStack_428;
  undefined4 uStack_420;
  undefined1 uStack_410;
  byte bStack_40f;
  byte bStack_40e;
  byte bStack_40d;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined2 uStack_3a0;
  byte bStack_39e;
  byte bStack_39d;
  undefined ***pppuStack_380;
  undefined ***pppuStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined **ppuStack_348;
  undefined4 uStack_340;
  undefined2 uStack_330;
  byte bStack_32e;
  byte bStack_32d;
  undefined ***pppuStack_310;
  undefined ***pppuStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b7;
  undefined4 uStack_2b4;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  long alStack_2a0 [2];
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined4 uStack_228;
  undefined1 uStack_221;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1d8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 uStack_179;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined2 uStack_160;
  byte bStack_15e;
  byte bStack_15d;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  byte bStack_e6;
  byte bStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_3 == 0) {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == (undefined **)0x0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_90,param_1);
    }
    puVar2 = &uStack_101;
    FUN_108c2e2f8();
    puVar3 = &uStack_179;
    func_0x000107c2a7fc();
    uStack_1e8 = 0xf;
    uStack_1d8 = 0x100;
    uStack_1c0 = 0;
    ppuStack_1f0 = &PTR_SUB_1108629c8;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    lStack_1a8 = 0;
    plStack_190 = (long *)0x0;
    uStack_198 = 0;
    plStack_188 = (long *)0x0;
    bStack_15e = puVar3[0x1a];
    bStack_15d = puVar3[0x1b];
    uStack_170 = 10;
    uStack_160 = 0x100;
    ppuStack_178 = &PTR_SUB_1108629c8;
    pppuStack_138 = &ppuStack_1f0;
    uStack_128 = 0;
    lStack_130 = 0;
    plStack_118 = (long *)0x0;
    uStack_120 = 0;
    plStack_110 = (long *)0x0;
    bStack_e6 = puVar2[0x1a] | bStack_15e;
    bStack_e5 = puVar2[0x1b] & bStack_15d;
    uStack_f8 = 4;
    uStack_e8 = 0x100;
    ppuStack_100 = &PTR_SUB_1108629c8;
    pppuStack_c0 = &ppuStack_178;
    uStack_b0 = 0;
    lStack_b8 = 0;
    plStack_a0 = (long *)0x0;
    uStack_a8 = 0;
    plStack_98 = (long *)0x0;
    puVar4 = &uStack_221;
    puStack_140 = puVar3;
    puStack_c8 = puVar2;
    FUN_108c2db04();
    uStack_78 = *(undefined8 *)(puVar4 + 0x10);
    uStack_70 = puVar4[0x19];
    uStack_6f = puVar4[0x18];
    uStack_60 = *(undefined8 *)(puVar4 + 0x28);
    uStack_6c = 1;
    pcStack_68 = FUN_108bf5ed4;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_220 = 0;
    func_0x000100c435d0(&lStack_220,&uStack_78,&lStack_58,1);
    func_0x000100c436b8(&lStack_208,&lStack_220);
    uStack_228 = 200;
    puVar5 = &uStack_90;
    pppuVar12 = &ppuStack_100;
    FUN_108c7f678(puVar5,pppuVar12,&lStack_208,&uStack_228);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_208 != 0) {
      lStack_200 = lStack_208;
      __ZdlPv();
    }
    if (lStack_220 != 0) {
      lStack_218 = lStack_220;
      __ZdlPv();
    }
    plVar14 = plStack_98;
    ppuStack_100 = &PTR_SUB_1108629c8;
    plStack_98 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_a0;
    plStack_a0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_b8 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_110;
    ppuStack_178 = &PTR_SUB_1108629c8;
    plStack_110 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_118;
    plStack_118 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_130 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_188;
    ppuStack_1f0 = &PTR_SUB_1108629c8;
    plStack_188 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_190;
    plStack_190 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_1a8 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_80);
    _objc_release(uStack_88);
  }
  else {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == (undefined **)0x0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_90,param_1);
    }
    puVar2 = &uStack_101;
    FUN_108c2e2f8();
    puVar3 = &uStack_179;
    func_0x000107c2a7fc();
    uStack_1e8 = 0xf;
    uStack_1d8 = 0x100;
    uStack_1c0 = 0;
    ppuStack_1f0 = &PTR_SUB_1108629c8;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    lStack_1a8 = 0;
    plStack_190 = (long *)0x0;
    uStack_198 = 0;
    plStack_188 = (long *)0x0;
    bStack_15e = puVar3[0x1a];
    bStack_15d = puVar3[0x1b];
    uStack_170 = 10;
    uStack_160 = 0x100;
    ppuStack_178 = &PTR_SUB_1108629c8;
    pppuStack_138 = &ppuStack_1f0;
    uStack_128 = 0;
    lStack_130 = 0;
    plStack_118 = (long *)0x0;
    uStack_120 = 0;
    plStack_110 = (long *)0x0;
    bStack_e6 = puVar2[0x1a] | bStack_15e;
    bStack_e5 = puVar2[0x1b] & bStack_15d;
    uStack_f8 = 4;
    uStack_e8 = 0x100;
    ppuStack_100 = &PTR_SUB_1108629c8;
    pppuStack_c0 = &ppuStack_178;
    uStack_b0 = 0;
    lStack_b8 = 0;
    plStack_a0 = (long *)0x0;
    uStack_a8 = 0;
    plStack_98 = (long *)0x0;
    puVar4 = &uStack_221;
    puStack_140 = puVar3;
    puStack_c8 = puVar2;
    FUN_108c2db04();
    uStack_78 = *(undefined8 *)(puVar4 + 0x10);
    uStack_70 = puVar4[0x19];
    uStack_6f = puVar4[0x18];
    uStack_60 = *(undefined8 *)(puVar4 + 0x28);
    uStack_6c = 1;
    pcStack_68 = FUN_108bf5ed4;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_220 = 0;
    func_0x000100c435d0(&lStack_220,&uStack_78,&lStack_58,1);
    func_0x000100c436b8(&lStack_208,&lStack_220);
    uStack_228 = 0;
    puVar5 = &uStack_90;
    pppuVar12 = &ppuStack_100;
    FUN_108c7f678(puVar5,pppuVar12,&lStack_208,&uStack_228);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_208 != 0) {
      lStack_200 = lStack_208;
      __ZdlPv();
    }
    if (lStack_220 != 0) {
      lStack_218 = lStack_220;
      __ZdlPv();
    }
    plVar14 = plStack_98;
    ppuStack_100 = &PTR_SUB_1108629c8;
    plStack_98 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_a0;
    plStack_a0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_b8 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_110;
    ppuStack_178 = &PTR_SUB_1108629c8;
    plStack_110 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_118;
    plStack_118 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_130 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_188;
    ppuStack_1f0 = &PTR_SUB_1108629c8;
    plStack_188 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_190;
    plStack_190 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_1a8 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_80);
    _objc_release(uStack_88);
  }
  _objc_release(param_2);
  ppuVar17 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_100);
    func_0x000105007830(&ppuStack_178);
    func_0x000105007830(&ppuStack_1f0);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    pcStack_238 = FUN_108bf16a0;
    alStack_2a0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar12);
    pppuStack_648 = pppuVar12;
    ppuStack_640 = ppuVar17;
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (ppuVar17 == (undefined **)0x0) {
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_2d8,ppuVar17);
    }
    puVar3 = &uStack_429;
    FUN_108c2e2f8();
    puVar4 = &uStack_42a;
    FUN_108c2d860();
    bStack_40d = puVar3[0x1b] & puVar4[0x1b];
    bStack_40f = (puVar3[0x19] | puVar4[0x19]) & 1;
    bStack_40e = (puVar3[0x1a] | puVar4[0x1a]) & 1;
    uStack_420 = 4;
    uStack_410 = 0;
    ppuStack_428 = &PTR_SUB_1108629c8;
    plStack_3c0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
    uStack_3d0 = 0;
    uStack_3d8 = 0;
    lStack_3e0 = 0;
    puVar2 = &uStack_4a1;
    puStack_3f0 = puVar3;
    puStack_3e8 = puVar4;
    func_0x000107c2a7fc();
    uStack_510 = 0xf;
    uStack_500 = 0x100;
    uStack_4e8 = 0;
    ppuStack_518 = &PTR_SUB_1108629c8;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    lStack_4d0 = 0;
    plStack_4b8 = (long *)0x0;
    uStack_4c0 = 0;
    plStack_4b0 = (long *)0x0;
    bStack_486 = puVar2[0x1a];
    bStack_485 = puVar2[0x1b];
    uStack_498 = 10;
    uStack_488 = 0x100;
    ppuStack_4a0 = &PTR_SUB_1108629c8;
    pppuStack_460 = &ppuStack_518;
    plStack_438 = (long *)0x0;
    uStack_450 = 0;
    lStack_458 = 0;
    plStack_440 = (long *)0x0;
    uStack_448 = 0;
    bStack_39e = bStack_40e | bStack_486;
    bStack_39d = bStack_40d & bStack_485;
    uStack_3b0 = 4;
    uStack_3a0 = 0x100;
    ppuStack_3b8 = &PTR_SUB_1108629c8;
    pppuStack_380 = &ppuStack_428;
    pppuStack_378 = &ppuStack_4a0;
    uStack_368 = 0;
    lStack_370 = 0;
    plStack_358 = (long *)0x0;
    uStack_360 = 0;
    plStack_350 = (long *)0x0;
    puVar3 = &uStack_589;
    puStack_468 = puVar2;
    FUN_108c2dcd4();
    uStack_5f8 = 0xf;
    uStack_5e8 = 0x100;
    uStack_5d0 = 0;
    ppuStack_600 = &PTR_SUB_1108629c8;
    uStack_5c0 = 0;
    uStack_5c8 = 0;
    uStack_5b0 = 0;
    lStack_5b8 = 0;
    plStack_5a0 = (long *)0x0;
    uStack_5a8 = 0;
    plStack_598 = (long *)0x0;
    bStack_56e = puVar3[0x1a];
    bStack_56d = puVar3[0x1b];
    uStack_580 = 10;
    uStack_570 = 0x100;
    ppuStack_588 = &PTR_SUB_1108629c8;
    pppuStack_548 = &ppuStack_600;
    plStack_520 = (long *)0x0;
    uStack_538 = 0;
    lStack_540 = 0;
    plStack_528 = (long *)0x0;
    uStack_530 = 0;
    bStack_32e = bStack_39e | bStack_56e;
    bStack_32d = bStack_39d & bStack_56d;
    uStack_340 = 4;
    uStack_330 = 0x100;
    ppuStack_348 = &PTR_SUB_1108629c8;
    pppuStack_310 = &ppuStack_3b8;
    pppuStack_308 = &ppuStack_588;
    uStack_2f8 = 0;
    lStack_300 = 0;
    plStack_2e8 = (long *)0x0;
    uStack_2f0 = 0;
    plStack_2e0 = (long *)0x0;
    puVar4 = &uStack_631;
    puStack_550 = puVar3;
    FUN_108c2db04();
    uStack_2c0 = *(undefined8 *)(puVar4 + 0x10);
    uStack_2b8 = puVar4[0x19];
    uStack_2b7 = puVar4[0x18];
    uStack_2a8 = *(undefined8 *)(puVar4 + 0x28);
    uStack_2b4 = 1;
    pcStack_2b0 = FUN_108bf5ed4;
    lStack_628 = 0;
    uStack_620 = 0;
    lStack_630 = 0;
    func_0x000100c435d0(&lStack_630,&uStack_2c0,alStack_2a0,1);
    func_0x000100c436b8(&lStack_618,&lStack_630);
    uStack_638 = 200;
    puVar5 = &uStack_2d8;
    pppuVar12 = &ppuStack_348;
    FUN_108c7f678(puVar5,pppuVar12,&lStack_618,&uStack_638);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_618 != 0) {
      lStack_610 = lStack_618;
      __ZdlPv();
    }
    ppuVar17 = ppuStack_640;
    pppuVar8 = pppuStack_648;
    if (lStack_630 != 0) {
      lStack_628 = lStack_630;
      __ZdlPv();
    }
    plVar14 = plStack_2e0;
    ppuStack_348 = &PTR_SUB_1108629c8;
    plStack_2e0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_2e8;
    plStack_2e8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_300 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_520;
    ppuStack_588 = &PTR_SUB_1108629c8;
    plStack_520 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_528;
    plStack_528 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_540 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_598;
    ppuStack_600 = &PTR_SUB_1108629c8;
    plStack_598 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_5a0;
    plStack_5a0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_5b8 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_350;
    ppuStack_3b8 = &PTR_SUB_1108629c8;
    plStack_350 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_358;
    plStack_358 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_370 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_438;
    ppuStack_4a0 = &PTR_SUB_1108629c8;
    plStack_438 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_440;
    plStack_440 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_458 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_4b0;
    ppuStack_518 = &PTR_SUB_1108629c8;
    plStack_4b0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_4b8;
    plStack_4b8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_4d0 != 0) {
      __ZdlPv();
    }
    plVar14 = plStack_3c0;
    ppuStack_428 = &PTR_SUB_1108629c8;
    plStack_3c0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    plVar14 = plStack_3c8;
    plStack_3c8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))();
    }
    if (lStack_3e0 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_2c8);
    _objc_release(uStack_2d0);
    _objc_release(pppuVar8);
    ppuVar6 = ppuVar17;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_2a0[0]) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_348);
      func_0x000105007830(&ppuStack_588);
      func_0x000105007830(&ppuStack_600);
      func_0x000105007830(&ppuStack_3b8);
      func_0x000105007830(&ppuStack_4a0);
      func_0x000105007830(&ppuStack_518);
      func_0x000105007830(&ppuStack_428);
      _objc_release(uStack_2c8);
      _objc_release(uStack_2d0);
      _objc_release(pppuStack_648);
      _objc_release(ppuStack_640);
      ppuVar15 = ppuVar6;
      __Unwind_Resume();
      puStack_680 = &UNK_1108629b8;
      pppuStack_670 = pppuVar8;
      ppuStack_668 = ppuVar17;
      pcStack_658 = FUN_108bf1c4c;
      lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_6a0 = &ppuStack_518;
      pppuStack_698 = &ppuStack_428;
      pppuStack_690 = &ppuStack_600;
      pppuStack_688 = &ppuStack_348;
      ppuStack_678 = ppuVar6;
      ppuStack_660 = &puStack_240;
      _objc_retain();
      _objc_retain(pppuVar12);
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (ppuVar15 == (undefined **)0x0) {
        uStack_6e0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_6e0,ppuVar15);
      }
      puVar2 = &uStack_751;
      func_0x000100c43338();
      puVar3 = &uStack_7c9;
      func_0x000107c2a7fc();
      uStack_838 = 0xf;
      uStack_828 = 0x100;
      uStack_810 = 0;
      ppuStack_840 = &PTR_SUB_1108629c8;
      uStack_800 = 0;
      uStack_808 = 0;
      uStack_7f0 = 0;
      lStack_7f8 = 0;
      plStack_7e0 = (long *)0x0;
      uStack_7e8 = 0;
      plStack_7d8 = (long *)0x0;
      bStack_7ae = puVar3[0x1a];
      bStack_7ad = puVar3[0x1b];
      uStack_7c0 = 10;
      uStack_7b0 = 0x100;
      ppuStack_7c8 = &PTR_SUB_1108629c8;
      pppuStack_788 = &ppuStack_840;
      uStack_778 = 0;
      lStack_780 = 0;
      plStack_768 = (long *)0x0;
      uStack_770 = 0;
      plStack_760 = (long *)0x0;
      bStack_736 = puVar2[0x1a] | bStack_7ae;
      bStack_735 = puVar2[0x1b] & bStack_7ad;
      uStack_748 = 4;
      uStack_738 = 0x100;
      ppuStack_750 = &PTR_SUB_1108629c8;
      pppuStack_710 = &ppuStack_7c8;
      uStack_700 = 0;
      lStack_708 = 0;
      plStack_6f0 = (long *)0x0;
      uStack_6f8 = 0;
      plStack_6e8 = (long *)0x0;
      puVar4 = &uStack_871;
      puStack_790 = puVar3;
      puStack_718 = puVar2;
      func_0x000100c434a4();
      uStack_6c8 = *(undefined8 *)(puVar4 + 0x10);
      uStack_6c0 = puVar4[0x19];
      uStack_6bf = puVar4[0x18];
      uStack_6b0 = *(undefined8 *)(puVar4 + 0x28);
      uStack_6bc = 1;
      pcStack_6b8 = FUN_108bf5ed4;
      lStack_868 = 0;
      uStack_860 = 0;
      lStack_870 = 0;
      func_0x000100c435d0(&lStack_870,&uStack_6c8,&lStack_6a8,1);
      func_0x000100c436b8(&lStack_858,&lStack_870);
      uStack_878 = 0;
      puVar5 = &uStack_6e0;
      pppuVar8 = &ppuStack_750;
      plVar14 = &lStack_858;
      FUN_108c7f678(puVar5,pppuVar8,plVar14,&uStack_878);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_858 != 0) {
        lStack_850 = lStack_858;
        __ZdlPv();
      }
      if (lStack_870 != 0) {
        lStack_868 = lStack_870;
        __ZdlPv();
      }
      plVar1 = plStack_6e8;
      ppuStack_750 = &PTR_SUB_1108629c8;
      plStack_6e8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_6f0;
      plStack_6f0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_708 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_760;
      ppuStack_7c8 = &PTR_SUB_1108629c8;
      plStack_760 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_768;
      plStack_768 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_780 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_7d8;
      ppuStack_840 = &PTR_SUB_1108629c8;
      plStack_7d8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_7e0;
      plStack_7e0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_7f8 != 0) {
        __ZdlPv();
      }
      _objc_release(uStack_6d0);
      _objc_release(uStack_6d8);
      _objc_release(pppuVar12);
      ppuVar17 = ppuVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_750);
        func_0x000105007830(&ppuStack_7c8);
        func_0x000105007830(&ppuStack_840);
        _objc_release(uStack_6d0);
        _objc_release(uStack_6d8);
        _objc_release(pppuVar12);
        _objc_release(ppuVar15);
        ppuVar6 = ppuVar17;
        __Unwind_Resume();
        ppuStack_8d0 = &PTR_SUB_1108629c8;
        uStack_8c8 = 4;
        puStack_8b0 = &UNK_1108629b8;
        pcStack_888 = FUN_108bf1fa4;
        alStack_8f0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_8e0 = &ppuStack_518;
        pppuStack_8d8 = &ppuStack_428;
        pppuStack_8c0 = &ppuStack_840;
        pppuStack_8b8 = &ppuStack_750;
        ppuStack_8a8 = ppuVar17;
        pppuStack_8a0 = pppuVar12;
        ppuStack_898 = ppuVar15;
        ppuStack_890 = &ppuStack_660;
        _objc_retain();
        _objc_retain(pppuVar8);
        _objc_retain(plVar14);
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (ppuVar6 == (undefined **)0x0) {
          uStack_928 = 0;
          uStack_920 = 0;
          uStack_918 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_928,ppuVar6);
        }
        puVar3 = &uStack_a09;
        func_0x000100c486cc();
        puVar4 = &uStack_a81;
        func_0x000107c2a7f8(puVar4);
        FUN_108bf2478(apuStack_aa0,plVar14);
        func_0x000107c281a0(appuStack_a80,0xd,puVar4,apuStack_aa0);
        bStack_9ed = puVar3[0x1b] & bStack_a65;
        bStack_9ef = (puVar3[0x19] | bStack_a67) & 1;
        bStack_9ee = (puVar3[0x1a] | bStack_a66) & 1;
        uStack_a00 = 4;
        uStack_9f0 = 0;
        puVar16 = &UNK_1108629b8;
        ppuVar17 = &PTR_SUB_1108629c8;
        ppuStack_a08 = &PTR_SUB_1108629c8;
        uStack_9b8 = 0;
        lStack_9c0 = 0;
        plStack_9a8 = (long *)0x0;
        uStack_9b0 = 0;
        plStack_9a0 = (long *)0x0;
        puVar4 = &uStack_b11;
        puStack_9d0 = puVar3;
        pppuStack_9c8 = appuStack_a80;
        func_0x000107c2a7fc();
        uStack_b80 = 0xf;
        uStack_b70 = 0x100;
        uStack_b58 = 0;
        ppuStack_b88 = &PTR_SUB_1108629c8;
        uStack_b48 = 0;
        uStack_b50 = 0;
        uStack_b38 = 0;
        lStack_b40 = 0;
        plStack_b28 = (long *)0x0;
        uStack_b30 = 0;
        plStack_b20 = (long *)0x0;
        bStack_af6 = puVar4[0x1a];
        bStack_af5 = puVar4[0x1b];
        uStack_b08 = 10;
        uStack_af8 = 0x100;
        ppuStack_b10 = &PTR_SUB_1108629c8;
        pppuStack_ad0 = &ppuStack_b88;
        plStack_aa8 = (long *)0x0;
        uStack_ac0 = 0;
        lStack_ac8 = 0;
        plStack_ab0 = (long *)0x0;
        uStack_ab8 = 0;
        bStack_97e = bStack_9ee | bStack_af6;
        bStack_97d = bStack_9ed & bStack_af5;
        uStack_990 = 4;
        uStack_980 = 0x100;
        ppuStack_998 = &PTR_SUB_1108629c8;
        pppuStack_960 = &ppuStack_a08;
        pppuStack_958 = &ppuStack_b10;
        uStack_948 = 0;
        lStack_950 = 0;
        plStack_938 = (long *)0x0;
        uStack_940 = 0;
        plStack_930 = (long *)0x0;
        puVar3 = &uStack_bb9;
        puStack_ad8 = puVar4;
        func_0x000100c434a4();
        uStack_910 = *(undefined8 *)(puVar3 + 0x10);
        uStack_908 = puVar3[0x19];
        uStack_907 = puVar3[0x18];
        uStack_8f8 = *(undefined8 *)(puVar3 + 0x28);
        uStack_904 = 1;
        pcStack_900 = FUN_108bf5ed4;
        lStack_bb0 = 0;
        uStack_ba8 = 0;
        lStack_bb8 = 0;
        func_0x000100c435d0(&lStack_bb8,&uStack_910,alStack_8f0,1);
        func_0x000100c436b8(&lStack_ba0,&lStack_bb8);
        uStack_bc0 = 0;
        puVar5 = &uStack_928;
        pppuVar12 = &ppuStack_998;
        FUN_108c7f678(puVar5,pppuVar12,&lStack_ba0,&uStack_bc0);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_ba0 != 0) {
          lStack_b98 = lStack_ba0;
          __ZdlPv();
        }
        if (lStack_bb8 != 0) {
          lStack_bb0 = lStack_bb8;
          __ZdlPv();
        }
        plVar1 = plStack_930;
        ppuStack_998 = &PTR_SUB_1108629c8;
        plStack_930 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_938;
        plStack_938 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_950 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_aa8;
        ppuStack_b10 = &PTR_SUB_1108629c8;
        plStack_aa8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_ab0;
        plStack_ab0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_ac8 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_b20;
        ppuStack_b88 = &PTR_SUB_1108629c8;
        plStack_b20 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_b28;
        plStack_b28 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_b40 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_9a0;
        ppuStack_a08 = &PTR_SUB_1108629c8;
        plStack_9a0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_9a8;
        plStack_9a8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_9c0 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_a18;
        appuStack_a80[0] = &PTR_SUB_110862700;
        plStack_a18 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_a20;
        plStack_a20 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_b10 = apuStack_a38;
        func_0x000107c27dd4(&ppuStack_b10);
        ppuStack_b10 = apuStack_aa0;
        func_0x000107c27dd4(&ppuStack_b10);
        _objc_release(uStack_918);
        _objc_release(uStack_920);
        _objc_release(plVar14);
        _objc_release(pppuVar8);
        ppuVar15 = ppuVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_8f0[0]) {
          ___stack_chk_fail();
          func_0x000105007830(&ppuStack_998);
          func_0x000105007830(&ppuStack_b10);
          func_0x000105007830(&ppuStack_b88);
          func_0x000105007830(&ppuStack_a08);
          func_0x0001050048c0(appuStack_a80);
          ppuStack_b10 = apuStack_aa0;
          func_0x000107c27dd4(&ppuStack_b10);
          _objc_release(uStack_918);
          _objc_release(uStack_920);
          _objc_release(plVar14);
          _objc_release(pppuVar8);
          _objc_release(ppuVar6);
          ppuVar7 = ppuVar15;
          __Unwind_Resume();
          uVar13 = SUB84(&uStack_ce0,0);
          uStack_c10 = 4;
          ppuStack_c00 = &PTR_SUB_1108629c8;
          puStack_bf8 = &UNK_1108629b8;
          pcStack_bc8 = FUN_108bf2478;
          lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_c08 = appuStack_a80;
          ppuStack_bf0 = ppuVar15;
          plStack_be8 = plVar14;
          pppuStack_be0 = pppuVar8;
          ppuStack_bd8 = ppuVar6;
          ppuStack_bd0 = &ppuStack_890;
          _objc_retain(pppuVar12);
          ppuVar7[1] = (undefined *)0x0;
          ppuVar7[2] = (undefined *)0x0;
          *ppuVar7 = (undefined *)0x0;
          pppuVar8 = pppuVar12;
          func_0x00010bf529e0();
          func_0x000107c281a4(ppuVar7);
          lStack_cd8 = 0;
          uStack_ce0 = 0;
          uStack_cc8 = 0;
          puStack_cd0 = (undefined8 *)0x0;
          uStack_cb8 = 0;
          uStack_cc0 = 0;
          uStack_ca8 = 0;
          uStack_cb0 = 0;
          _objc_retain(pppuVar12);
          pppuVar9 = pppuVar12;
          func_0x00010bf52a60();
          if (pppuVar9 != (undefined ***)0x0) {
            puVar16 = (undefined *)*puStack_cd0;
            do {
              ppuVar17 = (undefined **)0x0;
              do {
                if ((undefined *)*puStack_cd0 != puVar16) {
                  _objc_enumerationMutation(pppuVar12);
                }
                ppuVar15 = *(undefined ***)(lStack_cd8 + (long)ppuVar17 * 8);
                _objc_retain(ppuVar15);
                pppuVar8 = appuStack_ca0;
                appuStack_ca0[0] = ppuVar15;
                func_0x000107c281a8(ppuVar7);
                _objc_release(appuStack_ca0[0]);
                ppuVar17 = (undefined **)((long)ppuVar17 + 1);
              } while (pppuVar9 != (undefined ***)ppuVar17);
              pppuVar9 = pppuVar12;
              uVar13 = (int)&uStack_ce0;
              func_0x00010bf52a60();
            } while (pppuVar9 != (undefined ***)0x0);
          }
          _objc_release(pppuVar12);
          pppuVar9 = pppuVar12;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
            return;
          }
          ___stack_chk_fail();
          if ((int)pppuVar8 == 0) {
            __Unwind_Resume();
          }
          func_0x000104bd46a0();
          pcStack_ce8 = FUN_108bf25dc;
          lStack_d38 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_d30 = &ppuStack_b88;
          pppuStack_d28 = &ppuStack_a08;
          pppuStack_d20 = (undefined ***)ppuVar17;
          puStack_d18 = puVar16;
          ppuStack_d10 = ppuVar15;
          uStack_d08 = 0;
          ppuStack_d00 = ppuVar7;
          pppuStack_cf8 = pppuVar12;
          ppuStack_cf0 = &ppuStack_bd0;
          _objc_retain();
          _objc_retain(pppuVar8);
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (pppuVar9 == (undefined ***)0x0) {
            uStack_d70 = 0;
            uStack_d68 = 0;
            uStack_d60 = 0;
          }
          else {
            func_0x00010bfa8fc0(&uStack_d70,pppuVar9);
          }
          puVar2 = &uStack_de1;
          func_0x000100c43338();
          puVar3 = &uStack_e59;
          func_0x000107c2a7fc();
          uStack_ec8 = 0xf;
          uStack_eb8 = 0x100;
          uStack_ea0 = 0;
          ppuStack_ed0 = &PTR_SUB_1108629c8;
          uVar18 = 0;
          uStack_e90 = 0;
          uStack_e98 = 0;
          uStack_e80 = 0;
          lStack_e88 = 0;
          plStack_e70 = (long *)0x0;
          uStack_e78 = 0;
          plStack_e68 = (long *)0x0;
          bStack_e3e = puVar3[0x1a];
          bStack_e3d = puVar3[0x1b];
          uStack_e50 = 10;
          uStack_e40 = 0x100;
          ppuStack_e58 = &PTR_SUB_1108629c8;
          pppuStack_e18 = &ppuStack_ed0;
          uStack_e08 = 0;
          lStack_e10 = 0;
          plStack_df8 = (long *)0x0;
          uStack_e00 = 0;
          plStack_df0 = (long *)0x0;
          bStack_dc6 = puVar2[0x1a] | bStack_e3e;
          bStack_dc5 = puVar2[0x1b] & bStack_e3d;
          uStack_dd8 = 4;
          uStack_dc8 = 0x100;
          ppuStack_de0 = &PTR_SUB_1108629c8;
          pppuStack_da0 = &ppuStack_e58;
          uStack_d90 = 0;
          lStack_d98 = 0;
          plStack_d80 = (long *)0x0;
          uStack_d88 = 0;
          plStack_d78 = (long *)0x0;
          puVar4 = &uStack_f01;
          puStack_e20 = puVar3;
          puStack_da8 = puVar2;
          func_0x000100c434a4();
          uStack_d58 = *(undefined8 *)(puVar4 + 0x10);
          uStack_d50 = puVar4[0x19];
          uStack_d4f = puVar4[0x18];
          uStack_d40 = *(undefined8 *)(puVar4 + 0x28);
          uStack_d4c = 1;
          pcStack_d48 = FUN_108bf5ed4;
          lStack_ef8 = 0;
          uStack_ef0 = 0;
          lStack_f00 = 0;
          func_0x000100c435d0(&lStack_f00,&uStack_d58,&lStack_d38,1);
          func_0x000100c436b8(&lStack_ee8,&lStack_f00);
          puVar5 = &uStack_d70;
          pppuVar12 = &ppuStack_de0;
          uStack_f08 = uVar13;
          FUN_108c7f678(puVar5,pppuVar12,&lStack_ee8,&uStack_f08);
          _objc_retainAutoreleasedReturnValue();
          if (lStack_ee8 != 0) {
            lStack_ee0 = lStack_ee8;
            __ZdlPv();
          }
          if (lStack_f00 != 0) {
            lStack_ef8 = lStack_f00;
            __ZdlPv();
          }
          plVar14 = plStack_d78;
          ppuStack_de0 = &PTR_SUB_1108629c8;
          plStack_d78 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_d80;
          plStack_d80 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_d98 != 0) {
            __ZdlPv();
          }
          plVar14 = plStack_df0;
          ppuStack_e58 = &PTR_SUB_1108629c8;
          plStack_df0 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_df8;
          plStack_df8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_e10 != 0) {
            __ZdlPv();
          }
          plVar14 = plStack_e68;
          ppuStack_ed0 = &PTR_SUB_1108629c8;
          plStack_e68 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_e70;
          plStack_e70 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_e88 != 0) {
            __ZdlPv();
          }
          _objc_release(uStack_d60);
          _objc_release(uStack_d68);
          _objc_release(pppuVar8);
          pppuVar10 = pppuVar9;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d38) {
            ___stack_chk_fail();
            func_0x000105007830(&ppuStack_de0);
            func_0x000105007830(&ppuStack_e58);
            func_0x000105007830(&ppuStack_ed0);
            _objc_release(uStack_d60);
            _objc_release(uStack_d68);
            _objc_release(pppuVar8);
            _objc_release(pppuVar9);
            __Unwind_Resume();
            pcStack_f18 = FUN_108bf2938;
            alStack_f90[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_f20 = &ppuStack_cf0;
            _objc_retain();
            _objc_retain(pppuVar12);
            _objc_opt_class(PTR_PTR_1126b15c8);
            if (pppuVar10 == (undefined ***)0x0) {
              uStack_fc8 = 0;
              uStack_fc0 = 0;
              uStack_fb8 = 0;
            }
            else {
              func_0x00010bfa8fc0(&uStack_fc8,pppuVar10);
            }
            puVar3 = &uStack_10a9;
            func_0x000100c43338();
            puVar4 = &uStack_1121;
            func_0x000107c2a7fc();
            uStack_1190 = 0xf;
            uStack_1180 = 0x100;
            uStack_1168 = 0;
            ppuStack_1198 = &PTR_SUB_1108629c8;
            uStack_1158 = 0;
            uStack_1160 = 0;
            uStack_1148 = 0;
            lStack_1150 = 0;
            plStack_1138 = (long *)0x0;
            uStack_1140 = 0;
            plStack_1130 = (long *)0x0;
            bStack_1106 = puVar4[0x1a];
            bStack_1105 = puVar4[0x1b];
            uStack_1118 = 10;
            uStack_1108 = 0x100;
            ppuStack_1120 = &PTR_SUB_1108629c8;
            pppuStack_10e0 = &ppuStack_1198;
            uStack_10d0 = 0;
            lStack_10d8 = 0;
            plStack_10c0 = (long *)0x0;
            uStack_10c8 = 0;
            plStack_10b8 = (long *)0x0;
            bStack_108e = puVar3[0x1a] | bStack_1106;
            bStack_108d = puVar3[0x1b] & bStack_1105;
            uStack_10a0 = 4;
            uStack_1090 = 0x100;
            ppuStack_10a8 = &PTR_SUB_1108629c8;
            pppuStack_1068 = &ppuStack_1120;
            uStack_1058 = 0;
            lStack_1060 = 0;
            plStack_1048 = (long *)0x0;
            uStack_1050 = 0;
            plStack_1040 = (long *)0x0;
            puVar2 = &uStack_1209;
            puStack_10e8 = puVar4;
            puStack_1070 = puVar3;
            func_0x000100c434a4();
            uStack_1278 = 0xf;
            uStack_1268 = 0x100;
            ppuStack_1280 = &PTR_SUB_11086d7d0;
            uStack_1240 = 0;
            uStack_1248 = 0;
            lStack_1230 = 0;
            lStack_1238 = 0;
            plStack_1220 = (long *)0x0;
            uStack_1228 = 0;
            plStack_1218 = (long *)0x0;
            bStack_11ee = puVar2[0x1a];
            bStack_11ed = puVar2[0x1b];
            uStack_1200 = 6;
            uStack_11f0 = 0x100;
            ppuStack_1208 = &PTR_SUB_11089b010;
            pppuStack_11c8 = &ppuStack_1280;
            plStack_11a0 = (long *)0x0;
            lStack_11b8 = 0;
            lStack_11c0 = 0;
            plStack_11a8 = (long *)0x0;
            uStack_11b0 = 0;
            bStack_101e = bStack_108e | bStack_11ee;
            bStack_101d = bStack_108d & bStack_11ed;
            uStack_1030 = 4;
            uStack_1020 = 0x100;
            ppuStack_1038 = &PTR_SUB_1108629c8;
            pppuStack_1000 = &ppuStack_10a8;
            pppuStack_ff8 = &ppuStack_1208;
            uStack_fe8 = 0;
            lStack_ff0 = 0;
            plStack_fd8 = (long *)0x0;
            uStack_fe0 = 0;
            plStack_fd0 = (long *)0x0;
            puVar3 = &uStack_12b1;
            uStack_1250 = uVar18;
            puStack_11d0 = puVar2;
            func_0x000100c434a4();
            uStack_fb0 = *(undefined8 *)(puVar3 + 0x10);
            uStack_fa8 = puVar3[0x19];
            uStack_fa7 = puVar3[0x18];
            uStack_f98 = *(undefined8 *)(puVar3 + 0x28);
            uStack_fa4 = 1;
            pcStack_fa0 = FUN_108bf5ed4;
            lStack_12a8 = 0;
            uStack_12a0 = 0;
            lStack_12b0 = 0;
            func_0x000100c435d0(&lStack_12b0,&uStack_fb0,alStack_f90,1);
            func_0x000100c436b8(&lStack_1298,&lStack_12b0);
            uStack_12b8 = 0;
            puVar5 = &uStack_fc8;
            pppuVar8 = &ppuStack_1038;
            FUN_108c7f678(puVar5,pppuVar8,&lStack_1298,&uStack_12b8);
            _objc_retainAutoreleasedReturnValue();
            if (lStack_1298 != 0) {
              lStack_1290 = lStack_1298;
              __ZdlPv();
            }
            if (lStack_12b0 != 0) {
              lStack_12a8 = lStack_12b0;
              __ZdlPv();
            }
            plVar14 = plStack_fd0;
            ppuStack_1038 = &PTR_SUB_1108629c8;
            plStack_fd0 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_fd8;
            plStack_fd8 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_ff0 != 0) {
              __ZdlPv();
            }
            plVar14 = plStack_11a0;
            ppuStack_1208 = &PTR_SUB_11089b010;
            plStack_11a0 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_11a8;
            plStack_11a8 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_11c0 != 0) {
              lStack_11b8 = lStack_11c0;
              __ZdlPv();
            }
            plVar14 = plStack_1218;
            ppuStack_1280 = &PTR_SUB_11086d7d0;
            plStack_1218 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_1220;
            plStack_1220 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_1238 != 0) {
              lStack_1230 = lStack_1238;
              __ZdlPv();
            }
            plVar14 = plStack_1040;
            ppuStack_10a8 = &PTR_SUB_1108629c8;
            plStack_1040 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_1048;
            plStack_1048 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_1060 != 0) {
              __ZdlPv();
            }
            plVar14 = plStack_10b8;
            ppuStack_1120 = &PTR_SUB_1108629c8;
            plStack_10b8 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_10c0;
            plStack_10c0 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_10d8 != 0) {
              __ZdlPv();
            }
            plVar14 = plStack_1130;
            ppuStack_1198 = &PTR_SUB_1108629c8;
            plStack_1130 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_1138;
            plStack_1138 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_1150 != 0) {
              __ZdlPv();
            }
            _objc_release(uStack_fb8);
            _objc_release(uStack_fc0);
            _objc_release(pppuVar12);
            pppuVar9 = pppuVar10;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_f90[0]) {
              ___stack_chk_fail();
              func_0x000105007830(&ppuStack_1038);
              func_0x0001055b9024(&ppuStack_1208);
              func_0x000105187b98(&ppuStack_1280);
              func_0x000105007830(&ppuStack_10a8);
              func_0x000105007830(&ppuStack_1120);
              func_0x000105007830(&ppuStack_1198);
              _objc_release(uStack_fb8);
              _objc_release(uStack_fc0);
              _objc_release(&UNK_1108629b8);
              _objc_release(pppuVar10);
              pppuVar11 = pppuVar9;
              __Unwind_Resume();
              puStack_1300 = &UNK_11089b000;
              puStack_12f8 = &UNK_11086d7c0;
              puStack_12f0 = &UNK_1108629b8;
              pcStack_12c8 = FUN_108bf2e5c;
              pppuStack_1310 = &ppuStack_1280;
              pppuStack_1308 = &ppuStack_10a8;
              pppuStack_12e8 = pppuVar9;
              pppuStack_12e0 = pppuVar12;
              pppuStack_12d8 = pppuVar10;
              ppuStack_12d0 = &ppuStack_f20;
              _objc_retain();
              _objc_retain(pppuVar8);
              _objc_opt_class(PTR_PTR_1126b15c8);
              if (pppuVar11 == (undefined ***)0x0) {
                uStack_1328 = 0;
                uStack_1320 = 0;
                uStack_1318 = 0;
              }
              else {
                func_0x00010bfa8fc0(&uStack_1328,pppuVar11);
              }
              puVar4 = &uStack_1399;
              FUN_108c2e464();
              puVar3 = &uStack_1411;
              func_0x000107c2a7fc();
              uStack_1480 = 0xf;
              uStack_1470 = 0x100;
              uStack_1458 = 0;
              ppuStack_1488 = &PTR_SUB_1108629c8;
              uStack_1448 = 0;
              uStack_1450 = 0;
              uStack_1438 = 0;
              lStack_1440 = 0;
              plStack_1428 = (long *)0x0;
              uStack_1430 = 0;
              plStack_1420 = (long *)0x0;
              bStack_13f6 = puVar3[0x1a];
              bStack_13f5 = puVar3[0x1b];
              uStack_1408 = 10;
              uStack_13f8 = 0x100;
              ppuStack_1410 = &PTR_SUB_1108629c8;
              uStack_13c0 = 0;
              lStack_13c8 = 0;
              plStack_13b0 = (long *)0x0;
              uStack_13b8 = 0;
              plStack_13a8 = (long *)0x0;
              bStack_137e = puVar4[0x1a] | bStack_13f6;
              bStack_137d = puVar4[0x1b] & bStack_13f5;
              uStack_1390 = 4;
              uStack_1380 = 0x100;
              ppuStack_1398 = &PTR_SUB_1108629c8;
              pppuStack_1358 = &ppuStack_1410;
              uStack_1348 = 0;
              lStack_1350 = 0;
              plStack_1338 = (long *)0x0;
              uStack_1340 = 0;
              plStack_1330 = (long *)0x0;
              lStack_14a0 = 0;
              lStack_1498 = 0;
              uStack_1490 = 0;
              uStack_14a4 = 0;
              puVar5 = &uStack_1328;
              puStack_13d8 = puVar3;
              pppuStack_13d0 = &ppuStack_1488;
              puStack_1360 = puVar4;
              FUN_108c7f678(puVar5,&ppuStack_1398,&lStack_14a0,&uStack_14a4);
              _objc_retainAutoreleasedReturnValue();
              if (lStack_14a0 != 0) {
                lStack_1498 = lStack_14a0;
                __ZdlPv();
              }
              plVar14 = plStack_1330;
              ppuStack_1398 = &PTR_SUB_1108629c8;
              plStack_1330 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
              plVar14 = plStack_1338;
              plStack_1338 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
              if (lStack_1350 != 0) {
                __ZdlPv();
              }
              plVar14 = plStack_13a8;
              ppuStack_1410 = &PTR_SUB_1108629c8;
              plStack_13a8 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
              plVar14 = plStack_13b0;
              plStack_13b0 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
              if (lStack_13c8 != 0) {
                __ZdlPv();
              }
              plVar14 = plStack_1420;
              ppuStack_1488 = &PTR_SUB_1108629c8;
              plStack_1420 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
              plVar14 = plStack_1428;
              plStack_1428 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
              if (lStack_1440 != 0) {
                __ZdlPv();
              }
              _objc_release(uStack_1318);
              _objc_release(uStack_1320);
              _objc_release(pppuVar8);
              _objc_release(pppuVar11);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108bf16a0; end: 108bf1c4b;  */

void FUN_108bf16a0(undefined **param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined4 uStack_1274;
  long lStack_1270;
  long lStack_1268;
  undefined8 uStack_1260;
  undefined **ppuStack_1258;
  undefined4 uStack_1250;
  undefined4 uStack_1240;
  undefined1 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  long lStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  long *plStack_11f8;
  long *plStack_11f0;
  undefined1 uStack_11e1;
  undefined **ppuStack_11e0;
  undefined4 uStack_11d8;
  undefined2 uStack_11c8;
  byte bStack_11c6;
  byte bStack_11c5;
  undefined1 *puStack_11a8;
  undefined ***pppuStack_11a0;
  long lStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  long *plStack_1180;
  long *plStack_1178;
  undefined1 uStack_1169;
  undefined **ppuStack_1168;
  undefined4 uStack_1160;
  undefined2 uStack_1150;
  byte bStack_114e;
  byte bStack_114d;
  undefined1 *puStack_1130;
  undefined ***pppuStack_1128;
  long lStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  long *plStack_1108;
  long *plStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined ***pppuStack_10e0;
  undefined ***pppuStack_10d8;
  undefined *puStack_10d0;
  undefined *puStack_10c8;
  undefined *puStack_10c0;
  undefined ***pppuStack_10b8;
  undefined ***pppuStack_10b0;
  undefined ***pppuStack_10a8;
  undefined8 **ppuStack_10a0;
  code *pcStack_1098;
  undefined4 uStack_1088;
  undefined1 uStack_1081;
  long lStack_1080;
  long lStack_1078;
  undefined8 uStack_1070;
  long lStack_1068;
  long lStack_1060;
  undefined **ppuStack_1050;
  undefined4 uStack_1048;
  undefined4 uStack_1038;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  long lStack_1000;
  undefined8 uStack_ff8;
  long *plStack_ff0;
  long *plStack_fe8;
  undefined1 uStack_fd9;
  undefined **ppuStack_fd8;
  undefined4 uStack_fd0;
  undefined2 uStack_fc0;
  byte bStack_fbe;
  byte bStack_fbd;
  undefined1 *puStack_fa0;
  undefined ***pppuStack_f98;
  long lStack_f90;
  long lStack_f88;
  undefined8 uStack_f80;
  long *plStack_f78;
  long *plStack_f70;
  undefined **ppuStack_f68;
  undefined4 uStack_f60;
  undefined4 uStack_f50;
  undefined1 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  long lStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  long *plStack_f08;
  long *plStack_f00;
  undefined1 uStack_ef1;
  undefined **ppuStack_ef0;
  undefined4 uStack_ee8;
  undefined2 uStack_ed8;
  byte bStack_ed6;
  byte bStack_ed5;
  undefined1 *puStack_eb8;
  undefined ***pppuStack_eb0;
  long lStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  long *plStack_e90;
  long *plStack_e88;
  undefined1 uStack_e79;
  undefined **ppuStack_e78;
  undefined4 uStack_e70;
  undefined2 uStack_e60;
  byte bStack_e5e;
  byte bStack_e5d;
  undefined1 *puStack_e40;
  undefined ***pppuStack_e38;
  long lStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  long *plStack_e18;
  long *plStack_e10;
  undefined **ppuStack_e08;
  undefined4 uStack_e00;
  undefined2 uStack_df0;
  byte bStack_dee;
  byte bStack_ded;
  undefined ***pppuStack_dd0;
  undefined ***pppuStack_dc8;
  long lStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  long *plStack_da8;
  long *plStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined1 uStack_d77;
  undefined4 uStack_d74;
  code *pcStack_d70;
  undefined8 uStack_d68;
  long alStack_d60 [2];
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined4 uStack_cd8;
  undefined1 uStack_cd1;
  long lStack_cd0;
  long lStack_cc8;
  undefined8 uStack_cc0;
  long lStack_cb8;
  long lStack_cb0;
  undefined **ppuStack_ca0;
  undefined4 uStack_c98;
  undefined4 uStack_c88;
  undefined1 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  long lStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  long *plStack_c40;
  long *plStack_c38;
  undefined1 uStack_c29;
  undefined **ppuStack_c28;
  undefined4 uStack_c20;
  undefined2 uStack_c10;
  byte bStack_c0e;
  byte bStack_c0d;
  undefined1 *puStack_bf0;
  undefined ***pppuStack_be8;
  long lStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  long *plStack_bc8;
  long *plStack_bc0;
  undefined1 uStack_bb1;
  undefined **ppuStack_bb0;
  undefined4 uStack_ba8;
  undefined2 uStack_b98;
  byte bStack_b96;
  byte bStack_b95;
  undefined1 *puStack_b78;
  undefined ***pppuStack_b70;
  long lStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  long *plStack_b50;
  long *plStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined1 uStack_b20;
  undefined1 uStack_b1f;
  undefined4 uStack_b1c;
  code *pcStack_b18;
  undefined8 uStack_b10;
  long lStack_b08;
  undefined ***pppuStack_b00;
  undefined ***pppuStack_af8;
  undefined ***pppuStack_af0;
  undefined *puStack_ae8;
  undefined **ppuStack_ae0;
  undefined8 uStack_ad8;
  undefined **ppuStack_ad0;
  undefined ***pppuStack_ac8;
  undefined8 **ppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined **appuStack_a70 [17];
  long lStack_9e8;
  undefined8 uStack_9e0;
  undefined ***pppuStack_9d8;
  undefined **ppuStack_9d0;
  undefined *puStack_9c8;
  undefined **ppuStack_9c0;
  long *plStack_9b8;
  undefined ***pppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 **ppuStack_9a0;
  code *pcStack_998;
  undefined4 uStack_990;
  undefined1 uStack_989;
  long lStack_988;
  long lStack_980;
  undefined8 uStack_978;
  long lStack_970;
  long lStack_968;
  undefined **ppuStack_958;
  undefined4 uStack_950;
  undefined4 uStack_940;
  undefined1 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  long lStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  long *plStack_8f8;
  long *plStack_8f0;
  undefined1 uStack_8e1;
  undefined **ppuStack_8e0;
  undefined4 uStack_8d8;
  undefined2 uStack_8c8;
  byte bStack_8c6;
  byte bStack_8c5;
  undefined1 *puStack_8a8;
  undefined ***pppuStack_8a0;
  long lStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  long *plStack_880;
  long *plStack_878;
  undefined *apuStack_870 [3];
  undefined1 uStack_851;
  undefined **appuStack_850 [3];
  byte bStack_837;
  byte bStack_836;
  byte bStack_835;
  undefined *apuStack_808 [3];
  long *plStack_7f0;
  long *plStack_7e8;
  undefined1 uStack_7d9;
  undefined **ppuStack_7d8;
  undefined4 uStack_7d0;
  undefined1 uStack_7c0;
  byte bStack_7bf;
  byte bStack_7be;
  byte bStack_7bd;
  undefined1 *puStack_7a0;
  undefined ***pppuStack_798;
  long lStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long *plStack_778;
  long *plStack_770;
  undefined **ppuStack_768;
  undefined4 uStack_760;
  undefined2 uStack_750;
  byte bStack_74e;
  byte bStack_74d;
  undefined ***pppuStack_730;
  undefined ***pppuStack_728;
  long lStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  long *plStack_708;
  long *plStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined1 uStack_6d8;
  undefined1 uStack_6d7;
  undefined4 uStack_6d4;
  code *pcStack_6d0;
  undefined8 uStack_6c8;
  long alStack_6c0 [2];
  undefined ***pppuStack_6b0;
  undefined ***pppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined8 uStack_698;
  undefined ***pppuStack_690;
  undefined ***pppuStack_688;
  undefined *puStack_680;
  undefined **ppuStack_678;
  undefined ***pppuStack_670;
  undefined **ppuStack_668;
  undefined1 **ppuStack_660;
  code *pcStack_658;
  undefined4 uStack_648;
  undefined1 uStack_641;
  long lStack_640;
  long lStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long lStack_620;
  undefined **ppuStack_610;
  undefined4 uStack_608;
  undefined4 uStack_5f8;
  undefined1 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long *plStack_5b0;
  long *plStack_5a8;
  undefined1 uStack_599;
  undefined **ppuStack_598;
  undefined4 uStack_590;
  undefined2 uStack_580;
  byte bStack_57e;
  byte bStack_57d;
  undefined1 *puStack_560;
  undefined ***pppuStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long *plStack_538;
  long *plStack_530;
  undefined1 uStack_521;
  undefined **ppuStack_520;
  undefined4 uStack_518;
  undefined2 uStack_508;
  byte bStack_506;
  byte bStack_505;
  undefined1 *puStack_4e8;
  undefined ***pppuStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 uStack_490;
  undefined1 uStack_48f;
  undefined4 uStack_48c;
  code *pcStack_488;
  undefined8 uStack_480;
  long lStack_478;
  undefined ***pppuStack_470;
  undefined ***pppuStack_468;
  undefined ***pppuStack_460;
  undefined ***pppuStack_458;
  undefined *puStack_450;
  undefined **ppuStack_448;
  undefined8 uStack_440;
  undefined **ppuStack_438;
  undefined1 *puStack_430;
  code *pcStack_428;
  undefined8 uStack_418;
  undefined **ppuStack_410;
  undefined4 uStack_408;
  undefined1 uStack_401;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3b8;
  undefined1 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined1 uStack_359;
  undefined **ppuStack_358;
  undefined4 uStack_350;
  undefined2 uStack_340;
  byte bStack_33e;
  byte bStack_33d;
  undefined1 *puStack_320;
  undefined ***pppuStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2d0;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined1 uStack_271;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined2 uStack_258;
  byte bStack_256;
  byte bStack_255;
  undefined1 *puStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined1 uStack_1fa;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1e0;
  byte bStack_1df;
  byte bStack_1de;
  byte bStack_1dd;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined2 uStack_170;
  byte bStack_16e;
  byte bStack_16d;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined **ppuStack_118;
  undefined4 uStack_110;
  undefined2 uStack_100;
  byte bStack_fe;
  byte bStack_fd;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined4 uStack_84;
  code *pcStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  uStack_418 = param_2;
  ppuStack_410 = param_1;
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == (undefined **)0x0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_a8,param_1);
  }
  puVar2 = &uStack_1f9;
  FUN_108c2e2f8();
  puVar3 = &uStack_1fa;
  FUN_108c2d860();
  bStack_1dd = puVar2[0x1b] & puVar3[0x1b];
  bStack_1df = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_1de = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_1f0 = 4;
  uStack_1e0 = 0;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  puVar4 = &uStack_271;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar3;
  func_0x000107c2a7fc();
  uStack_2e0 = 0xf;
  uStack_2d0 = 0x100;
  uStack_2b8 = 0;
  ppuStack_2e8 = &PTR_SUB_1108629c8;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  lStack_2a0 = 0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  plStack_280 = (long *)0x0;
  bStack_256 = puVar4[0x1a];
  bStack_255 = puVar4[0x1b];
  uStack_268 = 10;
  uStack_258 = 0x100;
  ppuStack_270 = &PTR_SUB_1108629c8;
  pppuStack_230 = &ppuStack_2e8;
  plStack_208 = (long *)0x0;
  uStack_220 = 0;
  lStack_228 = 0;
  plStack_210 = (long *)0x0;
  uStack_218 = 0;
  bStack_16e = bStack_1de | bStack_256;
  bStack_16d = bStack_1dd & bStack_255;
  uStack_180 = 4;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_1f8;
  pppuStack_148 = &ppuStack_270;
  uStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  puVar2 = &uStack_359;
  puStack_238 = puVar4;
  FUN_108c2dcd4();
  uStack_3c8 = 0xf;
  uStack_3b8 = 0x100;
  uStack_3a0 = 0;
  ppuStack_3d0 = &PTR_SUB_1108629c8;
  uStack_390 = 0;
  uStack_398 = 0;
  uStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  bStack_33e = puVar2[0x1a];
  bStack_33d = puVar2[0x1b];
  uStack_350 = 10;
  uStack_340 = 0x100;
  ppuStack_358 = &PTR_SUB_1108629c8;
  pppuStack_318 = &ppuStack_3d0;
  plStack_2f0 = (long *)0x0;
  uStack_308 = 0;
  lStack_310 = 0;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  bStack_fe = bStack_16e | bStack_33e;
  bStack_fd = bStack_16d & bStack_33d;
  uStack_110 = 4;
  uStack_100 = 0x100;
  ppuStack_118 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_188;
  pppuStack_d8 = &ppuStack_358;
  uStack_c8 = 0;
  lStack_d0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  plStack_b0 = (long *)0x0;
  puVar3 = &uStack_401;
  puStack_320 = puVar2;
  FUN_108c2db04();
  uStack_90 = *(undefined8 *)(puVar3 + 0x10);
  uStack_88 = puVar3[0x19];
  uStack_87 = puVar3[0x18];
  uStack_78 = *(undefined8 *)(puVar3 + 0x28);
  uStack_84 = 1;
  pcStack_80 = FUN_108bf5ed4;
  lStack_3f8 = 0;
  uStack_3f0 = 0;
  lStack_400 = 0;
  func_0x000100c435d0(&lStack_400,&uStack_90,alStack_70,1);
  func_0x000100c436b8(&lStack_3e8,&lStack_400);
  uStack_408 = 200;
  puVar5 = &uStack_a8;
  pppuVar12 = &ppuStack_118;
  FUN_108c7f678(puVar5,pppuVar12,&lStack_3e8,&uStack_408);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  ppuVar17 = ppuStack_410;
  uVar18 = uStack_418;
  if (lStack_400 != 0) {
    lStack_3f8 = lStack_400;
    __ZdlPv();
  }
  plVar14 = plStack_b0;
  ppuStack_118 = &PTR_SUB_1108629c8;
  plStack_b0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_b8;
  plStack_b8 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (lStack_d0 != 0) {
    __ZdlPv();
  }
  plVar14 = plStack_2f0;
  ppuStack_358 = &PTR_SUB_1108629c8;
  plStack_2f0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_2f8;
  plStack_2f8 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (lStack_310 != 0) {
    __ZdlPv();
  }
  plVar14 = plStack_368;
  ppuStack_3d0 = &PTR_SUB_1108629c8;
  plStack_368 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (lStack_388 != 0) {
    __ZdlPv();
  }
  plVar14 = plStack_120;
  ppuStack_188 = &PTR_SUB_1108629c8;
  plStack_120 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (lStack_140 != 0) {
    __ZdlPv();
  }
  plVar14 = plStack_208;
  ppuStack_270 = &PTR_SUB_1108629c8;
  plStack_208 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_210;
  plStack_210 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (lStack_228 != 0) {
    __ZdlPv();
  }
  plVar14 = plStack_280;
  ppuStack_2e8 = &PTR_SUB_1108629c8;
  plStack_280 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (lStack_2a0 != 0) {
    __ZdlPv();
  }
  plVar14 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uVar18);
  ppuVar6 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_118);
    func_0x000105007830(&ppuStack_358);
    func_0x000105007830(&ppuStack_3d0);
    func_0x000105007830(&ppuStack_188);
    func_0x000105007830(&ppuStack_270);
    func_0x000105007830(&ppuStack_2e8);
    func_0x000105007830(&ppuStack_1f8);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_418);
    _objc_release(ppuStack_410);
    ppuVar15 = ppuVar6;
    __Unwind_Resume();
    puStack_450 = &UNK_1108629b8;
    uStack_440 = uVar18;
    ppuStack_438 = ppuVar17;
    pcStack_428 = FUN_108bf1c4c;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_470 = &ppuStack_2e8;
    pppuStack_468 = &ppuStack_1f8;
    pppuStack_460 = &ppuStack_3d0;
    pppuStack_458 = &ppuStack_118;
    ppuStack_448 = ppuVar6;
    puStack_430 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar12);
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (ppuVar15 == (undefined **)0x0) {
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      uStack_4a0 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_4b0,ppuVar15);
    }
    puVar4 = &uStack_521;
    func_0x000100c43338();
    puVar2 = &uStack_599;
    func_0x000107c2a7fc();
    uStack_608 = 0xf;
    uStack_5f8 = 0x100;
    uStack_5e0 = 0;
    ppuStack_610 = &PTR_SUB_1108629c8;
    uStack_5d0 = 0;
    uStack_5d8 = 0;
    uStack_5c0 = 0;
    lStack_5c8 = 0;
    plStack_5b0 = (long *)0x0;
    uStack_5b8 = 0;
    plStack_5a8 = (long *)0x0;
    bStack_57e = puVar2[0x1a];
    bStack_57d = puVar2[0x1b];
    uStack_590 = 10;
    uStack_580 = 0x100;
    ppuStack_598 = &PTR_SUB_1108629c8;
    pppuStack_558 = &ppuStack_610;
    uStack_548 = 0;
    lStack_550 = 0;
    plStack_538 = (long *)0x0;
    uStack_540 = 0;
    plStack_530 = (long *)0x0;
    bStack_506 = puVar4[0x1a] | bStack_57e;
    bStack_505 = puVar4[0x1b] & bStack_57d;
    uStack_518 = 4;
    uStack_508 = 0x100;
    ppuStack_520 = &PTR_SUB_1108629c8;
    pppuStack_4e0 = &ppuStack_598;
    uStack_4d0 = 0;
    lStack_4d8 = 0;
    plStack_4c0 = (long *)0x0;
    uStack_4c8 = 0;
    plStack_4b8 = (long *)0x0;
    puVar3 = &uStack_641;
    puStack_560 = puVar2;
    puStack_4e8 = puVar4;
    func_0x000100c434a4();
    uStack_498 = *(undefined8 *)(puVar3 + 0x10);
    uStack_490 = puVar3[0x19];
    uStack_48f = puVar3[0x18];
    uStack_480 = *(undefined8 *)(puVar3 + 0x28);
    uStack_48c = 1;
    pcStack_488 = FUN_108bf5ed4;
    lStack_638 = 0;
    uStack_630 = 0;
    lStack_640 = 0;
    func_0x000100c435d0(&lStack_640,&uStack_498,&lStack_478,1);
    func_0x000100c436b8(&lStack_628,&lStack_640);
    uStack_648 = 0;
    puVar5 = &uStack_4b0;
    pppuVar8 = &ppuStack_520;
    plVar14 = &lStack_628;
    FUN_108c7f678(puVar5,pppuVar8,plVar14,&uStack_648);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_628 != 0) {
      lStack_620 = lStack_628;
      __ZdlPv();
    }
    if (lStack_640 != 0) {
      lStack_638 = lStack_640;
      __ZdlPv();
    }
    plVar1 = plStack_4b8;
    ppuStack_520 = &PTR_SUB_1108629c8;
    plStack_4b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4c0;
    plStack_4c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4d8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_530;
    ppuStack_598 = &PTR_SUB_1108629c8;
    plStack_530 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_538;
    plStack_538 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_550 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_5a8;
    ppuStack_610 = &PTR_SUB_1108629c8;
    plStack_5a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5b0;
    plStack_5b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_5c8 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_4a0);
    _objc_release(uStack_4a8);
    _objc_release(pppuVar12);
    ppuVar17 = ppuVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_520);
      func_0x000105007830(&ppuStack_598);
      func_0x000105007830(&ppuStack_610);
      _objc_release(uStack_4a0);
      _objc_release(uStack_4a8);
      _objc_release(pppuVar12);
      _objc_release(ppuVar15);
      ppuVar6 = ppuVar17;
      __Unwind_Resume();
      ppuStack_6a0 = &PTR_SUB_1108629c8;
      uStack_698 = 4;
      puStack_680 = &UNK_1108629b8;
      pcStack_658 = FUN_108bf1fa4;
      alStack_6c0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_6b0 = &ppuStack_2e8;
      pppuStack_6a8 = &ppuStack_1f8;
      pppuStack_690 = &ppuStack_610;
      pppuStack_688 = &ppuStack_520;
      ppuStack_678 = ppuVar17;
      pppuStack_670 = pppuVar12;
      ppuStack_668 = ppuVar15;
      ppuStack_660 = &puStack_430;
      _objc_retain();
      _objc_retain(pppuVar8);
      _objc_retain(plVar14);
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (ppuVar6 == (undefined **)0x0) {
        uStack_6f8 = 0;
        uStack_6f0 = 0;
        uStack_6e8 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_6f8,ppuVar6);
      }
      puVar2 = &uStack_7d9;
      func_0x000100c486cc();
      puVar3 = &uStack_851;
      func_0x000107c2a7f8(puVar3);
      FUN_108bf2478(apuStack_870,plVar14);
      func_0x000107c281a0(appuStack_850,0xd,puVar3,apuStack_870);
      bStack_7bd = puVar2[0x1b] & bStack_835;
      bStack_7bf = (puVar2[0x19] | bStack_837) & 1;
      bStack_7be = (puVar2[0x1a] | bStack_836) & 1;
      uStack_7d0 = 4;
      uStack_7c0 = 0;
      puVar16 = &UNK_1108629b8;
      ppuVar17 = &PTR_SUB_1108629c8;
      ppuStack_7d8 = &PTR_SUB_1108629c8;
      uStack_788 = 0;
      lStack_790 = 0;
      plStack_778 = (long *)0x0;
      uStack_780 = 0;
      plStack_770 = (long *)0x0;
      puVar3 = &uStack_8e1;
      puStack_7a0 = puVar2;
      pppuStack_798 = appuStack_850;
      func_0x000107c2a7fc();
      uStack_950 = 0xf;
      uStack_940 = 0x100;
      uStack_928 = 0;
      ppuStack_958 = &PTR_SUB_1108629c8;
      uStack_918 = 0;
      uStack_920 = 0;
      uStack_908 = 0;
      lStack_910 = 0;
      plStack_8f8 = (long *)0x0;
      uStack_900 = 0;
      plStack_8f0 = (long *)0x0;
      bStack_8c6 = puVar3[0x1a];
      bStack_8c5 = puVar3[0x1b];
      uStack_8d8 = 10;
      uStack_8c8 = 0x100;
      ppuStack_8e0 = &PTR_SUB_1108629c8;
      pppuStack_8a0 = &ppuStack_958;
      plStack_878 = (long *)0x0;
      uStack_890 = 0;
      lStack_898 = 0;
      plStack_880 = (long *)0x0;
      uStack_888 = 0;
      bStack_74e = bStack_7be | bStack_8c6;
      bStack_74d = bStack_7bd & bStack_8c5;
      uStack_760 = 4;
      uStack_750 = 0x100;
      ppuStack_768 = &PTR_SUB_1108629c8;
      pppuStack_730 = &ppuStack_7d8;
      pppuStack_728 = &ppuStack_8e0;
      uStack_718 = 0;
      lStack_720 = 0;
      plStack_708 = (long *)0x0;
      uStack_710 = 0;
      plStack_700 = (long *)0x0;
      puVar2 = &uStack_989;
      puStack_8a8 = puVar3;
      func_0x000100c434a4();
      uStack_6e0 = *(undefined8 *)(puVar2 + 0x10);
      uStack_6d8 = puVar2[0x19];
      uStack_6d7 = puVar2[0x18];
      uStack_6c8 = *(undefined8 *)(puVar2 + 0x28);
      uStack_6d4 = 1;
      pcStack_6d0 = FUN_108bf5ed4;
      lStack_980 = 0;
      uStack_978 = 0;
      lStack_988 = 0;
      func_0x000100c435d0(&lStack_988,&uStack_6e0,alStack_6c0,1);
      func_0x000100c436b8(&lStack_970,&lStack_988);
      uStack_990 = 0;
      puVar5 = &uStack_6f8;
      pppuVar12 = &ppuStack_768;
      FUN_108c7f678(puVar5,pppuVar12,&lStack_970,&uStack_990);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_970 != 0) {
        lStack_968 = lStack_970;
        __ZdlPv();
      }
      if (lStack_988 != 0) {
        lStack_980 = lStack_988;
        __ZdlPv();
      }
      plVar1 = plStack_700;
      ppuStack_768 = &PTR_SUB_1108629c8;
      plStack_700 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_708;
      plStack_708 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_720 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_878;
      ppuStack_8e0 = &PTR_SUB_1108629c8;
      plStack_878 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_880;
      plStack_880 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_898 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_8f0;
      ppuStack_958 = &PTR_SUB_1108629c8;
      plStack_8f0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_8f8;
      plStack_8f8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_910 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_770;
      ppuStack_7d8 = &PTR_SUB_1108629c8;
      plStack_770 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_778;
      plStack_778 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_790 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_7e8;
      appuStack_850[0] = &PTR_SUB_110862700;
      plStack_7e8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_7f0;
      plStack_7f0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      ppuStack_8e0 = apuStack_808;
      func_0x000107c27dd4(&ppuStack_8e0);
      ppuStack_8e0 = apuStack_870;
      func_0x000107c27dd4(&ppuStack_8e0);
      _objc_release(uStack_6e8);
      _objc_release(uStack_6f0);
      _objc_release(plVar14);
      _objc_release(pppuVar8);
      ppuVar15 = ppuVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_6c0[0]) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_768);
        func_0x000105007830(&ppuStack_8e0);
        func_0x000105007830(&ppuStack_958);
        func_0x000105007830(&ppuStack_7d8);
        func_0x0001050048c0(appuStack_850);
        ppuStack_8e0 = apuStack_870;
        func_0x000107c27dd4(&ppuStack_8e0);
        _objc_release(uStack_6e8);
        _objc_release(uStack_6f0);
        _objc_release(plVar14);
        _objc_release(pppuVar8);
        _objc_release(ppuVar6);
        ppuVar7 = ppuVar15;
        __Unwind_Resume();
        uVar13 = SUB84(&uStack_ab0,0);
        uStack_9e0 = 4;
        ppuStack_9d0 = &PTR_SUB_1108629c8;
        puStack_9c8 = &UNK_1108629b8;
        pcStack_998 = FUN_108bf2478;
        lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_9d8 = appuStack_850;
        ppuStack_9c0 = ppuVar15;
        plStack_9b8 = plVar14;
        pppuStack_9b0 = pppuVar8;
        ppuStack_9a8 = ppuVar6;
        ppuStack_9a0 = &ppuStack_660;
        _objc_retain(pppuVar12);
        ppuVar7[1] = (undefined *)0x0;
        ppuVar7[2] = (undefined *)0x0;
        *ppuVar7 = (undefined *)0x0;
        pppuVar8 = pppuVar12;
        func_0x00010bf529e0();
        func_0x000107c281a4(ppuVar7);
        lStack_aa8 = 0;
        uStack_ab0 = 0;
        uStack_a98 = 0;
        puStack_aa0 = (undefined8 *)0x0;
        uStack_a88 = 0;
        uStack_a90 = 0;
        uStack_a78 = 0;
        uStack_a80 = 0;
        _objc_retain(pppuVar12);
        pppuVar9 = pppuVar12;
        func_0x00010bf52a60();
        if (pppuVar9 != (undefined ***)0x0) {
          puVar16 = (undefined *)*puStack_aa0;
          do {
            ppuVar17 = (undefined **)0x0;
            do {
              if ((undefined *)*puStack_aa0 != puVar16) {
                _objc_enumerationMutation(pppuVar12);
              }
              ppuVar15 = *(undefined ***)(lStack_aa8 + (long)ppuVar17 * 8);
              _objc_retain(ppuVar15);
              pppuVar8 = appuStack_a70;
              appuStack_a70[0] = ppuVar15;
              func_0x000107c281a8(ppuVar7);
              _objc_release(appuStack_a70[0]);
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (pppuVar9 != (undefined ***)ppuVar17);
            pppuVar9 = pppuVar12;
            uVar13 = (int)&uStack_ab0;
            func_0x00010bf52a60();
          } while (pppuVar9 != (undefined ***)0x0);
        }
        _objc_release(pppuVar12);
        pppuVar9 = pppuVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
          return;
        }
        ___stack_chk_fail();
        if ((int)pppuVar8 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        pcStack_ab8 = FUN_108bf25dc;
        lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_b00 = &ppuStack_958;
        pppuStack_af8 = &ppuStack_7d8;
        pppuStack_af0 = (undefined ***)ppuVar17;
        puStack_ae8 = puVar16;
        ppuStack_ae0 = ppuVar15;
        uStack_ad8 = 0;
        ppuStack_ad0 = ppuVar7;
        pppuStack_ac8 = pppuVar12;
        ppuStack_ac0 = &ppuStack_9a0;
        _objc_retain();
        _objc_retain(pppuVar8);
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (pppuVar9 == (undefined ***)0x0) {
          uStack_b40 = 0;
          uStack_b38 = 0;
          uStack_b30 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_b40,pppuVar9);
        }
        puVar4 = &uStack_bb1;
        func_0x000100c43338();
        puVar2 = &uStack_c29;
        func_0x000107c2a7fc();
        uStack_c98 = 0xf;
        uStack_c88 = 0x100;
        uStack_c70 = 0;
        ppuStack_ca0 = &PTR_SUB_1108629c8;
        uVar18 = 0;
        uStack_c60 = 0;
        uStack_c68 = 0;
        uStack_c50 = 0;
        lStack_c58 = 0;
        plStack_c40 = (long *)0x0;
        uStack_c48 = 0;
        plStack_c38 = (long *)0x0;
        bStack_c0e = puVar2[0x1a];
        bStack_c0d = puVar2[0x1b];
        uStack_c20 = 10;
        uStack_c10 = 0x100;
        ppuStack_c28 = &PTR_SUB_1108629c8;
        pppuStack_be8 = &ppuStack_ca0;
        uStack_bd8 = 0;
        lStack_be0 = 0;
        plStack_bc8 = (long *)0x0;
        uStack_bd0 = 0;
        plStack_bc0 = (long *)0x0;
        bStack_b96 = puVar4[0x1a] | bStack_c0e;
        bStack_b95 = puVar4[0x1b] & bStack_c0d;
        uStack_ba8 = 4;
        uStack_b98 = 0x100;
        ppuStack_bb0 = &PTR_SUB_1108629c8;
        pppuStack_b70 = &ppuStack_c28;
        uStack_b60 = 0;
        lStack_b68 = 0;
        plStack_b50 = (long *)0x0;
        uStack_b58 = 0;
        plStack_b48 = (long *)0x0;
        puVar3 = &uStack_cd1;
        puStack_bf0 = puVar2;
        puStack_b78 = puVar4;
        func_0x000100c434a4();
        uStack_b28 = *(undefined8 *)(puVar3 + 0x10);
        uStack_b20 = puVar3[0x19];
        uStack_b1f = puVar3[0x18];
        uStack_b10 = *(undefined8 *)(puVar3 + 0x28);
        uStack_b1c = 1;
        pcStack_b18 = FUN_108bf5ed4;
        lStack_cc8 = 0;
        uStack_cc0 = 0;
        lStack_cd0 = 0;
        func_0x000100c435d0(&lStack_cd0,&uStack_b28,&lStack_b08,1);
        func_0x000100c436b8(&lStack_cb8,&lStack_cd0);
        puVar5 = &uStack_b40;
        pppuVar12 = &ppuStack_bb0;
        uStack_cd8 = uVar13;
        FUN_108c7f678(puVar5,pppuVar12,&lStack_cb8,&uStack_cd8);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_cb8 != 0) {
          lStack_cb0 = lStack_cb8;
          __ZdlPv();
        }
        if (lStack_cd0 != 0) {
          lStack_cc8 = lStack_cd0;
          __ZdlPv();
        }
        plVar14 = plStack_b48;
        ppuStack_bb0 = &PTR_SUB_1108629c8;
        plStack_b48 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_b50;
        plStack_b50 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_b68 != 0) {
          __ZdlPv();
        }
        plVar14 = plStack_bc0;
        ppuStack_c28 = &PTR_SUB_1108629c8;
        plStack_bc0 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_bc8;
        plStack_bc8 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_be0 != 0) {
          __ZdlPv();
        }
        plVar14 = plStack_c38;
        ppuStack_ca0 = &PTR_SUB_1108629c8;
        plStack_c38 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_c40;
        plStack_c40 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_c58 != 0) {
          __ZdlPv();
        }
        _objc_release(uStack_b30);
        _objc_release(uStack_b38);
        _objc_release(pppuVar8);
        pppuVar10 = pppuVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b08) {
          ___stack_chk_fail();
          func_0x000105007830(&ppuStack_bb0);
          func_0x000105007830(&ppuStack_c28);
          func_0x000105007830(&ppuStack_ca0);
          _objc_release(uStack_b30);
          _objc_release(uStack_b38);
          _objc_release(pppuVar8);
          _objc_release(pppuVar9);
          __Unwind_Resume();
          pcStack_ce8 = FUN_108bf2938;
          alStack_d60[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_cf0 = &ppuStack_ac0;
          _objc_retain();
          _objc_retain(pppuVar12);
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (pppuVar10 == (undefined ***)0x0) {
            uStack_d98 = 0;
            uStack_d90 = 0;
            uStack_d88 = 0;
          }
          else {
            func_0x00010bfa8fc0(&uStack_d98,pppuVar10);
          }
          puVar2 = &uStack_e79;
          func_0x000100c43338();
          puVar3 = &uStack_ef1;
          func_0x000107c2a7fc();
          uStack_f60 = 0xf;
          uStack_f50 = 0x100;
          uStack_f38 = 0;
          ppuStack_f68 = &PTR_SUB_1108629c8;
          uStack_f28 = 0;
          uStack_f30 = 0;
          uStack_f18 = 0;
          lStack_f20 = 0;
          plStack_f08 = (long *)0x0;
          uStack_f10 = 0;
          plStack_f00 = (long *)0x0;
          bStack_ed6 = puVar3[0x1a];
          bStack_ed5 = puVar3[0x1b];
          uStack_ee8 = 10;
          uStack_ed8 = 0x100;
          ppuStack_ef0 = &PTR_SUB_1108629c8;
          pppuStack_eb0 = &ppuStack_f68;
          uStack_ea0 = 0;
          lStack_ea8 = 0;
          plStack_e90 = (long *)0x0;
          uStack_e98 = 0;
          plStack_e88 = (long *)0x0;
          bStack_e5e = puVar2[0x1a] | bStack_ed6;
          bStack_e5d = puVar2[0x1b] & bStack_ed5;
          uStack_e70 = 4;
          uStack_e60 = 0x100;
          ppuStack_e78 = &PTR_SUB_1108629c8;
          pppuStack_e38 = &ppuStack_ef0;
          uStack_e28 = 0;
          lStack_e30 = 0;
          plStack_e18 = (long *)0x0;
          uStack_e20 = 0;
          plStack_e10 = (long *)0x0;
          puVar4 = &uStack_fd9;
          puStack_eb8 = puVar3;
          puStack_e40 = puVar2;
          func_0x000100c434a4();
          uStack_1048 = 0xf;
          uStack_1038 = 0x100;
          ppuStack_1050 = &PTR_SUB_11086d7d0;
          uStack_1010 = 0;
          uStack_1018 = 0;
          lStack_1000 = 0;
          lStack_1008 = 0;
          plStack_ff0 = (long *)0x0;
          uStack_ff8 = 0;
          plStack_fe8 = (long *)0x0;
          bStack_fbe = puVar4[0x1a];
          bStack_fbd = puVar4[0x1b];
          uStack_fd0 = 6;
          uStack_fc0 = 0x100;
          ppuStack_fd8 = &PTR_SUB_11089b010;
          pppuStack_f98 = &ppuStack_1050;
          plStack_f70 = (long *)0x0;
          lStack_f88 = 0;
          lStack_f90 = 0;
          plStack_f78 = (long *)0x0;
          uStack_f80 = 0;
          bStack_dee = bStack_e5e | bStack_fbe;
          bStack_ded = bStack_e5d & bStack_fbd;
          uStack_e00 = 4;
          uStack_df0 = 0x100;
          ppuStack_e08 = &PTR_SUB_1108629c8;
          pppuStack_dd0 = &ppuStack_e78;
          pppuStack_dc8 = &ppuStack_fd8;
          uStack_db8 = 0;
          lStack_dc0 = 0;
          plStack_da8 = (long *)0x0;
          uStack_db0 = 0;
          plStack_da0 = (long *)0x0;
          puVar2 = &uStack_1081;
          uStack_1020 = uVar18;
          puStack_fa0 = puVar4;
          func_0x000100c434a4();
          uStack_d80 = *(undefined8 *)(puVar2 + 0x10);
          uStack_d78 = puVar2[0x19];
          uStack_d77 = puVar2[0x18];
          uStack_d68 = *(undefined8 *)(puVar2 + 0x28);
          uStack_d74 = 1;
          pcStack_d70 = FUN_108bf5ed4;
          lStack_1078 = 0;
          uStack_1070 = 0;
          lStack_1080 = 0;
          func_0x000100c435d0(&lStack_1080,&uStack_d80,alStack_d60,1);
          func_0x000100c436b8(&lStack_1068,&lStack_1080);
          uStack_1088 = 0;
          puVar5 = &uStack_d98;
          pppuVar8 = &ppuStack_e08;
          FUN_108c7f678(puVar5,pppuVar8,&lStack_1068,&uStack_1088);
          _objc_retainAutoreleasedReturnValue();
          if (lStack_1068 != 0) {
            lStack_1060 = lStack_1068;
            __ZdlPv();
          }
          if (lStack_1080 != 0) {
            lStack_1078 = lStack_1080;
            __ZdlPv();
          }
          plVar14 = plStack_da0;
          ppuStack_e08 = &PTR_SUB_1108629c8;
          plStack_da0 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_da8;
          plStack_da8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_dc0 != 0) {
            __ZdlPv();
          }
          plVar14 = plStack_f70;
          ppuStack_fd8 = &PTR_SUB_11089b010;
          plStack_f70 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_f78;
          plStack_f78 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_f90 != 0) {
            lStack_f88 = lStack_f90;
            __ZdlPv();
          }
          plVar14 = plStack_fe8;
          ppuStack_1050 = &PTR_SUB_11086d7d0;
          plStack_fe8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_ff0;
          plStack_ff0 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_1008 != 0) {
            lStack_1000 = lStack_1008;
            __ZdlPv();
          }
          plVar14 = plStack_e10;
          ppuStack_e78 = &PTR_SUB_1108629c8;
          plStack_e10 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_e18;
          plStack_e18 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_e30 != 0) {
            __ZdlPv();
          }
          plVar14 = plStack_e88;
          ppuStack_ef0 = &PTR_SUB_1108629c8;
          plStack_e88 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_e90;
          plStack_e90 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_ea8 != 0) {
            __ZdlPv();
          }
          plVar14 = plStack_f00;
          ppuStack_f68 = &PTR_SUB_1108629c8;
          plStack_f00 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_f08;
          plStack_f08 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_f20 != 0) {
            __ZdlPv();
          }
          _objc_release(uStack_d88);
          _objc_release(uStack_d90);
          _objc_release(pppuVar12);
          pppuVar9 = pppuVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_d60[0]) {
            ___stack_chk_fail();
            func_0x000105007830(&ppuStack_e08);
            func_0x0001055b9024(&ppuStack_fd8);
            func_0x000105187b98(&ppuStack_1050);
            func_0x000105007830(&ppuStack_e78);
            func_0x000105007830(&ppuStack_ef0);
            func_0x000105007830(&ppuStack_f68);
            _objc_release(uStack_d88);
            _objc_release(uStack_d90);
            _objc_release(&UNK_1108629b8);
            _objc_release(pppuVar10);
            pppuVar11 = pppuVar9;
            __Unwind_Resume();
            puStack_10d0 = &UNK_11089b000;
            puStack_10c8 = &UNK_11086d7c0;
            puStack_10c0 = &UNK_1108629b8;
            pcStack_1098 = FUN_108bf2e5c;
            pppuStack_10e0 = &ppuStack_1050;
            pppuStack_10d8 = &ppuStack_e78;
            pppuStack_10b8 = pppuVar9;
            pppuStack_10b0 = pppuVar12;
            pppuStack_10a8 = pppuVar10;
            ppuStack_10a0 = &ppuStack_cf0;
            _objc_retain();
            _objc_retain(pppuVar8);
            _objc_opt_class(PTR_PTR_1126b15c8);
            if (pppuVar11 == (undefined ***)0x0) {
              uStack_10f8 = 0;
              uStack_10f0 = 0;
              uStack_10e8 = 0;
            }
            else {
              func_0x00010bfa8fc0(&uStack_10f8,pppuVar11);
            }
            puVar3 = &uStack_1169;
            FUN_108c2e464();
            puVar2 = &uStack_11e1;
            func_0x000107c2a7fc();
            uStack_1250 = 0xf;
            uStack_1240 = 0x100;
            uStack_1228 = 0;
            ppuStack_1258 = &PTR_SUB_1108629c8;
            uStack_1218 = 0;
            uStack_1220 = 0;
            uStack_1208 = 0;
            lStack_1210 = 0;
            plStack_11f8 = (long *)0x0;
            uStack_1200 = 0;
            plStack_11f0 = (long *)0x0;
            bStack_11c6 = puVar2[0x1a];
            bStack_11c5 = puVar2[0x1b];
            uStack_11d8 = 10;
            uStack_11c8 = 0x100;
            ppuStack_11e0 = &PTR_SUB_1108629c8;
            uStack_1190 = 0;
            lStack_1198 = 0;
            plStack_1180 = (long *)0x0;
            uStack_1188 = 0;
            plStack_1178 = (long *)0x0;
            bStack_114e = puVar3[0x1a] | bStack_11c6;
            bStack_114d = puVar3[0x1b] & bStack_11c5;
            uStack_1160 = 4;
            uStack_1150 = 0x100;
            ppuStack_1168 = &PTR_SUB_1108629c8;
            pppuStack_1128 = &ppuStack_11e0;
            uStack_1118 = 0;
            lStack_1120 = 0;
            plStack_1108 = (long *)0x0;
            uStack_1110 = 0;
            plStack_1100 = (long *)0x0;
            lStack_1270 = 0;
            lStack_1268 = 0;
            uStack_1260 = 0;
            uStack_1274 = 0;
            puVar5 = &uStack_10f8;
            puStack_11a8 = puVar2;
            pppuStack_11a0 = &ppuStack_1258;
            puStack_1130 = puVar3;
            FUN_108c7f678(puVar5,&ppuStack_1168,&lStack_1270,&uStack_1274);
            _objc_retainAutoreleasedReturnValue();
            if (lStack_1270 != 0) {
              lStack_1268 = lStack_1270;
              __ZdlPv();
            }
            plVar14 = plStack_1100;
            ppuStack_1168 = &PTR_SUB_1108629c8;
            plStack_1100 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_1108;
            plStack_1108 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_1120 != 0) {
              __ZdlPv();
            }
            plVar14 = plStack_1178;
            ppuStack_11e0 = &PTR_SUB_1108629c8;
            plStack_1178 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_1180;
            plStack_1180 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_1198 != 0) {
              __ZdlPv();
            }
            plVar14 = plStack_11f0;
            ppuStack_1258 = &PTR_SUB_1108629c8;
            plStack_11f0 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            plVar14 = plStack_11f8;
            plStack_11f8 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (lStack_1210 != 0) {
              __ZdlPv();
            }
            _objc_release(uStack_10e8);
            _objc_release(uStack_10f0);
            _objc_release(pppuVar8);
            _objc_release(pppuVar11);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108bf1c4c; end: 108bf1fa3;  */

void FUN_108bf1c4c(undefined **param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined4 uStack_e54;
  long lStack_e50;
  long lStack_e48;
  undefined8 uStack_e40;
  undefined **ppuStack_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e20;
  undefined1 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  long lStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  long *plStack_dd8;
  long *plStack_dd0;
  undefined1 uStack_dc1;
  undefined **ppuStack_dc0;
  undefined4 uStack_db8;
  undefined2 uStack_da8;
  byte bStack_da6;
  byte bStack_da5;
  undefined1 *puStack_d88;
  undefined ***pppuStack_d80;
  long lStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  long *plStack_d60;
  long *plStack_d58;
  undefined1 uStack_d49;
  undefined **ppuStack_d48;
  undefined4 uStack_d40;
  undefined2 uStack_d30;
  byte bStack_d2e;
  byte bStack_d2d;
  undefined1 *puStack_d10;
  undefined ***pppuStack_d08;
  long lStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  long *plStack_ce8;
  long *plStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined ***pppuStack_cc0;
  undefined ***pppuStack_cb8;
  undefined *puStack_cb0;
  undefined *puStack_ca8;
  undefined *puStack_ca0;
  undefined ***pppuStack_c98;
  undefined ***pppuStack_c90;
  undefined ***pppuStack_c88;
  undefined8 **ppuStack_c80;
  code *pcStack_c78;
  undefined4 uStack_c68;
  undefined1 uStack_c61;
  long lStack_c60;
  long lStack_c58;
  undefined8 uStack_c50;
  long lStack_c48;
  long lStack_c40;
  undefined **ppuStack_c30;
  undefined4 uStack_c28;
  undefined4 uStack_c18;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  long lStack_be8;
  long lStack_be0;
  undefined8 uStack_bd8;
  long *plStack_bd0;
  long *plStack_bc8;
  undefined1 uStack_bb9;
  undefined **ppuStack_bb8;
  undefined4 uStack_bb0;
  undefined2 uStack_ba0;
  byte bStack_b9e;
  byte bStack_b9d;
  undefined1 *puStack_b80;
  undefined ***pppuStack_b78;
  long lStack_b70;
  long lStack_b68;
  undefined8 uStack_b60;
  long *plStack_b58;
  long *plStack_b50;
  undefined **ppuStack_b48;
  undefined4 uStack_b40;
  undefined4 uStack_b30;
  undefined1 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  long lStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  long *plStack_ae8;
  long *plStack_ae0;
  undefined1 uStack_ad1;
  undefined **ppuStack_ad0;
  undefined4 uStack_ac8;
  undefined2 uStack_ab8;
  byte bStack_ab6;
  byte bStack_ab5;
  undefined1 *puStack_a98;
  undefined ***pppuStack_a90;
  long lStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long *plStack_a70;
  long *plStack_a68;
  undefined1 uStack_a59;
  undefined **ppuStack_a58;
  undefined4 uStack_a50;
  undefined2 uStack_a40;
  byte bStack_a3e;
  byte bStack_a3d;
  undefined1 *puStack_a20;
  undefined ***pppuStack_a18;
  long lStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  long *plStack_9f8;
  long *plStack_9f0;
  undefined **ppuStack_9e8;
  undefined4 uStack_9e0;
  undefined2 uStack_9d0;
  byte bStack_9ce;
  byte bStack_9cd;
  undefined ***pppuStack_9b0;
  undefined ***pppuStack_9a8;
  long lStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  long *plStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined1 uStack_958;
  undefined1 uStack_957;
  undefined4 uStack_954;
  code *pcStack_950;
  undefined8 uStack_948;
  long alStack_940 [2];
  undefined8 **ppuStack_8d0;
  code *pcStack_8c8;
  undefined4 uStack_8b8;
  undefined1 uStack_8b1;
  long lStack_8b0;
  long lStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  long lStack_890;
  undefined **ppuStack_880;
  undefined4 uStack_878;
  undefined4 uStack_868;
  undefined1 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  long lStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long *plStack_820;
  long *plStack_818;
  undefined1 uStack_809;
  undefined **ppuStack_808;
  undefined4 uStack_800;
  undefined2 uStack_7f0;
  byte bStack_7ee;
  byte bStack_7ed;
  undefined1 *puStack_7d0;
  undefined ***pppuStack_7c8;
  long lStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  long *plStack_7a8;
  long *plStack_7a0;
  undefined1 uStack_791;
  undefined **ppuStack_790;
  undefined4 uStack_788;
  undefined2 uStack_778;
  byte bStack_776;
  byte bStack_775;
  undefined1 *puStack_758;
  undefined ***pppuStack_750;
  long lStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long *plStack_730;
  long *plStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 uStack_700;
  undefined1 uStack_6ff;
  undefined4 uStack_6fc;
  code *pcStack_6f8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  undefined ***pppuStack_6e0;
  undefined ***pppuStack_6d8;
  undefined ***pppuStack_6d0;
  undefined *puStack_6c8;
  undefined **ppuStack_6c0;
  undefined8 uStack_6b8;
  undefined **ppuStack_6b0;
  undefined ***pppuStack_6a8;
  undefined8 **ppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_690;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined **appuStack_650 [17];
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined ***pppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined *puStack_5a8;
  undefined **ppuStack_5a0;
  long *plStack_598;
  undefined ***pppuStack_590;
  undefined **ppuStack_588;
  undefined1 **ppuStack_580;
  code *pcStack_578;
  undefined4 uStack_570;
  undefined1 uStack_569;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  long lStack_550;
  long lStack_548;
  undefined **ppuStack_538;
  undefined4 uStack_530;
  undefined4 uStack_520;
  undefined1 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  undefined1 uStack_4c1;
  undefined **ppuStack_4c0;
  undefined4 uStack_4b8;
  undefined2 uStack_4a8;
  byte bStack_4a6;
  byte bStack_4a5;
  undefined1 *puStack_488;
  undefined ***pppuStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined *apuStack_450 [3];
  undefined1 uStack_431;
  undefined **appuStack_430 [3];
  byte bStack_417;
  byte bStack_416;
  byte bStack_415;
  undefined *apuStack_3e8 [3];
  long *plStack_3d0;
  long *plStack_3c8;
  undefined1 uStack_3b9;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3a0;
  byte bStack_39f;
  byte bStack_39e;
  byte bStack_39d;
  undefined1 *puStack_380;
  undefined ***pppuStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined **ppuStack_348;
  undefined4 uStack_340;
  undefined2 uStack_330;
  byte bStack_32e;
  byte bStack_32d;
  undefined ***pppuStack_310;
  undefined ***pppuStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b7;
  undefined4 uStack_2b4;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  long alStack_2a0 [2];
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined4 uStack_228;
  undefined1 uStack_221;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1d8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 uStack_179;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined2 uStack_160;
  byte bStack_15e;
  byte bStack_15d;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  byte bStack_e6;
  byte bStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == (undefined **)0x0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  func_0x000100c43338();
  puVar3 = &uStack_179;
  func_0x000107c2a7fc();
  uStack_1e8 = 0xf;
  uStack_1d8 = 0x100;
  uStack_1c0 = 0;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  bStack_15e = puVar3[0x1a];
  bStack_15d = puVar3[0x1b];
  uStack_170 = 10;
  uStack_160 = 0x100;
  ppuStack_178 = &PTR_SUB_1108629c8;
  pppuStack_138 = &ppuStack_1f0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  bStack_e6 = puVar2[0x1a] | bStack_15e;
  bStack_e5 = puVar2[0x1b] & bStack_15d;
  uStack_f8 = 4;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  pppuStack_c0 = &ppuStack_178;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  puVar4 = &uStack_221;
  puStack_140 = puVar3;
  puStack_c8 = puVar2;
  func_0x000100c434a4();
  uStack_78 = *(undefined8 *)(puVar4 + 0x10);
  uStack_70 = puVar4[0x19];
  uStack_6f = puVar4[0x18];
  uStack_60 = *(undefined8 *)(puVar4 + 0x28);
  uStack_6c = 1;
  pcStack_68 = FUN_108bf5ed4;
  lStack_218 = 0;
  uStack_210 = 0;
  lStack_220 = 0;
  func_0x000100c435d0(&lStack_220,&uStack_78,&lStack_58,1);
  func_0x000100c436b8(&lStack_208,&lStack_220);
  uStack_228 = 0;
  puVar5 = &uStack_90;
  pppuVar8 = &ppuStack_100;
  plVar14 = &lStack_208;
  FUN_108c7f678(puVar5,pppuVar8,plVar14,&uStack_228);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_208 != 0) {
    lStack_200 = lStack_208;
    __ZdlPv();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_188;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  plStack_188 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1a8 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_2);
  ppuVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_100);
    func_0x000105007830(&ppuStack_178);
    func_0x000105007830(&ppuStack_1f0);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    pcStack_238 = FUN_108bf1fa4;
    alStack_2a0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar8);
    _objc_retain(plVar14);
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (ppuVar6 == (undefined **)0x0) {
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_2d8,ppuVar6);
    }
    puVar3 = &uStack_3b9;
    func_0x000100c486cc();
    puVar4 = &uStack_431;
    func_0x000107c2a7f8(puVar4);
    FUN_108bf2478(apuStack_450,plVar14);
    func_0x000107c281a0(appuStack_430,0xd,puVar4,apuStack_450);
    bStack_39d = puVar3[0x1b] & bStack_415;
    bStack_39f = (puVar3[0x19] | bStack_417) & 1;
    bStack_39e = (puVar3[0x1a] | bStack_416) & 1;
    uStack_3b0 = 4;
    uStack_3a0 = 0;
    puVar16 = &UNK_1108629b8;
    ppuVar17 = &PTR_SUB_1108629c8;
    ppuStack_3b8 = &PTR_SUB_1108629c8;
    uStack_368 = 0;
    lStack_370 = 0;
    plStack_358 = (long *)0x0;
    uStack_360 = 0;
    plStack_350 = (long *)0x0;
    puVar4 = &uStack_4c1;
    puStack_380 = puVar3;
    pppuStack_378 = appuStack_430;
    func_0x000107c2a7fc();
    uStack_530 = 0xf;
    uStack_520 = 0x100;
    uStack_508 = 0;
    ppuStack_538 = &PTR_SUB_1108629c8;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    lStack_4f0 = 0;
    plStack_4d8 = (long *)0x0;
    uStack_4e0 = 0;
    plStack_4d0 = (long *)0x0;
    bStack_4a6 = puVar4[0x1a];
    bStack_4a5 = puVar4[0x1b];
    uStack_4b8 = 10;
    uStack_4a8 = 0x100;
    ppuStack_4c0 = &PTR_SUB_1108629c8;
    pppuStack_480 = &ppuStack_538;
    plStack_458 = (long *)0x0;
    uStack_470 = 0;
    lStack_478 = 0;
    plStack_460 = (long *)0x0;
    uStack_468 = 0;
    bStack_32e = bStack_39e | bStack_4a6;
    bStack_32d = bStack_39d & bStack_4a5;
    uStack_340 = 4;
    uStack_330 = 0x100;
    ppuStack_348 = &PTR_SUB_1108629c8;
    pppuStack_310 = &ppuStack_3b8;
    pppuStack_308 = &ppuStack_4c0;
    uStack_2f8 = 0;
    lStack_300 = 0;
    plStack_2e8 = (long *)0x0;
    uStack_2f0 = 0;
    plStack_2e0 = (long *)0x0;
    puVar3 = &uStack_569;
    puStack_488 = puVar4;
    func_0x000100c434a4();
    uStack_2c0 = *(undefined8 *)(puVar3 + 0x10);
    uStack_2b8 = puVar3[0x19];
    uStack_2b7 = puVar3[0x18];
    uStack_2a8 = *(undefined8 *)(puVar3 + 0x28);
    uStack_2b4 = 1;
    pcStack_2b0 = FUN_108bf5ed4;
    lStack_560 = 0;
    uStack_558 = 0;
    lStack_568 = 0;
    func_0x000100c435d0(&lStack_568,&uStack_2c0,alStack_2a0,1);
    func_0x000100c436b8(&lStack_550,&lStack_568);
    uStack_570 = 0;
    puVar5 = &uStack_2d8;
    pppuVar12 = &ppuStack_348;
    FUN_108c7f678(puVar5,pppuVar12,&lStack_550,&uStack_570);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_550 != 0) {
      lStack_548 = lStack_550;
      __ZdlPv();
    }
    if (lStack_568 != 0) {
      lStack_560 = lStack_568;
      __ZdlPv();
    }
    plVar1 = plStack_2e0;
    ppuStack_348 = &PTR_SUB_1108629c8;
    plStack_2e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2e8;
    plStack_2e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_300 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_458;
    ppuStack_4c0 = &PTR_SUB_1108629c8;
    plStack_458 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_460;
    plStack_460 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_478 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_4d0;
    ppuStack_538 = &PTR_SUB_1108629c8;
    plStack_4d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4d8;
    plStack_4d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4f0 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_350;
    ppuStack_3b8 = &PTR_SUB_1108629c8;
    plStack_350 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_358;
    plStack_358 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_370 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_3c8;
    appuStack_430[0] = &PTR_SUB_110862700;
    plStack_3c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3d0;
    plStack_3d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_4c0 = apuStack_3e8;
    func_0x000107c27dd4(&ppuStack_4c0);
    ppuStack_4c0 = apuStack_450;
    func_0x000107c27dd4(&ppuStack_4c0);
    _objc_release(uStack_2c8);
    _objc_release(uStack_2d0);
    _objc_release(plVar14);
    _objc_release(pppuVar8);
    ppuVar15 = ppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_2a0[0]) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_348);
      func_0x000105007830(&ppuStack_4c0);
      func_0x000105007830(&ppuStack_538);
      func_0x000105007830(&ppuStack_3b8);
      func_0x0001050048c0(appuStack_430);
      ppuStack_4c0 = apuStack_450;
      func_0x000107c27dd4(&ppuStack_4c0);
      _objc_release(uStack_2c8);
      _objc_release(uStack_2d0);
      _objc_release(plVar14);
      _objc_release(pppuVar8);
      _objc_release(ppuVar6);
      ppuVar7 = ppuVar15;
      __Unwind_Resume();
      uVar13 = SUB84(&uStack_690,0);
      uStack_5c0 = 4;
      ppuStack_5b0 = &PTR_SUB_1108629c8;
      puStack_5a8 = &UNK_1108629b8;
      pcStack_578 = FUN_108bf2478;
      lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_5b8 = appuStack_430;
      ppuStack_5a0 = ppuVar15;
      plStack_598 = plVar14;
      pppuStack_590 = pppuVar8;
      ppuStack_588 = ppuVar6;
      ppuStack_580 = &puStack_240;
      _objc_retain(pppuVar12);
      ppuVar7[1] = (undefined *)0x0;
      ppuVar7[2] = (undefined *)0x0;
      *ppuVar7 = (undefined *)0x0;
      pppuVar8 = pppuVar12;
      func_0x00010bf529e0();
      func_0x000107c281a4(ppuVar7);
      lStack_688 = 0;
      uStack_690 = 0;
      uStack_678 = 0;
      puStack_680 = (undefined8 *)0x0;
      uStack_668 = 0;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      _objc_retain(pppuVar12);
      pppuVar9 = pppuVar12;
      func_0x00010bf52a60();
      if (pppuVar9 != (undefined ***)0x0) {
        puVar16 = (undefined *)*puStack_680;
        do {
          ppuVar17 = (undefined **)0x0;
          do {
            if ((undefined *)*puStack_680 != puVar16) {
              _objc_enumerationMutation(pppuVar12);
            }
            ppuVar15 = *(undefined ***)(lStack_688 + (long)ppuVar17 * 8);
            _objc_retain(ppuVar15);
            pppuVar8 = appuStack_650;
            appuStack_650[0] = ppuVar15;
            func_0x000107c281a8(ppuVar7);
            _objc_release(appuStack_650[0]);
            ppuVar17 = (undefined **)((long)ppuVar17 + 1);
          } while (pppuVar9 != (undefined ***)ppuVar17);
          pppuVar9 = pppuVar12;
          uVar13 = (int)&uStack_690;
          func_0x00010bf52a60();
        } while (pppuVar9 != (undefined ***)0x0);
      }
      _objc_release(pppuVar12);
      pppuVar9 = pppuVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
        return;
      }
      ___stack_chk_fail();
      if ((int)pppuVar8 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      pcStack_698 = FUN_108bf25dc;
      lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_6e0 = &ppuStack_538;
      pppuStack_6d8 = &ppuStack_3b8;
      pppuStack_6d0 = (undefined ***)ppuVar17;
      puStack_6c8 = puVar16;
      ppuStack_6c0 = ppuVar15;
      uStack_6b8 = 0;
      ppuStack_6b0 = ppuVar7;
      pppuStack_6a8 = pppuVar12;
      ppuStack_6a0 = &ppuStack_580;
      _objc_retain();
      _objc_retain(pppuVar8);
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (pppuVar9 == (undefined ***)0x0) {
        uStack_720 = 0;
        uStack_718 = 0;
        uStack_710 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_720,pppuVar9);
      }
      puVar2 = &uStack_791;
      func_0x000100c43338();
      puVar3 = &uStack_809;
      func_0x000107c2a7fc();
      uStack_878 = 0xf;
      uStack_868 = 0x100;
      uStack_850 = 0;
      ppuStack_880 = &PTR_SUB_1108629c8;
      uVar18 = 0;
      uStack_840 = 0;
      uStack_848 = 0;
      uStack_830 = 0;
      lStack_838 = 0;
      plStack_820 = (long *)0x0;
      uStack_828 = 0;
      plStack_818 = (long *)0x0;
      bStack_7ee = puVar3[0x1a];
      bStack_7ed = puVar3[0x1b];
      uStack_800 = 10;
      uStack_7f0 = 0x100;
      ppuStack_808 = &PTR_SUB_1108629c8;
      pppuStack_7c8 = &ppuStack_880;
      uStack_7b8 = 0;
      lStack_7c0 = 0;
      plStack_7a8 = (long *)0x0;
      uStack_7b0 = 0;
      plStack_7a0 = (long *)0x0;
      bStack_776 = puVar2[0x1a] | bStack_7ee;
      bStack_775 = puVar2[0x1b] & bStack_7ed;
      uStack_788 = 4;
      uStack_778 = 0x100;
      ppuStack_790 = &PTR_SUB_1108629c8;
      pppuStack_750 = &ppuStack_808;
      uStack_740 = 0;
      lStack_748 = 0;
      plStack_730 = (long *)0x0;
      uStack_738 = 0;
      plStack_728 = (long *)0x0;
      puVar4 = &uStack_8b1;
      puStack_7d0 = puVar3;
      puStack_758 = puVar2;
      func_0x000100c434a4();
      uStack_708 = *(undefined8 *)(puVar4 + 0x10);
      uStack_700 = puVar4[0x19];
      uStack_6ff = puVar4[0x18];
      uStack_6f0 = *(undefined8 *)(puVar4 + 0x28);
      uStack_6fc = 1;
      pcStack_6f8 = FUN_108bf5ed4;
      lStack_8a8 = 0;
      uStack_8a0 = 0;
      lStack_8b0 = 0;
      func_0x000100c435d0(&lStack_8b0,&uStack_708,&lStack_6e8,1);
      func_0x000100c436b8(&lStack_898,&lStack_8b0);
      puVar5 = &uStack_720;
      pppuVar12 = &ppuStack_790;
      uStack_8b8 = uVar13;
      FUN_108c7f678(puVar5,pppuVar12,&lStack_898,&uStack_8b8);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_898 != 0) {
        lStack_890 = lStack_898;
        __ZdlPv();
      }
      if (lStack_8b0 != 0) {
        lStack_8a8 = lStack_8b0;
        __ZdlPv();
      }
      plVar14 = plStack_728;
      ppuStack_790 = &PTR_SUB_1108629c8;
      plStack_728 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      plVar14 = plStack_730;
      plStack_730 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if (lStack_748 != 0) {
        __ZdlPv();
      }
      plVar14 = plStack_7a0;
      ppuStack_808 = &PTR_SUB_1108629c8;
      plStack_7a0 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      plVar14 = plStack_7a8;
      plStack_7a8 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if (lStack_7c0 != 0) {
        __ZdlPv();
      }
      plVar14 = plStack_818;
      ppuStack_880 = &PTR_SUB_1108629c8;
      plStack_818 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      plVar14 = plStack_820;
      plStack_820 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if (lStack_838 != 0) {
        __ZdlPv();
      }
      _objc_release(uStack_710);
      _objc_release(uStack_718);
      _objc_release(pppuVar8);
      pppuVar10 = pppuVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6e8) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_790);
        func_0x000105007830(&ppuStack_808);
        func_0x000105007830(&ppuStack_880);
        _objc_release(uStack_710);
        _objc_release(uStack_718);
        _objc_release(pppuVar8);
        _objc_release(pppuVar9);
        __Unwind_Resume();
        pcStack_8c8 = FUN_108bf2938;
        alStack_940[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_8d0 = &ppuStack_6a0;
        _objc_retain();
        _objc_retain(pppuVar12);
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (pppuVar10 == (undefined ***)0x0) {
          uStack_978 = 0;
          uStack_970 = 0;
          uStack_968 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_978,pppuVar10);
        }
        puVar3 = &uStack_a59;
        func_0x000100c43338();
        puVar4 = &uStack_ad1;
        func_0x000107c2a7fc();
        uStack_b40 = 0xf;
        uStack_b30 = 0x100;
        uStack_b18 = 0;
        ppuStack_b48 = &PTR_SUB_1108629c8;
        uStack_b08 = 0;
        uStack_b10 = 0;
        uStack_af8 = 0;
        lStack_b00 = 0;
        plStack_ae8 = (long *)0x0;
        uStack_af0 = 0;
        plStack_ae0 = (long *)0x0;
        bStack_ab6 = puVar4[0x1a];
        bStack_ab5 = puVar4[0x1b];
        uStack_ac8 = 10;
        uStack_ab8 = 0x100;
        ppuStack_ad0 = &PTR_SUB_1108629c8;
        pppuStack_a90 = &ppuStack_b48;
        uStack_a80 = 0;
        lStack_a88 = 0;
        plStack_a70 = (long *)0x0;
        uStack_a78 = 0;
        plStack_a68 = (long *)0x0;
        bStack_a3e = puVar3[0x1a] | bStack_ab6;
        bStack_a3d = puVar3[0x1b] & bStack_ab5;
        uStack_a50 = 4;
        uStack_a40 = 0x100;
        ppuStack_a58 = &PTR_SUB_1108629c8;
        pppuStack_a18 = &ppuStack_ad0;
        uStack_a08 = 0;
        lStack_a10 = 0;
        plStack_9f8 = (long *)0x0;
        uStack_a00 = 0;
        plStack_9f0 = (long *)0x0;
        puVar2 = &uStack_bb9;
        puStack_a98 = puVar4;
        puStack_a20 = puVar3;
        func_0x000100c434a4();
        uStack_c28 = 0xf;
        uStack_c18 = 0x100;
        ppuStack_c30 = &PTR_SUB_11086d7d0;
        uStack_bf0 = 0;
        uStack_bf8 = 0;
        lStack_be0 = 0;
        lStack_be8 = 0;
        plStack_bd0 = (long *)0x0;
        uStack_bd8 = 0;
        plStack_bc8 = (long *)0x0;
        bStack_b9e = puVar2[0x1a];
        bStack_b9d = puVar2[0x1b];
        uStack_bb0 = 6;
        uStack_ba0 = 0x100;
        ppuStack_bb8 = &PTR_SUB_11089b010;
        pppuStack_b78 = &ppuStack_c30;
        plStack_b50 = (long *)0x0;
        lStack_b68 = 0;
        lStack_b70 = 0;
        plStack_b58 = (long *)0x0;
        uStack_b60 = 0;
        bStack_9ce = bStack_a3e | bStack_b9e;
        bStack_9cd = bStack_a3d & bStack_b9d;
        uStack_9e0 = 4;
        uStack_9d0 = 0x100;
        ppuStack_9e8 = &PTR_SUB_1108629c8;
        pppuStack_9b0 = &ppuStack_a58;
        pppuStack_9a8 = &ppuStack_bb8;
        uStack_998 = 0;
        lStack_9a0 = 0;
        plStack_988 = (long *)0x0;
        uStack_990 = 0;
        plStack_980 = (long *)0x0;
        puVar3 = &uStack_c61;
        uStack_c00 = uVar18;
        puStack_b80 = puVar2;
        func_0x000100c434a4();
        uStack_960 = *(undefined8 *)(puVar3 + 0x10);
        uStack_958 = puVar3[0x19];
        uStack_957 = puVar3[0x18];
        uStack_948 = *(undefined8 *)(puVar3 + 0x28);
        uStack_954 = 1;
        pcStack_950 = FUN_108bf5ed4;
        lStack_c58 = 0;
        uStack_c50 = 0;
        lStack_c60 = 0;
        func_0x000100c435d0(&lStack_c60,&uStack_960,alStack_940,1);
        func_0x000100c436b8(&lStack_c48,&lStack_c60);
        uStack_c68 = 0;
        puVar5 = &uStack_978;
        pppuVar8 = &ppuStack_9e8;
        FUN_108c7f678(puVar5,pppuVar8,&lStack_c48,&uStack_c68);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_c48 != 0) {
          lStack_c40 = lStack_c48;
          __ZdlPv();
        }
        if (lStack_c60 != 0) {
          lStack_c58 = lStack_c60;
          __ZdlPv();
        }
        plVar14 = plStack_980;
        ppuStack_9e8 = &PTR_SUB_1108629c8;
        plStack_980 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_988;
        plStack_988 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_9a0 != 0) {
          __ZdlPv();
        }
        plVar14 = plStack_b50;
        ppuStack_bb8 = &PTR_SUB_11089b010;
        plStack_b50 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_b58;
        plStack_b58 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_b70 != 0) {
          lStack_b68 = lStack_b70;
          __ZdlPv();
        }
        plVar14 = plStack_bc8;
        ppuStack_c30 = &PTR_SUB_11086d7d0;
        plStack_bc8 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_bd0;
        plStack_bd0 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_be8 != 0) {
          lStack_be0 = lStack_be8;
          __ZdlPv();
        }
        plVar14 = plStack_9f0;
        ppuStack_a58 = &PTR_SUB_1108629c8;
        plStack_9f0 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_9f8;
        plStack_9f8 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_a10 != 0) {
          __ZdlPv();
        }
        plVar14 = plStack_a68;
        ppuStack_ad0 = &PTR_SUB_1108629c8;
        plStack_a68 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_a70;
        plStack_a70 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_a88 != 0) {
          __ZdlPv();
        }
        plVar14 = plStack_ae0;
        ppuStack_b48 = &PTR_SUB_1108629c8;
        plStack_ae0 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        plVar14 = plStack_ae8;
        plStack_ae8 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (lStack_b00 != 0) {
          __ZdlPv();
        }
        _objc_release(uStack_968);
        _objc_release(uStack_970);
        _objc_release(pppuVar12);
        pppuVar9 = pppuVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_940[0]) {
          ___stack_chk_fail();
          func_0x000105007830(&ppuStack_9e8);
          func_0x0001055b9024(&ppuStack_bb8);
          func_0x000105187b98(&ppuStack_c30);
          func_0x000105007830(&ppuStack_a58);
          func_0x000105007830(&ppuStack_ad0);
          func_0x000105007830(&ppuStack_b48);
          _objc_release(uStack_968);
          _objc_release(uStack_970);
          _objc_release(&UNK_1108629b8);
          _objc_release(pppuVar10);
          pppuVar11 = pppuVar9;
          __Unwind_Resume();
          puStack_cb0 = &UNK_11089b000;
          puStack_ca8 = &UNK_11086d7c0;
          puStack_ca0 = &UNK_1108629b8;
          pcStack_c78 = FUN_108bf2e5c;
          pppuStack_cc0 = &ppuStack_c30;
          pppuStack_cb8 = &ppuStack_a58;
          pppuStack_c98 = pppuVar9;
          pppuStack_c90 = pppuVar12;
          pppuStack_c88 = pppuVar10;
          ppuStack_c80 = &ppuStack_8d0;
          _objc_retain();
          _objc_retain(pppuVar8);
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (pppuVar11 == (undefined ***)0x0) {
            uStack_cd8 = 0;
            uStack_cd0 = 0;
            uStack_cc8 = 0;
          }
          else {
            func_0x00010bfa8fc0(&uStack_cd8,pppuVar11);
          }
          puVar4 = &uStack_d49;
          FUN_108c2e464();
          puVar3 = &uStack_dc1;
          func_0x000107c2a7fc();
          uStack_e30 = 0xf;
          uStack_e20 = 0x100;
          uStack_e08 = 0;
          ppuStack_e38 = &PTR_SUB_1108629c8;
          uStack_df8 = 0;
          uStack_e00 = 0;
          uStack_de8 = 0;
          lStack_df0 = 0;
          plStack_dd8 = (long *)0x0;
          uStack_de0 = 0;
          plStack_dd0 = (long *)0x0;
          bStack_da6 = puVar3[0x1a];
          bStack_da5 = puVar3[0x1b];
          uStack_db8 = 10;
          uStack_da8 = 0x100;
          ppuStack_dc0 = &PTR_SUB_1108629c8;
          uStack_d70 = 0;
          lStack_d78 = 0;
          plStack_d60 = (long *)0x0;
          uStack_d68 = 0;
          plStack_d58 = (long *)0x0;
          bStack_d2e = puVar4[0x1a] | bStack_da6;
          bStack_d2d = puVar4[0x1b] & bStack_da5;
          uStack_d40 = 4;
          uStack_d30 = 0x100;
          ppuStack_d48 = &PTR_SUB_1108629c8;
          pppuStack_d08 = &ppuStack_dc0;
          uStack_cf8 = 0;
          lStack_d00 = 0;
          plStack_ce8 = (long *)0x0;
          uStack_cf0 = 0;
          plStack_ce0 = (long *)0x0;
          lStack_e50 = 0;
          lStack_e48 = 0;
          uStack_e40 = 0;
          uStack_e54 = 0;
          puVar5 = &uStack_cd8;
          puStack_d88 = puVar3;
          pppuStack_d80 = &ppuStack_e38;
          puStack_d10 = puVar4;
          FUN_108c7f678(puVar5,&ppuStack_d48,&lStack_e50,&uStack_e54);
          _objc_retainAutoreleasedReturnValue();
          if (lStack_e50 != 0) {
            lStack_e48 = lStack_e50;
            __ZdlPv();
          }
          plVar14 = plStack_ce0;
          ppuStack_d48 = &PTR_SUB_1108629c8;
          plStack_ce0 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_ce8;
          plStack_ce8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_d00 != 0) {
            __ZdlPv();
          }
          plVar14 = plStack_d58;
          ppuStack_dc0 = &PTR_SUB_1108629c8;
          plStack_d58 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_d60;
          plStack_d60 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_d78 != 0) {
            __ZdlPv();
          }
          plVar14 = plStack_dd0;
          ppuStack_e38 = &PTR_SUB_1108629c8;
          plStack_dd0 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_dd8;
          plStack_dd8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          if (lStack_df0 != 0) {
            __ZdlPv();
          }
          _objc_release(uStack_cc8);
          _objc_release(uStack_cd0);
          _objc_release(pppuVar8);
          _objc_release(pppuVar11);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108bf1fa4; end: 108bf2477;  */

void FUN_108bf1fa4(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined4 uStack_c24;
  long lStack_c20;
  long lStack_c18;
  undefined8 uStack_c10;
  undefined **ppuStack_c08;
  undefined4 uStack_c00;
  undefined4 uStack_bf0;
  undefined1 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  long lStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  long *plStack_ba8;
  long *plStack_ba0;
  undefined1 uStack_b91;
  undefined **ppuStack_b90;
  undefined4 uStack_b88;
  undefined2 uStack_b78;
  byte bStack_b76;
  byte bStack_b75;
  undefined1 *puStack_b58;
  undefined ***pppuStack_b50;
  long lStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  long *plStack_b30;
  long *plStack_b28;
  undefined1 uStack_b19;
  undefined **ppuStack_b18;
  undefined4 uStack_b10;
  undefined2 uStack_b00;
  byte bStack_afe;
  byte bStack_afd;
  undefined1 *puStack_ae0;
  undefined ***pppuStack_ad8;
  long lStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  long *plStack_ab8;
  long *plStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined ***pppuStack_a90;
  undefined ***pppuStack_a88;
  undefined *puStack_a80;
  undefined *puStack_a78;
  undefined *puStack_a70;
  undefined ***pppuStack_a68;
  undefined ***pppuStack_a60;
  undefined ***pppuStack_a58;
  undefined8 **ppuStack_a50;
  code *pcStack_a48;
  undefined4 uStack_a38;
  undefined1 uStack_a31;
  long lStack_a30;
  long lStack_a28;
  undefined8 uStack_a20;
  long lStack_a18;
  long lStack_a10;
  undefined **ppuStack_a00;
  undefined4 uStack_9f8;
  undefined4 uStack_9e8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  undefined8 uStack_9a8;
  long *plStack_9a0;
  long *plStack_998;
  undefined1 uStack_989;
  undefined **ppuStack_988;
  undefined4 uStack_980;
  undefined2 uStack_970;
  byte bStack_96e;
  byte bStack_96d;
  undefined1 *puStack_950;
  undefined ***pppuStack_948;
  long lStack_940;
  long lStack_938;
  undefined8 uStack_930;
  long *plStack_928;
  long *plStack_920;
  undefined **ppuStack_918;
  undefined4 uStack_910;
  undefined4 uStack_900;
  undefined1 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long lStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long *plStack_8b8;
  long *plStack_8b0;
  undefined1 uStack_8a1;
  undefined **ppuStack_8a0;
  undefined4 uStack_898;
  undefined2 uStack_888;
  byte bStack_886;
  byte bStack_885;
  undefined1 *puStack_868;
  undefined ***pppuStack_860;
  long lStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long *plStack_840;
  long *plStack_838;
  undefined1 uStack_829;
  undefined **ppuStack_828;
  undefined4 uStack_820;
  undefined2 uStack_810;
  byte bStack_80e;
  byte bStack_80d;
  undefined1 *puStack_7f0;
  undefined ***pppuStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  long *plStack_7c8;
  long *plStack_7c0;
  undefined **ppuStack_7b8;
  undefined4 uStack_7b0;
  undefined2 uStack_7a0;
  byte bStack_79e;
  byte bStack_79d;
  undefined ***pppuStack_780;
  undefined ***pppuStack_778;
  long lStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long *plStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 uStack_728;
  undefined1 uStack_727;
  undefined4 uStack_724;
  code *pcStack_720;
  undefined8 uStack_718;
  long alStack_710 [2];
  undefined8 **ppuStack_6a0;
  code *pcStack_698;
  undefined4 uStack_688;
  undefined1 uStack_681;
  long lStack_680;
  long lStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long lStack_660;
  undefined **ppuStack_650;
  undefined4 uStack_648;
  undefined4 uStack_638;
  undefined1 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined1 uStack_5d9;
  undefined **ppuStack_5d8;
  undefined4 uStack_5d0;
  undefined2 uStack_5c0;
  byte bStack_5be;
  byte bStack_5bd;
  undefined1 *puStack_5a0;
  undefined ***pppuStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long *plStack_578;
  long *plStack_570;
  undefined1 uStack_561;
  undefined **ppuStack_560;
  undefined4 uStack_558;
  undefined2 uStack_548;
  byte bStack_546;
  byte bStack_545;
  undefined1 *puStack_528;
  undefined ***pppuStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined1 uStack_4cf;
  undefined4 uStack_4cc;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined ***pppuStack_4b0;
  undefined ***pppuStack_4a8;
  undefined ***pppuStack_4a0;
  undefined *puStack_498;
  undefined **ppuStack_490;
  undefined8 uStack_488;
  undefined **ppuStack_480;
  undefined ***pppuStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined **appuStack_420 [17];
  long lStack_398;
  undefined8 uStack_390;
  undefined ***pppuStack_388;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  undefined4 uStack_340;
  undefined1 uStack_339;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined1 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  byte bStack_276;
  byte bStack_275;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined *apuStack_220 [3];
  undefined1 uStack_201;
  undefined **appuStack_200 [3];
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined *apuStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined1 uStack_189;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined1 uStack_170;
  byte bStack_16f;
  byte bStack_16e;
  byte bStack_16d;
  undefined1 *puStack_150;
  undefined ***pppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined **ppuStack_118;
  undefined4 uStack_110;
  undefined2 uStack_100;
  byte bStack_fe;
  byte bStack_fd;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined4 uStack_84;
  code *pcStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == (undefined **)0x0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_a8,param_1);
  }
  puVar2 = &uStack_189;
  func_0x000100c486cc();
  puVar3 = &uStack_201;
  func_0x000107c2a7f8(puVar3);
  FUN_108bf2478(apuStack_220,param_3);
  func_0x000107c281a0(appuStack_200,0xd,puVar3,apuStack_220);
  bStack_16d = puVar2[0x1b] & bStack_1e5;
  bStack_16f = (puVar2[0x19] | bStack_1e7) & 1;
  bStack_16e = (puVar2[0x1a] | bStack_1e6) & 1;
  uStack_180 = 4;
  uStack_170 = 0;
  puVar14 = &UNK_1108629b8;
  ppuVar15 = &PTR_SUB_1108629c8;
  ppuStack_188 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  puVar3 = &uStack_291;
  puStack_150 = puVar2;
  pppuStack_148 = appuStack_200;
  func_0x000107c2a7fc();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  uStack_2d8 = 0;
  ppuStack_308 = &PTR_SUB_1108629c8;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  plStack_2a0 = (long *)0x0;
  bStack_276 = puVar3[0x1a];
  bStack_275 = puVar3[0x1b];
  uStack_288 = 10;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_SUB_1108629c8;
  pppuStack_250 = &ppuStack_308;
  plStack_228 = (long *)0x0;
  uStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  bStack_fe = bStack_16e | bStack_276;
  bStack_fd = bStack_16d & bStack_275;
  uStack_110 = 4;
  uStack_100 = 0x100;
  ppuStack_118 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_188;
  pppuStack_d8 = &ppuStack_290;
  uStack_c8 = 0;
  lStack_d0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  plStack_b0 = (long *)0x0;
  puVar2 = &uStack_339;
  puStack_258 = puVar3;
  func_0x000100c434a4();
  uStack_90 = *(undefined8 *)(puVar2 + 0x10);
  uStack_88 = puVar2[0x19];
  uStack_87 = puVar2[0x18];
  uStack_78 = *(undefined8 *)(puVar2 + 0x28);
  uStack_84 = 1;
  pcStack_80 = FUN_108bf5ed4;
  lStack_330 = 0;
  uStack_328 = 0;
  lStack_338 = 0;
  func_0x000100c435d0(&lStack_338,&uStack_90,alStack_70,1);
  func_0x000100c436b8(&lStack_320,&lStack_338);
  uStack_340 = 0;
  puVar4 = &uStack_a8;
  pppuVar11 = &ppuStack_118;
  FUN_108c7f678(puVar4,pppuVar11,&lStack_320,&uStack_340);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  if (lStack_338 != 0) {
    lStack_330 = lStack_338;
    __ZdlPv();
  }
  plVar1 = plStack_b0;
  ppuStack_118 = &PTR_SUB_1108629c8;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_228;
  ppuStack_290 = &PTR_SUB_1108629c8;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_248 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_1108629c8;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_1108629c8;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_140 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_198;
  appuStack_200[0] = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_290 = apuStack_1b8;
  func_0x000107c27dd4(&ppuStack_290);
  ppuStack_290 = apuStack_220;
  func_0x000107c27dd4(&ppuStack_290);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar13 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_118);
    func_0x000105007830(&ppuStack_290);
    func_0x000105007830(&ppuStack_308);
    func_0x000105007830(&ppuStack_188);
    func_0x0001050048c0(appuStack_200);
    ppuStack_290 = apuStack_220;
    func_0x000107c27dd4(&ppuStack_290);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    ppuVar5 = ppuVar13;
    __Unwind_Resume();
    uVar12 = SUB84(&uStack_460,0);
    uStack_390 = 4;
    ppuStack_380 = &PTR_SUB_1108629c8;
    puStack_378 = &UNK_1108629b8;
    pcStack_348 = FUN_108bf2478;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_388 = appuStack_200;
    ppuStack_370 = ppuVar13;
    uStack_368 = param_3;
    uStack_360 = param_2;
    ppuStack_358 = param_1;
    puStack_350 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar11);
    ppuVar5[1] = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    *ppuVar5 = (undefined *)0x0;
    pppuVar6 = pppuVar11;
    func_0x00010bf529e0();
    func_0x000107c281a4(ppuVar5);
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    puStack_450 = (undefined8 *)0x0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    _objc_retain(pppuVar11);
    pppuVar7 = pppuVar11;
    func_0x00010bf52a60();
    if (pppuVar7 != (undefined ***)0x0) {
      puVar14 = (undefined *)*puStack_450;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if ((undefined *)*puStack_450 != puVar14) {
            _objc_enumerationMutation(pppuVar11);
          }
          ppuVar13 = *(undefined ***)(lStack_458 + (long)ppuVar15 * 8);
          _objc_retain(ppuVar13);
          pppuVar6 = appuStack_420;
          appuStack_420[0] = ppuVar13;
          func_0x000107c281a8(ppuVar5);
          _objc_release(appuStack_420[0]);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (pppuVar7 != (undefined ***)ppuVar15);
        pppuVar7 = pppuVar11;
        uVar12 = (int)&uStack_460;
        func_0x00010bf52a60();
      } while (pppuVar7 != (undefined ***)0x0);
    }
    _objc_release(pppuVar11);
    pppuVar7 = pppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pppuVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    pcStack_468 = FUN_108bf25dc;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_4b0 = &ppuStack_308;
    pppuStack_4a8 = &ppuStack_188;
    pppuStack_4a0 = (undefined ***)ppuVar15;
    puStack_498 = puVar14;
    ppuStack_490 = ppuVar13;
    uStack_488 = 0;
    ppuStack_480 = ppuVar5;
    pppuStack_478 = pppuVar11;
    ppuStack_470 = &puStack_350;
    _objc_retain();
    _objc_retain(pppuVar6);
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (pppuVar7 == (undefined ***)0x0) {
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_4f0,pppuVar7);
    }
    puVar8 = &uStack_561;
    func_0x000100c43338();
    puVar2 = &uStack_5d9;
    func_0x000107c2a7fc();
    uStack_648 = 0xf;
    uStack_638 = 0x100;
    uStack_620 = 0;
    ppuStack_650 = &PTR_SUB_1108629c8;
    uVar16 = 0;
    uStack_610 = 0;
    uStack_618 = 0;
    uStack_600 = 0;
    lStack_608 = 0;
    plStack_5f0 = (long *)0x0;
    uStack_5f8 = 0;
    plStack_5e8 = (long *)0x0;
    bStack_5be = puVar2[0x1a];
    bStack_5bd = puVar2[0x1b];
    uStack_5d0 = 10;
    uStack_5c0 = 0x100;
    ppuStack_5d8 = &PTR_SUB_1108629c8;
    pppuStack_598 = &ppuStack_650;
    uStack_588 = 0;
    lStack_590 = 0;
    plStack_578 = (long *)0x0;
    uStack_580 = 0;
    plStack_570 = (long *)0x0;
    bStack_546 = puVar8[0x1a] | bStack_5be;
    bStack_545 = puVar8[0x1b] & bStack_5bd;
    uStack_558 = 4;
    uStack_548 = 0x100;
    ppuStack_560 = &PTR_SUB_1108629c8;
    pppuStack_520 = &ppuStack_5d8;
    uStack_510 = 0;
    lStack_518 = 0;
    plStack_500 = (long *)0x0;
    uStack_508 = 0;
    plStack_4f8 = (long *)0x0;
    puVar3 = &uStack_681;
    puStack_5a0 = puVar2;
    puStack_528 = puVar8;
    func_0x000100c434a4();
    uStack_4d8 = *(undefined8 *)(puVar3 + 0x10);
    uStack_4d0 = puVar3[0x19];
    uStack_4cf = puVar3[0x18];
    uStack_4c0 = *(undefined8 *)(puVar3 + 0x28);
    uStack_4cc = 1;
    pcStack_4c8 = FUN_108bf5ed4;
    lStack_678 = 0;
    uStack_670 = 0;
    lStack_680 = 0;
    func_0x000100c435d0(&lStack_680,&uStack_4d8,&lStack_4b8,1);
    func_0x000100c436b8(&lStack_668,&lStack_680);
    puVar4 = &uStack_4f0;
    pppuVar11 = &ppuStack_560;
    uStack_688 = uVar12;
    FUN_108c7f678(puVar4,pppuVar11,&lStack_668,&uStack_688);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_668 != 0) {
      lStack_660 = lStack_668;
      __ZdlPv();
    }
    if (lStack_680 != 0) {
      lStack_678 = lStack_680;
      __ZdlPv();
    }
    plVar1 = plStack_4f8;
    ppuStack_560 = &PTR_SUB_1108629c8;
    plStack_4f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_500;
    plStack_500 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_518 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_570;
    ppuStack_5d8 = &PTR_SUB_1108629c8;
    plStack_570 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_578;
    plStack_578 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_590 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_5e8;
    ppuStack_650 = &PTR_SUB_1108629c8;
    plStack_5e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5f0;
    plStack_5f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_608 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_4e0);
    _objc_release(uStack_4e8);
    _objc_release(pppuVar6);
    pppuVar9 = pppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_560);
      func_0x000105007830(&ppuStack_5d8);
      func_0x000105007830(&ppuStack_650);
      _objc_release(uStack_4e0);
      _objc_release(uStack_4e8);
      _objc_release(pppuVar6);
      _objc_release(pppuVar7);
      __Unwind_Resume();
      pcStack_698 = FUN_108bf2938;
      alStack_710[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_6a0 = &ppuStack_470;
      _objc_retain();
      _objc_retain(pppuVar11);
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (pppuVar9 == (undefined ***)0x0) {
        uStack_748 = 0;
        uStack_740 = 0;
        uStack_738 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_748,pppuVar9);
      }
      puVar2 = &uStack_829;
      func_0x000100c43338();
      puVar3 = &uStack_8a1;
      func_0x000107c2a7fc();
      uStack_910 = 0xf;
      uStack_900 = 0x100;
      uStack_8e8 = 0;
      ppuStack_918 = &PTR_SUB_1108629c8;
      uStack_8d8 = 0;
      uStack_8e0 = 0;
      uStack_8c8 = 0;
      lStack_8d0 = 0;
      plStack_8b8 = (long *)0x0;
      uStack_8c0 = 0;
      plStack_8b0 = (long *)0x0;
      bStack_886 = puVar3[0x1a];
      bStack_885 = puVar3[0x1b];
      uStack_898 = 10;
      uStack_888 = 0x100;
      ppuStack_8a0 = &PTR_SUB_1108629c8;
      pppuStack_860 = &ppuStack_918;
      uStack_850 = 0;
      lStack_858 = 0;
      plStack_840 = (long *)0x0;
      uStack_848 = 0;
      plStack_838 = (long *)0x0;
      bStack_80e = puVar2[0x1a] | bStack_886;
      bStack_80d = puVar2[0x1b] & bStack_885;
      uStack_820 = 4;
      uStack_810 = 0x100;
      ppuStack_828 = &PTR_SUB_1108629c8;
      pppuStack_7e8 = &ppuStack_8a0;
      uStack_7d8 = 0;
      lStack_7e0 = 0;
      plStack_7c8 = (long *)0x0;
      uStack_7d0 = 0;
      plStack_7c0 = (long *)0x0;
      puVar8 = &uStack_989;
      puStack_868 = puVar3;
      puStack_7f0 = puVar2;
      func_0x000100c434a4();
      uStack_9f8 = 0xf;
      uStack_9e8 = 0x100;
      ppuStack_a00 = &PTR_SUB_11086d7d0;
      uStack_9c0 = 0;
      uStack_9c8 = 0;
      lStack_9b0 = 0;
      lStack_9b8 = 0;
      plStack_9a0 = (long *)0x0;
      uStack_9a8 = 0;
      plStack_998 = (long *)0x0;
      bStack_96e = puVar8[0x1a];
      bStack_96d = puVar8[0x1b];
      uStack_980 = 6;
      uStack_970 = 0x100;
      ppuStack_988 = &PTR_SUB_11089b010;
      pppuStack_948 = &ppuStack_a00;
      plStack_920 = (long *)0x0;
      lStack_938 = 0;
      lStack_940 = 0;
      plStack_928 = (long *)0x0;
      uStack_930 = 0;
      bStack_79e = bStack_80e | bStack_96e;
      bStack_79d = bStack_80d & bStack_96d;
      uStack_7b0 = 4;
      uStack_7a0 = 0x100;
      ppuStack_7b8 = &PTR_SUB_1108629c8;
      pppuStack_780 = &ppuStack_828;
      pppuStack_778 = &ppuStack_988;
      uStack_768 = 0;
      lStack_770 = 0;
      plStack_758 = (long *)0x0;
      uStack_760 = 0;
      plStack_750 = (long *)0x0;
      puVar2 = &uStack_a31;
      uStack_9d0 = uVar16;
      puStack_950 = puVar8;
      func_0x000100c434a4();
      uStack_730 = *(undefined8 *)(puVar2 + 0x10);
      uStack_728 = puVar2[0x19];
      uStack_727 = puVar2[0x18];
      uStack_718 = *(undefined8 *)(puVar2 + 0x28);
      uStack_724 = 1;
      pcStack_720 = FUN_108bf5ed4;
      lStack_a28 = 0;
      uStack_a20 = 0;
      lStack_a30 = 0;
      func_0x000100c435d0(&lStack_a30,&uStack_730,alStack_710,1);
      func_0x000100c436b8(&lStack_a18,&lStack_a30);
      uStack_a38 = 0;
      puVar4 = &uStack_748;
      pppuVar6 = &ppuStack_7b8;
      FUN_108c7f678(puVar4,pppuVar6,&lStack_a18,&uStack_a38);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_a18 != 0) {
        lStack_a10 = lStack_a18;
        __ZdlPv();
      }
      if (lStack_a30 != 0) {
        lStack_a28 = lStack_a30;
        __ZdlPv();
      }
      plVar1 = plStack_750;
      ppuStack_7b8 = &PTR_SUB_1108629c8;
      plStack_750 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_758;
      plStack_758 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_770 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_920;
      ppuStack_988 = &PTR_SUB_11089b010;
      plStack_920 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_928;
      plStack_928 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_940 != 0) {
        lStack_938 = lStack_940;
        __ZdlPv();
      }
      plVar1 = plStack_998;
      ppuStack_a00 = &PTR_SUB_11086d7d0;
      plStack_998 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_9a0;
      plStack_9a0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_9b8 != 0) {
        lStack_9b0 = lStack_9b8;
        __ZdlPv();
      }
      plVar1 = plStack_7c0;
      ppuStack_828 = &PTR_SUB_1108629c8;
      plStack_7c0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_7c8;
      plStack_7c8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_7e0 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_838;
      ppuStack_8a0 = &PTR_SUB_1108629c8;
      plStack_838 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_840;
      plStack_840 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_858 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_8b0;
      ppuStack_918 = &PTR_SUB_1108629c8;
      plStack_8b0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_8b8;
      plStack_8b8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_8d0 != 0) {
        __ZdlPv();
      }
      _objc_release(uStack_738);
      _objc_release(uStack_740);
      _objc_release(pppuVar11);
      pppuVar7 = pppuVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_710[0]) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_7b8);
        func_0x0001055b9024(&ppuStack_988);
        func_0x000105187b98(&ppuStack_a00);
        func_0x000105007830(&ppuStack_828);
        func_0x000105007830(&ppuStack_8a0);
        func_0x000105007830(&ppuStack_918);
        _objc_release(uStack_738);
        _objc_release(uStack_740);
        _objc_release(&UNK_1108629b8);
        _objc_release(pppuVar9);
        pppuVar10 = pppuVar7;
        __Unwind_Resume();
        puStack_a80 = &UNK_11089b000;
        puStack_a78 = &UNK_11086d7c0;
        puStack_a70 = &UNK_1108629b8;
        pcStack_a48 = FUN_108bf2e5c;
        pppuStack_a90 = &ppuStack_a00;
        pppuStack_a88 = &ppuStack_828;
        pppuStack_a68 = pppuVar7;
        pppuStack_a60 = pppuVar11;
        pppuStack_a58 = pppuVar9;
        ppuStack_a50 = &ppuStack_6a0;
        _objc_retain();
        _objc_retain(pppuVar6);
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (pppuVar10 == (undefined ***)0x0) {
          uStack_aa8 = 0;
          uStack_aa0 = 0;
          uStack_a98 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_aa8,pppuVar10);
        }
        puVar3 = &uStack_b19;
        FUN_108c2e464();
        puVar2 = &uStack_b91;
        func_0x000107c2a7fc();
        uStack_c00 = 0xf;
        uStack_bf0 = 0x100;
        uStack_bd8 = 0;
        ppuStack_c08 = &PTR_SUB_1108629c8;
        uStack_bc8 = 0;
        uStack_bd0 = 0;
        uStack_bb8 = 0;
        lStack_bc0 = 0;
        plStack_ba8 = (long *)0x0;
        uStack_bb0 = 0;
        plStack_ba0 = (long *)0x0;
        bStack_b76 = puVar2[0x1a];
        bStack_b75 = puVar2[0x1b];
        uStack_b88 = 10;
        uStack_b78 = 0x100;
        ppuStack_b90 = &PTR_SUB_1108629c8;
        uStack_b40 = 0;
        lStack_b48 = 0;
        plStack_b30 = (long *)0x0;
        uStack_b38 = 0;
        plStack_b28 = (long *)0x0;
        bStack_afe = puVar3[0x1a] | bStack_b76;
        bStack_afd = puVar3[0x1b] & bStack_b75;
        uStack_b10 = 4;
        uStack_b00 = 0x100;
        ppuStack_b18 = &PTR_SUB_1108629c8;
        pppuStack_ad8 = &ppuStack_b90;
        uStack_ac8 = 0;
        lStack_ad0 = 0;
        plStack_ab8 = (long *)0x0;
        uStack_ac0 = 0;
        plStack_ab0 = (long *)0x0;
        lStack_c20 = 0;
        lStack_c18 = 0;
        uStack_c10 = 0;
        uStack_c24 = 0;
        puVar4 = &uStack_aa8;
        puStack_b58 = puVar2;
        pppuStack_b50 = &ppuStack_c08;
        puStack_ae0 = puVar3;
        FUN_108c7f678(puVar4,&ppuStack_b18,&lStack_c20,&uStack_c24);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_c20 != 0) {
          lStack_c18 = lStack_c20;
          __ZdlPv();
        }
        plVar1 = plStack_ab0;
        ppuStack_b18 = &PTR_SUB_1108629c8;
        plStack_ab0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_ab8;
        plStack_ab8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_ad0 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_b28;
        ppuStack_b90 = &PTR_SUB_1108629c8;
        plStack_b28 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_b30;
        plStack_b30 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_b48 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_ba0;
        ppuStack_c08 = &PTR_SUB_1108629c8;
        plStack_ba0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_ba8;
        plStack_ba8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_bc0 != 0) {
          __ZdlPv();
        }
        _objc_release(uStack_a98);
        _objc_release(uStack_aa0);
        _objc_release(pppuVar6);
        _objc_release(pppuVar10);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bf2478; end: 108bf25db;  */

void FUN_108bf2478(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uStack_8e4;
  long lStack_8e0;
  long lStack_8d8;
  undefined8 uStack_8d0;
  undefined **ppuStack_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8b0;
  undefined1 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  long lStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  long *plStack_868;
  long *plStack_860;
  undefined1 uStack_851;
  undefined **ppuStack_850;
  undefined4 uStack_848;
  undefined2 uStack_838;
  byte bStack_836;
  byte bStack_835;
  undefined1 *puStack_818;
  undefined ***pppuStack_810;
  long lStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  long *plStack_7f0;
  long *plStack_7e8;
  undefined1 uStack_7d9;
  undefined **ppuStack_7d8;
  undefined4 uStack_7d0;
  undefined2 uStack_7c0;
  byte bStack_7be;
  byte bStack_7bd;
  undefined1 *puStack_7a0;
  undefined ***pppuStack_798;
  long lStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long *plStack_778;
  long *plStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined ***pppuStack_750;
  undefined ***pppuStack_748;
  undefined *puStack_740;
  undefined *puStack_738;
  undefined *puStack_730;
  undefined8 *puStack_728;
  undefined ***pppuStack_720;
  undefined8 *puStack_718;
  undefined1 ***pppuStack_710;
  code *pcStack_708;
  undefined4 uStack_6f8;
  undefined1 uStack_6f1;
  long lStack_6f0;
  long lStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  undefined **ppuStack_6c0;
  undefined4 uStack_6b8;
  undefined4 uStack_6a8;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  long lStack_678;
  long lStack_670;
  undefined8 uStack_668;
  long *plStack_660;
  long *plStack_658;
  undefined1 uStack_649;
  undefined **ppuStack_648;
  undefined4 uStack_640;
  undefined2 uStack_630;
  byte bStack_62e;
  byte bStack_62d;
  undefined1 *puStack_610;
  undefined ***pppuStack_608;
  long lStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  undefined **ppuStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5c0;
  undefined1 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long *plStack_578;
  long *plStack_570;
  undefined1 uStack_561;
  undefined **ppuStack_560;
  undefined4 uStack_558;
  undefined2 uStack_548;
  byte bStack_546;
  byte bStack_545;
  undefined1 *puStack_528;
  undefined ***pppuStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined1 uStack_4e9;
  undefined **ppuStack_4e8;
  undefined4 uStack_4e0;
  undefined2 uStack_4d0;
  byte bStack_4ce;
  byte bStack_4cd;
  undefined1 *puStack_4b0;
  undefined ***pppuStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined **ppuStack_478;
  undefined4 uStack_470;
  undefined2 uStack_460;
  byte bStack_45e;
  byte bStack_45d;
  undefined ***pppuStack_440;
  undefined ***pppuStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  undefined1 uStack_3e7;
  undefined4 uStack_3e4;
  code *pcStack_3e0;
  undefined8 uStack_3d8;
  long alStack_3d0 [2];
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined4 uStack_348;
  undefined1 uStack_341;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_299;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined1 *puStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  byte bStack_206;
  byte bStack_205;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined4 uStack_18c;
  code *pcStack_188;
  undefined8 uStack_180;
  long lStack_178;
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
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  uVar10 = SUB84(&uStack_120,0);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar12 = *plStack_110;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_2);
        }
        uVar11 = *(undefined8 *)(lStack_118 + (long)puVar13 * 8);
        _objc_retain(uVar11);
        puVar2 = auStack_e0;
        auStack_e0[0] = uVar11;
        func_0x000107c281a8(param_1);
        _objc_release(auStack_e0[0]);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar3 != puVar13);
      puVar3 = param_2;
      uVar10 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((int)puVar2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    pcStack_128 = FUN_108bf25dc;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(puVar2);
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_2 == (undefined8 *)0x0) {
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_1b0,param_2);
    }
    puVar4 = &uStack_221;
    func_0x000100c43338();
    puVar5 = &uStack_299;
    func_0x000107c2a7fc();
    uStack_308 = 0xf;
    uStack_2f8 = 0x100;
    uStack_2e0 = 0;
    ppuStack_310 = &PTR_SUB_1108629c8;
    uVar11 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c0 = 0;
    lStack_2c8 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_2b8 = 0;
    plStack_2a8 = (long *)0x0;
    bStack_27e = puVar5[0x1a];
    bStack_27d = puVar5[0x1b];
    uStack_290 = 10;
    uStack_280 = 0x100;
    ppuStack_298 = &PTR_SUB_1108629c8;
    pppuStack_258 = &ppuStack_310;
    uStack_248 = 0;
    lStack_250 = 0;
    plStack_238 = (long *)0x0;
    uStack_240 = 0;
    plStack_230 = (long *)0x0;
    bStack_206 = puVar4[0x1a] | bStack_27e;
    bStack_205 = puVar4[0x1b] & bStack_27d;
    uStack_218 = 4;
    uStack_208 = 0x100;
    ppuStack_220 = &PTR_SUB_1108629c8;
    pppuStack_1e0 = &ppuStack_298;
    uStack_1d0 = 0;
    lStack_1d8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1c8 = 0;
    plStack_1b8 = (long *)0x0;
    puVar6 = &uStack_341;
    puStack_260 = puVar5;
    puStack_1e8 = puVar4;
    func_0x000100c434a4();
    uStack_198 = *(undefined8 *)(puVar6 + 0x10);
    uStack_190 = puVar6[0x19];
    uStack_18f = puVar6[0x18];
    uStack_180 = *(undefined8 *)(puVar6 + 0x28);
    uStack_18c = 1;
    pcStack_188 = FUN_108bf5ed4;
    lStack_338 = 0;
    uStack_330 = 0;
    lStack_340 = 0;
    func_0x000100c435d0(&lStack_340,&uStack_198,&lStack_178,1);
    func_0x000100c436b8(&lStack_328,&lStack_340);
    puVar3 = &uStack_1b0;
    pppuVar8 = &ppuStack_220;
    uStack_348 = uVar10;
    FUN_108c7f678(puVar3,pppuVar8,&lStack_328,&uStack_348);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_328 != 0) {
      lStack_320 = lStack_328;
      __ZdlPv();
    }
    if (lStack_340 != 0) {
      lStack_338 = lStack_340;
      __ZdlPv();
    }
    plVar1 = plStack_1b8;
    ppuStack_220 = &PTR_SUB_1108629c8;
    plStack_1b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1c0;
    plStack_1c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1d8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_230;
    ppuStack_298 = &PTR_SUB_1108629c8;
    plStack_230 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_238;
    plStack_238 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_250 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_2a8;
    ppuStack_310 = &PTR_SUB_1108629c8;
    plStack_2a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2b0;
    plStack_2b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_2c8 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_1a0);
    _objc_release(uStack_1a8);
    _objc_release(puVar2);
    puVar13 = param_2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_220);
      func_0x000105007830(&ppuStack_298);
      func_0x000105007830(&ppuStack_310);
      _objc_release(uStack_1a0);
      _objc_release(uStack_1a8);
      _objc_release(puVar2);
      _objc_release(param_2);
      __Unwind_Resume();
      pcStack_358 = FUN_108bf2938;
      alStack_3d0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_360 = &puStack_130;
      _objc_retain();
      _objc_retain(pppuVar8);
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (puVar13 == (undefined8 *)0x0) {
        uStack_408 = 0;
        uStack_400 = 0;
        uStack_3f8 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_408,puVar13);
      }
      puVar5 = &uStack_4e9;
      func_0x000100c43338();
      puVar6 = &uStack_561;
      func_0x000107c2a7fc();
      uStack_5d0 = 0xf;
      uStack_5c0 = 0x100;
      uStack_5a8 = 0;
      ppuStack_5d8 = &PTR_SUB_1108629c8;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      lStack_590 = 0;
      plStack_578 = (long *)0x0;
      uStack_580 = 0;
      plStack_570 = (long *)0x0;
      bStack_546 = puVar6[0x1a];
      bStack_545 = puVar6[0x1b];
      uStack_558 = 10;
      uStack_548 = 0x100;
      ppuStack_560 = &PTR_SUB_1108629c8;
      pppuStack_520 = &ppuStack_5d8;
      uStack_510 = 0;
      lStack_518 = 0;
      plStack_500 = (long *)0x0;
      uStack_508 = 0;
      plStack_4f8 = (long *)0x0;
      bStack_4ce = puVar5[0x1a] | bStack_546;
      bStack_4cd = puVar5[0x1b] & bStack_545;
      uStack_4e0 = 4;
      uStack_4d0 = 0x100;
      ppuStack_4e8 = &PTR_SUB_1108629c8;
      pppuStack_4a8 = &ppuStack_560;
      uStack_498 = 0;
      lStack_4a0 = 0;
      plStack_488 = (long *)0x0;
      uStack_490 = 0;
      plStack_480 = (long *)0x0;
      puVar4 = &uStack_649;
      puStack_528 = puVar6;
      puStack_4b0 = puVar5;
      func_0x000100c434a4();
      uStack_6b8 = 0xf;
      uStack_6a8 = 0x100;
      ppuStack_6c0 = &PTR_SUB_11086d7d0;
      uStack_680 = 0;
      uStack_688 = 0;
      lStack_670 = 0;
      lStack_678 = 0;
      plStack_660 = (long *)0x0;
      uStack_668 = 0;
      plStack_658 = (long *)0x0;
      bStack_62e = puVar4[0x1a];
      bStack_62d = puVar4[0x1b];
      uStack_640 = 6;
      uStack_630 = 0x100;
      ppuStack_648 = &PTR_SUB_11089b010;
      pppuStack_608 = &ppuStack_6c0;
      plStack_5e0 = (long *)0x0;
      lStack_5f8 = 0;
      lStack_600 = 0;
      plStack_5e8 = (long *)0x0;
      uStack_5f0 = 0;
      bStack_45e = bStack_4ce | bStack_62e;
      bStack_45d = bStack_4cd & bStack_62d;
      uStack_470 = 4;
      uStack_460 = 0x100;
      ppuStack_478 = &PTR_SUB_1108629c8;
      pppuStack_440 = &ppuStack_4e8;
      pppuStack_438 = &ppuStack_648;
      uStack_428 = 0;
      lStack_430 = 0;
      plStack_418 = (long *)0x0;
      uStack_420 = 0;
      plStack_410 = (long *)0x0;
      puVar5 = &uStack_6f1;
      uStack_690 = uVar11;
      puStack_610 = puVar4;
      func_0x000100c434a4();
      uStack_3f0 = *(undefined8 *)(puVar5 + 0x10);
      uStack_3e8 = puVar5[0x19];
      uStack_3e7 = puVar5[0x18];
      uStack_3d8 = *(undefined8 *)(puVar5 + 0x28);
      uStack_3e4 = 1;
      pcStack_3e0 = FUN_108bf5ed4;
      lStack_6e8 = 0;
      uStack_6e0 = 0;
      lStack_6f0 = 0;
      func_0x000100c435d0(&lStack_6f0,&uStack_3f0,alStack_3d0,1);
      func_0x000100c436b8(&lStack_6d8,&lStack_6f0);
      uStack_6f8 = 0;
      puVar3 = &uStack_408;
      pppuVar9 = &ppuStack_478;
      FUN_108c7f678(puVar3,pppuVar9,&lStack_6d8,&uStack_6f8);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_6d8 != 0) {
        lStack_6d0 = lStack_6d8;
        __ZdlPv();
      }
      if (lStack_6f0 != 0) {
        lStack_6e8 = lStack_6f0;
        __ZdlPv();
      }
      plVar1 = plStack_410;
      ppuStack_478 = &PTR_SUB_1108629c8;
      plStack_410 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_418;
      plStack_418 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_430 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_5e0;
      ppuStack_648 = &PTR_SUB_11089b010;
      plStack_5e0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_5e8;
      plStack_5e8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_600 != 0) {
        lStack_5f8 = lStack_600;
        __ZdlPv();
      }
      plVar1 = plStack_658;
      ppuStack_6c0 = &PTR_SUB_11086d7d0;
      plStack_658 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_660;
      plStack_660 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_678 != 0) {
        lStack_670 = lStack_678;
        __ZdlPv();
      }
      plVar1 = plStack_480;
      ppuStack_4e8 = &PTR_SUB_1108629c8;
      plStack_480 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_488;
      plStack_488 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_4a0 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_4f8;
      ppuStack_560 = &PTR_SUB_1108629c8;
      plStack_4f8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_500;
      plStack_500 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_518 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_570;
      ppuStack_5d8 = &PTR_SUB_1108629c8;
      plStack_570 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_578;
      plStack_578 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_590 != 0) {
        __ZdlPv();
      }
      _objc_release(uStack_3f8);
      _objc_release(uStack_400);
      _objc_release(pppuVar8);
      puVar2 = puVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_3d0[0]) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_478);
        func_0x0001055b9024(&ppuStack_648);
        func_0x000105187b98(&ppuStack_6c0);
        func_0x000105007830(&ppuStack_4e8);
        func_0x000105007830(&ppuStack_560);
        func_0x000105007830(&ppuStack_5d8);
        _objc_release(uStack_3f8);
        _objc_release(uStack_400);
        _objc_release(&UNK_1108629b8);
        _objc_release(puVar13);
        puVar7 = puVar2;
        __Unwind_Resume();
        puStack_740 = &UNK_11089b000;
        puStack_738 = &UNK_11086d7c0;
        puStack_730 = &UNK_1108629b8;
        pcStack_708 = FUN_108bf2e5c;
        pppuStack_750 = &ppuStack_6c0;
        pppuStack_748 = &ppuStack_4e8;
        puStack_728 = puVar2;
        pppuStack_720 = pppuVar8;
        puStack_718 = puVar13;
        pppuStack_710 = &ppuStack_360;
        _objc_retain();
        _objc_retain(pppuVar9);
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (puVar7 == (undefined8 *)0x0) {
          uStack_768 = 0;
          uStack_760 = 0;
          uStack_758 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_768,puVar7);
        }
        puVar6 = &uStack_7d9;
        FUN_108c2e464();
        puVar5 = &uStack_851;
        func_0x000107c2a7fc();
        uStack_8c0 = 0xf;
        uStack_8b0 = 0x100;
        uStack_898 = 0;
        ppuStack_8c8 = &PTR_SUB_1108629c8;
        uStack_888 = 0;
        uStack_890 = 0;
        uStack_878 = 0;
        lStack_880 = 0;
        plStack_868 = (long *)0x0;
        uStack_870 = 0;
        plStack_860 = (long *)0x0;
        bStack_836 = puVar5[0x1a];
        bStack_835 = puVar5[0x1b];
        uStack_848 = 10;
        uStack_838 = 0x100;
        ppuStack_850 = &PTR_SUB_1108629c8;
        uStack_800 = 0;
        lStack_808 = 0;
        plStack_7f0 = (long *)0x0;
        uStack_7f8 = 0;
        plStack_7e8 = (long *)0x0;
        bStack_7be = puVar6[0x1a] | bStack_836;
        bStack_7bd = puVar6[0x1b] & bStack_835;
        uStack_7d0 = 4;
        uStack_7c0 = 0x100;
        ppuStack_7d8 = &PTR_SUB_1108629c8;
        pppuStack_798 = &ppuStack_850;
        uStack_788 = 0;
        lStack_790 = 0;
        plStack_778 = (long *)0x0;
        uStack_780 = 0;
        plStack_770 = (long *)0x0;
        lStack_8e0 = 0;
        lStack_8d8 = 0;
        uStack_8d0 = 0;
        uStack_8e4 = 0;
        puVar3 = &uStack_768;
        puStack_818 = puVar5;
        pppuStack_810 = &ppuStack_8c8;
        puStack_7a0 = puVar6;
        FUN_108c7f678(puVar3,&ppuStack_7d8,&lStack_8e0,&uStack_8e4);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_8e0 != 0) {
          lStack_8d8 = lStack_8e0;
          __ZdlPv();
        }
        plVar1 = plStack_770;
        ppuStack_7d8 = &PTR_SUB_1108629c8;
        plStack_770 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_778;
        plStack_778 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_790 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_7e8;
        ppuStack_850 = &PTR_SUB_1108629c8;
        plStack_7e8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_7f0;
        plStack_7f0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_808 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_860;
        ppuStack_8c8 = &PTR_SUB_1108629c8;
        plStack_860 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_868;
        plStack_868 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_880 != 0) {
          __ZdlPv();
        }
        _objc_release(uStack_758);
        _objc_release(uStack_760);
        _objc_release(pppuVar9);
        _objc_release(puVar7);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 108bf25dc; end: 108bf2937;  */

void FUN_108bf25dc(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined4 uStack_7c4;
  long lStack_7c0;
  long lStack_7b8;
  undefined8 uStack_7b0;
  undefined **ppuStack_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_790;
  undefined1 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  long lStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  long *plStack_748;
  long *plStack_740;
  undefined1 uStack_731;
  undefined **ppuStack_730;
  undefined4 uStack_728;
  undefined2 uStack_718;
  byte bStack_716;
  byte bStack_715;
  undefined1 *puStack_6f8;
  undefined ***pppuStack_6f0;
  long lStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  long *plStack_6d0;
  long *plStack_6c8;
  undefined1 uStack_6b9;
  undefined **ppuStack_6b8;
  undefined4 uStack_6b0;
  undefined2 uStack_6a0;
  byte bStack_69e;
  byte bStack_69d;
  undefined1 *puStack_680;
  undefined ***pppuStack_678;
  long lStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long *plStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined ***pppuStack_630;
  undefined ***pppuStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  long lStack_608;
  undefined ***pppuStack_600;
  long lStack_5f8;
  undefined1 **ppuStack_5f0;
  code *pcStack_5e8;
  undefined4 uStack_5d8;
  undefined1 uStack_5d1;
  long lStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  undefined **ppuStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_588;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long lStack_550;
  undefined8 uStack_548;
  long *plStack_540;
  long *plStack_538;
  undefined1 uStack_529;
  undefined **ppuStack_528;
  undefined4 uStack_520;
  undefined2 uStack_510;
  byte bStack_50e;
  byte bStack_50d;
  undefined1 *puStack_4f0;
  undefined ***pppuStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  undefined **ppuStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4a0;
  undefined1 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long *plStack_450;
  undefined1 uStack_441;
  undefined **ppuStack_440;
  undefined4 uStack_438;
  undefined2 uStack_428;
  byte bStack_426;
  byte bStack_425;
  undefined1 *puStack_408;
  undefined ***pppuStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 uStack_3c9;
  undefined **ppuStack_3c8;
  undefined4 uStack_3c0;
  undefined2 uStack_3b0;
  byte bStack_3ae;
  byte bStack_3ad;
  undefined1 *puStack_390;
  undefined ***pppuStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  long *plStack_360;
  undefined **ppuStack_358;
  undefined4 uStack_350;
  undefined2 uStack_340;
  byte bStack_33e;
  byte bStack_33d;
  undefined ***pppuStack_320;
  undefined ***pppuStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined4 uStack_2c4;
  code *pcStack_2c0;
  undefined8 uStack_2b8;
  long alStack_2b0 [2];
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined4 uStack_228;
  undefined1 uStack_221;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1d8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 uStack_179;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined2 uStack_160;
  byte bStack_15e;
  byte bStack_15d;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  byte bStack_e6;
  byte bStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  func_0x000100c43338();
  puVar3 = &uStack_179;
  func_0x000107c2a7fc();
  uStack_1e8 = 0xf;
  uStack_1d8 = 0x100;
  uStack_1c0 = 0;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  uVar11 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  bStack_15e = puVar3[0x1a];
  bStack_15d = puVar3[0x1b];
  uStack_170 = 10;
  uStack_160 = 0x100;
  ppuStack_178 = &PTR_SUB_1108629c8;
  pppuStack_138 = &ppuStack_1f0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  bStack_e6 = puVar2[0x1a] | bStack_15e;
  bStack_e5 = puVar2[0x1b] & bStack_15d;
  uStack_f8 = 4;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  pppuStack_c0 = &ppuStack_178;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  puVar4 = &uStack_221;
  puStack_140 = puVar3;
  puStack_c8 = puVar2;
  func_0x000100c434a4();
  uStack_78 = *(undefined8 *)(puVar4 + 0x10);
  uStack_70 = puVar4[0x19];
  uStack_6f = puVar4[0x18];
  uStack_60 = *(undefined8 *)(puVar4 + 0x28);
  uStack_6c = 1;
  pcStack_68 = FUN_108bf5ed4;
  lStack_218 = 0;
  uStack_210 = 0;
  lStack_220 = 0;
  func_0x000100c435d0(&lStack_220,&uStack_78,&lStack_58,1);
  func_0x000100c436b8(&lStack_208,&lStack_220);
  puVar5 = &uStack_90;
  pppuVar9 = &ppuStack_100;
  uStack_228 = param_3;
  FUN_108c7f678(puVar5,pppuVar9,&lStack_208,&uStack_228);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_208 != 0) {
    lStack_200 = lStack_208;
    __ZdlPv();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_188;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  plStack_188 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1a8 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_2);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_100);
    func_0x000105007830(&ppuStack_178);
    func_0x000105007830(&ppuStack_1f0);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    pcStack_238 = FUN_108bf2938;
    alStack_2b0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar9);
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (lVar6 == 0) {
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_2e8,lVar6);
    }
    puVar3 = &uStack_3c9;
    func_0x000100c43338();
    puVar4 = &uStack_441;
    func_0x000107c2a7fc();
    uStack_4b0 = 0xf;
    uStack_4a0 = 0x100;
    uStack_488 = 0;
    ppuStack_4b8 = &PTR_SUB_1108629c8;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    lStack_470 = 0;
    plStack_458 = (long *)0x0;
    uStack_460 = 0;
    plStack_450 = (long *)0x0;
    bStack_426 = puVar4[0x1a];
    bStack_425 = puVar4[0x1b];
    uStack_438 = 10;
    uStack_428 = 0x100;
    ppuStack_440 = &PTR_SUB_1108629c8;
    pppuStack_400 = &ppuStack_4b8;
    uStack_3f0 = 0;
    lStack_3f8 = 0;
    plStack_3e0 = (long *)0x0;
    uStack_3e8 = 0;
    plStack_3d8 = (long *)0x0;
    bStack_3ae = puVar3[0x1a] | bStack_426;
    bStack_3ad = puVar3[0x1b] & bStack_425;
    uStack_3c0 = 4;
    uStack_3b0 = 0x100;
    ppuStack_3c8 = &PTR_SUB_1108629c8;
    pppuStack_388 = &ppuStack_440;
    uStack_378 = 0;
    lStack_380 = 0;
    plStack_368 = (long *)0x0;
    uStack_370 = 0;
    plStack_360 = (long *)0x0;
    puVar2 = &uStack_529;
    puStack_408 = puVar4;
    puStack_390 = puVar3;
    func_0x000100c434a4();
    uStack_598 = 0xf;
    uStack_588 = 0x100;
    ppuStack_5a0 = &PTR_SUB_11086d7d0;
    uStack_560 = 0;
    uStack_568 = 0;
    lStack_550 = 0;
    lStack_558 = 0;
    plStack_540 = (long *)0x0;
    uStack_548 = 0;
    plStack_538 = (long *)0x0;
    bStack_50e = puVar2[0x1a];
    bStack_50d = puVar2[0x1b];
    uStack_520 = 6;
    uStack_510 = 0x100;
    ppuStack_528 = &PTR_SUB_11089b010;
    pppuStack_4e8 = &ppuStack_5a0;
    plStack_4c0 = (long *)0x0;
    lStack_4d8 = 0;
    lStack_4e0 = 0;
    plStack_4c8 = (long *)0x0;
    uStack_4d0 = 0;
    bStack_33e = bStack_3ae | bStack_50e;
    bStack_33d = bStack_3ad & bStack_50d;
    uStack_350 = 4;
    uStack_340 = 0x100;
    ppuStack_358 = &PTR_SUB_1108629c8;
    pppuStack_320 = &ppuStack_3c8;
    pppuStack_318 = &ppuStack_528;
    uStack_308 = 0;
    lStack_310 = 0;
    plStack_2f8 = (long *)0x0;
    uStack_300 = 0;
    plStack_2f0 = (long *)0x0;
    puVar3 = &uStack_5d1;
    uStack_570 = uVar11;
    puStack_4f0 = puVar2;
    func_0x000100c434a4();
    uStack_2d0 = *(undefined8 *)(puVar3 + 0x10);
    uStack_2c8 = puVar3[0x19];
    uStack_2c7 = puVar3[0x18];
    uStack_2b8 = *(undefined8 *)(puVar3 + 0x28);
    uStack_2c4 = 1;
    pcStack_2c0 = FUN_108bf5ed4;
    lStack_5c8 = 0;
    uStack_5c0 = 0;
    lStack_5d0 = 0;
    func_0x000100c435d0(&lStack_5d0,&uStack_2d0,alStack_2b0,1);
    func_0x000100c436b8(&lStack_5b8,&lStack_5d0);
    uStack_5d8 = 0;
    puVar5 = &uStack_2e8;
    pppuVar10 = &ppuStack_358;
    FUN_108c7f678(puVar5,pppuVar10,&lStack_5b8,&uStack_5d8);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_5b8 != 0) {
      lStack_5b0 = lStack_5b8;
      __ZdlPv();
    }
    if (lStack_5d0 != 0) {
      lStack_5c8 = lStack_5d0;
      __ZdlPv();
    }
    plVar1 = plStack_2f0;
    ppuStack_358 = &PTR_SUB_1108629c8;
    plStack_2f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2f8;
    plStack_2f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_310 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_4c0;
    ppuStack_528 = &PTR_SUB_11089b010;
    plStack_4c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4c8;
    plStack_4c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4e0 != 0) {
      lStack_4d8 = lStack_4e0;
      __ZdlPv();
    }
    plVar1 = plStack_538;
    ppuStack_5a0 = &PTR_SUB_11086d7d0;
    plStack_538 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_540;
    plStack_540 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_558 != 0) {
      lStack_550 = lStack_558;
      __ZdlPv();
    }
    plVar1 = plStack_360;
    ppuStack_3c8 = &PTR_SUB_1108629c8;
    plStack_360 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_368;
    plStack_368 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_380 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_3d8;
    ppuStack_440 = &PTR_SUB_1108629c8;
    plStack_3d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3e0;
    plStack_3e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_3f8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_450;
    ppuStack_4b8 = &PTR_SUB_1108629c8;
    plStack_450 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_458;
    plStack_458 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_470 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_2d8);
    _objc_release(uStack_2e0);
    _objc_release(pppuVar9);
    lVar7 = lVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_2b0[0]) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_358);
      func_0x0001055b9024(&ppuStack_528);
      func_0x000105187b98(&ppuStack_5a0);
      func_0x000105007830(&ppuStack_3c8);
      func_0x000105007830(&ppuStack_440);
      func_0x000105007830(&ppuStack_4b8);
      _objc_release(uStack_2d8);
      _objc_release(uStack_2e0);
      _objc_release(&UNK_1108629b8);
      _objc_release(lVar6);
      lVar8 = lVar7;
      __Unwind_Resume();
      puStack_620 = &UNK_11089b000;
      puStack_618 = &UNK_11086d7c0;
      puStack_610 = &UNK_1108629b8;
      pcStack_5e8 = FUN_108bf2e5c;
      pppuStack_630 = &ppuStack_5a0;
      pppuStack_628 = &ppuStack_3c8;
      lStack_608 = lVar7;
      pppuStack_600 = pppuVar9;
      lStack_5f8 = lVar6;
      ppuStack_5f0 = &puStack_240;
      _objc_retain();
      _objc_retain(pppuVar10);
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar8 == 0) {
        uStack_648 = 0;
        uStack_640 = 0;
        uStack_638 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_648,lVar8);
      }
      puVar4 = &uStack_6b9;
      FUN_108c2e464();
      puVar3 = &uStack_731;
      func_0x000107c2a7fc();
      uStack_7a0 = 0xf;
      uStack_790 = 0x100;
      uStack_778 = 0;
      ppuStack_7a8 = &PTR_SUB_1108629c8;
      uStack_768 = 0;
      uStack_770 = 0;
      uStack_758 = 0;
      lStack_760 = 0;
      plStack_748 = (long *)0x0;
      uStack_750 = 0;
      plStack_740 = (long *)0x0;
      bStack_716 = puVar3[0x1a];
      bStack_715 = puVar3[0x1b];
      uStack_728 = 10;
      uStack_718 = 0x100;
      ppuStack_730 = &PTR_SUB_1108629c8;
      uStack_6e0 = 0;
      lStack_6e8 = 0;
      plStack_6d0 = (long *)0x0;
      uStack_6d8 = 0;
      plStack_6c8 = (long *)0x0;
      bStack_69e = puVar4[0x1a] | bStack_716;
      bStack_69d = puVar4[0x1b] & bStack_715;
      uStack_6b0 = 4;
      uStack_6a0 = 0x100;
      ppuStack_6b8 = &PTR_SUB_1108629c8;
      pppuStack_678 = &ppuStack_730;
      uStack_668 = 0;
      lStack_670 = 0;
      plStack_658 = (long *)0x0;
      uStack_660 = 0;
      plStack_650 = (long *)0x0;
      lStack_7c0 = 0;
      lStack_7b8 = 0;
      uStack_7b0 = 0;
      uStack_7c4 = 0;
      puVar5 = &uStack_648;
      puStack_6f8 = puVar3;
      pppuStack_6f0 = &ppuStack_7a8;
      puStack_680 = puVar4;
      FUN_108c7f678(puVar5,&ppuStack_6b8,&lStack_7c0,&uStack_7c4);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_7c0 != 0) {
        lStack_7b8 = lStack_7c0;
        __ZdlPv();
      }
      plVar1 = plStack_650;
      ppuStack_6b8 = &PTR_SUB_1108629c8;
      plStack_650 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_658;
      plStack_658 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_670 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_6c8;
      ppuStack_730 = &PTR_SUB_1108629c8;
      plStack_6c8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_6d0;
      plStack_6d0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_6e8 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_740;
      ppuStack_7a8 = &PTR_SUB_1108629c8;
      plStack_740 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_748;
      plStack_748 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_760 != 0) {
        __ZdlPv();
      }
      _objc_release(uStack_638);
      _objc_release(uStack_640);
      _objc_release(pppuVar10);
      _objc_release(lVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108bf2938; end: 108bf2e5b;  */

void FUN_108bf2938(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined4 uStack_594;
  long lStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined **ppuStack_578;
  undefined4 uStack_570;
  undefined4 uStack_560;
  undefined1 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long *plStack_518;
  long *plStack_510;
  undefined1 uStack_501;
  undefined **ppuStack_500;
  undefined4 uStack_4f8;
  undefined2 uStack_4e8;
  byte bStack_4e6;
  byte bStack_4e5;
  undefined1 *puStack_4c8;
  undefined ***pppuStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  undefined1 uStack_489;
  undefined **ppuStack_488;
  undefined4 uStack_480;
  undefined2 uStack_470;
  byte bStack_46e;
  byte bStack_46d;
  undefined1 *puStack_450;
  undefined ***pppuStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined ***pppuStack_400;
  undefined ***pppuStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined1 *puStack_3c0;
  code *pcStack_3b8;
  undefined4 uStack_3a8;
  undefined1 uStack_3a1;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined4 uStack_358;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_2f9;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  undefined2 uStack_2e0;
  byte bStack_2de;
  byte bStack_2dd;
  undefined1 *puStack_2c0;
  undefined ***pppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 uStack_199;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined2 uStack_180;
  byte bStack_17e;
  byte bStack_17d;
  undefined1 *puStack_160;
  undefined ***pppuStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined **ppuStack_128;
  undefined4 uStack_120;
  undefined2 uStack_110;
  byte bStack_10e;
  byte bStack_10d;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined4 uStack_94;
  code *pcStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  
  alStack_80[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_b8,param_2);
  }
  puVar2 = &uStack_199;
  func_0x000100c43338();
  puVar3 = &uStack_211;
  func_0x000107c2a7fc();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  uStack_258 = 0;
  ppuStack_288 = &PTR_SUB_1108629c8;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  bStack_1f6 = puVar3[0x1a];
  bStack_1f5 = puVar3[0x1b];
  uStack_208 = 10;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_SUB_1108629c8;
  pppuStack_1d0 = &ppuStack_288;
  uStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  plStack_1a8 = (long *)0x0;
  bStack_17e = puVar2[0x1a] | bStack_1f6;
  bStack_17d = puVar2[0x1b] & bStack_1f5;
  uStack_190 = 4;
  uStack_180 = 0x100;
  ppuStack_198 = &PTR_SUB_1108629c8;
  pppuStack_158 = &ppuStack_210;
  uStack_148 = 0;
  lStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  puVar4 = &uStack_2f9;
  puStack_1d8 = puVar3;
  puStack_160 = puVar2;
  func_0x000100c434a4();
  uStack_368 = 0xf;
  uStack_358 = 0x100;
  ppuStack_370 = &PTR_SUB_11086d7d0;
  uStack_330 = 0;
  uStack_338 = 0;
  lStack_320 = 0;
  lStack_328 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  plStack_308 = (long *)0x0;
  bStack_2de = puVar4[0x1a];
  bStack_2dd = puVar4[0x1b];
  uStack_2f0 = 6;
  uStack_2e0 = 0x100;
  ppuStack_2f8 = &PTR_SUB_11089b010;
  pppuStack_2b8 = &ppuStack_370;
  plStack_290 = (long *)0x0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  plStack_298 = (long *)0x0;
  uStack_2a0 = 0;
  bStack_10e = bStack_17e | bStack_2de;
  bStack_10d = bStack_17d & bStack_2dd;
  uStack_120 = 4;
  uStack_110 = 0x100;
  ppuStack_128 = &PTR_SUB_1108629c8;
  pppuStack_f0 = &ppuStack_198;
  pppuStack_e8 = &ppuStack_2f8;
  uStack_d8 = 0;
  lStack_e0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_d0 = 0;
  plStack_c0 = (long *)0x0;
  puVar2 = &uStack_3a1;
  uStack_340 = param_1;
  puStack_2c0 = puVar4;
  func_0x000100c434a4();
  uStack_a0 = *(undefined8 *)(puVar2 + 0x10);
  uStack_98 = puVar2[0x19];
  uStack_97 = puVar2[0x18];
  uStack_88 = *(undefined8 *)(puVar2 + 0x28);
  uStack_94 = 1;
  pcStack_90 = FUN_108bf5ed4;
  lStack_398 = 0;
  uStack_390 = 0;
  lStack_3a0 = 0;
  func_0x000100c435d0(&lStack_3a0,&uStack_a0,alStack_80,1);
  func_0x000100c436b8(&lStack_388,&lStack_3a0);
  uStack_3a8 = 0;
  puVar5 = &uStack_b8;
  pppuVar8 = &ppuStack_128;
  FUN_108c7f678(puVar5,pppuVar8,&lStack_388,&uStack_3a8);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  if (lStack_3a0 != 0) {
    lStack_398 = lStack_3a0;
    __ZdlPv();
  }
  plVar1 = plStack_c0;
  ppuStack_128 = &PTR_SUB_1108629c8;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c8;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_e0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_290;
  ppuStack_2f8 = &PTR_SUB_11089b010;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_298;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  plVar1 = plStack_308;
  ppuStack_370 = &PTR_SUB_11086d7d0;
  plStack_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_310;
  plStack_310 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_SUB_1108629c8;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_150 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1a8;
  ppuStack_210 = &PTR_SUB_1108629c8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_SUB_1108629c8;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(param_3);
  lVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_80[0]) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_128);
    func_0x0001055b9024(&ppuStack_2f8);
    func_0x000105187b98(&ppuStack_370);
    func_0x000105007830(&ppuStack_198);
    func_0x000105007830(&ppuStack_210);
    func_0x000105007830(&ppuStack_288);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(&UNK_1108629b8);
    _objc_release(param_2);
    lVar7 = lVar6;
    __Unwind_Resume();
    puStack_3f0 = &UNK_11089b000;
    puStack_3e8 = &UNK_11086d7c0;
    puStack_3e0 = &UNK_1108629b8;
    pcStack_3b8 = FUN_108bf2e5c;
    pppuStack_400 = &ppuStack_370;
    pppuStack_3f8 = &ppuStack_198;
    lStack_3d8 = lVar6;
    uStack_3d0 = param_3;
    lStack_3c8 = param_2;
    puStack_3c0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar8);
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (lVar7 == 0) {
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_418,lVar7);
    }
    puVar3 = &uStack_489;
    FUN_108c2e464();
    puVar2 = &uStack_501;
    func_0x000107c2a7fc();
    uStack_570 = 0xf;
    uStack_560 = 0x100;
    uStack_548 = 0;
    ppuStack_578 = &PTR_SUB_1108629c8;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    lStack_530 = 0;
    plStack_518 = (long *)0x0;
    uStack_520 = 0;
    plStack_510 = (long *)0x0;
    bStack_4e6 = puVar2[0x1a];
    bStack_4e5 = puVar2[0x1b];
    uStack_4f8 = 10;
    uStack_4e8 = 0x100;
    ppuStack_500 = &PTR_SUB_1108629c8;
    uStack_4b0 = 0;
    lStack_4b8 = 0;
    plStack_4a0 = (long *)0x0;
    uStack_4a8 = 0;
    plStack_498 = (long *)0x0;
    bStack_46e = puVar3[0x1a] | bStack_4e6;
    bStack_46d = puVar3[0x1b] & bStack_4e5;
    uStack_480 = 4;
    uStack_470 = 0x100;
    ppuStack_488 = &PTR_SUB_1108629c8;
    pppuStack_448 = &ppuStack_500;
    uStack_438 = 0;
    lStack_440 = 0;
    plStack_428 = (long *)0x0;
    uStack_430 = 0;
    plStack_420 = (long *)0x0;
    lStack_590 = 0;
    lStack_588 = 0;
    uStack_580 = 0;
    uStack_594 = 0;
    puVar5 = &uStack_418;
    puStack_4c8 = puVar2;
    pppuStack_4c0 = &ppuStack_578;
    puStack_450 = puVar3;
    FUN_108c7f678(puVar5,&ppuStack_488,&lStack_590,&uStack_594);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_590 != 0) {
      lStack_588 = lStack_590;
      __ZdlPv();
    }
    plVar1 = plStack_420;
    ppuStack_488 = &PTR_SUB_1108629c8;
    plStack_420 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_428;
    plStack_428 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_440 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_498;
    ppuStack_500 = &PTR_SUB_1108629c8;
    plStack_498 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4a0;
    plStack_4a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4b8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_510;
    ppuStack_578 = &PTR_SUB_1108629c8;
    plStack_510 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_518;
    plStack_518 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_530 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_408);
    _objc_release(uStack_410);
    _objc_release(pppuVar8);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108bf2e5c; end: 108bf30d7;  */

void FUN_108bf2e5c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1e4;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1b0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined1 uStack_151;
  undefined **ppuStack_150;
  undefined4 uStack_148;
  undefined2 uStack_138;
  byte bStack_136;
  byte bStack_135;
  undefined1 *puStack_118;
  undefined ***pppuStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 uStack_d9;
  undefined **ppuStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_c0;
  byte bStack_be;
  byte bStack_bd;
  undefined1 *puStack_a0;
  undefined ***pppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_68,param_1);
  }
  puVar2 = &uStack_d9;
  FUN_108c2e464();
  puVar3 = &uStack_151;
  func_0x000107c2a7fc();
  uStack_1c0 = 0xf;
  uStack_1b0 = 0x100;
  uStack_198 = 0;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  lStack_180 = 0;
  plStack_168 = (long *)0x0;
  uStack_170 = 0;
  plStack_160 = (long *)0x0;
  bStack_136 = puVar3[0x1a];
  bStack_135 = puVar3[0x1b];
  uStack_148 = 10;
  uStack_138 = 0x100;
  ppuStack_150 = &PTR_SUB_1108629c8;
  uStack_100 = 0;
  lStack_108 = 0;
  plStack_f0 = (long *)0x0;
  uStack_f8 = 0;
  plStack_e8 = (long *)0x0;
  bStack_be = puVar2[0x1a] | bStack_136;
  bStack_bd = puVar2[0x1b] & bStack_135;
  uStack_d0 = 4;
  uStack_c0 = 0x100;
  ppuStack_d8 = &PTR_SUB_1108629c8;
  pppuStack_98 = &ppuStack_150;
  uStack_88 = 0;
  lStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  plStack_70 = (long *)0x0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1e4 = 0;
  puVar4 = &uStack_68;
  puStack_118 = puVar3;
  pppuStack_110 = &ppuStack_1c8;
  puStack_a0 = puVar2;
  FUN_108c7f678(puVar4,&ppuStack_d8,&lStack_1e0,&uStack_1e4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  ppuStack_d8 = &PTR_SUB_1108629c8;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_90 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_e8;
  ppuStack_150 = &PTR_SUB_1108629c8;
  plStack_e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_108 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_160;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  plStack_160 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_180 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bf30d8; end: 108bf33fb;  */

void FUN_108bf30d8(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_26c;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined4 uStack_248;
  undefined4 uStack_238;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined1 uStack_1d9;
  undefined **ppuStack_1d8;
  undefined4 uStack_1d0;
  undefined2 uStack_1c0;
  byte bStack_1be;
  byte bStack_1bd;
  undefined1 *puStack_1a0;
  undefined ***pppuStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined1 uStack_148;
  byte bStack_147;
  byte bStack_146;
  byte bStack_145;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_d8;
  byte bStack_d6;
  byte bStack_d5;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_80,param_1);
  }
  puVar5 = &uStack_161;
  FUN_108c2d860();
  puVar6 = &uStack_162;
  FUN_108c2e798();
  bVar2 = puVar5[0x1b];
  bVar3 = puVar6[0x1b];
  bStack_147 = (puVar5[0x19] | puVar6[0x19]) & 1;
  bVar1 = (puVar5[0x1a] | puVar6[0x1a]) & 1;
  uStack_158 = 4;
  uStack_148 = 0;
  ppuStack_160 = &PTR_SUB_1108629c8;
  plStack_f8 = (long *)0x0;
  plStack_100 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_118 = 0;
  puVar7 = &uStack_1d9;
  bStack_146 = bVar1;
  bStack_145 = bVar2 & bVar3;
  puStack_128 = puVar5;
  puStack_120 = puVar6;
  func_0x000107c2a7fc();
  uStack_248 = 0xf;
  uStack_238 = 0x100;
  uStack_220 = 0;
  ppuStack_250 = &PTR_SUB_1108629c8;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_200 = 0;
  lStack_208 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1f8 = 0;
  plStack_1e8 = (long *)0x0;
  bStack_1be = puVar7[0x1a];
  bStack_1bd = puVar7[0x1b];
  uStack_1d0 = 10;
  uStack_1c0 = 0x100;
  ppuStack_1d8 = &PTR_SUB_1108629c8;
  plStack_170 = (long *)0x0;
  uStack_188 = 0;
  lStack_190 = 0;
  plStack_178 = (long *)0x0;
  uStack_180 = 0;
  bStack_d6 = bStack_1be | bVar1;
  bStack_d5 = bStack_1bd & bVar2 & bVar3;
  uStack_e8 = 4;
  uStack_d8 = 0x100;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  pppuStack_b0 = &ppuStack_1d8;
  uStack_a0 = 0;
  lStack_a8 = 0;
  plStack_90 = (long *)0x0;
  uStack_98 = 0;
  plStack_88 = (long *)0x0;
  lStack_268 = 0;
  lStack_260 = 0;
  uStack_258 = 0;
  uStack_26c = 0;
  puVar8 = &uStack_80;
  puStack_1a0 = puVar7;
  pppuStack_198 = &ppuStack_250;
  pppuStack_b8 = &ppuStack_160;
  FUN_108c7f678(puVar8,&ppuStack_f0,&lStack_268,&uStack_26c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_268 != 0) {
    lStack_260 = lStack_268;
    __ZdlPv();
  }
  plVar4 = plStack_88;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  plStack_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_a8 != 0) {
    __ZdlPv();
  }
  plVar4 = plStack_170;
  ppuStack_1d8 = &PTR_SUB_1108629c8;
  plStack_170 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_178;
  plStack_178 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_190 != 0) {
    __ZdlPv();
  }
  plVar4 = plStack_1e8;
  ppuStack_250 = &PTR_SUB_1108629c8;
  plStack_1e8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_1f0;
  plStack_1f0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_208 != 0) {
    __ZdlPv();
  }
  plVar4 = plStack_f8;
  ppuStack_160 = &PTR_SUB_1108629c8;
  plStack_f8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_118 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108bf33fc; end: 108bf3763;  */

void FUN_108bf33fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_2dc;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2a8;
  undefined1 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 uStack_249;
  undefined **ppuStack_248;
  undefined4 uStack_240;
  undefined2 uStack_230;
  byte bStack_22e;
  byte bStack_22d;
  undefined1 *puStack_210;
  undefined ***pppuStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined **ppuStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1c0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined1 uStack_161;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined2 uStack_148;
  byte bStack_146;
  byte bStack_145;
  undefined1 *puStack_128;
  undefined ***pppuStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_d8;
  byte bStack_d6;
  byte bStack_d5;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_80,param_1);
  }
  puVar2 = &uStack_161;
  func_0x000100c52148();
  uStack_1d0 = 0xf;
  uStack_1c0 = 0x100;
  uStack_1a8 = 1;
  ppuStack_1d8 = &PTR_SUB_1108629c8;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  plStack_178 = (long *)0x0;
  uStack_180 = 0;
  plStack_170 = (long *)0x0;
  bStack_146 = puVar2[0x1a];
  bStack_145 = puVar2[0x1b];
  uStack_158 = 10;
  uStack_148 = 0x100;
  ppuStack_160 = &PTR_SUB_1108629c8;
  plStack_f8 = (long *)0x0;
  uStack_110 = 0;
  lStack_118 = 0;
  plStack_100 = (long *)0x0;
  uStack_108 = 0;
  puVar3 = &uStack_249;
  puStack_128 = puVar2;
  pppuStack_120 = &ppuStack_1d8;
  func_0x000107c2a7fc();
  uStack_2b8 = 0xf;
  uStack_2a8 = 0x100;
  uStack_290 = 0;
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  lStack_278 = 0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  bStack_22e = puVar3[0x1a];
  bStack_22d = puVar3[0x1b];
  uStack_240 = 10;
  uStack_230 = 0x100;
  ppuStack_248 = &PTR_SUB_1108629c8;
  plStack_1e0 = (long *)0x0;
  uStack_1f8 = 0;
  lStack_200 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_1f0 = 0;
  bStack_d6 = bStack_146 | bStack_22e;
  bStack_d5 = bStack_145 & bStack_22d;
  uStack_e8 = 4;
  uStack_d8 = 0x100;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  pppuStack_b8 = &ppuStack_160;
  pppuStack_b0 = &ppuStack_248;
  uStack_a0 = 0;
  lStack_a8 = 0;
  plStack_90 = (long *)0x0;
  uStack_98 = 0;
  plStack_88 = (long *)0x0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2dc = 0;
  puVar4 = &uStack_80;
  puStack_210 = puVar3;
  pppuStack_208 = &ppuStack_2c0;
  FUN_108c7f678(puVar4,&ppuStack_f0,&lStack_2d8,&uStack_2dc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1e0;
  ppuStack_248 = &PTR_SUB_1108629c8;
  plStack_1e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1e8;
  plStack_1e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_200 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_258;
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  plStack_258 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_278 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_f8;
  ppuStack_160 = &PTR_SUB_1108629c8;
  plStack_f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_118 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_170;
  ppuStack_1d8 = &PTR_SUB_1108629c8;
  plStack_170 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_178;
  plStack_178 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_190 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bf3764; end: 108bf39df;  */

void FUN_108bf3764(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1e4;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1b0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined1 uStack_151;
  undefined **ppuStack_150;
  undefined4 uStack_148;
  undefined2 uStack_138;
  byte bStack_136;
  byte bStack_135;
  undefined1 *puStack_118;
  undefined ***pppuStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 uStack_d9;
  undefined **ppuStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_c0;
  byte bStack_be;
  byte bStack_bd;
  undefined1 *puStack_a0;
  undefined ***pppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_68,param_1);
  }
  puVar2 = &uStack_d9;
  FUN_108c2d860();
  puVar3 = &uStack_151;
  func_0x000107c2a7fc();
  uStack_1c0 = 0xf;
  uStack_1b0 = 0x100;
  uStack_198 = 0;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  lStack_180 = 0;
  plStack_168 = (long *)0x0;
  uStack_170 = 0;
  plStack_160 = (long *)0x0;
  bStack_136 = puVar3[0x1a];
  bStack_135 = puVar3[0x1b];
  uStack_148 = 10;
  uStack_138 = 0x100;
  ppuStack_150 = &PTR_SUB_1108629c8;
  uStack_100 = 0;
  lStack_108 = 0;
  plStack_f0 = (long *)0x0;
  uStack_f8 = 0;
  plStack_e8 = (long *)0x0;
  bStack_be = puVar2[0x1a] | bStack_136;
  bStack_bd = puVar2[0x1b] & bStack_135;
  uStack_d0 = 4;
  uStack_c0 = 0x100;
  ppuStack_d8 = &PTR_SUB_1108629c8;
  pppuStack_98 = &ppuStack_150;
  uStack_88 = 0;
  lStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  plStack_70 = (long *)0x0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1e4 = 0;
  puVar4 = &uStack_68;
  puStack_118 = puVar3;
  pppuStack_110 = &ppuStack_1c8;
  puStack_a0 = puVar2;
  FUN_108c7f678(puVar4,&ppuStack_d8,&lStack_1e0,&uStack_1e4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  ppuStack_d8 = &PTR_SUB_1108629c8;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_90 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_e8;
  ppuStack_150 = &PTR_SUB_1108629c8;
  plStack_e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_108 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_160;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  plStack_160 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_180 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bf39e0; end: 108bf3b7f;  */

void FUN_108bf39e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [31];
  undefined1 uStack_c9;
  undefined **appuStack_c8 [9];
  undefined1 auStack_80 [24];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_58,param_1);
  }
  puVar2 = &uStack_c9;
  func_0x000107c2a7f8(puVar2);
  FUN_108bf2478(auStack_e8,param_3);
  func_0x000107c281a0(appuStack_c8,0xc,puVar2,auStack_e8);
  puStack_100 = (undefined1 *)0x0;
  puStack_f8 = (undefined1 *)0x0;
  uStack_f0 = 0;
  uStack_104 = 0;
  puVar3 = &uStack_58;
  FUN_108c7f678(puVar3,appuStack_c8,&puStack_100,&uStack_104);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_100 != (undefined1 *)0x0) {
    puStack_f8 = puStack_100;
    __ZdlPv();
  }
  plVar1 = plStack_60;
  appuStack_c8[0] = &PTR_SUB_110862700;
  plStack_60 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_68;
  plStack_68 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_100 = auStack_80;
  func_0x000107c27dd4(&puStack_100);
  puStack_100 = auStack_e8;
  func_0x000107c27dd4(&puStack_100);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108bf3b80; end: 108bf3d7f;  */

void FUN_108bf3b80(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_16c;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined4 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 uStack_d9;
  undefined **ppuStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined1 *puStack_a0;
  undefined ***pppuStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126db000);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_68,param_1);
  }
  puVar2 = &uStack_d9;
  FUN_108c39ba8();
  uStack_148 = 0xf;
  uStack_138 = 0x100;
  ppuStack_150 = &PTR_DAT_110ab79c0;
  uStack_110 = 0;
  uStack_118 = 0;
  lStack_100 = 0;
  lStack_108 = 0;
  plStack_f0 = (long *)0x0;
  uStack_f8 = 0;
  plStack_e8 = (long *)0x0;
  uStack_be = *(undefined2 *)(puVar2 + 0x1a);
  uStack_d0 = 10;
  uStack_c0 = 0x100;
  ppuStack_d8 = &PTR_FUN_110ab7960;
  lStack_88 = 0;
  lStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  plStack_70 = (long *)0x0;
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_16c = 0;
  puVar3 = &uStack_68;
  uStack_120 = param_3;
  puStack_a0 = puVar2;
  pppuStack_98 = &ppuStack_150;
  FUN_108c7f678(puVar3,&ppuStack_d8,&lStack_168,&uStack_16c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  ppuStack_d8 = &PTR_FUN_110ab7960;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  plVar1 = plStack_e8;
  ppuStack_150 = &PTR_DAT_110ab79c0;
  plStack_e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108bf3d80; end: 108bf3e5f;  */

undefined8 * FUN_108bf3d80(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab7960;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108bf3e60; end: 108bf405f;  */

void FUN_108bf3e60(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_16c;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined4 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 uStack_d9;
  undefined **ppuStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined1 *puStack_a0;
  undefined ***pppuStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126db158);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_68,param_1);
  }
  puVar2 = &uStack_d9;
  FUN_108c390a8();
  uStack_148 = 0xf;
  uStack_138 = 0x100;
  ppuStack_150 = &PTR_DAT_110ab79c0;
  uStack_110 = 0;
  uStack_118 = 0;
  lStack_100 = 0;
  lStack_108 = 0;
  plStack_f0 = (long *)0x0;
  uStack_f8 = 0;
  plStack_e8 = (long *)0x0;
  uStack_be = *(undefined2 *)(puVar2 + 0x1a);
  uStack_d0 = 10;
  uStack_c0 = 0x100;
  ppuStack_d8 = &PTR_FUN_110ab7960;
  lStack_88 = 0;
  lStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  plStack_70 = (long *)0x0;
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_16c = 0;
  puVar3 = &uStack_68;
  uStack_120 = param_3;
  puStack_a0 = puVar2;
  pppuStack_98 = &ppuStack_150;
  FUN_108c7f678(puVar3,&ppuStack_d8,&lStack_168,&uStack_16c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  ppuStack_d8 = &PTR_FUN_110ab7960;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  plVar1 = plStack_e8;
  ppuStack_150 = &PTR_DAT_110ab79c0;
  plStack_e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_f0;
  plStack_f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108bf4060; end: 108bf40cf;  */

void FUN_108bf4060(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110ab79c0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108bf40d0; end: 108bf478b;  */

void FUN_108bf40d0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108bf4730;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108bf4750;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108bf4750;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108bf46c4:
                    /* WARNING: Could not recover jumptable at 0x000108bf46e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108bf46c4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108bf4750;
    }
    goto code_r0x000108bf4744;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108bf4744;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108bf4750;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108bf4750;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108bf4760;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108bf4730:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108bf4744:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108bf4750:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108bf4760:
  return;
}



/* Entry: 108bf478c; end: 108bf4813;  */

void FUN_108bf478c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108bf4800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108bf4814; end: 108bf4947;  */

void FUN_108bf4814(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108bf493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108bf4948; end: 108bf49f7;  */

ulong FUN_108bf4948(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108bf49f8; end: 108bf4a33;  */

undefined8 FUN_108bf49f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_108bf4a34(uVar1,param_1);
  return uVar1;
}



/* Entry: 108bf4a34; end: 108bf4bdf;  */

void FUN_108bf4a34(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000108bf4c74(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000108bf4be0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_108bf4b20:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_108bf4d74(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_108bf4b20;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110ab79c0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 108bf4be0; end: 108bf4d73;  */

undefined8 * FUN_108bf4be0(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110ab79c0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108bf4d74; end: 108bf4e0b;  */

undefined8 * FUN_108bf4d74(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110ab79c0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_108bf4e0c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108bf4e0c; end: 108bf4e83;  */

void FUN_108bf4e0c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_108bf4e84(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 108bf4e84; end: 108bf4ebf;  */

void FUN_108bf4e84(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1 + 2;
    FUN_108bf4ed4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_108bf4ec0();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab7960;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108bf4ec0; end: 108bf4ed3;  */

void FUN_108bf4ec0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab7960;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108bf4ed4; end: 108bf4f77;  */

void FUN_108bf4ed4(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab7960;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108bf4f78; end: 108bf5633;  */

void FUN_108bf4f78(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108bf55d8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108bf55f8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108bf55f8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108bf556c:
                    /* WARNING: Could not recover jumptable at 0x000108bf5590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108bf556c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108bf55f8;
    }
    goto code_r0x000108bf55ec;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108bf55ec;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108bf55f8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108bf55f8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108bf5608;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108bf55d8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108bf55ec:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108bf55f8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108bf5608:
  return;
}



/* Entry: 108bf5634; end: 108bf56bb;  */

void FUN_108bf5634(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108bf56a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108bf56bc; end: 108bf57ef;  */

void FUN_108bf56bc(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108bf57e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108bf57f0; end: 108bf5a0b;  */

uint FUN_108bf57f0(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  uint uVar10;
  long *plVar11;
  byte bStack_4d;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar10 = *(uint *)(param_1 + 8);
  if ((int)uVar10 < 0xe) {
    if (uVar10 - 1 < 2) {
      *param_4 = 0;
      bStack_4d = 0;
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_4d);
      uVar10 = (uint)(uVar10 != 1 ^ bStack_4d);
      goto LAB_108bf59e4;
    }
    if (uVar10 - 0xc < 2) {
      plVar11 = *(long **)(param_1 + 0x38);
      _objc_retain(param_3);
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,param_4);
      piVar2 = *(int **)(param_1 + 0x48);
      piVar3 = *(int **)(param_1 + 0x50);
      iVar5 = (int)plVar11;
      if (uVar10 == 0xc) {
        if (piVar2 == piVar3) {
          uVar10 = 0;
        }
        else {
          do {
            piVar9 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar10 = (uint)(iVar5 == iVar4);
            piVar2 = piVar9;
          } while (iVar5 != iVar4 && piVar9 != piVar3);
        }
      }
      else if (piVar2 == piVar3) {
        uVar10 = 1;
      }
      else {
        do {
          piVar9 = piVar2 + 1;
          iVar4 = *piVar2;
          uVar10 = (uint)(iVar5 != iVar4);
          piVar2 = piVar9;
        } while (iVar5 != iVar4 && piVar9 != piVar3);
      }
      _objc_release(param_3);
      goto LAB_108bf59e4;
    }
  }
  else {
    if (uVar10 - 0xf < 2) {
      *param_4 = 0;
      uVar10 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_108bf59e4;
    }
    if (uVar10 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar6 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar6,param_4);
      uVar10 = (uint)lVar6;
      goto LAB_108bf59e4;
    }
  }
  if ((uVar10 & 0xfffffffe) == 10) {
    plVar11 = *(long **)(param_1 + 0x38);
    plVar8 = *(long **)(param_1 + 0x40);
    plVar7 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&bStack_41);
    uStack_48 = SUB84(plVar7,0);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_3,&bStack_42);
    uStack_4c = SUB84(plVar8,0);
    *param_4 = (bStack_41 | bStack_42) & 1;
    FUN_108bf5a48(plVar11,&uStack_48,&uStack_4c,uVar10,0);
    uVar10 = (uint)plVar11;
  }
  else {
    uVar10 = 0;
  }
LAB_108bf59e4:
  _objc_release(param_3);
  return uVar10 & 1;
}



/* Entry: 108bf5a0c; end: 108bf5a47;  */

undefined8 FUN_108bf5a0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_108bf5afc(uVar1,param_1);
  return uVar1;
}



/* Entry: 108bf5a48; end: 108bf5afb;  */

bool FUN_108bf5a48(undefined8 param_1,uint *param_2,uint *param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_4 < 9) {
    if (param_4 == 6) {
      return *param_2 < *param_3;
    }
    if (param_4 == 7) {
      return *param_2 <= *param_3;
    }
    if (param_4 == 8) {
      return *param_3 < *param_2;
    }
  }
  else {
    if (param_4 == 9) {
      return *param_3 <= *param_2;
    }
    if (param_4 == 10) {
      bVar1 = *param_2 == *param_3;
    }
    else if (param_4 == 0xb) {
      return *param_2 != *param_3;
    }
  }
  return bVar1;
}



/* Entry: 108bf5afc; end: 108bf5ca7;  */

void FUN_108bf5afc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000108bf5d3c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000108bf5ca8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_108bf5be8:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_108bf5e3c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_108bf5be8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_FUN_110ab7960;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 108bf5ca8; end: 108bf5e3b;  */

undefined8 * FUN_108bf5ca8(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110ab7960;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108bf5e3c; end: 108bf5ed3;  */

undefined8 * FUN_108bf5e3c(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110ab7960;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_108bf4e0c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108bf5ed4; end: 108bf5f87;  */

undefined4 FUN_108bf5ed4(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108bf5f88; end: 108bf605f;  */

void FUN_108bf5f88(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d1590);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x000107c310d0(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bf6060; end: 108bf60e7;  */

void FUN_108bf6060(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_108c329ac(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bf60e8; end: 108bf6113; +[SCGrapheneSnapchattersMetric remoteFetcherMismatch] */

void FUN_108bf60e8(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6114; end: 108bf613f; +[SCGrapheneSnapchattersMetric remoteFetcherNetworkFailed] */

void FUN_108bf6114(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6140; end: 108bf616b; +[SCGrapheneSnapchattersMetric remoteFetcherFetched] */

void FUN_108bf6140(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf616c; end: 108bf6197; +[SCGrapheneSnapchattersMetric remoteFetcherCacheLoaded] */

void FUN_108bf616c(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6198; end: 108bf61c3; +[SCGrapheneSnapchattersMetric remoteFetcherUnexpectedIds] */

void FUN_108bf6198(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf61c4; end: 108bf61ef; +[SCGrapheneSnapchattersMetric remoteFetcherCacheHitCount] */

void FUN_108bf61c4(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf61f0; end: 108bf621b; +[SCGrapheneSnapchattersMetric remoteFetcherTotalCount] */

void FUN_108bf61f0(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf621c; end: 108bf6247; +[SCGrapheneSnapchattersMetric remoteFetcherCacheMiss] */

void FUN_108bf621c(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6248; end: 108bf6273; +[SCGrapheneSnapchattersMetric remoteFetcherRemovedCache] */

void FUN_108bf6248(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6274; end: 108bf629f; +[SCGrapheneSnapchattersMetric suggestionSyncCount] */

void FUN_108bf6274(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf62a0; end: 108bf62cb; +[SCGrapheneSnapchattersMetric suggestionSyncLatency] */

void FUN_108bf62a0(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf62cc; end: 108bf62f7; +[SCGrapheneSnapchattersMetric suggestionSyncGapPeriod] */

void FUN_108bf62cc(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf62f8; end: 108bf6323; +[SCGrapheneSnapchattersMetric unviewedIncomingFriends] */

void FUN_108bf62f8(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6324; end: 108bf634f; +[SCGrapheneSnapchattersMetric unviewedIncomingBadge] */

void FUN_108bf6324(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6350; end: 108bf637b; +[SCGrapheneSnapchattersMetric streakErrors] */

void FUN_108bf6350(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf637c; end: 108bf63a7; +[SCGrapheneSnapchattersMetric suggestionFetchLatency] */

void FUN_108bf637c(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf63a8; end: 108bf63d3; +[SCGrapheneSnapchattersMetric nonFriendSearchLatency] */

void FUN_108bf63a8(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf63d4; end: 108bf63ff; +[SCGrapheneSnapchattersMetric retrieveTokenResult] */

void FUN_108bf63d4(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6400; end: 108bf642b; +[SCGrapheneSnapchattersMetric nullSuggestionBackend] */

void FUN_108bf6400(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf642c; end: 108bf6457; +[SCGrapheneSnapchattersMetric contactsFetchLatency] */

void FUN_108bf642c(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6458; end: 108bf6483; +[SCGrapheneSnapchattersMetric regContactsNetworkLatency] */

void FUN_108bf6458(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6484; end: 108bf64af; +[SCGrapheneSnapchattersMetric regContactsResponseLatency] */

void FUN_108bf6484(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf64b0; end: 108bf64db; +[SCGrapheneSnapchattersMetric regContactsOverallLatency] */

void FUN_108bf64b0(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf64dc; end: 108bf6507; +[SCGrapheneSnapchattersMetric outgoingFetchBeforeSynced] */

void FUN_108bf64dc(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6508; end: 108bf6533; +[SCGrapheneSnapchattersMetric contactsFetchNoPermission] */

void FUN_108bf6508(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6534; end: 108bf655f; +[SCGrapheneSnapchattersMetric findFriendEmptyResponse] */

void FUN_108bf6534(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6560; end: 108bf658b; +[SCGrapheneSnapchattersMetric findFriendNoSuggestion] */

void FUN_108bf6560(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf658c; end: 108bf65b7; +[SCGrapheneSnapchattersMetric findFriendNoContacts] */

void FUN_108bf658c(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf65b8; end: 108bf65e3; +[SCGrapheneSnapchattersMetric findFriendError] */

void FUN_108bf65b8(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf65e4; end: 108bf660f; +[SCGrapheneSnapchattersMetric findFriendReg] */

void FUN_108bf65e4(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6610; end: 108bf663b; +[SCGrapheneSnapchattersMetric contactBookSize] */

void FUN_108bf6610(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf663c; end: 108bf6667; +[SCGrapheneSnapchattersMetric contactsUploaded] */

void FUN_108bf663c(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6668; end: 108bf6693; +[SCGrapheneSnapchattersMetric contactsReceived] */

void FUN_108bf6668(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6694; end: 108bf66bf; +[SCGrapheneSnapchattersMetric addFriend] */

void FUN_108bf6694(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf66c0; end: 108bf66eb; +[SCGrapheneSnapchattersMetric addedMeReceived] */

void FUN_108bf66c0(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf66ec; end: 108bf6717; +[SCGrapheneSnapchattersMetric staleSyncDropped] */

void FUN_108bf66ec(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6718; end: 108bf6743; +[SCGrapheneSnapchattersMetric userScoresMigration] */

void FUN_108bf6718(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6744; end: 108bf676f; +[SCGrapheneSnapchattersMetric snapchatterNullError] */

void FUN_108bf6744(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6770; end: 108bf679b; +[SCGrapheneSnapchattersMetric snapchatterByUsername] */

void FUN_108bf6770(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf679c; end: 108bf67c7; +[SCGrapheneSnapchattersMetric atlasFriendDelete] */

void FUN_108bf679c(void)

{
  _objc_alloc(PTR_PTR_1126db0d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf67c8; end: 108bf6867; -[SCGrapheneSnapchattersMetric description] */

void FUN_108bf67c8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eeceb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110eeceb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fdd38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108bf6868; end: 108bf6893; +[SCGrapheneReliablePinningMetric pinnedCount] */

void FUN_108bf6868(void)

{
  _objc_alloc(PTR_PTR_1126db0e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf6894; end: 108bf68bf; +[SCGrapheneReliablePinningMetric hitCount] */

void FUN_108bf6894(void)

{
  _objc_alloc(PTR_PTR_1126db0e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf68c0; end: 108bf68eb; +[SCGrapheneReliablePinningMetric missCount] */

void FUN_108bf68c0(void)

{
  _objc_alloc(PTR_PTR_1126db0e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bf68ec; end: 108bf6917; +[SCGrapheneReliablePinningMetric pinned] */

void FUN_108bf68ec(void)

{
  _objc_alloc(PTR_PTR_1126db0e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


