/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004d23d8; end: 004d264b;  */

void FUN_004d23d8(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong unaff_x23;
  float fVar12;
  qword qStack_70;
  qword qStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_3);
  FUN_004d264c();
  FUN_0047c764(&qStack_70,param_3);
  _objc_release(param_3);
  uVar11 = (ulong)param_2;
  uVar9 = *(ulong *)(lVar10 + 0x38);
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar9 <= uVar11) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar11 / uVar9;
        }
        unaff_x23 = uVar11 - uVar7 * uVar9;
      }
    }
    plVar5 = *(long **)(*(long *)(lVar10 + 0x30) + unaff_x23 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_004d24b8;
          uVar7 = plVar5[1];
          if (uVar7 != uVar11) break;
          if (*(int *)(plVar5 + 2) == param_2) goto LAB_004d25f8;
        }
        if ((uVar9 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar9 <= uVar7) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar7 / uVar9;
          }
          uVar7 = uVar7 - uVar2 * uVar9;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_004d24b8:
  pcVar3 = segment_command_00000020.segname + 8;
  __Znwm();
  puVar1 = (undefined8 *)(lVar10 + 0x40);
  uStack_48 = 1;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  *(ulong *)(pcVar3 + 8) = uVar11;
  *(int *)(pcVar3 + 0x10) = param_2;
  *(undefined8 *)(pcVar3 + 0x28) = uStack_60;
  *(qword *)(pcVar3 + 0x20) = qStack_68;
  *(qword *)(pcVar3 + 0x18) = qStack_70;
  qStack_70 = 0;
  qStack_68 = 0;
  uStack_60 = 0;
  fVar12 = (float)(*(long *)(lVar10 + 0x48) + 1);
  pcStack_58 = pcVar3;
  puStack_50 = puVar1;
  if ((uVar9 == 0) || (*(float *)(lVar10 + 0x50) * (float)uVar9 < fVar12)) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)(fVar12 / *(float *)(lVar10 + 0x50));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    func_0x004c4060(lVar10 + 0x30,uVar4);
    uVar9 = *(ulong *)(lVar10 + 0x38);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar9 <= uVar11) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar11 / uVar9;
        }
        unaff_x23 = uVar11 - uVar4 * uVar9;
      }
    }
  }
  lVar6 = *(long *)(lVar10 + 0x30);
  puVar8 = *(undefined8 **)(lVar6 + unaff_x23 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    *(undefined8 *)pcStack_58 = *puVar1;
    *puVar1 = pcStack_58;
    *(undefined8 **)(lVar6 + unaff_x23 * 8) = puVar1;
    if (*(long *)pcStack_58 != 0) {
      uVar11 = *(ulong *)(*(long *)pcStack_58 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar11 = uVar11 & uVar9 - 1;
      }
      else if (uVar9 <= uVar11) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar11 / uVar9;
        }
        uVar11 = uVar11 - uVar4 * uVar9;
      }
      *(char **)(lVar6 + uVar11 * 8) = pcStack_58;
    }
  }
  else {
    *(undefined8 *)pcStack_58 = *puVar8;
    *puVar8 = pcStack_58;
  }
  pcStack_58 = (char *)0x0;
  *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + 1;
  func_0x004c4488(&pcStack_58);
LAB_004d25f8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&qStack_70);
  return;
}



/* Entry: 004d264c; end: 004d2683;  */

undefined8 FUN_004d264c(undefined8 param_1)

{
  _objc_retain();
  func_0x007871a0(param_1);
  FUN_004d26b0();
  return param_1;
}



/* Entry: 004d2684; end: 004d26af;  */

void FUN_004d2684(undefined8 param_1,undefined8 param_2)

