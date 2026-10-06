/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af7f070; end: 10af7f0cf; -[SCSnapTokenStorage clearAllInMemoryAccessTokensSyncWithUserId:] */

void FUN_10af7f070(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10af7f0d0;
  puStack_20 = &UNK_110ab5388;
  uStack_18 = param_1;
  func_0x00010bf9af60(PTR_PTR_1126bd360,param_2,&puStack_38);
  return;
}



/* Entry: 10af7f0d0; end: 10af7f0db;  */

void FUN_10af7f0d0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeAccessTokenFromMemoryForA_112580660,
             param_2);
  return;
}



/* Entry: 10af7f0dc; end: 10af7f1c3; -[SCSnapTokenStorage getAccessTokenDirectlyFromPersistentStorageForAccesstype:userId:] */

void FUN_10af7f0dc(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar2 = *(ulong *)(param_2 + 0x48);
  func_0x00010beecd20(uVar2,param_3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    ppuStack_78 = &PTR_FUN_110c9b600;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_50 = &DAT_11383d918;
    puStack_48 = &DAT_11383d918;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uVar3 = uVar2;
    func_0x000107c2bc08(uVar2,&ppuStack_78);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      func_0x000107c2bc0c(param_1,&ppuStack_78);
    }
    param_1[0x58] = !bVar1;
    func_0x000107c2bc14(&ppuStack_78);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 10af7f1c4; end: 10af7f1cb; -[SCSnapTokenStorage updateWithSession:userId:] */

void FUN_10af7f1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateWithSession_userId_isSess_112596cd0,param_3,param_4,1);
  return;
}



/* Entry: 10af7f1cc; end: 10af7f1d3; -[SCSnapTokenStorage updateWithUnverifiedSession:userId:] */

void FUN_10af7f1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateWithSession_userId_isSess_112596cd0,param_3,param_4,0);
  return;
}



/* Entry: 10af7f1d4; end: 10af7f377; -[SCSnapTokenStorage _updateWithSession:userId:isSessionVerified:] */

