/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004cfe08; end: 004cfeab; -[SCNMessagingMediaReferenceList initWithMediaReferences:] */

undefined1 * FUN_004cfe08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3e60;
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



/* Entry: 004cfeac; end: 004cfeb3; -[SCNMessagingMediaReferenceList mediaReferences] */

undefined8 FUN_004cfeac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004cfeb4; end: 004cfebb; -[SCNMessagingMediaReferenceList setMediaReferences:] */

void FUN_004cfeb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004cfebc; end: 004cfec7; -[SCNMessagingMediaReferenceList .cxx_destruct] */

void FUN_004cfebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004cfec8; end: 004cff8f;  */

void FUN_004cfec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00780d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004cff90(auStack_48);
  func_0x00791d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004d00e0(auStack_60);
  FUN_004d0230(param_1,auStack_48,auStack_60);
  FUN_004d0258(auStack_60);
  func_0x004d08a4();
  func_0x004bd57c(auStack_48);
  _objc_release(uVar1);
  func_0x004d0880();
  return;
}



/* Entry: 004cff90; end: 004d00df;  */

void FUN_004cff90(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_2b8 [88];
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  func_0x004d0888();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00780e80();
  FUN_004d0338();
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar5 = unaff_x19;
  _objc_retain();
  func_0x004d0874();
  if (puVar5 != (undefined1 *)0x0) {
    lVar3 = *plStack_110;
    do {
      puVar4 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation();
        }
        func_0x004d0900(uStack_118);
        FUN_004d278c(auStack_138);
        func_0x004bd120();
        puVar1 = auStack_138;
        FUN_0040d974();
        func_0x004d08a4();
        puVar4 = puVar4 + 1;
        in_ZR = puVar4 == puVar5;
      } while (puVar4 < puVar5);
      func_0x004d0874();
      puVar5 = puVar1;
    } while (puVar1 != (undefined1 *)0x0);
  }
  func_0x004d0880();
  func_0x004d0880();
  func_0x004d08d4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x004d0880();
  func_0x004bd57c();
  func_0x004d0880();
  func_0x004d08ec();
  func_0x004d0888();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00780e80();
  FUN_004d03bc();
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  _objc_retain();
  puVar2 = &uStack_260;
  func_0x004d0874();
  if (unaff_x19 != (undefined1 *)0x0) {
    lVar3 = *plStack_250;
    do {
      puVar5 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar3) {
          _objc_enumerationMutation();
        }
        func_0x004d0900(uStack_258);
        FUN_004d1b10(auStack_2b8);
        func_0x004d0718();
        puVar4 = auStack_2b8;
        func_0x004d0308();
        func_0x004d08a4();
        puVar5 = puVar5 + 1;
        in_ZR = puVar5 == unaff_x19;
      } while (puVar5 < unaff_x19);
      puVar2 = &uStack_260;
      func_0x004d0874();
      unaff_x19 = puVar4;
    } while (puVar4 != (undefined1 *)0x0);
  }
  func_0x004d0880();
  func_0x004d0880();
  func_0x004d08d4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x004d0880();
  FUN_004d0258();
  func_0x004d0880();
  func_0x004d08ec();
  func_0x004d0920();
  uVar6 = *puVar2;
  unaff_x20[4] = puVar2[1];
  unaff_x20[3] = uVar6;
  unaff_x20[5] = puVar2[2];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return;
}



/* Entry: 004d00e0; end: 004d022f;  */

void FUN_004d00e0(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [88];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  func_0x004d0888();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00780e80();
  FUN_004d03bc();
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain();
  puVar2 = &uStack_120;
  func_0x004d0874();
  if (unaff_x19 != (undefined1 *)0x0) {
    lVar3 = *plStack_110;
    do {
      puVar4 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation();
        }
        func_0x004d0900(uStack_118);
        FUN_004d1b10(auStack_178);
        func_0x004d0718();
        puVar1 = auStack_178;
        func_0x004d0308();
        func_0x004d08a4();
        puVar4 = puVar4 + 1;
        in_ZR = puVar4 == unaff_x19;
      } while (puVar4 < unaff_x19);
      puVar2 = &uStack_120;
      func_0x004d0874();
      unaff_x19 = puVar1;
    } while (puVar1 != (undefined1 *)0x0);
  }
  func_0x004d0880();
  func_0x004d0880();
  func_0x004d08d4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x004d0880();
  FUN_004d0258();
  func_0x004d0880();
  func_0x004d08ec();
  func_0x004d0920();
  uVar5 = *puVar2;
  unaff_x20[4] = puVar2[1];
  unaff_x20[3] = uVar5;
  unaff_x20[5] = puVar2[2];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return;
}



