/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108949220; end: 10894924b;  */

void FUN_108949220(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1089492e8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10894924c; end: 10894929f; -[ADLRemoteVideoRenderer .cxx_destruct] */

void FUN_10894924c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9c298;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_1089493c4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1089492a0; end: 1089492e7; -[ADLRemoteVideoRenderer .cxx_construct] */

undefined8 * FUN_1089492a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_1089493f0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1089492e8; end: 108949353;  */

void FUN_1089492e8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a9c298;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1089493f0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108949354);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108949420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108949354; end: 1089493c3;  */

void FUN_108949354(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dae08;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1089493f0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1089493c4(&uStack_30);
  return;
}



/* Entry: 1089493c4; end: 1089493ef;  */

long FUN_1089493c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1089493f0; end: 108949437;  */

void FUN_1089493f0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108949438; end: 1089494af; -[ADLRemoteVideoRendererFactory initWithCpp:] */

undefined1 * FUN_108949438(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd488;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1089495fc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000104c052b8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1089494b0; end: 108949507; -[ADLRemoteVideoRendererFactory createRemoteVideoRenderer] */

void FUN_1089494b0(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_30);
  FUN_108949220(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010894960c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108949508; end: 108949557;  */

void FUN_108949508(undefined8 *param_1,long param_2)

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
        FUN_1089495fc();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108949558; end: 1089495b3; -[ADLRemoteVideoRendererFactory .cxx_destruct] */

void FUN_108949558(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9c2a8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000104c052b8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1089495b4; end: 1089495fb; -[ADLRemoteVideoRendererFactory .cxx_construct] */

undefined8 * FUN_1089495b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_1089495fc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1089495fc; end: 108949617;  */

void FUN_1089495fc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108949618; end: 10894979f;  */

void FUN_108949618(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

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
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfb5800();
  uVar2 = param_2;
  func_0x00010c2a5040();
  uVar3 = param_2;
  func_0x00010bfe0640();
  uVar4 = param_2;
  func_0x00010c25cc00();
  uVar5 = param_2;
  func_0x00010c25cc20();
  uVar6 = param_2;
  func_0x00010c25cc40();
  uVar7 = param_2;
  func_0x00010c0fdfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28244();
  uVar8 = param_2;
  uVar14 = param_3;
  func_0x00010c0fdfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000107c28244();
  uVar10 = param_2;
  uVar15 = uVar14;
  func_0x00010c0fe000();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x000107c28244();
  uVar12 = param_2;
  func_0x00010c11a240();
  uVar13 = param_2;
  func_0x00010c0d5780();
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar2;
  param_1[2] = (int)uVar3;
  param_1[3] = (int)uVar4;
  param_1[4] = (int)uVar5;
  param_1[5] = (int)uVar6;
  *(undefined8 *)(param_1 + 6) = uVar7;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 10) = uVar9;
  *(undefined8 *)(param_1 + 0xc) = uVar14;
  *(undefined8 *)(param_1 + 0xe) = uVar11;
  *(undefined8 *)(param_1 + 0x10) = uVar15;
  *(undefined8 *)(param_1 + 0x12) = uVar12;
  *(undefined8 *)(param_1 + 0x14) = uVar13;
  _objc_release(uVar10);
  _objc_release(uVar8);
  func_0x0001089498c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1089497a0; end: 1089498b3;  */

void FUN_1089497a0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  puVar7 = PTR_PTR_1126dae10;
  _objc_alloc(PTR_PTR_1126dae10);
  iVar1 = *param_1;
  iVar4 = param_1[1];
  iVar2 = param_1[2];
  iVar5 = param_1[3];
  iVar3 = param_1[4];
  iVar6 = param_1[5];
  piVar8 = param_1 + 6;
  func_0x000106af6544();
  _objc_retainAutoreleasedReturnValue();
  piVar9 = param_1 + 10;
  func_0x000106af6544();
  _objc_retainAutoreleasedReturnValue();
  piVar10 = param_1 + 0xe;
  func_0x000106af6544();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013d20(puVar7,param_2,(long)iVar1,iVar4,iVar2,iVar5,iVar3,iVar6,piVar8,piVar9,piVar10
                      ,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x14));
  FUN_1089498b4();
  _objc_release(piVar9);
  _objc_release(piVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1089498b4; end: 1089498c7;  */

void FUN_1089498b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1089498c8; end: 1089499d7; -[ADLVideoFrame initWithFormat:width:height:stride0:stride1:stride2:plane0:plane1:plane2:pts:nativeBuffer:] */

undefined8 *
FUN_1089498c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000108949b30();
  func_0x000108949b58();
  func_0x000108949b50();
  puStack_68 = PTR_PTR_1126fd490;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_3;
    *(undefined4 *)(puVar1 + 1) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)(puVar1 + 2) = param_6;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    *(undefined4 *)(puVar1 + 3) = param_8;
    _objc_retain();
    uVar2 = puVar1[5];
    puVar1[5] = unaff_x19;
    _objc_release(uVar2);
    func_0x000108949b58();
    uVar2 = puVar1[6];
    puVar1[6] = unaff_x20;
    _objc_release(uVar2);
    func_0x000108949b50();
    uVar2 = puVar1[7];
    puVar1[7] = unaff_x21;
    _objc_release(uVar2);
    puVar1[8] = in_stack_00000018;
    puVar1[9] = in_stack_00000020;
  }
  _objc_release();
  func_0x000108949b40();
  func_0x000108949b48();
  return puVar1;
}



/* Entry: 1089499d8; end: 108949a8f; +[ADLVideoFrame VideoFrameWithFormat:width:height:stride0:stride1:stride2:plane0:plane1:plane2:pts:nativeBuffer:] */

void FUN_1089499d8(undefined8 param_1)

{
  undefined8 in_stack_00000020;
  
  func_0x000108949b30();
  func_0x000108949b58();
  func_0x000108949b50();
  _objc_alloc(param_1);
  func_0x00010c013d20();
  func_0x000108949b24();
  func_0x000108949b40();
  func_0x000108949b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_stack_00000020);
  return;
}



/* Entry: 108949a90; end: 108949a97; -[ADLVideoFrame format] */

undefined8 FUN_108949a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108949a98; end: 108949a9f; -[ADLVideoFrame width] */

undefined4 FUN_108949a98(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108949aa0; end: 108949aa7; -[ADLVideoFrame height] */

undefined4 FUN_108949aa0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108949aa8; end: 108949aaf; -[ADLVideoFrame stride0] */

undefined4 FUN_108949aa8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108949ab0; end: 108949ab7; -[ADLVideoFrame stride1] */

undefined4 FUN_108949ab0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108949ab8; end: 108949abf; -[ADLVideoFrame stride2] */

undefined4 FUN_108949ab8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108949ac0; end: 108949ac7; -[ADLVideoFrame plane0] */

undefined8 FUN_108949ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108949ac8; end: 108949acf; -[ADLVideoFrame plane1] */

undefined8 FUN_108949ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108949ad0; end: 108949ad7; -[ADLVideoFrame plane2] */

undefined8 FUN_108949ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108949ad8; end: 108949adf; -[ADLVideoFrame pts] */

undefined8 FUN_108949ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108949ae0; end: 108949ae7; -[ADLVideoFrame nativeBuffer] */

undefined8 FUN_108949ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108949ae8; end: 108949b23; -[ADLVideoFrame .cxx_destruct] */

void FUN_108949ae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 108949b24; end: 108949b5f;  */

void FUN_108949b24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108949b60; end: 108949bcb;  */

undefined8 FUN_108949b60(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return CONCAT44((int)param_4,(int)param_3);
}



/* Entry: 108949bcc; end: 108949c5b;  */

void FUN_108949bcc(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_58 = &PTR_DAT_1107eac58;
  uStack_50 = 0;
  lVar1 = param_2;
  uStack_38 = param_3;
  FUN_10894b0ac();
  pppuVar2 = &ppuStack_58;
  FUN_108949c5c(pppuVar2,lVar1);
  pppuVar3 = pppuVar2;
  FUN_10894b108();
  FUN_108949cc0(pppuVar2,pppuVar3);
  uVar4 = (ulong)*(uint *)(param_2 + 0x18);
  func_0x000108996b30(uVar4);
  FUN_108949d24(pppuVar2,uVar4);
  func_0x000108942850(param_1,pppuVar2);
  func_0x00010894a054();
  return;
}



/* Entry: 108949c5c; end: 108949cbf;  */

void FUN_108949c5c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x00010894a07c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010894a0b0();
  }
  func_0x00010894a0c0();
  if (unaff_w20 < 0x2d) {
    func_0x00010894a0a0();
  }
  func_0x00010894a064();
  func_0x00010894a030();
  return;
}



/* Entry: 108949cc0; end: 108949d23;  */

void FUN_108949cc0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x00010894a07c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010894a0b0();
  }
  func_0x00010894a0c0();
  if (unaff_w20 < 0x2d) {
    func_0x00010894a0a0();
  }
  func_0x00010894a064();
  func_0x00010894a030();
  return;
}



/* Entry: 108949d24; end: 108949d87;  */

void FUN_108949d24(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x00010894a07c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010894a0b0();
  }
  func_0x00010894a0c0();
  if (unaff_w20 < 0x2d) {
    func_0x00010894a0a0();
  }
  func_0x00010894a064();
  func_0x00010894a030();
  return;
}



/* Entry: 108949d88; end: 108949daf;  */

void FUN_108949d88(undefined8 param_1)