void FUN_10af7f1d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [40];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c252d60(), (int)lVar1 != 1)) {
    func_0x00010c0aff40(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    FUN_10af7a6cc(auStack_68,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
    lVar1 = param_3;
    func_0x00010c125640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010c0aff40(*(undefined8 *)(param_1 + 0x40));
    }
    else {
      lVar2 = param_3;
      func_0x00010bf3e1c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c0aff40(*(undefined8 *)(param_1 + 0x40));
      func_0x00010bea7ae0(param_1);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    func_0x00010af7abe4(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7f378; end: 10af7f4c7; -[SCSnapTokenStorage _updateRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:] */

void FUN_10af7f378(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_1, func_0x00010c06a280(), (int)lVar1 == 0)) {
    puVar2 = &UNK_10f6edfd2;
    func_0x000107c31820(&UNK_10f6edfd2);
    func_0x00010bede6e0(param_1,param_2,param_3,param_6,param_7);
    if (*(long *)(param_4 + 0x18) == 0) {
      func_0x00010bddfc60(param_1,param_2,param_6);
    }
    else {
      func_0x00010bed2520(param_1,param_2,param_4,param_6);
    }
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010bed5560(param_1,param_2,param_5,param_6);
    }
    func_0x000107c31828(puVar2);
  }
  else {
    func_0x00010c0afe20(*(undefined8 *)(param_1 + 0x40),param_2,
                        &PTR____CFConstantStringClassReference_110f3e3b8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7f4c8; end: 10af7f56f; -[SCSnapTokenStorage _clearAllTokensForUserId:] */

void FUN_10af7f4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6edffa;
  func_0x000107c31820(&UNK_10f6edffa);
  func_0x00010bde0d40(param_1,param_2,param_3);
  func_0x00010bddfc60(param_1,param_2,param_3);
  func_0x00010bde00c0(param_1,param_2,param_3);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7f570; end: 10af7f66b; -[SCSnapTokenStorage _updateAccessTokens:userId:] */

void FUN_10af7f570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar2 = &UNK_10f6ee013;
  func_0x000107c31820(&UNK_10f6ee013);
  puVar1 = PTR_PTR_1126bd360;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af7f66c;
  puStack_60 = &UNK_110c9b280;
  uStack_58 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  func_0x00010bf9af60(puVar1,param_2,&puStack_78);
  _objc_release(uStack_50);
  func_0x000107c31828(puVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 10af7f66c; end: 10af7f707;  */

void FUN_10af7f66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [88];
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uStack_28 = param_2;
  FUN_10af7d470(lVar2,&uStack_28);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_10af7d470(lVar2,&uStack_28);
    if (lVar2 == 0) {
      func_0x000104c03f28();
      func_0x000107c2bc14(auStack_80);
      __Unwind_Resume();
      _objc_retain(param_3);
      puVar3 = &UNK_10f6ee02f;
      func_0x000107c31820(&UNK_10f6ee02f);
      puVar1 = PTR_PTR_1126bd360;
      _objc_retain(param_3);
      func_0x00010bf9af60(puVar1);
      _objc_release(param_3);
      func_0x000107c31828(puVar3);
      _objc_release(param_3);
      return;
    }
    func_0x000107c2bc10(auStack_80,0,lVar2 + 0x18);
    func_0x00010bed2500(uVar4);
    func_0x000107c2bc14(auStack_80);
  }
  return;
}



/* Entry: 10af7f708; end: 10af7f7f3; -[SCSnapTokenStorage _clearAccessTokensForUserId:] */

void FUN_10af7f708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f6ee02f;
  func_0x000107c31820(&UNK_10f6ee02f);
  puVar1 = PTR_PTR_1126bd360;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10af7f7f4;
  puStack_48 = &UNK_110c9b250;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bf9af60(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  func_0x000107c31828(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7f7f4; end: 10af7f803;  */

void FUN_10af7f7f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddfc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearAccessTokenForAccessType_u_1125558b0,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10af7f804; end: 10af7f917; -[SCSnapTokenStorage _updateAccessToken:accessType:userId:] */

void FUN_10af7f804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_98 [88];
  
  _objc_retain(param_5);
  puVar1 = &UNK_10f6ee08f;
  func_0x000107c31820(&UNK_10f6ee08f);
  lVar2 = param_1;
  func_0x00010c06a280();
  if ((int)lVar2 == 0) {
    func_0x00010bea49e0(param_1);
    func_0x000107c2bc10(auStack_98,0,param_3);
    func_0x00010beebc20(param_1);
    func_0x000107c2bc14(auStack_98);
  }
  else {
    func_0x00010c0afe20(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x000107c31828(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10af7f918; end: 10af7f9bf; -[SCSnapTokenStorage _clearAccessTokenForAccessType:userId:] */

void FUN_10af7f918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f6ee0c6;
  func_0x000107c31820(&UNK_10f6ee0c6);
  func_0x00010be8b300(param_1,param_2,param_3);
  func_0x00010be8b2e0(param_1,param_2,param_3,param_4);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10af7f9c0; end: 10af7fa97; -[SCSnapTokenStorage _updateRefreshToken:userId:isSessionVerified:] */

void FUN_10af7f9c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f6ee109;
  func_0x000107c31820(&UNK_10f6ee109);
  _os_unfair_lock_lock(param_1 + 0x34);
  func_0x00010c1e9600(param_1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x34);
  if (param_5 != 0) {
    func_0x00010beebc60(param_1,param_2,param_3,param_4);
  }
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7fa98; end: 10af7fb3f; -[SCSnapTokenStorage _clearRefreshTokenForUserId:] */

void FUN_10af7fa98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ee125;
  func_0x000107c31820(&UNK_10f6ee125);
  _os_unfair_lock_lock(param_1 + 0x34);
  func_0x00010c1e9600(param_1,param_2,0);
  _os_unfair_lock_unlock(param_1 + 0x34);
  func_0x00010be8d080(param_1,param_2,param_3);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7fb40; end: 10af7fc0f; -[SCSnapTokenStorage _updateCloud1TLToken:userId:] */

void FUN_10af7fb40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f6ee15f;
  func_0x000107c31820(&UNK_10f6ee15f);
  _os_unfair_lock_lock(param_1 + 0x38);
  func_0x00010c17d720(param_1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x38);
  func_0x00010beebc40(param_1,param_2,param_3,param_4);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7fc10; end: 10af7fcb7; -[SCSnapTokenStorage _clearCloud1TLTokenForUserId:] */

void FUN_10af7fc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ee17c;
  func_0x000107c31820(&UNK_10f6ee17c);
  _os_unfair_lock_lock(param_1 + 0x38);
  func_0x00010c17d720(param_1,param_2,0);
  _os_unfair_lock_unlock(param_1 + 0x38);
  func_0x00010be8bae0(param_1,param_2,param_3);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7fcb8; end: 10af7fe63; -[SCSnapTokenStorage _removeAccessTokenFromMemoryForAccessTypeKey:] */

void FUN_10af7fcb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_38;
  
  puVar2 = &UNK_10f6ee21d;
  uStack_38 = param_3;
  func_0x000107c31820(&UNK_10f6ee21d);
  _os_unfair_lock_lock(param_1 + 0x30);
  plVar3 = (long *)(param_1 + 8);
  func_0x000107c2bbf0(plVar3,&uStack_38);
  if (plVar3 == (long *)0x0) goto LAB_10af7fe14;
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar7 = uVar6 - 1;
  if ((uVar6 & uVar7) == 0) {
    uVar5 = uVar7 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar8 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(lVar8 + uVar5 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(param_1 + 0x18)) {
LAB_10af7fd7c:
    if (lVar4 == 0) {
LAB_10af7fdb0:
      *(undefined8 *)(lVar8 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10af7fdb8;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar7) == 0) {
      uVar11 = uVar10 & uVar7;
    }
    else {
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar10 / uVar6;
        }
        uVar11 = uVar10 - uVar11 * uVar6;
      }
    }
    if (uVar11 != uVar5) goto LAB_10af7fdb0;
LAB_10af7fdc0:
    if ((uVar6 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar6 <= uVar10) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar7 * uVar6;
    }
    if (uVar10 != uVar5) {
      *(long **)(lVar8 + uVar10 * 8) = plVar9;
      lVar4 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar6 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar6 <= uVar10) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar11 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_10af7fd7c;
LAB_10af7fdb8:
    if (lVar4 != 0) {
      uVar10 = *(ulong *)(lVar4 + 8);
      goto LAB_10af7fdc0;
    }
  }
  *plVar9 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  func_0x000107c2bc14(plVar3 + 3);
  __ZdlPv(plVar3);
LAB_10af7fe14:
  _os_unfair_lock_unlock(param_1 + 0x30);
  func_0x000107c31828(puVar2);
  return;
}



/* Entry: 10af7fe64; end: 10af7ffbf; -[SCSnapTokenStorage _writeToDiskAccessToken:accessType:userId:] */

void FUN_10af7fe64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  puVar1 = &UNK_10f6ee2ab;
  func_0x000107c31820(&UNK_10f6ee2ab);
  uVar2 = param_3;
  FUN_10af82360(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  FUN_10b4d1758(param_3,puVar5,uVar2);
  if ((int)param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_retain(puVar5);
  uVar4 = *(ulong *)(param_1 + 0x48);
  func_0x00010c160de0();
  if ((uVar4 & 1) == 0) {
    func_0x00010c22d480(PTR_PTR_1126bd360);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(puVar5);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10af7ffc0; end: 10af80077; -[SCSnapTokenStorage _removeAccessTokenFromDiskForAccessType:userId:] */

void FUN_10af7ffc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f6ee2d6;
  func_0x000107c31820(&UNK_10f6ee2d6);
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x00010c12a960(uVar2,param_2,param_4,param_3);
  if ((uVar2 & 1) == 0) {
    func_0x00010c22d480(PTR_PTR_1126bd360,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10af80078; end: 10af80163; -[SCSnapTokenStorage _writeToDiskRefreshToken:userId:] */

void FUN_10af80078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f6ee32a;
  func_0x000107c31820(&UNK_10f6ee32a);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9620(uVar3,param_2,uVar2,param_4);
  _objc_release(uVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af80164; end: 10af801ef; -[SCSnapTokenStorage _removeRefreshTokenFromDiskForUserId:] */

void FUN_10af80164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ee34b;
  func_0x000107c31820(&UNK_10f6ee34b);
  func_0x00010c12df80(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af801f0; end: 10af802db; -[SCSnapTokenStorage _writeToDiskCloud1TLToken:userId:] */

void FUN_10af801f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f6ee396;
  func_0x000107c31820(&UNK_10f6ee396);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d740(uVar3,param_2,uVar2,param_4);
  _objc_release(uVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af802dc; end: 10af80367; -[SCSnapTokenStorage _removeCloud1TLTokenFromDiskForUserId:] */

void FUN_10af802dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ee3b8;
  func_0x000107c31820(&UNK_10f6ee3b8);
  func_0x00010c12b800(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af80368; end: 10af8036f; -[SCSnapTokenStorage setInvalidated:] */

void FUN_10af80368(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 10af80370; end: 10af803cb; -[SCSnapTokenStorage .cxx_destruct] */

long * FUN_10af80370(long param_1)

{
  long *plVar1;
  long lVar2;
  
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  plVar1 = (long *)(param_1 + 8);
  func_0x00010af7ac1c(plVar1,*(undefined8 *)(param_1 + 0x18));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10af803cc; end: 10af803d3;  */

void FUN_10af803cc(void)

{
  return;
}



/* Entry: 10af803d4; end: 10af8040f;  */

long FUN_10af803d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10af80410; end: 10af80413;  */

long FUN_10af80410(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10af80414; end: 10af80427;  */

void FUN_10af80414(void)

{
  FUN_10af803d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af80428; end: 10af804a7;  */

undefined ** FUN_10af80428(void)

{
  return &PTR_DAT_110c9b430;
}



/* Entry: 10af804a8; end: 10af8066f;  */

long * FUN_10af804a8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)*puVar8;
      goto LAB_10af804f0;
    }
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10af804f0:
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f6ee3df);
      plVar1 = param_3;
      func_0x000107c280a0(param_3,1,puVar8,param_2);
      param_2 = plVar1;
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_10af80568;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10af80568;
  }
  func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f6ee419);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_10af80568:
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x00010599ccb0(param_3,*(long *)(param_1 + 0x20),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar1 < (long)(int)uVar7) {
      lVar11 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar11 < (int)uVar7) {
        do {
          iVar10 = (int)lVar11;
          _memcpy(plVar1,lVar3,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lVar3 = lVar3 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar1 + (long)iVar10);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar1 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar6;
          } while (plVar5 <= plVar6);
          lVar11 = (long)plVar5 + (0x10 - (long)plVar1);
        } while ((int)lVar11 < (int)uVar7);
      }
      _memcpy(plVar1,lVar3,(long)(int)uVar7);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar1,lVar3,uVar9 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
  }
  return plVar1;
}



/* Entry: 10af80670; end: 10af80753;  */

long FUN_10af80670(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 10af80754; end: 10af80807;  */

void FUN_10af80754(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10af80808; end: 10af8083b;  */

void FUN_10af80808(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10af8083c; end: 10af80893;  */

long FUN_10af8083c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10af80894; end: 10af808b3;  */

undefined ** FUN_10af80894(void)

{
  return &PTR_DAT_110c9b480;
}



/* Entry: 10af808b4; end: 10af80a0b;  */

long * FUN_10af808b4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 10af80a0c; end: 10af80a73;  */

ulong FUN_10af80a0c(long param_1)

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



/* Entry: 10af80a74; end: 10af80af3;  */

long FUN_10af80a74(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10af80af4; end: 10af80af7;  */

long FUN_10af80af4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10af80af8; end: 10af80b0b;  */

void FUN_10af80af8(void)

{
  FUN_10af80a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af80b0c; end: 10af80b17;  */

undefined ** FUN_10af80b0c(void)

{
  return &PTR_DAT_110c9b4e0;
}



/* Entry: 10af80b18; end: 10af80c87;  */

void FUN_10af80b18(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(ulong *)(param_1 + 0x40) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x50) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x58) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x60) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x68) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x70) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10af80c88; end: 10af8129f;  */

byte * FUN_10af80c88(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_10af80cdc;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_10af80cdc:
      func_0x000107c303d4(puVar15,lVar5,1,&UNK_10f6ee44c);
      pbVar9 = param_3;
      func_0x000107c280a0(param_3,1,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  uVar20 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar5 = 8;
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + lVar5 + -1);
      }
      puVar15 = (undefined8 *)*puVar1;
      lVar6 = (long)*(char *)((long)puVar15 + 0x17);
      puVar14 = puVar15;
      if (lVar6 < 0) {
        lVar6 = puVar15[1];
        puVar14 = (undefined8 *)*puVar15;
      }
      func_0x000107c303d4(puVar14,lVar6,1,&UNK_10f6ee48f);
      lVar6 = (long)*(char *)((long)puVar15 + 0x17);
      if (((lVar6 < 0) && (lVar6 = puVar15[1], 0x7f < lVar6)) ||
         ((*(long *)param_3 - (long)pbVar9) + 0xe < lVar6)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,2,puVar15,pbVar9);
      }
      else {
        *pbVar9 = 0x12;
        pbVar9[1] = (byte)lVar6;
        if (*(char *)((long)puVar15 + 0x17) < '\0') {
          puVar15 = (undefined8 *)*puVar15;
        }
        _memcpy(pbVar9 + 2,puVar15,lVar6);
        param_2 = pbVar9 + 2 + lVar6;
      }
      lVar5 = lVar5 + 8;
      uVar20 = uVar20 - 1;
      pbVar9 = param_2;
    } while (uVar20 != 0);
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_10af80e04;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_10af80e04:
      func_0x000107c303d4(puVar15,lVar5,1,&UNK_10f6ee4cb);
      pbVar9 = param_3;
      func_0x000107c280a0(param_3,3,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  uVar13 = *(uint *)(param_1 + 0x38);
  if (uVar13 != 0) {
    for (; pbVar9 = *(byte **)param_3, pbVar9 <= param_2;
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar9)) {
      if (param_3[0x38] == 1) {
        param_2 = param_3 + 0x10;
        break;
      }
      pbVar10 = param_3;
      func_0x000107c303dc();
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x22;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar9;
        pbVar9 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar2 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar2 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar9 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x30);
    iVar19 = *(int *)(param_1 + 0x28);
    pbVar9 = param_3 + 0x10;
    puVar17 = puVar16;
    do {
      pbVar10 = param_2;
      pbVar4 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar10 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10af80ee0:
            param_3[0x38] = 1;
LAB_10af80f78:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar4;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar4 + 8);
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)(param_3 + 8) = pbVar4;
              goto LAB_10af80f78;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar4 - (long)pbVar9);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_10af80ee0;
            } while (uStack_64 == 0);
            puVar14 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar14;
              *(undefined8 *)(param_3 + 0x18) = puVar14[1];
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar14;
              *(undefined8 *)(pbStack_70 + 8) = puVar14[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar4);
          pbVar10 = param_2;
          pbVar4 = pbVar11;
        } while (pbVar11 <= param_2);
      }
      puVar18 = puVar17 + 1;
      uVar8 = (ulong)(int)*puVar17;
      uVar20 = uVar8;
      pbVar4 = pbVar10;
      if (0x7f < *puVar17) {
        do {
          pbVar10 = pbVar4 + 1;
          *pbVar4 = (byte)uVar20 | 0x80;
          uVar8 = uVar20 >> 7;
          uVar12 = uVar20 >> 0xe;
          uVar20 = uVar8;
          pbVar4 = pbVar10;
        } while (uVar12 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar8;
      puVar17 = puVar18;
    } while (puVar18 < puVar16 + iVar19);
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_10af80fcc;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_10af80fcc:
      func_0x000107c303d4(puVar15,lVar5,1,&UNK_10f6ee50a);
      pbVar9 = param_3;
      func_0x000107c280a0(param_3,5,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_10af8101c;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_10af8101c:
      func_0x000107c303d4(puVar15,lVar5,1,&UNK_10f6ee560);
      pbVar9 = param_3;
      func_0x000107c280a0(param_3,6,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    pbVar9 = *(byte **)param_3;
    if (param_2 < pbVar9) {
      bVar7 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
      bVar7 = *(byte *)(param_1 + 0x70);
    }
    *param_2 = 0x38;
    param_2[1] = bVar7;
    param_2 = param_2 + 2;
  }
  uVar20 = *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar20 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar20 + 8);
  }
  pbVar9 = param_2;
  if (lVar5 != 0) {
    pbVar9 = param_3;
    func_0x000107c280a0(param_3,8,uVar20,param_2);
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 == 0) goto LAB_10af810ec;
    puVar15 = (undefined8 *)*puVar14;
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) == '\0') goto LAB_10af810ec;
  }
  func_0x000107c303d4(puVar15,lVar5,1,&UNK_10f6ee5a6);
  pbVar10 = param_3;
  func_0x000107c280a0(param_3,9,puVar14,pbVar9);
  pbVar9 = pbVar10;
LAB_10af810ec:
  if (*(char *)(param_1 + 0x71) == '\x01') {
    pbVar10 = *(byte **)param_3;
    if (pbVar9 < pbVar10) {
      bVar7 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar4 + ((int)pbVar9 - (int)pbVar10);
        pbVar10 = *(byte **)param_3;
      } while (pbVar10 <= pbVar9);
      bVar7 = *(byte *)(param_1 + 0x71);
    }
    *pbVar9 = 0x50;
    pbVar9[1] = bVar7;
    pbVar9 = pbVar9 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar20 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar20 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar5 = *(long *)(uVar20 + 8);
      uVar8 = (ulong)*(uint *)(uVar20 + 0x10);
    }
    else {
      lVar5 = uVar20 + 8;
    }
    uVar13 = (uint)uVar8;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar13) {
      pbVar10 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar10 < (int)uVar13) {
        do {
          iVar19 = (int)pbVar10;
          _memcpy(pbVar9,lVar5,(long)iVar19);
          uVar13 = (int)uVar8 - iVar19;
          uVar8 = (ulong)uVar13;
          lVar5 = lVar5 + iVar19;
          pbVar10 = *(byte **)param_3;
          pbVar4 = pbVar9 + iVar19;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar4 = pbVar9 + ((int)pbVar4 - (int)pbVar10);
            pbVar10 = *(byte **)param_3;
            pbVar9 = pbVar4;
          } while (pbVar10 <= pbVar4);
          pbVar10 = pbVar10 + (0x10 - (long)pbVar9);
        } while ((int)pbVar10 < (int)uVar13);
      }
      _memcpy(pbVar9,lVar5,(long)(int)uVar13);
      pbVar9 = pbVar9 + (int)uVar13;
    }
    else {
      _memcpy(pbVar9,lVar5,uVar8 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar13;
    }
  }
  return pbVar9;
}



