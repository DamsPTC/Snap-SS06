/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b994080; end: 10b994103;  */

void FUN_10b994080(void)

{
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 auStack_58 [40];
  
  func_0x00010b994a30();
  func_0x00010b994abc();
  if (!(bool)in_CY) {
    lVar1 = *(long *)(extraout_x8 + unaff_x21 * 0x18 + 0x10);
    if (lVar1 != 0) {
      FUN_10b9944d8(auStack_58,lVar1 + 0x20);
      FUN_10b994518();
      func_0x000108931ecc(auStack_58);
      goto LAB_10b9940dc;
    }
  }
  *unaff_x20 = 0;
  unaff_x20[0x28] = 0;
LAB_10b9940dc:
  func_0x000107c3a284();
  return;
}



/* Entry: 10b994104; end: 10b994157;  */

void FUN_10b994104(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b994a9c();
  func_0x000107c3a270();
  func_0x000107c30f8c(*(long *)(unaff_x21 + 0x88) + unaff_x20 * 0x18);
  func_0x000107c3a28c();
  return;
}



/* Entry: 10b994158; end: 10b9941eb;  */

bool FUN_10b994158(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c3a270();
  lVar2 = param_1 + 0x58;
  func_0x000107c30ff8();
  lVar1 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x70);
  if (lVar1 != lVar2) {
    func_0x000107c30f8c(*(long *)(param_1 + 0x88) + *(long *)(param_2 + 0x18) * 0x18,param_3);
  }
  func_0x000107c3a28c();
  return lVar1 != lVar2;
}



/* Entry: 10b9941ec; end: 10b9941f7;  */

void FUN_10b9941ec(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long *plVar1;
  
  param_2 = param_2 + 0x20;
  func_0x0001003adda4(param_1);
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(long **)(unaff_x19 + 8) = plVar1;
  func_0x0001003addd4();
  return;
}



/* Entry: 10b9941f8; end: 10b99428b;  */

void FUN_10b9941f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001138469c0 & 1) == 0) {
    iVar5 = 0x138469c0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c30ec4(0x1138469b8);
      ___cxa_guard_release(0x1138469c0);
    }
  }
  lVar4 = lRam00000001138469b8;
  if ((lRam00000001138469b8 != 0) && (*(long *)(lRam00000001138469b8 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lRam00000001138469b8 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b99428c; end: 10b9944c3;  */

undefined8 * FUN_10b99428c(undefined8 param_1,byte *param_2,byte *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [15];
  byte bStack_b1;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined1 *puStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [48];
  undefined8 uStack_58;
  
  pbVar4 = param_3;
  func_0x000107c3a2a8();
  func_0x00010b994a8c();
  uVar1 = (*param_2 & 0xfe) == 8;
  uStack_58 = extraout_x8;
  if ((bool)uVar1) {
    func_0x000107c30f48(&puStack_a0);
    if ((char)pbStack_98 != '\0') {
      *param_3 = 1;
      if (puStack_a0 == (undefined1 *)0x0) {
        uStack_c8 = 0;
        uStack_b0 = 0;
      }
      else {
        do {
          func_0x000107c3a294();
          uStack_c8 = extraout_x8_00;
        } while (extraout_w11 != 0);
        do {
          func_0x000107c3a294();
          uStack_b0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      auStack_a8[0] = 0xff00;
      func_0x000107c30fa8(&uStack_b0);
      unaff_x19 = &uStack_b0;
      func_0x000107c278f4();
      func_0x00010b994a78();
      func_0x00010b994af4();
      goto LAB_10b994434;
    }
    func_0x00010b994af4();
  }
  else {
    uVar1 = 0;
    if (*param_2 == 10) {
      FUN_10b9905a4();
      bStack_b1 = 0;
      func_0x000107c30fa8(&puStack_a0,unaff_x20 + 0x10);
      pbVar4 = &bStack_b1;
      FUN_10b99428c(&uStack_b0,&puStack_a0,pbVar4);
      func_0x000107c27900(&pbStack_98);
      puStack_a0 = auStack_88;
      uStack_90 = 3;
      pbStack_98 = (byte *)0x0;
      lVar5 = unaff_x20 + 0x28;
      for (uVar6 = 0; uVar1 = uVar6 == *(ulong *)(unaff_x20 + 0x20),
          uVar6 < *(ulong *)(unaff_x20 + 0x20); uVar6 = uVar6 + 1) {
        pbVar4 = &bStack_b1;
        FUN_10b99428c(&uStack_c8,lVar5,pbVar4);
        func_0x000107c30fd4(&puStack_a0,&uStack_c8);
        func_0x000107c27900(auStack_c0);
        lVar5 = lVar5 + 0x10;
      }
      if ((bStack_b1 & 1) != 0) {
        *param_3 = 1;
        func_0x000107c30f48(&uStack_c8,&uStack_b0);
        unaff_x19 = &uStack_c8;
        pbVar4 = pbStack_98;
        FUN_10b990ebc(unaff_x19,puStack_a0,pbStack_98);
        func_0x00010b994a78();
        func_0x00010b994aec();
        func_0x00010b994a54(&uStack_b0);
        goto LAB_10b994434;
      }
      func_0x00010b994aec();
      func_0x00010b994a54(&uStack_b0);
    }
  }
  func_0x000107c30f3c();
LAB_10b994434:
  func_0x00010b994a64(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b994a78();
    func_0x00010b994aec();
    func_0x000107c27900(auStack_a8);
    func_0x00010b994a44();
    puVar2 = (undefined8 *)&UNK_10f7d086b;
    func_0x000104bd47e8(&UNK_10f7d086b);
    puVar3 = puVar2;
    func_0x000107c30df0();
    func_0x000107c30f3c(puVar3 + 3,pbVar4);
    return puVar2;
  }
  return unaff_x19;
}



/* Entry: 10b9944c4; end: 10b9944d7;  */

undefined * FUN_10b9944c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10f7d086b;
  func_0x000104bd47e8(&UNK_10f7d086b);
  puVar2 = puVar1;
  func_0x000107c30df0();
  func_0x000107c30f3c(puVar2 + 0x18,param_3);
  return puVar1;
}



/* Entry: 10b9944d8; end: 10b994517;  */

long FUN_10b9944d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c30df0();
  func_0x000107c30f3c(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 10b994518; end: 10b994533;  */

void FUN_10b994518(long param_1)

{
  FUN_10b994534();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b994534; end: 10b99455f;  */

void FUN_10b994534(long param_1)

{
  long unaff_x19;
  
  func_0x000107c3a29c();
  func_0x000107c30df0();
  func_0x000107c30f40(param_1 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10b994560; end: 10b994587;  */

undefined8 * FUN_10b994560(undefined8 *param_1)

{
  FUN_10b994588(*param_1);
  return param_1;
}



/* Entry: 10b994588; end: 10b9945d7;  */

void FUN_10b994588(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b994adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9945d8; end: 10b9945eb;  */

void FUN_10b9945d8(void)

{
  func_0x00010b9946ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9945ec; end: 10b994647;  */

void FUN_10b9945ec(undefined8 param_1,long param_2)

{
  long alStack_30 [2];
  
  func_0x00010b9946e8(alStack_30,param_2 + 0x10);
  if (alStack_30[0] == 0) {
    func_0x000107c30f84(param_1);
  }
  else {
    FUN_10b994030(param_1,alStack_30[0],*(undefined8 *)(param_2 + 0x38));
  }
  func_0x000107c3a2a0();
  return;
}



/* Entry: 10b994648; end: 10b994723;  */

void FUN_10b994648(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b9946e8(&uStack_30,param_2 + 0x10);
  uVar1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x000107c3a2a0();
  return;
}



/* Entry: 10b994724; end: 10b9948cb;  */

long * FUN_10b994724(long *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  plVar5 = param_1;
  func_0x00010b994a8c();
  plVar5 = (long *)*plVar5;
  uStack_58 = extraout_x8;
  func_0x000104bda340(plVar5,param_1[3]);
  for (uVar10 = 0; uVar10 != param_1[3]; uVar10 = uVar10 + 1) {
    if (*(char *)(*param_1 + uVar10) == -2) {
      uVar6 = param_1[1] + uVar10 * 0x20;
      func_0x000107c31028();
      plVar8 = (long *)*param_1;
      uVar9 = param_1[3];
      plVar5 = plVar8;
      func_0x000107c31020(plVar8,uVar9,uVar6);
      uVar7 = uVar9 & uVar6 >> 7;
      if ((((long)plVar5 - uVar7 ^ uVar10 - uVar7) & uVar9) < 8) {
        *(byte *)((long)plVar8 + uVar10) = (byte)uVar6 & 0x7f;
        func_0x000107c3a2ac();
      }
      else {
        cVar2 = *(char *)((long)plVar8 + (long)plVar5);
        bVar3 = (byte)uVar6 & 0x7f;
        *(byte *)((long)plVar8 + (long)plVar5) = bVar3;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(plVar5 + -1)) + 1) = bVar3;
        lVar1 = param_1[1] + uVar10 * 0x20;
        if (cVar2 == -0x80) {
          plVar5 = (long *)(param_1[1] + (long)plVar5 * 0x20);
          func_0x000107c3102c(plVar5,lVar1);
          *(undefined1 *)(*param_1 + uVar10) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar10 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          func_0x000107c3102c(auStack_78,lVar1);
          func_0x000107c3102c(param_1[1] + uVar10 * 0x20,param_1[1] + (long)plVar5 * 0x20);
          plVar5 = (long *)(param_1[1] + (long)plVar5 * 0x20);
          func_0x000107c3102c(plVar5,auStack_78);
          uVar10 = uVar10 - 1;
        }
      }
    }
  }
  bVar4 = uVar10 == 7;
  lVar1 = 6;
  if (!bVar4) {
    lVar1 = uVar10 - (uVar10 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  func_0x00010b994a64(uStack_58);
  if (bVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5[1] = plVar5[1] + 0x20;
  *plVar5 = *plVar5 + 1;
  FUN_10b994938();
  return plVar5;
}



/* Entry: 10b9948cc; end: 10b9948ff;  */

long * FUN_10b9948cc(long *param_1)

{
  param_1[1] = param_1[1] + 0x20;
  *param_1 = *param_1 + 1;
  FUN_10b994938();
  return param_1;
}



/* Entry: 10b994900; end: 10b994937;  */

void FUN_10b994900(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long *unaff_x21;
  
  func_0x00010b994a9c();
  func_0x000107c27900(param_3 + 8);
  uVar2 = 0;
  unaff_x21[2] = unaff_x21[2] + -1;
  puVar3 = (undefined1 *)((long)unaff_x20 + (-8 - *unaff_x21));
  uVar5 = *(ulong *)(*unaff_x21 + ((ulong)puVar3 & unaff_x21[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *unaff_x20 & ~*unaff_x20 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)unaff_x20 = uVar4;
  *(undefined1 *)(*unaff_x21 + (unaff_x21[3] & 7U) + (unaff_x21[3] & (ulong)puVar3) + 1) = uVar4;
  unaff_x21[5] = unaff_x21[5] + uVar2;
  return;
}



/* Entry: 10b994938; end: 10b99498b;  */

void FUN_10b994938(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x20;
  }
  return;
}



/* Entry: 10b99498c; end: 10b994b17;  */

void FUN_10b99498c(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b994b18; end: 10b994b9b;  */

void FUN_10b994b18(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 9) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEi_110346938)(param_1);
    return;
  }
  func_0x000107c2793c(&UNK_10f7d0872);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10b994b9c; end: 10b994bd7;  */

bool FUN_10b994b9c(long *param_1,long *param_2)

{
  if ((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) {
    return *(char *)((long)param_1 + 9) == *(char *)((long)param_2 + 9);
  }
  return false;
}



/* Entry: 10b994bd8; end: 10b994bef;  */

uint FUN_10b994bd8(uint param_1)

{
  FUN_10b994b9c();
  return param_1 ^ 1;
}



/* Entry: 10b994bf0; end: 10b994bff;  */

void FUN_10b994bf0(undefined8 *param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
                  ulong ****param_5)

{
  ulong ***pppuVar1;
  ulong ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 uVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong ****ppppuVar13;
  ulong ****ppppuVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong *****pppppuVar18;
  undefined8 uVar19;
  ulong *****pppppuVar20;
  long lVar21;
  ulong ****ppppuVar22;
  uint uVar23;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong *****pppppuVar24;
  ulong *****unaff_x25;
  ulong ****ppppuVar25;
  byte bVar26;
  ulong ***pppuStack_660;
  ulong ***pppuStack_658;
  ulong ****ppppuStack_650;
  ulong ***pppuStack_648;
  ulong ***pppuStack_640;
  ulong ***pppuStack_638;
  ulong ****ppppuStack_630;
  ulong ****ppppuStack_628;
  ulong ***pppuStack_620;
  ulong ****ppppuStack_618;
  ulong ****ppppuStack_610;
  ulong ***pppuStack_608;
  code ***pppcStack_600;
  code *pcStack_5f8;
  ulong ***pppuStack_5f0;
  ulong ***pppuStack_5e8;
  ulong ***apppuStack_5e0 [2];
  ulong ***apppuStack_5d0 [3];
  ulong ***apppuStack_5b8 [3];
  ulong ***pppuStack_5a0;
  ulong ***pppuStack_598;
  ulong ***pppuStack_590;
  ulong ***apppuStack_588 [3];
  ulong ***pppuStack_570;
  undefined8 uStack_568;
  ulong ***pppuStack_560;
  ulong ****ppppuStack_558;
  undefined8 uStack_548;
  ulong ****ppppuStack_540;
  ulong ****ppppuStack_538;
  ulong ****ppppuStack_530;
  ulong ****ppppuStack_528;
  ulong ****ppppuStack_520;
  ulong ****ppppuStack_518;
  ulong ****ppppuStack_510;
  ulong ****ppppuStack_508;
  ulong ***pppuStack_500;
  code *pcStack_4f8;
  ulong ****ppppuStack_4f0;
  ulong ****ppppuStack_4e8;
  ulong ****ppppuStack_4e0;
  ulong ****ppppuStack_4d8;
  ulong ***pppuStack_4d0;
  ulong ***pppuStack_4c8;
  undefined1 uStack_4c0;
  ulong ***apppuStack_4b8 [2];
  ulong ***pppuStack_4a8;
  undefined1 auStack_4a0 [8];
  ulong ****ppppuStack_498;
  ulong ***apppuStack_490 [2];
  ulong ****ppppuStack_480;
  ulong ***pppuStack_478;
  byte bStack_470;
  ulong ****ppppuStack_468;
  ulong ****ppppuStack_460;
  ulong ****ppppuStack_458;
  ulong ****ppppuStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  ulong ****ppppuStack_130;
  ulong ****ppppuStack_128;
  ulong ****ppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  ulong ***pppuStack_b0;
  code *pcStack_a8;
  ulong ***apppuStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  ulong ***pppuStack_68;
  ulong ***apppuStack_60 [2];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uVar19 = 0;
  lVar21 = 0;
  ppppuVar22 = param_5;
  func_0x00010b996500();
  uStack_48 = extraout_x8;
  if (lVar21 == 0) {
    func_0x000107c30f84(&pppuStack_68);
    func_0x00010b9964bc();
    func_0x00010b9964b4();
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xff00;
    FUN_10b990ebc(&pppuStack_68,&uStack_78,uVar19,lVar21);
    func_0x00010b9964bc();
    func_0x00010b9964b4();
    func_0x000107c278f4(&uStack_78);
    func_0x000107c278f4(&uStack_80);
  }
  pppppuVar8 = (ulong *****)apppuStack_98;
  pppppuVar17 = (ulong *****)apppuStack_98;
  FUN_10b994d50(&pppuStack_68);
  uVar6 = (ulong ****)pppuStack_68 == (ulong ****)0x1;
  if ((bool)uVar6) {
    if (param_5 != (ulong ****)0x0) {
      *(undefined1 *)param_5 = uStack_50;
    }
    param_2 = (ulong *****)apppuStack_60;
    func_0x000107c2a65c(param_1);
  }
  else {
    *param_1 = 2;
    param_1[1] = apppuStack_60[0];
    apppuStack_60[0] = (ulong ***)0x0;
  }
  pppppuVar24 = (ulong *****)&pppuStack_68;
  FUN_10b9961d4();
  func_0x00010b9963c0(apppuStack_98);
  func_0x00010b996468(uStack_48);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  pppppuVar7 = pppppuVar24;
  func_0x00010b9964b4();
  func_0x00010b99647c();
  pcStack_a8 = FUN_10b994d50;
  pppppuVar12 = param_2;
  pppppuVar18 = pppppuVar17;
  pppppuVar20 = param_4;
  pppuStack_b0 = (ulong ***)&stack0xfffffffffffffff0;
  func_0x00010b996500();
  bVar26 = *(byte *)param_3;
  ppppuStack_4d8 = (ulong ****)param_3;
  uStack_110 = extraout_x8_00;
  if ((bVar26 & 0xfe) == 8) {
    func_0x000107c30f48(&ppppuStack_468,param_3);
    ppppuVar22 = (ulong ****)(ulong)(*(byte *)((long)param_3 + 1) >> 1 & 1);
    pppppuVar11 = &ppppuStack_468;
    pppppuVar12 = param_2;
    pppppuVar18 = pppppuVar17;
    pppppuVar20 = param_4;
    FUN_10b995b64(pppppuVar7);
    pppppuVar9 = &ppppuStack_468;
    func_0x000107c278f4();
    pppppuVar24 = param_3;
    goto LAB_10b99584c;
  }
  iVar5 = bVar26 - 10;
  uVar6 = iVar5 == 10;
  pppppuVar11 = param_3;
  ppppuStack_4e0 = (ulong ****)pppppuVar7;
  switch(iVar5) {
  case 0:
    pppppuVar8 = param_3;
    FUN_10b9905a4();
    bVar26 = *(byte *)((long)param_3 + 1);
    pppppuVar24 = pppppuVar8;
    func_0x00010b9964f0();
    ppppuStack_458 = (ulong ****)0x8;
    ppppuStack_460 = (ulong ****)0x0;
    FUN_10b995fc0(&ppppuStack_468,pppppuVar24[4]);
    pppppuVar24 = (ulong *****)0x0;
    unaff_x25 = pppppuVar8 + 5;
    do {
      uVar6 = pppppuVar24 == (ulong *****)pppppuVar8[4];
      if (pppppuVar8[4] <= pppppuVar24) {
        pppppuVar18 = (ulong *****)ppppuStack_460;
        FUN_10b990ebc(&pppuStack_4d0,pppppuVar8 + 2,ppppuStack_468);
        pppppuVar17 = (ulong *****)ppppuStack_4e0;
        if ((bVar26 >> 1 & 1) != 0) {
          pppppuVar24 = &ppppuStack_130;
          FUN_10b99081c(&ppppuStack_130,&pppuStack_4d0);
          func_0x000107c30f90(&pppuStack_4d0,&ppppuStack_130);
          func_0x00010b996428();
        }
        if ((int)param_4 == 0) {
          pppppuVar24 = &ppppuStack_130;
          func_0x000107c30f3c(&ppppuStack_130,&pppuStack_4d0);
          ppppuStack_120 = (ulong ****)CONCAT71(ppppuStack_120._1_7_,1);
          pppppuVar12 = &ppppuStack_130;
          FUN_10b9961fc(pppppuVar17);
          pppppuVar9 = &ppppuStack_128;
        }
        else {
          func_0x000107c31030(&ppppuStack_480,&pppuStack_4d0);
          ppppuVar22 = (ulong ****)(ulong)(bVar26 >> 1 & 1);
          pppppuVar18 = &ppppuStack_480;
          pppppuVar11 = pppppuVar8 + 2;
          pppppuVar20 = (ulong *****)0x1;
          pppppuVar12 = param_2;
          FUN_10b995b64(&ppppuStack_130);
          func_0x00010b996510();
          if ((bool)uVar6) {
            pppppuVar24 = &ppppuStack_130;
            func_0x000107c30f40(apppuStack_490,&ppppuStack_128);
            if ((char)apppuStack_490[0] == '\x11') {
              if (*param_2 == (ulong ****)0x0) {
                pppppuVar12 = (ulong *****)&UNK_10f7d0905;
                FUN_10b99f5f8(&ppppuStack_150);
                *pppppuVar17 = (ulong ****)0x2;
                pppppuVar17[1] = ppppuStack_150;
                ppppuStack_150 = (ulong ****)0x0;
                func_0x000104bda93c();
              }
              else {
                FUN_10b9939f0(&ppppuStack_498,*param_2,&ppppuStack_480);
                if ((ulong *****)ppppuStack_498 == (ulong *****)0x0) {
                  ppppuVar25 = apppuStack_490;
                  func_0x00010b990764();
                  (*(code *)(*ppppuVar25)[5])(&pppuStack_4a8);
                  param_4 = (ulong *****)*param_2;
                  func_0x000107c30ffc(param_4,&ppppuStack_480,&pppuStack_4a8);
                  FUN_10b993a84(&ppppuStack_150,*param_2,param_4);
                  ppppuVar13 = ppppuStack_150;
                  ppppuVar25 = ppppuStack_498;
                  ppppuStack_150 = (ulong ****)0x0;
                  ppppuStack_498 = ppppuVar13;
                  func_0x00010b994588(ppppuVar25);
                  FUN_10b994560(&ppppuStack_150);
                  pppppuVar18 = &ppppuStack_480;
                  pppppuVar11 = (ulong *****)&pppuStack_4a8;
                  pppppuVar20 = (ulong *****)0x1;
                  FUN_10b994d50();
                  func_0x00010b99644c();
                  ppppuStack_130 = ppppuStack_150;
                  ppppuStack_120 = ppppuStack_140;
                  ppppuStack_128 = ppppuStack_148;
                  puStack_118 = (undefined *)CONCAT71(uStack_137,bStack_138);
                  ppppuStack_150 = (ulong ****)0x0;
                  func_0x00010b996484();
                  if ((ulong *****)ppppuStack_130 == (ulong *****)0x1) {
                    pppppuVar18 = &ppppuStack_128;
                    FUN_10b994104(*param_2,param_4);
                    pppppuVar24 = (ulong *****)apppuStack_4b8;
                    FUN_10b9960b0(apppuStack_4b8,&ppppuStack_498);
                    pppppuVar12 = (ulong *****)apppuStack_4b8;
                    func_0x000107c30f40(&ppppuStack_150);
                    func_0x00010b9963ac();
                    func_0x00010b9963e8();
                    func_0x00010b996428();
                  }
                  else {
                    pppppuVar12 = param_4;
                    FUN_10b993eb0(*param_2);
                    func_0x00010b996550();
                  }
                }
                else {
                  pppppuVar24 = (ulong *****)&pppuStack_4a8;
                  FUN_10b9960b0(&pppuStack_4a8,&ppppuStack_498);
                  pppppuVar12 = (ulong *****)&pppuStack_4a8;
                  func_0x000107c30f40(&ppppuStack_150);
                  func_0x00010b9963ac();
                  func_0x00010b9963e8();
                }
                func_0x000107c27900(auStack_4a0);
                FUN_10b994560(&ppppuStack_498);
              }
            }
            else {
              pppppuVar24 = &ppppuStack_150;
              pppppuVar12 = (ulong *****)apppuStack_490;
              func_0x000107c30f40(&ppppuStack_150);
              func_0x00010b9963ac();
              func_0x00010b996428();
            }
            func_0x00010b9963c0(apppuStack_490);
          }
          else {
            func_0x00010b996550();
          }
          func_0x00010b99644c();
          pppppuVar9 = (ulong *****)&pppuStack_478;
        }
        func_0x000107c27900();
        func_0x00010b9963c0(&pppuStack_4d0);
        break;
      }
      pppppuVar12 = &ppppuStack_130;
      pppppuVar20 = (ulong *****)0x0;
      pppppuVar18 = pppppuVar17;
      pppppuVar11 = unaff_x25;
      FUN_10b994d50(pppppuVar12,param_2);
      ppppuVar25 = ppppuStack_130;
      if ((ulong *****)ppppuStack_130 == (ulong *****)0x1) {
        pppppuVar9 = &ppppuStack_468;
        pppppuVar12 = &ppppuStack_128;
        func_0x000107c30fd4();
      }
      else {
        func_0x000107c31084();
        pppuStack_478 = (ulong ***)0x0;
        ppppuStack_4e8 = (ulong ****)pppppuVar12;
        ppppuStack_480 = (ulong ****)pppppuVar24;
        func_0x000107c2793c(&UNK_10f7d08d6);
        pppppuVar20 = &ppppuStack_480;
        pppppuVar18 = (ulong *****)0x4;
        func_0x000107c3173c(&ppppuStack_150);
        func_0x000107c31080(apppuStack_490,ppppuStack_4e8,&ppppuStack_150);
        pppppuVar12 = (ulong *****)apppuStack_490;
        FUN_10b99fa14(&pppuStack_4d0,&ppppuStack_128);
        func_0x00010b996430();
        func_0x00010b99649c();
        pppppuVar9 = &ppppuStack_150;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00010b99644c();
      pppppuVar24 = (ulong *****)((long)pppppuVar24 + 1);
      unaff_x25 = unaff_x25 + 2;
    } while ((ulong *****)ppppuVar25 == (ulong *****)0x1);
    func_0x00010b99648c();
    pppppuVar7 = (ulong *****)ppppuStack_4e0;
    goto LAB_10b99584c;
  case 1:
    func_0x000107c30f50();
    pppppuVar8 = param_3;
    func_0x00010b9964f0();
    ppppuStack_458 = (ulong ****)0x20;
    ppppuStack_460 = (ulong ****)0x0;
    unaff_x25 = (ulong *****)pppppuVar8[4];
    if ((ulong *****)0x20 < unaff_x25) {
      pppppuVar8 = &ppppuStack_468;
      func_0x000107c2a644(pppppuVar8,unaff_x25);
      pppppuVar18 = (ulong *****)(ppppuStack_468 + (long)ppppuStack_460 * 3);
      pppppuVar20 = &ppppuStack_468;
      ppppuStack_150 = (ulong ****)pppppuVar8;
      ppppuStack_148 = (ulong ****)&ppppuStack_468;
      ppppuStack_140 = (ulong ****)unaff_x25;
      ppppuStack_130 = (ulong ****)pppppuVar8;
      ppppuStack_128 = (ulong ****)pppppuVar8;
      ppppuStack_120 = (ulong ****)&ppppuStack_468;
      func_0x000107c2a650(pppppuVar20,ppppuStack_468,pppppuVar18,pppppuVar8);
      ppppuStack_128 = (ulong ****)pppppuVar20;
      func_0x000107c2a650(&ppppuStack_468,pppppuVar18);
      ppppuStack_130 = (ulong ****)0x0;
      ppppuStack_128 = (ulong ****)0x0;
      func_0x000107c2a654(&ppppuStack_130);
      ppppuStack_150 = (ulong ****)0x0;
      if ((ulong *****)ppppuStack_468 != (ulong *****)0x0) {
        func_0x000107c2a648(&ppppuStack_468,ppppuStack_468,ppppuStack_460);
        func_0x000107c2a64c(&ppppuStack_468,&ppppuStack_468);
        pppppuVar18 = (ulong *****)ppppuStack_458;
      }
      ppppuStack_468 = (ulong ****)pppppuVar8;
      ppppuStack_458 = (ulong ****)unaff_x25;
      func_0x000107c2a658(&ppppuStack_150);
    }
    bVar26 = 0;
    pppppuVar8 = param_3 + 5;
    ppppuStack_4e8 = (ulong ****)(param_3 + 2);
    pppppuVar24 = (ulong *****)0xffffffffffffffff;
    pppppuVar7 = pppppuVar8;
    do {
      pppppuVar24 = (ulong *****)((long)pppppuVar24 + 1);
      if (param_3[4] <= pppppuVar24) {
        if ((bVar26 & 1) == 0) {
          lVar21 = -0x80;
          func_0x000107c30f3c(&ppppuStack_130,ppppuStack_4d8);
          ppppuStack_120 = (ulong ****)((ulong)ppppuStack_120 & 0xffffffffffffff00);
          pppppuVar12 = &ppppuStack_130;
          FUN_10b9961fc(ppppuStack_4e0);
        }
        else {
          lVar21 = -0xa0;
          pppppuVar18 = (ulong *****)ppppuStack_468;
          pppppuVar20 = (ulong *****)ppppuStack_460;
          func_0x000107c30fac(&ppppuStack_150,ppppuStack_4e8,*(byte *)(param_3 + 3));
          param_2 = (ulong *****)ppppuStack_4e0;
          func_0x000107c30f40(&ppppuStack_130,&ppppuStack_150);
          ppppuStack_120 = (ulong ****)CONCAT71(ppppuStack_120._1_7_,1);
          pppppuVar12 = &ppppuStack_130;
          FUN_10b9961fc(param_2);
          func_0x00010b9963e8();
        }
        pppppuVar24 = (ulong *****)((long)&pppuStack_b0 + lVar21);
        func_0x00010b996428();
        break;
      }
      pppppuVar18 = &ppppuStack_150;
      pppppuVar11 = pppppuVar7 + 1;
      func_0x00010b99636c();
      unaff_x25 = (ulong *****)ppppuStack_150;
      if ((ulong *****)ppppuStack_150 == (ulong *****)0x1) {
        bVar26 = bStack_138 | bVar26;
        pppppuVar18 = (ulong *****)(ppppuStack_468 + (long)ppppuStack_460 * 3);
        if (ppppuStack_460 == ppppuStack_458) {
          pppppuVar12 = &ppppuStack_468;
          pppppuVar20 = &ppppuStack_148;
          pppppuVar11 = pppppuVar8;
          FUN_10b996228(&ppppuStack_130);
        }
        else {
          pppppuVar9 = &ppppuStack_148;
          pppppuVar12 = pppppuVar7;
          func_0x000107c27e98(pppppuVar18);
          ppppuStack_460 = (ulong ****)((long)ppppuStack_460 + 1);
          pppppuVar18 = pppppuVar9;
        }
      }
      else {
        func_0x000107c31084();
        ppppuStack_130 = ppppuStack_4e8;
        ppppuStack_128 = (ulong ****)&UNK_1003ab990;
        puStack_118 = &UNK_1003ab990;
        ppppuStack_4f0 = (ulong ****)pppppuVar18;
        ppppuStack_120 = (ulong ****)pppppuVar8;
        func_0x000107c2793c(&UNK_10f7d08be);
        pppppuVar20 = &ppppuStack_130;
        pppppuVar18 = (ulong *****)0xff;
        func_0x000107c3173c(&ppppuStack_480);
        func_0x000107c31080(apppuStack_490,ppppuStack_4f0,&ppppuStack_480);
        pppppuVar12 = (ulong *****)apppuStack_490;
        FUN_10b99fa14(&pppuStack_4d0,&ppppuStack_148);
        func_0x00010b996430();
        func_0x00010b99649c();
        func_0x00010b9964d8();
      }
      pppppuVar7 = pppppuVar7 + 3;
      pppppuVar8 = pppppuVar8 + 3;
      func_0x00010b996484();
    } while (unaff_x25 == (ulong *****)0x1);
    pppppuVar9 = &ppppuStack_468;
    func_0x000107c2a660();
    pppppuVar8 = param_3;
    pppppuVar7 = (ulong *****)ppppuStack_4e0;
    goto LAB_10b99584c;
  default:
    if (((int)param_4 == 0) && (bVar26 == 0x11)) {
      func_0x00010b990764();
      pppppuVar24 = &ppppuStack_130;
      (*(code *)(*param_3)[4])(&ppppuStack_130);
      func_0x000107c30f40(&ppppuStack_468,&ppppuStack_130);
      ppppuStack_458 = (ulong ****)CONCAT71(ppppuStack_458._1_7_,1);
      pppppuVar12 = &ppppuStack_468;
      func_0x00010b996420();
      func_0x00010b9963e8();
      param_3 = pppppuVar11;
    }
    else {
      pppppuVar24 = &ppppuStack_468;
      func_0x000107c30f3c(&ppppuStack_468,param_3);
      ppppuStack_458 = (ulong ****)((ulong)ppppuStack_458 & 0xffffffffffffff00);
      pppppuVar12 = &ppppuStack_468;
      func_0x00010b996420();
    }
    pppppuVar9 = pppppuVar24 + 1;
    goto LAB_10b9955f4;
  case 3:
    func_0x00010b9905e4();
    pppppuVar11 = param_3 + 3;
    func_0x00010b99636c(&ppppuStack_130);
    func_0x00010b996510();
    if ((bool)uVar6) {
      pppppuVar24 = (ulong *****)((ulong)puStack_118 & 0xff);
      func_0x00010b9964f0();
      ppppuStack_458 = (ulong ****)0xa;
      ppppuStack_460 = (ulong ****)0x0;
      pppppuVar12 = (ulong *****)param_3[5];
      FUN_10b995fc0(&ppppuStack_468);
      ppppuVar25 = (ulong ****)0x0;
      unaff_x25 = param_3 + 6;
      do {
        if (param_3[5] <= ppppuVar25) {
          if (((ulong)pppppuVar24 & 1) == 0) {
            func_0x00010b99637c();
            ppppuStack_140 = (ulong ****)((ulong)ppppuStack_140 & 0xffffffffffffff00);
            func_0x00010b99638c();
          }
          else {
            pppppuVar18 = (ulong *****)ppppuStack_468;
            pppppuVar20 = (ulong *****)ppppuStack_460;
            func_0x00010b996530();
            pppppuVar12 = &ppppuStack_128;
            func_0x000107c30fb4(param_3 + 2);
            func_0x00010b9963f0();
            ppppuStack_140 = (ulong ****)CONCAT71(ppppuStack_140._1_7_,1);
            func_0x00010b99638c();
            func_0x00010b9963e8();
          }
          func_0x00010b996428();
          break;
        }
        pppppuVar8 = &ppppuStack_150;
        pppppuVar18 = pppppuVar17;
        pppppuVar20 = param_4;
        pppppuVar11 = unaff_x25;
        FUN_10b994d50(pppppuVar8,param_2);
        bVar26 = bStack_138;
        ppppuVar13 = ppppuStack_150;
        if ((ulong *****)ppppuStack_150 == (ulong *****)0x1) {
          pppppuVar12 = &ppppuStack_148;
          func_0x000107c30fd4(&ppppuStack_468);
          pppppuVar24 = (ulong *****)(ulong)((uint)bVar26 | (uint)pppppuVar24);
        }
        else {
          func_0x000107c31084();
          pppuStack_4c8 = (ulong ***)0x0;
          pppuStack_4d0 = (ulong ***)ppppuVar25;
          func_0x000107c2793c(&UNK_10f7d0896);
          pppppuVar20 = (ulong *****)&pppuStack_4d0;
          pppppuVar18 = (ulong *****)0x4;
          func_0x000107c3173c(&ppppuStack_480);
          func_0x000107c31080(&pppuStack_4a8,pppppuVar8,&ppppuStack_480);
          pppppuVar12 = (ulong *****)&pppuStack_4a8;
          FUN_10b99fa14(apppuStack_490,&ppppuStack_148);
          *ppppuStack_4e0 = (ulong ***)0x2;
          ppppuStack_4e0[1] = apppuStack_490[0];
          apppuStack_490[0] = (ulong ***)0x0;
          func_0x000104bda93c(apppuStack_490);
          func_0x000107c278f4(&pppuStack_4a8);
          func_0x00010b9964d8();
        }
        func_0x00010b996484();
        ppppuVar25 = (ulong ****)((long)ppppuVar25 + 1);
        unaff_x25 = unaff_x25 + 2;
        pppppuVar7 = (ulong *****)ppppuStack_4e0;
      } while ((ulong *****)ppppuVar13 == (ulong *****)0x1);
      func_0x00010b99648c();
    }
    else {
      pppppuVar12 = (ulong *****)&UNK_10f7d0877;
      pppppuVar18 = (ulong *****)0x1e;
      FUN_10b99fa70(&ppppuStack_468,&ppppuStack_128);
      pppppuVar7 = (ulong *****)ppppuStack_4e0;
      *ppppuStack_4e0 = (ulong ***)0x2;
      pppppuVar7[1] = ppppuStack_468;
      ppppuStack_468 = (ulong ****)0x0;
      func_0x000104bda93c(&ppppuStack_468);
    }
    pppppuVar9 = &ppppuStack_130;
    goto code_r0x00010b99565c;
  case 4:
    FUN_10b990668(&pppuStack_4d0,param_3);
    param_3 = (ulong *****)&pppuStack_4d0;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if ((bool)uVar6) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_120 == '\x01') {
        func_0x00010b996530();
        FUN_10b990868();
        func_0x00010b9963f0();
        ppppuStack_140 = (ulong ****)CONCAT71(ppppuStack_140._1_7_,1);
        func_0x00010b99638c();
        func_0x00010b9963e8();
      }
      else {
        func_0x00010b99637c();
        ppppuStack_140 = (ulong ****)((ulong)ppppuStack_140 & 0xffffffffffffff00);
        func_0x00010b99638c();
      }
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_130);
    }
    else {
      func_0x00010b99653c();
    }
    FUN_10b9961d4(&ppppuStack_468);
    pppppuVar9 = (ulong *****)&pppuStack_4c8;
LAB_10b9955f4:
    func_0x000107c27900();
    pppppuVar11 = param_3;
    goto LAB_10b99584c;
  case 5:
    func_0x00010b9906a4();
    pppppuVar11 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if (!(bool)uVar6) break;
    pppppuVar11 = param_3 + 4;
    func_0x00010b99636c(&ppppuStack_130);
    func_0x00010b996510();
    if ((bool)uVar6) {
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_140 & 1) == 0) && ((bStack_470 & 1) == 0)) {
        func_0x00010b996400();
        goto code_r0x00010b9953d0;
      }
      func_0x00010b996454();
      FUN_10b9910ac();
code_r0x00010b99561c:
      func_0x000107c30f40(&pppuStack_4d0,apppuStack_490);
      uStack_4c0 = 1;
      pppppuVar12 = (ulong *****)&pppuStack_4d0;
      func_0x00010b996420();
      func_0x00010b9963e8();
      goto code_r0x00010b995640;
    }
code_r0x00010b9958f4:
    *pppppuVar7 = (ulong ****)0x2;
    pppppuVar7[1] = ppppuStack_128;
    ppppuStack_128 = (ulong ****)0x0;
code_r0x00010b995654:
    func_0x00010b99644c();
    pppppuVar8 = param_3;
    goto code_r0x00010b995658;
  case 6:
    func_0x00010b990744();
    pppppuVar11 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    param_3 = pppppuVar8;
    if ((bool)uVar6) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_120 == '\x01') {
        func_0x00010b996530();
        FUN_10b9911c4();
        goto code_r0x00010b9952c4;
      }
      func_0x00010b99637c();
code_r0x00010b9955b4:
      ppppuStack_140 = (ulong ****)((ulong)ppppuStack_140 & 0xffffffffffffff00);
      func_0x00010b99638c();
code_r0x00010b9955bc:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_130);
      goto code_r0x00010b995658;
    }
    break;
  case 8:
    func_0x00010b9906c4();
    pppppuVar11 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if ((bool)uVar6) {
      pppppuVar11 = param_3 + 4;
      func_0x00010b99636c(&ppppuStack_130);
      func_0x00010b996510();
      if (!(bool)uVar6) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_140 & 1) != 0) || ((bStack_470 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9912a0();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
code_r0x00010b9953d0:
      uStack_4c0 = 0;
      pppppuVar12 = (ulong *****)&pppuStack_4d0;
      func_0x00010b996420();
code_r0x00010b995640:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_480);
      func_0x00010b9963c0(&ppppuStack_150);
      goto code_r0x00010b995654;
    }
    break;
  case 9:
    func_0x00010b9906e4();
    pppppuVar11 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    param_3 = pppppuVar8;
    if ((bool)uVar6) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_120 != '\x01') {
        func_0x00010b99637c();
        goto code_r0x00010b9955b4;
      }
      func_0x00010b996530();
      FUN_10b991338();
code_r0x00010b9952c4:
      func_0x00010b9963f0();
      ppppuStack_140 = (ulong ****)CONCAT71(ppppuStack_140._1_7_,1);
      func_0x00010b99638c();
      func_0x00010b9963e8();
      goto code_r0x00010b9955bc;
    }
    break;
  case 10:
    func_0x00010b990704();
    pppppuVar11 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if ((bool)uVar6) {
      pppppuVar11 = param_3 + 4;
      func_0x00010b99636c(&ppppuStack_130);
      func_0x00010b996510();
      if (!(bool)uVar6) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_140 & 1) != 0) || ((bStack_470 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9913cc();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
      goto code_r0x00010b9953d0;
    }
  }
  func_0x00010b99653c();
  pppppuVar8 = param_3;
code_r0x00010b995658:
  pppppuVar9 = &ppppuStack_468;
  param_3 = pppppuVar8;
code_r0x00010b99565c:
  FUN_10b9961d4();
  pppppuVar8 = param_3;
LAB_10b99584c:
  uVar6 = *pppppuVar7 == (ulong ****)0x1;
  if ((bool)uVar6) {
    uVar23 = (uint)*(byte *)((long)ppppuStack_4d8 + 1);
    if (((*(byte *)((long)ppppuStack_4d8 + 1) & 1) != 0) &&
       ((*(byte *)((long)pppppuVar7 + 9) & 1) == 0)) {
      pppppuVar24 = &ppppuStack_468;
      pppppuVar9 = pppppuVar7 + 1;
      FUN_10b990784(&ppppuStack_468);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(pppppuVar7 + 3) = 1;
      uVar23 = (uint)*(byte *)((long)ppppuStack_4d8 + 1);
    }
    if (((uVar23 >> 1 & 1) != 0) && ((*(byte *)((long)pppppuVar7 + 9) >> 1 & 1) == 0)) {
      pppppuVar24 = &ppppuStack_468;
      pppppuVar9 = pppppuVar7 + 1;
      func_0x000107c30fb8(&ppppuStack_468);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(pppppuVar7 + 3) = 1;
    }
  }
  func_0x00010b996468(uStack_110);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b9961d4(&ppppuStack_130);
  pppppuVar10 = pppppuVar9;
  __Unwind_Resume();
  pppppuVar16 = (ulong *****)&pppuStack_5f0;
  pcStack_4f8 = FUN_10b995b64;
  pppppuVar15 = pppppuVar12;
  ppppuStack_540 = (ulong ****)pppppuVar7;
  ppppuStack_538 = (ulong ****)unaff_x25;
  ppppuStack_530 = (ulong ****)pppppuVar8;
  ppppuStack_528 = (ulong ****)pppppuVar17;
  ppppuStack_520 = (ulong ****)param_4;
  ppppuStack_518 = (ulong ****)param_2;
  ppppuStack_510 = (ulong ****)pppppuVar9;
  ppppuStack_508 = (ulong ****)pppppuVar24;
  pppuStack_500 = (ulong ***)&pppuStack_b0;
  func_0x00010b996500();
  ppppuVar25 = (ulong ****)(ulong)*(byte *)((long)pppppuVar11 + 9);
  uVar6 = ppppuVar25 == (ulong ****)0xff;
  uStack_548 = extraout_x8_01;
  if (!(bool)uVar6) {
    pppppuVar11 = pppppuVar18;
    FUN_10b9905a4();
    if ((pppppuVar11 == (ulong *****)0x0) || (pppppuVar11[4] <= ppppuVar25)) {
      func_0x000107c31084();
      func_0x00010b98fa8c(apppuStack_5d0,pppppuVar18);
      ppppuVar13 = apppuStack_5d0;
      func_0x000107c27e5c();
      uStack_568 = (ulong ****)0x0;
      pppuStack_570 = (ulong ***)ppppuVar25;
      pppuStack_560 = (ulong ***)ppppuVar13;
      ppppuStack_558 = (ulong ****)pppppuVar15;
      func_0x000107c2793c(&UNK_10f7d099d);
      func_0x000107c3173c(apppuStack_5b8);
      func_0x000107c31080(&pppuStack_570,pppppuVar11,apppuStack_5b8);
      pppppuVar16 = (ulong *****)&pppuStack_570;
      FUN_10b99f560(apppuStack_5e0);
      pppuStack_590 = (ulong ***)0x2;
      apppuStack_588[0] = apppuStack_5e0[0];
      apppuStack_5e0[0] = (ulong ***)0x0;
      func_0x000104bda93c(apppuStack_5e0);
      func_0x00010b996494();
      func_0x00010b9964a4();
      func_0x00010b9964ac();
    }
    else {
      pppppuVar16 = pppppuVar11 + (long)ppppuVar25 * 2 + 5;
      func_0x000107c2a66c(&pppuStack_590);
      pppppuVar11 = pppppuVar8;
    }
    uVar6 = (ulong ****)pppuStack_590 == (ulong ****)0x1;
    if ((bool)uVar6) {
      pppppuVar16 = pppppuVar12;
      FUN_10b994d50(&pppuStack_570,pppppuVar12,pppppuVar18,pppppuVar20,apppuStack_588);
      uVar6 = (ulong ****)pppuStack_570 == (ulong ****)0x1;
      if ((bool)uVar6) {
        if ((int)ppppuVar22 == 0) {
          pppppuVar12 = (ulong *****)apppuStack_5b8;
          pppppuVar16 = (ulong *****)&uStack_568;
          func_0x000107c30f40(apppuStack_5b8);
          func_0x00010b996398();
        }
        else {
          pppppuVar12 = (ulong *****)apppuStack_5d0;
          func_0x000107c30fb8(apppuStack_5d0,&uStack_568);
          func_0x00010b9964e0();
          func_0x00010b996398();
          func_0x00010b996528();
        }
        func_0x00010b9963e8();
      }
      else {
        *pppppuVar10 = (ulong ****)0x2;
        pppppuVar10[1] = uStack_568;
        uStack_568 = (ulong ****)0x0;
      }
      FUN_10b9961d4(&pppuStack_570);
    }
    else {
      *pppppuVar10 = (ulong ****)0x2;
      pppppuVar10[1] = (ulong ****)apppuStack_588[0];
      apppuStack_588[0] = (ulong ***)0x0;
    }
    ppppuVar25 = &pppuStack_590;
    func_0x000107c2a668();
    pppppuVar17 = pppppuVar18;
    goto LAB_10b995e38;
  }
  bVar26 = *(byte *)(pppppuVar11 + 1);
  pppuStack_570 = (ulong ***)*pppppuVar11;
  if ((ulong ****)pppuStack_570 == (ulong ****)0x0) {
    apppuStack_5b8[0] = (ulong ***)0x0;
  }
  else {
    ppppuVar25 = (ulong ****)(pppuStack_570 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar25,0x10);
      if (bVar4) {
        *(int *)ppppuVar25 = *(int *)ppppuVar25 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar25,0x10);
      if (bVar4) {
        *(int *)ppppuVar25 = *(int *)ppppuVar25 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      apppuStack_5b8[0] = pppuStack_570;
    } while (cVar3 != '\0');
  }
  uStack_568._0_2_ = CONCAT11(0xff,bVar26);
  func_0x000107c30fa8(apppuStack_5e0,&pppuStack_570);
  func_0x00010b996494();
  func_0x000107c278f4(apppuStack_5b8);
  if ((int)ppppuVar22 != 0) {
    ppppuVar22 = &pppuStack_570;
    FUN_10b99081c(&pppuStack_570,apppuStack_5e0);
    func_0x000107c30f90(apppuStack_5e0,&pppuStack_570);
    func_0x000107c27900(&uStack_568);
  }
  if ((int)pppppuVar20 == 0) {
    pppppuVar12 = (ulong *****)&pppuStack_570;
    func_0x000107c30f3c(&pppuStack_570,apppuStack_5e0);
    pppuStack_560 = (ulong ***)CONCAT71(pppuStack_560._1_7_,1);
    pppppuVar16 = (ulong *****)&pppuStack_570;
    FUN_10b9961fc(pppppuVar10);
LAB_10b995e04:
    ppppuVar25 = (ulong ****)&uStack_568;
    func_0x000107c27900();
  }
  else {
    if (*pppppuVar12 != (ulong ****)0x0) {
      func_0x000107c31030(&pppuStack_570,apppuStack_5e0);
      pppppuVar12 = (ulong *****)*pppppuVar12;
      ppppuVar25 = &pppuStack_570;
      FUN_10b993be8(&pppuStack_5a0);
      uVar6 = (ulong ****)pppuStack_5a0 == (ulong ****)0x1;
      if ((bool)uVar6) {
        pppppuVar12 = (ulong *****)apppuStack_5d0;
        pppppuVar16 = (ulong *****)&pppuStack_598;
        FUN_10b9960b0(apppuStack_5d0);
        func_0x00010b9964e0();
        func_0x00010b996398();
        func_0x00010b996528();
        func_0x00010b9963e8();
      }
      else {
        func_0x000107c31084();
        FUN_10b994b18(apppuStack_5d0,pppppuVar11);
        ppppuVar13 = apppuStack_5d0;
        func_0x000107c27e5c();
        pppuStack_590 = (ulong ***)ppppuVar13;
        apppuStack_588[0] = (ulong ***)ppppuVar25;
        func_0x000107c2793c(&UNK_10f7d0979);
        func_0x000107c3173c(apppuStack_5b8);
        pppppuVar20 = (ulong *****)&pppuStack_5a0;
        func_0x000107c31080(&pppuStack_5f0,pppppuVar12,apppuStack_5b8);
        FUN_10b99fa14(&pppuStack_5e8,&pppuStack_598);
        *pppppuVar10 = (ulong ****)0x2;
        pppppuVar10[1] = (ulong ****)pppuStack_5e8;
        pppuStack_5e8 = (ulong ***)0x0;
        func_0x000104bda93c(&pppuStack_5e8);
        func_0x000107c278f4(&pppuStack_5f0);
        func_0x00010b9964a4();
        func_0x00010b9964ac();
      }
      func_0x00010b9945ac(&pppuStack_5a0);
      goto LAB_10b995e04;
    }
    pppppuVar16 = (ulong *****)&UNK_10f7d0937;
    ppppuVar25 = &pppuStack_570;
    FUN_10b99f5f8();
    *pppppuVar10 = (ulong ****)0x2;
    pppppuVar10[1] = (ulong ****)pppuStack_570;
    pppuStack_570 = (ulong ***)0x0;
    func_0x000104bda93c();
  }
  func_0x00010b9963c0(apppuStack_5e0);
LAB_10b995e38:
  func_0x00010b996468(uStack_548);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&pppuStack_5f0);
  func_0x00010b9964a4();
  func_0x00010b9964ac();
  ppppuVar13 = &pppuStack_5a0;
  func_0x00010b9945ac();
  func_0x00010b9963c0(&pppuStack_570);
  func_0x00010b9963c0(apppuStack_5e0);
  func_0x00010b99647c();
  pcStack_5f8 = FUN_10b995fc0;
  if (ppppuVar13[2] < pppppuVar16) {
    ppppuVar14 = ppppuVar13;
    ppppuStack_630 = (ulong ****)pppppuVar11;
    ppppuStack_628 = (ulong ****)pppppuVar17;
    pppuStack_620 = (ulong ***)ppppuVar22;
    ppppuStack_618 = (ulong ****)pppppuVar20;
    ppppuStack_610 = (ulong ****)pppppuVar12;
    pppuStack_608 = (ulong ***)ppppuVar25;
    pppcStack_600 = (code ***)&pppuStack_500;
    func_0x00010b9933d8();
    pppuVar2 = *ppppuVar13;
    pppuVar1 = pppuVar2 + (long)ppppuVar13[1] * 2;
    ppppuVar22 = ppppuVar13;
    pppuStack_660 = (ulong ***)ppppuVar14;
    pppuStack_658 = (ulong ***)ppppuVar13;
    ppppuStack_650 = (ulong ****)pppppuVar16;
    pppuStack_648 = (ulong ***)ppppuVar14;
    pppuStack_640 = (ulong ***)ppppuVar14;
    pppuStack_638 = (ulong ***)ppppuVar13;
    FUN_10b993538(ppppuVar13,pppuVar2,pppuVar1,ppppuVar14);
    pppuStack_640 = (ulong ***)ppppuVar22;
    FUN_10b993538(ppppuVar13,pppuVar1,pppuVar1,ppppuVar22);
    pppuStack_648 = (ulong ***)0x0;
    pppuStack_640 = (ulong ***)0x0;
    func_0x00010b993574(&pppuStack_648);
    pppuStack_660 = (ulong ***)0x0;
    if (pppuVar2 != (ulong ***)0x0) {
      func_0x000107c30fe0(ppppuVar13,pppuVar2,ppppuVar13[1]);
      func_0x000107c30fe4(ppppuVar13,ppppuVar13,ppppuVar13[2]);
    }
    *ppppuVar13 = (ulong ***)ppppuVar14;
    ppppuVar13[2] = (ulong ***)pppppuVar16;
    func_0x00010b9935b4(&pppuStack_660);
  }
  return;
}