/* Entry: 004d0230; end: 004d0257;  */

void FUN_004d0230(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x004d0920();
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 004d0258; end: 004d02c7;  */

undefined8 FUN_004d0258(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x004d028c(&uStack_28);
  return param_1;
}



/* Entry: 004d02c8; end: 004d02cf;  */

void FUN_004d02c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    func_0x004d0308();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 004d02d0; end: 004d0337;  */

void FUN_004d02d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x58;
    func_0x004d0308();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 004d0338; end: 004d03bb;  */

void FUN_004d0338(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long extraout_x9;
  long extraout_x9_00;
  long lVar2;
  undefined1 auStack_98 [40];
  undefined1 auStack_48 [40];
  
  func_0x004d094c();
  if ((undefined8 *)(extraout_x9 / 0x18) < param_2) {
    if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
      FUN_004bd32c(auStack_48);
      FUN_004bd29c(param_1,auStack_48);
      func_0x004bd510(auStack_48);
    }
    else {
      FUN_004bd320();
      func_0x004bd510();
      func_0x004d090c();
      func_0x004d094c();
      if ((undefined8 *)(extraout_x9_00 / 0x58) < param_2) {
        if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
          FUN_004d0434();
          func_0x004d08ac();
          func_0x004d090c();
          pcVar1 = "vector";
          FUN_0040d774();
          lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x58) * 0x58;
          FUN_004d0574((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),
                       lVar2);
          param_2[1] = lVar2;
          lVar2 = *(long *)pcVar1;
          *(long *)((long)pcVar1 + 8) = lVar2;
          *(undefined8 *)pcVar1 = param_2[1];
          param_2[1] = lVar2;
          lVar2 = *(long *)((long)pcVar1 + 8);
          *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
          param_2[2] = lVar2;
          lVar2 = *(long *)((long)pcVar1 + 0x10);
          *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
          param_2[3] = lVar2;
          *param_2 = param_2[1];
          return;
        }
        FUN_004d04d4(auStack_98);
        func_0x004d08f4();
        func_0x004d08ac();
      }
    }
  }
  return;
}



/* Entry: 004d03bc; end: 004d0433;  */

void FUN_004d03bc(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long extraout_x9;
  long lVar2;
  undefined1 auStack_48 [40];
  
  func_0x004d094c();
  if ((undefined8 *)(extraout_x9 / 0x58) < param_2) {
    if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
      FUN_004d0434();
      func_0x004d08ac();
      func_0x004d090c();
      pcVar1 = "vector";
      FUN_0040d774();
      lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x58) * 0x58;
      FUN_004d0574((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_004d04d4(auStack_48);
    func_0x004d08f4();
    func_0x004d08ac();
  }
  return;
}



/* Entry: 004d0434; end: 004d0447;  */

void FUN_004d0434(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  FUN_0040d774();
  lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x58) * 0x58;
  FUN_004d0574((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 004d0448; end: 004d04d3;  */

void FUN_004d0448(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_004d0574(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 004d04d4; end: 004d0543;  */

long * FUN_004d04d4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004d0520();
  }
  lVar1 = param_4 + param_3 * 0x58;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x58;
  return param_1;
}



/* Entry: 004d0544; end: 004d0573;  */

void FUN_004d0544(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x58);
    return;
  }
  FUN_0040cee8();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x58) {
    FUN_004d0600(param_4,uVar1);
    param_4 = lStack_48 + 0x58;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x004d0308(param_2);
  }
  FUN_004d0668(&uStack_70);
  return;
}



/* Entry: 004d0574; end: 004d05ff;  */

void FUN_004d0574(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x58) {
    FUN_004d0600(param_4,lVar1);
    param_4 = lStack_38 + 0x58;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x004d0308(param_2);
  }
  FUN_004d0668(&uStack_60);
  return;
}



/* Entry: 004d0600; end: 004d0667;  */

void FUN_004d0600(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x004d0920();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* Entry: 004d0668; end: 004d06d7;  */

long FUN_004d0668(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x58;
      func_0x004d0308();
    }
  }
  return param_1;
}



/* Entry: 004d06d8; end: 004d06df;  */

void FUN_004d06d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x004d0308();
  }
  return;
}



