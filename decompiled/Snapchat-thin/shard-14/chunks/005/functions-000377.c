/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4d1f94; end: 10b4d215f;  */

void FUN_10b4d1f94(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)param_1[1] - (int)param_2;
  iVar5 = (int)param_3;
  if (param_1[4] == 0) {
    if (iVar5 <= iVar4 + 0x10) {
      func_0x00010b4d3690(param_1,param_2,(long)iVar5);
      return;
    }
    iVar4 = ((int)param_1[1] - (int)param_2) + 0x10;
    do {
      if (param_1[2] == 0) {
        return;
      }
      func_0x00010b4d252c(param_4,param_2,iVar4);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return;
      }
      param_2 = param_1;
      FUN_10b4d1d34();
      if (param_2 == (long *)0x0) {
        return;
      }
      uVar2 = (int)param_3 - iVar4;
      param_3 = (ulong)uVar2;
      param_2 = param_2 + 2;
      iVar4 = ((int)param_1[1] - (int)param_2) + 0x10;
    } while (iVar4 < (int)uVar2);
    func_0x00010b4d252c(param_4,param_2,param_3);
    return;
  }
  iVar1 = *(int *)((long)param_1 + 0x1c) + iVar4;
  if (iVar1 < iVar5) {
    return;
  }
  iVar6 = iVar4 + 0x10;
  if ((iVar6 < 0x21) && (plVar3 = param_1 + 5, (ulong)((long)param_2 - (long)plVar3) < 0x21)) {
    if (((iVar4 == 0) && ((long *)param_1[2] != (long *)0x0)) && ((long *)param_1[2] != plVar3)) {
      func_0x00010ae70894(param_4);
      iVar6 = (int)param_1[3];
    }
    else {
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      func_0x00010b4d3690(param_1,param_2,(long)iVar6);
      if ((long *)param_1[2] == plVar3) goto LAB_10b4d20bc;
      if ((long *)param_1[2] == (long *)0x0) {
        *(undefined4 *)(param_1 + 10) = 1;
        return;
      }
      iVar6 = (int)param_1[3] + -0x10;
    }
  }
  else {
    func_0x00010ae70894(param_4);
  }
  func_0x00010b4d19b4(param_1,iVar6);
LAB_10b4d20bc:
  if ((int)param_3 <= *(int *)((long)param_1 + 0x54)) {
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - (int)param_3;
    plVar3 = (long *)param_1[4];
    (**(code **)(*plVar3 + 0x30))(plVar3,param_4,param_3);
    if ((int)plVar3 != 0) {
      plVar3 = param_1;
      func_0x000107c30394(param_1,param_1[4]);
      uVar2 = (iVar1 - iVar5) + ((int)plVar3 - (int)param_1[1]);
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = param_1[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return;
}



/* Entry: 10b4d2160; end: 10b4d21d7;  */

/* WARNING: Possible PIC construction at 0x00010b4d217c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4d2180) */

void FUN_10b4d2160(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)(param_1 << 3);
  while( true ) {
    if (uVar1 < 0x80) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_3,(int)(char)uVar1 | 0xffffff80);
    uVar1 = uVar1 >> 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)
            (param_3);
  return;
}



/* Entry: 10b4d21d8; end: 10b4d222b;  */

void FUN_10b4d21d8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b4d2194(param_1 << 3 | 2,param_4);
  func_0x00010b4d2194(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_4,param_2,param_3);
  return;
}



/* Entry: 10b4d222c; end: 10b4d2297;  */

undefined1  [16] FUN_10b4d222c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  iVar1 = param_2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if ((char)*(byte *)(param_1 + 2) < '\0') {
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
    if ((char)*(byte *)(param_1 + 3) < '\0') {
      if (*(char *)(param_1 + 4) < 0) {
        return ZEXT816(0);
      }
      iVar1 = iVar1 + *(char *)(param_1 + 4) * 0x10000000 + -0x10000000;
      lVar2 = 4;
    }
    else {
      lVar2 = 3;
    }
  }
  else {
    lVar2 = 2;
  }
  auVar3._8_4_ = iVar1;
  auVar3._0_8_ = param_1 + lVar2 + 1;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* Entry: 10b4d2298; end: 10b4d2403;  */

void FUN_10b4d2298(void)

{
  func_0x000107c39c8c();
  func_0x00010b4d34fc();
  FUN_10b4cbfb4();
  return;
}



/* Entry: 10b4d2404; end: 10b4d242b;  */

void FUN_10b4d2404(undefined4 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b4d242c(param_1,&uStack_18);
  return;
}



/* Entry: 10b4d242c; end: 10b4d2517;  */

undefined8 * FUN_10b4d242c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_40 [2];
  
  puVar1 = auStack_40;
  if ((int)((ulong)param_1 >> 3) == 0) {
LAB_10b4d2498:
    param_1 = (undefined8 *)0x0;
  }
  else {
    switch((ulong)param_1 & 7) {
    case 0:
      func_0x000107c302a4(param_3,auStack_40);
      param_1 = param_3;
      if (param_3 != (undefined8 *)0x0) {
        func_0x00010b4d3684();
        func_0x00010b4d30b8();
      }
      break;
    case 1:
      func_0x00010b4d3684(param_1,param_2,*param_3);
      func_0x00010b4d30f8();
      param_1 = param_3 + 1;
      break;
    case 2:
      func_0x00010b4d3684();
      FUN_10b4d3178();
      break;
    case 3:
      func_0x00010b4d3684();
      FUN_10b4d3208();
      break;
    case 4:
      func_0x00010bdb2a00(auStack_40,&UNK_10f7740e7,0x516);
      func_0x00010b4d32c0(auStack_40,&UNK_10f77418c);
      func_0x00010b4d3598();
      puVar1 = (undefined8 *)*puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
                (puVar1);
      return puVar1;
    case 5:
      func_0x00010b4d3684(param_1,param_2,*(undefined4 *)param_3);
      func_0x00010b4d32f8();
      param_1 = (undefined8 *)((long)param_3 + 4);
      break;
    default:
      goto LAB_10b4d2498;
    }
  }
  return param_1;
}



/* Entry: 10b4d2518; end: 10b4d2537;  */

void FUN_10b4d2518(undefined8 *param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (*param_1,param_2,(long)param_3);
  return;
}



/* Entry: 10b4d2538; end: 10b4d267f;  */

undefined8 * FUN_10b4d2538(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *unaff_x21;
  int iVar5;
  long lVar6;
  int in_stack_00000000;
  undefined4 in_stack_00000014;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined4 uStack_38;
  
  func_0x00010b4d36dc();
  in_stack_00000048 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &stack0x00000018;
  in_stack_00000018 = param_2;
  func_0x000107c30264();
  func_0x00010b4d3620();
  puVar3 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    while( true ) {
      iVar5 = (int)param_1[1] - (int)puVar1;
      iVar4 = (int)unaff_x21;
      in_ZR = iVar4 == iVar5;
      if (iVar4 <= iVar5) break;
      func_0x00010b4d36a4();
      puVar3 = (undefined8 *)0x0;
      in_stack_00000018 = puVar1;
      if (puVar1 == (undefined8 *)0x0) goto LAB_10b4d2638;
      puVar3 = (undefined8 *)param_1[1];
      lVar6 = (long)iVar4 - (long)iVar5;
      if ((int)lVar6 < 0x11) {
        in_stack_00000038 = 0;
        in_stack_00000030 = 0;
        in_stack_00000028 = puVar3[1];
        in_stack_00000020 = *puVar3;
        in_stack_00000014 = 0x10;
        puVar2 = (undefined1 *)register0x00000008;
        in_stack_00000000 = (int)lVar6;
        func_0x000107c302a8();
        if (puVar2 != (undefined1 *)0x0) goto LAB_10b4d2658;
        unaff_x21 = (undefined8 *)((long)&stack0x00000020 + lVar6);
        puVar1 = (undefined8 *)((long)&stack0x00000020 + (long)((int)puVar1 - (int)puVar3));
        func_0x00010b4d36a4(puVar1,unaff_x21);
        in_ZR = puVar1 == unaff_x21;
        if ((bool)in_ZR) {
          puVar3 = (undefined8 *)(param_1[1] + lVar6);
        }
        else {
LAB_10b4d2634:
          puVar3 = (undefined8 *)0x0;
        }
        goto LAB_10b4d2638;
      }
      in_ZR = *(int *)((long)param_1 + 0x1c) == 0x11;
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_10b4d2634;
      puVar3 = param_1;
      FUN_10b4d1d34();
      if (puVar3 == (undefined8 *)0x0) goto LAB_10b4d2638;
      func_0x00010b4d34c0();
      puVar1 = puVar3;
    }
    param_1 = (undefined8 *)((long)puVar1 + (long)iVar4);
    func_0x00010b4d36a4();
    in_ZR = param_1 == puVar1;
    puVar3 = puVar1;
    if (!(bool)in_ZR) {
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_10b4d2638:
  func_0x00010b4d3458();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
LAB_10b4d2658:
  func_0x00010802bcb8();
  func_0x00010bdb2a88();
  func_0x00010b4d3598();
  __Unwind_Resume();
  func_0x00010b4d352c();
  while ((puVar1 = (undefined8 *)register0x00000008, param_1 < unaff_x21 &&
         (func_0x00010b4d3510(), param_1 = puVar1, puVar1 != (undefined8 *)0x0))) {
    register0x00000008 = (BADSPACEBASE *)param_3;
    func_0x000107c2845c(param_3,uStack_38);
  }
  return param_1;
}



/* Entry: 10b4d2680; end: 10b4d26c7;  */

ulong FUN_10b4d2680(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    func_0x000107c2845c();
  }
  return unaff_x19;
}



/* Entry: 10b4d26c8; end: 10b4d2773;  */

ulong FUN_10b4d26c8(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d36dc();
  func_0x00010b4d33f4();
  func_0x00010b4d3620();
  if (param_1 != 0) {
    while (func_0x00010b4d354c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_10b4d2774();
      if (param_1 == 0) goto LAB_10b4d274c;
      func_0x00010b4d3490();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x00010b4d33c4();
        if (param_1 != 0) goto LAB_10b4d2768;
        func_0x00010b4d34a8();
        FUN_10b4d2774();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x00010b4d363c();
        }
        else {
LAB_10b4d2748:
          param_1 = 0;
        }
        goto LAB_10b4d274c;
      }
      func_0x00010b4d3608();
      if (in_NG != in_OV) goto LAB_10b4d2748;
      func_0x00010b4d35d0();
      if (param_1 == 0) goto LAB_10b4d274c;
      func_0x00010b4d34c0();
    }
    func_0x00010b4d353c();
    FUN_10b4d2774();
    func_0x00010b4d3648();
  }