/* Entry: 10b994c00; end: 10b994d4f;  */

void FUN_10b994c00(undefined8 *param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
                  undefined8 param_5,long param_6,ulong ****param_7)

{
  ulong ***pppuVar1;
  ulong ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong *****pppppuVar13;
  ulong ****ppppuVar14;
  ulong ****ppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong *****pppppuVar18;
  ulong *****pppppuVar19;
  ulong *****pppppuVar20;
  ulong ****ppppuVar21;
  uint uVar22;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong *****pppppuVar23;
  ulong *****unaff_x25;
  ulong ****ppppuVar24;
  byte bVar25;
  ulong ***pppuStack_660;
  ulong ***pppuStack_658;
  ulong ****ppppuStack_650;
  ulong ***pppuStack_648;
  ulong ***pppuStack_640;
  ulong ***pppuStack_638;
  ulong ****ppppuStack_630;
  ulong ****ppppuStack_628;
  ulong ***pppuStack_620;
  ulong ****ppppuStack_618;
  ulong ****ppppuStack_610;
  ulong ***pppuStack_608;
  code ***pppcStack_600;
  code *pcStack_5f8;
  ulong ***pppuStack_5f0;
  ulong ***pppuStack_5e8;
  ulong ***apppuStack_5e0 [2];
  ulong ***apppuStack_5d0 [3];
  ulong ***apppuStack_5b8 [3];
  ulong ***pppuStack_5a0;
  ulong ***pppuStack_598;
  ulong ***pppuStack_590;
  ulong ***apppuStack_588 [3];
  ulong ***pppuStack_570;
  undefined8 uStack_568;
  ulong ***pppuStack_560;
  ulong ****ppppuStack_558;
  undefined8 uStack_548;
  ulong ****ppppuStack_540;
  ulong ****ppppuStack_538;
  ulong ****ppppuStack_530;
  ulong ****ppppuStack_528;
  ulong ****ppppuStack_520;
  ulong ****ppppuStack_518;
  ulong ****ppppuStack_510;
  ulong ****ppppuStack_508;
  ulong ***pppuStack_500;
  code *pcStack_4f8;
  ulong ****ppppuStack_4f0;
  ulong ****ppppuStack_4e8;
  ulong ****ppppuStack_4e0;
  ulong ****ppppuStack_4d8;
  ulong ***pppuStack_4d0;
  ulong ***pppuStack_4c8;
  undefined1 uStack_4c0;
  ulong ***apppuStack_4b8 [2];
  ulong ***pppuStack_4a8;
  undefined1 auStack_4a0 [8];
  ulong ****ppppuStack_498;
  ulong ***apppuStack_490 [2];
  ulong ****ppppuStack_480;
  ulong ***pppuStack_478;
  byte bStack_470;
  ulong ****ppppuStack_468;
  ulong ****ppppuStack_460;
  ulong ****ppppuStack_458;
  ulong ****ppppuStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  ulong ****ppppuStack_130;
  ulong ****ppppuStack_128;
  ulong ****ppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  ulong ***pppuStack_b0;
  code *pcStack_a8;
  ulong ***apppuStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  ulong ***pppuStack_68;
  ulong ***apppuStack_60 [2];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  ppppuVar21 = param_7;
  func_0x00010b996500();
  uStack_48 = extraout_x8;
  if (param_6 == 0) {
    func_0x000107c30f84(&pppuStack_68);
    func_0x00010b9964bc();
    func_0x00010b9964b4();
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xff00;
    FUN_10b990ebc(&pppuStack_68,&uStack_78,param_5,param_6);
    func_0x00010b9964bc();
    func_0x00010b9964b4();
    func_0x000107c278f4(&uStack_78);
    func_0x000107c278f4(&uStack_80);
  }
  pppppuVar9 = (ulong *****)apppuStack_98;
  pppppuVar18 = (ulong *****)apppuStack_98;
  FUN_10b994d50(&pppuStack_68);
  uVar7 = (ulong ****)pppuStack_68 == (ulong ****)0x1;
  if ((bool)uVar7) {
    if (param_7 != (ulong ****)0x0) {
      *(undefined1 *)param_7 = uStack_50;
    }
    param_2 = (ulong *****)apppuStack_60;
    func_0x000107c2a65c(param_1);
  }
  else {
    *param_1 = 2;
    param_1[1] = apppuStack_60[0];
    apppuStack_60[0] = (ulong ***)0x0;
  }
  pppppuVar23 = (ulong *****)&pppuStack_68;
  FUN_10b9961d4();
  func_0x00010b9963c0(apppuStack_98);
  func_0x00010b996468(uStack_48);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  pppppuVar8 = pppppuVar23;
  func_0x00010b9964b4();
  func_0x00010b99647c();
  pcStack_a8 = FUN_10b994d50;
  pppppuVar13 = param_2;
  pppppuVar19 = pppppuVar18;
  pppppuVar20 = param_4;
  pppuStack_b0 = (ulong ***)&stack0xfffffffffffffff0;
  func_0x00010b996500();
  bVar25 = *(byte *)param_3;
  ppppuStack_4d8 = (ulong ****)param_3;
  uStack_110 = extraout_x8_00;
  if ((bVar25 & 0xfe) == 8) {
    func_0x000107c30f48(&ppppuStack_468,param_3);
    ppppuVar21 = (ulong ****)(ulong)(*(byte *)((long)param_3 + 1) >> 1 & 1);
    pppppuVar12 = &ppppuStack_468;
    pppppuVar13 = param_2;
    pppppuVar19 = pppppuVar18;
    pppppuVar20 = param_4;
    FUN_10b995b64(pppppuVar8);
    pppppuVar10 = &ppppuStack_468;
    func_0x000107c278f4();
    pppppuVar23 = param_3;
    goto LAB_10b99584c;
  }
  iVar5 = bVar25 - 10;
  uVar7 = iVar5 == 10;
  pppppuVar12 = param_3;
  ppppuStack_4e0 = (ulong ****)pppppuVar8;
  switch(iVar5) {
  case 0:
    pppppuVar9 = param_3;
    FUN_10b9905a4();
    bVar25 = *(byte *)((long)param_3 + 1);
    pppppuVar23 = pppppuVar9;
    func_0x00010b9964f0();
    ppppuStack_458 = (ulong ****)0x8;
    ppppuStack_460 = (ulong ****)0x0;
    FUN_10b995fc0(&ppppuStack_468,pppppuVar23[4]);
    pppppuVar23 = (ulong *****)0x0;
    unaff_x25 = pppppuVar9 + 5;
    do {
      uVar7 = pppppuVar23 == (ulong *****)pppppuVar9[4];
      if (pppppuVar9[4] <= pppppuVar23) {
        pppppuVar19 = (ulong *****)ppppuStack_460;
        FUN_10b990ebc(&pppuStack_4d0,pppppuVar9 + 2,ppppuStack_468);
        pppppuVar18 = (ulong *****)ppppuStack_4e0;
        if ((bVar25 >> 1 & 1) != 0) {
          pppppuVar23 = &ppppuStack_130;
          FUN_10b99081c(&ppppuStack_130,&pppuStack_4d0);
          func_0x000107c30f90(&pppuStack_4d0,&ppppuStack_130);
          func_0x00010b996428();
        }
        if ((int)param_4 == 0) {
          pppppuVar23 = &ppppuStack_130;
          func_0x000107c30f3c(&ppppuStack_130,&pppuStack_4d0);
          ppppuStack_120 = (ulong ****)CONCAT71(ppppuStack_120._1_7_,1);
          pppppuVar13 = &ppppuStack_130;
          FUN_10b9961fc(pppppuVar18);
          pppppuVar10 = &ppppuStack_128;
        }
        else {
          func_0x000107c31030(&ppppuStack_480,&pppuStack_4d0);
          ppppuVar21 = (ulong ****)(ulong)(bVar25 >> 1 & 1);
          pppppuVar19 = &ppppuStack_480;
          pppppuVar12 = pppppuVar9 + 2;
          pppppuVar20 = (ulong *****)0x1;
          pppppuVar13 = param_2;
          FUN_10b995b64(&ppppuStack_130);
          func_0x00010b996510();
          if ((bool)uVar7) {
            pppppuVar23 = &ppppuStack_130;
            func_0x000107c30f40(apppuStack_490,&ppppuStack_128);
            if ((char)apppuStack_490[0] == '\x11') {
              if (*param_2 == (ulong ****)0x0) {
                pppppuVar13 = (ulong *****)&UNK_10f7d0905;
                FUN_10b99f5f8(&ppppuStack_150);
                *pppppuVar18 = (ulong ****)0x2;
                pppppuVar18[1] = ppppuStack_150;
                ppppuStack_150 = (ulong ****)0x0;
                func_0x000104bda93c();
              }
              else {
                FUN_10b9939f0(&ppppuStack_498,*param_2,&ppppuStack_480);
                if ((ulong *****)ppppuStack_498 == (ulong *****)0x0) {
                  ppppuVar24 = apppuStack_490;
                  func_0x00010b990764();
                  (*(code *)(*ppppuVar24)[5])(&pppuStack_4a8);
                  param_4 = (ulong *****)*param_2;
                  func_0x000107c30ffc(param_4,&ppppuStack_480,&pppuStack_4a8);
                  FUN_10b993a84(&ppppuStack_150,*param_2,param_4);
                  ppppuVar14 = ppppuStack_150;
                  ppppuVar24 = ppppuStack_498;
                  ppppuStack_150 = (ulong ****)0x0;
                  ppppuStack_498 = ppppuVar14;
                  func_0x00010b994588(ppppuVar24);
                  FUN_10b994560(&ppppuStack_150);
                  pppppuVar19 = &ppppuStack_480;
                  pppppuVar12 = (ulong *****)&pppuStack_4a8;
                  pppppuVar20 = (ulong *****)0x1;
                  FUN_10b994d50();
                  func_0x00010b99644c();
                  ppppuStack_130 = ppppuStack_150;
                  ppppuStack_120 = ppppuStack_140;
                  ppppuStack_128 = ppppuStack_148;
                  puStack_118 = (undefined *)CONCAT71(uStack_137,bStack_138);
                  ppppuStack_150 = (ulong ****)0x0;
                  func_0x00010b996484();
                  if ((ulong *****)ppppuStack_130 == (ulong *****)0x1) {
                    pppppuVar19 = &ppppuStack_128;
                    FUN_10b994104(*param_2,param_4);
                    pppppuVar23 = (ulong *****)apppuStack_4b8;
                    FUN_10b9960b0(apppuStack_4b8,&ppppuStack_498);
                    pppppuVar13 = (ulong *****)apppuStack_4b8;
                    func_0x000107c30f40(&ppppuStack_150);
                    func_0x00010b9963ac();
                    func_0x00010b9963e8();
                    func_0x00010b996428();
                  }
                  else {
                    pppppuVar13 = param_4;
                    FUN_10b993eb0(*param_2);
                    func_0x00010b996550();
                  }
                }
                else {
                  pppppuVar23 = (ulong *****)&pppuStack_4a8;
                  FUN_10b9960b0(&pppuStack_4a8,&ppppuStack_498);
                  pppppuVar13 = (ulong *****)&pppuStack_4a8;
                  func_0x000107c30f40(&ppppuStack_150);
                  func_0x00010b9963ac();
                  func_0x00010b9963e8();
                }
                func_0x000107c27900(auStack_4a0);
                FUN_10b994560(&ppppuStack_498);
              }
            }
            else {
              pppppuVar23 = &ppppuStack_150;
              pppppuVar13 = (ulong *****)apppuStack_490;
              func_0x000107c30f40(&ppppuStack_150);
              func_0x00010b9963ac();
              func_0x00010b996428();
            }
            func_0x00010b9963c0(apppuStack_490);
          }
          else {
            func_0x00010b996550();
          }
          func_0x00010b99644c();
          pppppuVar10 = (ulong *****)&pppuStack_478;
        }
        func_0x000107c27900();
        func_0x00010b9963c0(&pppuStack_4d0);
        break;
      }
      pppppuVar13 = &ppppuStack_130;
      pppppuVar20 = (ulong *****)0x0;
      pppppuVar19 = pppppuVar18;
      pppppuVar12 = unaff_x25;
      FUN_10b994d50(pppppuVar13,param_2);
      ppppuVar24 = ppppuStack_130;
      if ((ulong *****)ppppuStack_130 == (ulong *****)0x1) {
        pppppuVar10 = &ppppuStack_468;
        pppppuVar13 = &ppppuStack_128;
        func_0x000107c30fd4();
      }
      else {
        func_0x000107c31084();
        pppuStack_478 = (ulong ***)0x0;
        ppppuStack_4e8 = (ulong ****)pppppuVar13;
        ppppuStack_480 = (ulong ****)pppppuVar23;
        func_0x000107c2793c(&UNK_10f7d08d6);
        pppppuVar20 = &ppppuStack_480;
        pppppuVar19 = (ulong *****)0x4;
        func_0x000107c3173c(&ppppuStack_150);
        func_0x000107c31080(apppuStack_490,ppppuStack_4e8,&ppppuStack_150);
        pppppuVar13 = (ulong *****)apppuStack_490;
        FUN_10b99fa14(&pppuStack_4d0,&ppppuStack_128);
        func_0x00010b996430();
        func_0x00010b99649c();
        pppppuVar10 = &ppppuStack_150;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00010b99644c();
      pppppuVar23 = (ulong *****)((long)pppppuVar23 + 1);
      unaff_x25 = unaff_x25 + 2;
    } while ((ulong *****)ppppuVar24 == (ulong *****)0x1);
    func_0x00010b99648c();
    pppppuVar8 = (ulong *****)ppppuStack_4e0;
    goto LAB_10b99584c;
  case 1:
    func_0x000107c30f50();
    pppppuVar9 = param_3;
    func_0x00010b9964f0();
    ppppuStack_458 = (ulong ****)0x20;
    ppppuStack_460 = (ulong ****)0x0;
    unaff_x25 = (ulong *****)pppppuVar9[4];
    if ((ulong *****)0x20 < unaff_x25) {
      pppppuVar9 = &ppppuStack_468;
      func_0x000107c2a644(pppppuVar9,unaff_x25);
      pppppuVar19 = (ulong *****)(ppppuStack_468 + (long)ppppuStack_460 * 3);
      pppppuVar20 = &ppppuStack_468;
      ppppuStack_150 = (ulong ****)pppppuVar9;
      ppppuStack_148 = (ulong ****)&ppppuStack_468;
      ppppuStack_140 = (ulong ****)unaff_x25;
      ppppuStack_130 = (ulong ****)pppppuVar9;
      ppppuStack_128 = (ulong ****)pppppuVar9;
      ppppuStack_120 = (ulong ****)&ppppuStack_468;
      func_0x000107c2a650(pppppuVar20,ppppuStack_468,pppppuVar19,pppppuVar9);
      ppppuStack_128 = (ulong ****)pppppuVar20;
      func_0x000107c2a650(&ppppuStack_468,pppppuVar19);
      ppppuStack_130 = (ulong ****)0x0;
      ppppuStack_128 = (ulong ****)0x0;
      func_0x000107c2a654(&ppppuStack_130);
      ppppuStack_150 = (ulong ****)0x0;
      if ((ulong *****)ppppuStack_468 != (ulong *****)0x0) {
        func_0x000107c2a648(&ppppuStack_468,ppppuStack_468,ppppuStack_460);
        func_0x000107c2a64c(&ppppuStack_468,&ppppuStack_468);
        pppppuVar19 = (ulong *****)ppppuStack_458;
      }
      ppppuStack_468 = (ulong ****)pppppuVar9;
      ppppuStack_458 = (ulong ****)unaff_x25;
      func_0x000107c2a658(&ppppuStack_150);
    }
    bVar25 = 0;
    pppppuVar9 = param_3 + 5;
    ppppuStack_4e8 = (ulong ****)(param_3 + 2);
    pppppuVar23 = (ulong *****)0xffffffffffffffff;
    pppppuVar8 = pppppuVar9;
    do {
      pppppuVar23 = (ulong *****)((long)pppppuVar23 + 1);
      if (param_3[4] <= pppppuVar23) {
        if ((bVar25 & 1) == 0) {
          lVar6 = -0x80;
          func_0x000107c30f3c(&ppppuStack_130,ppppuStack_4d8);
          ppppuStack_120 = (ulong ****)((ulong)ppppuStack_120 & 0xffffffffffffff00);
          pppppuVar13 = &ppppuStack_130;
          FUN_10b9961fc(ppppuStack_4e0);
        }
        else {
          lVar6 = -0xa0;
          pppppuVar19 = (ulong *****)ppppuStack_468;
          pppppuVar20 = (ulong *****)ppppuStack_460;
          func_0x000107c30fac(&ppppuStack_150,ppppuStack_4e8,*(byte *)(param_3 + 3));
          param_2 = (ulong *****)ppppuStack_4e0;
          func_0x000107c30f40(&ppppuStack_130,&ppppuStack_150);
          ppppuStack_120 = (ulong ****)CONCAT71(ppppuStack_120._1_7_,1);
          pppppuVar13 = &ppppuStack_130;
          FUN_10b9961fc(param_2);
          func_0x00010b9963e8();
        }
        pppppuVar23 = (ulong *****)((long)&pppuStack_b0 + lVar6);
        func_0x00010b996428();
        break;
      }
      pppppuVar19 = &ppppuStack_150;
      pppppuVar12 = pppppuVar8 + 1;
      func_0x00010b99636c();
      unaff_x25 = (ulong *****)ppppuStack_150;
      if ((ulong *****)ppppuStack_150 == (ulong *****)0x1) {
        bVar25 = bStack_138 | bVar25;
        pppppuVar19 = (ulong *****)(ppppuStack_468 + (long)ppppuStack_460 * 3);
        if (ppppuStack_460 == ppppuStack_458) {
          pppppuVar13 = &ppppuStack_468;
          pppppuVar20 = &ppppuStack_148;
          pppppuVar12 = pppppuVar9;
          FUN_10b996228(&ppppuStack_130);
        }
        else {
          pppppuVar10 = &ppppuStack_148;
          pppppuVar13 = pppppuVar8;
          func_0x000107c27e98(pppppuVar19);
          ppppuStack_460 = (ulong ****)((long)ppppuStack_460 + 1);
          pppppuVar19 = pppppuVar10;
        }
      }
      else {
        func_0x000107c31084();
        ppppuStack_130 = ppppuStack_4e8;
        ppppuStack_128 = (ulong ****)&UNK_1003ab990;
        puStack_118 = &UNK_1003ab990;
        ppppuStack_4f0 = (ulong ****)pppppuVar19;
        ppppuStack_120 = (ulong ****)pppppuVar9;
        func_0x000107c2793c(&UNK_10f7d08be);
        pppppuVar20 = &ppppuStack_130;
        pppppuVar19 = (ulong *****)0xff;
        func_0x000107c3173c(&ppppuStack_480);
        func_0x000107c31080(apppuStack_490,ppppuStack_4f0,&ppppuStack_480);
        pppppuVar13 = (ulong *****)apppuStack_490;
        FUN_10b99fa14(&pppuStack_4d0,&ppppuStack_148);
        func_0x00010b996430();
        func_0x00010b99649c();
        func_0x00010b9964d8();
      }
      pppppuVar8 = pppppuVar8 + 3;
      pppppuVar9 = pppppuVar9 + 3;
      func_0x00010b996484();
    } while (unaff_x25 == (ulong *****)0x1);
    pppppuVar10 = &ppppuStack_468;
    func_0x000107c2a660();
    pppppuVar9 = param_3;
    pppppuVar8 = (ulong *****)ppppuStack_4e0;
    goto LAB_10b99584c;
  default:
    if (((int)param_4 == 0) && (bVar25 == 0x11)) {
      func_0x00010b990764();
      pppppuVar23 = &ppppuStack_130;
      (*(code *)(*param_3)[4])(&ppppuStack_130);
      func_0x000107c30f40(&ppppuStack_468,&ppppuStack_130);
      ppppuStack_458 = (ulong ****)CONCAT71(ppppuStack_458._1_7_,1);
      pppppuVar13 = &ppppuStack_468;
      func_0x00010b996420();
      func_0x00010b9963e8();
      param_3 = pppppuVar12;
    }
    else {
      pppppuVar23 = &ppppuStack_468;
      func_0x000107c30f3c(&ppppuStack_468,param_3);
      ppppuStack_458 = (ulong ****)((ulong)ppppuStack_458 & 0xffffffffffffff00);
      pppppuVar13 = &ppppuStack_468;
      func_0x00010b996420();
    }
    pppppuVar10 = pppppuVar23 + 1;
    goto LAB_10b9955f4;
  case 3:
    func_0x00010b9905e4();
    pppppuVar12 = param_3 + 3;
    func_0x00010b99636c(&ppppuStack_130);
    func_0x00010b996510();
    if ((bool)uVar7) {
      pppppuVar23 = (ulong *****)((ulong)puStack_118 & 0xff);
      func_0x00010b9964f0();
      ppppuStack_458 = (ulong ****)0xa;
      ppppuStack_460 = (ulong ****)0x0;
      pppppuVar13 = (ulong *****)param_3[5];
      FUN_10b995fc0(&ppppuStack_468);
      ppppuVar24 = (ulong ****)0x0;
      unaff_x25 = param_3 + 6;
      do {
        if (param_3[5] <= ppppuVar24) {
          if (((ulong)pppppuVar23 & 1) == 0) {
            func_0x00010b99637c();
            ppppuStack_140 = (ulong ****)((ulong)ppppuStack_140 & 0xffffffffffffff00);
            func_0x00010b99638c();
          }
          else {
            pppppuVar19 = (ulong *****)ppppuStack_468;
            pppppuVar20 = (ulong *****)ppppuStack_460;
            func_0x00010b996530();
            pppppuVar13 = &ppppuStack_128;
            func_0x000107c30fb4(param_3 + 2);
            func_0x00010b9963f0();
            ppppuStack_140 = (ulong ****)CONCAT71(ppppuStack_140._1_7_,1);
            func_0x00010b99638c();
            func_0x00010b9963e8();
          }
          func_0x00010b996428();
          break;
        }
        pppppuVar9 = &ppppuStack_150;
        pppppuVar19 = pppppuVar18;
        pppppuVar20 = param_4;
        pppppuVar12 = unaff_x25;
        FUN_10b994d50(pppppuVar9,param_2);
        bVar25 = bStack_138;
        ppppuVar14 = ppppuStack_150;
        if ((ulong *****)ppppuStack_150 == (ulong *****)0x1) {
          pppppuVar13 = &ppppuStack_148;
          func_0x000107c30fd4(&ppppuStack_468);
          pppppuVar23 = (ulong *****)(ulong)((uint)bVar25 | (uint)pppppuVar23);
        }
        else {
          func_0x000107c31084();
          pppuStack_4c8 = (ulong ***)0x0;
          pppuStack_4d0 = (ulong ***)ppppuVar24;
          func_0x000107c2793c(&UNK_10f7d0896);
          pppppuVar20 = (ulong *****)&pppuStack_4d0;
          pppppuVar19 = (ulong *****)0x4;
          func_0x000107c3173c(&ppppuStack_480);
          func_0x000107c31080(&pppuStack_4a8,pppppuVar9,&ppppuStack_480);
          pppppuVar13 = (ulong *****)&pppuStack_4a8;
          FUN_10b99fa14(apppuStack_490,&ppppuStack_148);
          *ppppuStack_4e0 = (ulong ***)0x2;
          ppppuStack_4e0[1] = apppuStack_490[0];
          apppuStack_490[0] = (ulong ***)0x0;
          func_0x000104bda93c(apppuStack_490);
          func_0x000107c278f4(&pppuStack_4a8);
          func_0x00010b9964d8();
        }
        func_0x00010b996484();
        ppppuVar24 = (ulong ****)((long)ppppuVar24 + 1);
        unaff_x25 = unaff_x25 + 2;
        pppppuVar8 = (ulong *****)ppppuStack_4e0;
      } while ((ulong *****)ppppuVar14 == (ulong *****)0x1);
      func_0x00010b99648c();
    }
    else {
      pppppuVar13 = (ulong *****)&UNK_10f7d0877;
      pppppuVar19 = (ulong *****)0x1e;
      FUN_10b99fa70(&ppppuStack_468,&ppppuStack_128);
      pppppuVar8 = (ulong *****)ppppuStack_4e0;
      *ppppuStack_4e0 = (ulong ***)0x2;
      pppppuVar8[1] = ppppuStack_468;
      ppppuStack_468 = (ulong ****)0x0;
      func_0x000104bda93c(&ppppuStack_468);
    }
    pppppuVar10 = &ppppuStack_130;
    goto code_r0x00010b99565c;
  case 4:
    FUN_10b990668(&pppuStack_4d0,param_3);
    param_3 = (ulong *****)&pppuStack_4d0;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_120 == '\x01') {
        func_0x00010b996530();
        FUN_10b990868();
        func_0x00010b9963f0();
        ppppuStack_140 = (ulong ****)CONCAT71(ppppuStack_140._1_7_,1);
        func_0x00010b99638c();
        func_0x00010b9963e8();
      }
      else {
        func_0x00010b99637c();
        ppppuStack_140 = (ulong ****)((ulong)ppppuStack_140 & 0xffffffffffffff00);
        func_0x00010b99638c();
      }
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_130);
    }
    else {
      func_0x00010b99653c();
    }
    FUN_10b9961d4(&ppppuStack_468);
    pppppuVar10 = (ulong *****)&pppuStack_4c8;