/* Entry: 10af812a0; end: 10af81583;  */

long FUN_10af812a0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar9 = (ulong *)(uVar7 + 7);
    uVar6 = uVar4;
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar8 = (long)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar5 = 0;
  }
  else {
    lVar10 = 0;
    lVar5 = 0;
    do {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x30) + (lVar10 >> 0x1e))) *
                      -9 + 0x280U >> 6) + lVar5;
      lVar10 = lVar10 + 0x100000000;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar4 = lVar5 + uVar4;
    if (lVar5 != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT((long)(int)lVar5) * -9 + 0x280U >> 6) + 1;
    }
  }
  *(int *)(param_1 + 0x38) = (int)lVar5;
  uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  lVar8 = uVar4 + (ulong)*(byte *)(param_1 + 0x70) * 2 + (ulong)*(byte *)(param_1 + 0x71) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    lVar8 = lVar5 + lVar8;
  }
  *(int *)(param_1 + 0x74) = (int)lVar8;
  return lVar8;
}



/* Entry: 10af81584; end: 10af81797;  */

void FUN_10af81584(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      func_0x000107c282d8(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x30);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  uVar3 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x68,uVar3,uVar5);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10af81798; end: 10af81873;  */

undefined8 * FUN_10af81798(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110c9b3f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 3,param_3 + 0x18);
  }
  puVar2 = (ulong *)(param_3 + 0x30);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[6] = puVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10af81fdc(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  return param_1;
}