/* Entry: 004d06e0; end: 004d077b;  */

void FUN_004d06e0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x004d0308();
  }
  return;
}



/* Entry: 004d077c; end: 004d0813;  */

long FUN_004d077c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_004d0814(param_1,(param_1[1] - *param_1) / 0x58 + 1);
  FUN_004d04d4(auStack_58,plVar1,(param_1[1] - *param_1) / 0x58,param_1 + 2);
  FUN_004d0600(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x58;
  func_0x004d08f4();
  lVar2 = param_1[1];
  func_0x004d08ac();
  return lVar2;
}



/* Entry: 004d0814; end: 004d0873;  */

ulong FUN_004d0814(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x2e8ba2e8ba2e8ba < param_2) {
    FUN_004d0434();
                    /* WARNING: Could not recover jumptable at 0x00780eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    uVar2 = 0x2e8ba2e8ba2e8ba;
  }
  return uVar2;
}



/* Entry: 004d0874; end: 004d095f;  */

void FUN_004d0874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00780eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 004d0960; end: 004d0a3b; -[SCNMessagingMessageDestinationsLite initWithConversations:stories:] */

undefined1 *
FUN_004d0960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3e68;
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



/* Entry: 004d0a3c; end: 004d0a43; -[SCNMessagingMessageDestinationsLite conversations] */

undefined8 FUN_004d0a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004d0a44; end: 004d0a4b; -[SCNMessagingMessageDestinationsLite setConversations:] */

void FUN_004d0a44(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004d0a4c; end: 004d0a53; -[SCNMessagingMessageDestinationsLite stories] */

undefined8 FUN_004d0a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004d0a54; end: 004d0a5b; -[SCNMessagingMessageDestinationsLite setStories:] */

void FUN_004d0a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004d0a5c; end: 004d0a8b; -[SCNMessagingMessageDestinationsLite .cxx_destruct] */

void FUN_004d0a5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004d0a8c; end: 004d0b03; -[SCNMessagingStatelessSession initWithCpp:] */

undefined1 * FUN_004d0a8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR__OBJC_CLASS___SCNMessagingStatelessSession_00ac3e70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x004d1414();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_004d13c8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 004d0b04; end: 004d0ce7; +[SCNMessagingStatelessSession create:authContextDelegate:queue:grapheneLogger:] */

void FUN_004d0b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined **appuStack_110 [2];
  long lStack_100;
  long lStack_f8;
  long lStack_60;
  long lStack_58;
  
  func_0x004d140c();
  func_0x004d1468();
  func_0x004d1450();
  _objc_retain(param_6);
  FUN_004d1484(&lStack_100,param_3);
  FUN_005d3690(appuStack_110,param_4);
  FUN_006395d0(auStack_120,param_5);
  FUN_00515f50(auStack_130,param_6);
  FUN_004bfc80(&lStack_60,&lStack_100,appuStack_110,auStack_120,auStack_130);
  func_0x0045eb8c(auStack_130);
  FUN_0045e4e4(auStack_120);
  FUN_00466d48(appuStack_110);
  FUN_004c3b2c(&lStack_100);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_110[0] = &PTR_DAT_009efd28;
    lStack_100 = lStack_60;
    lStack_f8 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x004d1414();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_110;
    FUN_00718534(pppuVar1,&lStack_100,FUN_004d1354);
    _objc_retainAutoreleasedReturnValue();
    FUN_0047df30(&lStack_100);
  }
  FUN_004d13c8(&lStack_60);
  _objc_release(param_6);
  func_0x004d13fc();
  func_0x004d1404();
  func_0x004d13f4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(pppuVar1);
  return;
}



/* Entry: 004d0ce8; end: 004d0dd3; -[SCNMessagingStatelessSession getConversationMetadata:] */

