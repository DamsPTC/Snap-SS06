/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107367590; end: 1073675cf;  */

void FUN_107367590(void)

{
  ulong unaff_x20;
  
  func_0x00010736a8f0();
  FUN_107325184();
  func_0x00010736acb8();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010736aacc();
    FUN_1073675d0();
  }
  func_0x00010736ac94();
  func_0x00010736a8d0();
  return;
}



/* Entry: 1073675d0; end: 1073675eb;  */

void FUN_1073675d0(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1073675ec; end: 107367637;  */

void FUN_1073675ec(void)

{
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010736a8f0();
  FUN_107367638();
  func_0x00010736acb8();
  if ((unaff_x20 & 1) != 0) {
    FUN_1073677c0(*(long *)(unaff_x21 + 8) + unaff_x22 * 0x58);
  }
  func_0x00010736ac94();
  func_0x00010736a8d0();
  return;
}



/* Entry: 107367638; end: 1073676a3;  */

void FUN_107367638(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x00010736a900();
  func_0x00010736a8c4();
  func_0x00010736a5b8();
  func_0x00010736a5c8();
  while( true ) {
    func_0x00010736a834();
    while (unaff_x28 != 0) {
      func_0x00010736a66c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010736afbc();
    }
    func_0x00010736a78c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010736afb0();
  }
  func_0x00010736aa0c();
  FUN_1073676a4();
  func_0x00010736ade8();
  return;
}



/* Entry: 1073676a4; end: 107367717;  */

void FUN_1073676a4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736a570();
  func_0x00010736ac24();
  if ((extraout_x9 == 0) && (func_0x00010736ad5c(), !(bool)in_ZR)) {
    func_0x00010736ad50();
    if (((bool)in_CY) && (func_0x00010736a750(), (bool)in_CY)) {
      func_0x00010ae6c914();
    }
    else {
      func_0x00010736a8e0();
      FUN_107367718();
    }
    func_0x00010736a7fc();
  }
  func_0x00010736a480();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736b00c();
  func_0x00010736a778();
  FUN_10732f6dc();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_107367784();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107367718; end: 107367783;  */

void FUN_107367718(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736b00c();
  func_0x00010736a778();
  FUN_10732f6dc();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_107367784();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107367784; end: 1073677af;  */

long FUN_107367784(long param_1)

{
  long unaff_x19;
  
  func_0x00010736abf4();
  FUN_1073405a0(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x00010736ae3c();
  func_0x00010726e078();
  func_0x00010736a9f4();
  return unaff_x19;
}



/* Entry: 1073677b0; end: 1073677bf;  */

long FUN_1073677b0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1073677c0; end: 1073677df;  */

void FUN_1073677c0(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1073677e0; end: 1073677ff;  */

void FUN_1073677e0(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x27;
  
  func_0x00010736a51c();
  func_0x00010736a7d4();
  func_0x00010736a900();
  func_0x00010736a58c();
  while( true ) {
    func_0x00010736a7e4();
    while (unaff_x27 != 0) {
      func_0x00010736a7b8();
      if ((int)param_1 != 0) {
        func_0x00010736af48();
        return;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010736af54();
  }
  return;
}



/* Entry: 107367800; end: 107367833;  */

void FUN_107367800(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010736a9c0();
  func_0x000107364ffc();
  func_0x00010736ac18();
  uVar1 = param_3[2];
  param_3[3] = param_3[3] + -1;
  lVar3 = *param_3;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 107367834; end: 107367893;  */

void FUN_107367834(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x27;
  
  func_0x00010736a900();
  func_0x00010736a58c();
  while( true ) {
    func_0x00010736a7e4();
    while (unaff_x27 != 0) {
      func_0x00010736a7b8();
      if ((int)param_1 != 0) {
        func_0x00010736af48();
        return;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010736af54();
  }
  return;
}



/* Entry: 107367894; end: 10736789b;  */

void FUN_107367894(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10736789c; end: 1073678f7;  */

void FUN_10736789c(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_1073678f8();
  if ((uVar3 & 1) != 0) {
    FUN_107367af0(param_2[1] + (long)plVar2 * 0x40,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x40;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 1073678f8; end: 10736798f;  */

ulong FUN_1073678f8(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  long unaff_x19;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_d8;
  undefined8 uVar5;
  
  func_0x00010736a900();
  func_0x00010736a8c4();
  func_0x00010736a5b8();
  func_0x00010736a5c8();
  uVar3 = extraout_x8;
  while( true ) {
    uVar3 = uVar3 & unaff_x25;
    uVar5 = *(undefined8 *)(unaff_x24 + uVar3);
    uVar4 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                     CONCAT16(-((char)((ulong)uVar5 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)),
                              CONCAT15(-((char)((ulong)uVar5 >> 0x28) ==
                                        (char)((ulong)unaff_d8 >> 0x28)),
                                       CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                 (char)((ulong)unaff_d8 >> 0x20)),
                                                CONCAT13(-((char)((ulong)uVar5 >> 0x18) ==
                                                          (char)((ulong)unaff_d8 >> 0x18)),
                                                         CONCAT12(-((char)((ulong)uVar5 >> 0x10) ==
                                                                   (char)((ulong)unaff_d8 >> 0x10)),
                                                                  CONCAT11(-((char)((ulong)uVar5 >>
                                                                                   8) ==
                                                                            (char)((ulong)unaff_d8
                                                                                  >> 8)),
                                                                           -((char)uVar5 ==
                                                                            (char)unaff_d8)))))))) &
            0x8080808080808080;
    while (uVar4 != 0) {
      uVar1 = uVar4 >> 7;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar2 = *(ulong *)(unaff_x19 + 8);
      unaff_x22 = uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x25;
      func_0x000104c32db4();
      if ((uVar2 & 1) != 0) {
        return unaff_x22;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 8;
    uVar3 = unaff_x23 + uVar3;
  }
  func_0x00010736aa0c();
  FUN_107367990();
  func_0x00010736ade8();
  return unaff_x22;
}



/* Entry: 107367990; end: 107367a03;  */

void FUN_107367990(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010736a570();
  func_0x00010736ac24();
  if ((extraout_x9 == 0) && (func_0x00010736ad5c(), !(bool)in_ZR)) {
    func_0x00010736ad50();
    if (((bool)in_CY) && (func_0x00010736a750(), (bool)in_CY)) {
      func_0x00010736a8b0();
    }
    else {
      func_0x00010736a8e0();
      FUN_107367a04();
    }
    func_0x00010736a7fc();
  }
  func_0x00010736a480();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736b00c();
  func_0x00010736a778();
  FUN_107367a70();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x000107367ab8(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107367a04; end: 107367a6f;  */

void FUN_107367a04(long param_1)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010736b00c();
  func_0x00010736a778();
  FUN_107367a70();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x000107367ab8(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107367a70; end: 107367adf;  */

void FUN_107367a70(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  long *unaff_x19;
  ulong uVar2;
  undefined1 uStack_21;
  
  func_0x00010736ad70();
  uVar2 = extraout_x8 + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + extraout_x8 * 0x40);
  *unaff_x19 = (long)(puVar1 + 8);
  unaff_x19[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0();
  return;
}



/* Entry: 107367ae0; end: 107367aef;  */

long FUN_107367ae0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107367af0; end: 107367b07;  */

void FUN_107367af0(long param_1)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 107367b08; end: 107367b93;  */

long FUN_107367b08(void)

{
  int iVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_d8;
  undefined8 uVar5;
  
  func_0x00010736a900();
  func_0x00010736a58c();
  uVar2 = extraout_x8;
  while( true ) {
    uVar2 = uVar2 & unaff_x22;
    uVar5 = *(undefined8 *)(unaff_x23 + uVar2);
    for (uVar3 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar5 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)
                                    ),CONCAT15(-((char)((ulong)uVar5 >> 0x28) ==
                                                (char)((ulong)unaff_d8 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                         (char)((ulong)unaff_d8 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar5 >> 0x18) ==
                                                                  (char)((ulong)unaff_d8 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar5 >>
                                                                                  0x10) ==
                                                                           (char)((ulong)unaff_d8 >>
                                                                                 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar5 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar5 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar2 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & unaff_x22;
      iVar1 = unaff_w24 + (int)uVar4 * 0x40;
      func_0x000104c32db4();
      if (iVar1 != 0) {
        return *unaff_x19 + uVar4;
      }
    }
    func_0x00010736a78c();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 8;
    uVar2 = unaff_x21 + uVar2;
  }
  return 0;
}



/* Entry: 107367b94; end: 107367bbf;  */

undefined8 * FUN_107367b94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a5990;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 107367bc0; end: 107367bd3;  */

void FUN_107367bc0(void)

{
  FUN_107367b94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107367bd4; end: 107367bf7;  */

long FUN_107367bd4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736ab74();
  func_0x00010736a934();
  *param_1 = &PTR_FUN_1109a5990;
  FUN_107366af4(param_1 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return unaff_x20;
}



/* Entry: 107367bf8; end: 107367c1b;  */

void FUN_107367bf8(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736a934(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109a5990;
  FUN_107366af4(param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107367c1c; end: 107367c63;  */

void FUN_107367c1c(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  iVar1 = (int)auStack_30;
  func_0x00010736a8c4();
  func_0x00010736aeec();
  func_0x00010736ae54();
  if (iVar1 != 0) {
    FUN_1073a7290(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x19 + 0x20),
                  *(undefined8 *)(unaff_x19 + 0x28));
  }
  func_0x00010736aa18();
  return;
}



/* Entry: 107367c64; end: 107367c8b;  */

void FUN_107367c64(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a59f0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107367c8c; end: 107367c97;  */

undefined ** FUN_107367c8c(void)

{
  return &PTR_DAT_1109a59f0;
}



/* Entry: 107367c98; end: 107367cf7;  */

void FUN_107367c98(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736a934();
  *param_1 = &PTR_FUN_1109a5990;
  FUN_107366af4(param_1 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107367cf8; end: 107367d0b;  */

void FUN_107367cf8(void)

{
  func_0x000107367ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107367d0c; end: 107367d43;  */

undefined8 FUN_107367d0c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_107367e04();
  return uVar1;
}



/* Entry: 107367d44; end: 107367d67;  */

void FUN_107367d44(long param_1,undefined8 param_2)

{
  func_0x00010736a864(param_2,param_1 + 8);
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x0001072c0298();
  return;
}



/* Entry: 107367d68; end: 107367dcf;  */

void FUN_107367d68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_3;
  func_0x00010736a8c4();
  if ((*(char *)(lVar1 + 8) != '\0') && (*(char *)(*(long *)(param_1 + 8) + 0x148) == '\x01')) {
    FUN_1073671b4(param_3);
    func_0x00010736aa94();
    func_0x00010736af84();
    FUN_107363380();
  }
  func_0x00010736af78();
                    /* WARNING: Could not recover jumptable at 0x00010736acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 107367dd0; end: 107367df7;  */

void FUN_107367dd0(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5a70);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107367df8; end: 107367e03;  */

undefined ** FUN_107367df8(void)

{
  return &PTR_DAT_1109a5a70;
}



/* Entry: 107367e04; end: 107367e3b;  */

void FUN_107367e04(void)

{
  func_0x00010736a864();
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x0001072c0298();
  return;
}



/* Entry: 107367e3c; end: 107367e5f;  */

undefined8 FUN_107367e3c(undefined8 param_1)

{
  func_0x00010736adbc();
  FUN_107327aec();
  return param_1;
}



/* Entry: 107367e60; end: 107367e73;  */

void FUN_107367e60(void)

{
  FUN_107367e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107367e74; end: 107367ea7;  */

undefined8 FUN_107367e74(undefined8 param_1)

{
  func_0x00010736ad68();
  FUN_107367f1c();
  return param_1;
}



/* Entry: 107367ea8; end: 107367ee7;  */

undefined8 FUN_107367ea8(long param_1,undefined8 param_2)

{
  func_0x00010736adbc(param_2,param_1 + 8);
  FUN_107325f14();
  return param_2;
}



/* Entry: 107367ee8; end: 107367f0f;  */

void FUN_107367ee8(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5af0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107367f10; end: 107367f1b;  */

undefined ** FUN_107367f10(void)

{
  return &PTR_DAT_1109a5af0;
}



/* Entry: 107367f1c; end: 107367f6b;  */

undefined8 FUN_107367f1c(undefined8 param_1)

{
  func_0x00010736adbc();
  FUN_107325f14();
  return param_1;
}



/* Entry: 107367f6c; end: 107367f7f;  */

void FUN_107367f6c(void)

{
  func_0x000107367f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107367f80; end: 107367fa3;  */

undefined8 FUN_107367f80(void)

{
  undefined8 unaff_x19;
  
  func_0x00010736ad68();
  func_0x00010736a864();
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x000104c2fe00();
  return unaff_x19;
}



/* Entry: 107367fa4; end: 107367fc7;  */

void FUN_107367fa4(long param_1,undefined8 param_2)

{
  func_0x00010736a864(param_2,param_1 + 8);
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x000104c2fe00();
  return;
}



/* Entry: 107367fc8; end: 1073680b3;  */

void FUN_107367fc8(undefined8 param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x00010736a6c0();
  if (*(int *)(param_2 + 0x10) == 0) {
    uStack_38 = extraout_x8;
    func_0x00010736a8c4();
    uVar1 = 0;
    if (*(char *)(param_3 + 8) == '\x01') {
      lVar2 = *(long *)(unaff_x19 + 8);
      uVar1 = *(char *)(lVar2 + 0x148) == '\x01';
      if ((bool)uVar1) {
        func_0x000104c2fe00(auStack_70,unaff_x19 + 0x48);
        func_0x000107284aa4(auStack_88,auStack_70,1);
        FUN_1073637f4(lVar2,unaff_x19 + 0x10,auStack_88);
        func_0x00010726e078(auStack_88);
        func_0x000104c2f714(auStack_70);
      }
    }
    func_0x00010736af78();
    UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_00 + 0x28);
    func_0x00010736a534(uStack_38);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x000107368090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    func_0x00010736a534(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010736aa38();
  func_0x00010726e078();
  func_0x000104c2f714(auStack_70);
  func_0x00010736a888();
  func_0x00010736a920();
  func_0x00010736a8bc();
  func_0x00010736a6d0();
  return;
}



/* Entry: 1073680b4; end: 1073680db;  */

void FUN_1073680b4(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5b70);
  func_0x00010736a6d0();
  return;
}



/* Entry: 1073680dc; end: 1073680e7;  */

undefined ** FUN_1073680dc(void)

{
  return &PTR_DAT_1109a5b70;
}



/* Entry: 1073680e8; end: 107368143;  */

void FUN_1073680e8(void)

{
  func_0x00010736a864();
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x000104c2fe00();
  return;
}



/* Entry: 107368144; end: 107368157;  */

void FUN_107368144(void)

{
  func_0x000107368118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107368158; end: 10736818b;  */

undefined8 FUN_107368158(undefined8 param_1)

{
  func_0x00010736ad10();
  FUN_107368240();
  return param_1;
}



/* Entry: 10736818c; end: 1073681af;  */

void FUN_10736818c(long param_1,undefined8 param_2)

{
  func_0x00010736a864(param_2,param_1 + 8);
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x00010726fe1c();
  return;
}



/* Entry: 1073681b0; end: 107368233;  */

void FUN_1073681b0(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    return;
  }
  func_0x00010736a8c4();
  if (*(char *)(param_3 + 8) == '\x01') {
    if (*(char *)(*(long *)(unaff_x19 + 8) + 0x148) == '\x01') {
      FUN_1073637f4(*(long *)(unaff_x19 + 8),unaff_x19 + 0x10,unaff_x19 + 0x48);
    }
  }
  func_0x00010736af78();
                    /* WARNING: Could not recover jumptable at 0x000107368208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x30))();
  return;
}



/* Entry: 107368234; end: 10736823f;  */

undefined ** FUN_107368234(void)

{
  return &PTR_DAT_1109a5bf0;
}



/* Entry: 107368240; end: 107368277;  */

void FUN_107368240(void)

{
  func_0x00010736a864();
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x00010726fe1c();
  return;
}



/* Entry: 107368278; end: 10736827f;  */

void FUN_107368278(void)

{
  return;
}



/* Entry: 107368280; end: 1073682ab;  */

void FUN_107368280(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010736af04();
  *param_1 = &PTR_FUN_1109a5c10;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1073682ac; end: 1073682c7;  */

void FUN_1073682ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109a5c10;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073682c8; end: 107368373;  */

void FUN_1073682c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_a0 [112];
  char cStack_30;
  undefined8 uStack_28;
  
  func_0x00010736a6c0();
  puVar4 = param_2;
  uStack_28 = extraout_x8;
  if (*(int *)(param_2 + 2) == 0) {
    lVar1 = *(long *)(param_1 + 8);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    (**(code **)(*(long *)*param_2 + 0x38))(auStack_a0);
    cVar2 = *(char *)(lVar1 + 0x70);
    in_ZR = cVar2 == cStack_30;
    if ((bool)in_ZR) {
      if (cVar2 != '\0') {
        func_0x00010736af98();
        func_0x0001072f99ac();
      }
    }
    else if (cVar2 == '\0') {
      func_0x00010736af98();
      FUN_1073658a0();
    }
    else {
      func_0x000107269394(lVar1);
      *(undefined1 *)(lVar1 + 0x70) = 0;
    }
    func_0x0001072ba200(auStack_a0);
  }
  iVar3 = (int)puVar4;
  func_0x00010736a534(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  func_0x00010736a920();
  func_0x00010736a8bc();
  func_0x00010736a6d0();
  return;
}



/* Entry: 107368374; end: 10736839b;  */

void FUN_107368374(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5c70);
  func_0x00010736a6d0();
  return;
}



/* Entry: 10736839c; end: 1073683af;  */

undefined ** FUN_10736839c(void)

{
  return &PTR_DAT_1109a5c70;
}



/* Entry: 1073683b0; end: 1073683db;  */

void FUN_1073683b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010736abe4();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_1109a5c90;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1073683dc; end: 1073683ff;  */

void FUN_1073683dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109a5c90;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107368400; end: 10736849f;  */

void FUN_107368400(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  if (*(int *)(param_2 + 2) != 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*(long *)*param_2 + 0x40))(&lStack_40);
  if (*plVar1 != 0) {
    func_0x00010726e48c(plVar1);
    __ZdlPv(*plVar1);
  }
  plVar1[1] = lStack_38;
  *plVar1 = lStack_40;
  plVar1[2] = lStack_30;
  lStack_40 = 0;
  lStack_38 = 0;
  lStack_30 = 0;
  func_0x00010726e43c(&lStack_40);
  return;
}



/* Entry: 1073684a0; end: 1073684ab;  */

undefined ** FUN_1073684a0(void)

{
  return &PTR_DAT_1109a5cf0;
}



/* Entry: 1073684ac; end: 1073684d7;  */

undefined8 * FUN_1073684ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a5d10;
  func_0x000107364744(param_1 + 1);
  return param_1;
}



/* Entry: 1073684d8; end: 1073684eb;  */

void FUN_1073684d8(void)

{
  FUN_1073684ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073684ec; end: 10736851f;  */

undefined8 FUN_1073684ec(undefined8 param_1)

{
  func_0x00010736ab74();
  FUN_1073685a0();
  return param_1;
}



/* Entry: 107368520; end: 10736856b;  */

void FUN_107368520(long param_1,undefined8 param_2)

{
  func_0x00010736a8c4(param_2,param_1 + 8);
  func_0x00010736aa54(&PTR_FUN_1109a5d10);
  func_0x00010726fe1c();
  func_0x00010736af30();
  func_0x0001072c0298();
  return;
}



/* Entry: 10736856c; end: 107368593;  */

void FUN_10736856c(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5d70);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107368594; end: 10736859f;  */

undefined ** FUN_107368594(void)

{
  return &PTR_DAT_1109a5d70;
}



/* Entry: 1073685a0; end: 1073685e7;  */

void FUN_1073685a0(void)

{
  func_0x00010736a8c4();
  func_0x00010736aa54(&PTR_FUN_1109a5d10);
  func_0x00010726fe1c();
  func_0x00010736af30();
  func_0x0001072c0298();
  return;
}



/* Entry: 1073685e8; end: 10736860b;  */

undefined8 FUN_1073685e8(undefined8 param_1)

{
  func_0x00010736adac();
  func_0x000104c2f714();
  return param_1;
}



/* Entry: 10736860c; end: 10736861f;  */

void FUN_10736860c(void)

{
  FUN_1073685e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107368620; end: 107368643;  */

undefined8 FUN_107368620(undefined8 param_1)

{
  func_0x00010736ac84();
  func_0x00010736adac();
  func_0x000104c2fe00();
  return param_1;
}



/* Entry: 107368644; end: 107368683;  */

undefined8 FUN_107368644(long param_1,undefined8 param_2)

{
  func_0x00010736adac(param_2,param_1 + 8);
  func_0x000104c2fe00();
  return param_2;
}



/* Entry: 107368684; end: 1073686ab;  */

void FUN_107368684(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5df0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 1073686ac; end: 1073686b7;  */

undefined ** FUN_1073686ac(void)

{
  return &PTR_DAT_1109a5df0;
}



/* Entry: 1073686b8; end: 1073686ff;  */

undefined8 FUN_1073686b8(undefined8 param_1)

{
  func_0x00010736adac();
  func_0x000104c2fe00();
  return param_1;
}



/* Entry: 107368700; end: 107368713;  */

void FUN_107368700(void)

{
  func_0x0001073686dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107368714; end: 107368747;  */

undefined8 FUN_107368714(undefined8 param_1)

{
  func_0x00010736aa8c();
  FUN_1073687bc();
  return param_1;
}



/* Entry: 107368748; end: 107368787;  */

undefined8 FUN_107368748(long param_1,undefined8 param_2)

{
  func_0x00010736ad8c(param_2,param_1 + 8);
  func_0x00010726fe1c();
  return param_2;
}



/* Entry: 107368788; end: 1073687af;  */

void FUN_107368788(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5e70);
  func_0x00010736a6d0();
  return;
}



/* Entry: 1073687b0; end: 1073687bb;  */

undefined ** FUN_1073687b0(void)

{
  return &PTR_DAT_1109a5e70;
}



/* Entry: 1073687bc; end: 107368803;  */

undefined8 FUN_1073687bc(undefined8 param_1)

{
  func_0x00010736ad8c();
  func_0x00010726fe1c();
  return param_1;
}



/* Entry: 107368804; end: 107368817;  */

void FUN_107368804(void)

{
  func_0x0001073687e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107368818; end: 10736884b;  */

undefined8 FUN_107368818(undefined8 param_1)

{
  func_0x00010736aa8c();
  FUN_1073688c0();
  return param_1;
}



/* Entry: 10736884c; end: 10736888b;  */

undefined8 FUN_10736884c(long param_1,undefined8 param_2)

{
  func_0x00010736ad7c(param_2,param_1 + 8);
  FUN_1073658bc();
  return param_2;
}



/* Entry: 10736888c; end: 1073688b3;  */

void FUN_10736888c(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5ef0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 1073688b4; end: 1073688bf;  */

undefined ** FUN_1073688b4(void)

{
  return &PTR_DAT_1109a5ef0;
}



/* Entry: 1073688c0; end: 1073688e3;  */

undefined8 FUN_1073688c0(undefined8 param_1)

{
  func_0x00010736ad7c();
  FUN_1073658bc();
  return param_1;
}



/* Entry: 1073688e4; end: 1073688eb;  */

void FUN_1073688e4(void)

{
  return;
}



/* Entry: 1073688ec; end: 10736890b;  */

void FUN_1073688ec(undefined8 *param_1)

{
  func_0x00010736abe4();
  *param_1 = &PTR_FUN_1109a5f10;
  return;
}



/* Entry: 10736890c; end: 10736894b;  */

void FUN_10736890c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a5f10;
  return;
}



/* Entry: 10736894c; end: 107368973;  */

void FUN_10736894c(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5f70);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107368974; end: 107368987;  */

undefined ** FUN_107368974(void)

{
  return &PTR_DAT_1109a5f70;
}



/* Entry: 107368988; end: 1073689a7;  */

void FUN_107368988(undefined8 *param_1)

{
  func_0x00010736abe4();
  *param_1 = &PTR_DAT_1109a5f90;
  return;
}



/* Entry: 1073689a8; end: 1073689d7;  */

void FUN_1073689a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109a5f90;
  return;
}



/* Entry: 1073689d8; end: 1073689ff;  */

void FUN_1073689d8(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5ff0);
  func_0x00010736a6d0();
  return;
}