/* Entry: 10af81874; end: 10af818cf;  */

long FUN_10af81874(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  FUN_10af81e38(param_1 + 0x18);
  return param_1;
}



/* Entry: 10af818d0; end: 10af818d3;  */

long FUN_10af818d0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  FUN_10af81e38(param_1 + 0x18);
  return param_1;
}



/* Entry: 10af818d4; end: 10af818e7;  */

void FUN_10af818d4(void)

{
  FUN_10af81874();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af818e8; end: 10af818f3;  */

undefined ** FUN_10af818e8(void)

{
  return &PTR_DAT_110c9b538;
}



/* Entry: 10af818f4; end: 10af81983;  */

void FUN_10af818f4(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010af808a0(*(undefined8 *)(param_1 + 0x38));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10af81984; end: 10af81e17;  */

byte * FUN_10af81984(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0x20);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x28),pbVar5,param_3);
      iVar12 = iVar12 + 1;
      pbVar5 = param_2;
    } while (iVar13 != iVar12);
  }
  uVar10 = *(uint *)(param_1 + 0x40);
  if (uVar10 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar10 = *(uint *)(param_1 + 0x40);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar6 = (ulong)(int)uVar10;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar10) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  pbVar5 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar5 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20),param_2,param_3);
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar11[1];
    if (lVar3 == 0) goto LAB_10af81a94;
    puVar2 = (undefined8 *)*puVar11;
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10af81a94;
  }
  func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f6ee5f5);
  pbVar8 = param_3;
  func_0x000107c280a0(param_3,4,puVar11,pbVar5);
  pbVar5 = pbVar8;