{
  long unaff_x19;
  
  FUN_10894a01c();
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 108949db0; end: 108949e53;  */

undefined8 FUN_108949db0(long param_1,long param_2)

{
  long *unaff_x19;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((param_2 < 1) || (FUN_10894a01c(), (param_1 - unaff_x19[4]) / 1000000 < *unaff_x19)) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)unaff_x19[1];
    func_0x00010894a0d4();
    FUN_108949bcc();
    uVar1 = 1;
    func_0x00010894a070(*(undefined8 *)(*(long *)*puVar2 + 8));
    func_0x00010894a054();
    unaff_x19[5] = param_1;
    *(undefined1 *)(unaff_x19 + 6) = 1;
    unaff_x19[4] = param_1;
  }
  return uVar1;
}



/* Entry: 108949e54; end: 108949eff;  */

void FUN_108949e54(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long unaff_x19;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [40];
  
  FUN_10894a01c();
  *(long *)(unaff_x19 + 0x20) = param_1;
  pbVar1 = (byte *)(unaff_x19 + 0x30);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x28);
    puVar6 = *(undefined8 **)(unaff_x19 + 8);
    func_0x00010894a0d4();
    FUN_108949bcc();
    func_0x00010894a070(*(undefined8 *)(*(long *)*puVar6 + 8));
    func_0x00010894a054();
    puVar6 = *(undefined8 **)(unaff_x19 + 8);
    func_0x00010894a0d4();
    FUN_108949bcc();
    (*(code *)**(undefined8 **)*puVar6)
              ((undefined8 *)*puVar6,auStack_58,((param_1 - lVar5) / 1000000) * 1000000);
    func_0x00010894a054();
  }
  return;
}



/* Entry: 108949f00; end: 108949f77;  */

void FUN_108949f00(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  pbVar1 = (byte *)(param_1 + 0x30);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    puVar5 = *(undefined8 **)(param_1 + 8);
    func_0x00010894a0d4();
    FUN_108949bcc();
    func_0x00010894a070(*(undefined8 *)(*(long *)*puVar5 + 8));
    func_0x00010894a054();
  }
  return;
}



/* Entry: 108949f78; end: 108949fdb;  */

undefined8 FUN_108949f78(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  _strlen(param_3);
  FUN_108949fdc(param_1,&uStack_40,param_3,uVar1);
  func_0x00010894a0c8();
  return param_3;
}



/* Entry: 108949fdc; end: 10894a01b;  */