LAB_10b4d274c:
  func_0x00010b4d3458();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b4d2768:
  func_0x00010802bcb8();
  func_0x00010b4d3418();
  func_0x00010b4d3598();
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    func_0x000107c29100();
  }
  return unaff_x19;
}



/* Entry: 10b4d2774; end: 10b4d27bb;  */

ulong FUN_10b4d2774(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    func_0x000107c29100();
  }
  return unaff_x19;
}



/* Entry: 10b4d27bc; end: 10b4d2867;  */

ulong FUN_10b4d27bc(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d36dc();
  func_0x00010b4d33f4();
  func_0x00010b4d3620();
  if (param_1 != 0) {
    while (func_0x00010b4d354c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_10b4d2868();
      if (param_1 == 0) goto LAB_10b4d2840;
      func_0x00010b4d3490();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x00010b4d33c4();
        if (param_1 != 0) goto LAB_10b4d285c;
        func_0x00010b4d34a8();
        FUN_10b4d2868();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x00010b4d363c();
        }
        else {
LAB_10b4d283c:
          param_1 = 0;
        }
        goto LAB_10b4d2840;
      }
      func_0x00010b4d3608();
      if (in_NG != in_OV) goto LAB_10b4d283c;
      func_0x00010b4d35d0();
      if (param_1 == 0) goto LAB_10b4d2840;
      func_0x00010b4d34c0();
    }
    func_0x00010b4d353c();
    FUN_10b4d2868();
    func_0x00010b4d3648();
  }
LAB_10b4d2840:
  func_0x00010b4d3458();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b4d285c:
  func_0x00010802bcb8();
  func_0x00010b4d3418();
  func_0x00010b4d3598();
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_10b227ed8();
  }
  return unaff_x19;
}



/* Entry: 10b4d2868; end: 10b4d28af;  */

ulong FUN_10b4d2868(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_10b227ed8();
  }
  return unaff_x19;
}



/* Entry: 10b4d28b0; end: 10b4d295b;  */

ulong FUN_10b4d28b0(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d36dc();
  func_0x00010b4d33f4();
  func_0x00010b4d3620();
  if (param_1 != 0) {
    while (func_0x00010b4d354c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_10b4d295c();
      if (param_1 == 0) goto LAB_10b4d2934;
      func_0x00010b4d3490();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x00010b4d33c4();
        if (param_1 != 0) goto LAB_10b4d2950;
        func_0x00010b4d34a8();
        FUN_10b4d295c();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x00010b4d363c();
        }
        else {
LAB_10b4d2930:
          param_1 = 0;
        }
        goto LAB_10b4d2934;
      }
      func_0x00010b4d3608();
      if (in_NG != in_OV) goto LAB_10b4d2930;
      func_0x00010b4d35d0();
      if (param_1 == 0) goto LAB_10b4d2934;
      func_0x00010b4d34c0();
    }
    func_0x00010b4d353c();
    FUN_10b4d295c();
    func_0x00010b4d3648();
  }
LAB_10b4d2934:
  func_0x00010b4d3458();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b4d2950:
  func_0x00010802bcb8();
  func_0x00010b4d3418();
  func_0x00010b4d3598();
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    func_0x000108767594();
  }
  return unaff_x19;
}



/* Entry: 10b4d295c; end: 10b4d29a3;  */

ulong FUN_10b4d295c(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    func_0x000108767594();
  }
  return unaff_x19;
}



/* Entry: 10b4d29a4; end: 10b4d2a4f;  */

ulong FUN_10b4d29a4(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d36dc();
  func_0x00010b4d33f4();
  func_0x00010b4d3620();
  if (param_1 != 0) {
    while (func_0x00010b4d354c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_10b4d2a50();
      if (param_1 == 0) goto LAB_10b4d2a28;
      func_0x00010b4d3490();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x00010b4d33c4();
        if (param_1 != 0) goto LAB_10b4d2a44;
        func_0x00010b4d34a8();
        FUN_10b4d2a50();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x00010b4d363c();
        }
        else {
LAB_10b4d2a24:
          param_1 = 0;
        }
        goto LAB_10b4d2a28;
      }
      func_0x00010b4d3608();
      if (in_NG != in_OV) goto LAB_10b4d2a24;
      func_0x00010b4d35d0();
      if (param_1 == 0) goto LAB_10b4d2a28;
      func_0x00010b4d34c0();
    }
    func_0x00010b4d353c();
    FUN_10b4d2a50();
    func_0x00010b4d3648();
  }
LAB_10b4d2a28:
  func_0x00010b4d3458();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b4d2a44:
  func_0x00010802bcb8();
  func_0x00010b4d3418();
  func_0x00010b4d3598();
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    func_0x000107c2845c();
  }
  return unaff_x19;
}



/* Entry: 10b4d2a50; end: 10b4d2a9f;  */

ulong FUN_10b4d2a50(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    func_0x000107c2845c();
  }
  return unaff_x19;
}



/* Entry: 10b4d2aa0; end: 10b4d2b4b;  */

ulong FUN_10b4d2aa0(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d36dc();
  func_0x00010b4d33f4();
  func_0x00010b4d3620();
  if (param_1 != 0) {
    while (func_0x00010b4d354c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_10b4d2b4c();
      if (param_1 == 0) goto LAB_10b4d2b24;
      func_0x00010b4d3490();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x00010b4d33c4();
        if (param_1 != 0) goto LAB_10b4d2b40;
        func_0x00010b4d34a8();
        FUN_10b4d2b4c();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x00010b4d363c();
        }
        else {
LAB_10b4d2b20:
          param_1 = 0;
        }
        goto LAB_10b4d2b24;
      }
      func_0x00010b4d3608();
      if (in_NG != in_OV) goto LAB_10b4d2b20;
      func_0x00010b4d35d0();
      if (param_1 == 0) goto LAB_10b4d2b24;
      func_0x00010b4d34c0();
    }
    func_0x00010b4d353c();
    FUN_10b4d2b4c();
    func_0x00010b4d3648();
  }
LAB_10b4d2b24:
  func_0x00010b4d3458();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b4d2b40:
  func_0x00010802bcb8();
  func_0x00010b4d3418();
  func_0x00010b4d3598();
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_10b227ed8();
  }
  return unaff_x19;
}



/* Entry: 10b4d2b4c; end: 10b4d2b9b;  */

ulong FUN_10b4d2b4c(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_10b227ed8();
  }
  return unaff_x19;
}



/* Entry: 10b4d2b9c; end: 10b4d2c47;  */

ulong FUN_10b4d2b9c(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d36dc();
  func_0x00010b4d33f4();
  func_0x00010b4d3620();
  if (param_1 != 0) {
    while (func_0x00010b4d354c(), !(bool)in_ZR && in_NG == in_OV) {
      FUN_10b4d2c48();
      if (param_1 == 0) goto LAB_10b4d2c20;
      func_0x00010b4d3490();
      if ((bool)in_ZR || in_NG != in_OV) {
        func_0x00010b4d33c4();
        if (param_1 != 0) goto LAB_10b4d2c3c;
        func_0x00010b4d34a8();
        FUN_10b4d2c48();
        in_ZR = param_1 == unaff_x21;
        if ((bool)in_ZR) {
          func_0x00010b4d363c();
        }
        else {
LAB_10b4d2c1c:
          param_1 = 0;
        }
        goto LAB_10b4d2c20;
      }
      func_0x00010b4d3608();
      if (in_NG != in_OV) goto LAB_10b4d2c1c;
      func_0x00010b4d35d0();
      if (param_1 == 0) goto LAB_10b4d2c20;
      func_0x00010b4d34c0();
    }
    func_0x00010b4d353c();
    FUN_10b4d2c48();
    func_0x00010b4d3648();
  }
LAB_10b4d2c20:
  func_0x00010b4d3458();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b4d2c3c:
  func_0x00010802bcb8();
  func_0x00010b4d3418();
  func_0x00010b4d3598();
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_10b4bfd04();
  }
  return unaff_x19;
}



/* Entry: 10b4d2c48; end: 10b4d2c97;  */

ulong FUN_10b4d2c48(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b4d352c();
  while ((unaff_x19 < unaff_x21 && (func_0x00010b4d3510(), unaff_x19 = param_1, param_1 != 0))) {
    param_1 = unaff_x20;
    FUN_10b4bfd04();
  }
  return unaff_x19;
}



/* Entry: 10b4d2c98; end: 10b4d2d6b;  */

void FUN_10b4d2c98(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x00010b4d3584();
    while (func_0x00010b4d355c(), !(bool)in_ZR && in_NG == in_OV) {
      func_0x000105992abc();
      func_0x00010b4d3614();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 2);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 4;
      func_0x00010b4d35a0();
      func_0x00010b4d36d0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x00010b4d362c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffffc);
      func_0x00010b4d36c4(unaff_w23 & 3);
    }
    if (unaff_w20 < 4) {
      func_0x00010b4d36ac();
    }
    else {
      func_0x00010b4d35e8();
      func_0x000105992abc();
      func_0x00010b4d3570();
      if (extraout_x8_00 == 0) {
        func_0x00010b4d3470();
        func_0x00010b4d36b8();
        FUN_10b4d2d6c();
        func_0x00010b4d351c();
        func_0x00010b4d3654();
        func_0x00010b4d3598();
        func_0x00010b4d34d4();
        func_0x00010b4d35b8(uStack_a8);
        func_0x00010b4d35e0();
        return;
      }
      func_0x00010b4d35d8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 4);
      func_0x00010b4d35f8();
    }
  }
  return;
}



/* Entry: 10b4d2d6c; end: 10b4d2d9f;  */

void FUN_10b4d2d6c(void)

{
  undefined8 uStack_58;
  
  func_0x00010b4d34d4();
  func_0x00010b4d35b8(uStack_58);
  func_0x00010b4d35e0();
  return;
}



/* Entry: 10b4d2da0; end: 10b4d2e73;  */

