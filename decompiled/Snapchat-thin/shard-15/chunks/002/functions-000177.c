/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b999108; end: 10b999123;  */

void FUN_10b999108(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x000107c3a2c0();
      } while (extraout_w11 != 0);
    }
    func_0x000107c3a2d4();
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b999124; end: 10b99914b;  */

long FUN_10b999124(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b99914c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b99914c; end: 10b999177;  */

undefined8 * FUN_10b99914c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x19999999999999a) {
    puVar1 = (undefined8 *)(param_2 * 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7e090;
  func_0x00010b9991d4(param_1 + 3);
  return param_1;
}



/* Entry: 10b999178; end: 10b9991b3;  */

undefined8 * FUN_10b999178(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7e090;
  func_0x00010b9991d4(param_1 + 3);
  return param_1;
}



/* Entry: 10b9991b4; end: 10b9991b7;  */

void FUN_10b9991b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9991b8; end: 10b9991cb;  */

void FUN_10b9991b8(void)

{
  func_0x00010b9991dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9991cc; end: 10b9991eb;  */

void FUN_10b9991cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9992d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9991ec; end: 10b999243;  */

void FUN_10b9991ec(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x000107c3a2c0();
      } while (extraout_w11 != 0);
    }
    func_0x000107c3a2d4();
    func_0x000107c278ec(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b999244; end: 10b999253;  */

void FUN_10b999244(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b999254; end: 10b99927b;  */

undefined8 * FUN_10b999254(undefined8 *param_1)

{
  FUN_10b99927c(*param_1);
  return param_1;
}



/* Entry: 10b99927c; end: 10b99928b;  */

void FUN_10b99927c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b99928c; end: 10b99929f;  */

void FUN_10b99928c(void)

{
  func_0x00010b9992a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9992a0; end: 10b9992ef;  */

void FUN_10b9992a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9992d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9992f0; end: 10b99931b;  */

void FUN_10b9992f0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  *(undefined1 *)(lVar1 + 0x18) = 1;
  (*(code *)*puVar2)();
  *(undefined1 *)(lVar1 + 0x18) = 0;
  return;
}



/* Entry: 10b99931c; end: 10b999393;  */

void FUN_10b99931c(long *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*param_1 + 0x129);
  if (*pbVar1 == 1) {
    func_0x00010b99a434();
  }
  else {
    __ZNSt3__111timed_mutex4lockEv(*param_1 + 0xb0);
    if ((*pbVar1 & 1) == 0) {
      (*(code *)param_1[2])(param_1 + 2);
    }
    func_0x00010b99a434();
    func_0x00010b99a42c();
  }
  func_0x00010b99a40c();
  func_0x00010b999e90(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b999394; end: 10b999417;  */

void FUN_10b999394(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = lVar2;
  FUN_10b999838(lVar2,param_1[8]);
  if ((int)lVar1 != 0) {
    if (*(byte *)(lVar2 + 0x129) == 1) {
      func_0x00010b99a434();
    }
    else {
      __ZNSt3__111timed_mutex4lockEv(lVar2 + 0xb0);
      if ((*(byte *)(lVar2 + 0x129) & 1) == 0) {
        (*(code *)param_1[2])(param_1 + 2);
      }
      func_0x00010b99a434();
      func_0x00010b99a42c();
    }
  }
  func_0x00010b99a40c();
  func_0x00010b999e90(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b999418; end: 10b9994af;  */

long FUN_10b999418(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  lVar1 = param_1;
  func_0x000107c3a2f4();
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = 0x32aaaba7;
  func_0x000107c3a2f8();
  *(undefined8 *)(lVar1 + 0x70) = extraout_x8;
  func_0x000107c3a2fc();
  __ZNSt3__111timed_mutexC1Ev(lVar1 + 0xb0);
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  func_0x000107c3a2f0(*(undefined8 *)(param_1 + 0x20));
  _dispatch_retain(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 10b9994b0; end: 10b999523;  */

long FUN_10b9994b0(long param_1)

{
  func_0x000107c3a2f4();
  FUN_10b999524();
  _dispatch_queue_set_specific(*(undefined8 *)(param_1 + 0x20),PTR_DAT_1133fc7b0,0,0);
  _dispatch_release(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x00010b999eb8(param_1 + 0x130);
  __ZNSt3__111timed_mutexD1Ev(param_1 + 0xb0);
  FUN_10b999e2c(param_1 + 0x70);
  FUN_10b9a1f08(param_1 + 0x28);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b999524; end: 10b9995b7;  */

void FUN_10b999524(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x129) = 1;
  func_0x00010b99a43c();
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x88);
    if (uVar2 < 0x80) {
      if (uVar2 != 0) {
        *(undefined8 *)(param_1 + 0x80) = 0;
        _memset(*(undefined8 *)(param_1 + 0x70),0x80,uVar2 + 8);
        *(undefined1 *)(*(long *)(param_1 + 0x70) + uVar2) = 0xff;
        uVar2 = *(ulong *)(param_1 + 0x88);
        lVar1 = 6;
        if (uVar2 != 7) {
          lVar1 = uVar2 - (uVar2 >> 3);
        }
        *(long *)(param_1 + 0x98) = lVar1 - *(long *)(param_1 + 0x80);
      }
    }
    else {
      FUN_10b999e50(param_1 + 0x70);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10b9995b8; end: 10b9995bb;  */

long FUN_10b9995b8(long param_1)

{
  func_0x000107c3a2f4();
  FUN_10b999524();
  _dispatch_queue_set_specific(*(undefined8 *)(param_1 + 0x20),PTR_DAT_1133fc7b0,0,0);
  _dispatch_release(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x00010b999eb8(param_1 + 0x130);
  __ZNSt3__111timed_mutexD1Ev(param_1 + 0xb0);
  FUN_10b999e2c(param_1 + 0x70);
  FUN_10b9a1f08(param_1 + 0x28);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b9995bc; end: 10b9995ff;  */

void FUN_10b9995bc(void)

{
  FUN_10b9994b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b999600; end: 10b9996d3;  */

void FUN_10b999600(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 *apuStack_60 [5];
  undefined8 uStack_38;
  
  func_0x00010b99a3f4();
  uStack_38 = extraout_x8;
  FUN_10b9996d4();
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  FUN_10b999740(&uStack_80,param_1);
  uStack_68 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_60,param_2 + 1);
  puVar5[1] = uStack_78;
  *puVar5 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar5[2] = uStack_68;
  (*(code *)apuStack_60[0][2])(puVar5 + 3,apuStack_60);
  (*(code *)*apuStack_60[0])(apuStack_60);
  func_0x00010b999e90(&uStack_80);
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x000104c62cd8(lVar6,puVar5,FUN_10b99931c);
  func_0x00010b99a3b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  piVar1 = (int *)(lVar6 + 0xa8);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((iVar2 == 0) && (*(char *)(lVar6 + 0x128) == '\x01')) {
    func_0x00010b99a4a0();
    if (*(long **)(lVar6 + 0x130) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 0x130) + 0x18))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar6 + 0x28);
    return;
  }
  return;
}



/* Entry: 10b9996d4; end: 10b99973f;  */

void FUN_10b9996d4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xa8);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x128) == '\x01')) {
    func_0x00010b99a4a0();
    if (*(long **)(param_1 + 0x130) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x130) + 0x18))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
    return;
  }
  return;
}



/* Entry: 10b999740; end: 10b9997cb;  */

void FUN_10b999740(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b99a3e4();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b99a3e4();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c278ec(&lStack_30);
  }
  return;
}



/* Entry: 10b9997cc; end: 10b999837;  */

void FUN_10b9997cc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xa8);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((iVar2 + -1 == 0) && (*(char *)(param_1 + 0x128) == '\x01')) {
    func_0x00010b99a4a0();
    if (*(long **)(param_1 + 0x130) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x130) + 0x10))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
    return;
  }
  return;
}



/* Entry: 10b999838; end: 10b9999d7;  */

undefined8 FUN_10b999838(long param_1,long param_2)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  ulong extraout_x10;
  undefined1 uVar5;
  long extraout_x13;
  ulong extraout_x14;
  ulong uVar6;
  ulong extraout_x15;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uStack_38;
  
  func_0x00010b99a43c();
  FUN_10b999ee0(param_2);
  func_0x00010b99a4c4(*(undefined8 *)(param_1 + 0x70));
  do {
    func_0x00010b99a4b0();
    for (uVar7 = extraout_x15; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = extraout_x13 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 0x78) + uVar8 * 8) == param_2) {
        if (extraout_x10 != uVar8) {
          puVar1 = (ulong *)(extraout_x8 + uVar8);
          for (pcVar10 = (char *)((long)puVar1 + 1); *pcVar10 < -1;
              pcVar10 = pcVar10 + ((ulong)puVar3 & 0xffffffff)) {
            uStack_38 = *(undefined8 *)pcVar10;
            puVar3 = &uStack_38;
            func_0x000107c27e58();
          }
          uVar8 = 0;
          *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
          puVar4 = (undefined1 *)((long)puVar1 + (-8 - *(long *)(param_1 + 0x70)));
          uVar7 = *(ulong *)(*(long *)(param_1 + 0x70) +
                            ((ulong)puVar4 & *(ulong *)(param_1 + 0x88)));
          uVar5 = 0xfe;
          uVar7 = uVar7 & ~uVar7 << 6 & 0x8080808080808080;
          if ((uVar7 != 0) && (uVar6 = *puVar1 & ~*puVar1 << 6 & 0x8080808080808080, uVar6 != 0)) {
            uVar6 = uVar6 >> 7;
            uVar8 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            bVar2 = (int)((ulong)LZCOUNT(uVar7) >> 3) +
                    ((uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) < 8;
            uVar8 = (ulong)bVar2;
            uVar5 = 0x80;
            if (!bVar2) {
              uVar5 = 0xfe;
            }
          }
          *(undefined1 *)puVar1 = uVar5;
          *(undefined1 *)
           (*(long *)(param_1 + 0x70) + (*(ulong *)(param_1 + 0x88) & 7) +
            (*(ulong *)(param_1 + 0x88) & (ulong)puVar4) + 1) = uVar5;
          *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + uVar8;
          uVar9 = 1;
          goto LAB_10b9999b0;
        }
        goto LAB_10b9998d8;
      }
    }
  } while ((extraout_x14 & ~extraout_x14 << 6 & 0x8080808080808080) == 0);
LAB_10b9998d8:
  uVar9 = 0;
LAB_10b9999b0:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  return uVar9;
}



/* Entry: 10b9999d8; end: 10b999b97;  */

long FUN_10b9999d8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 extraout_x8;
  ulong extraout_x10;
  long extraout_x13;
  ulong extraout_x14;
  ulong extraout_x15;
  ulong uVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [5];
  undefined8 uStack_48;
  
  func_0x00010b99a3f4();
  uStack_48 = extraout_x8;
  FUN_10b9996d4();
  func_0x00010b99a4a0();
  lVar11 = *(long *)(param_1 + 0xa0) + 1;
  *(long *)(param_1 + 0xa0) = lVar11;
  lVar8 = lVar11;
  FUN_10b999ee0();
  lVar9 = param_1 + 0x70;
  func_0x00010b99a4c4(0);
  do {
    func_0x00010b99a4b0();
    for (uVar12 = extraout_x15; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar4 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar7 = 1;
      if (*(long *)(*(long *)(param_1 + 0x78) +
                   (extraout_x13 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) &
                   extraout_x10) * 8) == lVar11) goto LAB_10b999ac0;
    }
    uVar7 = (extraout_x14 & ~extraout_x14 << 6 & 0x8080808080808080) == 0;
  } while ((bool)uVar7);
  FUN_10b999efc();
  lVar3 = *(long *)(param_1 + 0x70);
  *(long *)(*(long *)(param_1 + 0x78) + lVar9 * 8) = lVar11;
  *(byte *)(lVar3 + lVar9) = (byte)lVar8 & 0x7f;
  func_0x00010b99a44c();