{
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004d26b0; end: 004d26cb;  */

void FUN_004d26b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004d26cc; end: 004d276f; -[SCNMessagingTweaks initWithTweaks:] */

undefined1 * FUN_004d26cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR__OBJC_CLASS___SCNMessagingTweaks_00ac3e88;
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



/* Entry: 004d2770; end: 004d2777; -[SCNMessagingTweaks tweaks] */

undefined8 FUN_004d2770(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004d2778; end: 004d277f; -[SCNMessagingTweaks setTweaks:] */

void FUN_004d2778(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004d2780; end: 004d278b; -[SCNMessagingTweaks .cxx_destruct] */

void FUN_004d2780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004d278c; end: 004d27fb;  */

void FUN_004d278c(undefined8 *param_1,undefined8 param_2)

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



/* Entry: 004d27fc; end: 004d285b;  */

void FUN_004d27fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCNMessagingUUID_00ac2fe8;
  _objc_alloc(PTR__OBJC_CLASS___SCNMessagingUUID_00ac2fe8);
  FUN_004cde2c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00785860(puVar1,param_2,param_1);
  FUN_004d285c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004d285c; end: 004d2867;  */

void FUN_004d285c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004d2868; end: 004d28f3; -[SCNMessagingUUID initWithId:] */

undefined1 * FUN_004d2868(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x004d2a7c();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_00abbf70);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00780e20();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x004d2a74();
  return puVar1;
}



/* Entry: 004d28f4; end: 004d29d3; -[SCNMessagingUUID isEqual:] */

undefined8 FUN_004d28f4(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x004d2a7c();
  _objc_opt_class(PTR__OBJC_CLASS___SCNMessagingUUID_00ac2fe8);
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
    func_0x004d2a74();
  }
  func_0x004d2a74();
  return uVar2;
}



/* Entry: 004d29d4; end: 004d2a57; -[SCNMessagingUUID hash] */

ulong FUN_004d29d4(ulong param_1)

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
  func_0x004d2a8c();
  func_0x004d2a74();
  return param_1 ^ uVar1;
}



/* Entry: 004d2a58; end: 004d2a5f; -[SCNMessagingUUID id] */

undefined8 FUN_004d2a58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004d2a60; end: 004d2a67; -[SCNMessagingUUID setId:] */

