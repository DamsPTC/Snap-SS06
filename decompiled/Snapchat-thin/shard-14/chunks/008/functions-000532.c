/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b652b14; end: 10b652b23; -[SCSnapchattersPublicInfo bitmojiInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652b14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791270);
}



/* Entry: 10b652b24; end: 10b652b33; -[SCSnapchattersPublicInfo snapProId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652b24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791274);
}



/* Entry: 10b652b34; end: 10b652b43; -[SCSnapchattersPublicInfo lastFetchedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652b34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791278);
}



/* Entry: 10b652b44; end: 10b652b53; -[SCSnapchattersPublicInfo tier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b652b44(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11279127c);
}



/* Entry: 10b652b54; end: 10b652b63; -[SCSnapchattersPublicInfo profileLogoUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652b54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791280);
}



/* Entry: 10b652b64; end: 10b652b73; -[SCSnapchattersPublicInfo isAiChatbot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b652b64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112791284);
}



/* Entry: 10b652b74; end: 10b652bf3; -[SCSnapchattersPublicInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b652b74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112791280,0);
  _objc_storeStrong(param_1 + _DAT_112791274,0);
  _objc_storeStrong(param_1 + _DAT_112791270,0);
  _objc_storeStrong(param_1 + _DAT_112791268,0);
  _objc_storeStrong(param_1 + _DAT_112791264,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791260,0);
  return;
}



/* Entry: 10b652bf4; end: 10b652d7f; -[SCSnapchattersPublisher initWithUserId:username:displayName:subtext:suggestionToken:thumbnailUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b652bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112707550;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791288);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791288) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279128c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279128c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791290);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791290) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791294);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791294) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791298);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791298) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279129c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279129c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b652d80; end: 10b652da3; -[SCSnapchattersPublisher copyWithZone:] */

undefined8 FUN_10b652d80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b652da4; end: 10b652e67; -[SCSnapchattersPublisher hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b652da4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791288);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279128c);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791290);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791294);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791298);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279129c);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b652f78:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b652f84;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791288);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112791288)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11279128c);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11279128c)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791290);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112791290)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791294);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112791294)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791298);
              if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112791298)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11279129c);
                if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11279129c)) {
                  func_0x00010c071ae0();
                  goto LAB_10b652f84;
                }
                goto LAB_10b652f78;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b652f84:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b652e68; end: 10b652f9f; -[SCSnapchattersPublisher isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b652e68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b652f78:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b652f84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112791288);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791288)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11279128c);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11279128c)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_112791290);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791290)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_112791294);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791294)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_112791298);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791298)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_11279129c);
                if (lVar3 != *(long *)(param_3 + (long)_DAT_11279129c)) {
                  func_0x00010c071ae0();
                  goto LAB_10b652f84;
                }
                goto LAB_10b652f78;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b652f84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b652fa0; end: 10b652faf; -[SCSnapchattersPublisher userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652fa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791288);
}



/* Entry: 10b652fb0; end: 10b652fbf; -[SCSnapchattersPublisher username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652fb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279128c);
}



/* Entry: 10b652fc0; end: 10b652fcf; -[SCSnapchattersPublisher displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652fc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791290);
}



/* Entry: 10b652fd0; end: 10b652fdf; -[SCSnapchattersPublisher subtext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652fd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791294);
}



/* Entry: 10b652fe0; end: 10b652fef; -[SCSnapchattersPublisher suggestionToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652fe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791298);
}



/* Entry: 10b652ff0; end: 10b652fff; -[SCSnapchattersPublisher thumbnailUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652ff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279129c);
}



/* Entry: 10b653000; end: 10b65307f; -[SCSnapchattersPublisher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b653000(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279129c,0);
  _objc_storeStrong(param_1 + _DAT_112791298,0);
  _objc_storeStrong(param_1 + _DAT_112791294,0);
  _objc_storeStrong(param_1 + _DAT_112791290,0);
  _objc_storeStrong(param_1 + _DAT_11279128c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791288,0);
  return;
}



/* Entry: 10b653080; end: 10b6530a3; -[SCSnapchatter copyWithZone:] */