void FUN_10b4d2da0(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x00010b4d3584();
    while (func_0x00010b4d355c(), !(bool)in_ZR && in_NG == in_OV) {
      func_0x00010598eaec();
      func_0x00010b4d3614();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 3);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 8;
      func_0x00010b4d35a0();
      func_0x00010b4d36d0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x00010b4d362c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffff8);
      func_0x00010b4d36c4(unaff_w23 & 7);
    }
    if (unaff_w20 < 8) {
      func_0x00010b4d36ac();
    }
    else {
      func_0x00010b4d35e8();
      func_0x00010598eaec();
      func_0x00010b4d3570();
      if (extraout_x8_00 == 0) {
        func_0x00010b4d3470();
        func_0x00010b4d36b8();
        FUN_10b4d2e74();
        func_0x00010b4d351c();
        func_0x00010b4d3654();
        func_0x00010b4d3598();
        func_0x00010b4d34d4();
        func_0x00010b4d35b8(uStack_a8);
        func_0x00010b4d35e0();
        return;
      }
      func_0x00010b4d35d8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 8);
      func_0x00010b4d35f8();
    }
  }
  return;
}



/* Entry: 10b4d2e74; end: 10b4d2ea7;  */

void FUN_10b4d2e74(void)

{
  undefined8 uStack_58;
  
  func_0x00010b4d34d4();
  func_0x00010b4d35b8(uStack_58);
  func_0x00010b4d35e0();
  return;
}



/* Entry: 10b4d2ea8; end: 10b4d2f7b;  */

void FUN_10b4d2ea8(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x00010b4d3584();
    while (func_0x00010b4d355c(), !(bool)in_ZR && in_NG == in_OV) {
      func_0x0001098cfa24();
      func_0x00010b4d3614();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 2);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 4;
      func_0x00010b4d35a0();
      func_0x00010b4d36d0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x00010b4d362c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffffc);
      func_0x00010b4d36c4(unaff_w23 & 3);
    }
    if (unaff_w20 < 4) {
      func_0x00010b4d36ac();
    }
    else {
      func_0x00010b4d35e8();
      func_0x0001098cfa24();
      func_0x00010b4d3570();
      if (extraout_x8_00 == 0) {
        func_0x00010b4d3470();
        func_0x00010b4d36b8();
        FUN_10b4d2f7c();
        func_0x00010b4d351c();
        func_0x00010b4d3654();
        func_0x00010b4d3598();
        func_0x00010b4d34d4();
        func_0x00010b4d35b8(uStack_a8);
        func_0x00010b4d35e0();
        return;
      }
      func_0x00010b4d35d8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 4);
      func_0x00010b4d35f8();
    }
  }
  return;
}



/* Entry: 10b4d2f7c; end: 10b4d2faf;  */

void FUN_10b4d2f7c(void)

{
  undefined8 uStack_58;
  
  func_0x00010b4d34d4();
  func_0x00010b4d35b8(uStack_58);
  func_0x00010b4d35e0();
  return;
}



/* Entry: 10b4d2fb0; end: 10b4d3083;  */

void FUN_10b4d2fb0(undefined8 param_1,long param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *unaff_x19;
  uint unaff_w20;
  uint unaff_w23;
  undefined8 uStack_a8;
  
  if (param_2 != 0) {
    func_0x00010b4d3584();
    while (func_0x00010b4d355c(), !(bool)in_ZR && in_NG == in_OV) {
      func_0x0001098d3f48();
      func_0x00010b4d3614();
      *unaff_x19 = extraout_w9 + ((int)unaff_w23 >> 3);
      lVar1 = extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 8;
      func_0x00010b4d35a0();
      func_0x00010b4d36d0();
      if (in_NG != in_OV) {
        return;
      }
      func_0x00010b4d362c();
      if (lVar1 == 0) {
        return;
      }
      unaff_w20 = unaff_w20 - (unaff_w23 & 0xfffffff8);
      func_0x00010b4d36c4(unaff_w23 & 7);
    }
    if (unaff_w20 < 8) {
      func_0x00010b4d36ac();
    }
    else {
      func_0x00010b4d35e8();
      func_0x0001098d3f48();
      func_0x00010b4d3570();
      if (extraout_x8_00 == 0) {
        func_0x00010b4d3470();
        func_0x00010b4d36b8();
        FUN_10b4d3084();
        func_0x00010b4d351c();
        func_0x00010b4d3654();
        func_0x00010b4d3598();
        func_0x00010b4d34d4();
        func_0x00010b4d35b8(uStack_a8);
        func_0x00010b4d35e0();
        return;
      }
      func_0x00010b4d35d8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 8);
      func_0x00010b4d35f8();
    }
  }
  return;
}



/* Entry: 10b4d3084; end: 10b4d30b7;  */

void FUN_10b4d3084(void)

{
  undefined8 uStack_58;
  
  func_0x00010b4d34d4();
  func_0x00010b4d35b8(uStack_58);
  func_0x00010b4d35e0();
  return;
}



/* Entry: 10b4d30b8; end: 10b4d3177;  */

/* WARNING: Possible PIC construction at 0x00010b4d30dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4d30e0) */

void FUN_10b4d30b8(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar1 = (ulong)(uint)(param_2 << 3);
    while( true ) {
      if (uVar1 < 0x80) break;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (lVar2,(int)(char)uVar1 | 0xffffff80);
      uVar1 = uVar1 >> 7;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)
              (lVar2);
    return;
  }
  return;
}



/* Entry: 10b4d3178; end: 10b4d3207;  */

void FUN_10b4d3178(long *param_1,int param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_38;
  
  plVar1 = &lStack_38;
  lStack_38 = param_3;
  func_0x000107c30264(plVar1);
  if (lStack_38 != 0) {
    if (*param_1 == 0) {
      FUN_10b4d334c(param_4,lStack_38,plVar1);
    }
    else {
      func_0x00010b4d2194(param_2 << 3 | 2,*param_1);
      func_0x00010b4d2194((long)(int)plVar1,*param_1);
      FUN_10b4d3370(param_4,lStack_38,plVar1,*param_1);
    }
  }
  return;
}



/* Entry: 10b4d3208; end: 10b4d32bf;  */

long * FUN_10b4d3208(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = param_2 << 3;
  if (*param_1 != 0) {
    func_0x00010b4d2194(uVar3 | 3);
  }
  iVar1 = *(int *)(param_4 + 0x58);
  *(int *)(param_4 + 0x58) = iVar1 + -1;
  if (0 < iVar1) {
    *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
    plVar4 = param_1;
    func_0x00010b4d2370(param_1,param_3,param_4);
    *(ulong *)(param_4 + 0x58) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) + -1,
                  (int)*(undefined8 *)(param_4 + 0x58) + 1);
    uVar2 = *(uint *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x50) = 0;
    if (uVar2 == (uVar3 | 3) && plVar4 != (long *)0x0) {
      if (*param_1 == 0) {
        return plVar4;
      }
      func_0x00010b4d2194(uVar3 | 4);
      return plVar4;
    }
  }
  return (long *)0x0;
}



/* Entry: 10b4d32c0; end: 10b4d334b;  */

undefined8 FUN_10b4d32c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x00010ae6bd08(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 10b4d334c; end: 10b4d336f;  */

long FUN_10b4d334c(long param_1,long param_2,int param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  
  lVar1 = (*(long *)(param_1 + 8) - param_2) + 0x10;
  lVar4 = (long)param_3;
  cVar2 = SBORROW8(lVar1,lVar4);
  cVar3 = lVar1 - lVar4 < 0;
  if (lVar4 <= lVar1) {
    return param_2 + param_3;
  }
  iVar5 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  lVar4 = param_1;
  do {
    if ((*(long *)(param_1 + 0x10) == 0) || (func_0x00010b4d3608(), cVar3 != cVar2)) {
      return 0;
    }
    func_0x00010b4d35d0();
    if (lVar4 == 0) {
      return 0;
    }
    param_3 = param_3 - iVar5;
    iVar5 = (*(int *)(param_1 + 8) - (int)(lVar4 + 0x10)) + 0x10;
    cVar2 = SBORROW4(param_3,iVar5);
    cVar3 = param_3 - iVar5 < 0;
  } while (iVar5 < param_3);
  return lVar4 + 0x10 + (long)param_3;
}



/* Entry: 10b4d3370; end: 10b4d33c3;  */

long FUN_10b4d3370(long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  if ((long)param_3 <= (*(long *)(param_1 + 8) - param_2) + 0x10) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_4,param_2,(long)param_3);
    return param_2 + param_3;
  }
  lVar2 = *(long *)(param_1 + 8);
  if ((long)param_3 <= (lVar2 - param_2) + (long)*(int *)(param_1 + 0x1c)) {
    lVar2 = (long)*(char *)(param_4 + 0x17);
    if (lVar2 < 0) {
      lVar2 = *(long *)(param_4 + 8);
    }
    func_0x00010b4d366c(lVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_4);
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = ((int)lVar2 - (int)param_2) + 0x10;
  do {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (func_0x00010b4d2524(param_4,param_2,iVar1), *(int *)(param_1 + 0x1c) < 0x11)) {
      return 0;
    }
    param_2 = param_1;
    FUN_10b4d1d34();
    if (param_2 == 0) {
      return 0;
    }
    param_3 = param_3 - iVar1;
    param_2 = param_2 + 0x10;
    iVar1 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  } while (iVar1 < param_3);
  func_0x00010b4d2524(param_4,param_2,param_3);
  return param_2 + param_3;
}



/* Entry: 10b4d33c4; end: 10b4d376f;  */

undefined1 * FUN_10b4d33c4(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w24;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined2 uStack0000000000000038;
  undefined1 auStack_138 [264];
  
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = param_1[1];
  uStack0000000000000020 = *param_1;
  uStack0000000000000014 = 0x10;
  if (unaff_w24 < 0x11) {
    return (undefined1 *)0x0;
  }
  func_0x00010ae6abb8(auStack_138,&UNK_10f773ed4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,(long)unaff_w24);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,0x10);
  puVar1 = auStack_138;
  func_0x00010ae6a8f8(puVar1);
  func_0x00010ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10b4d3770; end: 10b4d37eb;  */

uint FUN_10b4d3770(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  uVar4 = param_1[1];
  puVar3 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar3 = (ulong *)(*param_2 + 7);
  }
  func_0x000107c303c0();
  uVar1 = (uint)param_2[1];
  if ((int)(uint)param_1 <= (int)(uint)param_2[1]) {
    uVar1 = (uint)param_1;
  }
  puVar2 = puVar2 + (int)uVar4;
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    func_0x000107c39cac(*puVar2,*puVar3);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return uVar1;
}