void FUN_004d0ce8(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [56];
  char cStack_38;
  
  func_0x004d140c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x004d147c(auStack_88);
  (**(code **)(*plVar1 + 0x10))(auStack_70,plVar1,auStack_88);
  FUN_0040d974(auStack_88);
  if (cStack_38 == '\x01') {
    puVar2 = auStack_70;
    FUN_004cd9b8(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_004d12dc(auStack_70);
  func_0x004d13f4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 004d0dd4; end: 004d0eff; -[SCNMessagingStatelessSession consumeMessagingPayloadOrSyncConversation:versionNumber:messagingPayloadBytes:callback:] */

void FUN_004d0dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x004d140c();
  func_0x004d1468();
  func_0x004d1450();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x004d147c(auStack_58);
  FUN_004cddac(auStack_70,param_5);
  FUN_004d1ea8(auStack_80,param_6);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_58,param_4,auStack_70,auStack_80);
  func_0x004c5344(auStack_80);
  FUN_0040d974(auStack_70);
  FUN_0040d974(auStack_58);
  func_0x004d13fc();
  func_0x004d1404();
  func_0x004d13f4();
  return;
}



/* Entry: 004d0f00; end: 004d1027; -[SCNMessagingStatelessSession sendMessageWithContent:messageContent:callback:] */

void FUN_004d0f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [88];
  undefined1 auStack_70 [48];
  
  func_0x004d140c();
  func_0x004d1468();
  func_0x004d1450();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_004cfec8(auStack_70,param_3);
  FUN_004ce220(auStack_c8,param_4);
  FUN_004cd3d4(auStack_d8,param_5);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_70,auStack_c8,auStack_d8);
  func_0x004c53b8(auStack_d8);
  FUN_004d12fc(auStack_c8);
  func_0x004d132c(auStack_70);
  func_0x004d13fc();
  func_0x004d1404();
  func_0x004d13f4();
  return;
}



/* Entry: 004d1028; end: 004d110b; -[SCNMessagingStatelessSession extractMessage:messageId:] */

void FUN_004d1028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  func_0x004d140c();
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_004cddac(auStack_70,param_3);
  (**(code **)(*plVar2 + 0x28))(auStack_58,plVar2,auStack_70,param_4);
  func_0x004d143c();
  puVar1 = auStack_58;
  FUN_004cdff0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_004bb774(auStack_50);
  func_0x004d13f4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004d110c; end: 004d116f; -[SCNMessagingStatelessSession setDebugMode:] */

void FUN_004d110c(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 004d1170; end: 004d1243; +[SCNMessagingStatelessSession createMediaReferenceKey:serverMessageId:mediaListIndex:mediaListId:] */

void FUN_004d1170(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x004d140c();
  func_0x004d147c(auStack_60);
  FUN_004c79d8(auStack_48,auStack_60,in_x3,in_x4,in_x5);
  func_0x004d143c();
  puVar1 = auStack_48;
  FUN_0047c844(puVar1);
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x004d13f4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004d1244; end: 004d1297; -[SCNMessagingStatelessSession .cxx_destruct] */

void FUN_004d1244(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_009efd28;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_004d13c8((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 004d1298; end: 004d12db; -[SCNMessagingStatelessSession .cxx_construct] */

undefined8 * FUN_004d1298(undefined8 *param_1)

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
      func_0x004d1414();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 004d12dc; end: 004d12fb;  */

void FUN_004d12dc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_0040d974();
  }
  return;
}



/* Entry: 004d12fc; end: 004d1353;  */

long FUN_004d12fc(long param_1)

{
  long lStack_28;
  
  FUN_004ce60c(param_1 + 0x38);
  func_0x004ce774(param_1 + 0x20);
  lStack_28 = param_1;
  FUN_0040d95c(&lStack_28);
  return param_1;
}



/* Entry: 004d1354; end: 004d13c7;  */

void FUN_004d1354(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___SCNMessagingStatelessSession_00ac3008;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x004d1414();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_004d13c8(&uStack_30);
  return;
}



/* Entry: 004d13c8; end: 004d13f3;  */

long FUN_004d13c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 004d13f4; end: 004d1483;  */

void FUN_004d13f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004d1484; end: 004d1623;  */

void FUN_004d1484(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x007933e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004d278c(auStack_68);
  uVar2 = param_2;
  func_0x00781f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004d1624(auStack_a0);
  uVar3 = param_2;
  func_0x007933a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(auStack_b8);
  uVar4 = param_2;
  func_0x007819c0(param_2);
  func_0x00792f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004d1684(auStack_e8);
  FUN_004d16e4(param_1,auStack_68,auStack_a0,auStack_b8,uVar4,auStack_e8);
  FUN_004c3b0c(auStack_e8);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  _objc_release(uVar3);
  FUN_004c3ac8(auStack_a0);
  _objc_release(uVar2);
  FUN_0040d974(auStack_68);
  _objc_release(uVar1);
  FUN_004d1878();
  return;
}



/* Entry: 004d1624; end: 004d1683;  */

void FUN_004d1624(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_50 [48];
  
  func_0x004d18b0();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x30] = 0;
  }
  else {
    FUN_004cdcd4(auStack_50);
    func_0x004d1840();
    FUN_004c3ae8(auStack_50);
  }
  func_0x004d1878();
  return;
}



/* Entry: 004d1684; end: 004d16e3;  */

void FUN_004d1684(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x004d18b0();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_004d2250(auStack_48);
    func_0x004d185c();
    func_0x004c3f30(auStack_48);
  }
  func_0x004d1878();
  return;
}