void FUN_004d2a60(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004d2a68; end: 004d2a93; -[SCNMessagingUUID .cxx_destruct] */

void FUN_004d2a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004d2a94; end: 004d2af7;  */

ulong FUN_004d2a94(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x007890c0(param_1);
  uVar2 = param_1;
  func_0x00793840(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 004d2af8; end: 004d2b43; -[SCNMessagingVideoDescription initWithMediaQualityType:videoPlaybackType:] */

void FUN_004d2af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3e98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 004d2b44; end: 004d2b4b; -[SCNMessagingVideoDescription mediaQualityType] */

undefined8 FUN_004d2b44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004d2b4c; end: 004d2b53; -[SCNMessagingVideoDescription setMediaQualityType:] */

void FUN_004d2b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 004d2b54; end: 004d2b5b; -[SCNMessagingVideoDescription videoPlaybackType] */

undefined8 FUN_004d2b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004d2b5c; end: 004d2b63; -[SCNMessagingVideoDescription setVideoPlaybackType:] */

void FUN_004d2b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 004d2b64; end: 004d2beb;  */

void FUN_004d2b64(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x004d3550();
  *unaff_x19 = &PTR_FUN_009efe70;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004d3504();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x004d3428();
  }
  unaff_x19[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x004d3428();
  }
  unaff_x19[4] = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  unaff_x19[8] = *(undefined8 *)(unaff_x20 + 0x40);
  unaff_x19[7] = uVar4;
  unaff_x19[6] = uVar3;
  unaff_x19[5] = uVar2;
  return;
}



/* Entry: 004d2bec; end: 004d2c1b;  */

long FUN_004d2bec(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d2c1c(param_1);
  return param_1;
}



/* Entry: 004d2c1c; end: 004d2c53;  */

void FUN_004d2c1c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d2c54; end: 004d2c57;  */

long FUN_004d2c54(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d2c1c(param_1);
  return param_1;
}



/* Entry: 004d2c58; end: 004d2c6b;  */

void FUN_004d2c58(void)

{
  FUN_004d2bec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d2c6c; end: 004d2c77;  */

undefined ** FUN_004d2c6c(void)

{
  return &PTR_DAT_009eff00;
}



/* Entry: 004d2c78; end: 004d2cdb;  */

void FUN_004d2c78(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 004d2cdc; end: 004d2ebf;  */

segment_command *
FUN_004d2cdc(segment_command *param_1,segment_command *param_2,segment_command *param_3)

{
  uint uVar1;
  dword *pdVar2;
  segment_command *psVar3;
  segment_command *psVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  psVar3 = param_1;
  if (param_1->fileoff != 0) {
    psVar4 = param_1;
    func_0x004d34b4();
    psVar3 = (segment_command *)&MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,psVar4);
    func_0x004d34a8();
    param_2 = psVar3;
  }
  uVar1 = *(dword *)((long)param_1->segname + 8);
  if ((uVar1 & 1) != 0) {
    psVar3 = (segment_command *)((long)&MACH_HEADER.magic + 2);
    func_0x004d351c(2,param_1->vmaddr,*(undefined4 *)(param_1->vmaddr + 0x18));
    param_2 = psVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    psVar3 = (segment_command *)((long)&MACH_HEADER.magic + 3);
    func_0x004d351c(3,param_1->vmsize,*(undefined4 *)(param_1->vmsize + 0x18));
    param_2 = psVar3;
  }
  psVar4 = psVar3;
  if (param_1->filesize != 0) {
    func_0x004d34b4();
    psVar4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar3);
    func_0x004d34a8();
    param_2 = psVar4;
  }
  lVar5._0_4_ = param_1->maxprot;
  lVar5._4_4_ = param_1->initprot;
  psVar3 = psVar4;
  if (lVar5 != 0) {
    func_0x004d34b4();
    psVar3 = (segment_command *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,psVar4);
    func_0x004d34a8();
    param_2 = psVar3;
  }
  lVar8._0_4_ = param_1->nsects;
  lVar8._4_4_ = param_1->flags;
  if (lVar8 != 0) {
    func_0x004d34b4();
    param_2 = (segment_command *)(segment_command_00000020.segname + 8);
    func_0x00487cbc(0x30,psVar3);
    func_0x004d34a8();
  }
  if ((*(ulong *)param_1->segname & 1) != 0) {
    uVar9 = *(ulong *)param_1->segname & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar9 + 8);
      uVar6 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      lVar5 = uVar9 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        uVar7 = param_3->cmd;
        iVar11 = (uVar7 - (int)param_2) + 0x10;
        iVar10 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar10 - iVar11);
        if (iVar10 - iVar11 == 0 || iVar10 < iVar11) break;
        func_0x0054f690();
        pdVar2 = (dword *)param_2->segname;
        param_2 = param_3;
        func_0x0054ed58(param_3,(undefined1 *)((long)pdVar2 + (long)iVar11 + -8));
      }
      func_0x0054f690();
      return (segment_command *)((long)param_2->segname + (long)iVar10 + -8);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (segment_command *)((long)param_2->segname + (long)(int)uVar6 + -8);
  }
  return param_2;
}



/* Entry: 004d2ec0; end: 004d2ed7;  */

void FUN_004d2ec0(void)

{
  func_0x004d9cac();
  func_0x004d34e8();
  return;
}



/* Entry: 004d2ed8; end: 004d2edb;  */

void FUN_004d2ed8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d2edc; end: 004d2fdb;  */

void FUN_004d2edc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d2fdc; end: 004d300f;  */

void FUN_004d2fdc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x004d3564();
  FUN_004d2c78();
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x004d3428(uVar3,*(undefined8 *)(unaff_x19 + 0x18));
        *(ulong *)(unaff_x20 + 0x18) = uVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
        func_0x004d3428(uVar3,*(undefined8 *)(unaff_x19 + 0x20));
        *(ulong *)(unaff_x20 + 0x20) = uVar3;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    *(long *)(unaff_x20 + 0x28) = *(long *)(unaff_x19 + 0x28);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    *(long *)(unaff_x20 + 0x30) = *(long *)(unaff_x19 + 0x30);
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    *(long *)(unaff_x20 + 0x38) = *(long *)(unaff_x19 + 0x38);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    *(long *)(unaff_x20 + 0x40) = *(long *)(unaff_x19 + 0x40);
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d3010; end: 004d301f;  */