LAB_10b9955f4:
    func_0x000107c27900();
    pppppuVar12 = param_3;
    goto LAB_10b99584c;
  case 5:
    func_0x00010b9906a4();
    pppppuVar12 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if (!(bool)uVar7) break;
    pppppuVar12 = param_3 + 4;
    func_0x00010b99636c(&ppppuStack_130);
    func_0x00010b996510();
    if ((bool)uVar7) {
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_140 & 1) == 0) && ((bStack_470 & 1) == 0)) {
        func_0x00010b996400();
        goto code_r0x00010b9953d0;
      }
      func_0x00010b996454();
      FUN_10b9910ac();
code_r0x00010b99561c:
      func_0x000107c30f40(&pppuStack_4d0,apppuStack_490);
      uStack_4c0 = 1;
      pppppuVar13 = (ulong *****)&pppuStack_4d0;
      func_0x00010b996420();
      func_0x00010b9963e8();
      goto code_r0x00010b995640;
    }
code_r0x00010b9958f4:
    *pppppuVar8 = (ulong ****)0x2;
    pppppuVar8[1] = ppppuStack_128;
    ppppuStack_128 = (ulong ****)0x0;
code_r0x00010b995654:
    func_0x00010b99644c();
    pppppuVar9 = param_3;
    goto code_r0x00010b995658;
  case 6:
    func_0x00010b990744();
    pppppuVar12 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    param_3 = pppppuVar9;
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_120 == '\x01') {
        func_0x00010b996530();
        FUN_10b9911c4();
        goto code_r0x00010b9952c4;
      }
      func_0x00010b99637c();
code_r0x00010b9955b4:
      ppppuStack_140 = (ulong ****)((ulong)ppppuStack_140 & 0xffffffffffffff00);
      func_0x00010b99638c();
code_r0x00010b9955bc:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_130);
      goto code_r0x00010b995658;
    }
    break;
  case 8:
    func_0x00010b9906c4();
    pppppuVar12 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      pppppuVar12 = param_3 + 4;
      func_0x00010b99636c(&ppppuStack_130);
      func_0x00010b996510();
      if (!(bool)uVar7) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_140 & 1) != 0) || ((bStack_470 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9912a0();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
code_r0x00010b9953d0:
      uStack_4c0 = 0;
      pppppuVar13 = (ulong *****)&pppuStack_4d0;
      func_0x00010b996420();
code_r0x00010b995640:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_480);
      func_0x00010b9963c0(&ppppuStack_150);
      goto code_r0x00010b995654;
    }
    break;
  case 9:
    func_0x00010b9906e4();
    pppppuVar12 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    param_3 = pppppuVar9;
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_120 != '\x01') {
        func_0x00010b99637c();
        goto code_r0x00010b9955b4;
      }
      func_0x00010b996530();
      FUN_10b991338();
code_r0x00010b9952c4:
      func_0x00010b9963f0();
      ppppuStack_140 = (ulong ****)CONCAT71(ppppuStack_140._1_7_,1);
      func_0x00010b99638c();
      func_0x00010b9963e8();
      goto code_r0x00010b9955bc;
    }
    break;
  case 10:
    func_0x00010b990704();
    pppppuVar12 = param_3 + 2;
    func_0x00010b99636c(&ppppuStack_468);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      pppppuVar12 = param_3 + 4;
      func_0x00010b99636c(&ppppuStack_130);
      func_0x00010b996510();
      if (!(bool)uVar7) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_140 & 1) != 0) || ((bStack_470 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9913cc();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
      goto code_r0x00010b9953d0;
    }
  }
  func_0x00010b99653c();
  pppppuVar9 = param_3;
code_r0x00010b995658:
  pppppuVar10 = &ppppuStack_468;
  param_3 = pppppuVar9;
code_r0x00010b99565c:
  FUN_10b9961d4();
  pppppuVar9 = param_3;
LAB_10b99584c:
  uVar7 = *pppppuVar8 == (ulong ****)0x1;
  if ((bool)uVar7) {
    uVar22 = (uint)*(byte *)((long)ppppuStack_4d8 + 1);
    if (((*(byte *)((long)ppppuStack_4d8 + 1) & 1) != 0) &&
       ((*(byte *)((long)pppppuVar8 + 9) & 1) == 0)) {
      pppppuVar23 = &ppppuStack_468;
      pppppuVar10 = pppppuVar8 + 1;
      FUN_10b990784(&ppppuStack_468);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(pppppuVar8 + 3) = 1;
      uVar22 = (uint)*(byte *)((long)ppppuStack_4d8 + 1);
    }
    if (((uVar22 >> 1 & 1) != 0) && ((*(byte *)((long)pppppuVar8 + 9) >> 1 & 1) == 0)) {
      pppppuVar23 = &ppppuStack_468;
      pppppuVar10 = pppppuVar8 + 1;
      func_0x000107c30fb8(&ppppuStack_468);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(pppppuVar8 + 3) = 1;
    }
  }
  func_0x00010b996468(uStack_110);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b9961d4(&ppppuStack_130);
  pppppuVar11 = pppppuVar10;
  __Unwind_Resume();
  pppppuVar17 = (ulong *****)&pppuStack_5f0;
  pcStack_4f8 = FUN_10b995b64;
  pppppuVar16 = pppppuVar13;
  ppppuStack_540 = (ulong ****)pppppuVar8;
  ppppuStack_538 = (ulong ****)unaff_x25;
  ppppuStack_530 = (ulong ****)pppppuVar9;
  ppppuStack_528 = (ulong ****)pppppuVar18;
  ppppuStack_520 = (ulong ****)param_4;
  ppppuStack_518 = (ulong ****)param_2;
  ppppuStack_510 = (ulong ****)pppppuVar10;
  ppppuStack_508 = (ulong ****)pppppuVar23;
  pppuStack_500 = (ulong ***)&pppuStack_b0;
  func_0x00010b996500();
  ppppuVar24 = (ulong ****)(ulong)*(byte *)((long)pppppuVar12 + 9);
  uVar7 = ppppuVar24 == (ulong ****)0xff;
  uStack_548 = extraout_x8_01;
  if (!(bool)uVar7) {
    pppppuVar12 = pppppuVar19;
    FUN_10b9905a4();
    if ((pppppuVar12 == (ulong *****)0x0) || (pppppuVar12[4] <= ppppuVar24)) {
      func_0x000107c31084();
      func_0x00010b98fa8c(apppuStack_5d0,pppppuVar19);
      ppppuVar14 = apppuStack_5d0;
      func_0x000107c27e5c();
      uStack_568 = (ulong ****)0x0;
      pppuStack_570 = (ulong ***)ppppuVar24;
      pppuStack_560 = (ulong ***)ppppuVar14;
      ppppuStack_558 = (ulong ****)pppppuVar16;
      func_0x000107c2793c(&UNK_10f7d099d);
      func_0x000107c3173c(apppuStack_5b8);
      func_0x000107c31080(&pppuStack_570,pppppuVar12,apppuStack_5b8);
      pppppuVar17 = (ulong *****)&pppuStack_570;
      FUN_10b99f560(apppuStack_5e0);
      pppuStack_590 = (ulong ***)0x2;
      apppuStack_588[0] = apppuStack_5e0[0];
      apppuStack_5e0[0] = (ulong ***)0x0;
      func_0x000104bda93c(apppuStack_5e0);
      func_0x00010b996494();
      func_0x00010b9964a4();
      func_0x00010b9964ac();
    }
    else {
      pppppuVar17 = pppppuVar12 + (long)ppppuVar24 * 2 + 5;
      func_0x000107c2a66c(&pppuStack_590);
      pppppuVar12 = pppppuVar9;
    }
    uVar7 = (ulong ****)pppuStack_590 == (ulong ****)0x1;
    if ((bool)uVar7) {
      pppppuVar17 = pppppuVar13;
      FUN_10b994d50(&pppuStack_570,pppppuVar13,pppppuVar19,pppppuVar20,apppuStack_588);
      uVar7 = (ulong ****)pppuStack_570 == (ulong ****)0x1;
      if ((bool)uVar7) {
        if ((int)ppppuVar21 == 0) {
          pppppuVar13 = (ulong *****)apppuStack_5b8;
          pppppuVar17 = (ulong *****)&uStack_568;
          func_0x000107c30f40(apppuStack_5b8);
          func_0x00010b996398();
        }
        else {
          pppppuVar13 = (ulong *****)apppuStack_5d0;
          func_0x000107c30fb8(apppuStack_5d0,&uStack_568);
          func_0x00010b9964e0();
          func_0x00010b996398();
          func_0x00010b996528();
        }
        func_0x00010b9963e8();
      }
      else {
        *pppppuVar11 = (ulong ****)0x2;
        pppppuVar11[1] = uStack_568;
        uStack_568 = (ulong ****)0x0;
      }
      FUN_10b9961d4(&pppuStack_570);
    }
    else {
      *pppppuVar11 = (ulong ****)0x2;
      pppppuVar11[1] = (ulong ****)apppuStack_588[0];
      apppuStack_588[0] = (ulong ***)0x0;
    }
    ppppuVar24 = &pppuStack_590;
    func_0x000107c2a668();
    pppppuVar18 = pppppuVar19;
    goto LAB_10b995e38;
  }
  bVar25 = *(byte *)(pppppuVar12 + 1);
  pppuStack_570 = (ulong ***)*pppppuVar12;
  if ((ulong ****)pppuStack_570 == (ulong ****)0x0) {
    apppuStack_5b8[0] = (ulong ***)0x0;
  }
  else {
    ppppuVar24 = (ulong ****)(pppuStack_570 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar24,0x10);
      if (bVar4) {
        *(int *)ppppuVar24 = *(int *)ppppuVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar24,0x10);
      if (bVar4) {
        *(int *)ppppuVar24 = *(int *)ppppuVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      apppuStack_5b8[0] = pppuStack_570;
    } while (cVar3 != '\0');
  }
  uStack_568._0_2_ = CONCAT11(0xff,bVar25);
  func_0x000107c30fa8(apppuStack_5e0,&pppuStack_570);
  func_0x00010b996494();
  func_0x000107c278f4(apppuStack_5b8);
  if ((int)ppppuVar21 != 0) {
    ppppuVar21 = &pppuStack_570;
    FUN_10b99081c(&pppuStack_570,apppuStack_5e0);
    func_0x000107c30f90(apppuStack_5e0,&pppuStack_570);
    func_0x000107c27900(&uStack_568);
  }
  if ((int)pppppuVar20 == 0) {
    pppppuVar13 = (ulong *****)&pppuStack_570;
    func_0x000107c30f3c(&pppuStack_570,apppuStack_5e0);
    pppuStack_560 = (ulong ***)CONCAT71(pppuStack_560._1_7_,1);
    pppppuVar17 = (ulong *****)&pppuStack_570;
    FUN_10b9961fc(pppppuVar11);
LAB_10b995e04:
    ppppuVar24 = (ulong ****)&uStack_568;
    func_0x000107c27900();
  }
  else {
    if (*pppppuVar13 != (ulong ****)0x0) {
      func_0x000107c31030(&pppuStack_570,apppuStack_5e0);
      pppppuVar13 = (ulong *****)*pppppuVar13;
      ppppuVar24 = &pppuStack_570;
      FUN_10b993be8(&pppuStack_5a0);
      uVar7 = (ulong ****)pppuStack_5a0 == (ulong ****)0x1;
      if ((bool)uVar7) {
        pppppuVar13 = (ulong *****)apppuStack_5d0;
        pppppuVar17 = (ulong *****)&pppuStack_598;
        FUN_10b9960b0(apppuStack_5d0);
        func_0x00010b9964e0();
        func_0x00010b996398();
        func_0x00010b996528();
        func_0x00010b9963e8();
      }
      else {
        func_0x000107c31084();
        FUN_10b994b18(apppuStack_5d0,pppppuVar12);
        ppppuVar14 = apppuStack_5d0;
        func_0x000107c27e5c();
        pppuStack_590 = (ulong ***)ppppuVar14;
        apppuStack_588[0] = (ulong ***)ppppuVar24;
        func_0x000107c2793c(&UNK_10f7d0979);
        func_0x000107c3173c(apppuStack_5b8);
        pppppuVar20 = (ulong *****)&pppuStack_5a0;
        func_0x000107c31080(&pppuStack_5f0,pppppuVar13,apppuStack_5b8);
        FUN_10b99fa14(&pppuStack_5e8,&pppuStack_598);
        *pppppuVar11 = (ulong ****)0x2;
        pppppuVar11[1] = (ulong ****)pppuStack_5e8;
        pppuStack_5e8 = (ulong ***)0x0;
        func_0x000104bda93c(&pppuStack_5e8);
        func_0x000107c278f4(&pppuStack_5f0);
        func_0x00010b9964a4();
        func_0x00010b9964ac();
      }
      func_0x00010b9945ac(&pppuStack_5a0);
      goto LAB_10b995e04;
    }
    pppppuVar17 = (ulong *****)&UNK_10f7d0937;
    ppppuVar24 = &pppuStack_570;
    FUN_10b99f5f8();
    *pppppuVar11 = (ulong ****)0x2;
    pppppuVar11[1] = (ulong ****)pppuStack_570;
    pppuStack_570 = (ulong ***)0x0;
    func_0x000104bda93c();
  }
  func_0x00010b9963c0(apppuStack_5e0);