long FUN_108949fdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27950(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 10894a01c; end: 10894a0df;  */

void FUN_10894a01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010894a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 10894a0e0; end: 10894a1db;  */

undefined8 * FUN_10894a0e0(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110a9c2c8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  lVar3 = param_3[1];
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
  if (lVar3 != 0) {
    do {
      func_0x00010894b048();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2;
  func_0x000107c27cf4(param_2,&UNK_10df7764e);
  if ((uVar1 & 1) == 0) {
    func_0x000107c27cf4(param_2,&UNK_10df77658);
    if ((int)param_2 == 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10894a184;
    }
    ppuVar4 = &PTR_FUN_110a9c408;
  }
  else {
    ppuVar4 = &PTR_DAT_110a9c390;
  }
  puVar2 = (undefined8 *)0x8;
  __Znwm();
  *puVar2 = ppuVar4;
LAB_10894a184:
  param_1[7] = puVar2;
  param_1[8] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  return param_1;
}



/* Entry: 10894a1dc; end: 10894a2d7;  */

undefined8 * FUN_10894a1dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  *param_1 = &PTR_FUN_110a9c2c8;
  uVar3 = param_1[0x11];
  puVar1 = param_1;
  if ((long)uVar3 < 1) {
    func_0x00010894b020();
    uStack_28 = 0x68;
  }
  else if (uVar3 < 0xb) {
    func_0x00010894b020();
    uStack_28 = 0x69;
  }
  else if (uVar3 < 0x65) {
    func_0x00010894b020();
    uStack_28 = 0x6a;
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    ppuStack_48 = &PTR_DAT_1107eac58;
    uStack_40 = 0;
    if (uVar3 < 0x3e9) {
      uStack_28 = 0x6b;
    }
    else {
      uStack_28 = 0x6c;
    }
  }
  FUN_1089a3c0c();
  (**(code **)(*(long *)*puVar1 + 8))((long *)*puVar1,&ppuStack_48,1);
  func_0x000104c03ee4(&ppuStack_48);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_108944fa8(param_1 + 5);
  FUN_10894af04(param_1 + 1);
  return param_1;
}



/* Entry: 10894a2d8; end: 10894a2db;  */

undefined8 * FUN_10894a2d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  *param_1 = &PTR_FUN_110a9c2c8;
  uVar3 = param_1[0x11];
  puVar1 = param_1;
  if ((long)uVar3 < 1) {
    func_0x00010894b020();
    uStack_28 = 0x68;
  }
  else if (uVar3 < 0xb) {
    func_0x00010894b020();
    uStack_28 = 0x69;
  }
  else if (uVar3 < 0x65) {
    func_0x00010894b020();
    uStack_28 = 0x6a;
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    ppuStack_48 = &PTR_DAT_1107eac58;
    uStack_40 = 0;
    if (uVar3 < 0x3e9) {
      uStack_28 = 0x6b;
    }
    else {
      uStack_28 = 0x6c;
    }
  }
  FUN_1089a3c0c();
  (**(code **)(*(long *)*puVar1 + 8))((long *)*puVar1,&ppuStack_48,1);
  func_0x000104c03ee4(&ppuStack_48);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_108944fa8(param_1 + 5);
  FUN_10894af04(param_1 + 1);
  return param_1;
}



/* Entry: 10894a2dc; end: 10894a2ef;  */

void FUN_10894a2dc(void)

{
  FUN_10894a1dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894a2f0; end: 10894a333;  */

void FUN_10894a2f0(void)

{
  __ZNSt3__15mutex4lockEv();
  func_0x00010894b058();
  func_0x00010894b068();
  return;
}



/* Entry: 10894a334; end: 10894a377;  */

void FUN_10894a334(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    _VTDecompressionSessionWaitForAsynchronousFrames();
    _CFRelease(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10894a378; end: 10894a3bf;  */

void FUN_10894a378(long param_1)

{
  __ZNSt3__15mutex4lockEv();
  *(undefined1 *)(param_1 + 0x80) = 1;
  func_0x00010894b058();
  func_0x00010894b068();
  return;
}



/* Entry: 10894a3c0; end: 10894a973;  */

void FUN_10894a3c0(long param_1,long *******param_2,undefined8 param_3,long *******param_4)

{
  long *****ppppplVar1;
  long *****ppppplVar2;
  long ******pppppplVar3;
  long *****ppppplVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  bool bVar8;
  undefined4 uVar9;
  long ******pppppplVar10;
  long lVar11;
  undefined8 uVar12;
  long *******ppppppplVar13;
  long *plVar14;
  long *****ppppplVar15;
  undefined8 *puVar16;
  long *****ppppplVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long ******pppppplVar20;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long ****pppplVar21;
  int iVar22;
  long *******unaff_x22;
  long *******unaff_x23;
  long *****ppppplVar23;
  long *******unaff_x24;
  code *pcVar24;
  long ****pppplStack_220;
  long ****pppplStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *****ppppplStack_200;
  undefined8 *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  long ******pppppplStack_1d0;
  long ******pppppplStack_1c8;
  long ******pppppplStack_1c0;
  long ******pppppplStack_1b8;
  long *****ppppplStack_1b0;
  long ******pppppplStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  long *****ppppplStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long ******pppppplStack_178;
  long ******pppppplStack_170;
  long ******pppppplStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long ******pppppplStack_150;
  long *****ppppplStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined *puStack_138;
  long *****ppppplStack_130;
  undefined1 uStack_128;
  long *****ppppplStack_120;
  undefined **ppuStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long ******pppppplStack_f0;
  long ******pppppplStack_e8;
  long *****ppppplStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar20 = (long ******)(param_1 + 0x40);
  uStack_140 = 1;
  ppppppplVar18 = param_2;
  ppppplStack_148 = (long *****)pppppplVar20;
  __ZNSt3__15mutex4lockEv(pppppplVar20);
  puVar7 = PTR__kCFAllocatorDefault_11034ab78;
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    in_ZR = *param_2 == param_2[1];
    if ((bool)in_ZR) {
LAB_10894a590:
      if (*(long *)(param_1 + 0x20) != 0) {
        ppppppplVar13 = (long *******)&ppppplStack_148;
        func_0x000107c2798c();
        unaff_x23 = param_2 + 3;
        in_ZR = *unaff_x23 == param_2[4];
        if (!(bool)in_ZR) {
          pppppplStack_168 = (long ******)0x0;
          unaff_x22 = *(long ********)puVar7;
          ppppppplVar18 = (long *******)((ulong)((long)param_2[4] - (long)*unaff_x23) >> 4);
          param_4 = &pppppplStack_168;
          ppppppplVar13 = unaff_x22;
          _CMBlockBufferCreateEmpty(unaff_x22,ppppppplVar18,0);
          if (((int)ppppppplVar13 == 0) && ((long *******)pppppplStack_168 != (long *******)0x0)) {
            pppppplVar10 = param_2[3];
            pppppplVar3 = param_2[4];
            unaff_x24 = *(long ********)PTR__kCFAllocatorNull_11034ab80;
            do {
              ppppppplVar18 = (long *******)pppppplStack_168;
              in_ZR = pppppplVar10 == pppppplVar3;
              if ((bool)in_ZR) {
                pppppplStack_170 = (long ******)0x0;
                ppppppplVar13 = (long *******)pppppplStack_168;
                _CMBlockBufferGetDataLength(pppppplStack_168);
                param_4 = (long *******)0x0;
                unaff_x24 = unaff_x22;
                _CMBlockBufferCreateContiguous
                          (unaff_x22,ppppppplVar18,unaff_x22,0,0,ppppppplVar13,2,&pppppplStack_170);
                ppppppplVar13 = (long *******)pppppplStack_168;
                _CFRelease();
                if (((int)unaff_x24 != 0) ||
                   (ppppppplVar18 = (long *******)pppppplStack_170,
                   (long *******)pppppplStack_170 == (long *******)0x0)) {
                  func_0x00010894b010();
                  (*extraout_x8_03)();
                  goto LAB_10894a650;
                }
                plVar14 = *(long **)(param_1 + 0x38);
                (**(code **)(*plVar14 + 0x18))(plVar14,pppppplStack_170,unaff_x23);
                ppppppplVar19 = (long *******)pppppplStack_170;
                if ((int)plVar14 == 0) goto LAB_10894a8e8;
                param_2 = (long *******)param_2[6];
                uStack_128 = 1;
                ppppplStack_130 = (long *****)pppppplVar20;
                __ZNSt3__15mutex4lockEv(pppppplVar20);
                unaff_x23 = ppppppplVar19;
                if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
                  _CMTimeMake(&ppppplStack_148,1,1000);
                  func_0x00010894b070(&puStack_80);
                  func_0x00010894b070(&uStack_98);
                  puStack_d8 = (undefined *)CONCAT71(uStack_13f,uStack_140);
                  ppppplStack_e0 = ppppplStack_148;
                  uStack_c0 = uStack_78;
                  puStack_c8 = puStack_80;
                  puStack_d0 = puStack_138;
                  uStack_b8 = uStack_70;
                  uStack_a8 = uStack_90;
                  uStack_b0 = uStack_98;
                  uStack_a0 = uStack_88;
                  pppppplStack_150 = (long ******)0x0;
                  pppppplStack_178 = (long ******)&pppppplStack_150;
                  uStack_180 = 0;
                  ppppplStack_190 = (long *****)&ppppplStack_e0;
                  uStack_188 = 0;
                  param_4 = (long *******)0x0;
                  ppppppplVar13 = unaff_x22;
                  ppppppplVar18 = ppppppplVar19;
                  _CMSampleBufferCreate
                            (unaff_x22,ppppppplVar19,1,0,0,*(undefined8 *)(param_1 + 0x18),1,1);
                  if (((int)ppppppplVar13 == 0) &&
                     ((long *******)pppppplStack_150 != (long *******)0x0)) {
                    uVar12 = *(undefined8 *)(param_1 + 8);
                    lVar11 = *(long *)(param_1 + 0x10);
                    uStack_160 = uVar12;
                    lStack_158 = lVar11;
                    if (lVar11 != 0) {
                      do {
                        func_0x00010894b048();
                      } while (extraout_w10 != 0);
                    }
                    __ZNSt3__16chrono12steady_clock3nowEv();
                    ppppplStack_120 = (long *****)PTR___NSConcreteStackBlock_11034bd00;
                    ppuStack_118 = (undefined **)0xc6000000;
                    pcStack_110 = FUN_10894a974;
                    puStack_108 = &UNK_110a9c308;
                    uStack_100 = uVar12;
                    lStack_f8 = lVar11;
                    if (lVar11 != 0) {
                      do {
                        func_0x00010894b048();
                      } while (extraout_w10_00 != 0);
                    }
                    pppppplVar20 = &ppppplStack_120;
                    pppppplStack_f0 = (long ******)param_2;
                    pppppplStack_e8 = (long ******)ppppppplVar13;
                    _objc_retainBlock();
                    unaff_x22 = (long *******)&ppppplStack_120;
                    do {
                      func_0x00010894b048();
                    } while (extraout_w10_01 != 0);
                    uVar12 = *(undefined8 *)(param_1 + 0x20);
                    param_4 = (long *******)0x0;
                    ppppppplVar18 = (long *******)pppppplStack_150;
                    _VTDecompressionSessionDecodeFrameWithOutputHandler
                              (uVar12,pppppplStack_150,0,0,pppppplVar20);
                    _CFRelease(pppppplStack_150);
                    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
                    iVar22 = (int)uVar12;
                    if ((iVar22 != 0) &&
                       (*(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1,
                       iVar22 + 0x326fU < 9 && (1 << (ulong)(iVar22 + 0x326fU & 0x1f) & 0x105U) != 0
                       )) {
                      func_0x00010894b058();
                    }
                    bVar8 = iVar22 == 0;
                    param_2 = (long *******)(ulong)bVar8;
                    in_ZR = bVar8;
                    _objc_release(pppppplVar20);
                    func_0x00010894af04(&uStack_100);
                    func_0x00010894af04(&uStack_160);
                    func_0x000107c2798c(&ppppplStack_130);
                    if (!bVar8) {
LAB_10894a8e8:
                      func_0x00010894b010();
                      (*extraout_x8_04)();
                      ppppppplVar19 = unaff_x23;
                    }
                    ppppppplVar13 = (long *******)pppppplStack_170;
                    _CFRelease();
                    unaff_x23 = ppppppplVar19;
                    goto LAB_10894a650;
                  }
                }
                func_0x000107c2798c(&ppppplStack_130);
                goto LAB_10894a8e8;
              }
              ppppppplVar18 = (long *******)*pppppplVar10;
              if ((ppppppplVar18 == (long *******)0x0) || (pppppplVar10[1] == (long *****)0x0)) {
                func_0x00010894b010();
                (*extraout_x8_02)();
                ppppppplVar13 = (long *******)pppppplStack_168;
                _CFRelease();
                goto LAB_10894a650;
              }
              ppppppplVar13 = (long *******)pppppplStack_168;
              param_4 = unaff_x24;
              _CMBlockBufferAppendMemoryBlock();
              pppppplVar10 = pppppplVar10 + 2;
            } while ((int)ppppppplVar13 == 0);
            func_0x00010894b010();
            (*extraout_x8)();
            ppppppplVar13 = (long *******)pppppplStack_168;
            _CFRelease();
          }
          else {
            func_0x00010894b010();
            (*extraout_x8_01)();
          }
        }
        goto LAB_10894a650;
      }
    }
    else {
      unaff_x23 = *(long ********)(param_1 + 0x38);
      ppppppplVar18 = param_2;
      (*(code *)(*unaff_x23)[2])();
      if (unaff_x23 != (long *******)0x0) {
        unaff_x22 = (long *******)(param_1 + 0x20);
        pppppplVar10 = *unaff_x22;
        if ((pppppplVar10 != (long ******)0x0) &&
           (ppppppplVar18 = unaff_x23, _VTDecompressionSessionCanAcceptFormatDescription(),
           (int)pppppplVar10 == 0)) {
          func_0x00010894b058();
        }
        lVar11 = *(long *)(param_1 + 0x18);
        if (lVar11 != 0) {
          _CFRelease();
        }
        iVar22 = (int)lVar11;
        *(long ********)(param_1 + 0x18) = unaff_x23;
        if (*(long *)(param_1 + 0x20) == 0) {
          FUN_108981ca0();
          in_ZR = iVar22 == 0;
          ppppplStack_120 = *(long ******)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
          pppppplVar10 = (long ******)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR____kCFBooleanTrue_11034ab68;
          puStack_d8 = PTR____kCFBooleanTrue_11034ab68;
          pcStack_110 = *(code **)PTR__kCVPixelBufferMetalCompatibilityKey_11034a398;
          ppuStack_118 = &PTR____CFConstantStringClassReference_110ee7958;
          puStack_d0 = PTR____kCFBooleanTrue_11034ab68;
          unaff_x23 = (long *******)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppppplStack_e0 = (long *****)pppppplVar10;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010894b060();
          uStack_98 = *(undefined8 *)PTR__kVTDecompressionPropertyKey_RealTime_11034b0b0;
          puStack_80 = puVar6;
          unaff_x24 = (long *******)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)puVar7;
          ppppppplVar18 = *(long ********)(param_1 + 0x18);
          param_4 = unaff_x23;
          _VTDecompressionSessionCreate(uVar12,ppppppplVar18,unaff_x24,unaff_x23,0,unaff_x22);
          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
          if (((int)uVar12 != 0) || (*unaff_x22 == (long ******)0x0)) {
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
          }
          func_0x00010894b060();
          _objc_release(unaff_x23);
        }
        goto LAB_10894a590;
      }
    }
    func_0x00010894b010();
    (*extraout_x8_00)();
  }
  ppppppplVar13 = (long *******)&ppppplStack_148;
  func_0x000107c2798c();
LAB_10894a650:
  func_0x00010894b08c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppppplVar10 = &ppppplStack_130;
  func_0x000107c2798c();
  func_0x00010894b038();
  ppppplVar17 = &pppplStack_220;
  pcStack_198 = FUN_10894a974;
  uStack_1d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_220 = (long ****)0x0;
  pppplStack_218 = (long ****)0x0;
  ppppplVar15 = pppppplVar10[5];
  ppppppplVar19 = ppppppplVar18;
  pppppplStack_1d0 = (long ******)unaff_x24;
  pppppplStack_1c8 = (long ******)unaff_x23;
  pppppplStack_1c0 = (long ******)unaff_x22;
  pppppplStack_1b8 = (long ******)param_2;
  ppppplStack_1b0 = (long *****)pppppplVar20;
  pppppplStack_1a8 = (long ******)ppppppplVar13;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if (((ppppplVar15 != (long *****)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), pppplStack_218 = (long ****)ppppplVar15,
      ppppplVar15 != (long *****)0x0)) &&
     (ppppplVar23 = pppppplVar10[4], pppplStack_220 = (long ****)ppppplVar23,
     ppppplVar23 != (long *****)0x0)) {
    ppppplVar2 = pppppplVar10[6];
    ppppplVar4 = pppppplVar10[7];
    ppppplVar1 = ppppplVar23 + 0x11;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
      if (bVar8) {
        *ppppplVar1 = (long ****)((long)*ppppplVar1 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)ppppppplVar18 == 0) {
      if (param_4 != (long *******)0x0) {
        *(int *)((long)ppppplVar23 + 0xa4) = *(int *)((long)ppppplVar23 + 0xa4) + 1;
        __ZNSt3__16chrono12steady_clock3nowEv();
        ppppplVar23[0x15] =
             (long ****)((long)ppppplVar23[0x15] + ((long)ppppplVar15 - (long)ppppplVar4) / 1000);
        pppplVar21 = ppppplVar23[5];
        uStack_1e8 = 1;
        puVar16 = (undefined8 *)0x38;
        __Znwm();
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = &PTR_FUN_110a9c458;
        puVar16[3] = &PTR_DAT_110a9c4a8;
        puVar16[4] = param_4;
        puStack_1e0 = puVar16;
        _CVPixelBufferGetWidth();
        *(int *)(puVar16 + 5) = (int)param_4;
        uVar9 = (undefined4)puVar16[4];
        _CVPixelBufferGetHeight();
        *(undefined4 *)((long)puVar16 + 0x2c) = uVar9;
        puVar16[6] = ppppplVar2;
        _CFRetain(puVar16[4]);
        puStack_1e0 = (undefined8 *)0x0;
        func_0x00010894af4c(auStack_1f0);
        uStack_210 = 0;
        uStack_208 = 0;
        ppppppplVar19 = (long *******)&ppppplStack_200;
        ppppplStack_200 = (long *****)(puVar16 + 3);
        puStack_1f8 = puVar16;
        (*(code *)(*pppplVar21)[3])(pppplVar21);
        func_0x000108944fd0(&ppppplStack_200);
        FUN_10894abcc(&uStack_210);
      }
    }
    else {
      (*(code *)(*ppppplVar23[5])[4])();
      *(int *)(ppppplVar23 + 0x14) = *(int *)(ppppplVar23 + 0x14) + 1;
    }
  }
  func_0x00010894af28(&pppplStack_220);
  func_0x00010894b08c(uStack_1d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108944fd0(&ppppplStack_200);
    FUN_10894abcc(&uStack_210);
    func_0x00010894af28();
    pcVar24 = FUN_10894ab40;
    func_0x00010894b038();
    pppppplVar20 = ppppppplVar19[5];
    pppppplVar10 = ppppppplVar19[4];
    *(long *******)((long)ppppplVar17 + 0x28) = ppppppplVar19[5];
    *(long *******)((long)ppppplVar17 + 0x20) = pppppplVar10;
    if (pppppplVar20 != (long ******)0x0) {
      do {
        func_0x00010894b048(pcVar24);
      } while (extraout_w10_02 != 0);
    }
    return;
  }
  return;
}



/* Entry: 10894a974; end: 10894ab3f;  */

void FUN_10894a974(long param_1,undefined8 **param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  int extraout_w10;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  plVar7 = &lStack_90;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = 0;
  lStack_88 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  ppuVar8 = param_2;
  if (((lVar6 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_88 = lVar6, lVar6 != 0)) &&
     (lVar11 = *(long *)(param_1 + 0x20), lStack_90 = lVar11, lVar11 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x38);
    plVar10 = (long *)(lVar11 + 0x88);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)param_2 == 0) {
      if (param_4 != 0) {
        *(int *)(lVar11 + 0xa4) = *(int *)(lVar11 + 0xa4) + 1;
        __ZNSt3__16chrono12steady_clock3nowEv();
        *(long *)(lVar11 + 0xa8) = (lVar6 - lVar2) / 1000 + *(long *)(lVar11 + 0xa8);
        plVar10 = *(long **)(lVar11 + 0x28);
        uStack_58 = 1;
        puVar9 = (undefined8 *)0x38;
        __Znwm();
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = &PTR_FUN_110a9c458;
        puVar9[3] = &PTR_DAT_110a9c4a8;
        puVar9[4] = param_4;
        puStack_50 = puVar9;
        _CVPixelBufferGetWidth();
        *(int *)(puVar9 + 5) = (int)param_4;
        uVar5 = (undefined4)puVar9[4];
        _CVPixelBufferGetHeight();
        *(undefined4 *)((long)puVar9 + 0x2c) = uVar5;
        puVar9[6] = uVar1;
        _CFRetain(puVar9[4]);
        puStack_50 = (undefined8 *)0x0;
        func_0x00010894af4c(auStack_60);
        uStack_80 = 0;
        uStack_78 = 0;
        ppuVar8 = &puStack_70;
        puStack_70 = puVar9 + 3;
        puStack_68 = puVar9;
        (**(code **)(*plVar10 + 0x18))(plVar10);
        func_0x000108944fd0(&puStack_70);
        FUN_10894abcc(&uStack_80);
      }
    }
    else {
      (**(code **)(**(long **)(lVar11 + 0x28) + 0x20))();
      *(int *)(lVar11 + 0xa0) = *(int *)(lVar11 + 0xa0) + 1;
    }
  }
  func_0x00010894af28(&lStack_90);
  func_0x00010894b08c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108944fd0(&puStack_70);
  FUN_10894abcc(&uStack_80);
  func_0x00010894af28();
  pcVar12 = FUN_10894ab40;
  func_0x00010894b038();
  puVar9 = ppuVar8[5];
  puVar13 = ppuVar8[4];
  *(undefined8 **)((long)plVar7 + 0x28) = ppuVar8[5];
  *(undefined8 **)((long)plVar7 + 0x20) = puVar13;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      func_0x00010894b048(pcVar12);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10894ab40; end: 10894ab6f;  */