undefined1  [16] FUN_004d3010(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x004d3524();
  puVar1 = param_1 + 0x30;
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



/* Entry: 004d3020; end: 004d3083;  */

void FUN_004d3020(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar2;
  
  func_0x004d3550();
  *unaff_x19 = &PTR_FUN_009efec0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004d3504();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x004d3468();
  }
  unaff_x19[3] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  unaff_x19[5] = *(undefined8 *)(unaff_x20 + 0x28);
  unaff_x19[4] = uVar2;
  return;
}



/* Entry: 004d3084; end: 004d30b3;  */

long FUN_004d3084(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d30b4(param_1);
  return param_1;
}



/* Entry: 004d30b4; end: 004d30cf;  */

void FUN_004d30b4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004f0520();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d30d0; end: 004d30d3;  */

long FUN_004d30d0(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d30b4(param_1);
  return param_1;
}



/* Entry: 004d30d4; end: 004d30e7;  */

void FUN_004d30d4(void)

{
  FUN_004d3084();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d30e8; end: 004d30f3;  */

undefined ** FUN_004d30e8(void)

{
  return &PTR_DAT_009eff50;
}



/* Entry: 004d30f4; end: 004d313f;  */

void FUN_004d30f4(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_004f05c0(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004d3140; end: 004d31f7;  */

dword * FUN_004d3140(dword *param_1,dword *param_2,dword *param_3)

{
  undefined1 *puVar1;
  dword *pdVar2;
  dword *pdVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  pdVar2 = param_1;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    pdVar2 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x004d351c(1,*(long *)(param_1 + 6),*(undefined4 *)(*(long *)(param_1 + 6) + 0x14));
    param_2 = pdVar2;
  }
  pdVar3 = pdVar2;
  if (*(long *)(param_1 + 8) != 0) {
    func_0x004d34b4();
    pdVar3 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,pdVar2);
    func_0x004d34a8();
    param_2 = pdVar3;
  }
  if (*(long *)(param_1 + 10) != 0) {
    func_0x004d34b4();
    param_2 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,pdVar3);
    func_0x004d34a8();
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar8);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 004d31f8; end: 004d3273;  */

void FUN_004d31f8(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  int extraout_w9;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_004d3274();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x004d34cc(0xfffffff7);
    iVar1 = extraout_w9 + iVar1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x004d3570();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 004d3274; end: 004d328b;  */

void FUN_004d3274(void)

{
  FUN_004f0844();
  func_0x004d34e8();
  return;
}



/* Entry: 004d328c; end: 004d328f;  */

void FUN_004d328c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x004d3468(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_004f097c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d3290; end: 004d333b;  */

void FUN_004d3290(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x004d3468(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_004f097c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d333c; end: 004d336f;  */

void FUN_004d333c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x004d3564();
  FUN_004d30f4();
  uVar2 = *(ulong *)(unaff_x20 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
      func_0x004d3468(uVar2,*(undefined8 *)(unaff_x19 + 0x18));
      *(ulong *)(unaff_x20 + 0x18) = uVar2;
    }
    else {
      FUN_004f097c(*(long *)(unaff_x20 + 0x18));
    }
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x19 + 0x20);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    *(long *)(unaff_x20 + 0x28) = *(long *)(unaff_x19 + 0x28);
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d3370; end: 004d338f;  */

undefined1  [16] FUN_004d3370(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x004d3524();
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



/* Entry: 004d3390; end: 004d34a7;  */

void FUN_004d3390(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.fileoff;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x48);
  }
  *pqVar1 = (qword)&PTR_FUN_009efe70;
  pqVar1[1] = (qword)param_1;
  pqVar1[3] = 0;
  pqVar1[2] = 0;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  pqVar1[7] = 0;
  pqVar1[6] = 0;
  pqVar1[8] = 0;
  return;
}



/* Entry: 004d34a8; end: 004d35b7;  */

void FUN_004d34a8(byte *param_1)

{
  ulong unaff_x21;
  
  for (; 0x7f < unaff_x21; unaff_x21 = unaff_x21 >> 7) {
    *param_1 = (byte)unaff_x21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_x21;
  return;
}



/* Entry: 004d35b8; end: 004d35df;  */

long FUN_004d35b8(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 004d35e0; end: 004d362b;  */

undefined8 * FUN_004d35e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009effd8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x004d3584(param_1,param_3);
  return param_1;
}



/* Entry: 004d362c; end: 004d362f;  */

long FUN_004d362c(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 004d3630; end: 004d3643;  */

void FUN_004d3630(void)

{
  FUN_004d35b8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d3644; end: 004d3663;  */

undefined ** FUN_004d3644(void)

{
  return &PTR_DAT_009f0018;
}



/* Entry: 004d3664; end: 004d370f;  */

dword * FUN_004d3664(dword *param_1,dword *param_2,dword *param_3)

{
  dword *pdVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  pdVar2 = param_1;
  if (*(long *)(param_1 + 4) != 0) {
    pdVar1 = param_1;
    func_0x004d37d0();
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,pdVar1);
    func_0x004d37dc();
    param_2 = pdVar2;
  }
  if (*(long *)(param_1 + 6) != 0) {
    func_0x004d37d0();
    param_2 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,pdVar2);
    func_0x004d37dc();
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar3);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 004d3710; end: 004d377f;  */

ulong FUN_004d3710(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 004d3780; end: 004d37c7;  */

void FUN_004d3780(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009effd8;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 004d37c8; end: 004d37e7;  */

void FUN_004d37c8(void)

{
  return;
}



/* Entry: 004d37e8; end: 004d38cf;  */

undefined8 * FUN_004d37e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f0080;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x00487c6c(lVar2,param_2);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x004d3ec8(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004d3f0c(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x48);
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 004d38d0; end: 004d3903;  */

long FUN_004d38d0(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d3904(param_1);
  return param_1;
}



/* Entry: 004d3904; end: 004d3963;  */

void FUN_004d3904(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d6e78();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00516630();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d3964; end: 004d3967;  */

long FUN_004d3964(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d3904(param_1);
  return param_1;
}



/* Entry: 004d3968; end: 004d397b;  */

void FUN_004d3968(void)

{
  FUN_004d38d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d397c; end: 004d3987;  */

undefined ** FUN_004d397c(void)

{
  return &PTR_DAT_009f00c0;
}



/* Entry: 004d3988; end: 004d3a1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004d3988(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_00532fa8(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004d6f0c(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x005166c8(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 004d3a1c; end: 004d3bbb;  */

segment_command *
FUN_004d3a1c(segment_command *param_1,segment_command *param_2,segment_command *param_3)

{
  uint uVar1;
  qword *pqVar2;
  undefined8 uVar3;
  segment_command *psVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  segment_command *psVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  
  uVar1 = *(dword *)((long)param_1->segname + 8);
  psVar4 = param_1;
  if ((uVar1 & 1) != 0) {
    psVar4 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    FUN_004d3f50(1,param_1->vmsize,*(undefined4 *)(param_1->vmsize + 0x18));
    param_2 = psVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    psVar4 = (segment_command *)((long)&MACH_HEADER.magic + 2);
    FUN_004d3f50(2,param_1->fileoff,*(undefined4 *)(param_1->fileoff + 0x1c));
    param_2 = psVar4;
  }
  psVar10 = psVar4;
  if ((char)param_1->nsects == '\x01') {
    func_0x004d3f5c();
    psVar10 = (segment_command *)(ulong)(byte)param_1->nsects;
    uVar3 = 0x18;
    func_0x00487cbc(0x18,psVar4);
    func_0x00487cbc(psVar10,uVar3);
    param_2 = psVar10;
  }
  psVar4 = psVar10;
  if (param_1->flags != 0) {
    func_0x004d3f5c();
    psVar4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar10);
    func_0x004d3f8c();
    param_2 = psVar4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    psVar4 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
    FUN_004d3f50(5,param_1->filesize,*(undefined4 *)(param_1->filesize + 0x18));
    param_2 = psVar4;
  }
  puVar12 = (undefined8 *)(param_1->vmaddr & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar12 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar12[1];
    if (lVar6 == 0) goto LAB_004d3b2c;
    puVar5 = (undefined8 *)*puVar12;
  }
  else {
    puVar5 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) == '\0') goto LAB_004d3b2c;
  }
  FUN_0054ddb8(puVar5,lVar6,1,"snapchat.messaging.AdConversationMetadata.chat_headline");
  psVar4 = param_3;
  FUN_00435e9c(param_3,6,puVar12,param_2);
  param_2 = psVar4;
LAB_004d3b2c:
  if ((uVar1 >> 3 & 1) != 0) {
    psVar4 = (segment_command *)&MACH_HEADER.cpusubtype;
    FUN_004d3f50(8,*(long *)&param_1->maxprot,*(undefined4 *)(*(long *)&param_1->maxprot + 0x2c));
    param_2 = psVar4;
  }
  if (param_1[1].cmd != 0) {
    func_0x004d3f5c();
    param_2 = (segment_command *)&segment_command_00000020.fileoff;
    func_0x00487cbc(0x48,psVar4);
    func_0x004d3f8c();
  }
  if ((*(ulong *)param_1->segname & 1) != 0) {
    uVar9 = *(ulong *)param_1->segname & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar9 + 8);
      uVar7 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      lVar6 = uVar9 + 8;
    }
    if ((long)(*(qword *)param_3 - (long)param_2) < (long)(int)uVar7) {
      while( true ) {
        uVar8 = param_3->cmd;
        iVar13 = (uVar8 - (int)param_2) + 0x10;
        iVar11 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar11 - iVar13);
        if (iVar11 - iVar13 == 0 || iVar11 < iVar13) break;
        func_0x0054f690();
        pqVar2 = (qword *)param_2->segname;
        param_2 = param_3;
        func_0x0054ed58(param_3,(undefined1 *)((long)pqVar2 + (long)iVar13 + -8));
      }
      func_0x0054f690();
      return (segment_command *)((long)param_2->segname + (long)iVar11 + -8);
    }
    _memcpy(param_2,lVar6,uVar7 & 0xffffffff);
    return (segment_command *)((long)param_2->segname + (long)(int)uVar7 + -8);
  }
  return param_2;
}



/* Entry: 004d3bbc; end: 004d3ccf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004d3bbc(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar4 + 0x17) < '\0') {
    if (*(long *)(uVar4 + 8) == 0) goto LAB_004d3bf8;
  }
  else if (*(char *)(uVar4 + 0x17) == '\0') {
LAB_004d3bf8:
    iVar3 = 0;
    goto LAB_004d3bfc;
  }
  FUN_0048910c();
  iVar3 = (int)uVar4 + 1;
LAB_004d3bfc:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_004d2ec0();
      iVar3 = iVar3 + iVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d6fe0(*(undefined8 *)(param_1 + 0x28));
      func_0x004d3f68();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
      FUN_004d2ec0();
      iVar3 = iVar3 + iVar2 + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_00516834(*(undefined8 *)(param_1 + 0x38));
      func_0x004d3f68();
    }
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x40) * 2;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x44)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 004d3cd0; end: 004d3cd3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004d3cd0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x004d3428(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x004d3ec8(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x004d6e44();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        func_0x004d3428(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x004d3f0c(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x005165b4();
      }
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d3cd4; end: 004d3e5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004d3cd4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x004d3428(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x004d3ec8(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x004d6e44();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        func_0x004d3428(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x004d3f0c(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x005165b4();
      }
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d3e60; end: 004d3e67;  */

void FUN_004d3e60(undefined8 param_1,qword *param_2)

{
  qword *pqVar1;
  
  if (param_2 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.filesize;
    __Znwm();
  }
  else {
    pqVar1 = param_2;
    func_0x005510c4(param_2,0x50);
  }
  *pqVar1 = (qword)&PTR_FUN_009f0080;
  pqVar1[1] = (qword)param_2;
  pqVar1[2] = 0;
  pqVar1[3] = (qword)&DAT_00b69408;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  pqVar1[7] = 0;
  pqVar1[6] = 0;
  *(undefined8 *)((long)pqVar1 + 0x44) = 0;
  *(undefined8 *)((long)pqVar1 + 0x3c) = 0;
  return;
}



/* Entry: 004d3e68; end: 004d3f4f;  */

void FUN_004d3e68(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.filesize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x50);
  }
  *pqVar1 = (qword)&PTR_FUN_009f0080;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = 0;
  pqVar1[3] = (qword)&DAT_00b69408;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  pqVar1[7] = 0;
  pqVar1[6] = 0;
  *(undefined8 *)((long)pqVar1 + 0x44) = 0;
  *(undefined8 *)((long)pqVar1 + 0x3c) = 0;
  return;
}



/* Entry: 004d3f50; end: 004d3fa3;  */

void FUN_004d3f50(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x00487c24();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x00487cbc(uVar1,unaff_x19);
  func_0x00487cbc(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0054db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 004d3fa4; end: 004d4027;  */

undefined8 * FUN_004d3fa4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_009f0138;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    param_3 = param_3 + 0x10;
    func_0x00487c6c(param_3,param_2);
    param_1[2] = param_3;
  }
  else if (iVar1 == 1) {
    param_1[2] = *(undefined8 *)(param_3 + 0x10);
  }
  return param_1;
}



/* Entry: 004d4028; end: 004d4057;  */

long FUN_004d4028(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d4058(param_1);
  return param_1;
}



/* Entry: 004d4058; end: 004d406b;  */

void FUN_004d4058(long param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      func_0x00532f74(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  return;
}



/* Entry: 004d406c; end: 004d407f;  */

void FUN_004d406c(void)

{
  FUN_004d4028();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d4080; end: 004d40b3;  */

void FUN_004d4080(long param_1)

{
  if (*(int *)(param_1 + 0x1c) == 2) {
    func_0x00532f74(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 004d40b4; end: 004d40bf;  */

undefined ** FUN_004d40b4(void)

{
  return &PTR_DAT_009f0178;
}



/* Entry: 004d40c0; end: 004d40f7;  */

void FUN_004d40c0(long param_1)

{
  ulong *puVar1;
  
  FUN_004d4080();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004d40f8; end: 004d41ef;  */

long * FUN_004d40f8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)puVar9 + 0x17);
    puVar3 = puVar9;
    if (lVar4 < 0) {
      lVar4 = puVar9[1];
      puVar3 = (undefined8 *)*puVar9;
    }
    FUN_0054ddb8(puVar3,lVar4,1,"snapchat.messaging.ReactionType.emoji");
    plVar7 = param_3;
    FUN_00435e9c(param_3,2,puVar9,param_2);
  }
  else {
    plVar7 = param_2;
    if (*(int *)(param_1 + 0x1c) == 1) {
      plVar1 = param_3;
      func_0x00487c24(param_3,param_2);
      if (*(int *)(param_1 + 0x1c) == 1) {
        plVar7 = *(long **)(param_1 + 0x10);
      }
      else {
        plVar7 = (long *)0x0;
      }
      uVar2 = 8;
      func_0x00487cbc(8,plVar1);
      func_0x00487cf0(plVar7,uVar2);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar7 < (long)(int)uVar5) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar7) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x0054f690();
        lVar4 = (long)plVar7 + (long)iVar10;
        plVar7 = param_3;
        func_0x0054ed58(param_3,lVar4);
      }
      func_0x0054f690();
      return (long *)((long)plVar7 + (long)iVar8);
    }
    _memcpy(plVar7,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar7 + (long)(int)uVar5);
  }
  return plVar7;
}



/* Entry: 004d41f0; end: 004d4273;  */

void FUN_004d41f0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10) & 0xfffffffc;
    FUN_0048910c();
    uVar1 = uVar1 + 1;
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = (int)LZCOUNT(*(undefined8 *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6;
  }
  else {
    uVar1 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = (int)lVar2 + uVar1;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 004d4274; end: 004d4277;  */

void FUN_004d4274(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_004d4080(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if (iVar2 == 2) {
      if (iVar3 != 2) {
        *(undefined **)(param_1 + 0x10) = &DAT_00b69408;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 2) {
        puVar1 = &DAT_00b69408;
      }
      func_0x00532e08(param_1 + 0x10,puVar1,uVar4);
    }
    else if (iVar2 == 1) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d4278; end: 004d4357;  */

void FUN_004d4278(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_004d4080(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if (iVar2 == 2) {
      if (iVar3 != 2) {
        *(undefined **)(param_1 + 0x10) = &DAT_00b69408;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 2) {
        puVar1 = &DAT_00b69408;
      }
      func_0x00532e08(param_1 + 0x10,puVar1,uVar4);
    }
    else if (iVar2 == 1) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d4358; end: 004d435f;  */

void FUN_004d4358(undefined8 param_1,segment_command *param_2)

{
  segment_command *psVar1;
  
  if (param_2 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_2;
    func_0x005510c4(param_2,0x20);
  }
  *(undefined ***)psVar1 = &PTR_DAT_009f0138;
  *(segment_command **)psVar1->segname = param_2;
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 004d4360; end: 004d43a3;  */

void FUN_004d4360(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_DAT_009f0138;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 004d43a4; end: 004d43b7;  */

void FUN_004d43a4(void)

{
  return;
}



/* Entry: 004d43b8; end: 004d4467;  */

undefined8 * FUN_004d43b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f02d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004d5260();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x004d50e0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_004d5124(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_3 + 0x38);
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 004d4468; end: 004d4493;  */

undefined8 FUN_004d4468(undefined8 param_1)

{
  func_0x004d528c();
  FUN_004d4494(param_1);
  return param_1;
}



/* Entry: 004d4494; end: 004d44db;  */

void FUN_004d4494(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d4a28();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d4e98();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d44dc; end: 004d44df;  */

undefined8 FUN_004d44dc(undefined8 param_1)

{
  func_0x004d528c();
  FUN_004d4494(param_1);
  return param_1;
}



/* Entry: 004d44e0; end: 004d44f3;  */

void FUN_004d44e0(void)

{
  FUN_004d4468();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d44f4; end: 004d44ff;  */

undefined ** FUN_004d44f4(void)

{
  return &PTR_DAT_009f0310;
}



/* Entry: 004d4500; end: 004d45a7;  */

void FUN_004d4500(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004d4574(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004d45a8(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 004d45a8; end: 004d45bb;  */

void FUN_004d45a8(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004d45bc; end: 004d475f;  */

segment_command *
FUN_004d45bc(segment_command *param_1,undefined8 param_2,ulong param_3,segment_command *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long extraout_x8;
  segment_command *unaff_x19;
  long unaff_x20;
  segment_command *psVar5;
  int iVar6;
  int iVar7;
  
  func_0x004d5250();
  uVar1 = *(uint *)(param_1->segname + 8);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    func_0x004d52b4();
    param_4 = param_1;
  }
  psVar5 = param_1;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x004d523c();
    psVar5 = *(segment_command **)(unaff_x20 + 0x30);
    uVar2 = 0x10;
    func_0x00487cbc(0x10,param_1);
    func_0x00487cf0(psVar5,uVar2);
    param_4 = psVar5;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    psVar5 = (segment_command *)((long)&MACH_HEADER.magic + 3);
    func_0x004d52b4();
    param_4 = psVar5;
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    func_0x004d523c();
    param_4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar5);
    func_0x004d5278();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
    func_0x004d52b4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d52d8();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        uVar4 = unaff_x19->cmd;
        iVar7 = (uVar4 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (segment_command *)(param_4->segname + (long)iVar6 + -8);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (segment_command *)(param_4->segname + (long)(int)param_3 + -8);
  }
  return param_4;
}



/* Entry: 004d4760; end: 004d478f;  */

void FUN_004d4760(void)

{
  FUN_004d4b1c();
  func_0x004d5220();
  return;
}



/* Entry: 004d4790; end: 004d4793;  */

void FUN_004d4790(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004d52e4();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar2 = unaff_x22;
        func_0x004d3428(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar2 = unaff_x22;
        func_0x004d50e0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar2;
      }
      else {
        func_0x004d4890();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        FUN_004d5124(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = unaff_x22;
      }
      else {
        FUN_004d493c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}