LAB_10b999ac0:
  puVar10 = (undefined8 *)0x48;
  __Znwm();
  FUN_10b999740(&uStack_90,param_1);
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70,param_2 + 1);
  puVar10[1] = uStack_88;
  *puVar10 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar10[2] = uStack_78;
  (*(code *)apuStack_70[0][2])(puVar10 + 3,apuStack_70);
  puVar10[8] = lVar11;
  (*(code *)*apuStack_70[0])(apuStack_70);
  func_0x00010b999e90(&uStack_90);
  _dispatch_time(0,param_3);
  func_0x000107c27d88();
  param_1 = param_1 + 0x28;
  __ZNSt3__15mutex6unlockEv();
  func_0x00010b99a3b8(uStack_48);
  if ((bool)uVar7) {
    return lVar11;
  }
  ___stack_chk_fail();
  func_0x00010b99a3ac();
  func_0x00010b99a3d4();
  lVar11 = param_1;
  FUN_10b999838();
  if ((int)lVar11 != 0) {
    piVar1 = (int *)(param_1 + 0xa8);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar11 = param_1;
    if ((iVar2 + -1 == 0) && (*(char *)(param_1 + 0x128) == '\x01')) {
      func_0x00010b99a4a0();
      if (*(long **)(param_1 + 0x130) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x130) + 0x10))();
      }
      param_1 = param_1 + 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
      return param_1;
    }
  }
  return lVar11;
}



/* Entry: 10b999b98; end: 10b999bef;  */

void FUN_10b999b98(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = param_1;
  FUN_10b999838();
  if ((int)lVar5 != 0) {
    piVar1 = (int *)(param_1 + 0xa8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + -1 == 0) && (*(char *)(param_1 + 0x128) == '\x01')) {
      func_0x00010b99a4a0();
      if (*(long **)(param_1 + 0x130) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x130) + 0x10))();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
      return;
    }
  }
  return;
}



/* Entry: 10b999bf0; end: 10b999bfb;  */

void FUN_10b999bf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_get_specific_11034c068)(PTR_DAT_1133fc7b0);
  return;
}



/* Entry: 10b999bfc; end: 10b999cd3;  */

void FUN_10b999bfc(long param_1,long *param_2)

{
  func_0x00010b99a43c();
  func_0x00010b999c40(param_1 + 0x130,param_2);
  *(bool *)(param_1 + 0x128) = *param_2 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10b999cd4; end: 10b999d9f;  */

void FUN_10b999cd4(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  FUN_10b999524();
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x40))();
  if (((ulong)plVar3 & 1) == 0) {
    plVar1 = param_1 + 0x16;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_38 = 1;
    plVar4 = plVar1;
    plStack_48 = plVar3 + 250000000;
    plStack_40 = plVar1;
    __ZNSt3__15mutex4lockEv();
    __ZNSt3__16chrono12steady_clock3nowEv();
    bVar2 = (long)plVar4 < (long)(plVar3 + 250000000);
    while( true ) {
      if (!bVar2) break;
      if (*(byte *)(param_1 + 0x24) == 0) goto LAB_10b999d6c;
      plVar3 = param_1 + 0x1e;
      func_0x000104c38e48(plVar3,&plStack_40,&plStack_48);
      bVar2 = (int)plVar3 == 0;
    }
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
LAB_10b999d6c:
      *(undefined1 *)(param_1 + 0x24) = 1;
      func_0x00010b99a4a8();
      __ZNSt3__111timed_mutex6unlockEv(plVar1);
    }
    else {
      func_0x00010b99a4a8();
    }
  }
  return;
}



/* Entry: 10b999da0; end: 10b999e2b;  */

void FUN_10b999da0(long *param_1,long param_2)

{
  long lStack_28;
  
  lStack_28 = param_2;
  _dispatch_queue_get_specific(param_2,PTR_DAT_1133fc7b0);
  if (param_2 == 0) {
    func_0x00010b999de8(param_1,&lStack_28);
  }
  else {
    FUN_10b99a288();
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10b999e2c; end: 10b999e4f;  */

undefined8 FUN_10b999e2c(undefined8 param_1)

{
  FUN_10b999e50();
  return param_1;
}



/* Entry: 10b999e50; end: 10b999edf;  */

void FUN_10b999e50(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    __ZdlPv(*param_1);
    param_1[5] = 0;
    *param_1 = &UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b999ee0; end: 10b999efb;  */

void FUN_10b999ee0(void)

{
  func_0x00010b99a470();
  return;
}



/* Entry: 10b999efc; end: 10b999fb7;  */

void FUN_10b999efc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  plVar1 = param_1;
  func_0x00010b99a41c();
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b999f38;
  if (*(char *)(lVar3 + (long)plVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b999f38;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b999f8c:
    FUN_10b999ff8(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b999f8c;
    }
    FUN_10b99a118(param_1);
  }
  lVar3 = *param_1;
  plVar1 = (long *)lVar3;
  FUN_10b999fb8(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b999f38:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 10b999fb8; end: 10b999ff7;  */

ulong FUN_10b999fb8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b999ff8; end: 10b99a117;  */

void FUN_10b999ff8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar4 = lVar8 + param_2 * 8;
  __Znwm();
  *param_1 = lVar4;
  param_1[1] = lVar4 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar4 + param_2) = 0xff;
  lVar4 = 6;
  if (param_2 != 7) {
    lVar4 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar4 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      uVar5 = *(undefined8 *)(lVar2 + lVar8 * 8);
      FUN_10b99a26c();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b999fb8(lVar6,param_1[3],uVar5);
      bVar3 = (byte)uVar5 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar3;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar3;
      *(undefined8 *)(param_1[1] + lVar4 * 8) = *(undefined8 *)(lVar2 + lVar8 * 8);
    }
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b99a118; end: 10b99a26b;  */

void FUN_10b99a118(long *param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000104bda340(*param_1,param_1[3]);
  for (uVar9 = 0; uVar9 != param_1[3]; uVar9 = uVar9 + 1) {
    if (*(char *)(*param_1 + uVar9) == -2) {
      uVar3 = *(ulong *)(param_1[1] + uVar9 * 8);
      FUN_10b99a26c();
      lVar7 = *param_1;
      uVar8 = param_1[3];
      uVar4 = uVar3;
      func_0x00010b99a41c();
      uVar5 = uVar8 & uVar3 >> 7;
      if (((uVar4 - uVar5 ^ uVar9 - uVar5) & uVar8) < 8) {
        *(byte *)(lVar7 + uVar9) = (byte)uVar3 & 0x7f;
        func_0x00010b99a44c();
      }
      else {
        cVar1 = *(char *)(lVar7 + uVar4);
        bVar2 = (byte)uVar3 & 0x7f;
        *(byte *)(lVar7 + uVar4) = bVar2;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & uVar4 - 8) + 1) = bVar2;
        lVar7 = param_1[1];
        if (cVar1 == -0x80) {
          *(undefined8 *)(lVar7 + uVar4 * 8) = *(undefined8 *)(lVar7 + uVar9 * 8);
          *(undefined1 *)(*param_1 + uVar9) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar9 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          uVar6 = *(undefined8 *)(lVar7 + uVar9 * 8);
          *(undefined8 *)(lVar7 + uVar9 * 8) = *(undefined8 *)(lVar7 + uVar4 * 8);
          *(undefined8 *)(lVar7 + uVar4 * 8) = uVar6;
          uVar9 = uVar9 - 1;
        }
      }
    }
  }
  lVar7 = 6;
  if (uVar9 != 7) {
    lVar7 = uVar9 - (uVar9 >> 3);
  }
  param_1[5] = lVar7 - param_1[2];
  return;
}



/* Entry: 10b99a26c; end: 10b99a287;  */

void FUN_10b99a26c(void)

{
  func_0x00010b99a470();
  return;
}



/* Entry: 10b99a288; end: 10b99a2b7;  */

undefined1 * FUN_10b99a288(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((param_1 != (undefined1 *)0x0) &&
     (puVar1 = param_1, FUN_10b9a5818(), ((ulong)puVar1 & 1) == 0)) {
    FUN_10b9a5890();
    pcStack_28 = FUN_10b99a2b8;
    puVar2 = &uStack_31;
    puStack_30 = &stack0xfffffffffffffff0;
    FUN_10b99a2dc(puVar2,puVar1);
    return puVar2;
  }
  return param_1;
}



/* Entry: 10b99a2b8; end: 10b99a2db;  */

void FUN_10b99a2b8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b99a2dc(&uStack_11,param_1);
  return;
}



/* Entry: 10b99a2dc; end: 10b99a35f;  */

undefined8 * FUN_10b99a2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010b99a3f4();
  uStack_28 = extraout_x8;
  func_0x000107c3103c(auStack_40,1);
  FUN_10b99a360(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  func_0x000107c31038(param_1,lVar1 + 0x18);
  func_0x000107c31040();
  func_0x00010b99a3b8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107c31040();
  func_0x00010b99a3cc();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110d7e0e0;
  puVar3[1] = 0;
  func_0x00010b99a3a4(puVar3 + 3);
  return puVar3;
}



/* Entry: 10b99a360; end: 10b99a3a3;  */

undefined8 * FUN_10b99a360(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7e0e0;
  param_1[1] = 0;
  FUN_10b99a3a4(param_1 + 3);
  return param_1;
}



/* Entry: 10b99a3a4; end: 10b99a53f;  */

long FUN_10b99a3a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  lVar1 = param_1;
  func_0x000107c3a2f4();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0x32aaaba7;
  func_0x000107c3a2f8();
  *(undefined8 *)(lVar1 + 0x70) = extraout_x8;
  func_0x000107c3a2fc();
  __ZNSt3__111timed_mutexC1Ev(lVar1 + 0xb0);
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  func_0x000107c3a2f0(*(undefined8 *)(param_1 + 0x20));
  _dispatch_retain(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 10b99a540; end: 10b99a597;  */

undefined8 * FUN_10b99a540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e1f8;
  FUN_10b99a598();
  func_0x00010b999eb8(param_1 + 0x1d);
  FUN_10b99ba04(param_1 + 0x14);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xd);
  FUN_10b9a1f08(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99a598; end: 10b99a60b;  */

void FUN_10b99a598(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(byte *)(param_1 + 0x18) = 1;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x00010b99c5a4();
    FUN_10b99a624(&uStack_50,param_1 + 0xa0);
    func_0x00010b99c498();
    func_0x00010b99c508();
    FUN_10b99ba04(&uStack_50);
  }
  return;
}



/* Entry: 10b99a60c; end: 10b99a60f;  */

undefined8 * FUN_10b99a60c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e1f8;
  FUN_10b99a598();
  func_0x00010b999eb8(param_1 + 0x1d);
  FUN_10b99ba04(param_1 + 0x14);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xd);
  FUN_10b9a1f08(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99a610; end: 10b99a623;  */

void FUN_10b99a610(void)

{
  FUN_10b99a540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99a624; end: 10b99a663;  */

void FUN_10b99a624(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b99c660();
  func_0x00010b99bb5c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  return;
}



/* Entry: 10b99a664; end: 10b99a667;  */

undefined1  [16] FUN_10b99a664(void)

{
  undefined1 in_ZR;
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 *****unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *****pppppuVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_238 [48];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 ****ppppuStack_1f0;
  undefined8 ****ppppuStack_1e8;
  undefined1 ****ppppuStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [48];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_180;
  undefined8 ****ppppuStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [48];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 ***pppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 ***pppuStack_e8;
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 ****ppppuStack_88;
  undefined1 uStack_80;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b99c518();
  func_0x00010b99c414();
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppppuStack_88 = unaff_x19 + 4;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  func_0x00010b99c654();
  uStack_50 = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
  uStack_58 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
  uStack_60 = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
  uStack_68 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
  func_0x00010b99c63c();
  pppppuVar2 = (undefined8 *****)&pppuStack_78;
  pppppuVar9 = unaff_x19;
  uStack_70 = extraout_x9;
  FUN_10b99aa4c();
  pppppuVar1 = pppppuVar9;
  func_0x00010b99c4a0(uStack_70);
  do {
    if (unaff_x19[0x19] == (undefined8 ****)0x0) {
LAB_10b99a780:
      func_0x00010b99c54c();
      func_0x00010b99c3b8(uStack_48);
      if ((bool)in_ZR) {
        auVar27._8_8_ = pppppuVar2;
        auVar27._0_8_ = pppppuVar1;
        return auVar27;
      }
      ___stack_chk_fail();
      func_0x00010b99c448(&pppuStack_78);
      func_0x00010b99c54c();
      func_0x00010b99c46c();
      pcStack_98 = FUN_10b99a7e0;
      puStack_a0 = &stack0xfffffffffffffff0;
      func_0x00010b99c414();
      pppuStack_e8 = *pppppuVar2;
      uStack_b8 = extraout_x8_01;
      (*(code *)pppppuVar2[1][2])(auStack_e0);
      ppppuVar5 = &pppuStack_e8;
      FUN_10b99a854(pppppuVar1,ppppuVar5);
      func_0x00010b99c594();
      func_0x00010b99c3b8(uStack_b8);
      if ((bool)in_ZR) {
        auVar28._8_8_ = ppppuVar5;
        auVar28._0_8_ = pppppuVar1;
        return auVar28;
      }
      ___stack_chk_fail();
      pppppuVar2 = pppppuVar1;
      func_0x00010b99c594();
      func_0x00010b99c46c();
      uStack_120 = 0x33;
      pcStack_f8 = FUN_10b99a854;
      pppppuVar9 = pppppuVar2;
      pppuStack_110 = &pppuStack_e8;
      ppppuStack_108 = pppppuVar1;
      ppuStack_100 = &puStack_a0;
      func_0x00010b99c3dc();
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar6 = auStack_158;
      FUN_10b99a994(pppppuVar2,puVar6,pppppuVar9);
      pppppuVar1 = pppppuVar2;
      func_0x00010b99c3cc();
      func_0x00010b99c3b8(uStack_128);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        pppppuVar3 = pppppuVar1;
        func_0x00010b99c3cc();
        func_0x00010b99c46c();
        uStack_190 = 0x33;
        pcStack_168 = FUN_10b99a8bc;
        puStack_180 = puVar6;
        ppppuStack_178 = pppppuVar1;
        pppuStack_170 = &ppuStack_100;
        func_0x00010b99c3dc();
        puVar6 = auStack_1c8;
        pppppuVar2 = pppppuVar3;
        FUN_10b99a928(pppppuVar3,puVar6,pppppuVar9);
        pppppuVar1 = pppppuVar2;
        func_0x00010b99c3cc();
        func_0x00010b99c3b8(uStack_198);
        if ((bool)in_ZR) {
          auVar29._8_8_ = puVar6;
          auVar29._0_8_ = pppppuVar2;
          return auVar29;
        }
        ___stack_chk_fail();
        pppppuVar2 = pppppuVar1;
        func_0x00010b99c3cc();
        func_0x00010b99c46c();
        uStack_200 = 0x33;
        pcStack_1d8 = FUN_10b99a928;
        pppppuVar4 = pppppuVar2;
        ppppuStack_1f0 = pppppuVar3;
        ppppuStack_1e8 = pppppuVar1;
        ppppuStack_1e0 = &pppuStack_170;
        func_0x00010b99c3dc();
        __ZNSt3__16chrono12steady_clock3nowEv();
        puVar6 = auStack_238;
        lVar8 = (long)pppppuVar4 + (long)pppppuVar9;
        FUN_10b99a994(pppppuVar2,puVar6,lVar8);
        pppppuVar1 = pppppuVar2;
        puVar7 = puVar6;
        func_0x00010b99c3cc();
        func_0x00010b99c3b8(uStack_208);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b99c3cc();
          func_0x00010b99c46c();
          if (((ulong)pppppuVar1[3] & 1) == 0) {
            pppppuVar2 = pppppuVar1;
            func_0x000107c28150();
            __ZNSt3__15mutex4lockEv(pppppuVar1 + 4);
            pppppuVar9 = pppppuVar1;
            FUN_10b99aa4c(pppppuVar1,puVar7,lVar8,0,pppppuVar2);
            uVar10 = (ulong)*(byte *)((long)pppppuVar1 + 0xd1);
            *(undefined1 *)((long)pppppuVar1 + 0xd1) = 0;
            if (*(char *)(pppppuVar1 + 0x1a) == '\x01') {
              *(undefined1 *)(pppppuVar1 + 0x1a) = 0;
              if (pppppuVar1[0x1d] != (undefined8 ****)0x0) {
                (*(code *)(*pppppuVar1[0x1d])[3])();
              }
            }
            func_0x00010b99c498();
            func_0x00010b99c508();
          }
          else {
            uVar10 = 0;
            pppppuVar9 = (undefined8 *****)0x0;
          }
          auVar30._8_8_ = uVar10;
          auVar30._0_8_ = pppppuVar9;
          return auVar30;
        }
      }
      auVar31._8_8_ = (ulong)puVar6 & 0xff;
      auVar31._0_8_ = pppppuVar2;
      return auVar31;
    }
    if (unaff_x19[0x1b] == (undefined8 ****)0x0) {
      func_0x00010b99c66c();
      func_0x00010b99c5ac();
      in_ZR = *(undefined8 ******)(extraout_x8_00 + extraout_x9_00 * 0x50) == pppppuVar9;
      if ((bool)in_ZR) {
        unaff_x19[0x1b] = (undefined8 ****)0x1;
        func_0x00010810a108(&ppppuStack_88);
        (*(code *)*unaff_x20)();
        FUN_10b99b534(&ppppuStack_88);
        FUN_10b99b2f0(&pppuStack_78);
        unaff_x19[0x1b] = (undefined8 ****)((long)unaff_x19[0x1b] + -1);
        pppppuVar1 = &ppppuStack_88;
        func_0x00010810a108();
        func_0x00010b99c508();
        func_0x00010b99c448(&pppuStack_78);
        pppppuVar2 = pppppuVar9;
        goto LAB_10b99a780;
      }
    }
    pppppuVar1 = unaff_x19 + 0xd;
    pppppuVar2 = &ppppuStack_88;
    func_0x00010b9a1f60();
  } while( true );
}