LAB_10af81a94:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar6 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar10 = (uint)uVar6;
    if (*(long *)param_3 - (long)pbVar5 < (long)(int)uVar10) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar8 < (int)uVar10) {
        do {
          iVar13 = (int)pbVar8;
          _memcpy(pbVar5,lVar3,(long)iVar13);
          uVar10 = (int)uVar6 - iVar13;
          uVar6 = (ulong)uVar10;
          lVar3 = lVar3 + iVar13;
          pbVar8 = *(byte **)param_3;
          pbVar9 = pbVar5 + iVar13;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar5 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar5);
        } while ((int)pbVar8 < (int)uVar10);
      }
      _memcpy(pbVar5,lVar3,(long)(int)uVar10);
      pbVar5 = pbVar5 + (int)uVar10;
    }
    else {
      _memcpy(pbVar5,lVar3,uVar6 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar10;
    }
  }
  return pbVar5;
}



/* Entry: 10af81e18; end: 10af81e37;  */

void FUN_10af81e18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x78);
  }
  *puVar1 = &PTR_FUN_110c9b300;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xb] = &DAT_11383d918;
  puVar1[0xc] = &DAT_11383d918;
  puVar1[0xd] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  return;
}



/* Entry: 10af81e38; end: 10af81e6b;  */

long * FUN_10af81e38(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10af81e6c; end: 10af81fdb;  */

void FUN_10af81e6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x78);
  }
  *puVar1 = &PTR_FUN_110c9b300;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = param_1;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xb] = &DAT_11383d918;
  puVar1[0xc] = &DAT_11383d918;
  puVar1[0xd] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  return;
}



/* Entry: 10af81fdc; end: 10af82067;  */

undefined8 * FUN_10af81fdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110c9b350;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_10af80808();
  return puVar1;
}



/* Entry: 10af82068; end: 10af8206b;  */

long FUN_10af82068(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000100067de0(param_1 + 0x28);
  func_0x000100067de0(param_1 + 0x30);
  func_0x0001000682a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10af8206c; end: 10af8207f;  */

void FUN_10af8206c(void)

{
  func_0x000107c2bc14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af82080; end: 10af8235f;  */

long * FUN_10af82080(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar13;
  undefined1 *puVar12;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 != 0) {
      puVar10 = (undefined8 *)*puVar9;
      goto LAB_10af820d0;
    }
  }
  else {
    puVar10 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_10af820d0:
      func_0x000107c303d4(puVar10,lVar4,1,&UNK_10f6ee63b);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,1,puVar9,param_2);
      param_2 = plVar2;
    }
  }
  uVar13 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar4 = 8;
    plVar2 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar4 + -1);
      }
      puVar10 = (undefined8 *)*puVar1;
      lVar5 = (long)*(char *)((long)puVar10 + 0x17);
      puVar9 = puVar10;
      if (lVar5 < 0) {
        lVar5 = puVar10[1];
        puVar9 = (undefined8 *)*puVar10;
      }
      func_0x000107c303d4(puVar9,lVar5,1,&UNK_10f6ee66c);
      lVar5 = (long)*(char *)((long)puVar10 + 0x17);
      if (((lVar5 < 0) && (lVar5 = puVar10[1], 0x7f < lVar5)) ||
         ((*param_3 - (long)plVar2) + 0xe < lVar5)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,2,puVar10,plVar2);
      }
      else {
        *(undefined1 *)plVar2 = 0x12;
        *(char *)((long)plVar2 + 1) = (char)lVar5;
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          puVar10 = (undefined8 *)*puVar10;
        }
        _memcpy((undefined1 *)((long)plVar2 + 2),puVar10,lVar5);
        param_2 = (long *)((undefined1 *)((long)plVar2 + 2) + lVar5);
      }
      lVar4 = lVar4 + 8;
      uVar13 = uVar13 - 1;
      plVar2 = param_2;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_10af82220;
    puVar10 = (undefined8 *)*puVar9;
  }
  else {
    puVar10 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10af82220;
  }
  func_0x000107c303d4(puVar10,lVar4,1,&UNK_10f6ee698);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3,puVar9,param_2);
  param_2 = plVar2;