LAB_10b995e38:
  func_0x00010b996468(uStack_548);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&pppuStack_5f0);
  func_0x00010b9964a4();
  func_0x00010b9964ac();
  ppppuVar14 = &pppuStack_5a0;
  func_0x00010b9945ac();
  func_0x00010b9963c0(&pppuStack_570);
  func_0x00010b9963c0(apppuStack_5e0);
  func_0x00010b99647c();
  pcStack_5f8 = FUN_10b995fc0;
  if (ppppuVar14[2] < pppppuVar17) {
    ppppuVar15 = ppppuVar14;
    ppppuStack_630 = (ulong ****)pppppuVar12;
    ppppuStack_628 = (ulong ****)pppppuVar18;
    pppuStack_620 = (ulong ***)ppppuVar21;
    ppppuStack_618 = (ulong ****)pppppuVar20;
    ppppuStack_610 = (ulong ****)pppppuVar13;
    pppuStack_608 = (ulong ***)ppppuVar24;
    pppcStack_600 = (code ***)&pppuStack_500;
    func_0x00010b9933d8();
    pppuVar2 = *ppppuVar14;
    pppuVar1 = pppuVar2 + (long)ppppuVar14[1] * 2;
    ppppuVar21 = ppppuVar14;
    pppuStack_660 = (ulong ***)ppppuVar15;
    pppuStack_658 = (ulong ***)ppppuVar14;
    ppppuStack_650 = (ulong ****)pppppuVar17;
    pppuStack_648 = (ulong ***)ppppuVar15;
    pppuStack_640 = (ulong ***)ppppuVar15;
    pppuStack_638 = (ulong ***)ppppuVar14;
    FUN_10b993538(ppppuVar14,pppuVar2,pppuVar1,ppppuVar15);
    pppuStack_640 = (ulong ***)ppppuVar21;
    FUN_10b993538(ppppuVar14,pppuVar1,pppuVar1,ppppuVar21);
    pppuStack_648 = (ulong ***)0x0;
    pppuStack_640 = (ulong ***)0x0;
    func_0x00010b993574(&pppuStack_648);
    pppuStack_660 = (ulong ***)0x0;
    if (pppuVar2 != (ulong ***)0x0) {
      func_0x000107c30fe0(ppppuVar14,pppuVar2,ppppuVar14[1]);
      func_0x000107c30fe4(ppppuVar14,ppppuVar14,ppppuVar14[2]);
    }
    *ppppuVar14 = (ulong ***)ppppuVar15;
    ppppuVar14[2] = (ulong ***)pppppuVar17;
    func_0x00010b9935b4(&pppuStack_660);
  }
  return;
}



/* Entry: 10b994d50; end: 10b995b63;  */

void FUN_10b994d50(ulong *****param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
                  ulong *****param_5,ulong ****param_6)

{
  ulong ***pppuVar1;
  ulong ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong ****ppppuVar12;
  ulong ****ppppuVar13;
  ulong *****pppppuVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  uint uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *****unaff_x19;
  ulong *****unaff_x24;
  ulong *****unaff_x25;
  ulong ****ppppuVar19;
  byte bVar20;
  ulong ***pppuStack_5c0;
  ulong ***pppuStack_5b8;
  ulong ****ppppuStack_5b0;
  ulong ***pppuStack_5a8;
  ulong ***pppuStack_5a0;
  ulong ***pppuStack_598;
  ulong ****ppppuStack_590;
  ulong ****ppppuStack_588;
  ulong ***pppuStack_580;
  ulong ****ppppuStack_578;
  ulong ****ppppuStack_570;
  ulong ***pppuStack_568;
  undefined1 **ppuStack_560;
  code *pcStack_558;
  ulong ***pppuStack_550;
  ulong ***pppuStack_548;
  ulong ***apppuStack_540 [2];
  ulong ***apppuStack_530 [3];
  ulong ***apppuStack_518 [3];
  ulong ***pppuStack_500;
  ulong ***pppuStack_4f8;
  ulong ***pppuStack_4f0;
  ulong ***apppuStack_4e8 [3];
  ulong ***pppuStack_4d0;
  undefined8 uStack_4c8;
  ulong ***pppuStack_4c0;
  ulong ****ppppuStack_4b8;
  undefined8 uStack_4a8;
  ulong ****ppppuStack_4a0;
  ulong ****ppppuStack_498;
  ulong ****ppppuStack_490;
  ulong ****ppppuStack_488;
  ulong ****ppppuStack_480;
  ulong ****ppppuStack_478;
  ulong ****ppppuStack_470;
  ulong ****ppppuStack_468;
  undefined1 *puStack_460;
  code *pcStack_458;
  ulong ****ppppuStack_450;
  ulong ****ppppuStack_448;
  ulong ****ppppuStack_440;
  ulong ****ppppuStack_438;
  ulong ***pppuStack_430;
  ulong ***pppuStack_428;
  undefined1 uStack_420;
  ulong ***apppuStack_418 [2];
  ulong ***pppuStack_408;
  undefined1 auStack_400 [8];
  ulong ****ppppuStack_3f8;
  ulong ***apppuStack_3f0 [2];
  ulong ****ppppuStack_3e0;
  ulong ***pppuStack_3d8;
  byte bStack_3d0;
  ulong ****ppppuStack_3c8;
  ulong ****ppppuStack_3c0;
  ulong ****ppppuStack_3b8;
  ulong ****ppppuStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  ulong ****ppppuStack_90;
  ulong ****ppppuStack_88;
  ulong ****ppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  pppppuVar11 = param_2;
  pppppuVar16 = param_3;
  pppppuVar17 = param_4;
  func_0x00010b996500();
  bVar20 = *(byte *)param_5;
  ppppuStack_438 = (ulong ****)param_5;
  uStack_70 = extraout_x8;
  if ((bVar20 & 0xfe) == 8) {
    func_0x000107c30f48(&ppppuStack_3c8,param_5);
    param_6 = (ulong ****)(ulong)(*(byte *)((long)param_5 + 1) >> 1 & 1);
    pppppuVar10 = &ppppuStack_3c8;
    pppppuVar11 = param_2;
    pppppuVar16 = param_3;
    pppppuVar17 = param_4;
    FUN_10b995b64(param_1);
    pppppuVar8 = &ppppuStack_3c8;
    func_0x000107c278f4();
    unaff_x19 = param_5;
    goto LAB_10b99584c;
  }
  iVar5 = bVar20 - 10;
  uVar7 = iVar5 == 10;
  pppppuVar10 = param_5;
  ppppuStack_440 = (ulong ****)param_1;
  switch(iVar5) {
  case 0:
    unaff_x24 = param_5;
    FUN_10b9905a4();
    bVar20 = *(byte *)((long)param_5 + 1);
    pppppuVar16 = unaff_x24;
    func_0x00010b9964f0();
    ppppuStack_3b8 = (ulong ****)0x8;
    ppppuStack_3c0 = (ulong ****)0x0;
    FUN_10b995fc0(&ppppuStack_3c8,pppppuVar16[4]);
    unaff_x19 = (ulong *****)0x0;
    unaff_x25 = unaff_x24 + 5;
    do {
      uVar7 = unaff_x19 == (ulong *****)unaff_x24[4];
      if (unaff_x24[4] <= unaff_x19) {
        pppppuVar16 = (ulong *****)ppppuStack_3c0;
        FUN_10b990ebc(&pppuStack_430,unaff_x24 + 2,ppppuStack_3c8);
        param_3 = (ulong *****)ppppuStack_440;
        if ((bVar20 >> 1 & 1) != 0) {
          unaff_x19 = &ppppuStack_90;
          FUN_10b99081c(&ppppuStack_90,&pppuStack_430);
          func_0x000107c30f90(&pppuStack_430,&ppppuStack_90);
          func_0x00010b996428();
        }
        if ((int)param_4 == 0) {
          unaff_x19 = &ppppuStack_90;
          func_0x000107c30f3c(&ppppuStack_90,&pppuStack_430);
          ppppuStack_80 = (ulong ****)CONCAT71(ppppuStack_80._1_7_,1);
          pppppuVar11 = &ppppuStack_90;
          FUN_10b9961fc(param_3);
          pppppuVar8 = &ppppuStack_88;
        }
        else {
          func_0x000107c31030(&ppppuStack_3e0,&pppuStack_430);
          param_6 = (ulong ****)(ulong)(bVar20 >> 1 & 1);
          pppppuVar16 = &ppppuStack_3e0;
          pppppuVar10 = unaff_x24 + 2;
          pppppuVar17 = (ulong *****)0x1;
          pppppuVar11 = param_2;
          FUN_10b995b64(&ppppuStack_90);
          func_0x00010b996510();
          if ((bool)uVar7) {
            unaff_x19 = &ppppuStack_90;
            func_0x000107c30f40(apppuStack_3f0,&ppppuStack_88);
            if ((char)apppuStack_3f0[0] == '\x11') {
              if (*param_2 == (ulong ****)0x0) {
                pppppuVar11 = (ulong *****)&UNK_10f7d0905;
                FUN_10b99f5f8(&ppppuStack_b0);
                *param_3 = (ulong ****)0x2;
                param_3[1] = ppppuStack_b0;
                ppppuStack_b0 = (ulong ****)0x0;
                func_0x000104bda93c();
              }
              else {
                FUN_10b9939f0(&ppppuStack_3f8,*param_2,&ppppuStack_3e0);
                if ((ulong *****)ppppuStack_3f8 == (ulong *****)0x0) {
                  ppppuVar19 = apppuStack_3f0;
                  func_0x00010b990764();
                  (*(code *)(*ppppuVar19)[5])(&pppuStack_408);
                  param_4 = (ulong *****)*param_2;
                  func_0x000107c30ffc(param_4,&ppppuStack_3e0,&pppuStack_408);
                  FUN_10b993a84(&ppppuStack_b0,*param_2,param_4);
                  ppppuVar12 = ppppuStack_b0;
                  ppppuVar19 = ppppuStack_3f8;
                  ppppuStack_b0 = (ulong ****)0x0;
                  ppppuStack_3f8 = ppppuVar12;
                  func_0x00010b994588(ppppuVar19);
                  FUN_10b994560(&ppppuStack_b0);
                  pppppuVar16 = &ppppuStack_3e0;
                  pppppuVar10 = (ulong *****)&pppuStack_408;
                  pppppuVar17 = (ulong *****)0x1;
                  FUN_10b994d50();
                  func_0x00010b99644c();
                  ppppuStack_90 = ppppuStack_b0;
                  ppppuStack_80 = ppppuStack_a0;
                  ppppuStack_88 = ppppuStack_a8;
                  puStack_78 = (undefined *)CONCAT71(uStack_97,bStack_98);
                  ppppuStack_b0 = (ulong ****)0x0;
                  func_0x00010b996484();
                  if ((ulong *****)ppppuStack_90 == (ulong *****)0x1) {
                    pppppuVar16 = &ppppuStack_88;
                    FUN_10b994104(*param_2,param_4);
                    unaff_x19 = (ulong *****)apppuStack_418;
                    FUN_10b9960b0(apppuStack_418,&ppppuStack_3f8);
                    pppppuVar11 = (ulong *****)apppuStack_418;
                    func_0x000107c30f40(&ppppuStack_b0);
                    func_0x00010b9963ac();
                    func_0x00010b9963e8();
                    func_0x00010b996428();
                  }
                  else {
                    pppppuVar11 = param_4;
                    FUN_10b993eb0(*param_2);
                    func_0x00010b996550();
                  }
                }
                else {
                  unaff_x19 = (ulong *****)&pppuStack_408;
                  FUN_10b9960b0(&pppuStack_408,&ppppuStack_3f8);
                  pppppuVar11 = (ulong *****)&pppuStack_408;
                  func_0x000107c30f40(&ppppuStack_b0);
                  func_0x00010b9963ac();
                  func_0x00010b9963e8();
                }
                func_0x000107c27900(auStack_400);
                FUN_10b994560(&ppppuStack_3f8);
              }
            }
            else {
              unaff_x19 = &ppppuStack_b0;
              pppppuVar11 = (ulong *****)apppuStack_3f0;
              func_0x000107c30f40(&ppppuStack_b0);
              func_0x00010b9963ac();
              func_0x00010b996428();
            }
            func_0x00010b9963c0(apppuStack_3f0);
          }
          else {
            func_0x00010b996550();
          }
          func_0x00010b99644c();
          pppppuVar8 = (ulong *****)&pppuStack_3d8;
        }
        func_0x000107c27900();
        func_0x00010b9963c0(&pppuStack_430);
        break;
      }
      pppppuVar11 = &ppppuStack_90;
      pppppuVar17 = (ulong *****)0x0;
      pppppuVar16 = param_3;
      pppppuVar10 = unaff_x25;
      FUN_10b994d50(pppppuVar11,param_2);
      ppppuVar19 = ppppuStack_90;
      if ((ulong *****)ppppuStack_90 == (ulong *****)0x1) {
        pppppuVar8 = &ppppuStack_3c8;
        pppppuVar11 = &ppppuStack_88;
        func_0x000107c30fd4();
      }
      else {
        func_0x000107c31084();
        pppuStack_3d8 = (ulong ***)0x0;
        ppppuStack_448 = (ulong ****)pppppuVar11;
        ppppuStack_3e0 = (ulong ****)unaff_x19;
        func_0x000107c2793c(&UNK_10f7d08d6);
        pppppuVar17 = &ppppuStack_3e0;
        pppppuVar16 = (ulong *****)0x4;
        func_0x000107c3173c(&ppppuStack_b0);
        func_0x000107c31080(apppuStack_3f0,ppppuStack_448,&ppppuStack_b0);
        pppppuVar11 = (ulong *****)apppuStack_3f0;
        FUN_10b99fa14(&pppuStack_430,&ppppuStack_88);
        func_0x00010b996430();
        func_0x00010b99649c();
        pppppuVar8 = &ppppuStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00010b99644c();
      unaff_x19 = (ulong *****)((long)unaff_x19 + 1);
      unaff_x25 = unaff_x25 + 2;
    } while ((ulong *****)ppppuVar19 == (ulong *****)0x1);
    func_0x00010b99648c();
    param_1 = (ulong *****)ppppuStack_440;
    goto LAB_10b99584c;
  case 1:
    func_0x000107c30f50();
    pppppuVar11 = param_5;
    func_0x00010b9964f0();
    ppppuStack_3b8 = (ulong ****)0x20;
    ppppuStack_3c0 = (ulong ****)0x0;
    unaff_x25 = (ulong *****)pppppuVar11[4];
    if ((ulong *****)0x20 < unaff_x25) {
      pppppuVar11 = &ppppuStack_3c8;
      func_0x000107c2a644(pppppuVar11,unaff_x25);
      pppppuVar16 = (ulong *****)(ppppuStack_3c8 + (long)ppppuStack_3c0 * 3);
      pppppuVar17 = &ppppuStack_3c8;
      ppppuStack_b0 = (ulong ****)pppppuVar11;
      ppppuStack_a8 = (ulong ****)&ppppuStack_3c8;
      ppppuStack_a0 = (ulong ****)unaff_x25;
      ppppuStack_90 = (ulong ****)pppppuVar11;
      ppppuStack_88 = (ulong ****)pppppuVar11;
      ppppuStack_80 = (ulong ****)&ppppuStack_3c8;
      func_0x000107c2a650(pppppuVar17,ppppuStack_3c8,pppppuVar16,pppppuVar11);
      ppppuStack_88 = (ulong ****)pppppuVar17;
      func_0x000107c2a650(&ppppuStack_3c8,pppppuVar16);
      ppppuStack_90 = (ulong ****)0x0;
      ppppuStack_88 = (ulong ****)0x0;
      func_0x000107c2a654(&ppppuStack_90);
      ppppuStack_b0 = (ulong ****)0x0;
      if ((ulong *****)ppppuStack_3c8 != (ulong *****)0x0) {
        func_0x000107c2a648(&ppppuStack_3c8,ppppuStack_3c8,ppppuStack_3c0);
        func_0x000107c2a64c(&ppppuStack_3c8,&ppppuStack_3c8);
        pppppuVar16 = (ulong *****)ppppuStack_3b8;
      }
      ppppuStack_3c8 = (ulong ****)pppppuVar11;
      ppppuStack_3b8 = (ulong ****)unaff_x25;
      func_0x000107c2a658(&ppppuStack_b0);
    }
    bVar20 = 0;
    pppppuVar8 = param_5 + 5;
    ppppuStack_448 = (ulong ****)(param_5 + 2);
    unaff_x19 = (ulong *****)0xffffffffffffffff;
    pppppuVar15 = pppppuVar8;
    do {
      unaff_x19 = (ulong *****)((long)unaff_x19 + 1);
      if (param_5[4] <= unaff_x19) {
        if ((bVar20 & 1) == 0) {
          lVar6 = -0x80;
          func_0x000107c30f3c(&ppppuStack_90,ppppuStack_438);
          ppppuStack_80 = (ulong ****)((ulong)ppppuStack_80 & 0xffffffffffffff00);
          pppppuVar11 = &ppppuStack_90;
          FUN_10b9961fc(ppppuStack_440);
        }
        else {
          lVar6 = -0xa0;
          pppppuVar16 = (ulong *****)ppppuStack_3c8;
          pppppuVar17 = (ulong *****)ppppuStack_3c0;
          func_0x000107c30fac(&ppppuStack_b0,ppppuStack_448,*(byte *)(param_5 + 3));
          param_2 = (ulong *****)ppppuStack_440;
          func_0x000107c30f40(&ppppuStack_90,&ppppuStack_b0);
          ppppuStack_80 = (ulong ****)CONCAT71(ppppuStack_80._1_7_,1);
          pppppuVar11 = &ppppuStack_90;
          FUN_10b9961fc(param_2);
          func_0x00010b9963e8();
        }
        unaff_x19 = (ulong *****)(&stack0xfffffffffffffff0 + lVar6);
        func_0x00010b996428();
        break;
      }
      pppppuVar16 = &ppppuStack_b0;
      pppppuVar10 = pppppuVar15 + 1;
      func_0x00010b99636c();
      unaff_x25 = (ulong *****)ppppuStack_b0;
      if ((ulong *****)ppppuStack_b0 == (ulong *****)0x1) {
        bVar20 = bStack_98 | bVar20;
        pppppuVar16 = (ulong *****)(ppppuStack_3c8 + (long)ppppuStack_3c0 * 3);
        if (ppppuStack_3c0 == ppppuStack_3b8) {
          pppppuVar11 = &ppppuStack_3c8;
          pppppuVar17 = &ppppuStack_a8;
          pppppuVar10 = pppppuVar8;
          FUN_10b996228(&ppppuStack_90);
        }
        else {
          pppppuVar9 = &ppppuStack_a8;
          pppppuVar11 = pppppuVar15;
          func_0x000107c27e98(pppppuVar16);
          ppppuStack_3c0 = (ulong ****)((long)ppppuStack_3c0 + 1);
          pppppuVar16 = pppppuVar9;
        }
      }
      else {
        func_0x000107c31084();
        ppppuStack_90 = ppppuStack_448;
        ppppuStack_88 = (ulong ****)&UNK_1003ab990;
        puStack_78 = &UNK_1003ab990;
        ppppuStack_450 = (ulong ****)pppppuVar16;
        ppppuStack_80 = (ulong ****)pppppuVar8;
        func_0x000107c2793c(&UNK_10f7d08be);
        pppppuVar17 = &ppppuStack_90;
        pppppuVar16 = (ulong *****)0xff;
        func_0x000107c3173c(&ppppuStack_3e0);
        func_0x000107c31080(apppuStack_3f0,ppppuStack_450,&ppppuStack_3e0);
        pppppuVar11 = (ulong *****)apppuStack_3f0;
        FUN_10b99fa14(&pppuStack_430,&ppppuStack_a8);
        func_0x00010b996430();
        func_0x00010b99649c();
        func_0x00010b9964d8();
      }
      pppppuVar15 = pppppuVar15 + 3;
      pppppuVar8 = pppppuVar8 + 3;
      func_0x00010b996484();
    } while (unaff_x25 == (ulong *****)0x1);
    pppppuVar8 = &ppppuStack_3c8;
    func_0x000107c2a660();
    unaff_x24 = param_5;
    param_1 = (ulong *****)ppppuStack_440;
    goto LAB_10b99584c;
  default:
    if (((int)param_4 == 0) && (bVar20 == 0x11)) {
      func_0x00010b990764();
      unaff_x19 = &ppppuStack_90;
      (*(code *)(*param_5)[4])(&ppppuStack_90);
      func_0x000107c30f40(&ppppuStack_3c8,&ppppuStack_90);
      ppppuStack_3b8 = (ulong ****)CONCAT71(ppppuStack_3b8._1_7_,1);
      pppppuVar11 = &ppppuStack_3c8;
      func_0x00010b996420();
      func_0x00010b9963e8();
      param_5 = pppppuVar10;
    }
    else {
      unaff_x19 = &ppppuStack_3c8;
      func_0x000107c30f3c(&ppppuStack_3c8,param_5);
      ppppuStack_3b8 = (ulong ****)((ulong)ppppuStack_3b8 & 0xffffffffffffff00);
      pppppuVar11 = &ppppuStack_3c8;
      func_0x00010b996420();
    }
    pppppuVar8 = unaff_x19 + 1;
    goto LAB_10b9955f4;
  case 3:
    func_0x00010b9905e4();
    pppppuVar10 = param_5 + 3;
    func_0x00010b99636c(&ppppuStack_90);
    func_0x00010b996510();
    if ((bool)uVar7) {
      unaff_x19 = (ulong *****)((ulong)puStack_78 & 0xff);
      func_0x00010b9964f0();
      ppppuStack_3b8 = (ulong ****)0xa;
      ppppuStack_3c0 = (ulong ****)0x0;
      pppppuVar11 = (ulong *****)param_5[5];
      FUN_10b995fc0(&ppppuStack_3c8);
      ppppuVar19 = (ulong ****)0x0;
      unaff_x25 = param_5 + 6;
      do {
        if (param_5[5] <= ppppuVar19) {
          if (((ulong)unaff_x19 & 1) == 0) {
            func_0x00010b99637c();
            ppppuStack_a0 = (ulong ****)((ulong)ppppuStack_a0 & 0xffffffffffffff00);
            func_0x00010b99638c();
          }
          else {
            pppppuVar16 = (ulong *****)ppppuStack_3c8;
            pppppuVar17 = (ulong *****)ppppuStack_3c0;
            func_0x00010b996530();
            pppppuVar11 = &ppppuStack_88;
            func_0x000107c30fb4(param_5 + 2);
            func_0x00010b9963f0();
            ppppuStack_a0 = (ulong ****)CONCAT71(ppppuStack_a0._1_7_,1);
            func_0x00010b99638c();
            func_0x00010b9963e8();
          }
          func_0x00010b996428();
          break;
        }
        pppppuVar11 = &ppppuStack_b0;
        pppppuVar16 = param_3;
        pppppuVar17 = param_4;
        pppppuVar10 = unaff_x25;
        FUN_10b994d50(pppppuVar11,param_2);
        bVar20 = bStack_98;
        ppppuVar12 = ppppuStack_b0;
        if ((ulong *****)ppppuStack_b0 == (ulong *****)0x1) {
          pppppuVar11 = &ppppuStack_a8;
          func_0x000107c30fd4(&ppppuStack_3c8);
          unaff_x19 = (ulong *****)(ulong)((uint)bVar20 | (uint)unaff_x19);
        }
        else {
          func_0x000107c31084();
          pppuStack_428 = (ulong ***)0x0;
          pppuStack_430 = (ulong ***)ppppuVar19;
          func_0x000107c2793c(&UNK_10f7d0896);
          pppppuVar17 = (ulong *****)&pppuStack_430;
          pppppuVar16 = (ulong *****)0x4;
          func_0x000107c3173c(&ppppuStack_3e0);
          func_0x000107c31080(&pppuStack_408,pppppuVar11,&ppppuStack_3e0);
          pppppuVar11 = (ulong *****)&pppuStack_408;
          FUN_10b99fa14(apppuStack_3f0,&ppppuStack_a8);
          *ppppuStack_440 = (ulong ***)0x2;
          ppppuStack_440[1] = apppuStack_3f0[0];
          apppuStack_3f0[0] = (ulong ***)0x0;
          func_0x000104bda93c(apppuStack_3f0);
          func_0x000107c278f4(&pppuStack_408);
          func_0x00010b9964d8();
        }
        func_0x00010b996484();
        ppppuVar19 = (ulong ****)((long)ppppuVar19 + 1);
        unaff_x25 = unaff_x25 + 2;
        param_1 = (ulong *****)ppppuStack_440;
      } while ((ulong *****)ppppuVar12 == (ulong *****)0x1);
      func_0x00010b99648c();
    }
    else {
      pppppuVar11 = (ulong *****)&UNK_10f7d0877;
      pppppuVar16 = (ulong *****)0x1e;
      FUN_10b99fa70(&ppppuStack_3c8,&ppppuStack_88);
      param_1 = (ulong *****)ppppuStack_440;
      *ppppuStack_440 = (ulong ***)0x2;
      ppppuStack_440[1] = (ulong ***)ppppuStack_3c8;
      ppppuStack_3c8 = (ulong ****)0x0;
      func_0x000104bda93c(&ppppuStack_3c8);
    }
    pppppuVar8 = &ppppuStack_90;
    goto code_r0x00010b99565c;
  case 4:
    FUN_10b990668(&pppuStack_430,param_5);
    param_5 = (ulong *****)&pppuStack_430;
    func_0x00010b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_80 == '\x01') {
        func_0x00010b996530();
        FUN_10b990868();
        func_0x00010b9963f0();
        ppppuStack_a0 = (ulong ****)CONCAT71(ppppuStack_a0._1_7_,1);
        func_0x00010b99638c();
        func_0x00010b9963e8();
      }
      else {
        func_0x00010b99637c();
        ppppuStack_a0 = (ulong ****)((ulong)ppppuStack_a0 & 0xffffffffffffff00);
        func_0x00010b99638c();
      }
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_90);
    }
    else {
      func_0x00010b99653c();
    }
    FUN_10b9961d4(&ppppuStack_3c8);
    pppppuVar8 = (ulong *****)&pppuStack_428;
LAB_10b9955f4:
    func_0x000107c27900();
    pppppuVar10 = param_5;
    goto LAB_10b99584c;
  case 5:
    func_0x00010b9906a4();
    pppppuVar10 = param_5 + 2;
    func_0x00010b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if (!(bool)uVar7) break;
    pppppuVar10 = param_5 + 4;
    func_0x00010b99636c(&ppppuStack_90);
    func_0x00010b996510();
    if ((bool)uVar7) {
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_a0 & 1) == 0) && ((bStack_3d0 & 1) == 0)) {
        func_0x00010b996400();
        goto code_r0x00010b9953d0;
      }
      func_0x00010b996454();
      FUN_10b9910ac();
code_r0x00010b99561c:
      func_0x000107c30f40(&pppuStack_430,apppuStack_3f0);
      uStack_420 = 1;
      pppppuVar11 = (ulong *****)&pppuStack_430;
      func_0x00010b996420();
      func_0x00010b9963e8();
      goto code_r0x00010b995640;
    }
code_r0x00010b9958f4:
    *param_1 = (ulong ****)0x2;
    param_1[1] = ppppuStack_88;
    ppppuStack_88 = (ulong ****)0x0;
code_r0x00010b995654:
    func_0x00010b99644c();
    unaff_x24 = param_5;
    goto code_r0x00010b995658;
  case 6:
    func_0x00010b990744();
    pppppuVar10 = param_5 + 2;
    func_0x00010b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    param_5 = unaff_x24;
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_80 == '\x01') {
        func_0x00010b996530();
        FUN_10b9911c4();
        goto code_r0x00010b9952c4;
      }
      func_0x00010b99637c();
code_r0x00010b9955b4:
      ppppuStack_a0 = (ulong ****)((ulong)ppppuStack_a0 & 0xffffffffffffff00);
      func_0x00010b99638c();
code_r0x00010b9955bc:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_90);
      goto code_r0x00010b995658;
    }
    break;
  case 8:
    func_0x00010b9906c4();
    pppppuVar10 = param_5 + 2;
    func_0x00010b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      pppppuVar10 = param_5 + 4;
      func_0x00010b99636c(&ppppuStack_90);
      func_0x00010b996510();
      if (!(bool)uVar7) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_a0 & 1) != 0) || ((bStack_3d0 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9912a0();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
code_r0x00010b9953d0:
      uStack_420 = 0;
      pppppuVar11 = (ulong *****)&pppuStack_430;
      func_0x00010b996420();
code_r0x00010b995640:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_3e0);
      func_0x00010b9963c0(&ppppuStack_b0);
      goto code_r0x00010b995654;
    }
    break;
  case 9:
    func_0x00010b9906e4();
    pppppuVar10 = param_5 + 2;
    func_0x00010b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    param_5 = unaff_x24;
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_80 != '\x01') {
        func_0x00010b99637c();
        goto code_r0x00010b9955b4;
      }
      func_0x00010b996530();
      FUN_10b991338();
code_r0x00010b9952c4:
      func_0x00010b9963f0();
      ppppuStack_a0 = (ulong ****)CONCAT71(ppppuStack_a0._1_7_,1);
      func_0x00010b99638c();
      func_0x00010b9963e8();
      goto code_r0x00010b9955bc;
    }
    break;
  case 10:
    func_0x00010b990704();
    pppppuVar10 = param_5 + 2;
    func_0x00010b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      pppppuVar10 = param_5 + 4;
      func_0x00010b99636c(&ppppuStack_90);
      func_0x00010b996510();
      if (!(bool)uVar7) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_a0 & 1) != 0) || ((bStack_3d0 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9913cc();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
      goto code_r0x00010b9953d0;
    }
  }
  func_0x00010b99653c();
  unaff_x24 = param_5;
code_r0x00010b995658:
  pppppuVar8 = &ppppuStack_3c8;
  param_5 = unaff_x24;
code_r0x00010b99565c:
  FUN_10b9961d4();
  unaff_x24 = param_5;
