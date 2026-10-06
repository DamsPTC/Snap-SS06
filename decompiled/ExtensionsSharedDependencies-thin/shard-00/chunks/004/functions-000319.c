/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0063d590; end: 0063d5e3; -[SCNShimsSystemScope .cxx_destruct] */

void FUN_0063d590(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0bf78;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_0063d694((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0063d5e4; end: 0063d627; -[SCNShimsSystemScope .cxx_construct] */

undefined8 * FUN_0063d5e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_0063d6c0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063d628; end: 0063d693;  */

void FUN_0063d628(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac3690;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_0063d6c0();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_0063d694(&uStack_30);
  return;
}



/* Entry: 0063d694; end: 0063d6bf;  */

long FUN_0063d694(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063d6c0; end: 0063d70f;  */

void FUN_0063d6c0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 0063d710; end: 0063d77f;  */

void FUN_0063d710(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00784560();
  _objc_retainAutoreleasedReturnValue();
  FUN_004cddac(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  FUN_0040d974(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 0063d780; end: 0063d78b;  */

void FUN_0063d780(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0063d78c; end: 0063d867; -[SCNShimsBuildIdentifier initWithBinaryName:identifier:] */

undefined1 *
FUN_0063d78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4590;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0063d868; end: 0063d86f; -[SCNShimsBuildIdentifier binaryName] */

undefined8 FUN_0063d868(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0063d870; end: 0063d877; -[SCNShimsBuildIdentifier identifier] */

undefined8 FUN_0063d870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063d878; end: 0063d8a7; -[SCNShimsBuildIdentifier .cxx_destruct] */

void FUN_0063d878(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063d8a8; end: 0063d983; -[SCNShimsCOFOverride initWithName:config:] */

undefined1 *
FUN_0063d8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4598;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0063d984; end: 0063d98b; -[SCNShimsCOFOverride name] */

undefined8 FUN_0063d984(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0063d98c; end: 0063d993; -[SCNShimsCOFOverride config] */

undefined8 FUN_0063d98c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063d994; end: 0063d9c3; -[SCNShimsCOFOverride .cxx_destruct] */

void FUN_0063d994(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063d9c4; end: 0063da67; -[SCNShimsCOFOverrides initWithOverrides:] */

undefined1 * FUN_0063d9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac45a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0063da68; end: 0063da6f; -[SCNShimsCOFOverrides overrides] */

undefined8 FUN_0063da68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0063da70; end: 0063da7b; -[SCNShimsCOFOverrides .cxx_destruct] */

void FUN_0063da70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063da7c; end: 0063db67; -[SCNShimsError initWithErrorDomain:errorCode:errorDescription:] */

undefined1 *
FUN_0063da7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac45a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0063db68; end: 0063db6f; -[SCNShimsError errorDomain] */

undefined8 FUN_0063db68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0063db70; end: 0063db77; -[SCNShimsError errorCode] */

undefined8 FUN_0063db70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063db78; end: 0063db7f; -[SCNShimsError errorDescription] */

undefined8 FUN_0063db78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0063db80; end: 0063dbaf; -[SCNShimsError .cxx_destruct] */

void FUN_0063db80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063dbb0; end: 0063dcb7; -[SCNShimsErrorDescription initWithCategory:code:message:stacktrace:timestamp:logRequest:] */

undefined1 *
FUN_0063dbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_00ac45b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 0063dcb8; end: 0063dcbf; -[SCNShimsErrorDescription category] */

undefined8 FUN_0063dcb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063dcc0; end: 0063dcc7; -[SCNShimsErrorDescription code] */

undefined8 FUN_0063dcc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0063dcc8; end: 0063dccf; -[SCNShimsErrorDescription message] */

undefined8 FUN_0063dcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0063dcd0; end: 0063dcd7; -[SCNShimsErrorDescription stacktrace] */

undefined8 FUN_0063dcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0063dcd8; end: 0063dcdf; -[SCNShimsErrorDescription timestamp] */

undefined8 FUN_0063dcd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0063dce0; end: 0063dce7; -[SCNShimsErrorDescription logRequest] */

undefined1 FUN_0063dce0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0063dce8; end: 0063dd17; -[SCNShimsErrorDescription .cxx_destruct] */

void FUN_0063dce8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 0063dd18; end: 0063dd63; -[SCNShimsPlatformParameters initWithAssertionMode:minLogLevel:] */

void FUN_0063dd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR__OBJC_CLASS___SCNShimsPlatformParameters_00ac45b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 0063dd64; end: 0063dd6b; -[SCNShimsPlatformParameters assertionMode] */

undefined8 FUN_0063dd64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0063dd6c; end: 0063dd73; -[SCNShimsPlatformParameters minLogLevel] */

undefined8 FUN_0063dd6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063dd74; end: 0063ddbf; -[SCNShimsSchedulerPriorityConfig initWithDefaultThreadCount:niceValue:] */

void FUN_0063dd74(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac45c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 0063ddc0; end: 0063ddc7; -[SCNShimsSchedulerPriorityConfig defaultThreadCount] */

undefined4 FUN_0063ddc0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 0063ddc8; end: 0063ddcf; -[SCNShimsSchedulerPriorityConfig niceValue] */

undefined4 FUN_0063ddc8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 0063ddd0; end: 0063df27; -[SCNShimsSchedulerPriorityMapping initWithInteractive:foreground:favored:background:idle:] */

undefined1 *
FUN_0063ddd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_00ac45c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0063df28; end: 0063df2f; -[SCNShimsSchedulerPriorityMapping interactive] */

undefined8 FUN_0063df28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0063df30; end: 0063df37; -[SCNShimsSchedulerPriorityMapping foreground] */

undefined8 FUN_0063df30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063df38; end: 0063df3f; -[SCNShimsSchedulerPriorityMapping favored] */

undefined8 FUN_0063df38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0063df40; end: 0063df47; -[SCNShimsSchedulerPriorityMapping background] */

undefined8 FUN_0063df40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0063df48; end: 0063df4f; -[SCNShimsSchedulerPriorityMapping idle] */

undefined8 FUN_0063df48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0063df50; end: 0063df93; -[SCNShimsSchedulerPriorityMapping .cxx_destruct] */

void FUN_0063df50(long param_1)

{
  FUN_0063df94(param_1 + 0x28);
  FUN_0063df94(param_1 + 0x20);
  FUN_0063df94(param_1 + 0x18);
  FUN_0063df94(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063df94; end: 0063df9b;  */

void FUN_0063df94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 0063df9c; end: 0063e027; -[SCNShimsUUID initWithId:] */

undefined1 * FUN_0063df9c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x0063e1a8();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_00abbf70);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00780e20();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x0063e1a0();
  return puVar1;
}



/* Entry: 0063e028; end: 0063e107; -[SCNShimsUUID isEqual:] */

undefined8 FUN_0063e028(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x0063e1a8();
  _objc_opt_class(PTR_PTR_00ac3698);
  uVar1 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain();
    func_0x00784560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00784560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x20;
    func_0x00787860(unaff_x20);
    _objc_release(unaff_x19);
    _objc_release(unaff_x20);
    func_0x0063e1a0();
  }
  func_0x0063e1a0();
  return uVar2;
}



/* Entry: 0063e108; end: 0063e18b; -[SCNShimsUUID hash] */

ulong FUN_0063e108(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x007843a0();
  func_0x00784560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x007843a0();
  func_0x0063e1b8();
  func_0x0063e1a0();
  return param_1 ^ uVar1;
}



/* Entry: 0063e18c; end: 0063e193; -[SCNShimsUUID id] */

undefined8 FUN_0063e18c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0063e194; end: 0063e1bf; -[SCNShimsUUID .cxx_destruct] */

void FUN_0063e194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063e1c0; end: 0063e28b;  */

void FUN_0063e1c0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  code *pcStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_58 = 0x63e62c;
  ppuStack_50 = &PTR_DAT_00a0bf88;
  pcStack_48 = FUN_0063e28c;
  FUN_00641d6c(&uStack_58,0);
  (*(code *)*ppuStack_50)();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_50;
  (*(code *)*ppuStack_50)();
  func_0x0063e650();
  if (((ulong)pppuVar5[10] & 1) == 0) {
    puVar6 = auStack_a8;
    FUN_00425cb4(puVar6,&UNK_0090fa2b);
  }
  else {
    ppuStack_100 = pppuVar5[9];
    uStack_f8 = 0;
    puVar6 = &UNK_0090fa22;
    func_0x00461914(&UNK_0090fa22);
    FUN_00721c60(auStack_a8);
  }
  FUN_0063e668();
  bVar2 = *(byte *)(pppuVar5 + 1);
  (*(code *)(*pppuVar5)[2])(pppuVar5);
  FUN_00425cb4(&uStack_118,pppuVar5);
  uVar7 = 3;
  FUN_006acd74(&uStack_130);
  FUN_006ad008();
  uStack_c8 = uStack_120;
  ppuStack_100 = (undefined **)CONCAT44(ppuStack_100._4_4_,2);
  uStack_e8 = uStack_110;
  uStack_f0 = uStack_118;
  uStack_e0 = uStack_108;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_d0 = uStack_128;
  uStack_d8 = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_b8 = 1;
  uStack_f8 = (ulong)bVar2;
  uStack_c0 = uVar7;
  FUN_0063e7a8(puVar6,&ppuStack_100);
  FUN_004c9848(&ppuStack_100);
  func_0x0063e658();
  func_0x0063e660();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  return;
}



/* Entry: 0063e28c; end: 0063e3c7;  */

void FUN_0063e28c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_48 [24];
  
  if ((*(uint *)(param_1 + 10) & 1) == 0) {
    puVar2 = auStack_48;
    FUN_00425cb4(puVar2,&UNK_0090fa2b);
  }
  else {
    lStack_a0 = param_1[9];
    uStack_98 = 0;
    puVar2 = &UNK_0090fa22;
    func_0x00461914(&UNK_0090fa22);
    FUN_00721c60(auStack_48);
  }
  FUN_0063e668();
  bVar1 = *(byte *)(param_1 + 1);
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00425cb4(&uStack_b8,param_1);
  uVar3 = 3;
  FUN_006acd74(&uStack_d0);
  FUN_006ad008();
  uStack_68 = uStack_c0;
  lStack_a0 = CONCAT44(lStack_a0._4_4_,2);
  uStack_88 = uStack_b0;
  uStack_90 = uStack_b8;
  uStack_80 = uStack_a8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_70 = uStack_c8;
  uStack_78 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_58 = 1;
  uStack_98 = (ulong)bVar1;
  uStack_60 = uVar3;
  FUN_0063e7a8(puVar2,&lStack_a0);
  FUN_004c9848(&lStack_a0);
  func_0x0063e658();
  func_0x0063e660();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 0063e3c8; end: 0063e427;  */

void FUN_0063e3c8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  FUN_0063e668();
  FUN_0063e710();
  func_0x0063e6bc();
  FUN_0063e710();
  FUN_0063e428();
  uStack_28 = param_1;
  func_0x0063e4e0(0xb24b10,&uStack_28);
  return;
}



/* Entry: 0063e428; end: 0063e51b;  */

undefined8 FUN_0063e428(void)

{
  int iVar1;
  
  if ((bRam0000000000b24b08 & 1) == 0) {
    iVar1 = 0xb24b08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000b24af8 = 0;
      uRam0000000000b24b00 = 0;
      ___cxa_guard_release(0xb24b08);
    }
  }
  return 0xb24af8;
}



/* Entry: 0063e51c; end: 0063e53b;  */

void FUN_0063e51c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)**(long **)*param_1;
  *puVar1 = *(undefined8 *)(*(long **)*param_1)[1];
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}



/* Entry: 0063e53c; end: 0063e62b;  */

void FUN_0063e53c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x0063e6bc();
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_70 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  uStack_58 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  auStack_90[0] = 0xe;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  FUN_0063e7a8();
  FUN_004c9848(auStack_90);
  func_0x0063e658();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  return;
}



/* Entry: 0063e62c; end: 0063e667;  */

void FUN_0063e62c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0063e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 0063e668; end: 0063e70f;  */

undefined8 FUN_0063e668(void)

{
  int iVar1;
  
  if ((bRam0000000000b6c628 & 1) == 0) {
    iVar1 = 0xb6c628;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000b6c618 = 0;
      uRam0000000000b6c620 = 0;
      ___cxa_guard_release(0xb6c628);
    }
  }
  return 0xb6c618;
}



/* Entry: 0063e710; end: 0063e767;  */

void FUN_0063e710(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0063e768(param_1,&uStack_30);
  FUN_0063e84c();
  return;
}



/* Entry: 0063e768; end: 0063e7a7;  */

void FUN_0063e768(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00779f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_00998c80)(puVar1);
  return;
}



/* Entry: 0063e7a8; end: 0063e7f7;  */

void FUN_0063e7a8(undefined8 param_1,undefined8 param_2)

{
  long *aplStack_30 [2];
  
  FUN_0063e7f8(aplStack_30);
  if (aplStack_30[0] != (long *)0x0) {
    (**(code **)(*aplStack_30[0] + 0x10))(aplStack_30[0],param_2);
  }
  FUN_0063e84c();
  return;
}



/* Entry: 0063e7f8; end: 0063e84b;  */

void FUN_0063e7f8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00779f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_00998c80)(puVar4);
  return;
}



/* Entry: 0063e84c; end: 0063e86b;  */

void FUN_0063e84c(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0063e86c; end: 0063e8af;  */

void FUN_0063e86c(long *param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  FUN_0063e8b0(&lStack_30);
  lVar1 = 0;
  if (lStack_30 != 0) {
    lVar1 = lStack_30 + 0x40;
  }
  *param_1 = lVar1;
  param_1[1] = lStack_28;
  lStack_30 = 0;
  lStack_28 = 0;
  FUN_0063f0b4(&lStack_30);
  return;
}



/* Entry: 0063e8b0; end: 0063e8cf;  */

void FUN_0063e8b0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0063ef78(&uStack_11,param_1);
  return;
}



/* Entry: 0063e8d0; end: 0063e993;  */

undefined8 * FUN_0063e8d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  undefined4 uStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_34 = 0;
  puVar1 = param_1;
  FUN_0064ba00();
  FUN_0063e994(&uStack_30,&UNK_0090fa2f,&uStack_34,puVar1);
  *param_1 = &PTR_DAT_00a0cb68;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[7] = lStack_28;
  param_1[6] = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0063f3c4();
    } while (extraout_w10 != 0);
  }
  func_0x0045a078(&uStack_30);
  *param_1 = &PTR_FUN_00a0bfb0;
  param_1[8] = &PTR_DAT_00a0bff0;
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0063f3c4();
    } while (extraout_w10_00 != 0);
  }
  return param_1;
}