LAB_10af82220:
  plVar2 = param_2;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = param_3;
    func_0x000107c282e8(param_3,*(long *)(param_1 + 0x38),param_2);
  }
  plVar3 = plVar2;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar3 = param_3;
    func_0x000107c282c4(param_3,*(long *)(param_1 + 0x40),plVar2);
  }
  plVar2 = plVar3;
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar2 = param_3;
    func_0x000106af68d0(param_3,*(long *)(param_1 + 0x48),plVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar13 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar4 = *(long *)(uVar13 + 8);
      uVar6 = (ulong)*(uint *)(uVar13 + 0x10);
    }
    else {
      lVar4 = uVar13 + 8;
    }
    uVar8 = (uint)uVar6;
    if (*param_3 - (long)plVar2 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar11 = (int)puVar12;
          _memcpy(plVar2,lVar4,(long)iVar11);
          uVar8 = (int)uVar6 - iVar11;
          uVar6 = (ulong)uVar8;
          lVar4 = lVar4 + iVar11;
          plVar7 = (long *)*param_3;
          plVar3 = (long *)((long)plVar2 + (long)iVar11);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar2 + (long)((int)plVar3 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar2 = plVar3;
          } while (plVar7 <= plVar3);
          puVar12 = (undefined1 *)((long)plVar7 + (0x10 - (long)plVar2));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(plVar2,lVar4,(long)(int)uVar8);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar2,lVar4,uVar6 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
  }
  return plVar2;
}



/* Entry: 10af82360; end: 10af824eb;  */

ulong FUN_10af82360(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    puVar9 = (ulong *)(uVar8 + 7);
    uVar5 = uVar4;
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  lVar6 = lVar7;
  if (lVar7 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(uVar5 + 8);
    if (-1 < *(char *)(uVar5 + 0x17)) {
      lVar6 = lVar7;
    }
    uVar4 = uVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  lVar6 = lVar7;
  if (lVar7 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(uVar5 + 8);
    if (-1 < *(char *)(uVar5 + 0x17)) {
      lVar6 = lVar7;
    }
    uVar4 = uVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x50) = (int)uVar4;
  return uVar4;
}



/* Entry: 10af824ec; end: 10af825cb;  */

void FUN_10af824ec(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
  }
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10af825cc; end: 10af825d3;  */

void FUN_10af825cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x58);
  }
  *puVar1 = &PTR_FUN_110c9b600;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10af825d4; end: 10af826c3;  */

void FUN_10af825d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_FUN_110c9b600;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10af826c4; end: 10af82897;  */

long FUN_10af826c4(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar1 = uVar4;
  _CFStringCreateExternalRepresentation(uVar4,param_1,0x8000100,0);
  _CFDictionaryCreateMutable
            (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
             PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  _CFDictionaryAddValue();
  _CFDictionaryAddValue(uVar4,*(undefined8 *)PTR__kSecAttrGeneric_1103477c8,uVar1);
  _CFDictionaryAddValue(uVar4,*(undefined8 *)PTR__kSecAttrAccount_1103477c0,uVar1);
  uVar5 = *(undefined8 *)PTR__kSecAttrAccessible_110347790;
  _CFDictionaryAddValue
            (uVar4,uVar5,
             *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_1103477a0);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecAttrService_1103477d0,
             &PTR____CFConstantStringClassReference_110f3e418);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecAttrSynchronizable_1103477d8,
             *(undefined8 *)PTR__kCFBooleanFalse_11034ab88);
  _CFRelease(uVar1);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecMatchLimit_1103477f0,
             *(undefined8 *)PTR__kSecMatchLimitOne_110347800);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecReturnData_110347818,
             *(undefined8 *)PTR__kCFBooleanTrue_11034ab90);
  if (param_2 != 0) {
    _CFDictionaryReplaceValue
              (uVar4,uVar5,
               *(undefined8 *)PTR__kSecAttrAccessibleWhenUnlockedThisDeviceOnly_1103477b8);
  }
  lStack_38 = 0;
  uVar1 = uVar4;
  _SecItemCopyMatching(uVar4,&lStack_38);
  _CFRelease(uVar4);
  if ((int)uVar1 == 0) {
    lVar2 = lStack_38;
    _CFGetTypeID();
    lVar3 = lVar2;
    _CFDataGetTypeID();
    if (lVar2 == lVar3) {
      return lStack_38;
    }
  }
  if (lStack_38 != 0) {
    _CFRelease();
  }
  return 0;
}



/* Entry: 10af82898; end: 10af82e1b; -[SCSpectaclesWiFiNetworksController initWithDelegate:SSID:password:reachabilityCheckURL:networkConnectivityMonitorFactory:circumstanceEngine:systemScope:] */