void FUN_10894ab40(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010894b048(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10894ab70; end: 10894abc3;  */

void FUN_10894ab70(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [88];
  undefined1 uStack_18;
  
  lVar4 = *(long *)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xa0);
  iVar2 = *(int *)(param_2 + 0xa4);
  auStack_70[0] = 0;
  uStack_18 = 0;
  *param_1 = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 1) = uVar5;
  param_1[5] = uVar1;
  lVar3 = 0;
  if ((long)iVar2 != 0) {
    lVar3 = lVar4 / (long)iVar2;
  }
  *(long *)(param_1 + 6) = lVar3;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_108946434(auStack_70);
  return;
}



/* Entry: 10894abc4; end: 10894abcb;  */

undefined8 FUN_10894abc4(void)

{
  return 0;
}



/* Entry: 10894abcc; end: 10894abef;  */

void FUN_10894abcc(long param_1)

{
  func_0x00010894b0a0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10894abf0; end: 10894abfb;  */

void FUN_10894abf0(void)

{
  return;
}



/* Entry: 10894abfc; end: 10894add3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10894abfc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long alStack_98 [4];
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar12 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar12 == plVar2) {
    lVar5 = 0;
  }
  else {
    plVar13 = (long *)0x0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    alStack_98[1] = 0;
    alStack_98[2] = 0;
    alStack_98[3] = 0;
    plVar7 = (long *)0x0;
    plVar9 = (long *)0x0;
    for (; plVar12 != plVar2; plVar12 = plVar12 + 2) {
      if ((ulong)plVar12[1] < 5) {
        lVar5 = 0;
        goto LAB_10894ad6c;
      }
      lVar5 = *plVar12;
      if (plVar7 < plVar13) {
        plVar8 = plVar7 + 1;
        *plVar7 = lVar5 + 4;
        plVar10 = plVar9;
      }
      else {
        lVar11 = (long)plVar7 - (long)plVar9;
        uVar1 = (lVar11 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10894ae88();
LAB_10894adac:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10894adb0);
          (*pcVar3)();
        }
        uVar6 = (long)plVar13 - (long)plVar9 >> 2;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plVar13 - (long)plVar9)) {
          uVar6 = 0x1fffffffffffffff;
        }
        if (uVar6 == 0) {
          lVar4 = 0;
        }
        else {
          if (uVar6 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10894adac;
          }
          lVar4 = uVar6 << 3;
          __Znwm();
        }
        plVar7 = (long *)(lVar4 + lVar11);
        plVar13 = (long *)(lVar4 + uVar6 * 8);
        plVar10 = plVar7 + -(lVar11 >> 3);
        plVar8 = plVar7 + 1;
        *plVar7 = lVar5 + 4;
        _memcpy(plVar10,plVar9,lVar11);
        plStack_78 = plVar10;
        plStack_68 = plVar13;
        if (plVar9 != (long *)0x0) {
          plStack_70 = plVar8;
          __ZdlPv(plVar9);
        }
      }
      alStack_98[0] = plVar12[1] + -4;
      plStack_70 = plVar8;
      func_0x0001057f9264(alStack_98 + 1,alStack_98);
      plVar7 = plVar8;
      plVar9 = plVar10;
    }
    alStack_98[0] = 0;
    (**(code **)(*param_1 + 0x20))
              (param_1,param_2[1] - *param_2 >> 4,&plStack_78,alStack_98 + 1,alStack_98);
    lVar5 = alStack_98[0];
    if ((int)param_1 != 0) {
      lVar5 = 0;
    }
LAB_10894ad6c:
    func_0x0001057f951c(alStack_98 + 1);
    FUN_10894ae9c(&plStack_78);
  }
  return lVar5;
}



/* Entry: 10894add4; end: 10894ae57;  */

undefined1 FUN_10894add4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uStack_34;
  
  lVar4 = 0;
  lVar5 = *param_3;
  lVar1 = param_3[1];
  while( true ) {
    if (lVar5 == lVar1) {
      return 1;
    }
    if (*(ulong *)(lVar5 + 8) < 5) break;
    uVar2 = (int)*(ulong *)(lVar5 + 8) - 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
    puVar3 = &uStack_34;
    _CMBlockBufferReplaceDataBytes(puVar3,param_2,lVar4,4);
    if ((int)puVar3 != 0) {
      return 0;
    }
    lVar4 = *(long *)(lVar5 + 8) + lVar4;
    lVar5 = lVar5 + 0x10;
  }
  return 0;
}