/* Entry: 10b99a668; end: 10b99a7df;  */

undefined1  [16] FUN_10b99a668(void)

{
  undefined1 in_ZR;
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 *****unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *****pppppuVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_238 [48];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 ****ppppuStack_1f0;
  undefined8 ****ppppuStack_1e8;
  undefined1 ****ppppuStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [48];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_180;
  undefined8 ****ppppuStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [48];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 ***pppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 ***pppuStack_e8;
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 ****ppppuStack_88;
  undefined1 uStack_80;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b99c518();
  func_0x00010b99c414();
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppppuStack_88 = unaff_x19 + 4;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  func_0x00010b99c654();
  uStack_50 = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
  uStack_58 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
  uStack_60 = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
  uStack_68 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
  func_0x00010b99c63c();
  pppppuVar2 = (undefined8 *****)&pppuStack_78;
  pppppuVar9 = unaff_x19;
  uStack_70 = extraout_x9;
  FUN_10b99aa4c();
  pppppuVar1 = pppppuVar9;
  func_0x00010b99c4a0(uStack_70);
  do {
    if (unaff_x19[0x19] == (undefined8 ****)0x0) {
LAB_10b99a780:
      func_0x00010b99c54c();
      func_0x00010b99c3b8(uStack_48);
      if ((bool)in_ZR) {
        auVar27._8_8_ = pppppuVar2;
        auVar27._0_8_ = pppppuVar1;
        return auVar27;
      }
      ___stack_chk_fail();
      func_0x00010b99c448(&pppuStack_78);
      func_0x00010b99c54c();
      func_0x00010b99c46c();
      pcStack_98 = FUN_10b99a7e0;
      puStack_a0 = &stack0xfffffffffffffff0;
      func_0x00010b99c414();
      pppuStack_e8 = *pppppuVar2;
      uStack_b8 = extraout_x8_01;
      (*(code *)pppppuVar2[1][2])(auStack_e0);
      ppppuVar5 = &pppuStack_e8;
      FUN_10b99a854(pppppuVar1,ppppuVar5);
      func_0x00010b99c594();
      func_0x00010b99c3b8(uStack_b8);
      if ((bool)in_ZR) {
        auVar28._8_8_ = ppppuVar5;
        auVar28._0_8_ = pppppuVar1;
        return auVar28;
      }
      ___stack_chk_fail();
      pppppuVar2 = pppppuVar1;
      func_0x00010b99c594();
      func_0x00010b99c46c();
      uStack_120 = 0x33;
      pcStack_f8 = FUN_10b99a854;
      pppppuVar9 = pppppuVar2;
      pppuStack_110 = &pppuStack_e8;
      ppppuStack_108 = pppppuVar1;
      ppuStack_100 = &puStack_a0;
      func_0x00010b99c3dc();
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar6 = auStack_158;
      FUN_10b99a994(pppppuVar2,puVar6,pppppuVar9);
      pppppuVar1 = pppppuVar2;
      func_0x00010b99c3cc();
      func_0x00010b99c3b8(uStack_128);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        pppppuVar3 = pppppuVar1;
        func_0x00010b99c3cc();
        func_0x00010b99c46c();
        uStack_190 = 0x33;
        pcStack_168 = FUN_10b99a8bc;
        puStack_180 = puVar6;
        ppppuStack_178 = pppppuVar1;
        pppuStack_170 = &ppuStack_100;
        func_0x00010b99c3dc();
        puVar6 = auStack_1c8;
        pppppuVar2 = pppppuVar3;
        FUN_10b99a928(pppppuVar3,puVar6,pppppuVar9);
        pppppuVar1 = pppppuVar2;
        func_0x00010b99c3cc();
        func_0x00010b99c3b8(uStack_198);
        if ((bool)in_ZR) {
          auVar29._8_8_ = puVar6;
          auVar29._0_8_ = pppppuVar2;
          return auVar29;
        }
        ___stack_chk_fail();
        pppppuVar2 = pppppuVar1;
        func_0x00010b99c3cc();
        func_0x00010b99c46c();
        uStack_200 = 0x33;
        pcStack_1d8 = FUN_10b99a928;
        pppppuVar4 = pppppuVar2;
        ppppuStack_1f0 = pppppuVar3;
        ppppuStack_1e8 = pppppuVar1;
        ppppuStack_1e0 = &pppuStack_170;
        func_0x00010b99c3dc();
        __ZNSt3__16chrono12steady_clock3nowEv();
        puVar6 = auStack_238;
        lVar8 = (long)pppppuVar4 + (long)pppppuVar9;
        FUN_10b99a994(pppppuVar2,puVar6,lVar8);
        pppppuVar1 = pppppuVar2;
        puVar7 = puVar6;
        func_0x00010b99c3cc();
        func_0x00010b99c3b8(uStack_208);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b99c3cc();
          func_0x00010b99c46c();
          if (((ulong)pppppuVar1[3] & 1) == 0) {
            pppppuVar2 = pppppuVar1;
            func_0x000107c28150();
            __ZNSt3__15mutex4lockEv(pppppuVar1 + 4);
            pppppuVar9 = pppppuVar1;
            FUN_10b99aa4c(pppppuVar1,puVar7,lVar8,0,pppppuVar2);
            uVar10 = (ulong)*(byte *)((long)pppppuVar1 + 0xd1);
            *(undefined1 *)((long)pppppuVar1 + 0xd1) = 0;
            if (*(char *)(pppppuVar1 + 0x1a) == '\x01') {
              *(undefined1 *)(pppppuVar1 + 0x1a) = 0;
              if (pppppuVar1[0x1d] != (undefined8 ****)0x0) {
                (*(code *)(*pppppuVar1[0x1d])[3])();
              }
            }
            func_0x00010b99c498();
            func_0x00010b99c508();
          }
          else {
            uVar10 = 0;
            pppppuVar9 = (undefined8 *****)0x0;
          }
          auVar30._8_8_ = uVar10;
          auVar30._0_8_ = pppppuVar9;
          return auVar30;
        }
      }
      auVar31._8_8_ = (ulong)puVar6 & 0xff;
      auVar31._0_8_ = pppppuVar2;
      return auVar31;
    }
    if (unaff_x19[0x1b] == (undefined8 ****)0x0) {
      func_0x00010b99c66c();
      func_0x00010b99c5ac();
      in_ZR = *(undefined8 ******)(extraout_x8_00 + extraout_x9_00 * 0x50) == pppppuVar9;
      if ((bool)in_ZR) {
        unaff_x19[0x1b] = (undefined8 ****)0x1;
        func_0x00010810a108(&ppppuStack_88);
        (*(code *)*unaff_x20)();
        FUN_10b99b534(&ppppuStack_88);
        FUN_10b99b2f0(&pppuStack_78);
        unaff_x19[0x1b] = (undefined8 ****)((long)unaff_x19[0x1b] + -1);
        pppppuVar1 = &ppppuStack_88;
        func_0x00010810a108();
        func_0x00010b99c508();
        func_0x00010b99c448(&pppuStack_78);
        pppppuVar2 = pppppuVar9;
        goto LAB_10b99a780;
      }
    }
    pppppuVar1 = unaff_x19 + 0xd;
    pppppuVar2 = &ppppuStack_88;
    func_0x00010b9a1f60();
  } while( true );
}