undefined8 *
FUN_10af82898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_112702f98;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    FUN_10af82e1c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_sync_enter();
    FUN_10af82e1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf431c0();
    _objc_release();
    FUN_10af82e1c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar5 != (undefined8 *)0x0) {
      _objc_sync_exit(puVar2);
      _objc_release(puVar2);
      puVar2 = (undefined8 *)0x0;
      goto LAB_10af82d94;
    }
    FUN_10af82e1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befaaa0();
    _objc_release(puVar3);
    _objc_sync_exit(puVar2);
    _objc_release(puVar2);
    puVar6 = auStack_70;
    _objc_loadWeakRetained(puVar6);
    _objc_storeWeak(puVar1 + 1,puVar6);
    _objc_release(puVar6);
    uVar7 = param_4;
    func_0x00010bf51e00();
    uVar20 = puVar1[2];
    puVar1[2] = uVar7;
    _objc_release(uVar20);
    uVar7 = param_5;
    func_0x00010bf51e00();
    uVar20 = puVar1[3];
    puVar1[3] = uVar7;
    _objc_release(uVar20);
    uVar7 = param_6;
    func_0x00010bf51e00();
    uVar20 = puVar1[4];
    puVar1[4] = uVar7;
    _objc_release(uVar20);
    _objc_retain(param_7);
    uVar7 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar7);
    _objc_retain(param_8);
    uVar7 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar7);
    _objc_retain(param_9);
    uVar7 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar7 = puVar1[0xe];
    puVar1[0xe] = puVar8;
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126d3790;
    _objc_alloc();
    puVar10 = PTR_PTR_1126c7878;
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(puVar1);
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c226900(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    func_0x00010c0554c0();
    uVar7 = puVar1[5];
    puVar1[5] = puVar9;
    _objc_release(uVar7);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar7 = puVar1[6];
    puVar1[6] = puVar8;
    _objc_release(uVar7);
  }
  _objc_retain(puVar1);
  puVar2 = puVar1;
LAB_10af82d94:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10af82e1c; end: 10af82e6f;  */

void FUN_10af82e1c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0e78 != -1) {
    func_0x000107c27d9c(0x1137f0e78,&PTR___NSConcreteGlobalBlock_110c9b6a0);
  }
  uVar1 = uRam00000001137f0e70;
  _objc_retain(uRam00000001137f0e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af82e70; end: 10af82f17; -[SCSpectaclesWiFiNetworksController startConnecting] */

void FUN_10af82e70(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10af82f18; end: 10af82f4f;  */

void FUN_10af82f18(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x28),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af82f50; end: 10af82f6f; -[SCSpectaclesWiFiNetworksController isJoinedWiFiNetwork] */

bool FUN_10af82f50(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c252440(lVar1);
  return lVar1 == 4;
}



/* Entry: 10af82f70; end: 10af83017; -[SCSpectaclesWiFiNetworksController cancel] */

void FUN_10af82f70(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10af83018; end: 10af83087;  */

void FUN_10af83018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f3e498,2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x28),param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af83088; end: 10af830fb; -[SCSpectaclesWiFiNetworksController startedConnecting] */

void FUN_10af83088(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6728;
  func_0x00010c083b60();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    uVar2 = 4;
  }
  else {
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_handleEvent__1125d1dd0,uVar2);
  return;
}



/* Entry: 10af830fc; end: 10af8322f; -[SCSpectaclesWiFiNetworksController askingToJoin] */

void FUN_10af830fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NEHotspotConfiguration_1126ded38;
  _objc_alloc(PTR__OBJC_CLASS___NEHotspotConfiguration_1126ded38);
  if (lVar3 == 0) {
    func_0x00010c041160();
  }
  else {
    func_0x00010c041180();
  }
  puVar2 = PTR__OBJC_CLASS___NEHotspotConfigurationManager_1126ded40;
  func_0x00010c22bc20(PTR__OBJC_CLASS___NEHotspotConfigurationManager_1126ded40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b880();
  _objc_release(puVar2);
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR__OBJC_CLASS___NEHotspotConfigurationManager_1126ded40;
  func_0x00010c22bc20(PTR__OBJC_CLASS___NEHotspotConfigurationManager_1126ded40);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf08200(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 10af83230; end: 10af8330b;  */

void FUN_10af83230(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10af8330c; end: 10af83347;  */

void FUN_10af8330c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be2a8c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af83348; end: 10af8334b; -[SCSpectaclesWiFiNetworksController waitingForJoining] */

void FUN_10af83348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startReachabilityWatcher_11258dec0);
  return;
}



/* Entry: 10af8334c; end: 10af8337f; -[SCSpectaclesWiFiNetworksController joined] */

void FUN_10af8334c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a4c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af83380; end: 10af833c3; -[SCSpectaclesWiFiNetworksController errorWhileInitializing] */

void FUN_10af83380(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a4c40();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af833c4; end: 10af83407; -[SCSpectaclesWiFiNetworksController userRejectedJoinDialog] */

void FUN_10af833c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a4c40();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af83408; end: 10af8344b; -[SCSpectaclesWiFiNetworksController interruptWhileAskingToJoin] */

void FUN_10af83408(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a4c40();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af8344c; end: 10af8348f; -[SCSpectaclesWiFiNetworksController interruptWhileWaitingToJoin] */

void FUN_10af8344c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a4c40();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af83490; end: 10af834ef; -[SCSpectaclesWiFiNetworksController disconnected:] */

void FUN_10af83490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a4c40();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af834f0; end: 10af83613; -[SCSpectaclesWiFiNetworksController checkJoinConditionsWithCompletion:] */

void FUN_10af834f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b6728;
  func_0x00010c083b60();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (((ulong)puVar4 & 1) == 0) {
    unaff_x21 = &PTR____CFConstantStringClassReference_110f3e498;
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110f3e478;
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (**(code **)(param_3 + 0x10))(param_3,0);
    _objc_release(puVar1);
    _objc_release(unaff_x22);
  }
  else {
    puVar4 = (undefined *)0x0;
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10af83614;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  if ((puVar4 == (undefined *)0x0) ||
     (puVar2 = puVar4, func_0x00010bf3ec40(), puVar1 = PTR__OBJC_CLASS___NSError_1126ae858,
     puVar2 == (undefined *)0xd)) {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    if (puVar2 == (undefined *)0x7) {
      uStack_a8 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      puStack_a0 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_b8 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      puStack_b0 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    unaff_x22 = &PTR____CFConstantStringClassReference_110f3e498;
    puVar2 = puVar1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    *(undefined **)(param_3 + 0x48) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    unaff_x21 = (undefined **)puVar1;
  }
  func_0x00010bfd10a0(uVar5);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10af8378c;
  if (*(long *)(puVar1 + 0x58) == 0) {
    uVar7 = *(undefined8 *)(puVar1 + 0x50);
    uVar5 = *(undefined8 *)(puVar1 + 0x20);
    ppuStack_f0 = unaff_x22;
    ppuStack_e8 = unaff_x21;
    lStack_e0 = param_3;
    puStack_d8 = puVar4;
    ppuStack_d0 = &puStack_60;
    func_0x00010bfe4420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar1 + 0x58);
    *(undefined8 *)(puVar1 + 0x58) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_initWeak(auStack_f8,puVar1);
    uVar7 = *(undefined8 *)(puVar1 + 0x58);
    func_0x00010c0d7a00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_100,auStack_f8);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
  }
  return;
}



/* Entry: 10af83614; end: 10af8378b; -[SCSpectaclesWiFiNetworksController _handleHotspotApplyCompletion:] */

void FUN_10af83614(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *unaff_x21;
  undefined **unaff_x22;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 == 0) ||
     (lVar2 = param_3, func_0x00010bf3ec40(), puVar1 = PTR__OBJC_CLASS___NSError_1126ae858,
     lVar2 == 0xd)) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    if (lVar2 == 7) {
      uStack_58 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      lStack_50 = param_3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_68 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      lStack_60 = param_3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    unaff_x22 = &PTR____CFConstantStringClassReference_110f3e498;
    puVar4 = puVar1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    unaff_x21 = puVar1;
  }
  func_0x00010bfd10a0(uVar5);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10af8378c;
  if (*(long *)(lVar2 + 0x58) == 0) {
    uVar7 = *(undefined8 *)(lVar2 + 0x50);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    ppuStack_a0 = unaff_x22;
    puStack_98 = unaff_x21;
    lStack_90 = param_1;
    lStack_88 = param_3;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010bfe4420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0x58) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_initWeak(auStack_a8,lVar2);
    uVar7 = *(undefined8 *)(lVar2 + 0x58);
    func_0x00010c0d7a00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_a8);
    uVar5 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  return;
}