/* Entry: 10b4d37ec; end: 10b4d3877;  */

void FUN_10b4d37ec(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    (*param_3)(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4d3878; end: 10b4d38db;  */

long FUN_10b4d3878(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = 0x18;
    __Znwm(0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  else {
    FUN_10b4d80a4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  return lVar1;
}



/* Entry: 10b4d38dc; end: 10b4d3947;  */

undefined8 FUN_10b4d38dc(void)

{
  int in_w8;
  long in_x9;
  long unaff_x19;
  
  *(int *)(unaff_x19 + 8) = in_w8 + 1;
  return *(undefined8 *)(in_x9 + (long)in_w8 * 8 + 8);
}



/* Entry: 10b4d3948; end: 10b4d3b7f;  */

void FUN_10b4d3948(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c28094(param_1,*(undefined8 *)(param_1 + 0x10));
  *puVar1 = param_2;
  *(undefined4 **)(param_1 + 0x10) = puVar1 + 1;
  return;
}



/* Entry: 10b4d3b80; end: 10b4d3bf7;  */

/* WARNING: Possible PIC construction at 0x00010b4d3bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4d3bb8) */

void FUN_10b4d3b80(int param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  uint uVar1;
  
  func_0x000107c28094(param_4,param_3);
  for (uVar1 = param_1 << 3 | 3; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_4 = (byte)uVar1 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar1;
  return;
}



/* Entry: 10b4d3bf8; end: 10b4d3e0b;  */

void FUN_10b4d3bf8(undefined8 **param_1,long param_2,undefined8 **param_3,long param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar9;
  long extraout_x9_00;
  undefined8 auStack_180 [3];
  undefined8 **ppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 **ppuStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_78;
  undefined8 *puStack_70;
  long lStack_48;
  
  ppuVar5 = (undefined8 **)auStack_180;
  ppuVar4 = (undefined8 **)auStack_180;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  ppuVar8 = (undefined8 **)&UNK_10f7741f2;
  pppuVar2 = &ppuStack_168;
  func_0x000107c278b8();
  if (param_4 != 0) {
    if (param_2 == 0) {
      func_0x00010b4d3f84();
      ppuStack_a8 = param_3;
      uStack_a0 = param_4;
      ppuStack_78 = pppuVar2;
      puStack_70 = ppuVar8;
      func_0x00010b4d3f78();
      ppuStack_d8 = pppuVar2;
      puStack_d0 = ppuVar8;
      func_0x000107c2ba44(&puStack_108,&ppuStack_78,&ppuStack_a8,&ppuStack_d8);
      ppuVar8 = &puStack_108;
      func_0x000107c27b9c(&ppuStack_168);
      ppuVar4 = &puStack_108;
    }
    else {
      func_0x00010b4d3f84();
      pppuVar3 = (undefined8 ***)&DAT_10f62a9de;
      ppuStack_a8 = param_1;
      uStack_a0 = param_2;
      ppuStack_78 = pppuVar2;
      puStack_70 = ppuVar8;
      func_0x000107c284bc();
      puStack_108 = param_3;
      puStack_100 = (undefined8 *)param_4;
      ppuStack_d8 = pppuVar3;
      puStack_d0 = ppuVar8;
      func_0x00010b4d3f78();
      ppuStack_138 = pppuVar3;
      puStack_130 = ppuVar8;
      func_0x00010b4d3f4c();
      func_0x0001089a5b70();
      func_0x000107c27b9c(&ppuStack_168);
      ppuVar8 = ppuVar5;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
  }
  ppuVar4 = (undefined8 **)&UNK_10f7741f3;
  func_0x000107c284bc();
  uStack_a0 = uStack_160;
  ppuStack_a8 = ppuStack_168;
  if (-1 < (char)bStack_151) {
    uStack_a0 = (ulong)bStack_151;
    ppuStack_a8 = &ppuStack_168;
  }
  ppuVar5 = (undefined8 **)&UNK_10f774200;
  ppuStack_78 = ppuVar4;
  puStack_70 = ppuVar8;
  func_0x000107c284bc();
  ppuStack_d8 = ppuVar5;
  puStack_d0 = ppuVar8;
  func_0x000107c284bc();
  puVar6 = &UNK_10f774223;
  puStack_108 = param_5;
  puStack_100 = ppuVar8;
  func_0x000107c284bc();
  ppuStack_138 = (undefined8 **)puVar6;
  puStack_130 = ppuVar8;
  func_0x00010b4d3f4c();
  func_0x0001089ec284();
  func_0x00010bdb2988(&ppuStack_78,&UNK_10f7741b7,0x25b);
  func_0x00010ae6c448();
  func_0x00010bdb2990();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_168);
  puVar7 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_168);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
  __Unwind_Resume(puVar7);
  func_0x00010b4d3f9c();
  lVar1 = extraout_x8;
  lVar9 = extraout_x9;
  while (lVar9 != 0) {
    func_0x00010b4d3fcc(lVar1 + 4);
    lVar1 = extraout_x8_00;
    lVar9 = extraout_x9_00;
  }
  return;
}



/* Entry: 10b4d3e0c; end: 10b4d3fe7;  */

void FUN_10b4d3e0c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  undefined8 unaff_x30;
  
  func_0x00010b4d3f9c();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != 0) {
    func_0x00010b4d3fcc(lVar1 + 4,param_1,unaff_x30);
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  return;
}



/* Entry: 10b4d3fe8; end: 10b4d4017;  */

long FUN_10b4d3fe8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b4d4018(param_1);
  }
  return param_1;
}



/* Entry: 10b4d4018; end: 10b4d40e3;  */

void FUN_10b4d4018(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1[7] + param_1[0xb] + (param_1[2] - *param_1)) {
    func_0x000107c39cc4(*(undefined8 *)(param_1 + 4));
    iVar1 = param_1[2];
    iVar2 = param_1[0xb];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[0xb] = 0;
    param_1[6] = (param_1[6] - iVar2) + ((int)*(undefined8 *)param_1 - iVar1);
    param_1[7] = 0;
  }
  return;
}



/* Entry: 10b4d40e4; end: 10b4d4127;  */

void FUN_10b4d40e4(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x2c);
  *(long *)(param_1 + 8) = lVar1;
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x30)) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  uVar3 = *(int *)(param_1 + 0x18) - iVar2;
  if (uVar3 == 0 || *(int *)(param_1 + 0x18) < iVar2) {
    uVar3 = 0;
  }
  else {
    *(ulong *)(param_1 + 8) = lVar1 - (ulong)uVar3;
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  return;
}



/* Entry: 10b4d4128; end: 10b4d41b3;  */

void FUN_10b4d4128(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  FUN_10b4d40e4();
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b4d41b4; end: 10b4d41ef;  */

int FUN_10b4d41b4(int *param_1)

{
  if (param_1[10] == 0x7fffffff) {
    return -1;
  }
  return (param_1[10] - param_1[6]) + param_1[0xb] + (param_1[2] - *param_1);
}



/* Entry: 10b4d41f0; end: 10b4d42ef;  */

void FUN_10b4d41f0(void)

{
  func_0x00010b4d568c();
  func_0x00010b4d567c();
  return;
}



/* Entry: 10b4d42f0; end: 10b4d448f;  */

void FUN_10b4d42f0(int *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  if (param_1[2] == (int)uVar2) {
    piVar1 = param_1;
    func_0x00010b4d434c();
    if ((int)piVar1 == 0) {
      return;
    }
    uVar2 = *(undefined8 *)param_1;
  }
  *param_2 = uVar2;
  *param_3 = param_1[2] - *param_1;
  return;
}



/* Entry: 10b4d4490; end: 10b4d450b;  */

bool FUN_10b4d4490(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  ulong unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000107c39cc0();
  do {
    iVar3 = param_3;
    lVar1 = *unaff_x19;
    iVar4 = (int)unaff_x19[1] - (int)lVar1;
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) {
      _memcpy(unaff_x20,lVar1,(long)iVar3);
      *unaff_x19 = *unaff_x19 + (long)iVar3;
      break;
    }
    uVar2 = unaff_x20;
    _memcpy(unaff_x20,lVar1,(long)iVar4);
    unaff_x20 = unaff_x20 + (long)iVar4;
    func_0x00010b4d571c(*unaff_x19 + (long)iVar4);
    param_3 = iVar3 - iVar4;
  } while ((uVar2 & 1) != 0);
  return iVar3 <= iVar4;
}



/* Entry: 10b4d450c; end: 10b4d459b;  */

bool FUN_10b4d450c(int *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int extraout_w8;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  int iVar7;
  
  if ((int)param_3 < 0) {
    bVar1 = false;
  }
  else {
    func_0x000107c39cc0();
    iVar4 = (int)param_3;
    if (param_1[2] - *param_1 < iVar4) {
      plVar2 = unaff_x19;
      plVar3 = unaff_x20;
      func_0x000107c39cc0();
      lVar5 = (long)*(char *)((long)plVar3 + 0x17);
      if (lVar5 < 0) {
        lVar5 = unaff_x20[1];
      }
      if (lVar5 != 0) {
        plVar2 = unaff_x20;
        func_0x000107c27fa8();
      }
      func_0x00010b4d5794();
      if ((extraout_w8 != 0x7fffffff) &&
         (iVar7 = (extraout_w8 - (int)unaff_x19[3]) +
                  *(int *)((long)unaff_x19 + 0x2c) + ((int)unaff_x19[1] - (int)*unaff_x19),
         (iVar4 <= iVar7 && 0 < iVar4) && 0 < iVar7)) {
        plVar2 = unaff_x20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                  (unaff_x20,param_3 & 0xffffffff);
      }
      do {
        lVar5 = *unaff_x19;
        iVar7 = (int)unaff_x19[1] - (int)lVar5;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar7);
        if (iVar4 - iVar7 == 0 || iVar4 < iVar7) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (unaff_x20,lVar5,(long)iVar4);
          *unaff_x19 = *unaff_x19 + (long)iVar4;
          break;
        }
        if (iVar7 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (long)iVar7;
          plVar2 = unaff_x20;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (unaff_x20,lVar5,lVar6);
          lVar5 = *unaff_x19;
        }
        func_0x00010b4d571c(lVar5 + lVar6);
      } while (((ulong)plVar2 & 1) != 0);
      return iVar4 <= iVar7;
    }
    func_0x000107c3026c();
    if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
      unaff_x20 = (long *)*unaff_x20;
    }
    _memcpy(unaff_x20,*unaff_x19,param_3 & 0xffffffff);
    *unaff_x19 = *unaff_x19 + (param_3 & 0xffffffff);
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b4d459c; end: 10b4d47ab;  */