/* Entry: 10b99a7e0; end: 10b99a853;  */

undefined1  [16] FUN_10b99a7e0(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_1a8 [48];
  undefined8 uStack_178;
  undefined1 auStack_138 [48];
  undefined8 uStack_108;
  undefined1 auStack_c8 [48];
  undefined8 uStack_98;
  undefined8 uStack_58;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  func_0x00010b99c414();
  uStack_58 = *param_2;
  uStack_28 = extraout_x8;
  (**(code **)(param_2[1] + 0x10))(auStack_50);
  puVar4 = &uStack_58;
  FUN_10b99a854(param_1,puVar4);
  func_0x00010b99c594();
  func_0x00010b99c3b8(uStack_28);
  if ((bool)in_ZR) {
    auVar9._8_8_ = puVar4;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  ___stack_chk_fail();
  func_0x00010b99c594();
  func_0x00010b99c46c();
  lVar1 = param_1;
  func_0x00010b99c3dc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar5 = auStack_c8;
  FUN_10b99a994(param_1,puVar5,lVar1);
  lVar2 = param_1;
  func_0x00010b99c3cc();
  func_0x00010b99c3b8(uStack_98);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b99c3cc();
    func_0x00010b99c46c();
    func_0x00010b99c3dc();
    puVar5 = auStack_138;
    FUN_10b99a928(lVar2,puVar5,lVar1);
    param_1 = lVar2;
    func_0x00010b99c3cc();
    func_0x00010b99c3b8(uStack_108);
    if ((bool)in_ZR) {
      auVar10._8_8_ = puVar5;
      auVar10._0_8_ = lVar2;
      return auVar10;
    }
    ___stack_chk_fail();
    func_0x00010b99c3cc();
    func_0x00010b99c46c();
    lVar2 = param_1;
    func_0x00010b99c3dc();
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar5 = auStack_1a8;
    lVar2 = lVar2 + lVar1;
    FUN_10b99a994(param_1,puVar5,lVar2);
    lVar1 = param_1;
    puVar6 = puVar5;
    func_0x00010b99c3cc();
    func_0x00010b99c3b8(uStack_178);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b99c3cc();
      func_0x00010b99c46c();
      if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
        lVar3 = lVar1;
        func_0x000107c28150();
        __ZNSt3__15mutex4lockEv(lVar1 + 0x20);
        lVar7 = lVar1;
        FUN_10b99aa4c(lVar1,puVar6,lVar2,0,lVar3);
        uVar8 = (ulong)*(byte *)(lVar1 + 0xd1);
        *(undefined1 *)(lVar1 + 0xd1) = 0;
        if (*(char *)(lVar1 + 0xd0) == '\x01') {
          *(undefined1 *)(lVar1 + 0xd0) = 0;
          if (*(long **)(lVar1 + 0xe8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar1 + 0xe8) + 0x18))();
          }
        }
        func_0x00010b99c498();
        func_0x00010b99c508();
      }
      else {
        uVar8 = 0;
        lVar7 = 0;
      }
      auVar11._8_8_ = uVar8;
      auVar11._0_8_ = lVar7;
      return auVar11;
    }
  }
  auVar12._8_8_ = (ulong)puVar5 & 0xff;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 10b99a854; end: 10b99a8bb;  */

undefined1  [16] FUN_10b99a854(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_148 [48];
  undefined8 uStack_118;
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010b99c3dc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar4 = auStack_68;
  FUN_10b99a994(param_1,puVar4,lVar1);
  lVar2 = param_1;
  func_0x00010b99c3cc();
  func_0x00010b99c3b8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b99c3cc();
    func_0x00010b99c46c();
    func_0x00010b99c3dc();
    puVar4 = auStack_d8;
    FUN_10b99a928(lVar2,puVar4,lVar1);
    param_1 = lVar2;
    func_0x00010b99c3cc();
    func_0x00010b99c3b8(uStack_a8);
    if ((bool)in_ZR) {
      auVar8._8_8_ = puVar4;
      auVar8._0_8_ = lVar2;
      return auVar8;
    }
    ___stack_chk_fail();
    func_0x00010b99c3cc();
    func_0x00010b99c46c();
    lVar2 = param_1;
    func_0x00010b99c3dc();
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar4 = auStack_148;
    lVar2 = lVar2 + lVar1;
    FUN_10b99a994(param_1,puVar4,lVar2);
    lVar1 = param_1;
    puVar5 = puVar4;
    func_0x00010b99c3cc();
    func_0x00010b99c3b8(uStack_118);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b99c3cc();
      func_0x00010b99c46c();
      if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
        lVar3 = lVar1;
        func_0x000107c28150();
        __ZNSt3__15mutex4lockEv(lVar1 + 0x20);
        lVar6 = lVar1;
        FUN_10b99aa4c(lVar1,puVar5,lVar2,0,lVar3);
        uVar7 = (ulong)*(byte *)(lVar1 + 0xd1);
        *(undefined1 *)(lVar1 + 0xd1) = 0;
        if (*(char *)(lVar1 + 0xd0) == '\x01') {
          *(undefined1 *)(lVar1 + 0xd0) = 0;
          if (*(long **)(lVar1 + 0xe8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar1 + 0xe8) + 0x18))();
          }
        }
        func_0x00010b99c498();
        func_0x00010b99c508();
      }
      else {
        uVar7 = 0;
        lVar6 = 0;
      }
      auVar9._8_8_ = uVar7;
      auVar9._0_8_ = lVar6;
      return auVar9;
    }
  }
  auVar10._8_8_ = (ulong)puVar4 & 0xff;
  auVar10._0_8_ = param_1;
  return auVar10;
}



/* Entry: 10b99a8bc; end: 10b99a927;  */

undefined1  [16] FUN_10b99a8bc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x00010b99c3dc();
  puVar4 = auStack_68;
  FUN_10b99a928(param_1,puVar4,param_3);
  lVar1 = param_1;
  func_0x00010b99c3cc();
  func_0x00010b99c3b8(uStack_38);
  if ((bool)in_ZR) {
    auVar8._8_8_ = puVar4;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
  ___stack_chk_fail();
  func_0x00010b99c3cc();
  func_0x00010b99c46c();
  lVar2 = lVar1;
  func_0x00010b99c3dc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar4 = auStack_d8;
  lVar2 = lVar2 + param_3;
  FUN_10b99a994(lVar1,puVar4,lVar2);
  lVar3 = lVar1;
  puVar5 = puVar4;
  func_0x00010b99c3cc();
  func_0x00010b99c3b8(uStack_a8);
  if ((bool)in_ZR) {
    auVar10._8_8_ = (ulong)puVar4 & 0xff;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  ___stack_chk_fail();
  func_0x00010b99c3cc();
  func_0x00010b99c46c();
  if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
    lVar1 = lVar3;
    func_0x000107c28150();
    __ZNSt3__15mutex4lockEv(lVar3 + 0x20);
    lVar6 = lVar3;
    FUN_10b99aa4c(lVar3,puVar5,lVar2,0,lVar1);
    uVar7 = (ulong)*(byte *)(lVar3 + 0xd1);
    *(undefined1 *)(lVar3 + 0xd1) = 0;
    if (*(char *)(lVar3 + 0xd0) == '\x01') {
      *(undefined1 *)(lVar3 + 0xd0) = 0;
      if (*(long **)(lVar3 + 0xe8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0xe8) + 0x18))();
      }
    }
    func_0x00010b99c498();
    func_0x00010b99c508();
  }
  else {
    uVar7 = 0;
    lVar6 = 0;
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = lVar6;
  return auVar9;
}



/* Entry: 10b99a928; end: 10b99a993;  */

undefined1  [16] FUN_10b99a928(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010b99c3dc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar4 = auStack_68;
  lVar1 = lVar1 + param_3;
  FUN_10b99a994(param_1,puVar4,lVar1);
  lVar2 = param_1;
  puVar5 = puVar4;
  func_0x00010b99c3cc();
  func_0x00010b99c3b8(uStack_38);
  if ((bool)in_ZR) {
    auVar9._8_8_ = (ulong)puVar4 & 0xff;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  ___stack_chk_fail();
  func_0x00010b99c3cc();
  func_0x00010b99c46c();
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    lVar3 = lVar2;
    func_0x000107c28150();
    __ZNSt3__15mutex4lockEv(lVar2 + 0x20);
    lVar6 = lVar2;
    FUN_10b99aa4c(lVar2,puVar5,lVar1,0,lVar3);
    uVar7 = (ulong)*(byte *)(lVar2 + 0xd1);
    *(undefined1 *)(lVar2 + 0xd1) = 0;
    if (*(char *)(lVar2 + 0xd0) == '\x01') {
      *(undefined1 *)(lVar2 + 0xd0) = 0;
      if (*(long **)(lVar2 + 0xe8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0xe8) + 0x18))();
      }
    }
    func_0x00010b99c498();
    func_0x00010b99c508();
  }
  else {
    uVar7 = 0;
    lVar6 = 0;
  }
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 10b99a994; end: 10b99aa4b;  */