/* Entry: 10894ae58; end: 10894ae87;  */

undefined8
FUN_10894ae58(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbb9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CMVideoFormatDescriptionCreateFromH264ParameterSets_110348530)
              (uVar1,2,*param_3,*param_4,4,param_5);
    return uVar1;
  }
  return 0xffffffff;
}



/* Entry: 10894ae88; end: 10894ae9b;  */

long * FUN_10894ae88(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10894ae9c; end: 10894aec7;  */

long * FUN_10894ae9c(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10894aec8; end: 10894af03;  */

void FUN_10894aec8(void)

{
  return;
}



/* Entry: 10894af04; end: 10894af73;  */

void FUN_10894af04(long param_1)

{
  func_0x00010894b0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10894af74; end: 10894af83;  */

void FUN_10894af74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9c458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10894af84; end: 10894af97;  */

void FUN_10894af84(void)

{
  FUN_10894af74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894af98; end: 10894afe7;  */

void FUN_10894af98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010894afa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10894afe8; end: 10894b00f;  */

void FUN_10894afe8(long param_1)

{
  long unaff_x19;
  
  func_0x00010894b0a0();
  if (param_1 != 0) {
    _CFRelease();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10894b010; end: 10894b0ab;  */

void FUN_10894b010(void)

{
  return;
}



/* Entry: 10894b0ac; end: 10894b107;  */

undefined4 FUN_10894b0ac(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0772e0();
  uVar1 = 0xb0023;
  if ((int)puVar3 != 0) {
    uVar1 = 0xb0024;
  }
  _objc_release(puVar2);
  return uVar1;
}



/* Entry: 10894b108; end: 10894b163;  */

int FUN_10894b108(void)

{
  int iVar1;
  long unaff_x20;
  
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d100();
  FUN_10894b164();
  iVar1 = 0xc0025;
  if (unaff_x20 - 1U < 3) {
    iVar1 = (int)(unaff_x20 - 1U) + 0xc0026;
  }
  return iVar1;
}



/* Entry: 10894b164; end: 10894b16f;  */

void FUN_10894b164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10894b170; end: 10894b373;  */

long * FUN_10894b170(long *param_1,undefined8 param_2,long param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_FUN_110a9c518;
  *(int *)(param_1 + 3) = (int)param_2;
  lVar2 = param_5[1];
  lVar3 = *param_5;
  param_1[5] = param_5[1];
  param_1[4] = lVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010894c924();
    } while (extraout_w10 != 0);
  }
  param_1[0xf] = 0x32aaaba7;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 500;
  param_1[0xc] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_108998bc8(param_1 + 0x18,param_2);
  lVar2 = param_3;
  FUN_1089910ac(param_3,param_2);
  FUN_10894b374(param_1 + 0x19);
  lVar3 = param_4[1];
  lVar4 = *param_4;
  param_1[0x1b] = param_4[1];
  param_1[0x1a] = lVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010894c924();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108afd080();
  FUN_10894b3c4();
  lVar3 = lVar2;
  func_0x000108afd080();
  func_0x00010894b400();
  param_1[0x1d] = 0x32aaaba7;
  param_1[0x1c] = lVar2 - lVar3;
  plVar1 = param_1 + 0x2d;
  *plVar1 = (long)&PTR_FUN_110a9c628;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  FUN_1089a3c0c();
  param_1[0x2e] = 0x4b0;
  param_1[0x2f] = lVar3;
  param_1[0x30] = (long)plVar1;
  *(int *)(param_1 + 0x31) = (int)param_2;
  (**(code **)(param_1[0x2d] + 0x10))();
  param_1[0x32] = (long)plVar1;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  (**(code **)(*param_1 + 0x30))(param_1,param_3);
  return param_1;
}



/* Entry: 10894b374; end: 10894b3c3;  */

void FUN_10894b374(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm();
  FUN_108982f64();
  *param_1 = uVar1;
  return;
}



/* Entry: 10894b3c4; end: 10894b42b;  */

long FUN_10894b3c4(ulong param_1)

{
  FUN_10894c3dc();
  return (long)((double)(param_1 & 0xffffffff) / 4294967.296 + 0.5) + (param_1 >> 0x20) * 1000;
}



/* Entry: 10894b42c; end: 10894b42f;  */

void FUN_10894b42c(void)

{
  return;
}



/* Entry: 10894b430; end: 10894b58b;  */

undefined8 * FUN_10894b430(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_78 [40];
  byte bStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  *param_1 = &PTR_FUN_110a9c518;
  puVar2 = param_1 + 0x2e;
  FUN_108949f00(puVar2,param_1[0x25]);
  func_0x00010894c9d4();
  uVar3 = param_1[0x27];
  if ((long)uVar3 < 1) {
    func_0x00010894c934();
    uStack_28 = 0x5d;
  }
  else if (uVar3 < 0xb) {
    func_0x00010894c934();
    uStack_28 = 0x5e;
  }
  else if (uVar3 < 0x65) {
    func_0x00010894c934();
    uStack_28 = 0x5f;
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    ppuStack_48 = &PTR_DAT_1107eac58;
    uStack_40 = 0;
    if (uVar3 < 0x3e9) {
      uStack_28 = 0x60;
    }
    else {
      uStack_28 = 0x61;
    }
  }
  FUN_1089a3c0c();
  func_0x00010894c970(*puVar2);
  (*extraout_x8)();
  puVar2 = (undefined8 *)param_1[0x2b];
  FUN_108996b58(auStack_78,puVar2,param_1[0x2c],*(undefined4 *)(param_1 + 3));
  if (bStack_50 == 1) {
    FUN_1089a3c0c();
    if ((bStack_50 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10894b588);
      (*pcVar1)();
    }
    func_0x00010894c970(*puVar2);
    (*extraout_x8_00)();
  }
  FUN_10894c490(auStack_78);
  func_0x000104c03ee4(&ppuStack_48);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1d);
  func_0x00010894c74c(param_1 + 0x1a);
  func_0x00010894c628(param_1 + 0x19);
  func_0x00010894c5f8(param_1 + 0x18);
  __ZNSt3__15mutexD1Ev(param_1 + 0xf);
  func_0x000104c05328(param_1 + 4);
  func_0x00010894c728(param_1 + 1);
  return param_1;
}



/* Entry: 10894b58c; end: 10894b5f3;  */

void FUN_10894b58c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  
  FUN_108996d9c(*(undefined8 *)(param_1 + 0xd0));
  if (*(long *)(param_1 + 0x30) != 0) {
    _VTCompressionSessionInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    do {
      func_0x00010894c924();
    } while (extraout_w10 != 0);
  }
  plVar1 = (long *)(param_1 + 0x128);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + lVar4;
  return;
}



/* Entry: 10894b5f4; end: 10894b5f7;  */

undefined8 * FUN_10894b5f4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_78 [40];
  byte bStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  *param_1 = &PTR_FUN_110a9c518;
  puVar2 = param_1 + 0x2e;
  FUN_108949f00(puVar2,param_1[0x25]);
  func_0x00010894c9d4();
  uVar3 = param_1[0x27];
  if ((long)uVar3 < 1) {
    func_0x00010894c934();
    uStack_28 = 0x5d;
  }
  else if (uVar3 < 0xb) {
    func_0x00010894c934();
    uStack_28 = 0x5e;
  }
  else if (uVar3 < 0x65) {
    func_0x00010894c934();
    uStack_28 = 0x5f;
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    ppuStack_48 = &PTR_DAT_1107eac58;
    uStack_40 = 0;
    if (uVar3 < 0x3e9) {
      uStack_28 = 0x60;
    }
    else {
      uStack_28 = 0x61;
    }
  }
  FUN_1089a3c0c();
  func_0x00010894c970(*puVar2);
  (*extraout_x8)();
  puVar2 = (undefined8 *)param_1[0x2b];
  FUN_108996b58(auStack_78,puVar2,param_1[0x2c],*(undefined4 *)(param_1 + 3));
  if (bStack_50 == 1) {
    FUN_1089a3c0c();
    if ((bStack_50 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10894b588);
      (*pcVar1)();
    }
    func_0x00010894c970(*puVar2);
    (*extraout_x8_00)();
  }
  FUN_10894c490(auStack_78);
  func_0x000104c03ee4(&ppuStack_48);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1d);
  func_0x00010894c74c(param_1 + 0x1a);
  func_0x00010894c628(param_1 + 0x19);
  func_0x00010894c5f8(param_1 + 0x18);
  __ZNSt3__15mutexD1Ev(param_1 + 0xf);
  func_0x000104c05328(param_1 + 4);
  func_0x00010894c728(param_1 + 1);
  return param_1;
}



/* Entry: 10894b5f8; end: 10894b60b;  */

void FUN_10894b5f8(void)