LAB_10b99584c:
  uVar7 = *param_1 == (ulong ****)0x1;
  if ((bool)uVar7) {
    uVar18 = (uint)*(byte *)((long)ppppuStack_438 + 1);
    if (((*(byte *)((long)ppppuStack_438 + 1) & 1) != 0) &&
       ((*(byte *)((long)param_1 + 9) & 1) == 0)) {
      unaff_x19 = &ppppuStack_3c8;
      pppppuVar8 = param_1 + 1;
      FUN_10b990784(&ppppuStack_3c8);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(param_1 + 3) = 1;
      uVar18 = (uint)*(byte *)((long)ppppuStack_438 + 1);
    }
    if (((uVar18 >> 1 & 1) != 0) && ((*(byte *)((long)param_1 + 9) >> 1 & 1) == 0)) {
      unaff_x19 = &ppppuStack_3c8;
      pppppuVar8 = param_1 + 1;
      func_0x000107c30fb8(&ppppuStack_3c8);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(param_1 + 3) = 1;
    }
  }
  func_0x00010b996468(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b9961d4(&ppppuStack_90);
  pppppuVar9 = pppppuVar8;
  __Unwind_Resume();
  pppppuVar15 = (ulong *****)&pppuStack_550;
  pcStack_458 = FUN_10b995b64;
  pppppuVar14 = pppppuVar11;
  ppppuStack_4a0 = (ulong ****)param_1;
  ppppuStack_498 = (ulong ****)unaff_x25;
  ppppuStack_490 = (ulong ****)unaff_x24;
  ppppuStack_488 = (ulong ****)param_3;
  ppppuStack_480 = (ulong ****)param_4;
  ppppuStack_478 = (ulong ****)param_2;
  ppppuStack_470 = (ulong ****)pppppuVar8;
  ppppuStack_468 = (ulong ****)unaff_x19;
  puStack_460 = &stack0xfffffffffffffff0;
  func_0x00010b996500();
  ppppuVar19 = (ulong ****)(ulong)*(byte *)((long)pppppuVar10 + 9);
  uVar7 = ppppuVar19 == (ulong ****)0xff;
  uStack_4a8 = extraout_x8_00;
  if (!(bool)uVar7) {
    pppppuVar10 = pppppuVar16;
    FUN_10b9905a4();
    if ((pppppuVar10 == (ulong *****)0x0) || (pppppuVar10[4] <= ppppuVar19)) {
      func_0x000107c31084();
      func_0x00010b98fa8c(apppuStack_530,pppppuVar16);
      ppppuVar12 = apppuStack_530;
      func_0x000107c27e5c();
      uStack_4c8 = (ulong ****)0x0;
      pppuStack_4d0 = (ulong ***)ppppuVar19;
      pppuStack_4c0 = (ulong ***)ppppuVar12;
      ppppuStack_4b8 = (ulong ****)pppppuVar14;
      func_0x000107c2793c(&UNK_10f7d099d);
      func_0x000107c3173c(apppuStack_518);
      func_0x000107c31080(&pppuStack_4d0,pppppuVar10,apppuStack_518);
      pppppuVar15 = (ulong *****)&pppuStack_4d0;
      FUN_10b99f560(apppuStack_540);
      pppuStack_4f0 = (ulong ***)0x2;
      apppuStack_4e8[0] = apppuStack_540[0];
      apppuStack_540[0] = (ulong ***)0x0;
      func_0x000104bda93c(apppuStack_540);
      func_0x00010b996494();
      func_0x00010b9964a4();
      func_0x00010b9964ac();
    }
    else {
      pppppuVar15 = pppppuVar10 + (long)ppppuVar19 * 2 + 5;
      func_0x000107c2a66c(&pppuStack_4f0);
      pppppuVar10 = unaff_x24;
    }
    uVar7 = (ulong ****)pppuStack_4f0 == (ulong ****)0x1;
    if ((bool)uVar7) {
      pppppuVar15 = pppppuVar11;
      FUN_10b994d50(&pppuStack_4d0,pppppuVar11,pppppuVar16,pppppuVar17,apppuStack_4e8);
      uVar7 = (ulong ****)pppuStack_4d0 == (ulong ****)0x1;
      if ((bool)uVar7) {
        if ((int)param_6 == 0) {
          pppppuVar11 = (ulong *****)apppuStack_518;
          pppppuVar15 = (ulong *****)&uStack_4c8;
          func_0x000107c30f40(apppuStack_518);
          func_0x00010b996398();
        }
        else {
          pppppuVar11 = (ulong *****)apppuStack_530;
          func_0x000107c30fb8(apppuStack_530,&uStack_4c8);
          func_0x00010b9964e0();
          func_0x00010b996398();
          func_0x00010b996528();
        }
        func_0x00010b9963e8();
      }
      else {
        *pppppuVar9 = (ulong ****)0x2;
        pppppuVar9[1] = uStack_4c8;
        uStack_4c8 = (ulong ****)0x0;
      }
      FUN_10b9961d4(&pppuStack_4d0);
    }
    else {
      *pppppuVar9 = (ulong ****)0x2;
      pppppuVar9[1] = (ulong ****)apppuStack_4e8[0];
      apppuStack_4e8[0] = (ulong ***)0x0;
    }
    ppppuVar19 = &pppuStack_4f0;
    func_0x000107c2a668();
    param_3 = pppppuVar16;
    goto LAB_10b995e38;
  }
  bVar20 = *(byte *)(pppppuVar10 + 1);
  pppuStack_4d0 = (ulong ***)*pppppuVar10;
  if ((ulong ****)pppuStack_4d0 == (ulong ****)0x0) {
    apppuStack_518[0] = (ulong ***)0x0;
  }
  else {
    ppppuVar19 = (ulong ****)(pppuStack_4d0 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar4) {
        *(int *)ppppuVar19 = *(int *)ppppuVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar4) {
        *(int *)ppppuVar19 = *(int *)ppppuVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      apppuStack_518[0] = pppuStack_4d0;
    } while (cVar3 != '\0');
  }
  uStack_4c8._0_2_ = CONCAT11(0xff,bVar20);
  func_0x000107c30fa8(apppuStack_540,&pppuStack_4d0);
  func_0x00010b996494();
  func_0x000107c278f4(apppuStack_518);
  if ((int)param_6 != 0) {
    param_6 = &pppuStack_4d0;
    FUN_10b99081c(&pppuStack_4d0,apppuStack_540);
    func_0x000107c30f90(apppuStack_540,&pppuStack_4d0);
    func_0x000107c27900(&uStack_4c8);
  }
  if ((int)pppppuVar17 == 0) {
    pppppuVar11 = (ulong *****)&pppuStack_4d0;
    func_0x000107c30f3c(&pppuStack_4d0,apppuStack_540);
    pppuStack_4c0 = (ulong ***)CONCAT71(pppuStack_4c0._1_7_,1);
    pppppuVar15 = (ulong *****)&pppuStack_4d0;
    FUN_10b9961fc(pppppuVar9);
LAB_10b995e04:
    ppppuVar19 = (ulong ****)&uStack_4c8;
    func_0x000107c27900();
  }
  else {
    if (*pppppuVar11 != (ulong ****)0x0) {
      func_0x000107c31030(&pppuStack_4d0,apppuStack_540);
      pppppuVar11 = (ulong *****)*pppppuVar11;
      ppppuVar19 = &pppuStack_4d0;
      FUN_10b993be8(&pppuStack_500);
      uVar7 = (ulong ****)pppuStack_500 == (ulong ****)0x1;
      if ((bool)uVar7) {
        pppppuVar11 = (ulong *****)apppuStack_530;
        pppppuVar15 = (ulong *****)&pppuStack_4f8;
        FUN_10b9960b0(apppuStack_530);
        func_0x00010b9964e0();
        func_0x00010b996398();
        func_0x00010b996528();
        func_0x00010b9963e8();
      }
      else {
        func_0x000107c31084();
        FUN_10b994b18(apppuStack_530,pppppuVar10);
        ppppuVar12 = apppuStack_530;
        func_0x000107c27e5c();
        pppuStack_4f0 = (ulong ***)ppppuVar12;
        apppuStack_4e8[0] = (ulong ***)ppppuVar19;
        func_0x000107c2793c(&UNK_10f7d0979);
        func_0x000107c3173c(apppuStack_518);
        pppppuVar17 = (ulong *****)&pppuStack_500;
        func_0x000107c31080(&pppuStack_550,pppppuVar11,apppuStack_518);
        FUN_10b99fa14(&pppuStack_548,&pppuStack_4f8);
        *pppppuVar9 = (ulong ****)0x2;
        pppppuVar9[1] = (ulong ****)pppuStack_548;
        pppuStack_548 = (ulong ***)0x0;
        func_0x000104bda93c(&pppuStack_548);
        func_0x000107c278f4(&pppuStack_550);
        func_0x00010b9964a4();
        func_0x00010b9964ac();
      }
      func_0x00010b9945ac(&pppuStack_500);
      goto LAB_10b995e04;
    }
    pppppuVar15 = (ulong *****)&UNK_10f7d0937;
    ppppuVar19 = &pppuStack_4d0;
    FUN_10b99f5f8();
    *pppppuVar9 = (ulong ****)0x2;
    pppppuVar9[1] = (ulong ****)pppuStack_4d0;
    pppuStack_4d0 = (ulong ***)0x0;
    func_0x000104bda93c();
  }
  func_0x00010b9963c0(apppuStack_540);
LAB_10b995e38:
  func_0x00010b996468(uStack_4a8);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&pppuStack_550);
  func_0x00010b9964a4();
  func_0x00010b9964ac();
  ppppuVar12 = &pppuStack_500;
  func_0x00010b9945ac();
  func_0x00010b9963c0(&pppuStack_4d0);
  func_0x00010b9963c0(apppuStack_540);
  func_0x00010b99647c();
  pcStack_558 = FUN_10b995fc0;
  if (ppppuVar12[2] < pppppuVar15) {
    ppppuVar13 = ppppuVar12;
    ppppuStack_590 = (ulong ****)pppppuVar10;
    ppppuStack_588 = (ulong ****)param_3;
    pppuStack_580 = (ulong ***)param_6;
    ppppuStack_578 = (ulong ****)pppppuVar17;
    ppppuStack_570 = (ulong ****)pppppuVar11;
    pppuStack_568 = (ulong ***)ppppuVar19;
    ppuStack_560 = &puStack_460;
    func_0x00010b9933d8();
    pppuVar2 = *ppppuVar12;
    pppuVar1 = pppuVar2 + (long)ppppuVar12[1] * 2;
    ppppuVar19 = ppppuVar12;
    pppuStack_5c0 = (ulong ***)ppppuVar13;
    pppuStack_5b8 = (ulong ***)ppppuVar12;
    ppppuStack_5b0 = (ulong ****)pppppuVar15;
    pppuStack_5a8 = (ulong ***)ppppuVar13;
    pppuStack_5a0 = (ulong ***)ppppuVar13;
    pppuStack_598 = (ulong ***)ppppuVar12;
    FUN_10b993538(ppppuVar12,pppuVar2,pppuVar1,ppppuVar13);
    pppuStack_5a0 = (ulong ***)ppppuVar19;
    FUN_10b993538(ppppuVar12,pppuVar1,pppuVar1,ppppuVar19);
    pppuStack_5a8 = (ulong ***)0x0;
    pppuStack_5a0 = (ulong ***)0x0;
    func_0x00010b993574(&pppuStack_5a8);
    pppuStack_5c0 = (ulong ***)0x0;
    if (pppuVar2 != (ulong ***)0x0) {
      func_0x000107c30fe0(ppppuVar12,pppuVar2,ppppuVar12[1]);
      func_0x000107c30fe4(ppppuVar12,ppppuVar12,ppppuVar12[2]);
    }
    *ppppuVar12 = (ulong ***)ppppuVar13;
    ppppuVar12[2] = (ulong ***)pppppuVar15;
    func_0x00010b9935b4(&pppuStack_5c0);
  }
  return;
}



/* Entry: 10b995b64; end: 10b995fbf;  */

void FUN_10b995b64(undefined8 *param_1,ulong **param_2,ulong *param_3,long *param_4,ulong *param_5,
                  ulong **param_6)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong **ppuVar7;
  undefined1 ***pppuVar8;
  ulong **ppuVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong **ppuVar13;
  undefined8 extraout_x8;
  ulong *unaff_x23;
  ulong *unaff_x24;
  undefined1 **ppuVar14;
  long *plStack_170;
  long *plStack_168;
  ulong **ppuStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong **ppuStack_130;
  long *plStack_128;
  ulong **ppuStack_120;
  ulong **ppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong *puStack_100;
  undefined8 uStack_f8;
  ulong **appuStack_f0 [2];
  ulong *apuStack_e0 [3];
  ulong *apuStack_c8 [3];
  long lStack_b0;
  ulong *puStack_a8;
  undefined1 **ppuStack_a0;
  ulong **appuStack_98 [3];
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  ulong **ppuStack_68;
  undefined8 uStack_58;
  
  ppuVar7 = &puStack_100;
  ppuVar13 = param_2;
  func_0x00010b996500();
  ppuVar14 = (undefined1 **)(ulong)*(byte *)((long)param_5 + 9);
  uVar6 = ppuVar14 == (undefined1 **)0xff;
  uStack_58 = extraout_x8;
  if (!(bool)uVar6) {
    param_5 = param_3;
    FUN_10b9905a4();
    if ((param_5 == (ulong *)0x0) || ((undefined1 **)param_5[4] <= ppuVar14)) {
      func_0x000107c31084();
      func_0x00010b98fa8c(apuStack_e0,param_3);
      ppuVar7 = apuStack_e0;
      func_0x000107c27e5c();
      uStack_78 = (undefined1 **)0x0;
      puStack_80 = (ulong *)ppuVar14;
      ppuStack_70 = (undefined1 **)ppuVar7;
      ppuStack_68 = ppuVar13;
      func_0x000107c2793c(&UNK_10f7d099d);
      func_0x000107c3173c(apuStack_c8);
      func_0x000107c31080(&puStack_80,param_5,apuStack_c8);
      ppuVar7 = &puStack_80;
      FUN_10b99f560(appuStack_f0);
      ppuStack_a0 = (undefined1 **)0x2;
      appuStack_98[0] = appuStack_f0[0];
      appuStack_f0[0] = (ulong **)0x0;
      func_0x000104bda93c(appuStack_f0);
      func_0x00010b996494();
      func_0x00010b9964a4();
      func_0x00010b9964ac();
    }
    else {
      ppuVar7 = (ulong **)(param_5 + (long)ppuVar14 * 2 + 5);
      func_0x000107c2a66c(&ppuStack_a0);
      param_5 = unaff_x24;
    }
    uVar6 = (ulong **)ppuStack_a0 == (ulong **)0x1;
    if ((bool)uVar6) {
      ppuVar7 = param_2;
      FUN_10b994d50(&puStack_80,param_2,param_3,param_4,appuStack_98);
      uVar6 = (undefined1 **)puStack_80 == (undefined1 **)0x1;
      if ((bool)uVar6) {
        if ((int)param_6 == 0) {
          param_2 = apuStack_c8;
          ppuVar7 = (ulong **)&uStack_78;
          func_0x000107c30f40(apuStack_c8);
          func_0x00010b996398();
        }
        else {
          param_2 = apuStack_e0;
          func_0x000107c30fb8(apuStack_e0,&uStack_78);
          func_0x00010b9964e0();
          func_0x00010b996398();
          func_0x00010b996528();
        }
        func_0x00010b9963e8();
      }
      else {
        *param_1 = 2;
        param_1[1] = uStack_78;
        uStack_78 = (undefined1 **)0x0;
      }
      FUN_10b9961d4(&puStack_80);
    }
    else {
      *param_1 = 2;
      param_1[1] = appuStack_98[0];
      appuStack_98[0] = (ulong **)0x0;
    }
    pppuVar8 = &ppuStack_a0;
    func_0x000107c2a668();
    unaff_x23 = param_3;
    goto LAB_10b995e38;
  }
  uVar5 = param_5[1];
  puStack_80 = (ulong *)*param_5;
  if ((undefined1 **)puStack_80 == (undefined1 **)0x0) {
    apuStack_c8[0] = (ulong *)0x0;
  }
  else {
    ppuVar14 = (undefined1 **)(puStack_80 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar4) {
        *(int *)ppuVar14 = *(int *)ppuVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar4) {
        *(int *)ppuVar14 = *(int *)ppuVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      apuStack_c8[0] = puStack_80;
    } while (cVar3 != '\0');
  }
  uStack_78._0_2_ = CONCAT11(0xff,(char)uVar5);
  func_0x000107c30fa8(appuStack_f0,&puStack_80);
  func_0x00010b996494();
  func_0x000107c278f4(apuStack_c8);
  if ((int)param_6 != 0) {
    param_6 = &puStack_80;
    FUN_10b99081c(&puStack_80,appuStack_f0);
    func_0x000107c30f90(appuStack_f0,&puStack_80);
    func_0x000107c27900(&uStack_78);
  }
  if ((int)param_4 == 0) {
    param_2 = &puStack_80;
    func_0x000107c30f3c(&puStack_80,appuStack_f0);
    ppuStack_70 = (undefined1 **)CONCAT71(ppuStack_70._1_7_,1);
    ppuVar7 = &puStack_80;
    FUN_10b9961fc(param_1);
LAB_10b995e04:
    pppuVar8 = (undefined1 ***)&uStack_78;
    func_0x000107c27900();
  }
  else {
    if (*param_2 != (ulong *)0x0) {
      func_0x000107c31030(&puStack_80,appuStack_f0);
      param_2 = (ulong **)*param_2;
      ppuVar13 = &puStack_80;
      FUN_10b993be8(&lStack_b0);
      uVar6 = lStack_b0 == 1;
      if ((bool)uVar6) {
        param_2 = apuStack_e0;
        ppuVar7 = &puStack_a8;
        FUN_10b9960b0(apuStack_e0);
        func_0x00010b9964e0();
        func_0x00010b996398();
        func_0x00010b996528();
        func_0x00010b9963e8();
      }
      else {
        func_0x000107c31084();
        FUN_10b994b18(apuStack_e0,param_5);
        ppuVar9 = apuStack_e0;
        func_0x000107c27e5c();
        ppuStack_a0 = (undefined1 **)ppuVar9;
        appuStack_98[0] = ppuVar13;
        func_0x000107c2793c(&UNK_10f7d0979);
        func_0x000107c3173c(apuStack_c8);
        param_4 = &lStack_b0;
        func_0x000107c31080(&puStack_100,param_2,apuStack_c8);
        FUN_10b99fa14(&uStack_f8,&puStack_a8);
        *param_1 = 2;
        param_1[1] = uStack_f8;
        uStack_f8 = 0;
        func_0x000104bda93c(&uStack_f8);
        func_0x000107c278f4(&puStack_100);
        func_0x00010b9964a4();
        func_0x00010b9964ac();
      }
      func_0x00010b9945ac(&lStack_b0);
      goto LAB_10b995e04;
    }
    ppuVar7 = (ulong **)&UNK_10f7d0937;
    pppuVar8 = (undefined1 ***)&puStack_80;
    FUN_10b99f5f8();
    *param_1 = 2;
    param_1[1] = puStack_80;
    puStack_80 = (ulong *)0x0;
    func_0x000104bda93c();
  }
  func_0x00010b9963c0(appuStack_f0);
LAB_10b995e38:
  func_0x00010b996468(uStack_58);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x000107c278f4(&puStack_100);
    func_0x00010b9964a4();
    func_0x00010b9964ac();
    plVar10 = &lStack_b0;
    func_0x00010b9945ac();
    func_0x00010b9963c0(&puStack_80);
    func_0x00010b9963c0(appuStack_f0);
    func_0x00010b99647c();
    pcStack_108 = FUN_10b995fc0;
    if ((ulong **)plVar10[2] < ppuVar7) {
      plVar11 = plVar10;
      puStack_140 = param_5;
      puStack_138 = unaff_x23;
      ppuStack_130 = param_6;
      plStack_128 = param_4;
      ppuStack_120 = param_2;
      ppuStack_118 = (ulong **)pppuVar8;
      puStack_110 = &stack0xfffffffffffffff0;
      func_0x00010b9933d8();
      lVar2 = *plVar10;
      lVar1 = lVar2 + plVar10[1] * 0x10;
      plVar12 = plVar10;
      plStack_170 = plVar11;
      plStack_168 = plVar10;
      ppuStack_160 = ppuVar7;
      plStack_158 = plVar11;
      plStack_150 = plVar11;
      plStack_148 = plVar10;
      FUN_10b993538(plVar10,lVar2,lVar1,plVar11);
      plStack_150 = plVar12;
      FUN_10b993538(plVar10,lVar1,lVar1,plVar12);
      plStack_158 = (long *)0x0;
      plStack_150 = (long *)0x0;
      func_0x00010b993574(&plStack_158);
      plStack_170 = (long *)0x0;
      if (lVar2 != 0) {
        func_0x000107c30fe0(plVar10,lVar2,plVar10[1]);
        func_0x000107c30fe4(plVar10,plVar10,plVar10[2]);
      }
      *plVar10 = (long)plVar11;
      plVar10[2] = (long)ppuVar7;
      func_0x00010b9935b4(&plStack_170);
    }
    return;
  }
  return;
}



/* Entry: 10b995fc0; end: 10b9960af;  */

void FUN_10b995fc0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_70;
  long *plStack_68;
  ulong uStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_1[2] < param_2) {
    plVar3 = param_1;
    func_0x00010b9933d8();
    lVar2 = *param_1;
    lVar1 = lVar2 + param_1[1] * 0x10;
    plVar4 = param_1;
    plStack_70 = plVar3;
    plStack_68 = param_1;
    uStack_60 = param_2;
    plStack_58 = plVar3;
    plStack_50 = plVar3;
    plStack_48 = param_1;
    FUN_10b993538(param_1,lVar2,lVar1,plVar3);
    plStack_50 = plVar4;
    FUN_10b993538(param_1,lVar1,lVar1,plVar4);
    plStack_58 = (long *)0x0;
    plStack_50 = (long *)0x0;
    func_0x00010b993574(&plStack_58);
    plStack_70 = (long *)0x0;
    if (lVar2 != 0) {
      func_0x000107c30fe0(param_1,lVar2,param_1[1]);
      func_0x000107c30fe4(param_1,param_1,param_1[2]);
    }
    *param_1 = (long)plVar3;
    param_1[2] = param_2;
    func_0x00010b9935b4(&plStack_70);
  }
  return;
}



/* Entry: 10b9960b0; end: 10b996133;  */

void FUN_10b9960b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_40 [16];
  
  iVar1 = (int)auStack_40;
  (**(code **)(*(long *)*param_2 + 0x28))(auStack_40);
  FUN_10b996134();
  if (iVar1 == 0) {
    func_0x000107c30f40(param_1,auStack_40);
  }
  else {
    FUN_10b991250(param_1,param_2);
  }
  func_0x00010b9963c0(auStack_40);
  return;
}



/* Entry: 10b996134; end: 10b9961ab;  */