undefined1  [16] FUN_10b99a994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = param_1;
    func_0x000107c28150();
    __ZNSt3__15mutex4lockEv(param_1 + 0x20);
    lVar2 = param_1;
    FUN_10b99aa4c(param_1,param_2,param_3,0,lVar1);
    uVar3 = (ulong)*(byte *)(param_1 + 0xd1);
    *(undefined1 *)(param_1 + 0xd1) = 0;
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      *(undefined1 *)(param_1 + 0xd0) = 0;
      if (*(long **)(param_1 + 0xe8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))();
      }
    }
    func_0x00010b99c498();
    func_0x00010b99c508();
  }
  else {
    uVar3 = 0;
    lVar2 = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 10b99aa4c; end: 10b99b1e7;  */

undefined1  [16]
FUN_10b99aa4c(long param_1,undefined8 *param_2,long ***param_3,undefined1 param_4,undefined8 param_5
             )

{
  bool bVar1;
  long lVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  undefined8 *puVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  undefined1 uVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long lVar12;
  undefined8 **ppuVar13;
  long ****pppplVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar15;
  long ****pppplVar16;
  long lVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long ****pppplVar20;
  long *plVar21;
  long ****pppplVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long ***ppplStack_170;
  long ***ppplStack_168;
  long ***ppplStack_160;
  long ***ppplStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long **applStack_140 [5];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [5];
  long **pplStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  undefined8 *puStack_a8;
  long *plStack_78;
  undefined8 uStack_70;
  
  lVar17 = param_1;
  func_0x00010b99c414();
  lVar2 = *(long *)(lVar17 + 0x98) + 1;
  *(long *)(lVar17 + 0x98) = lVar2;
  uStack_148 = *param_2;
  uStack_70 = extraout_x8;
  (**(code **)(param_2[1] + 0x10))(applStack_140);
  uStack_110 = uStack_148;
  pppplVar20 = (long ****)applStack_140;
  lStack_118 = lVar2;
  (*(code *)applStack_140[0][2])(apuStack_108);
  pppplVar22 = (long ****)applStack_140;
  pplStack_e0 = (long **)param_3;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  (*(code *)*applStack_140[0])();
  func_0x00010b99c510();
  pppplVar10 = pppplVar22;
  pppplVar14 = pppplVar20;
  func_0x00010b99c544();
  if (pppplVar14 == pppplVar20) {
    uVar23 = 0;
    ppplVar4 = (long ***)pplStack_e0;
    lVar17 = lStack_118;
  }
  else {
    func_0x00010b99c61c((long)pppplVar10 - (long)pppplVar22);
    uVar23 = extraout_x8_00 + ((long)pppplVar20 - (long)*pppplVar22) / -0x50;
    ppplVar4 = (long ***)pplStack_e0;
    lVar17 = lStack_118;
  }
  while (uVar24 = uVar23, uVar24 != 0) {
    uVar23 = uVar24 >> 1;
    pppplVar10 = pppplVar22;
    pppplVar14 = pppplVar20;
    FUN_10b99b920(pppplVar22,pppplVar20,uVar23);
    bVar1 = lVar17 < (long)*pppplVar14;
    if (ppplVar4 != pppplVar14[7]) {
      bVar1 = (long)ppplVar4 < (long)pppplVar14[7];
    }
    if (!bVar1) {
      pppplVar20 = pppplVar14 + 10;
      if ((long)pppplVar20 - (long)*pppplVar10 == 0xff0) {
        pppplVar10 = pppplVar10 + 1;
        pppplVar20 = (long ****)*pppplVar10;
      }
      pppplVar22 = pppplVar10;
      uVar23 = uVar24 + ~uVar23;
    }
  }
  func_0x00010b99c510();
  pppplVar11 = pppplVar22;
  func_0x00010b99bba0(pppplVar22,pppplVar20,pppplVar10,pppplVar14);
  plVar21 = (long *)(param_1 + 200);
  pppplVar10 = (long ****)0x0;
  if (pppplVar11 < (long ****)(*plVar21 - (long)pppplVar11)) {
    pppplVar14 = pppplVar11;
    pppplVar19 = pppplVar20;
    if (*(long *)(param_1 + 0xc0) == 0) {
      pppplVar14 = (long ****)(param_1 + 0xa0);
      FUN_10b99bce4();
      if (pppplVar14 < (long ****)0x33) {
        pppplVar18 = *(long *****)(param_1 + 0xb8);
        pppplVar10 = *(long *****)(param_1 + 0xa8);
        pppplVar22 = *(long *****)(param_1 + 0xa0);
        uVar23 = (long)pppplVar18 - (long)pppplVar22;
        if ((ulong)(*(long *)(param_1 + 0xb0) - (long)pppplVar10) < uVar23) {
          func_0x00010b99c53c();
          if (pppplVar10 == pppplVar22) {
            pppplVar20 = (long ****)(param_1 + 0xa0);
            FUN_10b99bf08();
            func_0x00010b99c564();
            pppplVar19 = pppplVar14;
            func_0x00010b99c5f4();
            pppplVar14 = pppplVar20;
          }
          else {
            pppplVar20 = (long ****)(param_1 + 0xa0);
            pppplVar19 = pppplVar14;
            func_0x00010b99be64();
            pppplVar14 = pppplVar20;
          }
          if (*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) == 8) {
            lVar17 = 0x19;
          }
          else {
            lVar17 = *(long *)(param_1 + 0xc0) + 0x33;
          }
          *(long *)(param_1 + 0xc0) = lVar17;
        }
        else {
          pppplVar19 = (long ****)((long)uVar23 >> 2);
          if (pppplVar18 == pppplVar22) {
            pppplVar19 = (long ****)0x1;
          }
          puStack_150 = (undefined8 *)(param_1 + 0xb8);
          FUN_10b99c06c();
          ppplStack_158 = (long ***)(pppplVar19 + (long)pppplVar20);
          ppplStack_170 = (long ***)pppplVar19;
          ppplStack_168 = (long ***)pppplVar19;
          ppplStack_160 = (long ***)pppplVar19;
          func_0x00010b99c53c();
          pppplVar14 = &ppplStack_170;
          func_0x00010b99bfa0();
          puVar5 = puStack_150;
          pppplVar20 = (long ****)ppplStack_170;
          pppplVar22 = (long ****)ppplStack_158;
          pppplVar10 = (long ****)ppplStack_168;
          pppplVar18 = (long ****)ppplStack_160;
          for (plVar25 = *(long **)(param_1 + 0xa8); plVar15 = *(long **)(param_1 + 0xb0),
              plVar25 != plVar15; plVar25 = plVar25 + 1) {
            if (pppplVar18 == pppplVar22) {
              if (pppplVar10 < pppplVar20 || (long)pppplVar10 - (long)pppplVar20 == 0) {
                uVar23 = (long)pppplVar22 - (long)pppplVar20 >> 2;
                if ((long)pppplVar22 - (long)pppplVar20 == 0) {
                  uVar23 = 1;
                }
                puStack_a8 = puVar5;
                uVar24 = uVar23;
                FUN_10b99c06c(uVar23);
                func_0x00010b99c474(uVar24 + (uVar23 >> 2) * 8);
                ppplVar8 = ppplStack_b0;
                ppplVar7 = ppplStack_b8;
                ppplVar6 = ppplStack_c0;
                ppplVar4 = ppplStack_c8;
                pppplVar14 = &ppplStack_c8;
                ppplStack_c8 = (long ***)pppplVar20;
                ppplStack_c0 = (long ***)pppplVar10;
                ppplStack_b8 = (long ***)pppplVar18;
                ppplStack_b0 = (long ***)pppplVar22;
                func_0x00010b99c0cc();
                pppplVar20 = (long ****)ppplVar4;
                pppplVar22 = (long ****)ppplVar8;
                pppplVar10 = (long ****)ppplVar6;
                pppplVar18 = (long ****)ppplVar7;
              }
              else {
                pppplVar18 = pppplVar10 + (((long)pppplVar10 - (long)pppplVar20 >> 3) + 1) / -2;
                lVar17 = (long)pppplVar22 - (long)pppplVar10;
                if (lVar17 != 0) {
                  pppplVar14 = pppplVar18;
                  _memmove(pppplVar18,pppplVar10,lVar17);
                  pppplVar19 = pppplVar10;
                }
                pppplVar10 = pppplVar18;
                pppplVar18 = (long ****)((long)pppplVar18 + lVar17);
              }
            }
            *pppplVar18 = (long ***)*plVar25;
            pppplVar18 = pppplVar18 + 1;
          }
          ppplStack_168 = *(long ****)(param_1 + 0xa8);
          ppplStack_170 = *(long ****)(param_1 + 0xa0);
          *(long *****)(param_1 + 0xa0) = pppplVar20;
          *(long *****)(param_1 + 0xa8) = pppplVar10;
          ppplStack_158 = *(long ****)(param_1 + 0xb8);
          *(long *****)(param_1 + 0xb0) = pppplVar18;
          *(long *****)(param_1 + 0xb8) = pppplVar22;
          if ((long)pppplVar18 - (long)pppplVar10 == 8) {
            lVar17 = 0x19;
          }
          else {
            lVar17 = *(long *)(param_1 + 0xc0) + 0x33;
          }
          *(long *)(param_1 + 0xc0) = lVar17;
          ppplStack_160 = (long ***)plVar15;
          func_0x00010b99c5d8();
          func_0x00010b99c614();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xc0) = 0x33;
        func_0x00010b99c564();
        func_0x00010b99c5f4();
        pppplVar19 = pppplVar20;
      }
    }
    if (pppplVar11 == (long ****)0x0) {
      func_0x00010b99c510();
      uVar9 = (long ****)*pppplVar14 == pppplVar19;
      if ((bool)uVar9) {
        pppplVar19 = (long ****)(pppplVar14[-1] + 0x1fe);
      }
      pppplVar14 = pppplVar19 + -10;
      func_0x00010b99c534();
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    }
    else {
      pppplVar20 = &ppplStack_c8;
      plStack_78 = plVar21;
      func_0x00010b99c534();
      func_0x00010b99c510();
      func_0x00010b99c648();
      ppplStack_170 = (long ***)pppplVar20;
      ppplStack_168 = (long ***)pppplVar19;
      FUN_10b99bbd8();
      FUN_10b99b9c0(pppplVar19,pppplVar22);
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
      uVar9 = pppplVar11 == (long ****)0x1;
      if (!(bool)uVar9) {
        FUN_10b99b920(pppplVar10,pppplVar22,1);
        pppplVar20 = &ppplStack_170;
        pppplVar14 = pppplVar11;
        FUN_10b99bc84(pppplVar20,pppplVar11);
        func_0x00010b99c608(pppplVar10,pppplVar22,pppplVar20,pppplVar14);
        pppplVar22 = pppplVar10;
      }
      pppplVar19 = &ppplStack_c8;
      FUN_10b99bcac(pppplVar22);
      pppplVar14 = &ppplStack_b8;
      (*(code *)*ppplStack_b8)();
    }
    goto LAB_10b99b128;
  }
  pppplVar19 = (long ****)(param_1 + 0xa0);
  FUN_10b99bce4();
  pppplVar14 = pppplVar20;
  if (pppplVar19 == (long ****)0x0) {
    if (*(ulong *)(param_1 + 0xc0) < 0x33) {
      pppplVar22 = *(long *****)(param_1 + 0xb8);
      pppplVar10 = *(long *****)(param_1 + 0xb0);
      uVar24 = (long)pppplVar10 - *(long *)(param_1 + 0xa8);
      uVar23 = (long)pppplVar22 - (long)*(long *****)(param_1 + 0xa0);
      if (uVar24 < uVar23) {
        func_0x00010b99c53c();
        if (pppplVar22 == pppplVar10) {
          func_0x00010b99be64(param_1 + 0xa0);
          goto LAB_10b99ac04;
        }
        FUN_10b99bf08(param_1 + 0xa0);
        pppplVar14 = pppplVar19;
      }
      else {
        pppplVar14 = (long ****)((long)uVar23 >> 2);
        if (pppplVar22 == *(long *****)(param_1 + 0xa0)) {
          pppplVar14 = (long ****)0x1;
        }
        puStack_150 = (undefined8 *)(param_1 + 0xb8);
        FUN_10b99c06c();
        ppplStack_168 = (long ***)((long)pppplVar14 + uVar24);
        ppplStack_158 = (long ***)(pppplVar14 + (long)pppplVar20);
        ppplStack_170 = (long ***)pppplVar14;
        ppplStack_160 = ppplStack_168;
        func_0x00010b99c53c();
        func_0x00010b99bfa0(&ppplStack_170);
        puVar5 = puStack_150;
        pppplVar18 = *(long *****)(param_1 + 0xb0);
        pppplVar22 = (long ****)ppplStack_160;
        pppplVar10 = (long ****)ppplStack_170;
        pppplVar20 = (long ****)ppplStack_168;
        pppplVar19 = (long ****)ppplStack_158;
        while (pppplVar16 = *(long *****)(param_1 + 0xa8), pppplVar18 != pppplVar16) {
          pppplVar16 = pppplVar20;
          if (pppplVar20 == pppplVar10) {
            if (pppplVar22 < pppplVar19) {
              lVar17 = (long)pppplVar22 - (long)pppplVar10;
              pppplVar3 = pppplVar22 + (((long)pppplVar19 - (long)pppplVar22 >> 3) + 1) / 2;
              pppplVar16 = (long ****)((long)pppplVar3 - ((long)pppplVar22 - (long)pppplVar10));
              pppplVar22 = pppplVar3;
              if (lVar17 != 0) {
                _memmove(pppplVar16,pppplVar20,lVar17);
                pppplVar14 = pppplVar20;
              }
            }
            else {
              lVar17 = (long)pppplVar19 - (long)pppplVar10 >> 2;
              if ((long)pppplVar19 - (long)pppplVar10 == 0) {
                lVar17 = 1;
              }
              puStack_a8 = puVar5;
              lVar12 = lVar17;
              FUN_10b99c06c(lVar17);
              func_0x00010b99c474(lVar12 + (lVar17 * 2 + 6U & 0xfffffffffffffff8));
              ppplVar7 = ppplStack_b0;
              ppplVar6 = ppplStack_b8;
              pppplVar16 = (long ****)ppplStack_c0;
              ppplVar4 = ppplStack_c8;
              ppplStack_c8 = (long ***)pppplVar10;
              ppplStack_c0 = (long ***)pppplVar20;
              ppplStack_b8 = (long ***)pppplVar22;
              ppplStack_b0 = (long ***)pppplVar19;
              func_0x00010b99c0cc(&ppplStack_c8);
              pppplVar22 = (long ****)ppplVar6;
              pppplVar10 = (long ****)ppplVar4;
              pppplVar19 = (long ****)ppplVar7;
            }
          }
          pppplVar18 = pppplVar18 + -1;
          pppplVar20 = pppplVar16 + -1;
          *pppplVar20 = *pppplVar18;
        }
        ppplStack_170 = *(long ****)(param_1 + 0xa0);
        *(long *****)(param_1 + 0xa0) = pppplVar10;
        *(long *****)(param_1 + 0xa8) = pppplVar20;
        ppplStack_158 = *(long ****)(param_1 + 0xb8);
        ppplStack_160 = *(long ****)(param_1 + 0xb0);
        *(long *****)(param_1 + 0xb0) = pppplVar22;
        *(long *****)(param_1 + 0xb8) = pppplVar19;
        ppplStack_168 = (long ***)pppplVar16;
        func_0x00010b99c5d8();
        func_0x00010b99c614();
      }
    }
    else {
      *(ulong *)(param_1 + 0xc0) = *(ulong *)(param_1 + 0xc0) - 0x33;
LAB_10b99ac04:
      pppplVar14 = (long ****)**(long **)(param_1 + 0xa8);
      *(long **)(param_1 + 0xa8) = *(long **)(param_1 + 0xa8) + 1;
      FUN_10b99c1d8(param_1 + 0xa0);
    }
  }
  uVar23 = *plVar21 - (long)pppplVar11;
  uVar9 = uVar23 == 0;
  if ((bool)uVar9) {
    func_0x00010b99c544();
    pppplVar19 = pppplVar14;
    func_0x00010b99c534();
    *plVar21 = *plVar21 + 1;
  }
  else {
    pppplVar20 = &ppplStack_c8;
    plStack_78 = plVar21;
    func_0x00010b99c534(pppplVar20);
    func_0x00010b99c544();
    func_0x00010b99c648();
    FUN_10b99bbd8();
    FUN_10b99b9c0(pppplVar22);
    *plVar21 = *plVar21 + 1;
    if (1 < uVar23) {
      ppplStack_170 = (long ***)pppplVar10;
      ppplStack_168 = (long ***)pppplVar22;
      FUN_10b99b948(&ppplStack_170,-uVar23);
      FUN_10b99bd14(ppplStack_170,ppplStack_168,pppplVar20,pppplVar14,pppplVar10,pppplVar22);
      func_0x00010b99c648();
    }
    uVar9 = pppplVar22 == (long ****)*pppplVar10;
    if ((bool)uVar9) {
      pppplVar22 = (long ****)(pppplVar10[-1] + 0x1fe);
    }
    pppplVar19 = &ppplStack_c8;
    FUN_10b99bcac(pppplVar22 + -10);
    pppplVar14 = &ppplStack_b8;
    (*(code *)*ppplStack_b8)();
  }
LAB_10b99b128:
  func_0x00010b99c510();
  ppplStack_c8 = (long ***)pppplVar14;
  ppplStack_c0 = (long ***)pppplVar19;
  FUN_10b99bc84(&ppplStack_c8,pppplVar11);
  (*(code *)*apuStack_108[0])(apuStack_108);
  func_0x00010b99c3b8(uStack_70);
  if ((bool)uVar9) {
    auVar26._8_8_ = pppplVar11;
    auVar26._0_8_ = lVar2;
    return auVar26;
  }
  ___stack_chk_fail();
  func_0x00010b99c5d8();
  func_0x00010b99c614();
  ppuVar13 = apuStack_108;
  (*(code *)*apuStack_108[0])();
  func_0x00010b99c5ec();
  plVar21 = ppuVar13[1] + (ulong)ppuVar13[4] / 0x33;
  if (ppuVar13[2] != ppuVar13[1]) {
    auVar28._8_8_ = *plVar21 + ((ulong)ppuVar13[4] % 0x33) * 0x50;
    auVar28._0_8_ = plVar21;
    return auVar28;
  }
  auVar27._8_8_ = 0;
  auVar27._0_8_ = plVar21;
  return auVar27;
}