{
  FUN_10894b430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894b60c; end: 10894b68b;  */

void FUN_10894b60c(long param_1)

{
  long extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0xe8;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  *(undefined1 *)(param_1 + 0x38) = 1;
  FUN_108949d88(param_1 + 0x170);
  func_0x00010894c958();
  func_0x00010894c770(auStack_40,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  func_0x00010894c9dc();
  func_0x00010894c9c8(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x00010894c99c();
  func_0x00010894c994();
  return;
}



/* Entry: 10894b68c; end: 10894b70f;  */

void FUN_10894b68c(long param_1)

{
  long extraout_x8;
  undefined1 auStack_40 [32];
  
  func_0x00010894c770(auStack_40,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  func_0x00010894c9dc();
  func_0x00010894c9c8(*(undefined8 *)(extraout_x8 + 0x18));
  func_0x00010894c99c();
  func_0x00010894c994();
  func_0x00010894c9a4(param_1 + 0xe8);
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    FUN_108949f00(param_1 + 0x170,*(undefined8 *)(param_1 + 0x128));
    func_0x00010894c9d4();
  }
  func_0x00010894c958();
  return;
}



/* Entry: 10894b710; end: 10894b72b;  */

void FUN_10894b710(void)

{
  return;
}



/* Entry: 10894b72c; end: 10894b767;  */

void FUN_10894b72c(long param_1)

{
  long lVar1;
  long alStack_38 [3];
  
  lVar1 = param_1 + 0xe8;
  func_0x00010894c9a4();
  __ZNSt3__16chrono12steady_clock3nowEv();
  alStack_38[0] = lVar1;
  func_0x00010898f660(param_1 + 0x58,alStack_38);
  func_0x00010894c958();
  return;
}



/* Entry: 10894b768; end: 10894bcdf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10894b768(long param_1,long *param_2,uint param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 uVar19;
  code *extraout_x8;
  long lVar20;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int *piVar21;
  long lVar22;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined *unaff_x20;
  int iVar23;
  long *plVar24;
  long lStack_5e8;
  long lStack_5e0;
  ushort auStack_5d8 [4];
  long lStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_594;
  undefined1 auStack_58c [68];
  undefined1 uStack_548;
  undefined8 uStack_544;
  undefined8 uStack_52f;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_507;
  byte bStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4ac;
  undefined1 auStack_4a4 [68];
  char cStack_460;
  undefined8 uStack_45c;
  undefined8 uStack_447;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_41f;
  ulong auStack_410 [3];
  undefined1 uStack_3f8;
  undefined1 uStack_3f0;
  undefined1 uStack_3e8;
  undefined1 uStack_3e0;
  undefined4 uStack_3d8;
  long lStack_3d0;
  undefined4 uStack_3c8;
  undefined1 uStack_3c4;
  undefined1 uStack_380;
  undefined1 uStack_37c;
  undefined1 uStack_378;
  undefined1 uStack_374;
  undefined1 uStack_370;
  undefined1 uStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  int iStack_324;
  undefined1 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined1 uStack_2c8;
  long *plStack_2c0;
  undefined5 uStack_2b8;
  undefined3 uStack_2b3;
  int iStack_2b0;
  undefined1 uStack_2ac;
  undefined1 uStack_2a8;
  undefined1 uStack_2a0;
  undefined1 uStack_298;
  undefined1 uStack_290;
  undefined1 uStack_28c;
  undefined1 uStack_288;
  undefined1 uStack_284;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_224;
  undefined1 uStack_220;
  undefined1 uStack_21e;
  undefined8 uStack_218;
  undefined2 uStack_210;
  undefined1 uStack_20e;
  undefined1 uStack_208;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_1d8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_124 [4];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a8 = param_1 + 0xe8;
  uStack_a0 = 1;
  plVar24 = param_2;
  __ZNSt3__15mutex4lockEv();
  uVar17 = (uint)plVar24;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
    FUN_108996fe4();
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar24 = (long *)(param_1 + 0x30);
    uStack_b0 = uVar8;
    if (*plVar24 == 0) {
LAB_10894b824:
      unaff_x20 = *(undefined **)(param_1 + 0x48);
      func_0x00010894c9d4();
      FUN_108996d48(*(undefined8 *)(param_1 + 0xd0));
      param_3 = (uint)((ulong)unaff_x20 >> 0x20);
      uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      uVar17 = 0x68766331;
      if (*(int *)(param_1 + 0x18) != 4 && *(int *)(param_1 + 0x18) != 2) {
        uVar17 = 0x61766331;
      }
      param_4 = (undefined8 *)(ulong)uVar17;
      _VTCompressionSessionCreate
                (uVar8,unaff_x20,(ulong)unaff_x20 >> 0x20,param_4,
                 &PTR__OBJC_CLASS___NSConstantDictionary_111174f40,0,uVar8,0);
      uVar17 = (uint)((int)uVar8 == 0);
      func_0x000108997040(*(undefined8 *)(param_1 + 0xd0));
      if ((int)uVar8 == 0) {
        _VTSessionSetProperty
                  (*plVar24,*(undefined8 *)PTR__kVTCompressionPropertyKey_RealTime_11034b0a8,
                   *(undefined8 *)PTR__kCFBooleanTrue_11034ab90);
        _VTSessionSetProperty
                  (*plVar24,*(undefined8 *)
                             PTR__kVTCompressionPropertyKey_AllowFrameReordering_11034b068,
                   *(undefined8 *)PTR__kCFBooleanFalse_11034ab88);
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010894c9bc(PTR__kVTCompressionPropertyKey_MaxKeyFrameInterval_11034b090);
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010894c9bc(PTR__kVTCompressionPropertyKey_MaxKeyFrameIntervalDuration_11034b098);
        func_0x00010894c970(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x30));
        (*extraout_x8)();
        *(undefined **)(param_1 + 0x50) = unaff_x20;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        func_0x00010898f660(param_1 + 0x58,&uStack_b0);
LAB_10894b944:
        lVar13 = param_1 + 0x58;
        func_0x00010898f60c(lVar13,&uStack_b0);
        if ((int)lVar13 == 0) {
          unaff_x20 = (undefined *)0x0;
        }
        else {
          uStack_78 = *(undefined8 *)PTR__kVTEncodeFrameOptionKey_ForceKeyFrame_11034b0b8;
          puStack_70 = PTR____kCFBooleanTrue_11034ab68;
          unaff_x20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
        }
        _CMSampleBufferGetPresentationTimeStamp(&uStack_c8,*param_2);
        lVar22 = *param_2;
        _CFRetain(lVar22);
        lVar13 = lVar22;
        _CMSampleBufferGetImageBuffer();
        lVar11 = lVar13;
        if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x3c)) {
          uVar8 = *(undefined8 *)(param_1 + 0x30);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _VTSessionSetProperty
                    (uVar8,*(undefined8 *)PTR__kVTCompressionPropertyKey_AverageBitRate_11034b078,
                     puVar9);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d00c0;
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puStack_98 = puVar9;
          func_0x00010c0df760();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d00d8;
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_88 = puVar10;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_release(puVar10);
          func_0x00010894c9b4();
          lVar11 = *plVar24;
          _VTSessionSetProperty
                    (lVar11,*(undefined8 *)PTR__kVTCompressionPropertyKey_DataRateLimits_11034b080,
                     puVar9);
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
        }
        plVar16 = (long *)(param_1 + 0x128);
        do {
          lVar20 = *plVar16;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = lVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 == 0) {
          lVar11 = *(long *)(param_1 + 0x180);
          func_0x00010894c97c();
          (*extraout_x8_00)();
          *(long *)(param_1 + 400) = lVar11;
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_e0 = *(undefined8 *)(param_1 + 0x50);
        uStack_100 = *(undefined8 *)(param_1 + 8);
        lStack_f8 = *(long *)(param_1 + 0x10);
        if (lStack_f8 != 0) {
          plVar1 = (long *)(lStack_f8 + 0x10);
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_f0 = *(undefined8 *)(param_1 + 0x130);
        puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_118 = 0xc6000000;
        pcStack_110 = FUN_10894bce0;
        puStack_108 = &UNK_110a9c578;
        if (lStack_f8 != 0) {
          plVar1 = (long *)(lStack_f8 + 0x10);
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppuVar12 = &puStack_120;
        lStack_e8 = lVar11;
        uStack_d8 = uStack_100;
        lStack_d0 = lStack_f8;
        _objc_retainBlock();
        lVar11 = *plVar24;
        uStack_138 = uStack_c0;
        uStack_140 = uStack_c8;
        uStack_130 = uStack_b8;
        uStack_158 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
        uStack_160 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
        uStack_150 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
        puVar15 = &uStack_140;
        param_4 = &uStack_160;
        _VTCompressionSessionEncodeFrameWithOutputHandler
                  (lVar11,lVar13,puVar15,param_4,unaff_x20,auStack_124,ppuVar12);
        _CFRelease(lVar22);
        iVar23 = (int)lVar11;
        uVar18 = (ulong)(iVar23 == 0);
        func_0x00010899707c(*(undefined8 *)(param_1 + 0xd0));
        param_3 = (uint)puVar15;
        uVar17 = (uint)uVar18;
        if (iVar23 != 0) {
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = *plVar16 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar23 == -0x3270 || iVar23 == -0x3267) {
            do {
              func_0x00010894c924();
              param_3 = (uint)puVar15;
              uVar17 = (uint)uVar18;
            } while (extraout_w10 != 0);
            *(undefined8 *)(param_1 + 0x50) = 0;
          }
        }
        func_0x00010894c9b4();
        func_0x00010894c728(&uStack_100);
        func_0x00010894c728(&uStack_d8);
        _objc_release(unaff_x20);
      }
    }
    else {
      uVar17 = (uint)*(undefined8 *)(param_1 + 0x128);
      iVar23 = (int)param_1 + 0x170;
      FUN_108949db0();
      if (iVar23 == 0) {
        if (((*plVar24 == 0) || (*(int *)(param_1 + 0x50) != (int)*(undefined8 *)(param_1 + 0x48)))
           || (*(int *)(param_1 + 0x54) != (int)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20)))
        goto LAB_10894b824;
        goto LAB_10894b944;
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  func_0x000107c2798c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  plVar24 = &lStack_a8;
  func_0x000107c2798c();
  func_0x00010894c960();
  lStack_5e8 = 0;
  lStack_5e0 = 0;
  lVar13 = plVar24[5];
  if (((lVar13 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_5e0 = lVar13, lVar13 == 0)
      ) || ((lVar13 = plVar24[4], lStack_5e8 = lVar13, lVar13 == 0 ||
            (*(long *)(lVar13 + 0x130) != plVar24[6])))) goto LAB_10894be18;
  plVar16 = (long *)(lVar13 + 0x128);
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = *plVar16 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar17 != 0) || ((param_3 >> 1 & 1) != 0)) {
    do {
      func_0x00010894c924();
    } while (extraout_w10_01 != 0);
    uVar8 = *(undefined8 *)(lVar13 + 0x180);
    func_0x00010894c97c();
    (*extraout_x8_02)();
    *(undefined8 *)(lVar13 + 400) = uVar8;
    goto LAB_10894be18;
  }
  lVar13 = lVar13 + 0x170;
  FUN_108949e54();
  lVar11 = lStack_5e8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar22 = lVar13 - plVar24[7];
  do {
    func_0x00010894c924();
  } while (extraout_w10_00 != 0);
  if (param_4 == (undefined8 *)0x0) {
    auStack_5d8[0] = auStack_5d8[0] & 0xff00;
    bStack_4f8 = 0;
LAB_10894c1d8:
    func_0x0001089970b8(*(undefined8 *)(lVar11 + 0xd0));
  }
  else {
    func_0x000108afd080();
    func_0x00010894c97c();
    (*extraout_x8_01)();
    puVar15 = param_4;
    _CMSampleBufferGetSampleAttachmentsArray(param_4,0);
    bVar7 = false;
    if (puVar15 != (undefined8 *)0x0) {
      puVar14 = puVar15;
      _CFArrayGetCount();
      if (puVar14 == (undefined8 *)0x0) {
        bVar7 = false;
      }
      else {
        _CFArrayGetValueAtIndex(puVar15,0);
        iVar23 = (int)puVar15;
        _CFDictionaryContainsKey();
        bVar7 = iVar23 == 0;
      }
    }
    lStack_340 = 0;
    lStack_348 = 0;
    uStack_338 = 0;
    uStack_330 = 4;
    uStack_328 = 0;
    iStack_324 = -1;
    uStack_320 = 0xff;
    uStack_2c8 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    puStack_280 = &uStack_278;
    uStack_270 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_300 = 0;
    uStack_308 = 0;
    uStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d8 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2b3 = 0;
    iStack_2b0 = 0;
    uStack_2ac = 0;
    uStack_278 = 0;
    uStack_268 = 0;
    uStack_224 = 0;
    uStack_220 = 0;
    uStack_21e = 0;
    uStack_218 = 0;
    uStack_210 = 1;
    uStack_20e = 0;
    uStack_208 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    (**(code **)(**(long **)(lVar11 + 0xc0) + 0x10))
              (&lStack_4f0,*(long **)(lVar11 + 0xc0),param_4,bVar7);
    lVar5 = lStack_4e8;
    lVar20 = lStack_4f0;
    if (lStack_4f0 == lStack_4e8) {
      auStack_5d8[0] = auStack_5d8[0] & 0xff00;
      bStack_4f8 = 0;
    }
    else {
      puVar15 = (undefined8 *)0x28;
      __Znwm();
      puVar15[2] = lStack_4e8;
      puVar15[3] = uStack_4e0;
      lStack_4e8 = 0;
      uStack_4e0 = 0;
      lStack_4f0 = 0;
      *puVar15 = &PTR_FUN_110a9c670;
      puVar15[1] = lVar20;
      piVar21 = (int *)(puVar15 + 4);
      *piVar21 = 0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      auStack_410[0] = 0;
      puStack_350 = puVar15;
      func_0x00010894c344(&lStack_348,&puStack_350);
      FUN_10894c8f0(&puStack_350);
      FUN_10894c8c4(auStack_410);
    }
    func_0x000107c27914(&lStack_4f0);
    if (lVar20 != lVar5) {
      uVar19 = 3;
      if (bVar7 == false) {
        uVar19 = 4;
      }
      uStack_330 = CONCAT44(uStack_330._4_4_,uVar19);
      lStack_348 = plVar24[8];
      plVar16 = *(long **)(lVar11 + 0xc0);
      (**(code **)*plVar16)();
      plVar24 = plStack_2c0;
      if (plStack_2c0 != (long *)0x0) {
        (**(code **)(*plStack_2c0 + 0x20))();
      }
      plVar1 = (long *)0x0;
      if (CONCAT35(uStack_2b3,uStack_2b8) != 0) {
        plVar1 = plVar24;
      }
      (**(code **)(*plVar16 + 0x10))(plVar16,plVar1);
      plVar24 = *(long **)(lVar11 + 0xc0);
      (**(code **)*plVar24)();
      (**(code **)(*plVar24 + 0x18))();
      iStack_324 = (int)plVar24;
      if (((ulong)plVar24 & 0x100000000) == 0) {
        iStack_324 = -1;
      }
      if (iStack_324 == -1) {
        do {
          func_0x00010894c924();
        } while (extraout_w10_02 != 0);
      }
      lVar2 = *(long *)(lVar11 + 0xe0) + lVar13 / 1000;
      iStack_2b0 = (int)lVar2 * 0x5a;
      auStack_410[0] = auStack_410[0] & 0xffffffffffff0000;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      lStack_3d0 = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_378 = 0;
      uStack_374 = 0;
      uStack_370 = 0;
      uStack_360 = 0;
      uStack_358 = 0;
      auStack_410[1] = 0;
      auStack_410[2] = 0;
      uStack_3f8 = 0;
      func_0x00010899fd84(&lStack_4f0,&lStack_348);
      func_0x00010899fcb0(auStack_410 + 1,lStack_4f0);
      FUN_10894c5cc(&lStack_4f0);
      auStack_410[2] = lVar13;
      lStack_3d0 = lVar2;
      func_0x000108a00d40(&lStack_4f0,auStack_410);
      lStack_5d0 = lStack_4e8;
      uStack_5c0 = uStack_4d8;
      uStack_5c8 = uStack_4e0;
      uStack_5b0 = uStack_4c8;
      uStack_5b8 = uStack_4d0;
      auStack_5d8[0] = (ushort)lStack_4f0;
      lStack_4e8 = 0;
      uStack_5a8 = uStack_4c0;
      uStack_594 = uStack_4ac;
      auStack_58c[0] = 0;
      uStack_548 = 0;
      if (cStack_460 == '\x01') {
        _memcpy(auStack_58c,auStack_4a4,0x41);
      }
      uStack_520 = uStack_438;
      uStack_544 = uStack_45c;
      uStack_52f = uStack_447;
      uStack_438 = 0;
      uStack_518 = uStack_430;
      uStack_507 = uStack_41f;
      bStack_4f8 = 1;
      uStack_548 = cStack_460 == '\x01';
      func_0x000108a00f74(&lStack_4f0);
      func_0x000108a00d18(auStack_410);
    }
    func_0x0001089fe02c(&lStack_348);
    if (lVar20 == lVar5) goto LAB_10894c1d8;
    FUN_10898302c(&lStack_348,*(undefined8 *)(lVar11 + 200),auStack_5d8);
    lVar20 = lStack_340;
    for (lVar13 = lStack_348; lVar13 != lVar20; lVar13 = lVar13 + 0xe0) {
      FUN_10894c37c(lVar11,lVar13);
    }
    if ((bStack_4f8 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10894c220);
      (*pcVar6)();
    }
    FUN_10894c37c(lVar11,auStack_5d8);
    func_0x00010899700c(*(undefined8 *)(lVar11 + 0xd0),lVar22 / 1000);
    func_0x00010894c500(&lStack_348);
  }
  FUN_10894c5ac(auStack_5d8);
LAB_10894be18:
  func_0x00010894c7ac(&lStack_5e8);
  return;
}



/* Entry: 10894bce0; end: 10894c297;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10894bce0(long param_1,int param_2,uint param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  code *extraout_x8;
  code *extraout_x8_00;
  int *piVar17;
  long lVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_478;
  long lStack_470;
  ushort auStack_468 [4];
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_424;
  undefined1 auStack_41c [68];
  undefined1 uStack_3d8;
  undefined8 uStack_3d4;
  undefined8 uStack_3bf;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_397;
  byte bStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_33c;
  undefined1 auStack_334 [68];
  char cStack_2f0;
  undefined8 uStack_2ec;
  undefined8 uStack_2d7;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2af;
  ulong auStack_2a0 [3];
  undefined1 uStack_288;
  undefined1 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_270;
  undefined4 uStack_268;
  long lStack_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined1 uStack_210;
  undefined1 uStack_20c;
  undefined1 uStack_208;
  undefined1 uStack_204;
  undefined1 uStack_200;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  int iStack_1b4;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_158;
  long *plStack_150;
  undefined5 uStack_148;
  undefined3 uStack_143;
  int iStack_140;
  undefined1 uStack_13c;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11c;
  undefined1 uStack_118;
  undefined1 uStack_114;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_ae;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined1 uStack_98;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_68;
  
  lStack_478 = 0;
  lStack_470 = 0;
  lVar9 = *(long *)(param_1 + 0x28);
  if ((((lVar9 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_470 = lVar9, lVar9 == 0))
      || (lVar9 = *(long *)(param_1 + 0x20), lStack_478 = lVar9, lVar9 == 0)) ||
     (*(long *)(lVar9 + 0x130) != *(long *)(param_1 + 0x30))) goto LAB_10894be18;
  plVar15 = (long *)(lVar9 + 0x128);
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = *plVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((param_2 != 0) || ((param_3 >> 1 & 1) != 0)) {
    do {
      func_0x00010894c924();
    } while (extraout_w10_00 != 0);
    uVar12 = *(undefined8 *)(lVar9 + 0x180);
    func_0x00010894c97c();
    (*extraout_x8_00)();
    *(undefined8 *)(lVar9 + 400) = uVar12;
    goto LAB_10894be18;
  }
  lVar9 = lVar9 + 0x170;
  FUN_108949e54();
  lVar5 = lStack_478;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar18 = lVar9 - *(long *)(param_1 + 0x38);
  do {
    func_0x00010894c924();
  } while (extraout_w10 != 0);
  if (param_4 == 0) {
    auStack_468[0] = auStack_468[0] & 0xff00;
    bStack_388 = 0;
LAB_10894c1d8:
    func_0x0001089970b8(*(undefined8 *)(lVar5 + 0xd0));
  }
  else {
    func_0x000108afd080();
    func_0x00010894c97c();
    (*extraout_x8)();
    lVar10 = param_4;
    _CMSampleBufferGetSampleAttachmentsArray(param_4,0);
    bVar7 = false;
    if (lVar10 != 0) {
      lVar11 = lVar10;
      _CFArrayGetCount();
      if (lVar11 == 0) {
        bVar7 = false;
      }
      else {
        _CFArrayGetValueAtIndex(lVar10,0);
        iVar8 = (int)lVar10;
        _CFDictionaryContainsKey();
        bVar7 = iVar8 == 0;
      }
    }
    lStack_1d0 = 0;
    lStack_1d8 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 4;
    uStack_1b8 = 0;
    iStack_1b4 = -1;
    uStack_1b0 = 0xff;
    uStack_158 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    puStack_110 = &uStack_108;
    uStack_100 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_168 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_143 = 0;
    iStack_140 = 0;
    uStack_13c = 0;
    uStack_108 = 0;
    uStack_f8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_a8 = 0;
    uStack_a0 = 1;
    uStack_9e = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    (**(code **)(**(long **)(lVar5 + 0xc0) + 0x10))
              (&lStack_380,*(long **)(lVar5 + 0xc0),param_4,bVar7);
    lVar11 = lStack_378;
    lVar10 = lStack_380;
    if (lStack_380 == lStack_378) {
      auStack_468[0] = auStack_468[0] & 0xff00;
      bStack_388 = 0;
    }
    else {
      puVar13 = (undefined8 *)0x28;
      __Znwm();
      puVar13[2] = lStack_378;
      puVar13[3] = uStack_370;
      lStack_378 = 0;
      uStack_370 = 0;
      lStack_380 = 0;
      *puVar13 = &PTR_FUN_110a9c670;
      puVar13[1] = lVar10;
      piVar17 = (int *)(puVar13 + 4);
      *piVar17 = 0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = *piVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      auStack_2a0[0] = 0;
      puStack_1e0 = puVar13;
      func_0x00010894c344(&lStack_1d8,&puStack_1e0);
      FUN_10894c8f0(&puStack_1e0);
      FUN_10894c8c4(auStack_2a0);
    }
    func_0x000107c27914(&lStack_380);
    if (lVar10 != lVar11) {
      uVar16 = 3;
      if (bVar7 == false) {
        uVar16 = 4;
      }
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
      lStack_1d8 = *(long *)(param_1 + 0x40);
      plVar14 = *(long **)(lVar5 + 0xc0);
      (**(code **)*plVar14)();
      plVar15 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        (**(code **)(*plStack_150 + 0x20))();
      }
      plVar2 = (long *)0x0;
      if (CONCAT35(uStack_143,uStack_148) != 0) {
        plVar2 = plVar15;
      }
      (**(code **)(*plVar14 + 0x10))(plVar14,plVar2);
      plVar15 = *(long **)(lVar5 + 0xc0);
      (**(code **)*plVar15)();
      (**(code **)(*plVar15 + 0x18))();
      iStack_1b4 = (int)plVar15;
      if (((ulong)plVar15 & 0x100000000) == 0) {
        iStack_1b4 = -1;
      }
      if (iStack_1b4 == -1) {
        do {
          func_0x00010894c924();
        } while (extraout_w10_01 != 0);
      }
      lVar1 = *(long *)(lVar5 + 0xe0) + lVar9 / 1000;
      iStack_140 = (int)lVar1 * 0x5a;
      auStack_2a0[0] = auStack_2a0[0] & 0xffffffffffff0000;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      lStack_260 = 0;
      uStack_258 = 0;
      uStack_254 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      auStack_2a0[1] = 0;
      auStack_2a0[2] = 0;
      uStack_288 = 0;
      func_0x00010899fd84(&lStack_380,&lStack_1d8);
      func_0x00010899fcb0(auStack_2a0 + 1,lStack_380);
      FUN_10894c5cc(&lStack_380);
      auStack_2a0[2] = lVar9;
      lStack_260 = lVar1;
      func_0x000108a00d40(&lStack_380,auStack_2a0);
      lStack_460 = lStack_378;
      uStack_450 = uStack_368;
      uStack_458 = uStack_370;
      uStack_440 = uStack_358;
      uStack_448 = uStack_360;
      auStack_468[0] = (ushort)lStack_380;
      lStack_378 = 0;
      uStack_438 = uStack_350;
      uStack_424 = uStack_33c;
      auStack_41c[0] = 0;
      uStack_3d8 = 0;
      if (cStack_2f0 == '\x01') {
        _memcpy(auStack_41c,auStack_334,0x41);
      }
      uStack_3b0 = uStack_2c8;
      uStack_3d4 = uStack_2ec;
      uStack_3bf = uStack_2d7;
      uStack_2c8 = 0;
      uStack_3a8 = uStack_2c0;
      uStack_397 = uStack_2af;
      bStack_388 = 1;
      uStack_3d8 = cStack_2f0 == '\x01';
      func_0x000108a00f74(&lStack_380);
      func_0x000108a00d18(auStack_2a0);
    }
    func_0x0001089fe02c(&lStack_1d8);
    if (lVar10 == lVar11) goto LAB_10894c1d8;
    FUN_10898302c(&lStack_1d8,*(undefined8 *)(lVar5 + 200),auStack_468);
    lVar10 = lStack_1d0;
    for (lVar9 = lStack_1d8; lVar9 != lVar10; lVar9 = lVar9 + 0xe0) {
      FUN_10894c37c(lVar5,lVar9);
    }
    if ((bStack_388 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10894c220);
      (*pcVar6)();
    }
    FUN_10894c37c(lVar5,auStack_468);
    func_0x00010899700c(*(undefined8 *)(lVar5 + 0xd0),lVar18 / 1000);
    func_0x00010894c500(&lStack_1d8);
  }
  FUN_10894c5ac(auStack_468);
LAB_10894be18:
  func_0x00010894c7ac(&lStack_478);
  return;
}



/* Entry: 10894c298; end: 10894c2c7;  */

void FUN_10894c298(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010894c924(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10894c2c8; end: 10894c37b;  */

void FUN_10894c2c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x20);
  uStack_28 = *param_2;
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_28);
  *(long **)(param_1 + 0x48) = plVar1;
  return;
}



/* Entry: 10894c37c; end: 10894c3cf;  */

void FUN_10894c37c(long param_1)

{
  code *extraout_x8;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010894c97c();
    (*extraout_x8)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10894c3d0; end: 10894c3db;  */

void FUN_10894c3d0(long param_1)

{
  long unaff_x20;
  
  FUN_1089836f4(*(undefined8 *)(param_1 + 200));
  FUN_10898344c();
  FUN_10894c690(unaff_x20 + 8);
  return;
}



/* Entry: 10894c3dc; end: 10894c40f;  */

void FUN_10894c3dc(long *param_1)

{
  long *plVar1;
  code *extraout_x8;
  
  plVar1 = param_1;
  func_0x00010894c97c();
  (*extraout_x8)();
                    /* WARNING: Could not recover jumptable at 0x00010894c40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,plVar1);
  return;
}



/* Entry: 10894c410; end: 10894c467;  */

long FUN_10894c410(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (-1 < lVar2) {
    lVar1 = lVar2 / 1000;
    if (499 < lVar2 % 1000) {
      lVar1 = lVar1 + 1;
    }
    return lVar1;
  }
  return lVar2 / 1000 - (ulong)(lVar2 % 1000 < -500);
}



/* Entry: 10894c468; end: 10894c48b;  */

long FUN_10894c468(long param_1)

{
  func_0x00010bd462f8();
  return (param_1 / 1000000) * 1000000;
}



/* Entry: 10894c48c; end: 10894c48f;  */

void FUN_10894c48c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16chrono12system_clock3nowEv_1103467e8)();
  return;
}



/* Entry: 10894c490; end: 10894c4af;  */

void FUN_10894c490(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000104c03ee4();
  }
  return;
}



/* Entry: 10894c4b0; end: 10894c4b7;  */

long * FUN_10894c4b0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  if (*param_1 != 0) {
    func_0x00010894c970();
    (*extraout_x8)();
  }
  *param_1 = (long)puVar1;
  return param_1;
}



/* Entry: 10894c4b8; end: 10894c56b;  */

long * FUN_10894c4b8(long *param_1,undefined8 *param_2)

{
  code *extraout_x8;
  
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  if (*param_1 != 0) {
    func_0x00010894c970();
    (*extraout_x8)();
  }
  *param_1 = (long)param_2;
  return param_1;
}



/* Entry: 10894c56c; end: 10894c573;  */

void FUN_10894c56c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xe0;
    func_0x000108a00f74();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10894c574; end: 10894c5ab;  */

void FUN_10894c574(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0xe0;
    func_0x000108a00f74();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10894c5ac; end: 10894c5cb;  */

void FUN_10894c5ac(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x000108a00f74();
  }
  return;
}