undefined1 * FUN_10b996134(byte *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 auStack_30 [16];
  
  puVar2 = auStack_30;
  bVar1 = *param_1;
  if (bVar1 - 3 < 5 || bVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else if (bVar1 == 0xe) {
    FUN_10b990668(auStack_30);
    FUN_10b996134(auStack_30);
    func_0x00010b9963e8();
  }
  else {
    puVar2 = (undefined1 *)0x1;
  }
  return puVar2;
}



/* Entry: 10b9961ac; end: 10b9961d3;  */

void FUN_10b9961ac(long param_1,long param_2)

{
  func_0x000107c30f40();
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return;
}



/* Entry: 10b9961d4; end: 10b9961fb;  */

void FUN_10b9961d4(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    param_1 = param_1 + 2;
    func_0x0001003adc0c();
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  return;
}



/* Entry: 10b9961fc; end: 10b996227;  */

undefined8 * FUN_10b9961fc(undefined8 *param_1)

{
  *param_1 = 1;
  FUN_10b9961ac(param_1 + 1);
  return param_1;
}



/* Entry: 10b996228; end: 10b99636b;  */

void FUN_10b996228(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar6 = *param_2;
  plVar3 = param_2;
  func_0x000107c2a640(param_2,1);
  plVar4 = param_2;
  func_0x000107c2a644(param_2,plVar3);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  plVar5 = param_2;
  plStack_90 = plVar4;
  plStack_88 = param_2;
  plStack_80 = plVar3;
  plStack_78 = plVar4;
  plStack_70 = plVar4;
  plStack_68 = param_2;
  func_0x000107c2a650(param_2,lVar1,param_3,plVar4);
  plStack_70 = plVar5;
  func_0x000107c27e98();
  plStack_70 = plVar5 + 3;
  func_0x000107c2a650(param_2,param_3,lVar1 + lVar2 * 0x18);
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  func_0x000107c2a654(&plStack_78);
  plStack_90 = (long *)0x0;
  if (lVar1 != 0) {
    func_0x000107c2a648(param_2,lVar1,param_2[1]);
    func_0x000107c2a64c(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar4;
  param_2[1] = param_2[1] + 1;
  param_2[2] = (long)plVar3;
  func_0x000107c2a658(&plStack_90);
  *param_1 = *param_2 + (param_3 - lVar6);
  return;
}



/* Entry: 10b99636c; end: 10b9965af;  */

void FUN_10b99636c(ulong *****param_1)

{
  ulong ***pppuVar1;
  ulong ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong ****ppppuVar12;
  ulong ****ppppuVar13;
  ulong *****pppppuVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong *****in_x4;
  ulong ****in_x5;
  uint uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *****unaff_x19;
  ulong *****unaff_x21;
  ulong *****unaff_x22;
  ulong *****unaff_x23;
  ulong *****unaff_x24;
  ulong ****ppppuVar19;
  ulong *****unaff_x25;
  byte bVar20;
  ulong ***pppuStack_5c0;
  ulong ***pppuStack_5b8;
  ulong ****ppppuStack_5b0;
  ulong ***pppuStack_5a8;
  ulong ***pppuStack_5a0;
  ulong ***pppuStack_598;
  ulong ****ppppuStack_590;
  ulong ****ppppuStack_588;
  ulong ***pppuStack_580;
  ulong ****ppppuStack_578;
  ulong ****ppppuStack_570;
  ulong ***pppuStack_568;
  undefined1 **ppuStack_560;
  code *pcStack_558;
  ulong ***pppuStack_550;
  ulong ***pppuStack_548;
  ulong ***apppuStack_540 [2];
  ulong ***apppuStack_530 [3];
  ulong ***apppuStack_518 [3];
  ulong ***pppuStack_500;
  ulong ***pppuStack_4f8;
  ulong ***pppuStack_4f0;
  ulong ***apppuStack_4e8 [3];
  ulong ***pppuStack_4d0;
  undefined8 uStack_4c8;
  ulong ***pppuStack_4c0;
  ulong ****ppppuStack_4b8;
  undefined8 uStack_4a8;
  ulong ****ppppuStack_4a0;
  ulong ****ppppuStack_498;
  ulong ****ppppuStack_490;
  ulong ****ppppuStack_488;
  ulong ****ppppuStack_480;
  ulong ****ppppuStack_478;
  ulong ****ppppuStack_470;
  ulong ****ppppuStack_468;
  undefined1 *puStack_460;
  code *pcStack_458;
  ulong ****ppppuStack_450;
  ulong ****ppppuStack_448;
  ulong ****ppppuStack_440;
  ulong ****ppppuStack_438;
  ulong ***pppuStack_430;
  ulong ***pppuStack_428;
  undefined1 uStack_420;
  ulong ***apppuStack_418 [2];
  ulong ***pppuStack_408;
  undefined1 auStack_400 [8];
  ulong ****ppppuStack_3f8;
  ulong ***apppuStack_3f0 [2];
  ulong ****ppppuStack_3e0;
  ulong ***pppuStack_3d8;
  byte bStack_3d0;
  ulong ****ppppuStack_3c8;
  ulong ****ppppuStack_3c0;
  ulong ****ppppuStack_3b8;
  ulong ****ppppuStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  ulong ****ppppuStack_90;
  ulong ****ppppuStack_88;
  ulong ****ppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  pppppuVar11 = unaff_x21;
  pppppuVar16 = unaff_x23;
  pppppuVar17 = unaff_x22;
  func_0x00010b996500();
  bVar20 = *(byte *)in_x4;
  ppppuStack_438 = (ulong ****)in_x4;
  uStack_70 = extraout_x8;
  if ((bVar20 & 0xfe) == 8) {
    func_0x000107c30f48(&ppppuStack_3c8,in_x4);
    in_x5 = (ulong ****)(ulong)(*(byte *)((long)in_x4 + 1) >> 1 & 1);
    pppppuVar10 = &ppppuStack_3c8;
    pppppuVar11 = unaff_x21;
    pppppuVar16 = unaff_x23;
    pppppuVar17 = unaff_x22;
    FUN_10b995b64(param_1);
    pppppuVar8 = &ppppuStack_3c8;
    func_0x000107c278f4();
    unaff_x19 = in_x4;
    goto LAB_10b99584c;
  }
  iVar5 = bVar20 - 10;
  uVar7 = iVar5 == 10;
  pppppuVar10 = in_x4;
  ppppuStack_440 = (ulong ****)param_1;
  switch(iVar5) {
  case 0:
    unaff_x24 = in_x4;
    FUN_10b9905a4();
    bVar20 = *(byte *)((long)in_x4 + 1);
    pppppuVar16 = unaff_x24;
    func_0x00010b9964f0();
    ppppuStack_3b8 = (ulong ****)0x8;
    ppppuStack_3c0 = (ulong ****)0x0;
    FUN_10b995fc0(&ppppuStack_3c8,pppppuVar16[4]);
    unaff_x19 = (ulong *****)0x0;
    unaff_x25 = unaff_x24 + 5;
    do {
      uVar7 = unaff_x19 == (ulong *****)unaff_x24[4];
      if (unaff_x24[4] <= unaff_x19) {
        pppppuVar16 = (ulong *****)ppppuStack_3c0;
        FUN_10b990ebc(&pppuStack_430,unaff_x24 + 2,ppppuStack_3c8);
        unaff_x23 = (ulong *****)ppppuStack_440;
        if ((bVar20 >> 1 & 1) != 0) {
          unaff_x19 = &ppppuStack_90;
          FUN_10b99081c(&ppppuStack_90,&pppuStack_430);
          func_0x000107c30f90(&pppuStack_430,&ppppuStack_90);
          func_0x00010b996428();
        }
        if ((int)unaff_x22 == 0) {
          unaff_x19 = &ppppuStack_90;
          func_0x000107c30f3c(&ppppuStack_90,&pppuStack_430);
          ppppuStack_80 = (ulong ****)CONCAT71(ppppuStack_80._1_7_,1);
          pppppuVar11 = &ppppuStack_90;
          FUN_10b9961fc(unaff_x23);
          pppppuVar8 = &ppppuStack_88;
        }
        else {
          func_0x000107c31030(&ppppuStack_3e0,&pppuStack_430);
          in_x5 = (ulong ****)(ulong)(bVar20 >> 1 & 1);
          pppppuVar16 = &ppppuStack_3e0;
          pppppuVar10 = unaff_x24 + 2;
          pppppuVar17 = (ulong *****)0x1;
          pppppuVar11 = unaff_x21;
          FUN_10b995b64(&ppppuStack_90);
          func_0x00010b996510();
          if ((bool)uVar7) {
            unaff_x19 = &ppppuStack_90;
            func_0x000107c30f40(apppuStack_3f0,&ppppuStack_88);
            if ((char)apppuStack_3f0[0] == '\x11') {
              if (*unaff_x21 == (ulong ****)0x0) {
                pppppuVar11 = (ulong *****)&UNK_10f7d0905;
                FUN_10b99f5f8(&ppppuStack_b0);
                *unaff_x23 = (ulong ****)0x2;
                unaff_x23[1] = ppppuStack_b0;
                ppppuStack_b0 = (ulong ****)0x0;
                func_0x000104bda93c();
              }
              else {
                FUN_10b9939f0(&ppppuStack_3f8,*unaff_x21,&ppppuStack_3e0);
                if ((ulong *****)ppppuStack_3f8 == (ulong *****)0x0) {
                  ppppuVar19 = apppuStack_3f0;
                  func_0x00010b990764();
                  (*(code *)(*ppppuVar19)[5])(&pppuStack_408);
                  unaff_x22 = (ulong *****)*unaff_x21;
                  func_0x000107c30ffc(unaff_x22,&ppppuStack_3e0,&pppuStack_408);
                  FUN_10b993a84(&ppppuStack_b0,*unaff_x21,unaff_x22);
                  ppppuVar12 = ppppuStack_b0;
                  ppppuVar19 = ppppuStack_3f8;
                  ppppuStack_b0 = (ulong ****)0x0;
                  ppppuStack_3f8 = ppppuVar12;
                  func_0x00010b994588(ppppuVar19);
                  FUN_10b994560(&ppppuStack_b0);
                  pppppuVar16 = &ppppuStack_3e0;
                  pppppuVar10 = (ulong *****)&pppuStack_408;
                  pppppuVar17 = (ulong *****)0x1;
                  FUN_10b994d50();
                  func_0x00010b99644c();
                  ppppuStack_90 = ppppuStack_b0;
                  ppppuStack_80 = ppppuStack_a0;
                  ppppuStack_88 = ppppuStack_a8;
                  puStack_78 = (undefined *)CONCAT71(uStack_97,bStack_98);
                  ppppuStack_b0 = (ulong ****)0x0;
                  func_0x00010b996484();
                  if ((ulong *****)ppppuStack_90 == (ulong *****)0x1) {
                    pppppuVar16 = &ppppuStack_88;
                    FUN_10b994104(*unaff_x21,unaff_x22);
                    unaff_x19 = (ulong *****)apppuStack_418;
                    FUN_10b9960b0(apppuStack_418,&ppppuStack_3f8);
                    pppppuVar11 = (ulong *****)apppuStack_418;
                    func_0x000107c30f40(&ppppuStack_b0);
                    func_0x00010b9963ac();
                    func_0x00010b9963e8();
                    func_0x00010b996428();
                  }
                  else {
                    pppppuVar11 = unaff_x22;
                    FUN_10b993eb0(*unaff_x21);
                    func_0x00010b996550();
                  }
                }
                else {
                  unaff_x19 = (ulong *****)&pppuStack_408;
                  FUN_10b9960b0(&pppuStack_408,&ppppuStack_3f8);
                  pppppuVar11 = (ulong *****)&pppuStack_408;
                  func_0x000107c30f40(&ppppuStack_b0);
                  func_0x00010b9963ac();
                  func_0x00010b9963e8();
                }
                func_0x000107c27900(auStack_400);
                FUN_10b994560(&ppppuStack_3f8);
              }
            }
            else {
              unaff_x19 = &ppppuStack_b0;
              pppppuVar11 = (ulong *****)apppuStack_3f0;
              func_0x000107c30f40(&ppppuStack_b0);
              func_0x00010b9963ac();
              func_0x00010b996428();
            }
            func_0x00010b9963c0(apppuStack_3f0);
          }
          else {
            func_0x00010b996550();
          }
          func_0x00010b99644c();
          pppppuVar8 = (ulong *****)&pppuStack_3d8;
        }
        func_0x000107c27900();
        func_0x00010b9963c0(&pppuStack_430);
        break;
      }
      pppppuVar11 = &ppppuStack_90;
      pppppuVar17 = (ulong *****)0x0;
      pppppuVar16 = unaff_x23;
      pppppuVar10 = unaff_x25;
      FUN_10b994d50();
      ppppuVar19 = ppppuStack_90;
      if ((ulong *****)ppppuStack_90 == (ulong *****)0x1) {
        pppppuVar8 = &ppppuStack_3c8;
        pppppuVar11 = &ppppuStack_88;
        func_0x000107c30fd4();
      }
      else {
        func_0x000107c31084();
        pppuStack_3d8 = (ulong ***)0x0;
        ppppuStack_448 = (ulong ****)pppppuVar11;
        ppppuStack_3e0 = (ulong ****)unaff_x19;
        func_0x000107c2793c(&UNK_10f7d08d6);
        pppppuVar17 = &ppppuStack_3e0;
        pppppuVar16 = (ulong *****)0x4;
        func_0x000107c3173c(&ppppuStack_b0);
        func_0x000107c31080(apppuStack_3f0,ppppuStack_448,&ppppuStack_b0);
        pppppuVar11 = (ulong *****)apppuStack_3f0;
        FUN_10b99fa14(&pppuStack_430,&ppppuStack_88);
        func_0x00010b996430();
        func_0x00010b99649c();
        pppppuVar8 = &ppppuStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00010b99644c();
      unaff_x19 = (ulong *****)((long)unaff_x19 + 1);
      unaff_x25 = unaff_x25 + 2;
    } while ((ulong *****)ppppuVar19 == (ulong *****)0x1);
    func_0x00010b99648c();
    param_1 = (ulong *****)ppppuStack_440;
    goto LAB_10b99584c;
  case 1:
    func_0x000107c30f50();
    pppppuVar11 = in_x4;
    func_0x00010b9964f0();
    ppppuStack_3b8 = (ulong ****)0x20;
    ppppuStack_3c0 = (ulong ****)0x0;
    unaff_x25 = (ulong *****)pppppuVar11[4];
    if ((ulong *****)0x20 < unaff_x25) {
      pppppuVar11 = &ppppuStack_3c8;
      func_0x000107c2a644(pppppuVar11,unaff_x25);
      pppppuVar16 = (ulong *****)(ppppuStack_3c8 + (long)ppppuStack_3c0 * 3);
      pppppuVar17 = &ppppuStack_3c8;
      ppppuStack_b0 = (ulong ****)pppppuVar11;
      ppppuStack_a8 = (ulong ****)&ppppuStack_3c8;
      ppppuStack_a0 = (ulong ****)unaff_x25;
      ppppuStack_90 = (ulong ****)pppppuVar11;
      ppppuStack_88 = (ulong ****)pppppuVar11;
      ppppuStack_80 = (ulong ****)&ppppuStack_3c8;
      func_0x000107c2a650(pppppuVar17,ppppuStack_3c8,pppppuVar16,pppppuVar11);
      ppppuStack_88 = (ulong ****)pppppuVar17;
      func_0x000107c2a650(&ppppuStack_3c8,pppppuVar16);
      ppppuStack_90 = (ulong ****)0x0;
      ppppuStack_88 = (ulong ****)0x0;
      func_0x000107c2a654(&ppppuStack_90);
      ppppuStack_b0 = (ulong ****)0x0;
      if ((ulong *****)ppppuStack_3c8 != (ulong *****)0x0) {
        func_0x000107c2a648(&ppppuStack_3c8,ppppuStack_3c8,ppppuStack_3c0);
        func_0x000107c2a64c(&ppppuStack_3c8,&ppppuStack_3c8);
        pppppuVar16 = (ulong *****)ppppuStack_3b8;
      }
      ppppuStack_3c8 = (ulong ****)pppppuVar11;
      ppppuStack_3b8 = (ulong ****)unaff_x25;
      func_0x000107c2a658(&ppppuStack_b0);
    }
    bVar20 = 0;
    pppppuVar8 = in_x4 + 5;
    ppppuStack_448 = (ulong ****)(in_x4 + 2);
    unaff_x19 = (ulong *****)0xffffffffffffffff;
    pppppuVar15 = pppppuVar8;
    do {
      unaff_x19 = (ulong *****)((long)unaff_x19 + 1);
      if (in_x4[4] <= unaff_x19) {
        if ((bVar20 & 1) == 0) {
          lVar6 = -0x80;
          func_0x000107c30f3c(&ppppuStack_90,ppppuStack_438);
          ppppuStack_80 = (ulong ****)((ulong)ppppuStack_80 & 0xffffffffffffff00);
          pppppuVar11 = &ppppuStack_90;
          FUN_10b9961fc(ppppuStack_440);
        }
        else {
          lVar6 = -0xa0;
          pppppuVar16 = (ulong *****)ppppuStack_3c8;
          pppppuVar17 = (ulong *****)ppppuStack_3c0;
          func_0x000107c30fac(&ppppuStack_b0,ppppuStack_448,*(byte *)(in_x4 + 3));
          unaff_x21 = (ulong *****)ppppuStack_440;
          func_0x000107c30f40(&ppppuStack_90,&ppppuStack_b0);
          ppppuStack_80 = (ulong ****)CONCAT71(ppppuStack_80._1_7_,1);
          pppppuVar11 = &ppppuStack_90;
          FUN_10b9961fc(unaff_x21);
          func_0x00010b9963e8();
        }
        unaff_x19 = (ulong *****)(&stack0xfffffffffffffff0 + lVar6);
        func_0x00010b996428();
        break;
      }
      pppppuVar16 = &ppppuStack_b0;
      pppppuVar10 = pppppuVar15 + 1;
      FUN_10b99636c();
      unaff_x25 = (ulong *****)ppppuStack_b0;
      if ((ulong *****)ppppuStack_b0 == (ulong *****)0x1) {
        bVar20 = bStack_98 | bVar20;
        pppppuVar16 = (ulong *****)(ppppuStack_3c8 + (long)ppppuStack_3c0 * 3);
        if (ppppuStack_3c0 == ppppuStack_3b8) {
          pppppuVar11 = &ppppuStack_3c8;
          pppppuVar17 = &ppppuStack_a8;
          pppppuVar10 = pppppuVar8;
          FUN_10b996228(&ppppuStack_90);
        }
        else {
          pppppuVar9 = &ppppuStack_a8;
          pppppuVar11 = pppppuVar15;
          func_0x000107c27e98(pppppuVar16);
          ppppuStack_3c0 = (ulong ****)((long)ppppuStack_3c0 + 1);
          pppppuVar16 = pppppuVar9;
        }
      }
      else {
        func_0x000107c31084();
        ppppuStack_90 = ppppuStack_448;
        ppppuStack_88 = (ulong ****)&UNK_1003ab990;
        puStack_78 = &UNK_1003ab990;
        ppppuStack_450 = (ulong ****)pppppuVar16;
        ppppuStack_80 = (ulong ****)pppppuVar8;
        func_0x000107c2793c(&UNK_10f7d08be);
        pppppuVar17 = &ppppuStack_90;
        pppppuVar16 = (ulong *****)0xff;
        func_0x000107c3173c(&ppppuStack_3e0);
        func_0x000107c31080(apppuStack_3f0,ppppuStack_450,&ppppuStack_3e0);
        pppppuVar11 = (ulong *****)apppuStack_3f0;
        FUN_10b99fa14(&pppuStack_430,&ppppuStack_a8);
        func_0x00010b996430();
        func_0x00010b99649c();
        func_0x00010b9964d8();
      }
      pppppuVar15 = pppppuVar15 + 3;
      pppppuVar8 = pppppuVar8 + 3;
      func_0x00010b996484();
    } while (unaff_x25 == (ulong *****)0x1);
    pppppuVar8 = &ppppuStack_3c8;
    func_0x000107c2a660();
    unaff_x24 = in_x4;
    param_1 = (ulong *****)ppppuStack_440;
    goto LAB_10b99584c;
  default:
    if (((int)unaff_x22 == 0) && (bVar20 == 0x11)) {
      func_0x00010b990764();
      unaff_x19 = &ppppuStack_90;
      (*(code *)(*in_x4)[4])(&ppppuStack_90);
      func_0x000107c30f40(&ppppuStack_3c8,&ppppuStack_90);
      ppppuStack_3b8 = (ulong ****)CONCAT71(ppppuStack_3b8._1_7_,1);
      pppppuVar11 = &ppppuStack_3c8;
      func_0x00010b996420();
      func_0x00010b9963e8();
      in_x4 = pppppuVar10;
    }
    else {
      unaff_x19 = &ppppuStack_3c8;
      func_0x000107c30f3c(&ppppuStack_3c8,in_x4);
      ppppuStack_3b8 = (ulong ****)((ulong)ppppuStack_3b8 & 0xffffffffffffff00);
      pppppuVar11 = &ppppuStack_3c8;
      func_0x00010b996420();
    }
    pppppuVar8 = unaff_x19 + 1;
    goto LAB_10b9955f4;
  case 3:
    func_0x00010b9905e4();
    pppppuVar10 = in_x4 + 3;
    FUN_10b99636c(&ppppuStack_90);
    func_0x00010b996510();
    if ((bool)uVar7) {
      unaff_x19 = (ulong *****)((ulong)puStack_78 & 0xff);
      func_0x00010b9964f0();
      ppppuStack_3b8 = (ulong ****)0xa;
      ppppuStack_3c0 = (ulong ****)0x0;
      pppppuVar11 = (ulong *****)in_x4[5];
      FUN_10b995fc0(&ppppuStack_3c8);
      ppppuVar19 = (ulong ****)0x0;
      unaff_x25 = in_x4 + 6;
      do {
        if (in_x4[5] <= ppppuVar19) {
          if (((ulong)unaff_x19 & 1) == 0) {
            func_0x00010b99637c();
            ppppuStack_a0 = (ulong ****)((ulong)ppppuStack_a0 & 0xffffffffffffff00);
            func_0x00010b99638c();
          }
          else {
            pppppuVar16 = (ulong *****)ppppuStack_3c8;
            pppppuVar17 = (ulong *****)ppppuStack_3c0;
            func_0x00010b996530();
            pppppuVar11 = &ppppuStack_88;
            func_0x000107c30fb4(in_x4 + 2);
            func_0x00010b9963f0();
            ppppuStack_a0 = (ulong ****)CONCAT71(ppppuStack_a0._1_7_,1);
            func_0x00010b99638c();
            func_0x00010b9963e8();
          }
          func_0x00010b996428();
          break;
        }
        pppppuVar11 = &ppppuStack_b0;
        pppppuVar16 = unaff_x23;
        pppppuVar17 = unaff_x22;
        pppppuVar10 = unaff_x25;
        FUN_10b994d50(pppppuVar11);
        bVar20 = bStack_98;
        ppppuVar12 = ppppuStack_b0;
        if ((ulong *****)ppppuStack_b0 == (ulong *****)0x1) {
          pppppuVar11 = &ppppuStack_a8;
          func_0x000107c30fd4(&ppppuStack_3c8);
          unaff_x19 = (ulong *****)(ulong)((uint)bVar20 | (uint)unaff_x19);
        }
        else {
          func_0x000107c31084();
          pppuStack_428 = (ulong ***)0x0;
          pppuStack_430 = (ulong ***)ppppuVar19;
          func_0x000107c2793c(&UNK_10f7d0896);
          pppppuVar17 = (ulong *****)&pppuStack_430;
          pppppuVar16 = (ulong *****)0x4;
          func_0x000107c3173c(&ppppuStack_3e0);
          func_0x000107c31080(&pppuStack_408,pppppuVar11,&ppppuStack_3e0);
          pppppuVar11 = (ulong *****)&pppuStack_408;
          FUN_10b99fa14(apppuStack_3f0,&ppppuStack_a8);
          *ppppuStack_440 = (ulong ***)0x2;
          ppppuStack_440[1] = apppuStack_3f0[0];
          apppuStack_3f0[0] = (ulong ***)0x0;
          func_0x000104bda93c(apppuStack_3f0);
          func_0x000107c278f4(&pppuStack_408);
          func_0x00010b9964d8();
        }
        func_0x00010b996484();
        ppppuVar19 = (ulong ****)((long)ppppuVar19 + 1);
        unaff_x25 = unaff_x25 + 2;
        param_1 = (ulong *****)ppppuStack_440;
      } while ((ulong *****)ppppuVar12 == (ulong *****)0x1);
      func_0x00010b99648c();
    }
    else {
      pppppuVar11 = (ulong *****)&UNK_10f7d0877;
      pppppuVar16 = (ulong *****)0x1e;
      FUN_10b99fa70(&ppppuStack_3c8,&ppppuStack_88);
      param_1 = (ulong *****)ppppuStack_440;
      *ppppuStack_440 = (ulong ***)0x2;
      ppppuStack_440[1] = (ulong ***)ppppuStack_3c8;
      ppppuStack_3c8 = (ulong ****)0x0;
      func_0x000104bda93c(&ppppuStack_3c8);
    }
    pppppuVar8 = &ppppuStack_90;
    goto code_r0x00010b99565c;
  case 4:
    FUN_10b990668(&pppuStack_430,in_x4);
    in_x4 = (ulong *****)&pppuStack_430;
    FUN_10b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_80 == '\x01') {
        func_0x00010b996530();
        FUN_10b990868();
        func_0x00010b9963f0();
        ppppuStack_a0 = (ulong ****)CONCAT71(ppppuStack_a0._1_7_,1);
        func_0x00010b99638c();
        func_0x00010b9963e8();
      }
      else {
        func_0x00010b99637c();
        ppppuStack_a0 = (ulong ****)((ulong)ppppuStack_a0 & 0xffffffffffffff00);
        func_0x00010b99638c();
      }
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_90);
    }
    else {
      func_0x00010b99653c();
    }
    FUN_10b9961d4(&ppppuStack_3c8);
    pppppuVar8 = (ulong *****)&pppuStack_428;
LAB_10b9955f4:
    func_0x000107c27900();
    pppppuVar10 = in_x4;
    goto LAB_10b99584c;
  case 5:
    func_0x00010b9906a4();
    pppppuVar10 = in_x4 + 2;
    FUN_10b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if (!(bool)uVar7) break;
    pppppuVar10 = in_x4 + 4;
    FUN_10b99636c(&ppppuStack_90);
    func_0x00010b996510();
    if ((bool)uVar7) {
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_a0 & 1) == 0) && ((bStack_3d0 & 1) == 0)) {
        func_0x00010b996400();
        goto code_r0x00010b9953d0;
      }
      func_0x00010b996454();
      FUN_10b9910ac();
code_r0x00010b99561c:
      func_0x000107c30f40(&pppuStack_430,apppuStack_3f0);
      uStack_420 = 1;
      pppppuVar11 = (ulong *****)&pppuStack_430;
      func_0x00010b996420();
      func_0x00010b9963e8();
      goto code_r0x00010b995640;
    }
code_r0x00010b9958f4:
    *param_1 = (ulong ****)0x2;
    param_1[1] = ppppuStack_88;
    ppppuStack_88 = (ulong ****)0x0;
code_r0x00010b995654:
    func_0x00010b99644c();
    unaff_x24 = in_x4;
    goto code_r0x00010b995658;
  case 6:
    func_0x00010b990744();
    pppppuVar10 = in_x4 + 2;
    FUN_10b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    in_x4 = unaff_x24;
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_80 == '\x01') {
        func_0x00010b996530();
        FUN_10b9911c4();
        goto code_r0x00010b9952c4;
      }
      func_0x00010b99637c();
code_r0x00010b9955b4:
      ppppuStack_a0 = (ulong ****)((ulong)ppppuStack_a0 & 0xffffffffffffff00);
      func_0x00010b99638c();
code_r0x00010b9955bc:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_90);
      goto code_r0x00010b995658;
    }
    break;
  case 8:
    func_0x00010b9906c4();
    pppppuVar10 = in_x4 + 2;
    FUN_10b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      pppppuVar10 = in_x4 + 4;
      FUN_10b99636c(&ppppuStack_90);
      func_0x00010b996510();
      if (!(bool)uVar7) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_a0 & 1) != 0) || ((bStack_3d0 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9912a0();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
code_r0x00010b9953d0:
      uStack_420 = 0;
      pppppuVar11 = (ulong *****)&pppuStack_430;
      func_0x00010b996420();
code_r0x00010b995640:
      func_0x00010b996428();
      func_0x00010b9963c0(&ppppuStack_3e0);
      func_0x00010b9963c0(&ppppuStack_b0);
      goto code_r0x00010b995654;
    }
    break;
  case 9:
    func_0x00010b9906e4();
    pppppuVar10 = in_x4 + 2;
    FUN_10b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    in_x4 = unaff_x24;
    if ((bool)uVar7) {
      func_0x00010b9963d8();
      if ((char)ppppuStack_80 != '\x01') {
        func_0x00010b99637c();
        goto code_r0x00010b9955b4;
      }
      func_0x00010b996530();
      FUN_10b991338();
code_r0x00010b9952c4:
      func_0x00010b9963f0();
      ppppuStack_a0 = (ulong ****)CONCAT71(ppppuStack_a0._1_7_,1);
      func_0x00010b99638c();
      func_0x00010b9963e8();
      goto code_r0x00010b9955bc;
    }
    break;
  case 10:
    func_0x00010b990704();
    pppppuVar10 = in_x4 + 2;
    FUN_10b99636c(&ppppuStack_3c8);
    func_0x00010b9964cc();
    if ((bool)uVar7) {
      pppppuVar10 = in_x4 + 4;
      FUN_10b99636c(&ppppuStack_90);
      func_0x00010b996510();
      if (!(bool)uVar7) goto code_r0x00010b9958f4;
      func_0x00010b9963c8();
      func_0x00010b996410();
      if ((((ulong)ppppuStack_a0 & 1) != 0) || ((bStack_3d0 & 1) != 0)) {
        func_0x00010b996454();
        FUN_10b9913cc();
        goto code_r0x00010b99561c;
      }
      func_0x00010b996400();
      goto code_r0x00010b9953d0;
    }
  }
  func_0x00010b99653c();
  unaff_x24 = in_x4;
code_r0x00010b995658:
  pppppuVar8 = &ppppuStack_3c8;
  in_x4 = unaff_x24;
code_r0x00010b99565c:
  FUN_10b9961d4();
  unaff_x24 = in_x4;
LAB_10b99584c:
  uVar7 = *param_1 == (ulong ****)0x1;
  if ((bool)uVar7) {
    uVar18 = (uint)*(byte *)((long)ppppuStack_438 + 1);
    if (((*(byte *)((long)ppppuStack_438 + 1) & 1) != 0) &&
       ((*(byte *)((long)param_1 + 9) & 1) == 0)) {
      unaff_x19 = &ppppuStack_3c8;
      pppppuVar8 = param_1 + 1;
      FUN_10b990784(&ppppuStack_3c8);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(param_1 + 3) = 1;
      uVar18 = (uint)*(byte *)((long)ppppuStack_438 + 1);
    }
    if (((uVar18 >> 1 & 1) != 0) && ((*(byte *)((long)param_1 + 9) >> 1 & 1) == 0)) {
      unaff_x19 = &ppppuStack_3c8;
      pppppuVar8 = param_1 + 1;
      func_0x000107c30fb8(&ppppuStack_3c8);
      func_0x00010b99651c();
      func_0x00010b996428();
      *(byte *)(param_1 + 3) = 1;
    }
  }
  func_0x00010b996468(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b9961d4(&ppppuStack_90);
  pppppuVar9 = pppppuVar8;
  __Unwind_Resume();
  pppppuVar15 = (ulong *****)&pppuStack_550;
  pcStack_458 = FUN_10b995b64;
  pppppuVar14 = pppppuVar11;
  ppppuStack_4a0 = (ulong ****)param_1;
  ppppuStack_498 = (ulong ****)unaff_x25;
  ppppuStack_490 = (ulong ****)unaff_x24;
  ppppuStack_488 = (ulong ****)unaff_x23;
  ppppuStack_480 = (ulong ****)unaff_x22;
  ppppuStack_478 = (ulong ****)unaff_x21;
  ppppuStack_470 = (ulong ****)pppppuVar8;
  ppppuStack_468 = (ulong ****)unaff_x19;
  puStack_460 = &stack0xfffffffffffffff0;
  func_0x00010b996500();
  ppppuVar19 = (ulong ****)(ulong)*(byte *)((long)pppppuVar10 + 9);
  uVar7 = ppppuVar19 == (ulong ****)0xff;
  uStack_4a8 = extraout_x8_00;
  if (!(bool)uVar7) {
    pppppuVar10 = pppppuVar16;
    FUN_10b9905a4();
    if ((pppppuVar10 == (ulong *****)0x0) || (pppppuVar10[4] <= ppppuVar19)) {
      func_0x000107c31084();
      func_0x00010b98fa8c(apppuStack_530,pppppuVar16);
      ppppuVar12 = apppuStack_530;
      func_0x000107c27e5c();
      uStack_4c8 = (ulong ****)0x0;
      pppuStack_4d0 = (ulong ***)ppppuVar19;
      pppuStack_4c0 = (ulong ***)ppppuVar12;
      ppppuStack_4b8 = (ulong ****)pppppuVar14;
      func_0x000107c2793c(&UNK_10f7d099d);
      func_0x000107c3173c(apppuStack_518);
      func_0x000107c31080(&pppuStack_4d0,pppppuVar10,apppuStack_518);
      pppppuVar15 = (ulong *****)&pppuStack_4d0;
      FUN_10b99f560(apppuStack_540);
      pppuStack_4f0 = (ulong ***)0x2;
      apppuStack_4e8[0] = apppuStack_540[0];
      apppuStack_540[0] = (ulong ***)0x0;
      func_0x000104bda93c(apppuStack_540);
      func_0x00010b996494();
      func_0x00010b9964a4();
      func_0x00010b9964ac();
    }
    else {
      pppppuVar15 = pppppuVar10 + (long)ppppuVar19 * 2 + 5;
      func_0x000107c2a66c(&pppuStack_4f0);
      pppppuVar10 = unaff_x24;
    }
    uVar7 = (ulong ****)pppuStack_4f0 == (ulong ****)0x1;
    if ((bool)uVar7) {
      pppppuVar15 = pppppuVar11;
      FUN_10b994d50(&pppuStack_4d0,pppppuVar11,pppppuVar16,pppppuVar17,apppuStack_4e8);
      uVar7 = (ulong ****)pppuStack_4d0 == (ulong ****)0x1;
      if ((bool)uVar7) {
        if ((int)in_x5 == 0) {
          pppppuVar11 = (ulong *****)apppuStack_518;
          pppppuVar15 = (ulong *****)&uStack_4c8;
          func_0x000107c30f40(apppuStack_518);
          func_0x00010b996398();
        }
        else {
          pppppuVar11 = (ulong *****)apppuStack_530;
          func_0x000107c30fb8(apppuStack_530,&uStack_4c8);
          func_0x00010b9964e0();
          func_0x00010b996398();
          func_0x00010b996528();
        }
        func_0x00010b9963e8();
      }
      else {
        *pppppuVar9 = (ulong ****)0x2;
        pppppuVar9[1] = uStack_4c8;
        uStack_4c8 = (ulong ****)0x0;
      }
      FUN_10b9961d4(&pppuStack_4d0);
    }
    else {
      *pppppuVar9 = (ulong ****)0x2;
      pppppuVar9[1] = (ulong ****)apppuStack_4e8[0];
      apppuStack_4e8[0] = (ulong ***)0x0;
    }
    ppppuVar19 = &pppuStack_4f0;
    func_0x000107c2a668();
    unaff_x23 = pppppuVar16;
    goto LAB_10b995e38;
  }
  bVar20 = *(byte *)(pppppuVar10 + 1);
  pppuStack_4d0 = (ulong ***)*pppppuVar10;
  if ((ulong ****)pppuStack_4d0 == (ulong ****)0x0) {
    apppuStack_518[0] = (ulong ***)0x0;
  }
  else {
    ppppuVar19 = (ulong ****)(pppuStack_4d0 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar4) {
        *(int *)ppppuVar19 = *(int *)ppppuVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar4) {
        *(int *)ppppuVar19 = *(int *)ppppuVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      apppuStack_518[0] = pppuStack_4d0;
    } while (cVar3 != '\0');
  }
  uStack_4c8._0_2_ = CONCAT11(0xff,bVar20);
  func_0x000107c30fa8(apppuStack_540,&pppuStack_4d0);
  func_0x00010b996494();
  func_0x000107c278f4(apppuStack_518);
  if ((int)in_x5 != 0) {
    in_x5 = &pppuStack_4d0;
    FUN_10b99081c(&pppuStack_4d0,apppuStack_540);
    func_0x000107c30f90(apppuStack_540,&pppuStack_4d0);
    func_0x000107c27900(&uStack_4c8);
  }
  if ((int)pppppuVar17 == 0) {
    pppppuVar11 = (ulong *****)&pppuStack_4d0;
    func_0x000107c30f3c(&pppuStack_4d0,apppuStack_540);
    pppuStack_4c0 = (ulong ***)CONCAT71(pppuStack_4c0._1_7_,1);
    pppppuVar15 = (ulong *****)&pppuStack_4d0;
    FUN_10b9961fc(pppppuVar9);
LAB_10b995e04:
    ppppuVar19 = (ulong ****)&uStack_4c8;
    func_0x000107c27900();
  }
  else {
    if (*pppppuVar11 != (ulong ****)0x0) {
      func_0x000107c31030(&pppuStack_4d0,apppuStack_540);
      pppppuVar11 = (ulong *****)*pppppuVar11;
      ppppuVar19 = &pppuStack_4d0;
      FUN_10b993be8(&pppuStack_500);
      uVar7 = (ulong ****)pppuStack_500 == (ulong ****)0x1;
      if ((bool)uVar7) {
        pppppuVar11 = (ulong *****)apppuStack_530;
        pppppuVar15 = (ulong *****)&pppuStack_4f8;
        FUN_10b9960b0(apppuStack_530);
        func_0x00010b9964e0();
        func_0x00010b996398();
        func_0x00010b996528();
        func_0x00010b9963e8();
      }
      else {
        func_0x000107c31084();
        FUN_10b994b18(apppuStack_530,pppppuVar10);
        ppppuVar12 = apppuStack_530;
        func_0x000107c27e5c();
        pppuStack_4f0 = (ulong ***)ppppuVar12;
        apppuStack_4e8[0] = (ulong ***)ppppuVar19;
        func_0x000107c2793c(&UNK_10f7d0979);
        func_0x000107c3173c(apppuStack_518);
        pppppuVar17 = (ulong *****)&pppuStack_500;
        func_0x000107c31080(&pppuStack_550,pppppuVar11,apppuStack_518);
        FUN_10b99fa14(&pppuStack_548,&pppuStack_4f8);
        *pppppuVar9 = (ulong ****)0x2;
        pppppuVar9[1] = (ulong ****)pppuStack_548;
        pppuStack_548 = (ulong ***)0x0;
        func_0x000104bda93c(&pppuStack_548);
        func_0x000107c278f4(&pppuStack_550);
        func_0x00010b9964a4();
        func_0x00010b9964ac();
      }
      func_0x00010b9945ac(&pppuStack_500);
      goto LAB_10b995e04;
    }
    pppppuVar15 = (ulong *****)&UNK_10f7d0937;
    ppppuVar19 = &pppuStack_4d0;
    FUN_10b99f5f8();
    *pppppuVar9 = (ulong ****)0x2;
    pppppuVar9[1] = (ulong ****)pppuStack_4d0;
    pppuStack_4d0 = (ulong ***)0x0;
    func_0x000104bda93c();
  }
  func_0x00010b9963c0(apppuStack_540);
LAB_10b995e38:
  func_0x00010b996468(uStack_4a8);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&pppuStack_550);
  func_0x00010b9964a4();
  func_0x00010b9964ac();
  ppppuVar12 = &pppuStack_500;
  func_0x00010b9945ac();
  func_0x00010b9963c0(&pppuStack_4d0);
  func_0x00010b9963c0(apppuStack_540);
  func_0x00010b99647c();
  pcStack_558 = FUN_10b995fc0;
  if (ppppuVar12[2] < pppppuVar15) {
    ppppuVar13 = ppppuVar12;
    ppppuStack_590 = (ulong ****)pppppuVar10;
    ppppuStack_588 = (ulong ****)unaff_x23;
    pppuStack_580 = (ulong ***)in_x5;
    ppppuStack_578 = (ulong ****)pppppuVar17;
    ppppuStack_570 = (ulong ****)pppppuVar11;
    pppuStack_568 = (ulong ***)ppppuVar19;
    ppuStack_560 = &puStack_460;
    func_0x00010b9933d8();
    pppuVar2 = *ppppuVar12;
    pppuVar1 = pppuVar2 + (long)ppppuVar12[1] * 2;
    ppppuVar19 = ppppuVar12;
    pppuStack_5c0 = (ulong ***)ppppuVar13;
    pppuStack_5b8 = (ulong ***)ppppuVar12;
    ppppuStack_5b0 = (ulong ****)pppppuVar15;
    pppuStack_5a8 = (ulong ***)ppppuVar13;
    pppuStack_5a0 = (ulong ***)ppppuVar13;
    pppuStack_598 = (ulong ***)ppppuVar12;
    FUN_10b993538(ppppuVar12,pppuVar2,pppuVar1,ppppuVar13);
    pppuStack_5a0 = (ulong ***)ppppuVar19;
    FUN_10b993538(ppppuVar12,pppuVar1,pppuVar1,ppppuVar19);
    pppuStack_5a8 = (ulong ***)0x0;
    pppuStack_5a0 = (ulong ***)0x0;
    func_0x00010b993574(&pppuStack_5a8);
    pppuStack_5c0 = (ulong ***)0x0;
    if (pppuVar2 != (ulong ***)0x0) {
      func_0x000107c30fe0(ppppuVar12,pppuVar2,ppppuVar12[1]);
      func_0x000107c30fe4(ppppuVar12,ppppuVar12,ppppuVar12[2]);
    }
    *ppppuVar12 = (ulong ***)ppppuVar13;
    ppppuVar12[2] = (ulong ***)pppppuVar15;
    func_0x00010b9935b4(&pppuStack_5c0);
  }
  return;
}