undefined8 FUN_10b653080(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6530a4; end: 10b65324b; -[SCSnapchatter hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b6530a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912a0);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912a4);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912a8);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uStack_c8 = (ulong)*(byte *)(param_1 + _DAT_1127912ac);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912b0);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912b4);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912b8);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uStack_a8 = (ulong)*(byte *)(param_1 + _DAT_1127912bc);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912c0);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912c4);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912c8);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912cc);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912d0);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912d4);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912d8);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(uint *)(param_1 + _DAT_1127912dc);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912e0);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912e4);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912e8);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912ec);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127912f0);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127912f4);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_1127912f8);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_e0,0x17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined8 *)*(undefined1 **)((long)puVar3 + (long)_DAT_1127912a4);
}



/* Entry: 10b65324c; end: 10b65325b; -[SCSnapchatter username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b65324c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912a4);
}



/* Entry: 10b65325c; end: 10b6532c7; +[SCSnapchattersIdentitySummary groupSummaryWithGroupSummary:] */

void FUN_10b65325c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb220;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6532c8; end: 10b65332f; +[SCSnapchattersIdentitySummary snapchatterSummaryWithSnapchatterSummary:] */

void FUN_10b6532c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb220;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b653330; end: 10b653353; -[SCSnapchattersIdentitySummary copyWithZone:] */

undefined8 FUN_10b653330(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b653354; end: 10b6533cb; -[SCSnapchattersIdentitySummary hash] */

void FUN_10b653354(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112707560;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6533cc; end: 10b65340f; -[SCSnapchattersIdentitySummary internalInit] */

void FUN_10b6533cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112707560;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b653410; end: 10b6534c7; -[SCSnapchattersIdentitySummary isEqual:] */

long FUN_10b653410(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6534a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6534ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6534ac;
        }
        goto LAB_10b6534a0;
      }
    }
    lVar3 = 0;
  }
LAB_10b6534ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6534c8; end: 10b65354b; -[SCSnapchattersIdentitySummary matchSnapchatterSummary:groupSummary:] */

void FUN_10b6534c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 2) {
    if (param_4 == 0) goto LAB_10b653530;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 1 || param_3 == 0) goto LAB_10b653530;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b653530:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b65354c; end: 10b65357b; -[SCSnapchattersIdentitySummary .cxx_destruct] */

void FUN_10b65354c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b65357c; end: 10b65359b; -[SCSnapchattersIdentitySummary isSameSubtype:] */

bool FUN_10b65357c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10b65359c; end: 10b6535a3; -[SCSnapchattersIdentitySummary subtype] */

undefined8 FUN_10b65359c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6535a4; end: 10b65366f; -[SCSnapchattersIdentitySummary asSnapchatterSummary] */

void FUN_10b6535a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b653670;
  uStack_30 = 0x10b653680;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b653688;
  puStack_60 = &UNK_110d27338;
  puStack_48 = puStack_58;
  func_0x00010c0c0120(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110d27388);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b653670; end: 10b653687;  */