bool FUN_10b4d459c(ulong param_1,long param_2,int param_3)

{
  int extraout_w8;
  long lVar1;
  long *unaff_x19;
  ulong unaff_x20;
  int iVar2;
  long lVar3;
  int iVar4;
  
  func_0x000107c39cc0();
  lVar1 = (long)*(char *)(param_2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(unaff_x20 + 8);
  }
  if (lVar1 != 0) {
    param_1 = unaff_x20;
    func_0x000107c27fa8();
  }
  func_0x00010b4d5794();
  if ((extraout_w8 != 0x7fffffff) &&
     (iVar2 = (extraout_w8 - (int)unaff_x19[3]) +
              *(int *)((long)unaff_x19 + 0x2c) + ((int)unaff_x19[1] - (int)*unaff_x19),
     (param_3 <= iVar2 && 0 < param_3) && 0 < iVar2)) {
    param_1 = unaff_x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  }
  do {
    iVar2 = param_3;
    lVar1 = *unaff_x19;
    iVar4 = (int)unaff_x19[1] - (int)lVar1;
    if (iVar2 - iVar4 == 0 || iVar2 < iVar4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      *unaff_x19 = *unaff_x19 + (long)iVar2;
      break;
    }
    if (iVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (long)iVar4;
      param_1 = unaff_x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      lVar1 = *unaff_x19;
    }
    func_0x00010b4d571c(lVar1 + lVar3);
    param_3 = iVar2 - iVar4;
  } while ((param_1 & 1) != 0);
  return iVar2 <= iVar4;
}



/* Entry: 10b4d47ac; end: 10b4d49ab;  */

void FUN_10b4d47ac(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)*param_1;
  if ((int)param_1[1] - (int)puVar1 < 4) {
    puVar1 = &uStack_24;
    FUN_10b4d4490(param_1,&uStack_24,4);
    if ((int)param_1 == 0) {
      return;
    }
  }
  else {
    *param_1 = (long)(puVar1 + 1);
  }
  *param_2 = *puVar1;
  return;
}



/* Entry: 10b4d49ac; end: 10b4d4aab;  */

ulong FUN_10b4d49ac(ulong *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar3;
  
  uVar3 = *param_1;
  if (((int)param_1[1] - (int)uVar3 < 10) && (param_1[1] <= uVar3)) {
    func_0x00010b4d4884();
    uVar3 = (ulong)param_1 & 0xffffffff;
    if ((param_2 & 1) == 0) {
      uVar3 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = (param_2 + (uint)*(byte *)(uVar3 + 1) * 0x80) - 0x80;
    if ((char)*(byte *)(uVar3 + 1) < '\0') {
      uVar2 = (uVar2 + (uint)*(byte *)(uVar3 + 2) * 0x4000) - 0x4000;
      if ((char)*(byte *)(uVar3 + 2) < '\0') {
        uVar2 = (uVar2 + (uint)*(byte *)(uVar3 + 3) * 0x200000) - 0x200000;
        if ((char)*(byte *)(uVar3 + 3) < '\0') {
          pcVar5 = (char *)(uVar3 + 5);
          uVar2 = uVar2 + *(char *)(uVar3 + 4) * 0x10000000 + 0xf0000000;
          if (*(char *)(uVar3 + 4) < 0) {
            iVar6 = 5;
            pcVar4 = pcVar5;
            do {
              if (iVar6 == 0) {
                return 0xffffffffffffffff;
              }
              pcVar5 = pcVar4 + 1;
              cVar1 = *pcVar4;
              iVar6 = iVar6 + -1;
              pcVar4 = pcVar5;
            } while (cVar1 < '\0');
          }
        }
        else {
          pcVar5 = (char *)(uVar3 + 4);
        }
      }
      else {
        pcVar5 = (char *)(uVar3 + 3);
      }
    }
    else {
      pcVar5 = (char *)(uVar3 + 2);
    }
    uVar3 = (ulong)uVar2;
    *param_1 = (ulong)pcVar5;
  }
  return uVar3;
}



/* Entry: 10b4d4aac; end: 10b4d4c4f;  */

ulong FUN_10b4d4aac(byte *param_1,uint param_2)

{
  byte bVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint uVar2;
  byte *extraout_x8;
  ulong extraout_x8_00;
  undefined8 *unaff_x19;
  ulong uStack_28;
  
  func_0x00010b4d57a8();
  if (((bool)in_ZR || in_NG != in_OV) && (extraout_x8 <= param_1)) {
    func_0x00010b4d4884();
    uVar2 = (uint)unaff_x19;
    if ((param_2 & (ulong)unaff_x19 >> 0x1f == 0) == 0) {
      uVar2 = 0xffffffff;
    }
    return (ulong)uVar2;
  }
  bVar1 = param_1[1];
  if ((long)(char)bVar1 < 0) {
    if ((char)param_1[2] < '\0') {
      if ((char)param_1[3] < '\0') {
        if ((char)param_1[4] < '\0') {
          if ((char)param_1[5] < '\0') {
            if ((char)param_1[6] < '\0') {
              if ((char)param_1[7] < '\0') {
                if ((char)param_1[8] < '\0') {
                  if ((char)param_1[9] < '\0') {
                    return 0xffffffff;
                  }
                  func_0x00010b4d5324();
                }
                else {
                  func_0x00010b4d52f0();
                }
              }
              else {
                func_0x00010b4d52bc();
              }
            }
            else {
              func_0x00010b4d5288();
            }
          }
          else {
            func_0x00010b4d5254();
          }
        }
        else {
          func_0x00010b4d5220();
        }
      }
      else {
        FUN_10b4d51ec();
      }
    }
    else {
      param_1 = param_1 + 3;
      func_0x00010b4d5744((ulong)bVar1 << 7);
      uStack_28 = extraout_x8_00;
    }
  }
  else {
    uStack_28 = ((ulong)*param_1 + (long)(char)bVar1 * 0x80) - 0x80;
    param_1 = param_1 + 2;
  }
  if (uStack_28 >> 0x1f != 0) {
    return 0xffffffff;
  }
  *unaff_x19 = param_1;
  return uStack_28;
}



/* Entry: 10b4d4c50; end: 10b4d4d57;  */

int FUN_10b4d4c50(long *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  iVar5 = (int)param_1[1] - (int)lVar1;
  if ((9 < iVar5) || (0 < iVar5)) {
    if (param_2 == 0) {
      iVar5 = 0;
      pcVar7 = (char *)(lVar1 + 1);
    }
    else {
      iVar5 = param_2 + (uint)*(byte *)(lVar1 + 1) * 0x80 + -0x80;
      if ((char)*(byte *)(lVar1 + 1) < '\0') {
        iVar5 = iVar5 + (uint)*(byte *)(lVar1 + 2) * 0x4000 + -0x4000;
        if ((char)*(byte *)(lVar1 + 2) < '\0') {
          iVar5 = iVar5 + (uint)*(byte *)(lVar1 + 3) * 0x200000 + -0x200000;
          if ((char)*(byte *)(lVar1 + 3) < '\0') {
            pcVar7 = (char *)(lVar1 + 5);
            iVar5 = iVar5 + *(char *)(lVar1 + 4) * 0x10000000 + -0x10000000;
            if (*(char *)(lVar1 + 4) < 0) {
              iVar8 = 5;
              pcVar6 = pcVar7;
              do {
                if (iVar8 == 0) {
                  return 0;
                }
                pcVar7 = pcVar6 + 1;
                cVar2 = *pcVar6;
                iVar8 = iVar8 + -1;
                pcVar6 = pcVar7;
              } while (cVar2 < '\0');
            }
          }
          else {
            pcVar7 = (char *)(lVar1 + 4);
          }
        }
        else {
          pcVar7 = (char *)(lVar1 + 3);
        }
      }
      else {
        pcVar7 = (char *)(lVar1 + 2);
      }
    }
    *param_1 = (long)pcVar7;
    return iVar5;
  }
  if ((int)param_1[1] == (int)lVar1) {
    if (((0 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[3] == (int)param_1[5])) &&
       ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6])) {
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      return 0;
    }
  }
  if ((*param_1 == param_1[1]) &&
     (plVar4 = param_1, func_0x00010b4d434c(), ((ulong)plVar4 & 1) == 0)) {
    if ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6]) {
      bVar3 = true;
    }
    else {
      bVar3 = (int)param_1[5] == (int)param_1[6];
    }
    uStack_28._0_4_ = 0;
    *(bool *)((long)param_1 + 0x24) = bVar3;
  }
  else {
    uStack_28 = 0;
    func_0x000106e5f2b8(param_1,&uStack_28);
    if ((int)param_1 == 0) {
      uStack_28._0_4_ = 0;
    }
  }
  return (int)uStack_28;
}



/* Entry: 10b4d4d58; end: 10b4d4deb;  */

bool FUN_10b4d4d58(long *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = 0;
  uVar5 = 0;
  do {
    bVar4 = lVar6 != 10;
    if (lVar6 == 10) {
      uVar5 = 0;
      break;
    }
    while (pbVar1 = (byte *)*param_1, pbVar1 == (byte *)param_1[1]) {
      plVar3 = param_1;
      func_0x00010b4d434c();
      if (((ulong)plVar3 & 1) == 0) {
        uVar5 = 0;
        bVar4 = false;
        goto LAB_10b4d4dd4;
      }
    }
    bVar2 = *pbVar1;
    uVar5 = ((ulong)bVar2 & 0x7f) << (lVar6 * 7 & 0x3fU) | uVar5;
    *param_1 = (long)(pbVar1 + 1);
    lVar6 = lVar6 + 1;
  } while ((char)bVar2 < '\0');
LAB_10b4d4dd4:
  *param_2 = uVar5;
  return bVar4;
}



/* Entry: 10b4d4dec; end: 10b4d4e97;  */

long FUN_10b4d4dec(int *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = 0x10;
  if (*(long *)(param_1 + 2) != 0) {
    iVar3 = 0;
  }
  plVar2 = *(long **)(param_1 + 0xc);
  (**(code **)(*plVar2 + 0x20))();
  return (long)plVar2 - (long)((iVar1 - param_2) + iVar3);
}



/* Entry: 10b4d4e98; end: 10b4d4f13;  */