/* Entry: 0063e994; end: 0063e9bb;  */

void FUN_0063e994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_0063f0dc(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 0063e9bc; end: 0063ea13;  */

void FUN_0063e9bc(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_00a0bfb0;
  param_1[8] = &PTR_DAT_00a0bff0;
  FUN_00649f80(auStack_30);
  FUN_0063bd90(auStack_30);
  func_0x0063f310();
  FUN_0063b20c(param_1 + 9);
  FUN_00649f38(param_1);
  return;
}



/* Entry: 0063ea14; end: 0063ea1f;  */

void FUN_0063ea14(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_00a0bfb0;
  param_1[8] = &PTR_DAT_00a0bff0;
  FUN_00649f80(auStack_30);
  FUN_0063bd90(auStack_30);
  func_0x0063f310();
  FUN_0063b20c(param_1 + 9);
  FUN_00649f38(param_1);
  return;
}



/* Entry: 0063ea20; end: 0063ea33;  */

void FUN_0063ea20(void)

{
  FUN_0063e9bc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063ea34; end: 0063ea3b;  */

void FUN_0063ea34(long param_1)

{
  FUN_0063e9bc(param_1 + -0x40);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063ea3c; end: 0063eabf;  */

void FUN_0063ea3c(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0063eb8c(auStack_58);
  FUN_0063eac0(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x50);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  FUN_0063b20c(&uStack_30);
  func_0x0063eb0c(auStack_58,&uStack_30);
  FUN_0063edd4(auStack_58);
  return;
}



/* Entry: 0063eac0; end: 0063eb2b;  */

void FUN_0063eac0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x0063f310();
  return;
}



/* Entry: 0063eb2c; end: 0063eb8b;  */

void FUN_0063eb2c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0063f350();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_FUN_009e2c70;
    FUN_0063ee38();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0063b6c4(unaff_x19 + 0x18);
  func_0x0063b6c4((long *)(param_1 + 8));
  return;
}



/* Entry: 0063eb8c; end: 0063ebaf;  */

void FUN_0063eb8c(undefined8 *param_1)

{
  FUN_0063ebb0();
  *param_1 = &PTR_FUN_00a0c070;
  return;
}



/* Entry: 0063ebb0; end: 0063ebef;  */

void FUN_0063ebb0(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x0063f350();
  func_0x0063ec04(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x0063f3c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 0063ebf0; end: 0063ec1f;  */

void FUN_0063ebf0(void)

{
  FUN_0063edd4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063ec20; end: 0063ec23;  */

void FUN_0063ec20(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0063f350();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_FUN_009e2c70;
    FUN_0063ee38();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0063b6c4(unaff_x19 + 0x18);
  func_0x0063b6c4((long *)(param_1 + 8));
  return;
}



/* Entry: 0063ec24; end: 0063ec37;  */

void FUN_0063ec24(void)

{
  FUN_0063edd4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063ec38; end: 0063ecc7;  */

undefined1 * FUN_0063ec38(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x0063f2d0();
  uVar3 = 1;
  FUN_0063ecc8();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_00a0c0d8;
  puStack_30[1] = 0;
  puStack_30[4] = 0x3cb0b1bb;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[9] = 0;
  puStack_30[10] = 0x32aaaba7;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x13] = 0;
  func_0x0063f2e8();
  FUN_0063edc4();
  func_0x0063f2b8();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_0063ecf0();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 0063ecc8; end: 0063ecef;  */

long FUN_0063ecc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0063ecf0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0063ecf0; end: 0063ed1b;  */

void FUN_0063ecf0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x19999999999999a) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0xa0);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_00a0c0d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063ed1c; end: 0063ed1f;  */

void FUN_0063ed1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c0d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063ed20; end: 0063ed33;  */

void FUN_0063ed20(void)

{
  func_0x0063ed40();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063ed34; end: 0063ed53;  */

long FUN_0063ed34(long param_1)

{
  func_0x0063ed90(param_1 + 0x98);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 0063ed54; end: 0063edc3;  */

long FUN_0063ed54(long param_1)

{
  func_0x0063ed90(param_1 + 0x80);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x78);
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  __ZNSt3__118condition_variableD1Ev(param_1 + 8);
  return param_1;
}



/* Entry: 0063edc4; end: 0063edd3;  */

void FUN_0063edc4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0063edd4; end: 0063ee37;  */

void FUN_0063edd4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0063f350();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_FUN_009e2c70;
    FUN_0063ee38();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0063b6c4(unaff_x19 + 0x18);
  func_0x0063b6c4((long *)(param_1 + 8));
  return;
}



/* Entry: 0063ee38; end: 0063eea3;  */

void FUN_0063ee38(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_FUN_009e2c70;
  FUN_0040cf24(auStack_28,&ppuStack_30);
  FUN_0063eea4(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 0063eea4; end: 0063eec3;  */

void FUN_0063eea4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_0063eec4(param_1,&uStack_18);
  return;
}



/* Entry: 0063eec4; end: 0063ef63;  */

void FUN_0063eec4(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x0063f340();
  func_0x0063f398();
  func_0x0063b6c4(auStack_40);
  func_0x0063f310();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x38);
  FUN_0063ef64(param_2,alStack_30);
  func_0x0063f320(alStack_30[0]);
  if (param_2 == (long *)0x0) {
    func_0x0063f368();
  }
  else {
    func_0x0063f38c(*(undefined8 *)(*param_2 + 0x10));
    func_0x0063f2a8();
  }
  func_0x0063f330();
  return;
}



/* Entry: 0063ef64; end: 0063ef77;  */

void FUN_0063ef64(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00779a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__00998900)(*param_2 + 0x78,*param_1);
  return;
}



/* Entry: 0063ef78; end: 0063efdb;  */

undefined1 * FUN_0063ef78(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x0063f2d0();
  FUN_0063efdc(auStack_40,1);
  FUN_0063f034();
  func_0x0063f2e8();
  func_0x0063f0a4();
  func_0x0063f2b8();
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0063f0a4();
  func_0x0063f338();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_0063f004();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 0063efdc; end: 0063f003;  */

long FUN_0063efdc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0063f004();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0063f004; end: 0063f033;  */

undefined8 * FUN_0063f004(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x24924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0c020;
  FUN_0063e8d0(param_1 + 3);
  return param_1;
}



/* Entry: 0063f034; end: 0063f06b;  */

undefined8 * FUN_0063f034(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0c020;
  FUN_0063e8d0(param_1 + 3);
  return param_1;
}



/* Entry: 0063f06c; end: 0063f06f;  */

void FUN_0063f06c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c020;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063f070; end: 0063f083;  */

void FUN_0063f070(void)

{
  func_0x0063f094();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063f084; end: 0063f0b3;  */

void FUN_0063f084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0063f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0063f0b4; end: 0063f0db;  */

long FUN_0063f0b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}