void FUN_10b653670(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b653688; end: 10b6536bf;  */

void FUN_10b653688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6536c0; end: 10b6536c3;  */

void FUN_10b6536c0(void)

{
  return;
}



/* Entry: 10b6536c4; end: 10b65378f; -[SCSnapchattersIdentitySummary asGroupSummary] */

void FUN_10b6536c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b653670;
  uStack_30 = 0x10b653680;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b653794;
  puStack_60 = &UNK_110d273c8;
  puStack_48 = puStack_58;
  func_0x00010c0c0120(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d273a8,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b653790; end: 10b653793;  */

void FUN_10b653790(void)

{
  return;
}



/* Entry: 10b653794; end: 10b6537cb;  */

void FUN_10b653794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6537cc; end: 10b6538df; -[SCSnapchattersSnapchatterSummary initWithBasicSummary:streakInfo:friendmojis:addedFriendTimestamp:reverseAddedFriendTimestamp:birthday:isStoryMuted:isFriendshipPending:] */

undefined1 *
FUN_10b6537cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112707568;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6538e0; end: 10b653903; -[SCSnapchattersSnapchatterSummary copyWithZone:] */

undefined8 FUN_10b6538e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b653904; end: 10b6539f3; -[SCSnapchattersSnapchatterSummary hash] */

undefined8 * FUN_10b653904(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar5 = &uStack_68;
  uStack_58 = uVar3;
  func_0x000107c3191c(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10b653b48:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b653b54;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((*(char *)(puVar5 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))))) {
      dVar11 = ABS((double)puVar5[5] - (double)param_3[5]);
      dVar10 = ABS((double)puVar5[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS((double)puVar5[6] - (double)param_3[6]);
        dVar10 = ABS((double)puVar5[6] + (double)param_3[6]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS((double)puVar5[7] - (double)param_3[7]);
          dVar10 = ABS((double)puVar5[7] + (double)param_3[7]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (((bVar2) &&
              ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0)))
              ) && ((lVar7 = puVar5[3], lVar7 == param_3[3] ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
            puVar9 = (undefined8 *)puVar5[4];
            if (puVar9 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b653b54;
            }
            goto LAB_10b653b48;
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10b653b54:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10b6539f4; end: 10b653b6f; -[SCSnapchattersSnapchatterSummary isEqual:] */

long FUN_10b6539f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b653b48:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b653b54;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
          dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (((bVar1) &&
              ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b653b54;
            }
            goto LAB_10b653b48;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b653b54:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b653b70; end: 10b653b77; -[SCSnapchattersSnapchatterSummary basicSummary] */

undefined8 FUN_10b653b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b653b78; end: 10b653b7f; -[SCSnapchattersSnapchatterSummary streakInfo] */

undefined8 FUN_10b653b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b653b80; end: 10b653b87; -[SCSnapchattersSnapchatterSummary friendmojis] */

undefined8 FUN_10b653b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b653b88; end: 10b653b8f; -[SCSnapchattersSnapchatterSummary addedFriendTimestamp] */

undefined8 FUN_10b653b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b653b90; end: 10b653b97; -[SCSnapchattersSnapchatterSummary reverseAddedFriendTimestamp] */

undefined8 FUN_10b653b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b653b98; end: 10b653b9f; -[SCSnapchattersSnapchatterSummary birthday] */

undefined8 FUN_10b653b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b653ba0; end: 10b653ba7; -[SCSnapchattersSnapchatterSummary isStoryMuted] */

undefined1 FUN_10b653ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b653ba8; end: 10b653baf; -[SCSnapchattersSnapchatterSummary isFriendshipPending] */

undefined1 FUN_10b653ba8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b653bb0; end: 10b653beb; -[SCSnapchattersSnapchatterSummary .cxx_destruct] */

void FUN_10b653bb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b653bec; end: 10b653cf7; -[SCSnapchattersSnapchatterBasicSummary initWithUserId:username:displayName:bitmojiInfo:] */

undefined1 *
FUN_10b653bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112707570;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b653cf8; end: 10b653d1b; -[SCSnapchattersSnapchatterBasicSummary copyWithZone:] */

undefined8 FUN_10b653cf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b653d1c; end: 10b653da7; -[SCSnapchattersSnapchatterBasicSummary hash] */

undefined8 * FUN_10b653d1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b653e58:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b653e64;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b653e64;
            }
            goto LAB_10b653e58;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b653e64:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b653da8; end: 10b653e7f; -[SCSnapchattersSnapchatterBasicSummary isEqual:] */

long FUN_10b653da8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b653e58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b653e64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b653e64;
            }
            goto LAB_10b653e58;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b653e64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b653e80; end: 10b653e87; -[SCSnapchattersSnapchatterBasicSummary userId] */

undefined8 FUN_10b653e80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b653e88; end: 10b653e8f; -[SCSnapchattersSnapchatterBasicSummary username] */

undefined8 FUN_10b653e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b653e90; end: 10b653e97; -[SCSnapchattersSnapchatterBasicSummary displayName] */

undefined8 FUN_10b653e90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b653e98; end: 10b653e9f; -[SCSnapchattersSnapchatterBasicSummary bitmojiInfo] */

undefined8 FUN_10b653e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b653ea0; end: 10b653ee7; -[SCSnapchattersSnapchatterBasicSummary .cxx_destruct] */

void FUN_10b653ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b653ee8; end: 10b653f8b; -[SCSnapchattersBitmojiInfo hash] */

undefined8 * FUN_10b653ee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined8 *)puVar3[1];
}



/* Entry: 10b653f8c; end: 10b653f93; -[SCSnapchattersBitmojiInfo bitmojiAvatarId] */

undefined8 FUN_10b653f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b653f94; end: 10b653f9b; -[SCSnapchattersBitmojiInfo bitmojiSelfieId] */

undefined8 FUN_10b653f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b653f9c; end: 10b653fa3; -[SCSnapchattersBitmojiInfo bitmojiSceneId] */

undefined8 FUN_10b653f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b653fa4; end: 10b653fab; -[SCSnapchattersBitmojiInfo bitmojiBackgroundId] */

undefined8 FUN_10b653fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b653fac; end: 10b653fb3; -[SCSnapchattersBitmojiInfo bitmojiBackgroundURL] */

undefined8 FUN_10b653fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b653fb4; end: 10b653fbb; -[SCSnapchattersBitmojiInfo bitmojiAvatarMetadata] */

undefined8 FUN_10b653fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b653fbc; end: 10b654013; -[SCSnapchattersSnapchatterStreakInfoSummary initWithCount:expirationTimestamp:] */

void FUN_10b653fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112707580;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 10b654014; end: 10b654037; -[SCSnapchattersSnapchatterStreakInfoSummary copyWithZone:] */

undefined8 FUN_10b654014(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b654038; end: 10b6540b7; -[SCSnapchattersSnapchatterStreakInfoSummary hash] */

long * FUN_10b654038(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  double dVar6;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  plVar2 = &lStack_28;
  func_0x000107c3191c(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if ((((ulong)plVar3 & 1) == 0) || (plVar2[1] != param_3[1])) {
        plVar5 = (long *)0x0;
      }
      else {
        dVar6 = ABS((double)plVar2[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        plVar5 = (long *)(ulong)(ABS((double)plVar2[2] - (double)param_3[2]) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b6540b8; end: 10b654173; -[SCSnapchattersSnapchatterStreakInfoSummary isEqual:] */

bool FUN_10b6540b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b654174; end: 10b65417b; -[SCSnapchattersSnapchatterStreakInfoSummary count] */

undefined8 FUN_10b654174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b65417c; end: 10b654183; -[SCSnapchattersSnapchatterStreakInfoSummary expirationTimestamp] */

undefined8 FUN_10b65417c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b654184; end: 10b654283; -[SCSnapchattersGroupSummary initWithGroupDisplayName:isStoryMuted:participants:hasUnexemptBlockedParticipants:profileLogo:shouldShowStar:] */

undefined1 *
FUN_10b654184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112707588;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b654284; end: 10b6542a7; -[SCSnapchattersGroupSummary copyWithZone:] */

undefined8 FUN_10b654284(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6542a8; end: 10b654333; -[SCSnapchattersGroupSummary hash] */

undefined8 * FUN_10b6542a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b6543fc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b654408;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b654408;
          }
          goto LAB_10b6543fc;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b654408:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b654334; end: 10b654423; -[SCSnapchattersGroupSummary isEqual:] */

long FUN_10b654334(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6543fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b654408;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b654408;
          }
          goto LAB_10b6543fc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b654408:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b654424; end: 10b65442b; -[SCSnapchattersGroupSummary groupDisplayName] */

undefined8 FUN_10b654424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b65442c; end: 10b654433; -[SCSnapchattersGroupSummary isStoryMuted] */

undefined1 FUN_10b65442c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b654434; end: 10b65443b; -[SCSnapchattersGroupSummary participants] */

undefined8 FUN_10b654434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b65443c; end: 10b654443; -[SCSnapchattersGroupSummary hasUnexemptBlockedParticipants] */

undefined1 FUN_10b65443c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b654444; end: 10b65444b; -[SCSnapchattersGroupSummary profileLogo] */

undefined8 FUN_10b654444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b65444c; end: 10b654453; -[SCSnapchattersGroupSummary shouldShowStar] */

undefined1 FUN_10b65444c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b654454; end: 10b65448f; -[SCSnapchattersGroupSummary .cxx_destruct] */

void FUN_10b654454(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b654490; end: 10b6545fb; -[SCSnapchattersGroupParticipantSummary initWithBasicSummary:uniqueDisplayName:colorHex:talkSessionUserID:videoChatUserID:birthday:] */

undefined1 *
FUN_10b654490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112707590;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6545fc; end: 10b65461f; -[SCSnapchattersGroupParticipantSummary copyWithZone:] */

undefined8 FUN_10b6545fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b654620; end: 10b6546c3; -[SCSnapchattersGroupParticipantSummary hash] */

undefined8 * FUN_10b654620(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b6547a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6547b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b6547b0;
                }
                goto LAB_10b6547a4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b6547b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6546c4; end: 10b6547cb; -[SCSnapchattersGroupParticipantSummary isEqual:] */

long FUN_10b6546c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6547a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6547b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b6547b0;
                }
                goto LAB_10b6547a4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6547b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6547cc; end: 10b6547d3; -[SCSnapchattersGroupParticipantSummary basicSummary] */

undefined8 FUN_10b6547cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6547d4; end: 10b6547db; -[SCSnapchattersGroupParticipantSummary uniqueDisplayName] */

undefined8 FUN_10b6547d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6547dc; end: 10b6547e3; -[SCSnapchattersGroupParticipantSummary colorHex] */

undefined8 FUN_10b6547dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6547e4; end: 10b6547eb; -[SCSnapchattersGroupParticipantSummary talkSessionUserID] */

undefined8 FUN_10b6547e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6547ec; end: 10b6547f3; -[SCSnapchattersGroupParticipantSummary videoChatUserID] */

undefined8 FUN_10b6547ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6547f4; end: 10b6547fb; -[SCSnapchattersGroupParticipantSummary birthday] */

undefined8 FUN_10b6547f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6547fc; end: 10b65485b; -[SCSnapchattersGroupParticipantSummary .cxx_destruct] */

void FUN_10b6547fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b65485c; end: 10b6548b7; -[SCSnapchattersBirthday hash] */

ulong * FUN_10b65485c(long param_1,undefined8 param_2,undefined1 param_3,ulong param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  uVar1 = uStack_28;
  ppuVar3 = &puStack_a0;
  _objc_retain(param_4);
  _objc_retain(uVar1);
  puStack_98 = PTR_PTR_1127075a0;
  puStack_a0 = puVar2;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar3 != (ulong **)0x0) {
    *(undefined1 *)(ppuVar3 + 1) = param_3;
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar5 = (ulong)ppuVar3[4];
    ppuVar3[4] = (ulong *)uVar4;
    _objc_release(uVar5);
    *(undefined4 *)((long)ppuVar3 + 0xc) = param_5;
    *(undefined4 *)(ppuVar3 + 2) = param_6;
    *(undefined4 *)((long)ppuVar3 + 0x14) = param_7;
    *(undefined4 *)(ppuVar3 + 3) = param_8;
    *(undefined4 *)((long)ppuVar3 + 0x1c) = uStack_30;
    uVar4 = uVar1;
    func_0x00010bf51e00();
    uVar5 = (ulong)ppuVar3[5];
    ppuVar3[5] = (ulong *)uVar4;
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return (ulong *)ppuVar3;
}



/* Entry: 10b6548b8; end: 10b6549a3; -[SCSnapchattersCreatorSnapchatterInfo initWithIsOfficial:unifiedProfileId:tier:profileType:badgeType:defaultLandingProfilePageType:profileLogoType:profileLogo:] */

undefined1 *
FUN_10b6548b8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1127075a0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    *(undefined4 *)((long)puVar1 + 0x18) = param_8;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6549a4; end: 10b6549c7; -[SCSnapchattersCreatorSnapchatterInfo copyWithZone:] */

undefined8 FUN_10b6549a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6549c8; end: 10b654a63; -[SCSnapchattersCreatorSnapchatterInfo hash] */

ulong * FUN_10b6549c8(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uStack_58 = *(ulong *)(param_1 + 0xc) & 0xffffffff;
  uStack_50 = *(ulong *)(param_1 + 0xc) >> 0x20;
  uStack_48 = *(ulong *)(param_1 + 0x14) & 0xffffffff;
  uStack_40 = *(ulong *)(param_1 + 0x14) >> 0x20;
  uStack_38 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b654b44:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b654b50;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((((char)puVar3[1] == (char)param_3[1] &&
           (*(int *)((long)puVar3 + 0xc) == *(int *)((long)param_3 + 0xc))) &&
          ((int)puVar3[2] == (int)param_3[2])) &&
         ((*(int *)((long)puVar3 + 0x14) == *(int *)((long)param_3 + 0x14) &&
          ((int)puVar3[3] == (int)param_3[3])))))) &&
       (*(int *)((long)puVar3 + 0x1c) == *(int *)((long)param_3 + 0x1c))) {
      uVar5 = puVar3[4];
      if ((uVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        puVar6 = (ulong *)puVar3[5];
        if (puVar6 != (ulong *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_10b654b50;
        }
        goto LAB_10b654b44;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10b654b50:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b654a64; end: 10b654b6b; -[SCSnapchattersCreatorSnapchatterInfo isEqual:] */

long FUN_10b654a64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b654b44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b654b50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
         ((*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14) &&
          (*(int *)(param_1 + 0x18) == *(int *)(param_3 + 0x18))))))) &&
       (*(int *)(param_1 + 0x1c) == *(int *)(param_3 + 0x1c))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10b654b50;
        }
        goto LAB_10b654b44;
      }
    }
    lVar3 = 0;
  }
LAB_10b654b50:
  _objc_release(param_3);
  return lVar3;
}