long FUN_10b4d4e98(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = ((int)*param_1 - (int)param_4) + 0x10;
    if (param_3 - iVar2 == 0 || param_3 < iVar2) break;
    func_0x00010b4d5738();
    lVar1 = (long)param_4 + (long)iVar2;
    param_4 = param_1;
    func_0x000107c303e4(param_1,lVar1);
    param_3 = param_3 - iVar2;
  }
  func_0x00010b4d5738();
  return (long)param_4 + (long)param_3;
}



/* Entry: 10b4d4f14; end: 10b4d5053;  */

long * FUN_10b4d4f14(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_3;
  if ((*param_1 - (long)param_4) + 0x10 <= (long)iVar4) {
    plVar2 = param_1;
    func_0x000107c303e0(param_1,param_4);
    plVar3 = (long *)param_1[6];
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar2;
  }
  if (*param_1 - (long)param_4 < (long)iVar4) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_4 + (long)iVar5;
      param_4 = param_1;
      func_0x000107c303e4(param_1,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,param_2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)iVar4);
}



/* Entry: 10b4d5054; end: 10b4d50cf;  */

long * FUN_10b4d5054(long param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  int iVar7;
  int iVar8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_a8;
  undefined8 uStack_28;
  
  plVar4 = &lStack_c0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b4d538c(&lStack_c0,param_1);
  while (uVar2 = uStack_b8, lStack_a8 != 0) {
    param_1 = lStack_c0;
    param_3 = uStack_b8;
    _memcpy(param_2);
    param_2 = (long *)((long)param_2 + uVar2);
    plVar4 = &lStack_c0;
    func_0x00010b4d5358();
  }
  func_0x00010b4d5780(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010b4d564c();
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar7 = (int)param_3;
  if ((*(char *)((long)plVar4 + 0x39) == '\x01') &&
     ((*plVar4 - (long)param_4) + 0x10 <= (long)iVar7)) {
    plVar3 = plVar4;
    func_0x000107c303e0(plVar4,param_4);
    plVar4 = (long *)plVar4[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1,param_3);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*plVar4 - (long)param_4 < (long)iVar7) {
    while( true ) {
      iVar8 = ((int)*plVar4 - (int)param_4) + 0x10;
      iVar7 = (int)param_3;
      param_3 = (ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_4 + (long)iVar8);
      param_4 = plVar4;
      func_0x000107c303e4(plVar4,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar7);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)iVar7);
}



/* Entry: 10b4d50d0; end: 10b4d5167;  */

long * FUN_10b4d50d0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar5;
  uint extraout_w10_00;
  int iVar6;
  int iVar7;
  
  func_0x00010b4d564c();
  func_0x00010b4d56cc();
  uVar5 = extraout_w10;
  while (0x7f < uVar5) {
    func_0x00010b4d576c();
    uVar5 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar4 = extraout_x8;
  while (0x7f < (uint)uVar4) {
    func_0x00010b4d5758();
    uVar4 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar6 = (int)param_3;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)param_4) + 0x10 <= (long)iVar6)) {
    plVar2 = param_1;
    func_0x000107c303e0(param_1,param_4);
    plVar3 = (long *)param_1[6];
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar2;
  }
  if (*param_1 - (long)param_4 < (long)iVar6) {
    while( true ) {
      iVar7 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_4 + (long)iVar7;
      param_4 = param_1;
      func_0x000107c303e4(param_1,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)iVar6);
}



/* Entry: 10b4d5168; end: 10b4d51a3;  */

byte * FUN_10b4d5168(undefined8 *param_1,char *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar8;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  byte *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  byte *pbVar9;
  int iVar10;
  long lStack_c0;
  byte *pbStack_b8;
  long lStack_a8;
  
  if (((long)*param_2 & 1U) == 0) {
    uVar8 = (ulong)(long)*param_2 >> 1;
  }
  else {
    uVar8 = **(ulong **)(param_2 + 8);
  }
  while( true ) {
    pbVar3 = param_3 + 1;
    if ((uint)uVar8 < 0x80) break;
    *param_3 = (byte)uVar8 | 0x80;
    uVar8 = (ulong)((uint)uVar8 >> 7);
    param_3 = pbVar3;
  }
  *param_3 = (byte)uVar8;
  func_0x000107c39cc0();
  iVar6 = ((int)*param_1 - (int)pbVar3) + 0x10;
  uVar8 = (ulong)*param_2;
  if (param_1[6] == 0) {
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar8 >> 1;
    }
    else {
      uVar8 = **(ulong **)(unaff_x20 + 8);
    }
    uVar2 = uVar8 == (long)iVar6;
    if ((long)uVar8 <= (long)iVar6) goto LAB_10b4d503c;
  }
  else {
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar8 >> 1;
    }
    else {
      uVar8 = **(ulong **)(unaff_x20 + 8);
    }
    if (((long)uVar8 <= (long)iVar6) && (uVar2 = uVar8 == 0x1ff, (long)uVar8 < 0x200)) {
LAB_10b4d503c:
      pbVar5 = (byte *)&lStack_c0;
      uVar7 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pbVar9 = pbVar3;
      FUN_10b4d538c();
      while (pbVar1 = pbStack_b8, lStack_a8 != 0) {
        unaff_x20 = lStack_c0;
        pbVar9 = pbStack_b8;
        _memcpy(pbVar3);
        pbVar3 = pbVar3 + (long)pbVar1;
        pbVar5 = (byte *)&lStack_c0;
        func_0x00010b4d5358();
      }
      func_0x00010b4d5780(uVar7);
      if ((bool)uVar2) {
        return pbVar3;
      }
      ___stack_chk_fail();
      func_0x00010b4d564c();
      func_0x00010b4d56cc();
      uVar7 = extraout_x10;
      while (0x7f < (uint)uVar7) {
        func_0x00010b4d576c();
        uVar7 = extraout_x10_00;
      }
      func_0x00010b4d56b4();
      uVar7 = extraout_x8;
      while (0x7f < (uint)uVar7) {
        func_0x00010b4d5758();
        uVar7 = extraout_x8_00;
      }
      func_0x00010b4d5660();
      iVar6 = (int)pbVar9;
      if ((pbVar5[0x39] == 1) && ((*(long *)pbVar5 - (long)param_4) + 0x10 <= (long)iVar6)) {
        pbVar3 = pbVar5;
        func_0x000107c303e0(pbVar5,param_4);
        plVar4 = *(long **)(pbVar5 + 0x30);
        (**(code **)(*plVar4 + 0x28))(plVar4,unaff_x20,pbVar9);
        if (((ulong)plVar4 & 1) != 0) {
          return pbVar3;
        }
        func_0x00010b4d56e4();
        return pbVar3;
      }
      if ((long)iVar6 <= *(long *)pbVar5 - (long)param_4) {
        _memcpy(param_4);
        return param_4 + iVar6;
      }
      while( true ) {
        iVar10 = ((int)*(long *)pbVar5 - (int)param_4) + 0x10;
        iVar6 = (int)pbVar9;
        pbVar9 = (byte *)(ulong)(uint)(iVar6 - iVar10);
        if (iVar6 - iVar10 == 0 || iVar6 < iVar10) break;
        func_0x00010b4d5738();
        pbVar3 = param_4 + iVar10;
        param_4 = pbVar5;
        func_0x000107c303e4(pbVar5,pbVar3);
      }
      func_0x00010b4d5738();
      return param_4 + iVar6;
    }
    unaff_x21 = unaff_x19;
    func_0x000107c303e0();
    plVar4 = *(long **)(unaff_x19 + 0x30);
    (**(code **)(*plVar4 + 0x38))();
    if (((ulong)plVar4 & 1) != 0) {
      return unaff_x21;
    }
  }
  func_0x00010b4d56e4();
  return unaff_x21;
}



/* Entry: 10b4d51a4; end: 10b4d51c7;  */

undefined8 FUN_10b4d51a4(undefined8 param_1)

{
  FUN_10b4d51c8();
  return param_1;
}



/* Entry: 10b4d51c8; end: 10b4d51eb;  */

void FUN_10b4d51c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c303e0(param_1,*(undefined8 *)(param_1 + 0x40));
  *(long *)(param_1 + 0x40) = lVar1;
  return;
}



/* Entry: 10b4d51ec; end: 10b4d538b;  */

long FUN_10b4d51ec(long param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  lVar1 = 0;
  lVar2 = (ulong)*(byte *)(param_1 + 3) << 0x15;
  while (lVar1 != 0x15) {
    func_0x00010b4d569c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
  }
  *param_2 = lVar2;
  return param_1 + 4;
}



/* Entry: 10b4d538c; end: 10b4d548f;  */

undefined8 * FUN_10b4d538c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if ((((long)(char)*param_2 & 1U) == 0) ||
     (plVar2 = *(long **)(param_2 + 8), plVar2 == (long *)0x0)) {
    uVar3 = (ulong)(long)(char)*param_2 >> 1;
    param_1[3] = uVar3;
    pbVar1 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      pbVar1 = (byte *)0x0;
    }
    *param_1 = pbVar1;
    param_1[1] = uVar3;
  }
  else {
    lVar4 = *plVar2;
    param_1[3] = lVar4;
    if (lVar4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      func_0x00010b4d5408(param_1,plVar2);
    }
  }
  return param_1;
}



/* Entry: 10b4d5490; end: 10b4d5513;  */

undefined1  [16] FUN_10b4d5490(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = *param_1;
  bVar1 = *(byte *)((long)param_1 + 0xc);
  if (bVar1 == 1) {
    lVar2 = param_1[2];
    param_1 = (undefined8 *)param_1[3];
    bVar1 = *(byte *)((long)param_1 + 0xc);
  }
  else {
    lVar2 = 0;
  }
  if (bVar1 < 6) {
    lVar3 = param_1[2];
  }
  else {
    lVar3 = (long)param_1 + 0xd;
  }
  auVar4._0_8_ = lVar3 + lVar2;
  return auVar4;
}



/* Entry: 10b4d5514; end: 10b4d5587;  */