/* Entry: 004d16e4; end: 004d174f;  */

long FUN_004d16e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined1 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x004d1880();
  FUN_004d1750(lVar1 + 0x18,param_3);
  uVar3 = param_4[1];
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x60) = param_4[2];
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(param_1 + 0x68) = param_5;
  FUN_004d17e0(param_1 + 0x70,param_6);
  return param_1;
}



/* Entry: 004d1750; end: 004d177f;  */

undefined1 * FUN_004d1750(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_004d1780();
  return param_1;
}



/* Entry: 004d1780; end: 004d1793;  */

void FUN_004d1780(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_004d17b0();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 004d1794; end: 004d17af;  */

void FUN_004d1794(long param_1)

{
  FUN_004d17b0();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 004d17b0; end: 004d17df;  */

void FUN_004d17b0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x004d1880();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 004d17e0; end: 004d180f;  */

undefined1 * FUN_004d17e0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_004d1810();
  return param_1;
}



/* Entry: 004d1810; end: 004d1823;  */

void FUN_004d1810(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x004c4528();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 004d1824; end: 004d1877;  */

void FUN_004d1824(long param_1)

{
  func_0x004c4528();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 004d1878; end: 004d18bb;  */

void FUN_004d1878(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004d18bc; end: 004d1a07; -[SCNMessagingStatelessSessionParameters initWithUserId:deviceEncryptionKey:userAgentPrefix:debug:tweaks:] */

undefined1 *
FUN_004d18bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR__OBJC_CLASS___SCNMessagingStatelessSessionParameters_00ac3e78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004d1a08; end: 004d1a1b; -[SCNMessagingStatelessSessionParameters initWithUserId:userAgentPrefix:debug:] */

void FUN_004d1a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00786d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithUserId_deviceEncryptionK_00abc868,param_3,0,param_4,param_5,0);
  return;
}



/* Entry: 004d1a1c; end: 004d1a23; -[SCNMessagingStatelessSessionParameters userId] */

undefined8 FUN_004d1a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004d1a24; end: 004d1a43; -[SCNMessagingStatelessSessionParameters setUserId:] */

void FUN_004d1a24(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004d1af0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004d1a44; end: 004d1a4b; -[SCNMessagingStatelessSessionParameters deviceEncryptionKey] */

undefined8 FUN_004d1a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004d1a4c; end: 004d1a6b; -[SCNMessagingStatelessSessionParameters setDeviceEncryptionKey:] */

void FUN_004d1a4c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004d1af0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004d1a6c; end: 004d1a73; -[SCNMessagingStatelessSessionParameters userAgentPrefix] */

undefined8 FUN_004d1a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004d1a74; end: 004d1a7b; -[SCNMessagingStatelessSessionParameters setUserAgentPrefix:] */

void FUN_004d1a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004d1a7c; end: 004d1a83; -[SCNMessagingStatelessSessionParameters debug] */

undefined1 FUN_004d1a7c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 004d1a84; end: 004d1a8b; -[SCNMessagingStatelessSessionParameters setDebug:] */

void FUN_004d1a84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 004d1a8c; end: 004d1a93; -[SCNMessagingStatelessSessionParameters tweaks] */

undefined8 FUN_004d1a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004d1a94; end: 004d1ab3; -[SCNMessagingStatelessSessionParameters setTweaks:] */

void FUN_004d1a94(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004d1af0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004d1ab4; end: 004d1aef; -[SCNMessagingStatelessSessionParameters .cxx_destruct] */

void FUN_004d1ab4(long param_1)

{
  func_0x004d1b00(param_1 + 0x28);
  func_0x004d1b00(param_1 + 0x20);
  func_0x004d1b00(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 004d1af0; end: 004d1b0f;  */

void FUN_004d1af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 004d1b10; end: 004d1c4f;  */

void FUN_004d1b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  func_0x00791d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004d278c(auStack_58);
  uVar1 = param_2;
  func_0x00791d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004cddac(auStack_70);
  uVar2 = param_2;
  func_0x00791d80(param_2);
  func_0x00789080(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_90);
  FUN_004d1c50(param_1,auStack_58,auStack_70,uVar2,auStack_90);
  FUN_00457530(auStack_90);
  _objc_release(param_2);
  FUN_0040d974(auStack_70);
  _objc_release(uVar1);
  FUN_0040d974(auStack_58);
  func_0x004d1cd8();
  func_0x004d1cd0();
  return;
}



/* Entry: 004d1c50; end: 004d1cdf;  */

void FUN_004d1c50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[9] = param_5[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}



/* Entry: 004d1ce0; end: 004d1dfb; -[SCNMessagingStoryId initWithStoryId:storyData:storyType:mediaId:] */

undefined1 *
FUN_004d1ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac3e80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004d1dfc; end: 004d1e03; -[SCNMessagingStoryId initWithStoryId:storyData:storyType:] */

void FUN_004d1dfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithStoryId_storyData_storyT_00abc750);
  return;
}



/* Entry: 004d1e04; end: 004d1e0b; -[SCNMessagingStoryId storyId] */

undefined8 FUN_004d1e04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004d1e0c; end: 004d1e3b; -[SCNMessagingStoryId setStoryId:] */

void FUN_004d1e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004d1e3c; end: 004d1e43; -[SCNMessagingStoryId storyData] */

undefined8 FUN_004d1e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004d1e44; end: 004d1e4b; -[SCNMessagingStoryId setStoryData:] */

void FUN_004d1e44(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004d1e4c; end: 004d1e53; -[SCNMessagingStoryId storyType] */

undefined8 FUN_004d1e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004d1e54; end: 004d1e5b; -[SCNMessagingStoryId setStoryType:] */

void FUN_004d1e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 004d1e5c; end: 004d1e63; -[SCNMessagingStoryId mediaId] */

undefined8 FUN_004d1e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004d1e64; end: 004d1e6b; -[SCNMessagingStoryId setMediaId:] */

void FUN_004d1e64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004d1e6c; end: 004d1ea7; -[SCNMessagingStoryId .cxx_destruct] */

void FUN_004d1e6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004d1ea8; end: 004d1f5f;  */

void FUN_004d1ea8(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_009efd80;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_004d1f60);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_004d220c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 004d1f60; end: 004d205f;  */

void FUN_004d1f60(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_009efdc0;
  pqVar4[3] = (qword)&PTR_DAT_009efe40;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
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
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_009efe10;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_004d220c(&uStack_50);
  return;
}



/* Entry: 004d2060; end: 004d2063;  */

void FUN_004d2060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efdc0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004d2064; end: 004d2077;  */

void FUN_004d2064(void)

{
  FUN_004d21fc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d2078; end: 004d2083;  */

long FUN_004d2078(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009efd80;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 004d2084; end: 004d20c3;  */

void FUN_004d2084(void)

{
  func_0x004d2244();
  return;
}



/* Entry: 004d20c4; end: 004d212f;  */

void FUN_004d20c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_004cdbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789fe0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 004d2130; end: 004d2167;  */

void FUN_004d2130(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x0078a040(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 004d2168; end: 004d21fb;  */

long FUN_004d2168(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009efd80;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 004d21fc; end: 004d220b;  */

void FUN_004d21fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efdc0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004d220c; end: 004d2237;  */

long FUN_004d220c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 004d2238; end: 004d224f;  */

void FUN_004d2238(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)();
  return;
}



/* Entry: 004d2250; end: 004d22af;  */

void FUN_004d2250(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x00792f00();
  _objc_retainAutoreleasedReturnValue();
  FUN_004d22b0(auStack_48);
  func_0x004c4528(param_1,auStack_48);
  func_0x004c3f30(auStack_48);
  FUN_004d26b0();
  return;
}



/* Entry: 004d22b0; end: 004d23c3;  */

void FUN_004d22b0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  _objc_retain();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  pcStack_70 = FUN_004d23c4;
  uStack_68 = 0x4d23d0;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  fStack_38 = 1.0;
  uVar1 = param_2;
  func_0x00780e80(param_2);
  func_0x004c4060(&uStack_58,(long)((float)uVar1 / fStack_38));
  func_0x00782b60(param_2);
  FUN_004c3fcc(param_1,puStack_80 + 6);
  func_0x004d26c0();
  func_0x004c3f30(&uStack_58);
  func_0x004d26b0();
  return;
}



/* Entry: 004d23c4; end: 004d23d7;  */

void FUN_004d23c4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}