/* Entry: 10b99b1e8; end: 10b99b23b;  */

void FUN_10b99b1e8(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b99b23c; end: 10b99b2ef;  */

void FUN_10b99b23c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long alStack_128 [8];
  undefined8 uStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x00010b99c518();
  func_0x00010b99c414();
  func_0x00010b99c63c();
  uStack_38 = extraout_x8;
  func_0x00010b99c654();
  uStack_60 = extraout_x9;
  func_0x00010b99c5a4();
  FUN_10b99b2f0(&lStack_98);
  puVar2 = auStack_68;
  plVar7 = &lStack_98;
  func_0x0001090c9764();
  func_0x00010b99c4a0(uStack_90);
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_60);
  func_0x00010b99c508();
  func_0x00010b99c3b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_60);
  func_0x00010b99c5ec();
  pcStack_a8 = FUN_10b99b2f0;
  puVar3 = puVar2;
  plVar9 = plVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b99c414();
  puVar4 = (undefined8 *)(puVar3 + 0xa0);
  uStack_e8 = extraout_x8_01;
  FUN_10b99b1e8();
  puVar12 = puVar4;
  plVar13 = plVar9;
  do {
    plVar11 = plVar13 + -0x1fe;
    do {
      func_0x00010b99c544();
      uVar1 = plVar13 == plVar9;
      if ((bool)uVar1) {
        extraout_x8_00[3] = 0;
        extraout_x8_00[2] = 0;
        extraout_x8_00[5] = 0;
        extraout_x8_00[4] = 0;
        func_0x00010b99c654();
        func_0x00010b99c63c();
        *extraout_x8_00 = extraout_x8_02;
        extraout_x8_00[1] = extraout_x9_00;
LAB_10b99b3b8:
        func_0x00010b99c3b8(uStack_e8);
        if ((bool)uVar1) {
          return;
        }
        ___stack_chk_fail();
        puVar5 = puVar4;
        func_0x00010b99c524();
        func_0x00010b99c46c();
        pcStack_148 = FUN_10b99b3ec;
        puVar6 = puVar5;
        plVar10 = plVar9;
        plStack_180 = plVar11;
        plStack_178 = plVar13;
        plStack_170 = plVar7;
        puStack_168 = puVar12;
        puStack_160 = puVar2;
        puStack_158 = puVar4;
        ppuStack_150 = &puStack_b0;
        FUN_10b99b1e8();
        plVar7 = plVar9;
        puStack_190 = puVar6;
        plStack_188 = plVar10;
        func_0x00010b99bba0(plVar9,param_3,puVar6,plVar10);
        ppuVar8 = &puStack_190;
        plVar11 = plVar7;
        FUN_10b99bc84();
        func_0x00010b99c648();
        if ((long *)(puVar5[5] - 1 >> 1) < plVar7) {
          FUN_10b99b920();
          puVar4 = puVar5;
          plVar13 = plVar11;
          func_0x00010b99b210(puVar5);
          func_0x00010b99c608(ppuVar8,plVar11,puVar4,plVar13);
          (*(code *)*ppuVar8[2])();
          puVar5[5] = puVar5[5] + -1;
          puVar4 = puVar5;
          FUN_10b99bce4();
          plVar10 = plVar11;
          if ((undefined8 *)0x65 < puVar4) {
            __ZdlPv(*(undefined8 *)(puVar5[2] + -8));
            FUN_10b99bdb4(puVar5);
            plVar10 = plVar11;
          }
        }
        else {
          FUN_10b99b920();
          FUN_10b99bd14(puVar6,plVar10,plVar13,plVar9,ppuVar8,plVar11);
          func_0x00010b99c574();
          puVar5[5] = puVar5[5] + -1;
          puVar5[4] = puVar5[4] + 1;
          FUN_10b99c354(puVar5);
        }
        FUN_10b99b1e8();
        puStack_1a0 = puVar5;
        plStack_198 = plVar10;
        FUN_10b99bc84(&puStack_1a0,plVar7);
        return;
      }
      uVar1 = (long *)*plVar13 == plVar7;
      if ((bool)uVar1) {
        plVar7 = &lStack_138;
        FUN_10b99b9c0(&lStack_138,plVar13);
        param_3 = plVar13;
        FUN_10b99b3ec(puVar2 + 0xa0,puVar12,plVar13);
        puVar4 = extraout_x8_00 + 1;
        *extraout_x8_00 = uStack_130;
        plVar9 = alStack_128;
        (**(code **)(alStack_128[0] + 0x10))();
        func_0x00010b99c524();
        goto LAB_10b99b3b8;
      }
      plVar13 = plVar13 + 10;
      plVar11 = plVar11 + 10;
    } while ((long *)*puVar12 != plVar11);
    puVar12 = puVar12 + 1;
    plVar13 = (long *)*puVar12;
  } while( true );
}



/* Entry: 10b99b2f0; end: 10b99b3eb;  */

void FUN_10b99b2f0(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  long alStack_88 [8];
  undefined8 uStack_48;
  
  lVar2 = param_2;
  plVar8 = param_3;
  func_0x00010b99c414();
  puVar3 = (undefined8 *)(lVar2 + 0xa0);
  uStack_48 = extraout_x8;
  FUN_10b99b1e8();
  puVar11 = puVar3;
  plVar12 = plVar8;
  do {
    plVar6 = plVar12 + -0x1fe;
    do {
      func_0x00010b99c544();
      uVar1 = plVar12 == plVar8;
      if ((bool)uVar1) {
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        func_0x00010b99c654();
        func_0x00010b99c63c();
        *param_1 = extraout_x8_00;
        param_1[1] = extraout_x9;
LAB_10b99b3b8:
        func_0x00010b99c3b8(uStack_48);
        if ((bool)uVar1) {
          return;
        }
        ___stack_chk_fail();
        puVar4 = puVar3;
        func_0x00010b99c524();
        func_0x00010b99c46c();
        pcStack_a8 = FUN_10b99b3ec;
        puVar5 = puVar4;
        plVar9 = plVar8;
        plStack_e0 = plVar6;
        plStack_d8 = plVar12;
        plStack_d0 = param_3;
        puStack_c8 = puVar11;
        lStack_c0 = param_2;
        puStack_b8 = puVar3;
        puStack_b0 = &stack0xfffffffffffffff0;
        FUN_10b99b1e8();
        plVar6 = plVar8;
        puStack_f0 = puVar5;
        plStack_e8 = plVar9;
        func_0x00010b99bba0(plVar8,param_4,puVar5,plVar9);
        ppuVar7 = &puStack_f0;
        plVar10 = plVar6;
        FUN_10b99bc84();
        func_0x00010b99c648();
        if ((long *)(puVar4[5] - 1 >> 1) < plVar6) {
          FUN_10b99b920();
          puVar3 = puVar4;
          plVar12 = plVar10;
          func_0x00010b99b210(puVar4);
          func_0x00010b99c608(ppuVar7,plVar10,puVar3,plVar12);
          (*(code *)*ppuVar7[2])();
          puVar4[5] = puVar4[5] + -1;
          puVar3 = puVar4;
          FUN_10b99bce4();
          plVar9 = plVar10;
          if ((undefined8 *)0x65 < puVar3) {
            __ZdlPv(*(undefined8 *)(puVar4[2] + -8));
            FUN_10b99bdb4(puVar4);
            plVar9 = plVar10;
          }
        }
        else {
          FUN_10b99b920();
          FUN_10b99bd14(puVar5,plVar9,plVar12,plVar8,ppuVar7,plVar10);
          func_0x00010b99c574();
          puVar4[5] = puVar4[5] + -1;
          puVar4[4] = puVar4[4] + 1;
          FUN_10b99c354(puVar4);
        }
        FUN_10b99b1e8();
        puStack_100 = puVar4;
        plStack_f8 = plVar9;
        FUN_10b99bc84(&puStack_100,plVar6);
        return;
      }
      uVar1 = (long *)*plVar12 == param_3;
      if ((bool)uVar1) {
        param_3 = &lStack_98;
        FUN_10b99b9c0(&lStack_98,plVar12);
        param_4 = plVar12;
        FUN_10b99b3ec(param_2 + 0xa0,puVar11,plVar12);
        puVar3 = param_1 + 1;
        *param_1 = uStack_90;
        plVar8 = alStack_88;
        (**(code **)(alStack_88[0] + 0x10))();
        func_0x00010b99c524();
        goto LAB_10b99b3b8;
      }
      plVar12 = plVar12 + 10;
      plVar6 = plVar6 + 10;
    } while ((long *)*puVar11 != plVar6);
    puVar11 = puVar11 + 1;
    plVar12 = (long *)*puVar11;
  } while( true );
}



/* Entry: 10b99b3ec; end: 10b99b533;  */