/* Entry: 10af8378c; end: 10af838c3; -[SCSpectaclesWiFiNetworksController _startReachabilityWatcher] */

void FUN_10af8378c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe4420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0d7a00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10af838c4; end: 10af83923;  */

void FUN_10af838c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5e480(param_2);
  _objc_release(param_2);
  func_0x00010be629c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af83924; end: 10af839db; -[SCSpectaclesWiFiNetworksController _networkConnectivityStatusDidChange:] */

void FUN_10af83924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10af839dc; end: 10af83a2b;  */

void FUN_10af839dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == 2)) {
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x28),param_2,3);
    func_0x00010bec16c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af83a2c; end: 10af83a83; -[SCSpectaclesWiFiNetworksController _startSSIDPollingTimer] */

void FUN_10af83a2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
  puVar1 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x3ff0000000000000,PTR_PTR_1126bc890,param_2,param_1,
                      PTR_s__checkCurrentSSIDIfNotInBackgrou_112540e20,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af83a84; end: 10af83b2b; -[SCSpectaclesWiFiNetworksController _checkCurrentSSIDIfNotInBackground] */

void FUN_10af83a84(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10af83b2c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10af83b2c; end: 10af83c1f;  */

void FUN_10af83b2c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [8];
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x60);
    func_0x00010bf1f440();
    if (iVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 0x68);
      func_0x00010bf075a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf07b60();
      _objc_release(lVar3);
      if (lVar4 == 2) goto LAB_10af83bf0;
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x30);
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010c0f7fc0(uVar5);
    _objc_destroyWeak(auStack_38);
  }
LAB_10af83bf0:
  _objc_release(lVar2);
  return;
}



/* Entry: 10af83c20; end: 10af83c53;  */

void FUN_10af83c20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddd660(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af83c54; end: 10af83d37; -[SCSpectaclesWiFiNetworksController _checkCurrentSSIDIfNeeded] */

void FUN_10af83c54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar5);
  puVar1 = PTR_PTR_1126b6728;
  func_0x00010bf60d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar4);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c252440();
  if (lVar2 == 4) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c252440();
    if (lVar2 == 4 && lVar5 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x40);
      func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)(param_1 + 0x10));
      if ((uVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110f3e498,7,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x28),param_2,5,puVar1);
        func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
        _objc_release(puVar1);
      }
    }
  }
  else {
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10af83d38; end: 10af83df3; -[SCSpectaclesWiFiNetworksController .cxx_destruct] */

void FUN_10af83d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10af83df4; end: 10af83e27;  */

void FUN_10af83df4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
  func_0x00010c2a2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f0e70;
  puRam00000001137f0e70 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af83e28; end: 10af83ef3; -[SCSpectaclesWiFiNetworksControllerFactoryImplementation initWithNetworkConnectivityMonitorFactory:circumstanceEngine:systemScope:] */

undefined1 *
FUN_10af83e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702fa0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af83ef4; end: 10af83fdb; -[SCSpectaclesWiFiNetworksControllerFactoryImplementation createControllerWithDelegate:SSID:password:reachabilityCheckURL:] */

void FUN_10af83ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ded48;
  _objc_alloc(PTR_PTR_1126ded48);
  puVar2 = auStack_48;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c00a2e0(puVar1);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