long * FUN_10b4d5514(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 4;
  func_0x00010b4d553c();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 10b4d5588; end: 10b4d57bb;  */

undefined8 FUN_10b4d5588(uint *param_1)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((ulong)*(byte *)(*(long *)(param_1 + 4) + 0xf) - 1 == (ulong)(byte)param_1[1]) {
    uVar4 = 0;
    do {
      uVar8 = uVar4;
      if ((*param_1 & ((int)*param_1 >> 0x1f ^ 0xffffffffU)) == uVar8) {
        return 0;
      }
      lVar5 = *(long *)(param_1 + uVar8 * 2 + 6);
      uVar6 = (ulong)*(byte *)((long)param_1 + uVar8 + 5) + 1;
      uVar4 = uVar8 + 1;
    } while (uVar6 == *(byte *)(lVar5 + 0xf));
    *(char *)((long)param_1 + uVar8 + 5) = (char)uVar6;
    lVar7 = (long)(int)(uVar8 + 1);
    do {
      lVar5 = *(long *)(lVar5 + uVar6 * 8 + 0x10);
      lVar3 = lVar7 + -1;
      *(long *)(param_1 + lVar3 * 2 + 4) = lVar5;
      uVar6 = (ulong)*(byte *)(lVar5 + 0xe);
      *(byte *)((long)param_1 + lVar7 + 3) = *(byte *)(lVar5 + 0xe);
      bVar1 = 0 < lVar7;
      lVar7 = lVar3;
    } while (lVar3 != 0 && bVar1);
    lVar5 = lVar5 + uVar6 * 8;
  }
  else {
    bVar2 = (byte)param_1[1] + 1;
    *(byte *)(param_1 + 1) = bVar2;
    lVar5 = *(long *)(param_1 + 4) + (ulong)bVar2 * 8;
  }
  return *(undefined8 *)(lVar5 + 0x10);
}



/* Entry: 10b4d57bc; end: 10b4d5977;  */

undefined8 FUN_10b4d57bc(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  int *piStack_68;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  int iStack_3c;
  undefined8 uStack_38;
  int iStack_2c;
  undefined8 uStack_28;
  
  if (param_3 < 1) {
    uVar5 = 1;
  }
  else {
    iStack_3c = param_3;
    uStack_38 = param_2;
    FUN_10b4d186c(auStack_50,param_2,param_3,0x10);
    uVar4 = (ulong)iStack_3c;
    ppuVar2 = (undefined8 **)auStack_50;
    FUN_10b4d5978();
    puStack_78 = &uStack_38;
    piStack_68 = &iStack_3c;
    puStack_70 = (undefined8 *)auStack_50;
    ppuStack_60 = ppuVar2;
    uStack_58 = uVar4;
    do {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x10))(param_1,&uStack_28,&iStack_2c);
      if (((ulong)plVar3 & 1) == 0) {
LAB_10b4d58f0:
        uStack_98 = uStack_48;
        auStack_50[0] = 1;
        func_0x00010b4d18f0(uStack_38,auStack_a0);
        func_0x00010b4d5c74();
        uVar5 = 0;
        goto LAB_10b4d5914;
      }
      uVar4 = (ulong)(uint)(iStack_2c - iStack_3c);
      iVar1 = iStack_2c;
      if (iStack_2c - iStack_3c != 0 && iStack_3c <= iStack_2c) {
        (**(code **)(*param_1 + 0x18))(param_1);
        iVar1 = iStack_3c;
      }
      uVar6 = (ulong)iVar1;
      uStack_88 = uStack_28;
      uStack_80 = uVar6;
      if (iVar1 == 0) goto LAB_10b4d58f0;
      if (uStack_58 == 0) {
        ppuVar2 = &puStack_78;
        FUN_10b4d59a0();
        ppuStack_60 = ppuVar2;
        uStack_58 = uVar4;
      }
      while (uStack_58 < uVar6) {
        func_0x00010b4d5c7c();
        FUN_10b4d5a28();
        ppuVar2 = &puStack_78;
        FUN_10b4d59a0();
        uVar6 = uStack_80;
        ppuStack_60 = ppuVar2;
        uStack_58 = uVar4;
      }
      func_0x00010b4d5c7c();
      FUN_10b4d5a28();
    } while (0 < iStack_3c);
    uStack_a8 = uStack_48;
    auStack_50[0] = 1;
    func_0x00010b4d18f0(uStack_38,auStack_b0);
    FUN_10b4d1c18(auStack_b0);
    uVar5 = 1;
LAB_10b4d5914:
    FUN_10b4d1c18(auStack_50);
  }
  return uVar5;
}



/* Entry: 10b4d5978; end: 10b4d599f;  */

void FUN_10b4d5978(void)

{
  FUN_10b4d18cc();
  return;
}



/* Entry: 10b4d59a0; end: 10b4d5a27;  */

void FUN_10b4d59a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  *(undefined1 *)puVar1 = 1;
  func_0x00010b4d18f0(uVar2,&uStack_30);
  func_0x00010b4d5c74();
  FUN_10b4d1b44(auStack_40,(long)*(int *)param_1[2]);
  func_0x00010b4d5bf0(param_1[1],auStack_40);
  FUN_10b4d1c18(auStack_40);
  FUN_10b4d5978(param_1[1],(long)*(int *)param_1[2]);
  return;
}



/* Entry: 10b4d5a28; end: 10b4d5aa7;  */

void FUN_10b4d5a28(int *param_1,byte *param_2,long *param_3,long *param_4,long param_5)

{
  _memcpy(*param_3,*param_4,param_5);
  *param_3 = *param_3 + param_5;
  param_3[1] = param_3[1] - param_5;
  *param_4 = *param_4 + param_5;
  param_4[1] = param_4[1] - param_5;
  *param_1 = *param_1 - (int)param_5;
  if ((*param_2 & 1) == 0) {
    **(long **)param_2 = **(long **)param_2 + param_5;
    return;
  }
  *param_2 = *param_2 + (char)param_5 * '\x02';
  return;
}



/* Entry: 10b4d5aa8; end: 10b4d5bbf;  */

undefined8 FUN_10b4d5aa8(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iStack_dc;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_b8;
  long lStack_38;
  ulong uVar2;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  FUN_10b4d1b04();
  iVar1 = (int)uVar2;
  if ((uVar2 & 1) == 0) {
    iStack_dc = 0;
    func_0x00010b4d5c5c();
    uVar3 = 0;
    if (iVar1 == 0) goto LAB_10b4d5b78;
    FUN_10b4d538c(&lStack_d0,param_2);
    while (uVar2 = uStack_c8, lVar5 = lStack_d0, lStack_b8 != 0) {
      while ((ulong)(long)iStack_dc < uVar2) {
        uVar4 = uStack_d8;
        _memcpy(uStack_d8,lVar5);
        func_0x00010b4d5c5c();
        uVar2 = uVar2 - (long)iStack_dc;
        lVar5 = lVar5 + iStack_dc;
        if ((uVar4 & 1) == 0) {
          uVar3 = 0;
          goto LAB_10b4d5b78;
        }
      }
      _memcpy(uStack_d8,lVar5,uVar2);
      uStack_d8 = uStack_d8 + uVar2;
      iStack_dc = iStack_dc - (int)uVar2;
      func_0x00010b4d5358(&lStack_d0);
    }
    (**(code **)(*param_1 + 0x18))(param_1,iStack_dc);
  }
  uVar3 = 1;
LAB_10b4d5b78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail(uVar3);
    func_0x00010ae6bd08();
    return uVar3;
  }
  return uVar3;
}



/* Entry: 10b4d5bc0; end: 10b4d5c33;  */

undefined8 FUN_10b4d5bc0(undefined8 param_1)

{
  func_0x00010ae6bd08(param_1,&UNK_10f7743e4,0x7a);
  return param_1;
}



/* Entry: 10b4d5c34; end: 10b4d5c8f;  */

void FUN_10b4d5c34(byte *param_1,long param_2)

{
  if ((*param_1 & 1) == 0) {
    **(long **)param_1 = **(long **)param_1 + param_2;
    return;
  }
  *param_1 = *param_1 + (char)param_2 * '\x02';
  return;
}



/* Entry: 10b4d5c90; end: 10b4d5ce3;  */

undefined8 * FUN_10b4d5c90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf0d10;
  FUN_10b4d5d78(param_1 + 1);
  FUN_10b4d676c(param_1 + 4,param_1 + 1,param_3);
  return param_1;
}



/* Entry: 10b4d5ce4; end: 10b4d5ce7;  */

ulong FUN_10b4d5ce4(ulong param_1)

{
  ulong uVar1;
  undefined1 auStack_30 [16];
  
  if ((*(char *)(param_1 + 0xc) == '\x01') && (uVar1 = param_1, FUN_10b4d5ce8(), (uVar1 & 1) == 0))
  {
    func_0x00010b4d61ec();
    func_0x00010bdb2988();
    func_0x00010b4d6204();
    _strerror();
    func_0x00010b4d623c();
    func_0x00010bdb2990(auStack_30);
  }
  return param_1;
}



/* Entry: 10b4d5ce8; end: 10b4d5d4f;  */