/* Entry: 10b9965b0; end: 10b99689b;  */

void FUN_10b9965b0(undefined8 *param_1,uint ****param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint ****ppppuVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint ****ppppuVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong uVar24;
  uint ***pppuStack_b0;
  uint ***pppuStack_a8;
  uint ***apppuStack_a0 [2];
  uint ***pppuStack_90;
  uint ***pppuStack_88;
  uint ***pppuStack_80;
  undefined1 *puStack_70;
  undefined1 uStack_68;
  
  uVar12 = 0;
  pppuStack_90 = (uint ***)0x0;
  pppuStack_88 = (uint ***)0x0;
  pppuStack_80 = (uint ***)0x0;
  ppppuVar9 = param_2;
  do {
    ppppuVar15 = ppppuVar9 + 1;
    uVar12 = uVar12 + 1;
    if (param_3 <= uVar12) goto LAB_10b9966c8;
    uVar11 = *(uint *)ppppuVar9;
    ppppuVar9 = ppppuVar15;
  } while (uVar11 <= *(uint *)ppppuVar15);
  pppuStack_b0 = (uint ***)0x0;
  pppuStack_a8 = (uint ***)0x0;
  apppuStack_a0[0] = (uint ***)0x0;
  uStack_68 = 0;
  if (param_3 >> 0x3d != 0) {
    puStack_70 = (undefined1 *)&pppuStack_b0;
    FUN_10b99689c();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10b996878);
    (*pcVar6)();
  }
  ppppuVar9 = apppuStack_a0;
  uVar12 = param_3;
  puStack_70 = (undefined1 *)&pppuStack_b0;
  FUN_10b9968b0();
  apppuStack_a0[0] = (uint ***)(ppppuVar9 + uVar12);
  pppuStack_a8 = (uint ***)ppppuVar9;
  for (lVar13 = param_3 << 3; lVar13 != 0; lVar13 = lVar13 + -8) {
    *pppuStack_a8 = (uint **)*param_2;
    pppuStack_a8 = pppuStack_a8 + 1;
    param_2 = param_2 + 1;
  }
  uStack_68 = 1;
  pppuStack_b0 = (uint ***)ppppuVar9;
  FUN_10b9968f0(&puStack_70);
  if ((uint ****)pppuStack_90 != (uint ****)0x0) {
    pppuStack_88 = pppuStack_90;
    __ZdlPv();
  }
  pppuStack_88 = pppuStack_a8;
  pppuStack_90 = pppuStack_b0;
  pppuStack_80 = apppuStack_a0[0];
  pppuStack_a8 = (uint ***)0x0;
  apppuStack_a0[0] = (uint ***)0x0;
  pppuStack_b0 = (uint ***)0x0;
  FUN_10b996938(&pppuStack_b0);
  param_2 = (uint ****)pppuStack_90;
  if (pppuStack_90 != pppuStack_88) {
    FUN_10b99696c(pppuStack_90,pppuStack_88,
                  LZCOUNT((long)pppuStack_88 - (long)pppuStack_90 >> 3) << 1 ^ 0x7e,1);
    param_2 = (uint ****)pppuStack_90;
  }
LAB_10b9966c8:
  bVar8 = false;
  uVar11 = 0;
  iVar14 = 0;
  uVar23 = 0;
  uVar19 = 0;
  uVar18 = 0;
  iVar20 = 0;
  for (uVar12 = 0; uVar12 != param_3; uVar12 = uVar12 + 1) {
    for (uVar21 = *(uint *)(param_2 + uVar12); uVar21 <= *(uint *)((long)(param_2 + uVar12) + 4);
        uVar21 = uVar21 + 1) {
      bVar7 = uVar19 != uVar21 >> 8;
      uVar19 = uVar21 >> 8;
      iVar14 = iVar20 + ((uint)bVar7 | (uVar18 ^ 0xffffffff) & 1);
      if (uVar21 >> 8 <= uVar11) {
        uVar11 = uVar19;
      }
      if (!bVar8) {
        uVar11 = uVar19;
      }
      if (uVar23 <= uVar21 >> 8) {
        uVar23 = uVar19;
      }
      bVar8 = true;
      uVar18 = 1;
      iVar20 = iVar14;
    }
  }
  if (!bVar8) {
    uVar11 = 0;
  }
  uVar12 = (ulong)((uVar23 - uVar11) + 1);
  uVar24 = uVar12 * 2 + 0x29 & 0x3fffffffe;
  puVar22 = (undefined8 *)(uVar24 + (ulong)(iVar14 + 1) * 0x20 + 2 & 0x3ffffffffc);
  puVar10 = puVar22;
  __Znwm();
  _bzero();
  uVar19 = 0;
  uVar18 = 0;
  uVar17 = 0;
  lVar13 = (long)puVar10 + uVar24 + uVar12 * -2;
  lVar1 = (long)puVar10 + (long)(puVar22 + (ulong)(iVar14 + 1) * -4);
  for (uVar12 = 0; uVar12 != param_3; uVar12 = uVar12 + 1) {
    uVar3 = *(uint *)((long)(param_2 + uVar12) + 4);
    for (uVar21 = *(uint *)(param_2 + uVar12); uVar21 <= uVar3; uVar21 = uVar21 + 1) {
      bVar8 = uVar19 != uVar21 >> 8;
      uVar19 = uVar21 >> 8;
      uVar18 = (int)uVar17 + ((uint)bVar8 | (uVar18 ^ 0xffffffff) & 1);
      uVar17 = (ulong)uVar18;
      *(short *)(lVar13 + (ulong)(uVar19 - uVar11) * 2) = (short)uVar18;
      uVar5 = uVar21 >> 5 & 7;
      uVar18 = 1;
      lVar2 = lVar1 + uVar17 * 0x20;
      *(uint *)(lVar2 + (ulong)uVar5 * 4) =
           *(uint *)(lVar2 + (ulong)uVar5 * 4) | 1 << (ulong)(uVar21 & 0x1f);
    }
  }
  plVar16 = puVar10 + 1;
  *plVar16 = 1;
  *puVar10 = &PTR_DAT_110d7e028;
  *(uint *)(puVar10 + 2) = uVar11;
  *(uint *)((long)puVar10 + 0x14) = uVar23;
  puVar10[3] = lVar13;
  puVar10[4] = lVar1;
  do {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = *plVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *param_1 = puVar10;
  FUN_10b996938(&pppuStack_90);
  return;
}



/* Entry: 10b99689c; end: 10b9968af;  */

void FUN_10b99689c(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10b9968d4();
  return;
}



/* Entry: 10b9968b0; end: 10b9968d3;  */

void FUN_10b9968b0(void)

{
  FUN_10b9968d4();
  return;
}



/* Entry: 10b9968d4; end: 10b9968ef;  */

long FUN_10b9968d4(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b996920(param_1);
  }
  return param_1;
}



/* Entry: 10b9968f0; end: 10b99691f;  */

long FUN_10b9968f0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b996920(param_1);
  }
  return param_1;
}



/* Entry: 10b996920; end: 10b996937;  */

void FUN_10b996920(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b996938; end: 10b99696b;  */

undefined8 FUN_10b996938(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b996920(&uStack_28);
  return param_1;
}



/* Entry: 10b99696c; end: 10b996f5f;  */

void FUN_10b99696c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 unaff_x30;
  
  do {
    puVar9 = param_2 + -2;
    puVar8 = param_1;
LAB_10b9969a8:
    while( true ) {
      param_1 = puVar8;
      uVar11 = (long)param_2 - (long)param_1 >> 3;
      switch(uVar11) {
      case 0:
      case 1:
        goto LAB_10b996f4c;
      case 2:
        if (param_2[-2] < *param_1) {
          uVar12 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar12;
        }
        goto LAB_10b996f4c;
      case 3:
        puVar8 = param_1 + 2;
        func_0x00010b997288();
        uVar10 = *puVar8;
        if (uVar10 < *param_1) {
          uVar12 = *(undefined8 *)param_1;
          if (*puVar9 < uVar10) {
            *(undefined8 *)param_1 = *(undefined8 *)puVar9;
          }
          else {
            *(undefined8 *)param_1 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar8 = uVar12;
            if ((uint)uVar12 <= *puVar9) {
              return;
            }
            *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
          }
          *(undefined8 *)puVar9 = uVar12;
        }
        else if (*puVar9 < uVar10) {
          uVar12 = *(undefined8 *)puVar8;
          *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar9 = uVar12;
          if (*puVar8 < *param_1) {
            uVar12 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar8 = uVar12;
            return;
          }
        }
        return;
      case 4:
        func_0x00010b997288(param_1,param_1 + 2,param_1 + 4,puVar9);
        func_0x00010b997274();
        FUN_10b996f60();
        bVar5 = *puVar9 <= *param_3;
        if (((!bVar5) && (func_0x00010b997238(), !bVar5)) && (func_0x00010b997218(), !bVar5)) {
          func_0x00010b997260();
        }
        return;
      case 5:
        puVar8 = puVar9;
        func_0x00010b997288(param_1,param_1 + 2,param_1 + 4,param_1 + 6);
        func_0x00010b997274();
        FUN_10b996ff0();
        if (*puVar8 < *param_3) {
          uVar12 = *(undefined8 *)param_3;
          *(undefined8 *)param_3 = *(undefined8 *)puVar8;
          *(undefined8 *)puVar8 = uVar12;
          bVar5 = *puVar9 <= *param_3;
          if (((!bVar5) && (func_0x00010b997238(), !bVar5)) && (func_0x00010b997218(), !bVar5)) {
            func_0x00010b997260();
          }
        }
        return;
      }
      if ((long)uVar11 < 0x18) {
        if ((param_4 & 1) == 0) {
          puVar8 = param_1;
          if (param_1 != param_2) {
            while( true ) {
              param_1 = param_1 + 2;
              puVar9 = puVar8 + 2;
              if (puVar9 == param_2) break;
              puVar6 = puVar8 + 2;
              uVar10 = *puVar8;
              puVar8 = puVar9;
              if (*puVar6 < uVar10) {
                uVar12 = *(undefined8 *)puVar9;
                puVar9 = param_1;
                do {
                  puVar14 = puVar9 + -2;
                  *(undefined8 *)puVar9 = *(undefined8 *)puVar14;
                  puVar6 = puVar9 + -4;
                  puVar9 = puVar14;
                } while ((uint)uVar12 < *puVar6);
                *(undefined8 *)puVar14 = uVar12;
              }
            }
          }
          goto LAB_10b996f4c;
        }
        if (param_1 == param_2) goto LAB_10b996f4c;
        lVar16 = 0;
        puVar8 = param_1;
        goto LAB_10b996cbc;
      }
      if (param_3 == (uint *)0x0) {
        if (param_1 == param_2) goto LAB_10b996f4c;
        uVar13 = uVar11 - 2 >> 1;
        uVar15 = uVar13;
        goto LAB_10b996d38;
      }
      puVar8 = param_1 + (uVar11 & 0xfffffffffffffffe);
      if (uVar11 < 0x81) {
        func_0x00010b997258(puVar8,param_1);
      }
      else {
        func_0x00010b997258(param_1,puVar8);
        FUN_10b996f60(param_1 + 2,puVar8 + -2,param_2 + -4);
        FUN_10b996f60(param_1 + 4,puVar8 + 2,param_2 + -6);
        FUN_10b996f60(puVar8 + -2,puVar8,puVar8 + 2);
        uVar12 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar8 = uVar12;
      }
      param_3 = (uint *)((long)param_3 + -1);
      if (((param_4 & 1) != 0) || (param_1[-2] < *param_1)) break;
      uVar12 = *(undefined8 *)param_1;
      uVar10 = (uint)uVar12;
      puVar8 = param_1;
      if (uVar10 < *puVar9) {
        do {
          puVar8 = puVar8 + 2;
        } while (*puVar8 <= uVar10);
      }
      else {
        do {
          puVar8 = puVar8 + 2;
          if (param_2 <= puVar8) break;
        } while (*puVar8 <= uVar10);
      }
      puVar6 = param_2;
      if (puVar8 < param_2) {
        do {
          puVar6 = puVar6 + -2;
        } while (uVar10 < *puVar6);
      }
      while (puVar8 < puVar6) {
        uVar18 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar8 = *(undefined8 *)puVar6;
        *(undefined8 *)puVar6 = uVar18;
        do {
          puVar8 = puVar8 + 2;
        } while (*puVar8 <= uVar10);
        do {
          puVar6 = puVar6 + -2;
        } while (uVar10 < *puVar6);
      }
      puVar6 = puVar8 + -2;
      if (param_1 != puVar6) {
        *(undefined8 *)param_1 = *(undefined8 *)puVar6;
      }
      param_4 = 0;
      *(undefined8 *)puVar6 = uVar12;
    }
    lVar16 = 0;
    uVar12 = *(undefined8 *)param_1;
    do {
      lVar4 = lVar16 + 8;
      lVar16 = lVar16 + 8;
      uVar10 = (uint)uVar12;
    } while (*(uint *)((long)param_1 + lVar4) < uVar10);
    puVar6 = (uint *)((long)param_1 + lVar16);
    puVar14 = param_2;
    puVar8 = puVar6;
    if (lVar16 == 8) {
      do {
        puVar7 = puVar14;
        if (puVar14 <= puVar6) break;
        puVar14 = puVar14 + -2;
        puVar7 = puVar14;
      } while (uVar10 <= *puVar14);
    }
    else {
      do {
        puVar14 = puVar14 + -2;
        puVar7 = puVar14;
      } while (uVar10 <= *puVar14);
    }
    while (puVar8 < puVar14) {
      uVar18 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar8 = *(undefined8 *)puVar14;
      *(undefined8 *)puVar14 = uVar18;
      do {
        puVar8 = puVar8 + 2;
      } while (*puVar8 < uVar10);
      do {
        puVar14 = puVar14 + -2;
      } while (uVar10 <= *puVar14);
    }
    puVar14 = puVar8 + -2;
    if (param_1 != puVar14) {
      *(undefined8 *)param_1 = *(undefined8 *)puVar14;
    }
    *(undefined8 *)puVar14 = uVar12;
    if (puVar6 < puVar7) goto LAB_10b996b24;
    puVar6 = param_1;
    FUN_10b9970b4(param_1,puVar14);
    puVar7 = puVar8;
    FUN_10b9970b4(puVar8,param_2);
    if ((int)puVar7 == 0) goto code_r0x00010b996b20;
    param_2 = puVar14;
  } while (((ulong)puVar6 & 1) == 0);
  goto LAB_10b996f4c;
LAB_10b996cbc:
  puVar9 = puVar8 + 2;
  if (puVar9 == param_2) goto LAB_10b996f4c;
  if (puVar8[2] < *puVar8) {
    uVar12 = *(undefined8 *)puVar9;
    lVar4 = lVar16;
    do {
      lVar17 = lVar4;
      puVar1 = (undefined8 *)((long)param_1 + lVar17);
      puVar1[1] = *puVar1;
      puVar8 = param_1;
      if (lVar17 == 0) goto LAB_10b996d10;
      lVar4 = lVar17 + -8;
    } while ((uint)uVar12 < *(uint *)(puVar1 + -1));
    puVar8 = (uint *)((long)param_1 + lVar17);
LAB_10b996d10:
    *(undefined8 *)puVar8 = uVar12;
  }
  lVar16 = lVar16 + 8;
  puVar8 = puVar9;
  goto LAB_10b996cbc;
code_r0x00010b996b20:
  if (((ulong)puVar6 & 1) == 0) {
LAB_10b996b24:
    FUN_10b99696c(param_1,puVar14,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b9969a8;
LAB_10b996d38:
  do {
    if ((long)uVar15 <= (long)uVar13) {
      uVar20 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      puVar8 = param_1 + uVar20 * 2;
      uVar19 = uVar15 * 2 + 2;
      if ((long)uVar19 < (long)uVar11) {
        uVar2 = *puVar8;
        uVar3 = puVar8[2];
        uVar10 = uVar2;
        if (uVar2 <= uVar3) {
          uVar10 = uVar3;
        }
        puVar9 = puVar8 + 2;
        if (uVar3 <= uVar2) {
          puVar9 = puVar8;
          uVar19 = uVar20;
        }
      }
      else {
        uVar10 = *puVar8;
        puVar9 = puVar8;
        uVar19 = uVar20;
      }
      puVar8 = param_1 + uVar15 * 2;
      if (*puVar8 <= uVar10) {
        uVar12 = *(undefined8 *)puVar8;
        do {
          puVar6 = puVar9;
          *(undefined8 *)puVar8 = *(undefined8 *)puVar6;
          if ((long)uVar13 < (long)uVar19) break;
          uVar20 = uVar19 << 1 | 1;
          puVar8 = param_1 + uVar20 * 2;
          uVar19 = uVar19 * 2 + 2;
          if ((long)uVar19 < (long)uVar11) {
            uVar2 = *puVar8;
            uVar3 = puVar8[2];
            uVar10 = uVar2;
            if (uVar2 <= uVar3) {
              uVar10 = uVar3;
            }
            puVar9 = puVar8 + 2;
            if (uVar3 <= uVar2) {
              puVar9 = puVar8;
              uVar19 = uVar20;
            }
          }
          else {
            uVar10 = *puVar8;
            puVar9 = puVar8;
            uVar19 = uVar20;
          }
          puVar8 = puVar6;
        } while ((uint)uVar12 <= uVar10);
        *(undefined8 *)puVar6 = uVar12;
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  for (; 1 < (long)uVar11; uVar11 = uVar11 - 1) {
    uVar12 = *(undefined8 *)param_1;
    puVar8 = param_1;
    uVar15 = 0;
    do {
      uVar19 = uVar15 << 1 | 1;
      uVar13 = uVar15 * 2 + 2;
      puVar9 = puVar8 + uVar15 * 2 + 2;
      uVar20 = uVar19;
      if (((long)uVar13 < (long)uVar11) &&
         (puVar9 = puVar8 + uVar15 * 2 + 4, uVar20 = uVar13,
         puVar8[uVar15 * 2 + 4] <= puVar8[uVar15 * 2 + 2])) {
        puVar9 = puVar8 + uVar15 * 2 + 2;
        uVar20 = uVar19;
      }
      *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
      puVar8 = puVar9;
      uVar15 = uVar20;
    } while ((long)uVar20 <= (long)(uVar11 - 2 >> 1));
    param_2 = param_2 + -2;
    if (puVar9 == param_2) {
      *(undefined8 *)puVar9 = uVar12;
    }
    else {
      *(undefined8 *)puVar9 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar12;
      lVar16 = (long)puVar9 + (8 - (long)param_1) >> 3;
      if (1 < lVar16) {
        uVar15 = lVar16 - 2U >> 1;
        if (param_1[uVar15 * 2] < *puVar9) {
          uVar12 = *(undefined8 *)puVar9;
          puVar8 = param_1 + uVar15 * 2;
          do {
            puVar6 = puVar8;
            *(undefined8 *)puVar9 = *(undefined8 *)puVar6;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            puVar9 = puVar6;
            puVar8 = param_1 + uVar15 * 2;
          } while (param_1[uVar15 * 2] < (uint)uVar12);
          *(undefined8 *)puVar6 = uVar12;
        }
      }
    }
  }
LAB_10b996f4c:
  func_0x00010b997288(unaff_x30);
  return;
}



/* Entry: 10b996f60; end: 10b996fef;  */

void FUN_10b996f60(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    uVar2 = *(undefined8 *)param_1;
    if (*param_3 < uVar1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar2;
      if ((uint)uVar2 <= *param_3) {
        return;
      }
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_3 = uVar2;
  }
  else if (*param_3 < uVar1) {
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar2;
    if (*param_2 < *param_1) {
      uVar2 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar2;
      return;
    }
  }
  return;
}



/* Entry: 10b996ff0; end: 10b99703b;  */

void FUN_10b996ff0(void)

{
  bool bVar1;
  uint *unaff_x21;
  uint *unaff_x22;
  
  func_0x00010b997274();
  FUN_10b996f60();
  bVar1 = *unaff_x21 <= *unaff_x22;
  if (((!bVar1) && (func_0x00010b997238(), !bVar1)) && (func_0x00010b997218(), !bVar1)) {
    func_0x00010b997260();
  }
  return;
}



/* Entry: 10b99703c; end: 10b9970b3;  */

void FUN_10b99703c(void)

{
  bool bVar1;
  uint *in_x4;
  undefined8 uVar2;
  uint *unaff_x21;
  uint *unaff_x22;
  
  func_0x00010b997274();
  FUN_10b996ff0();
  if (*in_x4 < *unaff_x22) {
    uVar2 = *(undefined8 *)unaff_x22;
    *(undefined8 *)unaff_x22 = *(undefined8 *)in_x4;
    *(undefined8 *)in_x4 = uVar2;
    bVar1 = *unaff_x21 <= *unaff_x22;
    if (((!bVar1) && (func_0x00010b997238(), !bVar1)) && (func_0x00010b997218(), !bVar1)) {
      func_0x00010b997260();
    }
  }
  return;
}



/* Entry: 10b9970b4; end: 10b997217;  */

bool FUN_10b9970b4(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (param_2[-2] < *param_1) {
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar5;
      return true;
    }
    return true;
  case 3:
    FUN_10b996f60(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_10b996ff0(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_10b99703c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    func_0x00010b997258(param_1,param_1 + 2);
    lVar2 = 0;
    iVar3 = 0;
    puVar7 = param_1 + 6;
    puVar8 = param_1 + 4;
    while (puVar4 = puVar7, puVar4 != param_2) {
      if (*puVar4 < *puVar8) {
        uVar5 = *(undefined8 *)puVar4;
        lVar1 = lVar2;
        do {
          lVar6 = lVar1;
          *(undefined8 *)((long)param_1 + lVar6 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x10);
          puVar7 = param_1;
          if (lVar6 == -0x10) goto LAB_10b9971c0;
          lVar1 = lVar6 + -8;
        } while ((uint)uVar5 < *(uint *)((long)param_1 + lVar6 + 8));
        puVar7 = (uint *)((long)param_1 + lVar6 + 0x10);
LAB_10b9971c0:
        *(undefined8 *)puVar7 = uVar5;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return puVar4 + 2 == param_2;
        }
      }
      lVar2 = lVar2 + 8;
      puVar8 = puVar4;
      puVar7 = puVar4 + 2;
    }
  }
  return true;
}



/* Entry: 10b997218; end: 10b99729f;  */

void FUN_10b997218(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  
  uVar1 = *unaff_x19;
  *unaff_x19 = *unaff_x21;
  *unaff_x21 = uVar1;
  return;
}



/* Entry: 10b9972a0; end: 10b997437;  */

void FUN_10b9972a0(void)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong unaff_x19;
  ulong uStack_38;
  
  func_0x00010b997df0();
  func_0x00010b997de0(&PTR___tlv_bootstrap_11340e140);
  func_0x00010b997db4();
  uStack_38 = 0;
  uVar1 = extraout_x8;
  while (uVar1 < unaff_x19) {
    func_0x00010b997dfc();
    func_0x00010b9972f8();
    uVar1 = uStack_38;
  }
  return;
}



/* Entry: 10b997438; end: 10b9974ab;  */

uint FUN_10b997438(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_2;
  uVar2 = *(ushort *)(param_1 + lVar5 * 2);
  uVar3 = (uint)uVar2;
  uVar1 = uVar2 & 0xfc00;
  if (uVar1 == 0xdc00) {
LAB_10b997498:
    uVar3 = 0xfffd;
  }
  else if (uVar1 == 0xd800) {
    if ((lVar5 + 1U < param_3) &&
       (uVar3 = (uint)*(ushort *)(param_1 + (lVar5 + 1U) * 2), (uVar3 & 0xfc00) == 0xdc00)) {
      uVar3 = uVar3 + (uint)uVar2 * 0x400 + 0xfca02400;
      lVar4 = 2;
      goto LAB_10b9974a0;
    }
    goto LAB_10b997498;
  }
  lVar4 = 1;
LAB_10b9974a0:
  *param_2 = lVar4 + lVar5;
  return uVar3;
}



/* Entry: 10b9974ac; end: 10b997563;  */

void FUN_10b9974ac(void)

{
  undefined **ppuVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong unaff_x19;
  undefined **unaff_x21;
  ulong uStack_50;
  
  func_0x00010b997df0();
  ppuVar1 = &PTR___tlv_bootstrap_11340e158;
  func_0x00010b997de0();
  func_0x00010b997db4();
  uStack_50 = 0;
  uVar2 = extraout_x8;
  while (uVar2 < unaff_x19) {
    func_0x00010b997e34();
    if (((ulong)ppuVar1 & 0xffff0000) != 0) {
      FUN_10b9979c8();
    }
    ppuVar1 = unaff_x21;
    FUN_10b9979c8();
    uVar2 = uStack_50;
  }
  func_0x00010b997e80();
  return;
}



/* Entry: 10b997564; end: 10b9976d7;  */

uint FUN_10b997564(long param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = *param_2;
  pbVar1 = (byte *)(param_1 + lVar4);
  uVar5 = (uint)*pbVar1;
  if (-1 < (char)*pbVar1) {
    uVar7 = 1;
    goto LAB_10b997590;
  }
  if (0xbf < uVar5) {
    if (uVar5 < 0xe0) {
      if (lVar4 + 1U < param_3) {
        uVar6 = (uint)*(byte *)(param_1 + lVar4 + 1U);
        bVar3 = 0x7f < (uVar5 & 0x1f) << 6;
        uVar8 = 0xffffffff;
        if (bVar3) {
          uVar8 = 2;
        }
        uVar2 = 0;
        if (bVar3) {
          uVar2 = uVar6 & 0x3f | (uVar5 & 0x1f) << 6;
        }
        bVar3 = (uVar6 & 0xc0) == 0x80;
        uVar7 = 0xffffffff;
        if (bVar3) {
          uVar7 = uVar8;
        }
        uVar5 = 0;
        if (bVar3) {
          uVar5 = uVar2;
        }
        goto LAB_10b997590;
      }
    }
    else if (uVar5 < 0xf0) {
      if ((lVar4 + 2U < param_3) && (((int)(char)pbVar1[1] & 0xc0U) == 0x80)) {
        uVar6 = (uint)*(byte *)(param_1 + lVar4 + 2U);
        uVar5 = (uVar5 & 0xf) << 0xc | ((int)(char)pbVar1[1] & 0x3fU) << 6;
        uVar8 = 0xffffffff;
        if (0x7ff < uVar5) {
          uVar8 = 3;
        }
        uVar2 = 0;
        if (0x7ff < uVar5) {
          uVar2 = uVar5 | uVar6 & 0x3f;
        }
        bVar3 = (uVar6 & 0xc0) == 0x80;
        uVar7 = 0xffffffff;
        if (bVar3) {
          uVar7 = uVar8;
        }
        uVar5 = 0;
        if (bVar3) {
          uVar5 = uVar2;
        }
        goto LAB_10b997590;
      }
    }
    else if ((((uVar5 < 0xf8) && (lVar4 + 3U < param_3)) && (((int)(char)pbVar1[1] & 0xc0U) == 0x80)
             ) && ((((int)(char)pbVar1[2] & 0xc0U) == 0x80 &&
                   (uVar6 = (uint)*(byte *)(param_1 + lVar4 + 3U), (uVar6 & 0xc0) == 0x80)))) {
      uVar2 = (uVar5 & 0xf) << 0x12 | ((int)(char)pbVar1[1] & 0x3fU) << 0xc;
      bVar3 = 0xffefffff < uVar2 - 0x110000;
      uVar7 = 0xffffffff;
      if (bVar3) {
        uVar7 = 4;
      }
      uVar5 = 0;
      if (bVar3) {
        uVar5 = uVar6 & 0x3f | ((int)(char)pbVar1[2] & 0x3fU) << 6 | uVar2;
      }
      goto LAB_10b997590;
    }
  }
  uVar7 = 0xffffffff;
  uVar5 = 0;
LAB_10b997590:
  uVar8 = uVar7 & 0x7fffffff;
  bVar3 = uVar7 >> 0x1f != 0;
  if (bVar3) {
    uVar8 = 1;
  }
  if (bVar3) {
    uVar5 = 0xfffd;
  }
  *param_2 = uVar8 + lVar4;
  return uVar5;
}



/* Entry: 10b9976d8; end: 10b99772f;  */

void FUN_10b9976d8(void)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong unaff_x19;
  ulong uStack_38;
  
  func_0x00010b997df0();
  func_0x00010b997de0(&PTR___tlv_bootstrap_11340e170);
  func_0x00010b997db4();
  uStack_38 = 0;
  uVar1 = extraout_x8;
  while (uVar1 < unaff_x19) {
    func_0x00010b997e34();
    func_0x00010b997e0c();
    uVar1 = uStack_38;
  }
  func_0x00010b997e80();
  return;
}



/* Entry: 10b997730; end: 10b997767;  */

undefined4 * FUN_10b997730(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  func_0x00010b997e6c();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10b997bc8();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 10b997768; end: 10b99786f;  */

void FUN_10b997768(void)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong unaff_x19;
  ulong uStack_38;
  
  func_0x00010b997df0();
  func_0x00010b997de0(&PTR___tlv_bootstrap_11340e188);
  func_0x00010b997db4();
  uStack_38 = 0;
  uVar1 = extraout_x8;
  while (uVar1 < unaff_x19) {
    func_0x00010b997dfc();
    func_0x00010b997e0c();
    uVar1 = uStack_38;
  }
  func_0x00010b997e80();
  return;
}



/* Entry: 10b997870; end: 10b997937;  */

long FUN_10b997870(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = 1;
    if (*(short *)(param_1 + 2) != 0) {
      lVar1 = 2;
    }
    lVar2 = lVar1 + lVar2;
    param_1 = param_1 + 4;
  }
  return lVar2;
}



/* Entry: 10b997938; end: 10b99798b;  */

void FUN_10b997938(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  func_0x00010b997d24(param_1,param_3 - param_5);
  lVar1 = 0;
  for (lVar2 = 0; param_5 != lVar2; lVar2 = lVar2 + 1) {
    if (0xffff < *(uint *)(param_4 + lVar2 * 4)) {
      *(long *)(*param_1 + lVar1 * 8) = lVar2;
      lVar1 = lVar1 + 1;
    }
  }
  return;
}



/* Entry: 10b99798c; end: 10b9979c7;  */

ulong FUN_10b99798c(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_2 - param_1[2];
  for (lVar3 = 0;
      (uVar2 = uVar1, param_1[2] != lVar3 &&
      (uVar2 = param_2, *(ulong *)(*param_1 + lVar3 * 8) < param_2)); lVar3 = lVar3 + 1) {
    param_2 = param_2 - 1;
  }
  return uVar2;
}



/* Entry: 10b9979c8; end: 10b9979ff;  */

undefined2 * FUN_10b9979c8(undefined2 *param_1,undefined2 *param_2)

{
  undefined1 in_CY;
  undefined2 *puVar1;
  undefined2 *unaff_x19;
  
  func_0x00010b997e6c();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10b997a00();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined2 **)(unaff_x19 + 4) = puVar1;
  return puVar1 + -1;
}



/* Entry: 10b997a00; end: 10b997a67;  */

undefined8 FUN_10b997a00(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined2 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined2 *puStack_38;
  
  func_0x00010b997e8c();
  FUN_10b997a68();
  func_0x00010b997e24();
  FUN_10b997b30(auStack_48);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x00010b997e40();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b997e1c();
  return uVar1;
}



/* Entry: 10b997a68; end: 10b997a9f;  */

ulong FUN_10b997a68(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if (-1 < (long)param_2) {
    uVar2 = param_1[2] - *param_1;
    uVar1 = uVar2;
    if (uVar2 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffffd < uVar2) {
      uVar1 = 0x7fffffffffffffff;
    }
    return uVar1;
  }
  FUN_10b997b1c();
  func_0x00010b997df0();
  uVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar1 = uVar2;
  _memcpy(uVar2);
  unaff_x19[1] = uVar2;
  uVar3 = *unaff_x20;
  unaff_x20[1] = uVar3;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar3;
  uVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar3;
  uVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar3;
  *unaff_x19 = unaff_x19[1];
  return uVar1;
}



/* Entry: 10b997aa0; end: 10b997b1b;  */

void FUN_10b997aa0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b997df0();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b997b1c; end: 10b997b2f;  */

long * FUN_10b997b1c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f7d09db;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107407b7c();
  }
  lVar1 = param_4 + param_3 * 2;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 2;
  return plVar2;
}