void FUN_10b99b3ec(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar1 = param_1;
  uVar3 = param_2;
  FUN_10b99b1e8();
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  func_0x00010b99bba0(param_2,param_3,uVar1,uVar3);
  puVar2 = &uStack_50;
  uVar4 = param_2;
  FUN_10b99bc84();
  func_0x00010b99c648();
  if (*(long *)(param_1 + 0x28) - 1U >> 1 < param_2) {
    FUN_10b99b920();
    uVar1 = param_1;
    uVar3 = uVar4;
    func_0x00010b99b210(param_1);
    func_0x00010b99c608(puVar2,uVar4,uVar1,uVar3);
    (**(code **)puVar2[2])();
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    uVar1 = param_1;
    FUN_10b99bce4();
    uVar3 = uVar4;
    if (0x65 < uVar1) {
      __ZdlPv(*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
      FUN_10b99bdb4(param_1);
      uVar3 = uVar4;
    }
  }
  else {
    FUN_10b99b920();
    FUN_10b99bd14(uVar1);
    func_0x00010b99c574();
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    FUN_10b99c354(param_1);
  }
  FUN_10b99b1e8();
  uStack_60 = param_1;
  uStack_58 = uVar3;
  FUN_10b99bc84(&uStack_60,param_2);
  return;
}



/* Entry: 10b99b534; end: 10b99b58f;  */

void FUN_10b99b534(long *param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  undefined *puVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar5;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar6;
  undefined *puStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  
  if (*param_1 == 0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f7d09fb);
  }
  else if ((char)param_1[1] != '\x01') {
    __ZNSt3__15mutex4lockEv();
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  puVar4 = &UNK_10f7d0a24;
  lVar1 = 0xb;
  __ZNSt3__120__throw_system_errorEiPKc();
  plVar2 = (long *)(lVar1 + 0x20);
  uStack_90 = 1;
  plStack_98 = plVar2;
  puStack_88 = puVar4;
  __ZNSt3__15mutex4lockEv();
  do {
    while( true ) {
      if ((*(byte *)(lVar1 + 0x18) & 1) != 0) goto LAB_10b99b6a8;
      if (*(long *)(lVar1 + 200) != 0) break;
      if ((*(byte *)(lVar1 + 0xd0) & 1) == 0) {
        *(undefined1 *)(lVar1 + 0xd0) = 1;
        plVar2 = *(long **)(lVar1 + 0xe8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      func_0x00010b99c438();
LAB_10b99b694:
      if ((int)plVar2 == 1) goto LAB_10b99b6a8;
    }
    if (*(ulong *)(lVar1 + 0xe0) <= *(ulong *)(lVar1 + 0xd8)) {
      func_0x00010b99c438();
      goto LAB_10b99b694;
    }
    func_0x00010b99c66c();
    lVar6 = *(long *)(extraout_x8_00 + (extraout_x9 / 0x33) * 8) + (extraout_x9 % 0x33) * 0x50;
    if (*(char *)(lVar6 + 0x40) == '\x01') {
      func_0x00010b99c438();
      goto LAB_10b99b694;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar4 = *(undefined **)(lVar6 + 0x38);
    if ((long)puVar4 <= (long)plVar2) {
      bVar3 = false;
      goto LAB_10b99b6ac;
    }
    puStack_a0 = puVar4;
    if ((long)puStack_88 <= (long)puVar4) {
      puStack_a0 = puStack_88;
    }
    plVar2 = (long *)(lVar1 + 0x68);
    FUN_10b9a2008(plVar2,&plStack_98,&puStack_a0);
  } while (puStack_a0 != puStack_88 || (int)plVar2 != 1);
LAB_10b99b6a8:
  bVar3 = true;
LAB_10b99b6ac:
  *extraout_x8 = &UNK_1053a6a3c;
  extraout_x8[1] = &PTR_DAT_110a21c28;
  if ((bVar3) || (*(byte *)(lVar1 + 0x18) != 0)) {
    *param_3 = 0;
  }
  else {
    func_0x00010b99c66c();
    func_0x00010b99c5ac();
    func_0x0001090c9764(extraout_x8,extraout_x8_01 + extraout_x9_00 * 0x50 + 8);
    func_0x00010b99c66c();
    func_0x00010b99c5ac();
    lVar6 = extraout_x8_02 + extraout_x9_01 * 0x50;
    puVar5 = *(undefined8 **)(lVar6 + 0x10);
    *param_4 = *(undefined8 *)(lVar6 + 0x48);
    *(long *)(lVar1 + 0xd8) = *(long *)(lVar1 + 0xd8) + 1;
    (*(code *)*puVar5)();
    *(long *)(lVar1 + 200) = *(long *)(lVar1 + 200) + -1;
    *(long *)(lVar1 + 0xc0) = *(long *)(lVar1 + 0xc0) + 1;
    FUN_10b99c354(lVar1 + 0xa0);
  }
  func_0x00010b99c54c();
  return;
}



/* Entry: 10b99b590; end: 10b99b783;  */

void FUN_10b99b590(undefined8 *param_1,long param_2,long param_3,undefined1 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  bool bVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar3;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar4;
  long lStack_80;
  long *plStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  plVar1 = (long *)(param_2 + 0x20);
  uStack_70 = 1;
  plStack_78 = plVar1;
  lStack_68 = param_3;
  __ZNSt3__15mutex4lockEv();
  do {
    while( true ) {
      if ((*(byte *)(param_2 + 0x18) & 1) != 0) goto LAB_10b99b6a8;
      if (*(long *)(param_2 + 200) != 0) break;
      if ((*(byte *)(param_2 + 0xd0) & 1) == 0) {
        *(undefined1 *)(param_2 + 0xd0) = 1;
        plVar1 = *(long **)(param_2 + 0xe8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      func_0x00010b99c438();
LAB_10b99b694:
      if ((int)plVar1 == 1) goto LAB_10b99b6a8;
    }
    if (*(ulong *)(param_2 + 0xe0) <= *(ulong *)(param_2 + 0xd8)) {
      func_0x00010b99c438();
      goto LAB_10b99b694;
    }
    func_0x00010b99c66c();
    lVar4 = *(long *)(extraout_x8 + (extraout_x9 / 0x33) * 8) + (extraout_x9 % 0x33) * 0x50;
    if (*(char *)(lVar4 + 0x40) == '\x01') {
      func_0x00010b99c438();
      goto LAB_10b99b694;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar4 = *(long *)(lVar4 + 0x38);
    if (lVar4 <= (long)plVar1) {
      bVar2 = false;
      goto LAB_10b99b6ac;
    }
    lStack_80 = lVar4;
    if (lStack_68 <= lVar4) {
      lStack_80 = lStack_68;
    }
    plVar1 = (long *)(param_2 + 0x68);
    FUN_10b9a2008(plVar1,&plStack_78,&lStack_80);
  } while (lStack_80 != lStack_68 || (int)plVar1 != 1);
LAB_10b99b6a8:
  bVar2 = true;
LAB_10b99b6ac:
  *param_1 = &UNK_1053a6a3c;
  param_1[1] = &PTR_DAT_110a21c28;
  if ((bVar2) || (*(byte *)(param_2 + 0x18) != 0)) {
    *param_4 = 0;
  }
  else {
    func_0x00010b99c66c();
    func_0x00010b99c5ac();
    func_0x0001090c9764(param_1,extraout_x8_00 + extraout_x9_00 * 0x50 + 8);
    func_0x00010b99c66c();
    func_0x00010b99c5ac();
    lVar4 = extraout_x8_01 + extraout_x9_01 * 0x50;
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *param_5 = *(undefined8 *)(lVar4 + 0x48);
    *(long *)(param_2 + 0xd8) = *(long *)(param_2 + 0xd8) + 1;
    (*(code *)*puVar3)();
    *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + -1;
    *(long *)(param_2 + 0xc0) = *(long *)(param_2 + 0xc0) + 1;
    FUN_10b99c354(param_2 + 0xa0);
  }
  func_0x00010b99c54c();
  return;
}



/* Entry: 10b99b784; end: 10b99b8a3;  */

undefined8 FUN_10b99b784(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *apcStack_68 [6];
  undefined8 uStack_38;
  
  func_0x00010b99c414();
  uStack_38 = extraout_x8;
  FUN_10b99b590(apcStack_68);
  uVar1 = 1;
  func_0x000107c316cc(auStack_98,&UNK_10f7d09eb,0xf,0);
  (*apcStack_68[0])(apcStack_68);
  func_0x000107c316d0(auStack_98);
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  func_0x00010b99c654();
  func_0x00010b99c63c();
  uStack_90 = extraout_x9;
  func_0x0001090c9764(apcStack_68,auStack_98);
  func_0x00010b99c408(uStack_90);
  lVar2 = param_1 + 0x20;
  __ZNSt3__15mutex4lockEv();
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + -1;
  func_0x00010b99c498();
  func_0x00010b99c508();
  func_0x00010b99c448(apcStack_68);
  func_0x00010b99c3b8(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b99c448(apcStack_68);
    func_0x00010b99c46c();
    func_0x00010b99c660();
    func_0x00010b99c5a4();
    func_0x00010b999c40(0xe9,lVar2);
    uVar3 = 0x21;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x21);
    return uVar3;
  }
  return 1;
}



/* Entry: 10b99b8a4; end: 10b99b91f;  */

void FUN_10b99b8a4(void)

{
  long unaff_x20;
  
  func_0x00010b99c660();
  func_0x00010b99c5a4();
  func_0x00010b999c40(unaff_x20 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0x20);
  return;
}



/* Entry: 10b99b920; end: 10b99b947;  */

undefined1  [16] FUN_10b99b920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b99b948(&uStack_20,param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b99b948; end: 10b99b9bf;  */

void FUN_10b99b948(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 != 0) {
    plVar3 = (long *)*param_1;
    uVar1 = (param_1[1] - *plVar3) / 0x50 + param_2;
    if ((long)uVar1 < 1) {
      uVar2 = (0x32 - uVar1) / 0x33;
      plVar3 = plVar3 + -uVar2;
      lVar4 = *plVar3 + (uVar2 * 0x33 - (0x32 - uVar1)) * 0x50 + 4000;
    }
    else {
      plVar3 = plVar3 + uVar1 / 0x33;
      lVar4 = *plVar3 + (uVar1 % 0x33) * 0x50;
    }
    *param_1 = (long)plVar3;
    param_1[1] = lVar4;
  }
  return;
}



/* Entry: 10b99b9c0; end: 10b99ba03;  */

void FUN_10b99b9c0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b99c660();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  (**(code **)(*(long *)(unaff_x19 + 0x10) + 0x10))(param_1 + 2,(long *)(unaff_x19 + 0x10));
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 10b99ba04; end: 10b99ba47;  */

long * FUN_10b99ba04(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10b99ba48();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10b99bb38();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b99ba48; end: 10b99bb0b;  */

void FUN_10b99ba48(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_10b99b1e8();
  lVar3 = param_2;
  func_0x00010b99b210(param_1);
  do {
    lVar5 = param_2 + -0xff0;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x19;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x33;
        }
        param_1[4] = lVar3;
        return;
      }
      func_0x00010b99c574();
      lVar5 = lVar5 + 0x50;
      param_2 = param_2 + 0x40;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 10b99bb0c; end: 10b99bb37;  */

long * FUN_10b99bb0c(long *param_1)

{
  FUN_10b99bb38();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b99bb38; end: 10b99bbd7;  */

void FUN_10b99bb38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b99bbd8; end: 10b99bbff;  */

undefined1  [16] FUN_10b99bbd8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b99b948(&uStack_20,0xffffffffffffffff);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b99bc00; end: 10b99bc83;  */

undefined8
FUN_10b99bc00(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  puStack_38 = &uStack_48;
  uStack_48 = param_5;
  uStack_40 = param_6;
  if (param_1 != param_3) {
    lVar1 = *param_1;
    do {
      FUN_10b99c10c(&puStack_38,param_2,lVar1 + 0xff0);
      param_1 = param_1 + 1;
      param_2 = *param_1;
      lVar1 = param_2;
    } while (param_1 != param_3);
  }
  FUN_10b99c10c(&puStack_38,param_2,param_4);
  return uStack_40;
}



/* Entry: 10b99bc84; end: 10b99bcab;  */

undefined1  [16] FUN_10b99bc84(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b99b948(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b99bcac; end: 10b99bce3;  */

void FUN_10b99bcac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b99c660();
  *param_1 = *param_2;
  func_0x0001090c9764(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  return;
}



/* Entry: 10b99bce4; end: 10b99bd13;  */

long FUN_10b99bce4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x33 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10b99bd14; end: 10b99bdb3;  */

undefined1  [16]
FUN_10b99bd14(long *param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 != param_3) {
    lVar2 = *param_3;
    while( true ) {
      param_3 = param_3 + -1;
      FUN_10b99c270(auStack_48,lVar2,param_4,param_5,param_6);
      param_5 = uStack_40;
      param_6 = uStack_38;
      if (param_3 == param_1) break;
      lVar2 = *param_3;
      param_4 = lVar2 + 0xff0;
    }
    param_4 = *param_3 + 0xff0;
  }
  FUN_10b99c270(auStack_48,param_2,param_4,param_5,param_6);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b99bdb4; end: 10b99bdbf;  */

void FUN_10b99bdb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != lVar2 + -8) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b99bdc0; end: 10b99bf07;  */

void FUN_10b99bdc0(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010b99c518();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x00010b99c4ec();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x00010b99c5e0();
      lStack_58 = lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_10b99c044(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x00010b99c3a0();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010b99c4c4();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 10b99bf08; end: 10b99c043;  */

void FUN_10b99bf08(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x00010b99c518();
  func_0x00010b99c4ec();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x00010b99c454();
      if (!bVar2) {
        func_0x00010b99c4fc();
      }
      func_0x00010b99c5bc();
      puVar5 = extraout_x8_00;
    }
    else {
      uVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        uVar4 = 0;
      }
      func_0x00010b99c5cc();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      FUN_10b99c044(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x00010b99c3a0();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b99c044; end: 10b99c06b;  */

void FUN_10b99c044(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b99c06c; end: 10b99c10b;  */

undefined1  [16] FUN_10b99c06c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b99c10c; end: 10b99c1d7;  */

void FUN_10b99c10c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)*param_1;
  lVar2 = ((undefined8 *)*param_1)[1];
  if (param_2 != param_3) {
    lVar4 = *plVar3;
    while( true ) {
      lVar1 = ((lVar4 - lVar2) + 0xff0) / 0x50;
      lVar4 = (param_3 - param_2) / 0x50;
      if (lVar1 <= lVar4) {
        lVar4 = lVar1;
      }
      lVar1 = param_2 + lVar4 * 0x50;
      for (lVar4 = lVar4 * 0x50; lVar4 != 0; lVar4 = lVar4 + -0x50) {
        FUN_10b99bcac(lVar2,param_2);
        param_2 = param_2 + 0x50;
        lVar2 = lVar2 + 0x50;
      }
      if (param_3 == lVar1) break;
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar4 = lVar2;
      param_2 = lVar1;
    }
    if (lVar2 == *plVar3 + 0xff0) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
    }
  }
  param_1 = (undefined8 *)*param_1;
  *param_1 = plVar3;
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b99c1d8; end: 10b99c26f;  */

void FUN_10b99c1d8(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x00010b99c518();
  func_0x00010b99c4ec();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x00010b99c454();
      if (!bVar2) {
        func_0x00010b99c4fc();
      }
      func_0x00010b99c5bc();
      puVar5 = extraout_x8_00;
    }
    else {
      uVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        uVar4 = 0;
      }
      func_0x00010b99c5cc();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      FUN_10b99c044(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x00010b99c3a0();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b99c270; end: 10b99c353;  */

void FUN_10b99c270(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    lVar2 = *param_4;
    lVar3 = param_3;
    while( true ) {
      lVar1 = (param_5 - lVar2) / 0x50;
      lVar2 = (lVar3 - param_2) / 0x50;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      lVar1 = lVar3 + lVar2 * -0x50;
      for (lVar2 = lVar2 * -0x50; lVar2 != 0; lVar2 = lVar2 + 0x50) {
        lVar3 = lVar3 + -0x50;
        param_5 = param_5 + -0x50;
        FUN_10b99bcac(param_5,lVar3);
      }
      if (param_2 == lVar1) break;
      param_4 = param_4 + -1;
      lVar2 = *param_4;
      param_5 = lVar2 + 0xff0;
      lVar3 = lVar1;
    }
    param_2 = param_3;
    if (param_5 == *param_4 + 0xff0) {
      param_4 = param_4 + 1;
      param_5 = *param_4;
    }
  }
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  param_1[2] = param_5;
  return;
}



/* Entry: 10b99c354; end: 10b99c39f;  */

void FUN_10b99c354(long param_1)

{
  if (0x65 < *(ulong *)(param_1 + 0x20)) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x33;
  }
  return;
}



/* Entry: 10b99c3a0; end: 10b99c677;  */

void FUN_10b99c3a0(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long lVar3;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar3 = unaff_x19[1];
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[2];
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000010;
  for (; lVar1 != lVar3; lVar1 = lVar1 + -8) {
  }
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b99c678; end: 10b99c717;  */

undefined8 FUN_10b99c678(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plStack_28;
  
  if (param_1 != (long *)0x0) {
    plVar4 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = param_1;
  plStack_28 = param_1;
  func_0x00010b99caa0();
  *plVar4 = (long)param_1;
  func_0x000107c31048((char)param_1[9]);
  _pthread_set_qos_class_self_np();
  puVar1 = &UNK_10f7d0ef0;
  if (param_1[8] != 0) {
    puVar1 = (undefined *)(param_1[8] + 0x18);
  }
  _pthread_setname_np(puVar1);
  (*(code *)param_1[2])(param_1 + 2);
  func_0x00010b8db2d4(&plStack_28);
  return 0;
}



/* Entry: 10b99c718; end: 10b99c79b;  */

undefined8 * FUN_10b99c718(undefined8 *param_1,long *param_2,undefined1 param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110d7e260;
  param_1[1] = 1;
  param_1[2] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 3,param_4 + 1);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[8] = lVar4;
  *(undefined1 *)(param_1 + 9) = param_3;
  param_1[10] = 0;
  return param_1;
}



/* Entry: 10b99c79c; end: 10b99c923;  */

void FUN_10b99c79c(undefined8 *param_1,undefined8 param_2,undefined1 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  long *extraout_x8;
  undefined8 uStack_118;
  undefined1 auStack_110 [40];
  undefined8 uStack_e8;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = (int)auStack_78;
  pcVar8 = param_4;
  uStack_79 = param_3;
  _pthread_attr_init();
  if (iVar2 == 0) {
    uStack_88 = 0;
    puVar3 = auStack_78;
    _pthread_attr_getstacksize(puVar3,&uStack_88);
    if (((int)puVar3 == 0) && (uStack_88 >> 0x14 == 0)) {
      puVar3 = auStack_78;
      _pthread_attr_setstacksize(puVar3,0x100000);
      if ((int)puVar3 != 0) {
        func_0x00010b99cab0();
        puVar7 = &UNK_10f7d0a6f;
        FUN_10b99f5f8(&uStack_90);
        *param_1 = 2;
        param_1[1] = uStack_90;
        uStack_90 = 0;
        puVar4 = &uStack_90;
        goto LAB_10b99c800;
      }
    }
    FUN_10b99c924(&uStack_90,param_2,&uStack_79,param_4);
    pcVar8 = FUN_10b99c678;
    iVar2 = (int)uStack_90 + 0x50;
    puVar7 = auStack_78;
    _pthread_create();
    if (iVar2 == 0) {
      func_0x00010b99cab0();
      *param_1 = 1;
      param_1[1] = uStack_90;
      uStack_90 = 0;
    }
    else {
      func_0x00010b99cab0();
      puVar7 = &UNK_10f7d0a98;
      FUN_10b99f5f8(&uStack_98);
      *param_1 = 2;
      param_1[1] = uStack_98;
      uStack_98 = 0;
      func_0x000104bda93c(&uStack_98);
    }
    puVar4 = &uStack_90;
    func_0x00010b8db2d4();
  }
  else {
    puVar7 = &UNK_10f7d0a46;
    FUN_10b99f5f8(&uStack_88);
    *param_1 = 2;
    param_1[1] = uStack_88;
    uStack_88 = 0;
    puVar4 = &uStack_88;
LAB_10b99c800:
    func_0x000104bda93c();
  }
  func_0x00010b99cab8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8db2d4(&uStack_90);
  __Unwind_Resume(puVar4);
  uStack_e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0x58;
  __Znwm();
  uVar1 = *puVar7;
  uStack_118 = *(undefined8 *)pcVar8;
  (**(code **)(*(long *)(pcVar8 + 8) + 0x10))(auStack_110,pcVar8 + 8);
  lVar6 = lVar5;
  FUN_10b99c718(lVar5,puVar4,uVar1,&uStack_118);
  *extraout_x8 = lVar5;
  func_0x00010b99ca90();
  func_0x00010b99cab8(uStack_e8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b99ca90();
  __ZdlPv(lVar5);
  __Unwind_Resume();
  if (*(long *)(lVar6 + 0x50) != 0) {
    _pthread_join(*(long *)(lVar6 + 0x50),0);
    *(undefined8 *)(lVar6 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b99c924; end: 10b99c9e7;  */

void FUN_10b99c924(long *param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x58;
  __Znwm();
  uVar1 = *param_3;
  uStack_78 = *param_4;
  (**(code **)(param_4[1] + 0x10))(auStack_70,param_4 + 1);
  lVar3 = lVar2;
  FUN_10b99c718(lVar2,param_2,uVar1,&uStack_78);
  *param_1 = lVar2;
  FUN_10b99ca90();
  func_0x00010b99cab8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b99ca90();
  __ZdlPv(lVar2);
  __Unwind_Resume();
  if (*(long *)(lVar3 + 0x50) != 0) {
    _pthread_join(*(long *)(lVar3 + 0x50),0);
    *(undefined8 *)(lVar3 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b99c9e8; end: 10b99ca17;  */

void FUN_10b99c9e8(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    _pthread_join(*(long *)(param_1 + 0x50),0);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b99ca18; end: 10b99ca77;  */

undefined8 * FUN_10b99ca18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110d7e260;
  puVar1 = param_1;
  func_0x00010b99caa0();
  if ((undefined8 *)*puVar1 != param_1) {
    FUN_10b99c9e8(param_1);
  }
  func_0x000107c278f4(param_1 + 8);
  (**(code **)param_1[3])();
  return param_1;
}



/* Entry: 10b99ca78; end: 10b99ca7b;  */

undefined8 * FUN_10b99ca78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110d7e260;
  puVar1 = param_1;
  func_0x00010b99caa0();
  if ((undefined8 *)*puVar1 != param_1) {
    FUN_10b99c9e8(param_1);
  }
  func_0x000107c278f4(param_1 + 8);
  (**(code **)param_1[3])();
  return param_1;
}



/* Entry: 10b99ca7c; end: 10b99ca8f;  */

void FUN_10b99ca7c(void)

{
  FUN_10b99ca18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99ca90; end: 10b99cacb;  */

void FUN_10b99ca90(void)

{
  long unaff_x24;
  undefined8 *in_stack_00000010;
  
                    /* WARNING: Could not recover jumptable at 0x00010b99ca9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000010)(unaff_x24 + 8);
  return;
}



/* Entry: 10b99cacc; end: 10b99cb4f;  */

ulong FUN_10b99cacc(void)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *extraout_x8;
  undefined4 extraout_w9;
  ulong uVar5;
  ulong extraout_x9;
  code *extraout_x10;
  
  ppuVar3 = &PTR___tlv_bootstrap_11340e1e8;
  (*(code *)PTR___tlv_bootstrap_11340e1e8)();
  if (((ulong)*ppuVar3 & 1) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1138469c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        iRam00000001138469c8 = iRam00000001138469c8 + 1;
      }
    } while (cVar1 != '\0');
    ppuVar3 = &PTR___tlv_bootstrap_11340e1d0;
    (*(code *)PTR___tlv_bootstrap_11340e1d0)();
    *(undefined4 *)ppuVar3 = extraout_w9;
    puVar4 = extraout_x8;
    (*extraout_x10)();
    *puVar4 = 1;
    uVar5 = extraout_x9;
  }
  else {
    ppuVar3 = &PTR___tlv_bootstrap_11340e1d0;
    (*(code *)PTR___tlv_bootstrap_11340e1d0)();
    uVar5 = (ulong)*(uint *)ppuVar3;
  }
  return uVar5;
}



/* Entry: 10b99cb50; end: 10b99cc1b;  */

undefined8 * FUN_10b99cb50(undefined8 *param_1,long *param_2,undefined1 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_110d7e2c8;
  param_1[4] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  FUN_10b99cc1c(param_1 + 0xe);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xf] = lVar4;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)((long)param_1 + 0x81) = 0;
  return param_1;
}