bool FUN_10b4d5ce8(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  
  if (*(char *)(param_1 + 0xd) != '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    iVar2 = *(int *)(param_1 + 8);
    FUN_10b4d5ed0();
    if (iVar2 != 0) {
      ___error();
      func_0x00010b4d6254();
    }
    return iVar2 == 0;
  }
  func_0x00010b4d61dc();
  func_0x00010b4d61ec();
  func_0x00010bdb2a88();
  func_0x00010b4d61fc();
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    func_0x00010b4d7040();
    FUN_10b4d68a0();
    uVar3 = *(uint *)(unaff_x19 + 0x30);
    if ((int)uVar3 < 1) {
      uVar4 = *(ulong *)(unaff_x19 + 8);
      func_0x00010b4d7104(uVar4,*(undefined8 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x28))
      ;
      uVar3 = (uint)uVar4;
      *(uint *)(unaff_x19 + 0x2c) = uVar3;
      if ((int)uVar3 < 1) {
        if ((int)uVar3 < 0) {
          *(undefined1 *)(unaff_x19 + 0x11) = 1;
        }
        func_0x00010b4d68e0();
        return false;
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      *(ulong *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + (uVar4 & 0xffffffff);
      *unaff_x20 = uVar3;
      *unaff_x21 = lVar1;
    }
    else {
      *unaff_x21 = (*(long *)(unaff_x19 + 0x20) + (long)*(int *)(unaff_x19 + 0x2c)) - (ulong)uVar3;
      *unaff_x20 = uVar3;
      *(undefined4 *)(unaff_x19 + 0x30) = 0;
    }
    return true;
  }
  return false;
}



/* Entry: 10b4d5d50; end: 10b4d5d77;  */

undefined8 FUN_10b4d5d50(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  
  if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
    return 0;
  }
  func_0x00010b4d7040();
  FUN_10b4d68a0();
  uVar2 = *(uint *)(unaff_x19 + 0x30);
  if ((int)uVar2 < 1) {
    uVar3 = *(ulong *)(unaff_x19 + 8);
    func_0x00010b4d7104(uVar3,*(undefined8 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x28));
    uVar2 = (uint)uVar3;
    *(uint *)(unaff_x19 + 0x2c) = uVar2;
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < 0) {
        *(undefined1 *)(unaff_x19 + 0x11) = 1;
      }
      func_0x00010b4d68e0();
      return 0;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    *(ulong *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + (uVar3 & 0xffffffff);
    *unaff_x20 = uVar2;
    *unaff_x21 = lVar1;
  }
  else {
    *unaff_x21 = (*(long *)(unaff_x19 + 0x20) + (long)*(int *)(unaff_x19 + 0x2c)) - (ulong)uVar2;
    *unaff_x20 = uVar2;
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return 1;
}



/* Entry: 10b4d5d78; end: 10b4d5ddb;  */

undefined8 * FUN_10b4d5d78(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cf0d58;
  *(int *)(param_1 + 1) = (int)param_2;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  _fcntl(param_2,3);
  _fcntl(*(undefined4 *)(param_1 + 1),4);
  return param_1;
}



/* Entry: 10b4d5ddc; end: 10b4d5e47;  */

ulong FUN_10b4d5ddc(ulong param_1)

{
  ulong uVar1;
  undefined1 auStack_30 [16];
  
  if ((*(char *)(param_1 + 0xc) == '\x01') && (uVar1 = param_1, FUN_10b4d5ce8(), (uVar1 & 1) == 0))
  {
    func_0x00010b4d61ec();
    func_0x00010bdb2988();
    func_0x00010b4d6204();
    _strerror();
    func_0x00010b4d623c();
    func_0x00010bdb2990(auStack_30);
  }
  return param_1;
}



/* Entry: 10b4d5e48; end: 10b4d5ebb;  */

long FUN_10b4d5e48(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  func_0x00010ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  puVar1 = &UNK_10e52b558;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x00010549023c(lStack_58 + 0x118,puVar1);
  func_0x00010ae6c56c(auStack_98);
  return param_1;
}



/* Entry: 10b4d5ebc; end: 10b4d5ecf;  */

void FUN_10b4d5ebc(void)

{
  FUN_10b4d5ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4d5ed0; end: 10b4d5f0b;  */

int * FUN_10b4d5ed0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  do {
    piVar1 = param_1;
    _close();
    if (-1 < (int)piVar1) {
      return piVar1;
    }
    piVar2 = piVar1;
    ___error();
  } while (*piVar2 == 4);
  return piVar1;
}



/* Entry: 10b4d5f0c; end: 10b4d5f93;  */

long * FUN_10b4d5f0c(long *param_1,long *param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long *extraout_x8;
  long *plVar9;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long alStack_1098 [509];
  
  if ((*(byte *)((long)param_1 + 0xd) & 1) == 0) {
    do {
      plVar3 = (long *)(ulong)*(uint *)(param_1 + 1);
      _read(plVar3,param_2,(long)param_3);
      if (-1 < (int)plVar3) {
        return plVar3;
      }
      plVar5 = plVar3;
      ___error();
    } while ((int)*plVar5 == 4);
    ___error();
    func_0x00010b4d6254();
    return plVar3;
  }
  func_0x00010b4d61dc();
  func_0x00010b4d61ec();
  uVar6 = 0x73;
  func_0x00010bdb2a88();
  func_0x00010b4d61fc();
  if (*(char *)((long)param_1 + 0xd) == '\x01') {
    func_0x00010b4d61dc();
    func_0x00010b4d61ec();
    func_0x00010bdb2a88();
    func_0x00010b4d61fc();
    *param_1 = (long)&PTR_FUN_110cf0d88;
    param_1[1] = (long)&PTR_FUN_110cf0dd0;
    param_1[2] = (long)param_2;
    FUN_10b4d676c(param_1 + 3,param_1 + 1);
    return param_1;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    uVar4 = (ulong)*(uint *)(param_1 + 1);
    uVar6 = 1;
    _lseek(uVar4,(long)(int)param_2);
    if (uVar4 != 0xffffffffffffffff) {
      return param_2;
    }
  }
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar5 = param_1;
  plVar3 = param_2;
  func_0x00010b4d708c(0);
  plVar2 = extraout_x8;
  do {
    plVar9 = plVar2;
    iVar8 = (int)uVar6;
    iVar7 = (int)plVar9;
    uVar1 = (int)param_2 - iVar7;
    if (uVar1 == 0 || (int)param_2 < iVar7) break;
    if (0xfff < (int)uVar1) {
      uVar1 = 0x1000;
    }
    uVar6 = (ulong)uVar1;
    plVar3 = alStack_1098;
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x10))();
    iVar8 = (int)uVar6;
    plVar2 = (long *)(ulong)(uint)((int)plVar5 + iVar7);
  } while (0 < (int)plVar5);
  func_0x00010b4d708c(extraout_x9);
  if (extraout_x9_00 != extraout_x8_00) {
    ___stack_chk_fail();
    *plVar5 = (long)&PTR_FUN_110cf1000;
    plVar5[1] = (long)plVar3;
    *(undefined2 *)(plVar5 + 2) = 0;
    if (iVar8 < 1) {
      iVar8 = 0x2000;
    }
    plVar5[3] = 0;
    plVar5[4] = 0;
    *(undefined4 *)((long)plVar5 + 0x2c) = 0;
    *(undefined4 *)(plVar5 + 6) = 0;
    *(int *)(plVar5 + 5) = iVar8;
    return plVar5;
  }
  return plVar9;
}



/* Entry: 10b4d5f94; end: 10b4d6063;  */

long * FUN_10b4d5f94(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long *extraout_x8;
  long *plVar8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long alStack_1048 [509];
  
  if (*(char *)((long)param_1 + 0xd) == '\x01') {
    FUN_10b4d61dc();
    func_0x00010b4d61ec();
    func_0x00010bdb2a88();
    func_0x00010b4d61fc();
    *param_1 = (long)&PTR_FUN_110cf0d88;
    param_1[1] = (long)&PTR_FUN_110cf0dd0;
    param_1[2] = (long)param_2;
    FUN_10b4d676c(param_1 + 3,param_1 + 1);
    return param_1;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 1);
    param_3 = 1;
    _lseek(uVar3,(long)(int)param_2);
    if (uVar3 != 0xffffffffffffffff) {
      return param_2;
    }
  }
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar4 = param_1;
  plVar5 = param_2;
  func_0x00010b4d708c(0);
  plVar2 = extraout_x8;
  do {
    plVar8 = plVar2;
    iVar7 = (int)param_3;
    iVar6 = (int)plVar8;
    uVar1 = (int)param_2 - iVar6;
    if (uVar1 == 0 || (int)param_2 < iVar6) break;
    if (0xfff < (int)uVar1) {
      uVar1 = 0x1000;
    }
    param_3 = (ulong)uVar1;
    plVar5 = alStack_1048;
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x10))();
    iVar7 = (int)param_3;
    plVar2 = (long *)(ulong)(uint)((int)plVar4 + iVar6);
  } while (0 < (int)plVar4);
  func_0x00010b4d708c(extraout_x9);
  if (extraout_x9_00 == extraout_x8_00) {
    return plVar8;
  }
  ___stack_chk_fail();
  *plVar4 = (long)&PTR_FUN_110cf1000;
  plVar4[1] = (long)plVar5;
  *(undefined2 *)(plVar4 + 2) = 0;
  if (iVar7 < 1) {
    iVar7 = 0x2000;
  }
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined4 *)((long)plVar4 + 0x2c) = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  *(int *)(plVar4 + 5) = iVar7;
  return plVar4;
}



/* Entry: 10b4d6064; end: 10b4d6093;  */

void FUN_10b4d6064(void)

{
  return;
}



/* Entry: 10b4d6094; end: 10b4d60db;  */

void FUN_10b4d6094(long param_1,undefined8 param_2,int param_3)

{
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl
            (*(undefined8 *)(param_1 + 8),param_2,(long)param_3);
  if (*(int *)(*(long *)(param_1 + 8) + 8) == 0) {
    func_0x00010b4d6260();
  }
  return;
}



/* Entry: 10b4d60dc; end: 10b4d60df;  */

void FUN_10b4d60dc(void)

{
  return;
}



/* Entry: 10b4d60e0; end: 10b4d610f;  */

long FUN_10b4d60e0(long param_1)

{
  FUN_10b4d6b8c(param_1 + 0x18);
  FUN_10b4d6b3c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4d6110; end: 10b4d6113;  */

long FUN_10b4d6110(long param_1)

{
  FUN_10b4d6b8c(param_1 + 0x18);
  FUN_10b4d6b3c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4d6114; end: 10b4d6127;  */

void FUN_10b4d6114(void)

{
  FUN_10b4d60e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4d6128; end: 10b4d614b;  */

void FUN_10b4d6128(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  
  param_1 = param_1 + 0x18;
  func_0x00010b4d7040();
  if ((*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) ||
     (lVar3 = unaff_x19, FUN_10b4d6b8c(), (int)lVar3 != 0)) {
    FUN_10b4d6c78();
    iVar1 = *(int *)(unaff_x19 + 0x28);
    iVar2 = *(int *)(unaff_x19 + 0x2c);
    *unaff_x21 = *(long *)(unaff_x19 + 0x20) + (long)iVar2;
    *unaff_x20 = iVar1 - iVar2;
    *(undefined4 *)(unaff_x19 + 0x2c) = *(undefined4 *)(unaff_x19 + 0x28);
  }
  return;
}



/* Entry: 10b4d614c; end: 10b4d617f;  */

bool FUN_10b4d614c(long param_1,undefined8 param_2,int param_3)

{
  int extraout_w8;
  
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
            (*(undefined8 *)(param_1 + 8),param_2,(long)param_3);
  func_0x00010b4d6260(*(undefined8 *)(param_1 + 8));
  return extraout_w8 == 0;
}



/* Entry: 10b4d6180; end: 10b4d6183;  */

long FUN_10b4d6180(long param_1)

{
  FUN_10b4d6798(param_1 + 0x20);
  FUN_10b4d5ddc(param_1 + 8);
  return param_1;
}