/* Entry: 10b997b30; end: 10b997ba3;  */

long * FUN_10b997b30(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107407b7c();
  }
  lVar1 = param_4 + param_3 * 2;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 2;
  return param_1;
}



/* Entry: 10b997ba4; end: 10b997bc7;  */

void FUN_10b997ba4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -2;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b997bc8; end: 10b997c3f;  */

undefined8 FUN_10b997bc8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  func_0x00010b997e8c();
  func_0x000107c28430();
  func_0x00010b997e24();
  func_0x000107c28438(auStack_48);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x000107c28434();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107c2843c(auStack_48);
  return uVar1;
}



/* Entry: 10b997c40; end: 10b997cff;  */

void FUN_10b997c40(long *param_1,ulong param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  undefined2 *puStack_48;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 1)) {
    puVar2 = (undefined2 *)param_1[1];
    puVar1 = puVar2;
    for (lVar3 = param_2 << 1; lVar3 != 0; lVar3 = lVar3 + -2) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = (long)(puVar2 + param_2);
    return;
  }
  FUN_10b997a68(param_1,param_2 + (param_1[1] - *param_1 >> 1));
  func_0x00010b997e24();
  FUN_10b997b30(auStack_58);
  puVar1 = puStack_48 + param_2;
  for (lVar3 = param_2 << 1; lVar3 != 0; lVar3 = lVar3 + -2) {
    *puStack_48 = 0;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x00010b997e40();
  func_0x00010b997e1c();
  return;
}



/* Entry: 10b997d00; end: 10b997d2f;  */

void FUN_10b997d00(long param_1,long param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined2 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 1; lVar3 != 0; lVar3 = lVar3 + -2) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 10b997d30; end: 10b997db3;  */

undefined8 * FUN_10b997d30(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  func_0x00010b997d5c();
  return param_1;
}



/* Entry: 10b997db4; end: 10b997eb3;  */

void FUN_10b997db4(undefined8 *param_1)

{
  param_1[1] = *param_1;
  return;
}



/* Entry: 10b997eb4; end: 10b997fa3;  */

undefined1 *
FUN_10b997eb4(undefined1 *param_1,undefined1 *param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uStack_54;
  
  if (param_3 == param_5) {
    *param_2 = 1;
    param_1 = param_2;
  }
  else {
    uStack_54 = *(undefined4 *)(param_4 + param_3 * 4);
    puVar1 = param_2 + 0x30;
    puVar2 = &uStack_54;
    func_0x00010b998300(puVar1,puVar2);
    if ((undefined1 *)(*(long *)(param_2 + 0x30) + *(long *)(param_2 + 0x48)) == puVar1) {
      func_0x00010b998328(param_2 + 0x60,0);
      puVar2 = (undefined4 *)(param_2 + 0x30);
      FUN_10b998374(puVar2,&uStack_54);
      lVar3 = param_4;
      for (uVar4 = 0; uVar4 <= param_3; uVar4 = uVar4 + 1) {
        func_0x00010b99839c(puVar2 + 2,lVar3);
        lVar3 = lVar3 + 4;
      }
    }
    else {
      puVar2 = puVar2 + 2;
    }
    FUN_10b997eb4(param_1,puVar2,param_3 + 1,param_4,param_5);
  }
  return param_1;
}



/* Entry: 10b997fa4; end: 10b997fcb;  */

void FUN_10b997fa4(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  func_0x00010b997ea0(param_1,&uStack_14,1);
  return;
}



/* Entry: 10b997fcc; end: 10b998047;  */

undefined4 * FUN_10b997fcc(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_34;
  
  puVar3 = (undefined4 *)0x0;
  while( true ) {
    puVar4 = puVar3;
    if (param_2 == param_3) {
      return puVar4;
    }
    puVar3 = param_2 + 1;
    uStack_34 = *param_2;
    uVar1 = *(ulong *)(param_1 + 0x60);
    func_0x00010b99656c();
    if ((uVar1 & 1) == 0) break;
    puVar2 = &uStack_34;
    FUN_10b998048(param_1 + 0x30);
    param_1 = (char *)(puVar2 + 2);
    param_2 = puVar3;
    puVar3 = puVar2 + 4;
    if (*param_1 == '\0') {
      puVar3 = puVar4;
    }
  }
  return puVar4;
}



/* Entry: 10b998048; end: 10b99806f;  */

long FUN_10b998048(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x00010b998e78();
  plVar1 = unaff_x20;
  FUN_10b9984f4();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b998070; end: 10b998077;  */

void FUN_10b998070(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    puStack_a0 = (undefined8 **)0x0;
    ppuStack_98 = (undefined8 ***)0x0;
    ppuStack_90 = (undefined8 ***)0x0;
    func_0x00010812e64c(&puStack_a0,*(undefined8 *)(param_1 + 0x40));
    lVar11 = *(long *)(param_1 + 0x30);
    puVar7 = *(undefined4 **)(param_1 + 0x38);
    FUN_10b9982a0();
    lVar9 = *(long *)(param_1 + 0x30);
    lVar10 = *(long *)(param_1 + 0x48);
    lStack_b0 = lVar11;
    puStack_a8 = puVar7;
    while (puVar7 = puStack_a8, lStack_b0 != lVar9 + lVar10) {
      if (ppuStack_98 < ppuStack_90) {
        uVar3 = *puStack_a8;
        *(undefined4 *)ppuStack_98 = uVar3;
        *(undefined4 *)((long)ppuStack_98 + 4) = uVar3;
        pppuVar5 = (undefined8 ***)(ppuStack_98 + 1);
      }
      else {
        lVar13 = (long)ppuStack_98 - (long)puStack_a0;
        lVar11 = lVar13 >> 3;
        uVar1 = lVar11 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10b99689c();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b998278);
          (*pcVar4)();
        }
        uVar12 = (long)ppuStack_90 - (long)puStack_a0 >> 2;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_90 - (long)puStack_a0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppuStack_68 = &ppuStack_90;
        if (uVar12 == 0) {
          pppuVar5 = (undefined8 ***)0x0;
          lVar8 = lVar13;
        }
        else {
          pppuVar5 = &ppuStack_90;
          FUN_10b9968b0();
          lVar11 = (long)ppuStack_98 - (long)puStack_a0 >> 3;
          lVar8 = (long)ppuStack_98 - (long)puStack_a0;
        }
        puVar2 = (undefined4 *)((long)pppuVar5 + lVar13);
        ppuStack_70 = pppuVar5 + uVar12;
        uVar3 = *puVar7;
        ppuStack_88 = pppuVar5;
        puStack_80 = (undefined8 *)puVar2;
        *puVar2 = uVar3;
        puVar2[1] = uVar3;
        ppuStack_78 = (undefined8 **)(puVar2 + 2);
        _memcpy(puVar2 + lVar11 * -2,puStack_a0,lVar8);
        pppuVar5 = (undefined8 ***)ppuStack_78;
        ppuVar6 = ppuStack_90;
        ppuStack_90 = ppuStack_70;
        ppuStack_98 = ppuStack_78;
        ppuStack_78 = (undefined8 **)puStack_a0;
        ppuStack_70 = ppuVar6;
        ppuStack_88 = (undefined8 **)puStack_a0;
        puStack_80 = puStack_a0;
        puStack_a0 = (undefined8 *)(puVar2 + lVar11 * -2);
        func_0x00010812eb4c(&ppuStack_88);
      }
      ppuStack_98 = pppuVar5;
      FUN_10b9982c8(&lStack_b0);
    }
    FUN_10b9965b0(&ppuStack_88,puStack_a0,(long)ppuStack_98 - (long)puStack_a0 >> 3);
    func_0x000108137158((long *)(param_1 + 0x60),&ppuStack_88);
    func_0x000108137494(&ppuStack_88);
    FUN_10b996938(&puStack_a0);
  }
  ppuVar6 = *(undefined8 ***)(param_1 + 0x30);
  lVar11 = *(long *)(param_1 + 0x38);
  FUN_10b9982a0();
  lVar9 = *(long *)(param_1 + 0x30);
  lVar10 = *(long *)(param_1 + 0x48);
  ppuStack_88 = ppuVar6;
  puStack_80 = (undefined8 *)lVar11;
  while (ppuStack_88 != (undefined8 **)(lVar9 + lVar10)) {
    FUN_10b998078(param_1,(long)puStack_80 + 8);
    FUN_10b9982c8(&ppuStack_88);
  }
  return;
}



/* Entry: 10b998078; end: 10b99829f;  */

void FUN_10b998078(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  
  if (*(long *)(param_2 + 0x60) == 0) {
    puStack_a0 = (undefined8 **)0x0;
    ppuStack_98 = (undefined8 ***)0x0;
    ppuStack_90 = (undefined8 ***)0x0;
    func_0x00010812e64c(&puStack_a0,*(undefined8 *)(param_2 + 0x40));
    lVar11 = *(long *)(param_2 + 0x30);
    puVar7 = *(undefined4 **)(param_2 + 0x38);
    FUN_10b9982a0();
    lVar9 = *(long *)(param_2 + 0x30);
    lVar10 = *(long *)(param_2 + 0x48);
    lStack_b0 = lVar11;
    puStack_a8 = puVar7;
    while (puVar7 = puStack_a8, lStack_b0 != lVar9 + lVar10) {
      if (ppuStack_98 < ppuStack_90) {
        uVar3 = *puStack_a8;
        *(undefined4 *)ppuStack_98 = uVar3;
        *(undefined4 *)((long)ppuStack_98 + 4) = uVar3;
        pppuVar5 = (undefined8 ***)(ppuStack_98 + 1);
      }
      else {
        lVar13 = (long)ppuStack_98 - (long)puStack_a0;
        lVar11 = lVar13 >> 3;
        uVar1 = lVar11 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10b99689c();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b998278);
          (*pcVar4)();
        }
        uVar12 = (long)ppuStack_90 - (long)puStack_a0 >> 2;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_90 - (long)puStack_a0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppuStack_68 = &ppuStack_90;
        if (uVar12 == 0) {
          pppuVar5 = (undefined8 ***)0x0;
          lVar8 = lVar13;
        }
        else {
          pppuVar5 = &ppuStack_90;
          FUN_10b9968b0();
          lVar11 = (long)ppuStack_98 - (long)puStack_a0 >> 3;
          lVar8 = (long)ppuStack_98 - (long)puStack_a0;
        }
        puVar2 = (undefined4 *)((long)pppuVar5 + lVar13);
        ppuStack_70 = pppuVar5 + uVar12;
        uVar3 = *puVar7;
        ppuStack_88 = pppuVar5;
        puStack_80 = (undefined8 *)puVar2;
        *puVar2 = uVar3;
        puVar2[1] = uVar3;
        ppuStack_78 = (undefined8 **)(puVar2 + 2);
        _memcpy(puVar2 + lVar11 * -2,puStack_a0,lVar8);
        pppuVar5 = (undefined8 ***)ppuStack_78;
        ppuVar6 = ppuStack_90;
        ppuStack_90 = ppuStack_70;
        ppuStack_98 = ppuStack_78;
        ppuStack_78 = (undefined8 **)puStack_a0;
        ppuStack_70 = ppuVar6;
        ppuStack_88 = (undefined8 **)puStack_a0;
        puStack_80 = puStack_a0;
        puStack_a0 = (undefined8 *)(puVar2 + lVar11 * -2);
        func_0x00010812eb4c(&ppuStack_88);
      }
      ppuStack_98 = pppuVar5;
      FUN_10b9982c8(&lStack_b0);
    }
    FUN_10b9965b0(&ppuStack_88,puStack_a0,(long)ppuStack_98 - (long)puStack_a0 >> 3);
    func_0x000108137158((long *)(param_2 + 0x60),&ppuStack_88);
    func_0x000108137494(&ppuStack_88);
    FUN_10b996938(&puStack_a0);
  }
  ppuVar6 = *(undefined8 ***)(param_2 + 0x30);
  lVar11 = *(long *)(param_2 + 0x38);
  FUN_10b9982a0();
  lVar9 = *(long *)(param_2 + 0x30);
  lVar10 = *(long *)(param_2 + 0x48);
  ppuStack_88 = ppuVar6;
  puStack_80 = (undefined8 *)lVar11;
  while (ppuStack_88 != (undefined8 **)(lVar9 + lVar10)) {
    FUN_10b998078(param_1,(long)puStack_80 + 8);
    FUN_10b9982c8(&ppuStack_88);
  }
  return;
}



/* Entry: 10b9982a0; end: 10b9982c7;  */

undefined1  [16] FUN_10b9982a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b9985b8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b9982c8; end: 10b998373;  */

long * FUN_10b9982c8(long *param_1)

{
  param_1[1] = param_1[1] + 0x70;
  *param_1 = *param_1 + 1;
  FUN_10b9985b8();
  return param_1;
}



/* Entry: 10b998374; end: 10b9983f3;  */

long FUN_10b998374(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b998614(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b9983f4; end: 10b99847b;  */

long FUN_10b9983f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000108137494(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*(long *)(param_1 + 0x30) + lVar2)) {
        FUN_10b9983f4(*(long *)(param_1 + 0x38) + lVar3);
        lVar1 = *(long *)(param_1 + 0x48);
      }
      lVar3 = lVar3 + 0x70;
    }
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined **)(param_1 + 0x30) = &UNK_10dd5b8b0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_10b8b04dc(param_1 + 8);
  return param_1;
}



/* Entry: 10b99847c; end: 10b99849f;  */

void FUN_10b99847c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b998598(&lStack_18);
  return;
}



/* Entry: 10b9984a0; end: 10b9984f3;  */

long FUN_10b9984a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b9984f4();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b9984f4; end: 10b998597;  */

bool FUN_10b9984f4(long *param_1,int *param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = 0;
  uVar6 = param_3 >> 7;
  uVar4 = param_1[3];
  lVar5 = *param_1;
  while( true ) {
    uVar6 = uVar6 & uVar4;
    uVar8 = *(ulong *)(lVar5 + uVar6);
    uVar7 = uVar8 ^ (param_3 & 0x7f) * 0x101010101010101;
    iVar1 = *param_2;
    for (uVar7 = uVar7 + 0xfefefefefefefeff & (uVar7 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar4;
      *param_4 = uVar2;
      if (*(int *)(param_1[1] + uVar2 * 0x70) == iVar1) goto LAB_10b99858c;
    }
    if ((uVar8 & ~uVar8 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
LAB_10b99858c:
  return uVar7 != 0;
}



/* Entry: 10b998598; end: 10b9985b7;  */

void FUN_10b998598(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_2);
  return;
}



/* Entry: 10b9985b8; end: 10b998613;  */

void FUN_10b9985b8(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x70;
  }
  return;
}



/* Entry: 10b998614; end: 10b998843;  */

void FUN_10b998614(long *param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined1 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  plVar2 = param_2;
  FUN_10b99847c();
  lVar7 = 0;
  uVar9 = (ulong)plVar2 >> 7;
  lVar4 = *param_2;
  while( true ) {
    uVar9 = uVar9 & param_2[3];
    uVar12 = *(ulong *)(lVar4 + uVar9);
    uVar10 = uVar12 ^ ((ulong)plVar2 & 0x7f) * 0x101010101010101;
    for (uVar10 = uVar10 + 0xfefefefefefefeff & (uVar10 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar11 = param_2[1];
      plVar3 = (long *)(uVar9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2[3]);
      if (*(int *)(lVar11 + (long)plVar3 * 0x70) == *param_3) {
        uVar6 = 0;
        goto LAB_10b9986d0;
      }
    }
    if ((uVar12 & ~uVar12 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar9 = lVar7 + uVar9;
  }
  plVar3 = param_2;
  func_0x00010b99877c(param_2,plVar2);
  piVar5 = (int *)(param_2[1] + (long)plVar3 * 0x70);
  *piVar5 = *param_3;
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  piVar5[8] = 0;
  piVar5[9] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  piVar5[0x10] = 0;
  piVar5[0x11] = 0;
  piVar5[0xe] = 0;
  piVar5[0xf] = 0;
  piVar5[0x14] = 0;
  piVar5[0x15] = 0;
  piVar5[0x12] = 0;
  piVar5[0x13] = 0;
  piVar8 = piVar5 + 10;
  piVar5[0xc] = 0;
  piVar5[0xd] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(int **)(piVar5 + 4) = piVar8;
  piVar5[8] = 4;
  piVar5[9] = 0;
  *(undefined **)(piVar5 + 0xe) = &UNK_10dd5b8b0;
  piVar5[0x10] = 0;
  piVar5[0x11] = 0;
  piVar5[0x12] = 0;
  piVar5[0x13] = 0;
  piVar5[0x14] = 0;
  piVar5[0x15] = 0;
  piVar5[0x18] = 0;
  piVar5[0x19] = 0;
  piVar5[0x1a] = 0;
  piVar5[0x1b] = 0;
  piVar5[0x16] = 0;
  piVar5[0x17] = 0;
  *(byte *)(*param_2 + (long)plVar3) = (byte)plVar2 & 0x7f;
  FUN_10b998e60();
  lVar4 = *param_2;
  lVar11 = param_2[1];
  uVar6 = 1;
LAB_10b9986d0:
  *param_1 = lVar4 + (long)plVar3;
  param_1[1] = lVar11 + (long)plVar3 * 0x70;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b998844; end: 10b998883;  */

ulong FUN_10b998844(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b998884; end: 10b998b83;  */

void FUN_10b998884(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x70;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b998b84();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b998844(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b998ba4(param_1[1] + lVar4 * 0x70,lVar5);
    }
    lVar5 = lVar5 + 0x70;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b998b84; end: 10b998ba3;  */

void FUN_10b998b84(undefined4 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b998ba4; end: 10b998d03;  */

undefined4 * FUN_10b998ba4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  puVar1 = param_1 + 10;
  plVar9 = (long *)(param_1 + 4);
  *plVar9 = (long)puVar1;
  puVar7 = *(undefined4 **)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 4;
  *(undefined8 *)(param_1 + 6) = 0;
  if (param_2 + 10 == puVar7) {
    uVar8 = *(ulong *)(param_2 + 6);
    if (uVar8 < 5) {
      if (uVar8 != 0) {
        func_0x00010b998e90(puVar1);
      }
    }
    else {
      plVar2 = plVar9;
      func_0x00010b8affdc(plVar9,uVar8);
      if (((undefined4 *)*plVar9 != (undefined4 *)0x0) &&
         (*(undefined8 *)(param_1 + 6) = 0, puVar1 != (undefined4 *)*plVar9)) {
        __ZdlPv();
      }
      *(undefined8 *)(param_1 + 6) = 0;
      *(ulong *)(param_1 + 8) = uVar8;
      *(long **)(param_1 + 4) = plVar2;
      if (plVar2 == (long *)0x0) {
        lVar5 = 0;
        lVar3 = 0;
      }
      else {
        func_0x00010b998e90(plVar2);
        lVar3 = (long)plVar2 + uVar8 * 4;
        lVar5 = *(long *)(param_1 + 6);
      }
      uVar8 = lVar5 + (lVar3 - (long)plVar2 >> 2);
    }
    *(ulong *)(param_1 + 6) = uVar8;
    *(undefined8 *)(param_2 + 6) = 0;
  }
  else {
    *(undefined4 **)(param_1 + 4) = puVar7;
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = uVar4;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined **)(param_2 + 0xe) = &UNK_10dd5b8b0;
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  *(undefined8 *)(param_1 + 0xe) = uVar10;
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  func_0x000108137494(param_2 + 0x1a);
  lVar3 = *(long *)(param_2 + 0x14);
  if (lVar3 != 0) {
    lVar6 = 8;
    for (lVar5 = 0; lVar5 != lVar3; lVar5 = lVar5 + 1) {
      if (-1 < *(char *)(*(long *)(param_2 + 0xe) + lVar5)) {
        FUN_10b9983f4(*(long *)(param_2 + 0x10) + lVar6);
        lVar3 = *(long *)(param_2 + 0x14);
      }
      lVar6 = lVar6 + 0x70;
    }
    __ZdlPv();
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined **)(param_2 + 0xe) = &UNK_10dd5b8b0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
  }
  FUN_10b8b04dc(param_2 + 4);
  return param_2 + 2;
}



/* Entry: 10b998d04; end: 10b998e5f;  */

void FUN_10b998d04(long *param_1,long *param_2,long param_3,long param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar6 = *param_2;
  plVar3 = param_2;
  FUN_10b8aff74(param_2,param_4);
  plVar4 = param_2;
  func_0x00010b8affdc(param_2,plVar3);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  plVar5 = plVar4;
  plStack_70 = param_2;
  plStack_68 = plVar3;
  if (((lVar1 != 0) && (plVar4 != (long *)0x0)) && (lVar1 != param_3)) {
    _memmove(plVar4,lVar1,param_3 - lVar1);
    plVar5 = (long *)((long)plVar4 + (param_3 - lVar1));
  }
  *(undefined4 *)plVar5 = *param_5;
  if ((param_3 != 0) && (lVar2 = lVar1 + lVar2 * 4, param_3 != lVar2)) {
    _memmove((long)plVar5 + param_4 * 4,param_3,lVar2 - param_3);
  }
  uStack_78 = 0;
  if (lVar1 != 0) {
    FUN_10b8b0010(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar4;
  param_2[1] = param_2[1] + param_4;
  param_2[2] = (long)plVar3;
  FUN_10b8b002c(&uStack_78);
  *param_1 = *param_2 + (param_3 - lVar6);
  return;
}



/* Entry: 10b998e60; end: 10b998ea3;  */

void FUN_10b998e60(void)

{
  undefined1 in_w8;
  long in_x9;
  ulong in_x10;
  ulong in_x11;
  
  *(undefined1 *)(in_x9 + (in_x11 & in_x10) + (in_x11 & 7) + 1) = in_w8;
  return;
}



/* Entry: 10b998ea4; end: 10b998efb;  */

undefined8 FUN_10b998ea4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x40))();
  if ((int)plVar1 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  else {
    (*(code *)*param_2)(param_2);
  }
  return 1;
}



/* Entry: 10b998efc; end: 10b998f8b;  */

void FUN_10b998efc(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined **extraout_x8;
  int extraout_w11;
  undefined **appuStack_90 [2];
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcStack_58 = FUN_10b99904c;
  ppuStack_50 = &PTR_DAT_110d7e060;
  uStack_48 = param_1;
  FUN_10b998ea4(param_1,&pcStack_58);
  pppuVar1 = &ppuStack_50;
  (*(code *)*ppuStack_50)();
  func_0x000107c3a2bc(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_50)(&ppuStack_50);
    func_0x00010b9992e8();
    func_0x000107c3a2e4();
    func_0x00010b998fd4();
    if ((appuStack_90[0] != (undefined **)0x0) && (appuStack_90[0][2] != (undefined *)0x0)) {
      do {
        func_0x000107c3a2c0();
        appuStack_90[0] = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *pppuVar1 = appuStack_90[0];
    FUN_10b999254(appuStack_90);
    return;
  }
  return;
}



/* Entry: 10b998f8c; end: 10b99900f;  */

void FUN_10b998f8c(void)

{
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  long alStack_30 [2];
  
  func_0x000107c3a2e4();
  func_0x00010b998fd4();
  if ((alStack_30[0] != 0) && (*(long *)(alStack_30[0] + 0x10) != 0)) {
    do {
      func_0x000107c3a2c0();
      alStack_30[0] = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x19 = alStack_30[0];
  FUN_10b999254(alStack_30);
  return;
}



/* Entry: 10b999010; end: 10b999017;  */

void FUN_10b999010(void)

{
  return;
}



/* Entry: 10b999018; end: 10b99904b;  */

undefined * FUN_10b999018(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  undefined *puVar2;
  
  FUN_10b999bf0();
  ppuVar1 = &PTR___tlv_bootstrap_11340e200;
  (*(code *)PTR___tlv_bootstrap_11340e200)(param_1);
  puVar2 = *ppuVar1;
  if (extraout_x8 != (undefined *)0x0) {
    puVar2 = extraout_x8;
  }
  return puVar2;
}



/* Entry: 10b99904c; end: 10b999067;  */

void FUN_10b99904c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b999058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
  return;
}



/* Entry: 10b999068; end: 10b99908b;  */

void FUN_10b999068(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b99908c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b99908c; end: 10b999107;  */

void FUN_10b99908c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *extraout_x8;
  int extraout_w11;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  func_0x000107c3a2b8();
  FUN_10b999124(auStack_50,1);
  FUN_10b999178(uStack_40,param_2,param_3);
  func_0x000107c3a2e8();
  FUN_10b999108();
  FUN_10b999244(auStack_50);
  func_0x000107c3a2bc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b999244();
  func_0x00010b9992e8();
  *extraout_x8 = puVar2;
  extraout_x8[1] = param_2;
  puVar1 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2 + 8;
  }
  if ((puVar1 != (undefined1 *)0x0) &&
     ((*(long *)(puVar1 + 8) == 0 || (*(long *)(*(long *)(puVar1 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_10b999108;
    lStack_68 = extraout_x8[1];
    puStack_70 = puVar2;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x000107c3a2c0();
      } while (extraout_w11 != 0);
    }
    func_0x000107c3a2d4();
    func_0x000107c278ec(&puStack_70);
    return;
  }
  return;
}


